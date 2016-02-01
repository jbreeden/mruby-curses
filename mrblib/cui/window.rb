module CUI
  class Window
    include Events
    include WindowDelegates

    # A Reference to the underlying Curses:Win object
    attr_reader :win
    
    # A Reference to the underlying Curses panel
    attr_reader :panel
    
    # A WindowIO object used for rendering content on this Window.
    attr_reader :io
    
    # The data model for this Window
    attr_accessor :model

    # Create a new window.
    #
    # - **opt** An options hash with these properties:
    #   + **lines** the height of the window, in lines
    #   + **cols** the width of the window, in columns
    #   + **begy** the start position in the y axis
    #   + **begx** the start position in the x axis
    #   + **model** if supplied, will be assigned to {#model}
    def initialize(*opt)
      super() # initialize events
      if opt[0].kind_of?(Hash)
        opt = opt[0]
        lines = opt[:lines] || Curses.LINES
        cols = opt[:cols] || Curses.COLS
        begy = opt[:begy] || 0
        begx = opt[:begx] || 0
        @model = opt[:model]
        @win = Curses.newwin(lines, cols, begy, begx)
        @panel = Curses.new_panel(@win)
      elsif opt[0].kind_of?(Curses::Win)
        @win = opt[0]
        @panel = Curses.new_panel(@win)
      else
        lines = opt[0] || Curses.LINES
        cols = opt[1] || Curses.COLS
        begy = opt[2] || 0
        begx = opt[3] || 0
        @win = Curses.newwin(lines, cols, begy, begx)
        @panel = Curses.new_panel(@win)
      end
      @io = CUI::WindowIO.new(self)
      @invalid = true
      @children = []
      Curses.keypad @win, true
      Curses.nodelay @win, true
    end

    # Returns a copy of the @children array
    def children
      # We need to know if our children are updated...
      # so only hand out copies of the array
      @children.dup
    end

    # Adds a child to this Window's @children array.
    # Note that @children acts like a Set, so a child will only appear in the
    # list once, regardless of how many times it was added.
    def add_child(child)
      unless @children.include?(child)
        @invalid = true
        @children.push(child)
      end
    end

    # Add multiple children at once
    def add_children(*children)
      children.flatten.each { |c| add_child(c) }
    end

    # Remove a child window
    def remove_child(child)
      @invalid = true if @children.include?(child)
      @children.delete(child)
    end

    # Remove multiple child windows
    def remove_children(*children)
      if children.empty? && !@children.empty?
        @invalid = true
        @children = []
      else
        children.flatten.each { |c| remove_child(c) }
      end
    end

    # Overridden by custom Windows to respond to render content into a window.
    # The default is to call `render` on all child Windows.
    # If override, you will need to call `render` on any children manually.
    # 
    # Example:
    # ```Ruby
    # def render
    #   if @invalid
    #     # Children added, screen resized, or data model changed
    #     io.goto(0, 0)
    #     io.write_line "Something happened!"
    #     render_children
    #   end
    # end
    # ```
    def render
      render_children
    end

    # Calls `render` on all child Windows.
    def render_children
      @children.each { |c| c.render }
    end

    # Overridden by custom Windows to respond to window resizing.
    # The default is to call `layout` on all child Windows.
    # If override, you will need to call `layout` on any children manually.
    def layout(*args)
      @invalid = true
      layout_children
    end

    # Calls `layout` on all child Windows
    def layout_children
      @children.each { |c| c.layout }
    end

    # No easy way to resize windows in panels according to the documentation.
    # Using the recommended workaround. See: http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/panels.html
    def resize(l, c)
      unless maxy == l && maxx == c
        @invalid = true
        y, x = self.gety, self.getx
        prev_begy, prev_begx = self.begy, self.begx
        old_win = Curses.panel_window(@panel)
        @win = Curses.newwin(l, c, prev_begy, prev_begx)
        self.move(y, x)
        Curses.replace_panel(@panel, @win)
        Curses.delwin(old_win)
        Curses.keypad @win, true
        Curses.nodelay @win, true
      end
    end

    # Move the cursor to line `l`, column `c`
    def mv(l, c)
      unless begy == l && begx == c
        @invalid = true
        Curses.move_panel(@panel, l, c)
      end
    end

    # Give this Window focus. Note that the window with focus will emit all
    # key events. This allows you to register specific key handlers for this
    # window, rather than listening for events triggered globally on `CUI` itself.
    def focus
      event_source = CUI::EventLoop.event_source
      CUI::EventLoop.event_source = self
      Curses.show_panel(@panel)
      Curses.top_panel(@panel)
      Curses.wmove(@win, self.gety, self.getx)
      unless focused?
        @focused = true
        @invalid = true
        if event_source && event_source != self
          event_source.blur
        end
        self.trigger('focus')
      end
    end

    # Returns `true` if this Window has focus
    def focused?
      !!@focused
    end

    # Remove focus from this window.
    def blur
      if focused?
        @focused = false
        if CUI::EventLoop.event_source == self
          CUI::EventLoop.event_source = nil
        end
        self.trigger('blur')
      end
    end

    # Stop showing this Window on the screen.
    def hide
      Curses.hide_panel(@panel)
    end

    # Start showing this Window on the screen.
    def show
      Curses.show_panel(@panel)
    end
  end

  # The main Window object. Any children of this Window will have
  # there `layout` and `render` methods called by the event loop.
  # Note the default of `Window#layout` and `Window#render` is to
  # call the same method on all child Windows.
  def self.screen
    unless @screen
      @screen = CUI::Window.new(Curses.stdscr)
      Curses.bottom_panel(@screen.panel)
    end
    @screen
  end
end
