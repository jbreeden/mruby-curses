module CUI
class TextInput < CUI::Window
  attr_accessor :value, :cursor

  def initialize(opt)
    super({lines: 1}.merge(opt))
    self.value = ''
    @cursor = 0

    self.on(CUI::KeyEvent) do |k|
      if k.backspace?
        if self.cursor > 0
          new_value = pre_cursor[0...-1]
          new_value += post_cursor
          self.value = new_value
          self.cursor -= 1
          trigger('change', self.value)
        end
      elsif k.delete?
        if self.cursor < value.length
          new_value = pre_cursor
          new_value += post_cursor[1..post_cursor.length]
          self.value = new_value
          trigger('change', self.value)
          # cursor stays in place
        end
      elsif k.keyname == '^K'
        if self.cursor != self.value.length
          self.value = self.value[0...cursor]
          trigger('change', self.value)
          #cursor stays in place
        end
      elsif k.visible?
        if self.cursor >= @io.last_col
          Curses.beep
          next
        end
        new_value = pre_cursor
        new_value += k.keyname
        new_value += post_cursor
        self.value = new_value
        self.cursor += 1
        trigger('change', self.value)
      elsif k.return?
        trigger('return', value)
      elsif k.keyname == '^A'
        self.cursor = 0
      elsif k.keyname == '^B' || k.keyname == 'KEY_LEFT'
        if self.cursor > 0
          self.cursor -= 1
        end
      elsif k.keyname == '^E'
        self.cursor = value.length
      elsif k.keyname == '^F' || k.keyname == 'KEY_RIGHT'
        unless self.cursor >= value.length
          self.cursor += 1
        end
      end
    end
  end

  def pre_cursor
    if self.cursor > 0
      pre = self.value[0...self.cursor]
    else
      pre = ''
    end
    pre
  end

  def post_cursor
    if self.cursor < self.value.length
      post = self.value[self.cursor..self.value.length]
    else
      post = ''
    end
    post
  end

  def cursor=(val)
    @invalid
    move(0, val)
    @cursor = val
  end

  def value=(val)
    @invalid = true
    @value = val
  end

  def render
    @io = CUI::WindowIO.new(self)
    # if @invalid
      x = getx
      y = gety
      @io.goto(0, 0)
      @io.clear_line
      @io.write_line(value)
      @io.goto(y, x)
    # end
  end
end
end
