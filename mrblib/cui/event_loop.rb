module CUI
module EventLoop
  extend Events
  self.initialize # Events expects a call to initialize

  @running = true
  @stop = false
  @t_last_render = (Time.now.to_f * 1000).to_i
  @frames_per_second = 50
  @ms_per_frame = (1000 / @frames_per_second).to_i
  @windows = []
  @event_source = nil

  class << self
    attr_accessor :running,
      :t_last_render,
      :frames_per_second,
      :ms_per_frame,
      :event_window,
      :windows,
      :event_source

    def run
      # Draw the initial screen
      render
      CUI.screen.layout

      loop {
        self.run_once
        Curses.napms(ms_per_frame/2)
        break if @stop
      }
    rescue Exception => ex
      Curses.endwin
      $stderr.puts("(#{ex.class}) #{ex}")
      $stderr.puts(ex.backtrace.map {|l| "  #{l}" }.join("\n"))
    else
      Curses.endwin
    end
    
    def run_once
      # Handle pending events (ERR, probably -1, just means no events yet).
      until (c = Curses.wgetch((@event_source && @event_source.win) || event_window.win)) == Curses::ERR
        if c == Curses::KEY_RESIZE
          CUI.screen.layout
        end
        event = KeyEvent.new(c)
        CUI.trigger(event)
        @event_source.trigger(event) if @event_source
        return nil if @stop
      end
      return nil if @stop
      
      ms_to_spare = ms_per_frame - ms_since_render
      if ms_to_spare <= 0
        render
      end
      nil
    end

    def event_source=(val)
      @event_source = val || event_window
    end

    # Somewhere to read events from when the client
    # hasn't set focus to any other window.
    def event_window
      unless @event_window
        @event_window = CUI::Window.new
        @event_window.hide
      end
      @event_window
    end

    def stop
      @stop = true
    end

    def render
      CUI.trigger('render:start')
      # Recursively call render down the UI tree from the root screen
      CUI.screen.render
      # Make sure the correct panel maintains focus
      if @event_source
        @event_source.focus
      end
      Curses.update_panels
      Curses.doupdate
      @t_last_render = now
      CUI.trigger('render:end')
    end

    def ms_since_render
      now - @t_last_render
    end

    def now
      (Time.now.to_f * 1000).to_i
    end
  end
end
end
