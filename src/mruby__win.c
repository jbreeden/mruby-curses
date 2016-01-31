/*
 * WINDOW 
 * Defined in file curses.h @ line 236
 */

#include "mruby_Curses.h"

#if BIND_Win_TYPE

void mrb_Curses_Win_init(mrb_state* mrb) {
  struct RClass* Win_class = mrb_define_class_under(mrb, Curses_module(mrb), "Win", mrb->object_class);
  MRB_SET_INSTANCE_TT(Win_class, MRB_TT_DATA);
}

#endif
