MRuby::Gem::Specification.new('mruby-curses') do |spec|
  spec.author = "Jared Breeden"
  spec.license = "MIT"
  spec.summary = "Bindings to PDCurses for MRuby"

  gem_dir = File.expand_path(File.dirname(__FILE__))

  spec.rbfiles.clear
  spec.rbfiles.push "#{gem_dir}/mrblib/curses.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/cui.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/colors.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/events.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/model.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/builtin_events.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/event_loop.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/window_delegates.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/window.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/window_io.rb"
  spec.rbfiles.push "#{gem_dir}/mrblib/cui/text_input.rb"
end
