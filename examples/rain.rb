# /****************************************************************************
#  * Copyright (c) 2002 Free Software Foundation, Inc.                        *
#  *                                                                          *
#  * Permission is hereby granted, free of charge, to any person obtaining a  *
#  * copy of this software and associated documentation files (the            *
#  * "Software"), to deal in the Software without restriction, including      *
#  * without limitation the rights to use, copy, modify, merge, publish,      *
#  * distribute, distribute with modifications, sublicense, and/or sell       *
#  * copies of the Software, and to permit persons to whom the Software is    *
#  * furnished to do so, subject to the following conditions:                 *
#  *                                                                          *
#  * The above copyright notice and this permission notice shall be included  *
#  * in all copies or substantial portions of the Software.                   *
#  *                                                                          *
#  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
#  * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
#  * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
#  * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
#  * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
#  * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
#  * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
#  *                                                                          *
#  * Except as contained in this notice, the name(s) of the above copyright   *
#  * holders shall not be used in advertising or otherwise to promote the     *
#  * sale, use or other dealings in this Software without prior written       *
#  * authorization.                                                           *
#  ****************************************************************************/

# Description
# -----------
#
# This file is a 1-to-1 port of the rain.c demo that comes with PDCurses.
#

def next_j(j)
    if j == 0
      j = 4
    else
      j -= 1
    end

    if (Curses.has_colors())
        z = rand(3)
        color = Curses.COLOR_PAIR(z)
        color |= Curses::A_BOLD if (z != 0)
        Curses.attrset(color)
    end

    return j
end

x = y = j = r = c = seed = 0
xpos = []
ypos = []

$win = Curses.initscr

if Curses.has_colors
    bg = Curses::COLOR_BLACK
    Curses.start_color
    Curses.init_pair(1, Curses::COLOR_BLUE, bg)
    Curses.init_pair(2, Curses::COLOR_CYAN, bg)
end

Curses.nl
Curses.noecho
Curses.curs_set(0)
Curses.timeout(0)
Curses.keypad($win, '1')

r = Curses.LINES - 4
c = Curses.COLS - 4

5.downto(0).each do |i|
  xpos[i] = rand(c) + 2
  ypos[i] = rand(r) + 2
end

j = 0
loop {
    x = rand(c) + 2
    y = rand(r) + 2

    Curses.mvaddch(y, x, '.')

    Curses.mvaddch(ypos[j], xpos[j], 'o')

    j = next_j(j)
    Curses.mvaddch(ypos[j], xpos[j], 'O')

    j = next_j(j)
    Curses.mvaddch(ypos[j] - 1, xpos[j], '-')
    Curses.mvaddstr(ypos[j], xpos[j] - 1, "|.|")
    Curses.mvaddch(ypos[j] + 1, xpos[j], '-')

    j = next_j(j)
    Curses.mvaddch(ypos[j] - 2, xpos[j], '-')
    Curses.mvaddstr(ypos[j] - 1, xpos[j] - 1, "/ \\")
    Curses.mvaddstr(ypos[j], xpos[j] - 2, "| O |")
    Curses.mvaddstr(ypos[j] + 1, xpos[j] - 1, "\\ /")
    Curses.mvaddch(ypos[j] + 2, xpos[j], '-')

    j = next_j(j)
    Curses.mvaddch(ypos[j] - 2, xpos[j], ' ')
    Curses.mvaddstr(ypos[j] - 1, xpos[j] - 1, "   ")
    Curses.mvaddstr(ypos[j], xpos[j] - 2, "     ")
    Curses.mvaddstr(ypos[j] + 1, xpos[j] - 1, "   ")
    Curses.mvaddch(ypos[j] + 2, xpos[j], ' ')

    xpos[j] = x
    ypos[j] = y

    case Curses.wgetch($win)
    when 'Q'.ord, 'q'.ord
        Curses.curs_set(1)
        Curses.endwin
        exit 0
    when 's'.ord
        Curses.nodelay($win, false)
    when ' '.ord
        Curses.nodelay($win, true)
    when Curses::KEY_RESIZE
        Curses.resize_term(0, 0)
        Curses.erase
        r = Curses.LINES - 4
        c = Curses.COLS - 4
    end
    Curses.napms(50)
}
