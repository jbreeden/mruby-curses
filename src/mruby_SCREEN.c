/*
 * SCREEN
 * Defined in file curses.h @ line 267
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_SCREEN_TYPE

/*
 * Class Methods
 */

#if BIND_SCREEN_INITIALIZE
mrb_value
mrb_Curses_SCREEN_initialize(mrb_state* mrb, mrb_value self) {
  SCREEN* native_object = (SCREEN*)malloc(sizeof(SCREEN));
  mruby_gift_SCREEN_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_SCREEN_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::SCREEN.disown only accepts objects of type Curses::SCREEN");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_SCREEN_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::SCREEN.belongs_to_ruby only accepts objects of type Curses::SCREEN");
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

#if BIND_SCREEN_alive_FIELD_READER
/* get_alive
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_alive(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->alive;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_alive_FIELD_WRITER
/* set_alive
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_alive(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->alive = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_autocr_FIELD_READER
/* get_autocr
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_autocr(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->autocr;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_autocr_FIELD_WRITER
/* set_autocr
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_autocr(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->autocr = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_cbreak_FIELD_READER
/* get_cbreak
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_cbreak(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->cbreak;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_cbreak_FIELD_WRITER
/* set_cbreak
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_cbreak(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->cbreak = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_echo_FIELD_READER
/* get_echo
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_echo(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->echo;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_echo_FIELD_WRITER
/* set_echo
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_echo(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->echo = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_raw_inp_FIELD_READER
/* get_raw_inp
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_raw_inp(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->raw_inp;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_raw_inp_FIELD_WRITER
/* set_raw_inp
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_raw_inp(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->raw_inp = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_raw_out_FIELD_READER
/* get_raw_out
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_raw_out(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->raw_out;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_raw_out_FIELD_WRITER
/* set_raw_out
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_raw_out(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->raw_out = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_audible_FIELD_READER
/* get_audible
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_audible(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->audible;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_audible_FIELD_WRITER
/* set_audible
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_audible(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->audible = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_mono_FIELD_READER
/* get_mono
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_mono(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->mono;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_mono_FIELD_WRITER
/* set_mono
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_mono(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->mono = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_resized_FIELD_READER
/* get_resized
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_resized(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->resized;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_resized_FIELD_WRITER
/* set_resized
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_resized(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->resized = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_attr_FIELD_READER
/* get_orig_attr
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_orig_attr(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->orig_attr;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_attr_FIELD_WRITER
/* set_orig_attr
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_orig_attr(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->orig_attr = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_fore_FIELD_READER
/* get_orig_fore
 *
 * Return Type: short
 */
