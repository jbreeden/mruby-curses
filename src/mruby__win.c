/*
 * struct _win
 * Defined in file curses.h @ line 236
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_Win_TYPE

/*
 * Class Methods
 */

#if BIND_Win_INITIALIZE
mrb_value
mrb_Curses_Win_initialize(mrb_state* mrb, mrb_value self) {
  struct _win* native_object = (struct _win*)malloc(sizeof(struct _win));
  mruby_gift_struct _win_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_Win_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::Win.disown only accepts objects of type Curses::Win");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_Win_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::Win.belongs_to_ruby only accepts objects of type Curses::Win");
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

#if BIND_Win__cury_FIELD_READER
/* get__cury
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__cury(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_cury;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__cury_FIELD_WRITER
/* set__cury
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__cury(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_cury = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__curx_FIELD_READER
/* get__curx
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__curx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_curx;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__curx_FIELD_WRITER
/* set__curx
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__curx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_curx = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__maxy_FIELD_READER
/* get__maxy
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__maxy(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_maxy;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__maxy_FIELD_WRITER
/* set__maxy
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__maxy(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_maxy = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__maxx_FIELD_READER
/* get__maxx
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__maxx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_maxx;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__maxx_FIELD_WRITER
/* set__maxx
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__maxx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_maxx = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__begy_FIELD_READER
/* get__begy
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__begy(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_begy;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__begy_FIELD_WRITER
/* set__begy
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__begy(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_begy = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__begx_FIELD_READER
/* get__begx
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__begx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_begx;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__begx_FIELD_WRITER
/* set__begx
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__begx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_begx = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__flags_FIELD_READER
/* get__flags
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__flags(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_flags;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__flags_FIELD_WRITER
/* set__flags
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__flags(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_flags = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__attrs_FIELD_READER
/* get__attrs
 *
 * Return Type: chtype
 */
