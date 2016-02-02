/*
 * TERMINAL
 * Defined in file term.h @ line 20
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_TERMINAL_TYPE

/*
 * Class Methods
 */

#if BIND_TERMINAL_INITIALIZE
mrb_value
mrb_Curses_TERMINAL_initialize(mrb_state* mrb, mrb_value self) {
  TERMINAL* native_object = (TERMINAL*)malloc(sizeof(TERMINAL));
  mruby_gift_TERMINAL_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_TERMINAL_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::TERMINAL.disown only accepts objects of type Curses::TERMINAL");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_TERMINAL_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::TERMINAL.belongs_to_ruby only accepts objects of type Curses::TERMINAL");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

/*
 * Fields
 */

#if BIND_TERMINAL__termname_FIELD_READER
/* get__termname
 *
 * Return Type: const char *
 */
mrb_value
mrb_Curses_TERMINAL_get__termname(mrb_state* mrb, mrb_value self) {
  TERMINAL * native_self = mruby_unbox_TERMINAL(self);

  const char * native_field = native_self->_termname;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_TERMINAL__termname_FIELD_WRITER
/* set__termname
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Curses_TERMINAL_set__termname(mrb_state* mrb, mrb_value self) {
  TERMINAL * native_self = mruby_unbox_TERMINAL(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->_termname = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_TERMINAL_init(mrb_state* mrb) {
  struct RClass* TERMINAL_class = mrb_define_class_under(mrb, Curses_module(mrb), "Terminal", mrb->object_class);
  MRB_SET_INSTANCE_TT(TERMINAL_class, MRB_TT_DATA);

#if BIND_TERMINAL_INITIALIZE
  mrb_define_method(mrb, TERMINAL_class, "initialize", mrb_Curses_TERMINAL_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, TERMINAL_class, "disown", mrb_Curses_TERMINAL_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, TERMINAL_class, "belongs_to_ruby?", mrb_Curses_TERMINAL_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_TERMINAL__termname_FIELD_READER
  mrb_define_method(mrb, TERMINAL_class, "_termname", mrb_Curses_TERMINAL_get__termname, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TERMINAL__termname_FIELD_WRITER
  mrb_define_method(mrb, TERMINAL_class, "_termname=", mrb_Curses_TERMINAL_set__termname, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
