mruby-curses
============

Curses bindings for MRuby. Links against PDCurses or NCurses.

Demo
----

![Demo GIF](/demo.gif?raw=true)

Building
--------

You can checkout an example build_config.rb for MRuby + mruby-curses [here](https://github.com/jbreeden/mruby/blob/curses/build_config.rb).

The exact steps are as follows:

- Download/clone [MRuby](https://github.com/mruby)
- Download/clone `mruby-curses`
- Add the directory containing your system's curses headers to `include_paths`
  in MRuby's `build_config.rb` file.
  + Ex: Building with NCurses  
    `conf.cc.include_paths << 'PATH/TO/NCURSES/include'`
  + Ex: Building with PDCurses  
    `conf.cc.include_paths << 'PATH/TO/PDCURSES'`
- Add the directory containing your system's curses libraries to `library_paths`,
  then add the library names to `libraries` in MRuby's `build_config.rb` file, .
  + Ex: Build against ncurses  
    `conf.linker.library_paths = ['PATH/TO/NCURSES/lib']`  
    `conf.linker.libraries = %w(panel ncurses)`
  + Ex: Building against pdcurses  
    _I renamed pdcurses.a to libpdcurses.a so the linker would find it under the -L directories_  
    `conf.linker.library_paths = ['PATH/TO/PDCURSES']`  
    `conf.linker.libraries = %w(pdcurses)`
- Run `rake` in MRuby's root directory.

You can try running the scripts in the `examples/` directory to test your build.

_Note for Mac users: If you get errors like "Error opening terminal xterm-256color" that means
ncurses can't find your terminfo files. You can get around this by `make install`-ing ncurses,
or by setting the environment variable `TERMINFO=/usr/shar/terminfo`. You can do this within
your appliction, as long as it's set before you call `Curses.init`._

On windows, building pdcurses with clang (via mingw32-make & cygwin) then linking
to MRuby (also building with clang) is very straightforward and "just works."

API
---

The main API is 1-to-1 with the C API for curses. Parameters map the way you would expect (char* to String, int to Fixnum, etc). A point of note is that characters in curses are handled as numbers (same as the MRI Curses gem). Though, the *addch family of functions will allow you to pass a single character string as well.

The bound functions are listed below. If you're new to curses development, you can find documentation online.
You might start [here](http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/) or [here](http://pdcurses.sourceforge.net/doc/).

There is also a higher-level, Backbone.js inspired framework included called `CUI`. `CUI` includes:

- Easy initialization of curses for raw input `CUI.init`
- An `Events` module that can be mixed in to any class
  + Just like Backbone, CUI itself mixis in `Events`
- An event loop
  + Triggers all input events on the focused window, if any, and `CUI` itself.
  + Resizes all Windows when the terminal is resized
    - Calls the window's `layout` method and sets `@invalid` to true, which you can check in your `Window#render` method.
  + Re-renders any invalid windows at ~50fps.
- A `Model` class, which provides the `model_attr` class macro
  + `model_attr`s are just like `attr_accessor`s, but they trigger change events on changes.
  + This allows the familiar Backone idiom in your views  
    `@model.on(:change) { @invalid = true } # Make sure we re-render on the next render frame`
- A `Window` class used to create views
  + Each window is backed by a curses panel, which allows curses to render overlapping windows correctly.
  + The `layout` and `render` methods can be overridden to customize interaction with the event loop.
  + All windows have an `io` property, which is a `WindowIO` object.
- A `WindowIO` class
  + Provides higher-level window output routines built on the `Curses` module.
- An example `TextInput` class
  + A single-line text input window
  + Gets input asynchronously from the event loop, rather than in a blocking manner like `Curses.getstr`

`CUI` is meant to provide the basic building blocks that I think all curses applicaitons are going to need, and nothing more. Have a peek at `examples/cui_windows.rb` to see it in action. A larger example is available [here](https://github.com/jbreeden/mruby-bin-git-curses). CUI is brand new, so any bug reports are appreciated!

Bound Functions
---------------

- `Curses::addch`
- `Curses::addnstr`
- `Curses::addstr`
- `Curses::assume_default_colors`
- `Curses::attroff`
- `Curses::attron`
- `Curses::attrset`
- `Curses::baudrate`
- `Curses::beep`
- `Curses::bkgd`
- `Curses::bkgdset`
- `Curses::border`
- `Curses::bottom_panel`
- `Curses::box`
- `Curses::can_change_color`
- `Curses::cbreak`
- `Curses::clear`
- `Curses::clearok`
- `Curses::clrtobot`
- `Curses::clrtoeol`
- `Curses::copywin`
- `Curses::curs_set`
- `Curses::curses_version`
- `Curses::def_prog_mode`
- `Curses::def_shell_mode`
- `Curses::del_curterm`
- `Curses::del_panel`
- `Curses::delay_output`
- `Curses::delch`
- `Curses::deleteln`
- `Curses::delscreen`
- `Curses::delwin`
- `Curses::derwin`
- `Curses::doupdate`
- `Curses::dupwin`
- `Curses::echo`
- `Curses::echochar`
- `Curses::endwin`
- `Curses::erase`
- `Curses::erasechar`
- `Curses::filter`
- `Curses::flash`
- `Curses::flushinp`
- `Curses::getattrs`
- `Curses::getbegx`
- `Curses::getbegy`
- `Curses::getbkgd`
- `Curses::getcurx`
- `Curses::getcury`
- `Curses::getmaxx`
- `Curses::getmaxy`
- `Curses::getnstr`
- `Curses::getparx`
- `Curses::getpary`
- `Curses::getstr`
- `Curses::halfdelay`
- `Curses::has_colors`
- `Curses::has_ic`
- `Curses::has_il`
- `Curses::has_key`
- `Curses::hide_panel`
- `Curses::hline`
- `Curses::idcok`
- `Curses::idlok`
- `Curses::immedok`
- `Curses::inch`
- `Curses::init_color`
- `Curses::init_pair`
- `Curses::initscr`
- `Curses::innstr`
- `Curses::insch`
- `Curses::insdelln`
- `Curses::insertln`
- `Curses::insnstr`
- `Curses::insstr`
- `Curses::instr`
- `Curses::intrflush`
- `Curses::is_linetouched`
- `Curses::is_wintouched`
- `Curses::isendwin`
- `Curses::keyname`
- `Curses::keypad`
- `Curses::killchar`
- `Curses::leaveok`
- `Curses::longname`
- `Curses::meta`
- `Curses::mouseinterval`
- `Curses::move`
- `Curses::move_panel`
- `Curses::mvaddch`
- `Curses::mvaddnstr`
- `Curses::mvaddstr`
- `Curses::mvcur`
- `Curses::mvdelch`
- `Curses::mvderwin`
- `Curses::mvgetch`
- `Curses::mvgetnstr`
- `Curses::mvgetstr`
- `Curses::mvhline`
- `Curses::mvinch`
- `Curses::mvinnstr`
- `Curses::mvinsch`
- `Curses::mvinsnstr`
- `Curses::mvinsstr`
- `Curses::mvinstr`
- `Curses::mvprintw`
- `Curses::mvscanw`
- `Curses::mvvline`
- `Curses::mvwaddch`
- `Curses::mvwaddnstr`
- `Curses::mvwaddstr`
- `Curses::mvwdelch`
- `Curses::mvwgetch`
- `Curses::mvwgetnstr`
- `Curses::mvwgetstr`
- `Curses::mvwhline`
- `Curses::mvwin`
- `Curses::mvwinch`
- `Curses::mvwinnstr`
- `Curses::mvwinsch`
- `Curses::mvwinsnstr`
- `Curses::mvwinsstr`
- `Curses::mvwinstr`
- `Curses::mvwprintw`
- `Curses::mvwscanw`
- `Curses::mvwvline`
- `Curses::napms`
- `Curses::new_panel`
- `Curses::newpad`
- `Curses::newwin`
- `Curses::nl`
- `Curses::nocbreak`
- `Curses::nodelay`
- `Curses::noecho`
- `Curses::nonl`
- `Curses::noqiflush`
- `Curses::noraw`
- `Curses::notimeout`
- `Curses::overlay`
- `Curses::overwrite`
- `Curses::panel_above`
- `Curses::panel_below`
- `Curses::panel_hidden`
- `Curses::panel_window`
- `Curses::pechochar`
- `Curses::pnoutrefresh`
- `Curses::prefresh`
- `Curses::printw`
- `Curses::putp`
- `Curses::qiflush`
- `Curses::raw`
- `Curses::redrawwin`
- `Curses::refresh`
- `Curses::replace_panel`
- `Curses::reset_prog_mode`
- `Curses::reset_shell_mode`
- `Curses::resetty`
- `Curses::resize_term`
- `Curses::savetty`
- `Curses::scanw`
- `Curses::scr_dump`
- `Curses::scr_init`
- `Curses::scr_restore`
- `Curses::scr_set`
- `Curses::scrl`
- `Curses::scroll`
- `Curses::scrollok`
- `Curses::set_curterm`
- `Curses::set_term`
- `Curses::setscrreg`
- `Curses::show_panel`
- `Curses::slk_attroff`
- `Curses::slk_attron`
- `Curses::slk_attrset`
- `Curses::slk_clear`
- `Curses::slk_color`
- `Curses::slk_init`
- `Curses::slk_label`
- `Curses::slk_noutrefresh`
- `Curses::slk_refresh`
- `Curses::slk_restore`
- `Curses::slk_set`
- `Curses::slk_touch`
- `Curses::standend`
- `Curses::standout`
- `Curses::start_color`
- `Curses::subpad`
- `Curses::subwin`
- `Curses::syncok`
- `Curses::termattrs`
- `Curses::termname`
- `Curses::tgetent`
- `Curses::tgetflag`
- `Curses::tgetnum`
- `Curses::tgoto`
- `Curses::tigetflag`
- `Curses::tigetnum`
- `Curses::tigetstr`
- `Curses::timeout`
- `Curses::top_panel`
- `Curses::touchline`
- `Curses::touchwin`
- `Curses::tparm`
- `Curses::typeahead`
- `Curses::unctrl`
- `Curses::ungetmouse`
- `Curses::untouchwin`
- `Curses::update_panels`
- `Curses::use_default_colors`
- `Curses::use_env`
- `Curses::vidattr`
- `Curses::vline`
- `Curses::waddch`
- `Curses::waddnstr`
- `Curses::waddstr`
- `Curses::wattroff`
- `Curses::wattron`
- `Curses::wattrset`
- `Curses::wbkgd`
- `Curses::wbkgdset`
- `Curses::wborder`
- `Curses::wclear`
- `Curses::wclrtobot`
- `Curses::wclrtoeol`
- `Curses::wcursyncup`
- `Curses::wdelch`
- `Curses::wdeleteln`
- `Curses::wechochar`
- `Curses::wenclose`
- `Curses::werase`
- `Curses::wgetch`
- `Curses::wgetnstr`
- `Curses::wgetstr`
- `Curses::whline`
- `Curses::winch`
- `Curses::winnstr`
- `Curses::winsch`
- `Curses::winsdelln`
- `Curses::winsertln`
- `Curses::winsnstr`
- `Curses::winsstr`
- `Curses::winstr`
- `Curses::wmove`
- `Curses::wnoutrefresh`
- `Curses::wprintw`
- `Curses::wredrawln`
- `Curses::wrefresh`
- `Curses::wresize`
- `Curses::wscanw`
- `Curses::wscrl`
- `Curses::wsetscrreg`
- `Curses::wstandend`
- `Curses::wstandout`
- `Curses::wsyncdown`
- `Curses::wsyncup`
- `Curses::wtimeout`
- `Curses::wtouchln`
