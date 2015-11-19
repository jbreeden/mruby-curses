task 'clone-mruby-bindings' do
  sh "git clone https://github.com/jbreeden/mruby-bindings" unless Dir.exists?('mruby-bindings')
end

desc "Generate bindings"
task :bindings => 'clone-mruby-bindings' do
  cd 'pdcurses' do
    IO.popen('ruby ../mruby-bindings/mruby_bindings.rb -m Curses -g mruby-curses -o ../mruby-pdcurses', 'w') do |io|
      %w[curses.h term.h panel.h].each do |header|
       io.puts `clang2json -I . #{header}`
      end
    end
  end
end

desc 'Show enable-able functions from gererated '
task :enable do
  File.open('./mruby-pdcurses/src/mruby_Curses.cpp', 'r') do |file|
    fns = []
    current_fn = nil
    has_todo = false
    file.each_line do |line|
      if fn = line[/^#if (BIND_([a-zA-Z0-9_]*)_FUNCTION)/, 1]
        if current_fn
          if has_todo
            puts "#define BIND_#{current_fn}_FUNCTION FALSE"
          else
            puts "#define BIND_#{current_fn}_FUNCTION TRUE"
          end
        end
        current_fn = fn
        has_todo = false
      elsif line =~ /TODO/
        has_todo = true
      elsif line =~ /_gem_init/
        break
      end
    end
  end
end
