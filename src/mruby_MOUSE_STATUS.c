/*
 * MOUSE_STATUS
 * Defined in file curses.h @ line 109
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_MOUSESTATUS_TYPE

/*
 * Class Methods
 */

#if BIND_MOUSESTATUS_INITIALIZE
mrb_value
mrb_Curses_MOUSESTATUS_initialize(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS* native_object = (MOUSE_STATUS*)malloc(sizeof(MOUSE_STATUS));
  mruby_gift_MOUSE_STATUS_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_MOUSESTATUS_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::MOUSESTATUS.disown only accepts objects of type Curses::MOUSESTATUS");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_MOUSESTATUS_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::MOUSESTATUS.belongs_to_ruby only accepts objects of type Curses::MOUSESTATUS");
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

#if BIND_MOUSESTATUS_x_FIELD_READER
/* get_x
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_MOUSESTATUS_get_x(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);

  int native_field = native_self->x;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_MOUSESTATUS_set_x(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->x = native_field;

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_y_FIELD_READER
/* get_y
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_MOUSESTATUS_get_y(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);

  int native_field = native_self->y;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_MOUSESTATUS_set_y(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->y = native_field;

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_button_FIELD_READER
/* get_button
 *
 * Return Type: short [3]
 */
mrb_value
mrb_Curses_MOUSESTATUS_get_button(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);

  short [3] native_field = native_self->button;

  mrb_value ruby_field = TODO_mruby_box_short_[3](mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_button_FIELD_WRITER
/* set_button
 *
 * Parameters:
 * - value: short [3]
 */
mrb_value
mrb_Curses_MOUSESTATUS_set_button(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_short_[3](ruby_field);

  short [3] native_field = TODO_mruby_unbox_short_[3](ruby_field);

  native_self->button = native_field;

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_changes_FIELD_READER
/* get_changes
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_MOUSESTATUS_get_changes(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);

  int native_field = native_self->changes;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MOUSESTATUS_changes_FIELD_WRITER
/* set_changes
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_MOUSESTATUS_set_changes(mrb_state* mrb, mrb_value self) {
  MOUSE_STATUS * native_self = mruby_unbox_MOUSE_STATUS(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->changes = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_MOUSESTATUS_init(mrb_state* mrb) {
  struct RClass* MOUSESTATUS_class = mrb_define_class_under(mrb, Curses_module(mrb), "MouseStatus", mrb->object_class);
  MRB_SET_INSTANCE_TT(MOUSESTATUS_class, MRB_TT_DATA);

#if BIND_MOUSESTATUS_INITIALIZE
  mrb_define_method(mrb, MOUSESTATUS_class, "initialize", mrb_Curses_MOUSESTATUS_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, MOUSESTATUS_class, "disown", mrb_Curses_MOUSESTATUS_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, MOUSESTATUS_class, "belongs_to_ruby?", mrb_Curses_MOUSESTATUS_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_MOUSESTATUS_x_FIELD_READER
  mrb_define_method(mrb, MOUSESTATUS_class, "x", mrb_Curses_MOUSESTATUS_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MOUSESTATUS_x_FIELD_WRITER
  mrb_define_method(mrb, MOUSESTATUS_class, "x=", mrb_Curses_MOUSESTATUS_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MOUSESTATUS_y_FIELD_READER
  mrb_define_method(mrb, MOUSESTATUS_class, "y", mrb_Curses_MOUSESTATUS_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MOUSESTATUS_y_FIELD_WRITER
  mrb_define_method(mrb, MOUSESTATUS_class, "y=", mrb_Curses_MOUSESTATUS_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MOUSESTATUS_button_FIELD_READER
  mrb_define_method(mrb, MOUSESTATUS_class, "button", mrb_Curses_MOUSESTATUS_get_button, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MOUSESTATUS_button_FIELD_WRITER
  mrb_define_method(mrb, MOUSESTATUS_class, "button=", mrb_Curses_MOUSESTATUS_set_button, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MOUSESTATUS_changes_FIELD_READER
  mrb_define_method(mrb, MOUSESTATUS_class, "changes", mrb_Curses_MOUSESTATUS_get_changes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MOUSESTATUS_changes_FIELD_WRITER
  mrb_define_method(mrb, MOUSESTATUS_class, "changes=", mrb_Curses_MOUSESTATUS_set_changes, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
