module CUI
module WindowDelegates
  def self.win_delegate(name, *aliases)
    self.define_method(name) do |*args|
      Curses.send(name, win, *args)
    end
    aliases.flatten.each do |a|
      self.alias_method(a, name)
    end
  end

  win_delegate :wclear, :clear
  win_delegate :werase, :erase
  win_delegate :getattrs, :attrs
  win_delegate :getbegx, :begx
  win_delegate :getbegy, :begy
  win_delegate :getcury, :gety, :line
  win_delegate :getcurx, :getx, :col
  win_delegate :getmaxy, :maxy, :lines, :height
  win_delegate :getmaxx, :maxx, :cols, :width
  win_delegate :waddch, :addch
  win_delegate :waddstr, :addstr
  win_delegate :waddnstr, :addnstr
  win_delegate :wvline, :vline
  win_delegate :wprintw, :printw
  win_delegate :wmove, :move

  def del
    Curses.delwin(win)
    Curses.del_panel(win)
  end
  alias delete del

  def box(verch=0, horch=0)
    Curses.box(win, verch, horch)
  end

  def vline(ch=Curses::ACS_VLINE, n=0)
    Curses.wvline(win, ch, n)
  end
  alias wvline vline

  def hline(ch=Curses::ACS_HLINE, n=0)
    Curses.whline(win, ch, n)
  end
  alias whline hline

  def each_line(&block)
    if block_given?
      # Up to but not including...
      (0...maxy).each do |line_num|
        block[line_num]
      end
    else
      enum_for(:each_line)
    end
  end

  def each_col(&block)
    if block_given?
      # Up to but not including...
      (0...maxx).each do |col_num|
        block[col_num]
      end
    else
      enum_for(:each_col)
    end
  end

  def with_attr(attr)
    Curses.wattron(win, attr)
    yield if block_given?
    Curses.wattroff(win, attr)
  end
  alias with_color with_attr
  alias in_color with_attr

  def in_bold(&block)
    with_attr(Curses::A_BOLD, &block)
  end
end
end
