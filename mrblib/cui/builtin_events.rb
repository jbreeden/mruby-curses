module CUI
  class KeyEvent
    attr_accessor :key, :keyname

    def initialize(ch)
      self.key = ch
      self.keyname = Curses.keyname(ch)
    end

    def to_i
      self.key
    end

    def to_s
      self.keyname.to_s
    end

    def backspace?
      key == Curses::KEY_BACKSPACE || keyname == "^?"
    end

    def delete?
      key == Curses::KEY_DC || keyname == "^D"
    end

    def return?
      key == "\n".ord
    end
    alias enter? return?

    def tab?
      key == "\t".ord
    end

    def visible?
      keyname && keyname.length == 1
    end

    def ctrl?
      keyname && keyname.start_with?('^')
    end

    def alt?
      keyname && keyname.start_with?('M-')
    end
  end
end
