module CUI
class WindowIO
  include CUI::WindowDelegates

  def initialize(window)
    if window.kind_of?(CUI::Window)
      @window = window
    else
      raise ArgumentError.new("WindowIO.new expected a CUI::Window, but got a #{win.class}")
    end
  end

  def win
    # The WindowDelegates work on the win attr of self.
    # During resize events, windows may be replaced, so we
    # must always delegate to the win attr of the Window
    # we're wrapping to get the current curses handle.
    @window.win
  end

  def hrule
    goto_col(0)
    hline(0, width)
  end

  def vrule
    goto_line(0)
    vline(0, height)
  end

  def last_line
    maxy - 1
  end

  def last_col
    maxx - 1
  end

  def cols_right
    maxx - getx
  end

  def cols_left
    getx
  end

  def lines_below
    maxy - gety
  end

  def lines_above
    gety
  end

  # Clear the entire line, and move to the first column
  def clear_line
    prev_line = line
    write_line(' ' * cols)
    goto(prev_line, 0)
  end

  # Clear the line to the left of the cursor, and move to the first column
  def clear_line_left
    prev_line = line
    write_line_left(' ' * cols_left)
    goto(prev_line, 0)
  end

  # Clear line to the right of the cursor, and keep the cursor where it is
  def clear_line_right
    prev_line = line
    prev_col = col
    write_line_right(' ' * cols_right)
    goto(prev_line, prev_col)
  end

  # From the first column, write the given str until a "\n" or the last column is reached
  def write_line(str, attrs={})
    goto_col(0)
    write_line_right(str)
  end

  # From the current position column, write the given str until a "\n" or the last column is reached
  def write_line_right(str)
    if cols_right > 1 && str
      str = str[0...(str.index("\n") || str.length)]
      visible_range = (0...cols_right)
      txt = str[visible_range]
      printw(txt) if txt.kind_of?(String) && txt.length > 0
    end
  end

  # From the current position, write str, up to the first "\n", to the left of the cursor.
  # (the last character will be printed at the current cursor position,
  #  as with the first character in write_line_right/wprintw)
  def write_line_left(str)
    if cols_left > 1 && str
      str = str[0...(str.index("\n") || str.length)]
      if str.length > cols_left
        visible_range = (0...cols_left)
      else
        visible_range = (0...str.length)
      end
      go_left(visible_range.end - 1)
      txt = str[visible_range]
      printw(txt) if txt.kind_of?(String) && txt.length > 0
    end
  end

  def go_left(n=1)
    goto_col(col - n)
  end

  def go_right(n=1)
    goto_col(col + n)
  end

  def go_up(n=1)
    goto_line(line - n)
  end

  def go_down(n=1)
    goto_line(line + n)
  end

  def goto_col(col)
    move(gety, col)
  end

  def goto_last_col
    goto_col(last_col)
  end

  def goto_line(line)
    move(line, getx)
  end

  def goto_last_line
    goto_line(last_line)
  end

  def goto(line, col)
    move(line, col)
  end
end
end
