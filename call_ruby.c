#include <mruby.h>
#include <mruby/irep.h>
#include <mruby/string.h>
#include "test.rb.c"

int main() {
  callRuby("floo_bar(:blarb)");
  return 0;
}

const char* callRuby(const char* code) {
  mrb_state *mrb = mrb_open();
  if (!mrb) { /* handle error */ }

  mrb_value obj = mrb_load_irep(mrb, test);

  mrb_value result = mrb_funcall(mrb, obj, "main", 1, mrb_str_new_cstr(mrb, code));
  const char* cstring_result = mrb_string_value_ptr(mrb, result);

  mrb_close(mrb);

  return cstring_result;
}
