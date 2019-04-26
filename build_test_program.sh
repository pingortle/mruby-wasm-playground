#!/usr/bin/env bash

mrbc -B test_symbol test_program.rb
emcc -I mruby/include -Os test_stub.c mruby/build/emscripten/lib/libmruby.a -o test_program.js
