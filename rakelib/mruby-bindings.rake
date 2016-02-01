require 'mruby_bindings'

namespace :bindings do
  desc 'Extract type information from C files'
  task :scrape do
    File.delete('declarations.json') if File.exists?('declarations.json')
    
    headers = ['curses.h', 'panel.h', 'term.h'].map { |f| "headers/#{f}" }
    
    if headers.length == 0
      $stderr.puts 'No headers defined. Please update rakelib/mruby-bindings.rake'
      exit 1
    end
    
    headers.each do |header|
      sh "clang2json -I headers #{header} >> declarations.json"
    end
  end
  
  desc 'Inspect all declarations in an interactive Pry shell (require pry gem)'
  task :pry do
    require 'pry'
    MRubyBindings.read_declarations("declarations.json") do |lib|
      binding.pry
    end
  end

  desc 'Generate bindings'
  task :generate do
    cmd = ['mrbind generate']
    cmd << '-input declarations.json'
    cmd << '-module Curses'
    cmd << '-gem mruby-curses'
    cmd << '-load mruby-bindings.in/ctypes.rb' if File.exists?('mruby-bindings.in/ctypes.rb')
    cmd << '-load mruby-bindings.in/fn_types.rb' if File.exists?('mruby-bindings.in/fn_types.rb')
    cmd << '-load mruby-bindings.in/macro_types.rb' if File.exists?('mruby-bindings.in/macro_types.rb')
    cmd << '-includes mruby-bindings.in/includes.h' if File.exists?('mruby-bindings.in/includes.h')
    cmd << '-output bindings'
    cmd << '-force'
    cmd << '-v'
    sh cmd.join(' ')
  end
  
  desc "Merge generated code into mrbgem"
  task :merge do
    sh "mrbind merge -from bindings -to ."
  end
  
  namespace :merge do
    desc "Merge generated code from src folder"
    task :src do
      sh "mrbind merge -from bindings -to . src"
    end
    
    desc "Merge generated code from include folder"
    task :include do
      sh "mrbind merge -from bindings -to . include"
    end
    
    desc "Merge generated code from mrblib folder"
    task :mrblib do
      sh "mrbind merge -from bindings -to . mrblib"
    end
  end
  
  desc 'Regenerate functions & classes headers'
  task :'enable-functions' do
    sh 'mrbind enable-functions -m Curses -g mruby-curses -o .'
  end
  
  task :fn_count do
    sh "cat include/mruby_Curses_functions.h | egrep 'TRUE|FALSE' | wc -l"
  end

  task :bound_fns do
    sh "cat include/mruby_Curses_functions.h | egrep 'TRUE'"
  end

  task :bound_fn_count do
    sh "cat include/mruby_Curses_functions.h | egrep 'TRUE' | wc -l"
  end

  task :unbound_fns do
    sh "cat include/mruby_Curses_functions.h | egrep 'FALSE'"
  end

  task :unbound_fn_count do
    sh "cat include/mruby_Curses_functions.h | egrep 'FALSE' | wc -l"
  end
end
