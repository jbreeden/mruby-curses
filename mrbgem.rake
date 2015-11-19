MRuby::Gem::Specification.new('mruby-pdcurses') do |spec|
  spec.author = "Jared Breeden"
  spec.license = "MIT"
  spec.summary = "Bindings to PDCurses for MRuby"

  [spec.cc, spec.cxx].each do |compiler|
    compiler.include_paths << "../mruby-pdcurses/include"
  end
end
