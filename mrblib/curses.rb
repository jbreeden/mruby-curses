class << Curses
  alias _c_addch addch
  def addch(*args)
    if args.last.kind_of?(String)
      last = args.pop
      args.push(last.ord)
    end
    _c_addch(*args)
  end

  alias _c_mvaddch mvaddch
  def mvaddch(*args)
    if args.last.kind_of?(String)
      last = args.pop
      args.push(last.ord)
    end
    _c_mvaddch(*args)
  end

  alias _c_mvwaddch mvwaddch
  def mvwaddch(*args)
    if args.last.kind_of?(String)
      last = args.pop
      args.push(last.ord)
    end
    _c_mvwaddch(*args)
  end

  alias _c_waddch waddch
  def waddch(*args)
    if args.last.kind_of?(String)
      last = args.pop
      args.push(last.ord)
    end
    _c_waddch(*args)
  end

  def getch
    self.wgetch(self.stdscr)
  end

  # Provide more rubiomatic names for funciton-like macros
  alias color_pair COLOR_PAIR
end
