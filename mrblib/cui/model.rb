module CUI
class Model
  include Events

  def self.model_attr(*names)
    names.flatten.each do |name|
      self.define_method(name) do
        self.instance_variable_get("@#{name}")
      end
      self.define_method("#{name}=") do |val|
        old = self.instance_variable_get("@#{name}")
        actual_change = old != val
        self.instance_variable_set("@#{name}", val)
        trigger("change:#{name}", val) if actual_change
      end
    end
  end
end
end
