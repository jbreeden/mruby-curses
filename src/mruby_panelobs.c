/*
 * struct panelobs
 * Defined in file panel.h @ line 19
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_Panelobs_TYPE

/*
 * Class Methods
 */

#if BIND_Panelobs_INITIALIZE
mrb_value
mrb_Curses_Panelobs_initialize(mrb_state* mrb, mrb_value self) {
  struct panelobs* native_object = (struct panelobs*)malloc(sizeof(struct panelobs));
  mruby_gift_struct panelobs_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_Panelobs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::Panelobs.disown only accepts objects of type Curses::Panelobs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_Panelobs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::Panelobs.belongs_to_ruby only accepts objects of type Curses::Panelobs");
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

#if BIND_Panelobs_above_FIELD_READER
/* get_above
 *
 * Return Type: struct panelobs *
 */
mrb_value
mrb_Curses_Panelobs_get_above(mrb_state* mrb, mrb_value self) {
  struct panelobs * native_self = mruby_unbox_struct panelobs(self);

  struct panelobs * native_field = native_self->above;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_panelobs(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Panelobs_above_FIELD_WRITER
/* set_above
 *
 * Parameters:
 * - value: struct panelobs *
 */
mrb_value
mrb_Curses_Panelobs_set_above(mrb_state* mrb, mrb_value self) {
  struct panelobs * native_self = mruby_unbox_struct panelobs(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Panelobs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panelobs expected");
    return mrb_nil_value();
  }

  struct panelobs * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_panelobs(ruby_field));

  native_self->above = native_field;

  return ruby_field;
}
#endif

#if BIND_Panelobs_pan_FIELD_READER
/* get_pan
 *
 * Return Type: struct panel *
 */
mrb_value
mrb_Curses_Panelobs_get_pan(mrb_state* mrb, mrb_value self) {
  struct panelobs * native_self = mruby_unbox_struct panelobs(self);

  struct panel * native_field = native_self->pan;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_panel(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Panelobs_pan_FIELD_WRITER
/* set_pan
 *
 * Parameters:
 * - value: struct panel *
 */
mrb_value
mrb_Curses_Panelobs_set_pan(mrb_state* mrb, mrb_value self) {
  struct panelobs * native_self = mruby_unbox_struct panelobs(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }

  struct panel * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_panel(ruby_field));

  native_self->pan = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_Panelobs_init(mrb_state* mrb) {
  struct RClass* Panelobs_class = mrb_define_class_under(mrb, Curses_module(mrb), "Panelobs", mrb->object_class);
  MRB_SET_INSTANCE_TT(Panelobs_class, MRB_TT_DATA);

#if BIND_Panelobs_INITIALIZE
  mrb_define_method(mrb, Panelobs_class, "initialize", mrb_Curses_Panelobs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Panelobs_class, "disown", mrb_Curses_Panelobs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Panelobs_class, "belongs_to_ruby?", mrb_Curses_Panelobs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Panelobs_above_FIELD_READER
  mrb_define_method(mrb, Panelobs_class, "above", mrb_Curses_Panelobs_get_above, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panelobs_above_FIELD_WRITER
  mrb_define_method(mrb, Panelobs_class, "above=", mrb_Curses_Panelobs_set_above, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panelobs_pan_FIELD_READER
  mrb_define_method(mrb, Panelobs_class, "pan", mrb_Curses_Panelobs_get_pan, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panelobs_pan_FIELD_WRITER
  mrb_define_method(mrb, Panelobs_class, "pan=", mrb_Curses_Panelobs_set_pan, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
