/*
 * MEVENT
 * Defined in file curses.h @ line 211
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_MEVENT_TYPE

/*
 * Class Methods
 */

#if BIND_MEVENT_INITIALIZE
mrb_value
mrb_Curses_MEVENT_initialize(mrb_state* mrb, mrb_value self) {
  MEVENT* native_object = (MEVENT*)malloc(sizeof(MEVENT));
  mruby_gift_MEVENT_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_MEVENT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::MEVENT.disown only accepts objects of type Curses::MEVENT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_MEVENT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::MEVENT.belongs_to_ruby only accepts objects of type Curses::MEVENT");
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

#if BIND_MEVENT_id_FIELD_READER
/* get_id
 *
 * Return Type: short
 */
mrb_value
mrb_Curses_MEVENT_get_id(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);

  short native_field = native_self->id;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MEVENT_id_FIELD_WRITER
/* set_id
 *
 * Parameters:
 * - value: short
 */
mrb_value
mrb_Curses_MEVENT_set_id(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  short native_field = mrb_fixnum(ruby_field);

  native_self->id = native_field;

  return ruby_field;
}
#endif

#if BIND_MEVENT_x_FIELD_READER
/* get_x
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_MEVENT_get_x(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);

  int native_field = native_self->x;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MEVENT_x_FIELD_WRITER
/* set_x
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_MEVENT_set_x(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);
  mrb_value ruby_field;

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

#if BIND_MEVENT_y_FIELD_READER
/* get_y
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_MEVENT_get_y(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);

  int native_field = native_self->y;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MEVENT_y_FIELD_WRITER
/* set_y
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_MEVENT_set_y(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);
  mrb_value ruby_field;

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

#if BIND_MEVENT_z_FIELD_READER
/* get_z
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_MEVENT_get_z(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);

  int native_field = native_self->z;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MEVENT_z_FIELD_WRITER
/* set_z
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_MEVENT_set_z(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->z = native_field;

  return ruby_field;
}
#endif

#if BIND_MEVENT_bstate_FIELD_READER
/* get_bstate
 *
 * Return Type: mmask_t
 */
mrb_value
mrb_Curses_MEVENT_get_bstate(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);

  mmask_t native_field = native_self->bstate;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_MEVENT_bstate_FIELD_WRITER
/* set_bstate
 *
 * Parameters:
 * - value: mmask_t
 */
mrb_value
mrb_Curses_MEVENT_set_bstate(mrb_state* mrb, mrb_value self) {
  MEVENT * native_self = mruby_unbox_MEVENT(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned long native_field = mrb_fixnum(ruby_field);

  native_self->bstate = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_MEVENT_init(mrb_state* mrb) {
  struct RClass* MEVENT_class = mrb_define_class_under(mrb, Curses_module(mrb), "MEVENT", mrb->object_class);
  MRB_SET_INSTANCE_TT(MEVENT_class, MRB_TT_DATA);

#if BIND_MEVENT_INITIALIZE
  mrb_define_method(mrb, MEVENT_class, "initialize", mrb_Curses_MEVENT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, MEVENT_class, "disown", mrb_Curses_MEVENT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, MEVENT_class, "belongs_to_ruby?", mrb_Curses_MEVENT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_MEVENT_id_FIELD_READER
  mrb_define_method(mrb, MEVENT_class, "id", mrb_Curses_MEVENT_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MEVENT_id_FIELD_WRITER
  mrb_define_method(mrb, MEVENT_class, "id=", mrb_Curses_MEVENT_set_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MEVENT_x_FIELD_READER
  mrb_define_method(mrb, MEVENT_class, "x", mrb_Curses_MEVENT_get_x, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MEVENT_x_FIELD_WRITER
  mrb_define_method(mrb, MEVENT_class, "x=", mrb_Curses_MEVENT_set_x, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MEVENT_y_FIELD_READER
  mrb_define_method(mrb, MEVENT_class, "y", mrb_Curses_MEVENT_get_y, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MEVENT_y_FIELD_WRITER
  mrb_define_method(mrb, MEVENT_class, "y=", mrb_Curses_MEVENT_set_y, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MEVENT_z_FIELD_READER
  mrb_define_method(mrb, MEVENT_class, "z", mrb_Curses_MEVENT_get_z, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MEVENT_z_FIELD_WRITER
  mrb_define_method(mrb, MEVENT_class, "z=", mrb_Curses_MEVENT_set_z, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MEVENT_bstate_FIELD_READER
  mrb_define_method(mrb, MEVENT_class, "bstate", mrb_Curses_MEVENT_get_bstate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MEVENT_bstate_FIELD_WRITER
  mrb_define_method(mrb, MEVENT_class, "bstate=", mrb_Curses_MEVENT_set_bstate, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
