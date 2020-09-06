#include <string>

extern "C" {
  #include "mruby.h"
  #include "mruby/irep.h"
  #include "mruby/string.h"

  #include "test.rb.c"
}

std::string callRuby(std::string code);

#if defined(__EMSCRIPTEN__)
#include <emscripten/bind.h>

using namespace emscripten;

EMSCRIPTEN_BINDINGS(module) {
  function("callRuby", &callRuby);
}
#endif

int main() {
  callRuby("floo_bar :bleep");
  return 0;
}

std::string callRuby(std::string code) {
  mrb_state *mrb = mrb_open();
  if (!mrb) { /* handle error */ }

  mrb_value obj = mrb_load_irep(mrb, test);

  mrb_value result = mrb_funcall(mrb, obj, "main", 1, mrb_str_new_cstr(mrb, code.c_str()));
  std::string cstring_result(
    mrb_string_value_ptr(mrb, result),
    mrb_string_value_len(mrb, result)
  );

  mrb_close(mrb);

  return cstring_result;
}

