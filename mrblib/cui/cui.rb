module CUI
  def self.init
    ENV['ESCDELAY'] ||= '10'
    Curses.initscr
    Curses.raw # Don't generate signals, let the app handle all key presses.
    Curses.noecho
    Curses.start_color
    Curses.use_default_colors
    Curses.noqiflush
  end

  def self.run
    EventLoop.run
  end

  def self.exit
    EventLoop.exit
  end
end
