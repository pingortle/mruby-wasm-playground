#!/usr/bin/env bash

mruby-dev/bin/mrbc -B test_symbol test_program.rb

emcc -I mruby/include -Os test_stub.c mruby/build/emscripten/lib/libmruby.a -o test_program.js
emcc -I mruby/include -Os embedded_string_example.c mruby/build/emscripten/lib/libmruby.a -o embedded_string_example.js