mrb_value
mrb_Curses_Win_get__attrs(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  chtype native_field = native_self->_attrs;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__attrs_FIELD_WRITER
/* set__attrs
 *
 * Parameters:
 * - value: chtype
 */
mrb_value
mrb_Curses_Win_set__attrs(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->_attrs = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__bkgd_FIELD_READER
/* get__bkgd
 *
 * Return Type: chtype
 */
mrb_value
mrb_Curses_Win_get__bkgd(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  chtype native_field = native_self->_bkgd;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__bkgd_FIELD_WRITER
/* set__bkgd
 *
 * Parameters:
 * - value: chtype
 */
mrb_value
mrb_Curses_Win_set__bkgd(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->_bkgd = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__clear_FIELD_READER
/* get__clear
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__clear(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_clear;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__clear_FIELD_WRITER
/* set__clear
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__clear(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_clear = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__leaveit_FIELD_READER
/* get__leaveit
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__leaveit(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_leaveit;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__leaveit_FIELD_WRITER
/* set__leaveit
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__leaveit(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_leaveit = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__scroll_FIELD_READER
/* get__scroll
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__scroll(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_scroll;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__scroll_FIELD_WRITER
/* set__scroll
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__scroll(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_scroll = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__nodelay_FIELD_READER
/* get__nodelay
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__nodelay(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_nodelay;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__nodelay_FIELD_WRITER
/* set__nodelay
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__nodelay(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_nodelay = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__immed_FIELD_READER
/* get__immed
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__immed(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_immed;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__immed_FIELD_WRITER
/* set__immed
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__immed(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_immed = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__sync_FIELD_READER
/* get__sync
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__sync(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_sync;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__sync_FIELD_WRITER
/* set__sync
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__sync(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_sync = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__use_keypad_FIELD_READER
/* get__use_keypad
 *
 * Return Type: bool
 */
mrb_value
mrb_Curses_Win_get__use_keypad(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  bool native_field = native_self->_use_keypad;

  mrb_value ruby_field = mrb_str_new(mrb, &native_field, 1);

  return ruby_field;
}
#endif

#if BIND_Win__use_keypad_FIELD_WRITER
/* set__use_keypad
 *
 * Parameters:
 * - value: bool
 */
mrb_value
mrb_Curses_Win_set__use_keypad(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  unsigned char native_field = *mrb_string_value_ptr(mrb, ruby_field);

  native_self->_use_keypad = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__y_FIELD_READER
/* get__y
 *
 * Return Type: chtype **
 */
mrb_value
mrb_Curses_Win_get__y(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  chtype ** native_field = native_self->_y;

  mrb_value ruby_field = TODO_mruby_box_chtype_PTR_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_Win__y_FIELD_WRITER
/* set__y
 *
 * Parameters:
 * - value: chtype **
 */
mrb_value
mrb_Curses_Win_set__y(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_chtype_PTR_PTR(ruby_field);

  chtype ** native_field = TODO_mruby_unbox_chtype_PTR_PTR(ruby_field);

  native_self->_y = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__firstch_FIELD_READER
/* get__firstch
 *
 * Return Type: int *
 */
mrb_value
mrb_Curses_Win_get__firstch(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int * native_field = native_self->_firstch;

  mrb_value ruby_field = TODO_mruby_box_int_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_Win__firstch_FIELD_WRITER
/* set__firstch
 *
 * Parameters:
 * - value: int *
 */
mrb_value
mrb_Curses_Win_set__firstch(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_PTR(ruby_field);

  int * native_field = TODO_mruby_unbox_int_PTR(ruby_field);

  native_self->_firstch = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__lastch_FIELD_READER
/* get__lastch
 *
 * Return Type: int *
 */
mrb_value
mrb_Curses_Win_get__lastch(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int * native_field = native_self->_lastch;

  mrb_value ruby_field = TODO_mruby_box_int_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_Win__lastch_FIELD_WRITER
/* set__lastch
 *
 * Parameters:
 * - value: int *
 */
mrb_value
mrb_Curses_Win_set__lastch(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_PTR(ruby_field);

  int * native_field = TODO_mruby_unbox_int_PTR(ruby_field);

  native_self->_lastch = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__tmarg_FIELD_READER
/* get__tmarg
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__tmarg(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_tmarg;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__tmarg_FIELD_WRITER
/* set__tmarg
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__tmarg(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_tmarg = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__bmarg_FIELD_READER
/* get__bmarg
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__bmarg(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_bmarg;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__bmarg_FIELD_WRITER
/* set__bmarg
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__bmarg(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_bmarg = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__delayms_FIELD_READER
/* get__delayms
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__delayms(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_delayms;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__delayms_FIELD_WRITER
/* set__delayms
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__delayms(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_delayms = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__parx_FIELD_READER
/* get__parx
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__parx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_parx;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__parx_FIELD_WRITER
/* set__parx
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__parx(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_parx = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__pary_FIELD_READER
/* get__pary
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Win_get__pary(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  int native_field = native_self->_pary;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Win__pary_FIELD_WRITER
/* set__pary
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Win_set__pary(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->_pary = native_field;

  return ruby_field;
}
#endif

#if BIND_Win__parent_FIELD_READER
/* get__parent
 *
 * Return Type: struct _win *
 */
mrb_value
mrb_Curses_Win_get__parent(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);

  struct _win * native_field = native_self->_parent;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__win(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Win__parent_FIELD_WRITER
/* set__parent
 *
 * Parameters:
 * - value: struct _win *
 */
mrb_value
mrb_Curses_Win_set__parent(mrb_state* mrb, mrb_value self) {
  struct _win * native_self = mruby_unbox_struct _win(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }

  struct _win * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__win(ruby_field));

  native_self->_parent = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_Win_init(mrb_state* mrb) {
  struct RClass* Win_class = mrb_define_class_under(mrb, Curses_module(mrb), "Win", mrb->object_class);
  MRB_SET_INSTANCE_TT(Win_class, MRB_TT_DATA);

#if BIND_Win_INITIALIZE
  mrb_define_method(mrb, Win_class, "initialize", mrb_Curses_Win_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Win_class, "disown", mrb_Curses_Win_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Win_class, "belongs_to_ruby?", mrb_Curses_Win_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Win__cury_FIELD_READER
  mrb_define_method(mrb, Win_class, "_cury", mrb_Curses_Win_get__cury, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__cury_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_cury=", mrb_Curses_Win_set__cury, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__curx_FIELD_READER
  mrb_define_method(mrb, Win_class, "_curx", mrb_Curses_Win_get__curx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__curx_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_curx=", mrb_Curses_Win_set__curx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__maxy_FIELD_READER
  mrb_define_method(mrb, Win_class, "_maxy", mrb_Curses_Win_get__maxy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__maxy_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_maxy=", mrb_Curses_Win_set__maxy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__maxx_FIELD_READER
  mrb_define_method(mrb, Win_class, "_maxx", mrb_Curses_Win_get__maxx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__maxx_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_maxx=", mrb_Curses_Win_set__maxx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__begy_FIELD_READER
  mrb_define_method(mrb, Win_class, "_begy", mrb_Curses_Win_get__begy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__begy_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_begy=", mrb_Curses_Win_set__begy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__begx_FIELD_READER
  mrb_define_method(mrb, Win_class, "_begx", mrb_Curses_Win_get__begx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__begx_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_begx=", mrb_Curses_Win_set__begx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__flags_FIELD_READER
  mrb_define_method(mrb, Win_class, "_flags", mrb_Curses_Win_get__flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__flags_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_flags=", mrb_Curses_Win_set__flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__attrs_FIELD_READER
  mrb_define_method(mrb, Win_class, "_attrs", mrb_Curses_Win_get__attrs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__attrs_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_attrs=", mrb_Curses_Win_set__attrs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__bkgd_FIELD_READER
  mrb_define_method(mrb, Win_class, "_bkgd", mrb_Curses_Win_get__bkgd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__bkgd_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_bkgd=", mrb_Curses_Win_set__bkgd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__clear_FIELD_READER
  mrb_define_method(mrb, Win_class, "_clear", mrb_Curses_Win_get__clear, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__clear_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_clear=", mrb_Curses_Win_set__clear, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__leaveit_FIELD_READER
  mrb_define_method(mrb, Win_class, "_leaveit", mrb_Curses_Win_get__leaveit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__leaveit_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_leaveit=", mrb_Curses_Win_set__leaveit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__scroll_FIELD_READER
  mrb_define_method(mrb, Win_class, "_scroll", mrb_Curses_Win_get__scroll, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__scroll_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_scroll=", mrb_Curses_Win_set__scroll, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__nodelay_FIELD_READER
  mrb_define_method(mrb, Win_class, "_nodelay", mrb_Curses_Win_get__nodelay, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__nodelay_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_nodelay=", mrb_Curses_Win_set__nodelay, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__immed_FIELD_READER
  mrb_define_method(mrb, Win_class, "_immed", mrb_Curses_Win_get__immed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__immed_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_immed=", mrb_Curses_Win_set__immed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__sync_FIELD_READER
  mrb_define_method(mrb, Win_class, "_sync", mrb_Curses_Win_get__sync, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__sync_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_sync=", mrb_Curses_Win_set__sync, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__use_keypad_FIELD_READER
  mrb_define_method(mrb, Win_class, "_use_keypad", mrb_Curses_Win_get__use_keypad, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__use_keypad_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_use_keypad=", mrb_Curses_Win_set__use_keypad, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__y_FIELD_READER
  mrb_define_method(mrb, Win_class, "_y", mrb_Curses_Win_get__y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__y_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_y=", mrb_Curses_Win_set__y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__firstch_FIELD_READER
  mrb_define_method(mrb, Win_class, "_firstch", mrb_Curses_Win_get__firstch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__firstch_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_firstch=", mrb_Curses_Win_set__firstch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__lastch_FIELD_READER
  mrb_define_method(mrb, Win_class, "_lastch", mrb_Curses_Win_get__lastch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__lastch_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_lastch=", mrb_Curses_Win_set__lastch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__tmarg_FIELD_READER
  mrb_define_method(mrb, Win_class, "_tmarg", mrb_Curses_Win_get__tmarg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__tmarg_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_tmarg=", mrb_Curses_Win_set__tmarg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__bmarg_FIELD_READER
  mrb_define_method(mrb, Win_class, "_bmarg", mrb_Curses_Win_get__bmarg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__bmarg_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_bmarg=", mrb_Curses_Win_set__bmarg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__delayms_FIELD_READER
  mrb_define_method(mrb, Win_class, "_delayms", mrb_Curses_Win_get__delayms, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__delayms_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_delayms=", mrb_Curses_Win_set__delayms, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__parx_FIELD_READER
  mrb_define_method(mrb, Win_class, "_parx", mrb_Curses_Win_get__parx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__parx_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_parx=", mrb_Curses_Win_set__parx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__pary_FIELD_READER
  mrb_define_method(mrb, Win_class, "_pary", mrb_Curses_Win_get__pary, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__pary_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_pary=", mrb_Curses_Win_set__pary, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Win__parent_FIELD_READER
  mrb_define_method(mrb, Win_class, "_parent", mrb_Curses_Win_get__parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Win__parent_FIELD_WRITER
  mrb_define_method(mrb, Win_class, "_parent=", mrb_Curses_Win_set__parent, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
