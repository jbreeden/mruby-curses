module CUI
  class Window
    include Events
    include WindowDelegates

    # Instance Methods
    # ----------------

    attr_reader :win, :panel, :io
    attr_accessor :model

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

    def children
      # We need to know if our children are updated...
      # so only hand out copies of the array
      @children.dup
    end

    def add_child(child)
      unless @children.include?(child)
        @invalid = true
        @children.push(child)
      end
    end

    def add_children(*children)
      children.flatten.each { |c| add_child(c) }
    end

    def remove_child(child)
      @invalid = true if @children.include?(child)
      @children.delete(child)
    end

    def remove_children(*children)
      if children.empty? && !@children.empty?
        @invalid = true
        @children = []
      else
        children.flatten.each { |c| remove_child(c) }
      end
    end

    # Called by refresh, before the screen is updated.
    # Override to do any just-in-time output like addch/printw.
    # By default just calls render_children
    def render
      render_children
    end

    def render_children
      @children.each { |c| c.render }
    end

    # By default only calls layout_children
    def layout(*args)
      layout_children
    end

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

    def mv(l, c)
      unless begy == l && begx == c
        @invalid = true
        Curses.move_panel(@panel, l, c)
      end
    end

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

    def focused?
      @focused
    end

    def blur
      if focused?
        @focused = false
        if CUI::EventLoop.event_source == self
          CUI::EventLoop.event_source = nil
        end
        self.trigger('blur')
      end
    end

    def hide
      Curses.hide_panel(@panel)
    end

    def show
      Curses.show_panel(@panel)
    end
  end

  def self.screen
    unless @screen
      @screen = CUI::Window.new(Curses.stdscr)
      Curses.bottom_panel(@screen.panel)
    end
    @screen
  end
end