mrb_value
mrb_Curses_SCREEN_get_orig_fore(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  short native_field = native_self->orig_fore;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_fore_FIELD_WRITER
/* set_orig_fore
 *
 * Parameters:
 * - value: short
 */
mrb_value
mrb_Curses_SCREEN_set_orig_fore(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  short native_field = mrb_fixnum(ruby_field);

  native_self->orig_fore = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_back_FIELD_READER
/* get_orig_back
 *
 * Return Type: short
 */
mrb_value
mrb_Curses_SCREEN_get_orig_back(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  short native_field = native_self->orig_back;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_back_FIELD_WRITER
/* set_orig_back
 *
 * Parameters:
 * - value: short
 */
mrb_value
mrb_Curses_SCREEN_set_orig_back(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  short native_field = mrb_fixnum(ruby_field);

  native_self->orig_back = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_cursrow_FIELD_READER
/* get_cursrow
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_cursrow(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->cursrow;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_cursrow_FIELD_WRITER
/* set_cursrow
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_cursrow(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->cursrow = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_curscol_FIELD_READER
/* get_curscol
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_curscol(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->curscol;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_curscol_FIELD_WRITER
/* set_curscol
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_curscol(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->curscol = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_visibility_FIELD_READER
/* get_visibility
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_visibility(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->visibility;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_visibility_FIELD_WRITER
/* set_visibility
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_visibility(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->visibility = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_cursor_FIELD_READER
/* get_orig_cursor
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_orig_cursor(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->orig_cursor;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_orig_cursor_FIELD_WRITER
/* set_orig_cursor
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_orig_cursor(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->orig_cursor = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_lines_FIELD_READER
/* get_lines
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_lines(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->lines;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_lines_FIELD_WRITER
/* set_lines
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_lines(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->lines = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_cols_FIELD_READER
/* get_cols
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_cols(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->cols;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_cols_FIELD_WRITER
/* set_cols
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_cols(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->cols = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN__trap_mbe_FIELD_READER
/* get__trap_mbe
 *
 * Return Type: unsigned long
 */
mrb_value
mrb_Curses_SCREEN_get__trap_mbe(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  unsigned long native_field = native_self->_trap_mbe;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN__trap_mbe_FIELD_WRITER
/* set__trap_mbe
 *
 * Parameters:
 * - value: unsigned long
 */
mrb_value
mrb_Curses_SCREEN_set__trap_mbe(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->_trap_mbe = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN__map_mbe_to_key_FIELD_READER
/* get__map_mbe_to_key
 *
 * Return Type: unsigned long
 */
mrb_value
mrb_Curses_SCREEN_get__map_mbe_to_key(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  unsigned long native_field = native_self->_map_mbe_to_key;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN__map_mbe_to_key_FIELD_WRITER
/* set__map_mbe_to_key
 *
 * Parameters:
 * - value: unsigned long
 */
mrb_value
mrb_Curses_SCREEN_set__map_mbe_to_key(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->_map_mbe_to_key = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_mouse_wait_FIELD_READER
/* get_mouse_wait
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_mouse_wait(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->mouse_wait;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_mouse_wait_FIELD_WRITER
/* set_mouse_wait
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_mouse_wait(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->mouse_wait = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_slklines_FIELD_READER
/* get_slklines
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_slklines(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->slklines;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_slklines_FIELD_WRITER
/* set_slklines
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_slklines(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->slklines = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_slk_winptr_FIELD_READER
/* get_slk_winptr
 *
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_SCREEN_get_slk_winptr(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  WINDOW * native_field = native_self->slk_winptr;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__win(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_SCREEN_slk_winptr_FIELD_WRITER
/* set_slk_winptr
 *
 * Parameters:
 * - value: WINDOW *
 */
mrb_value
mrb_Curses_SCREEN_set_slk_winptr(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }

  WINDOW * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__win(ruby_field));

  native_self->slk_winptr = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_linesrippedoff_FIELD_READER
/* get_linesrippedoff
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_linesrippedoff(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->linesrippedoff;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_linesrippedoff_FIELD_WRITER
/* set_linesrippedoff
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_linesrippedoff(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->linesrippedoff = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_linesrippedoffontop_FIELD_READER
/* get_linesrippedoffontop
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_linesrippedoffontop(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->linesrippedoffontop;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_linesrippedoffontop_FIELD_WRITER
/* set_linesrippedoffontop
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_linesrippedoffontop(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->linesrippedoffontop = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_delaytenths_FIELD_READER
/* get_delaytenths
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get_delaytenths(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->delaytenths;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_delaytenths_FIELD_WRITER
/* set_delaytenths
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set_delaytenths(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->delaytenths = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN__preserve_FIELD_READER
/* get__preserve
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get__preserve(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->_preserve;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN__preserve_FIELD_WRITER
/* set__preserve
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set__preserve(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_preserve = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN__restore_FIELD_READER
/* get__restore
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_SCREEN_get__restore(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  int native_field = native_self->_restore;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN__restore_FIELD_WRITER
/* set__restore
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_SCREEN_set__restore(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_restore = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_save_key_modifiers_FIELD_READER
/* get_save_key_modifiers
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_save_key_modifiers(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->save_key_modifiers;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_save_key_modifiers_FIELD_WRITER
/* set_save_key_modifiers
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_save_key_modifiers(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->save_key_modifiers = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_return_key_modifiers_FIELD_READER
/* get_return_key_modifiers
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_return_key_modifiers(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->return_key_modifiers;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_return_key_modifiers_FIELD_WRITER
/* set_return_key_modifiers
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_return_key_modifiers(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->return_key_modifiers = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_key_code_FIELD_READER
/* get_key_code
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_SCREEN_get_key_code(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  bool native_field = native_self->key_code;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_SCREEN_key_code_FIELD_WRITER
/* set_key_code
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_SCREEN_set_key_code(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->key_code = native_field;

  return ruby_field;
}
#endif

#if BIND_SCREEN_line_color_FIELD_READER
/* get_line_color
 *
 * Return Type: short
 */
mrb_value
mrb_Curses_SCREEN_get_line_color(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);

  short native_field = native_self->line_color;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_SCREEN_line_color_FIELD_WRITER
/* set_line_color
 *
 * Parameters:
 * - value: short
 */
mrb_value
mrb_Curses_SCREEN_set_line_color(mrb_state* mrb, mrb_value self) {
  SCREEN * native_self = mruby_unbox_SCREEN(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  short native_field = mrb_fixnum(ruby_field);

  native_self->line_color = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_SCREEN_init(mrb_state* mrb) {
  struct RClass* SCREEN_class = mrb_define_class_under(mrb, Curses_module(mrb), "Screen", mrb->object_class);
  MRB_SET_INSTANCE_TT(SCREEN_class, MRB_TT_DATA);

#if BIND_SCREEN_INITIALIZE
  mrb_define_method(mrb, SCREEN_class, "initialize", mrb_Curses_SCREEN_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SCREEN_class, "disown", mrb_Curses_SCREEN_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SCREEN_class, "belongs_to_ruby?", mrb_Curses_SCREEN_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_SCREEN_alive_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "alive", mrb_Curses_SCREEN_get_alive, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_alive_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "alive=", mrb_Curses_SCREEN_set_alive, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_autocr_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "autocr", mrb_Curses_SCREEN_get_autocr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_autocr_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "autocr=", mrb_Curses_SCREEN_set_autocr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_cbreak_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "cbreak", mrb_Curses_SCREEN_get_cbreak, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_cbreak_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "cbreak=", mrb_Curses_SCREEN_set_cbreak, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_echo_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "echo", mrb_Curses_SCREEN_get_echo, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_echo_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "echo=", mrb_Curses_SCREEN_set_echo, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_raw_inp_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "raw_inp", mrb_Curses_SCREEN_get_raw_inp, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_raw_inp_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "raw_inp=", mrb_Curses_SCREEN_set_raw_inp, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_raw_out_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "raw_out", mrb_Curses_SCREEN_get_raw_out, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_raw_out_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "raw_out=", mrb_Curses_SCREEN_set_raw_out, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_audible_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "audible", mrb_Curses_SCREEN_get_audible, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_audible_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "audible=", mrb_Curses_SCREEN_set_audible, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_mono_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "mono", mrb_Curses_SCREEN_get_mono, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_mono_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "mono=", mrb_Curses_SCREEN_set_mono, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_resized_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "resized", mrb_Curses_SCREEN_get_resized, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_resized_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "resized=", mrb_Curses_SCREEN_set_resized, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_orig_attr_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "orig_attr", mrb_Curses_SCREEN_get_orig_attr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_orig_attr_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "orig_attr=", mrb_Curses_SCREEN_set_orig_attr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_orig_fore_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "orig_fore", mrb_Curses_SCREEN_get_orig_fore, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_orig_fore_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "orig_fore=", mrb_Curses_SCREEN_set_orig_fore, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_orig_back_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "orig_back", mrb_Curses_SCREEN_get_orig_back, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_orig_back_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "orig_back=", mrb_Curses_SCREEN_set_orig_back, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_cursrow_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "cursrow", mrb_Curses_SCREEN_get_cursrow, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_cursrow_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "cursrow=", mrb_Curses_SCREEN_set_cursrow, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_curscol_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "curscol", mrb_Curses_SCREEN_get_curscol, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_curscol_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "curscol=", mrb_Curses_SCREEN_set_curscol, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_visibility_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "visibility", mrb_Curses_SCREEN_get_visibility, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_visibility_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "visibility=", mrb_Curses_SCREEN_set_visibility, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_orig_cursor_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "orig_cursor", mrb_Curses_SCREEN_get_orig_cursor, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_orig_cursor_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "orig_cursor=", mrb_Curses_SCREEN_set_orig_cursor, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_lines_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "lines", mrb_Curses_SCREEN_get_lines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_lines_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "lines=", mrb_Curses_SCREEN_set_lines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_cols_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "cols", mrb_Curses_SCREEN_get_cols, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_cols_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "cols=", mrb_Curses_SCREEN_set_cols, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN__trap_mbe_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "_trap_mbe", mrb_Curses_SCREEN_get__trap_mbe, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN__trap_mbe_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "_trap_mbe=", mrb_Curses_SCREEN_set__trap_mbe, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN__map_mbe_to_key_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "_map_mbe_to_key", mrb_Curses_SCREEN_get__map_mbe_to_key, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN__map_mbe_to_key_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "_map_mbe_to_key=", mrb_Curses_SCREEN_set__map_mbe_to_key, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_mouse_wait_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "mouse_wait", mrb_Curses_SCREEN_get_mouse_wait, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_mouse_wait_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "mouse_wait=", mrb_Curses_SCREEN_set_mouse_wait, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_slklines_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "slklines", mrb_Curses_SCREEN_get_slklines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_slklines_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "slklines=", mrb_Curses_SCREEN_set_slklines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_slk_winptr_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "slk_winptr", mrb_Curses_SCREEN_get_slk_winptr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_slk_winptr_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "slk_winptr=", mrb_Curses_SCREEN_set_slk_winptr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_linesrippedoff_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "linesrippedoff", mrb_Curses_SCREEN_get_linesrippedoff, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_linesrippedoff_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "linesrippedoff=", mrb_Curses_SCREEN_set_linesrippedoff, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_linesrippedoffontop_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "linesrippedoffontop", mrb_Curses_SCREEN_get_linesrippedoffontop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_linesrippedoffontop_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "linesrippedoffontop=", mrb_Curses_SCREEN_set_linesrippedoffontop, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_delaytenths_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "delaytenths", mrb_Curses_SCREEN_get_delaytenths, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_delaytenths_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "delaytenths=", mrb_Curses_SCREEN_set_delaytenths, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN__preserve_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "_preserve", mrb_Curses_SCREEN_get__preserve, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN__preserve_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "_preserve=", mrb_Curses_SCREEN_set__preserve, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN__restore_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "_restore", mrb_Curses_SCREEN_get__restore, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN__restore_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "_restore=", mrb_Curses_SCREEN_set__restore, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_save_key_modifiers_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "save_key_modifiers", mrb_Curses_SCREEN_get_save_key_modifiers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_save_key_modifiers_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "save_key_modifiers=", mrb_Curses_SCREEN_set_save_key_modifiers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_return_key_modifiers_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "return_key_modifiers", mrb_Curses_SCREEN_get_return_key_modifiers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_return_key_modifiers_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "return_key_modifiers=", mrb_Curses_SCREEN_set_return_key_modifiers, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_key_code_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "key_code", mrb_Curses_SCREEN_get_key_code, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_key_code_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "key_code=", mrb_Curses_SCREEN_set_key_code, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SCREEN_line_color_FIELD_READER
  mrb_define_method(mrb, SCREEN_class, "line_color", mrb_Curses_SCREEN_get_line_color, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SCREEN_line_color_FIELD_WRITER
  mrb_define_method(mrb, SCREEN_class, "line_color=", mrb_Curses_SCREEN_set_line_color, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
