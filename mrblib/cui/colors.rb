module CUI
  # Available Colors
  # ----------------
  # - MAGENTA
  # - GREEN
  # - WHITE
  # - RED
  # - YELLOW
  # - CYAN
  # - BLUE
  # - BLACK

  module Colors
    def self.color_pair(foreground, background)
      foreground = foreground.to_s.upcase
      background = background.to_s.upcase
      val = self.const_get("#{foreground}_ON_#{background}") rescue nil
      if val
        return val
      end
      @i ||= 0
      @i += 1
      Curses.init_pair(@i, Curses.const_get("COLOR_#{foreground}".to_sym), Curses.const_get("COLOR_#{background}".to_sym))
      self.const_set("#{foreground}_ON_#{background}", Curses.color_pair(@i))
      return Curses.color_pair(@i)
    end
    class << self
      alias pair color_pair
    end
  end
end
