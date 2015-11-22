Curses.instance_eval do
  initscr
  unless has_colors
  	endwin
  	$stderr.puts "Your terminal does not support color\n"
  	raise 'No color!'
  end

  start_color

  init_pair(1, Curses::COLOR_RED, Curses::COLOR_BLACK)
  RED_ON_BLACK = color_pair(1)
  init_pair(2, Curses::COLOR_BLACK, Curses::COLOR_YELLOW)
  BLACK_ON_YELLOW = color_pair(2)
  init_pair(3, Curses::COLOR_BLUE, Curses::COLOR_WHITE)
  BLUE_ON_WHITE = color_pair(3)

  attron(RED_ON_BLACK)
  printw("Red on black\n")
  attroff(RED_ON_BLACK)

  attron(BLACK_ON_YELLOW)
  printw("Black on yello\n")
  attroff(BLACK_ON_YELLOW)

  attron(BLUE_ON_WHITE)
  printw("Blue on white\n")
  attroff(BLUE_ON_WHITE)

  getch()
  endwin()
end
