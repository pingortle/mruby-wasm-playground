MRuby::Build.new do |conf|
  toolchain :gcc
  conf.gembox "full-core"
end

MRuby::CrossBuild.new("emscripten") do |conf|
  toolchain :clang
  conf.gembox "default"
  conf.cc.command = "emcc"
  conf.cc.flags = %w[-Os]
  conf.linker.command = "emcc"
  conf.archiver.command = "emar"
end

MRuby::CrossBuild.new("emscripten-full-core") do |conf|
  toolchain :clang
  conf.gembox "full-core"
  conf.cc.command = "emcc"
  conf.cc.flags = %w[-Os]
  conf.linker.command = "emcc"
  conf.archiver.command = "emar"
end

MRuby::CrossBuild.new("emscripten-full-core-cpp") do |conf|
  toolchain :clang
  conf.gembox "full-core"
  conf.cc.command = "emcc"
  conf.cc.flags = %w[-Os -stdlib=libc++ -xc++]
  conf.linker.command = "emcc"
  conf.archiver.command = "emar"
end
