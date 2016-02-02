/*
 * struct panel
 * Defined in file panel.h @ line 22
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#if BIND_Panel_TYPE

/*
 * Class Methods
 */

#if BIND_Panel_INITIALIZE
mrb_value
mrb_Curses_Panel_initialize(mrb_state* mrb, mrb_value self) {
  struct panel* native_object = (struct panel*)malloc(sizeof(struct panel));
  mruby_gift_struct panel_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Curses_Panel_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::Panel.disown only accepts objects of type Curses::Panel");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Curses_Panel_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object = mrb_nil_value();
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Curses::Panel.belongs_to_ruby only accepts objects of type Curses::Panel");
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

#if BIND_Panel_win_FIELD_READER
/* get_win
 *
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_Panel_get_win(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  WINDOW * native_field = native_self->win;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box__win(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Panel_win_FIELD_WRITER
/* set_win
 *
 * Parameters:
 * - value: WINDOW *
 */
mrb_value
mrb_Curses_Panel_set_win(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }

  WINDOW * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox__win(ruby_field));

  native_self->win = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_wstarty_FIELD_READER
/* get_wstarty
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Panel_get_wstarty(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  int native_field = native_self->wstarty;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Panel_wstarty_FIELD_WRITER
/* set_wstarty
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Panel_set_wstarty(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->wstarty = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_wendy_FIELD_READER
/* get_wendy
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Panel_get_wendy(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  int native_field = native_self->wendy;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Panel_wendy_FIELD_WRITER
/* set_wendy
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Panel_set_wendy(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->wendy = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_wstartx_FIELD_READER
/* get_wstartx
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Panel_get_wstartx(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  int native_field = native_self->wstartx;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Panel_wstartx_FIELD_WRITER
/* set_wstartx
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Panel_set_wstartx(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->wstartx = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_wendx_FIELD_READER
/* get_wendx
 *
 * Return Type: int
 */
mrb_value
mrb_Curses_Panel_get_wendx(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  int native_field = native_self->wendx;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}
#endif

#if BIND_Panel_wendx_FIELD_WRITER
/* set_wendx
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Curses_Panel_set_wendx(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->wendx = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_below_FIELD_READER
/* get_below
 *
 * Return Type: struct panel *
 */
mrb_value
mrb_Curses_Panel_get_below(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  struct panel * native_field = native_self->below;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_panel(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Panel_below_FIELD_WRITER
/* set_below
 *
 * Parameters:
 * - value: struct panel *
 */
mrb_value
mrb_Curses_Panel_set_below(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }

  struct panel * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_panel(ruby_field));

  native_self->below = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_above_FIELD_READER
/* get_above
 *
 * Return Type: struct panel *
 */
mrb_value
mrb_Curses_Panel_get_above(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  struct panel * native_field = native_self->above;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_panel(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Panel_above_FIELD_WRITER
/* set_above
 *
 * Parameters:
 * - value: struct panel *
 */
mrb_value
mrb_Curses_Panel_set_above(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }

  struct panel * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_panel(ruby_field));

  native_self->above = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_user_FIELD_READER
/* get_user
 *
 * Return Type: const void *
 */
mrb_value
mrb_Curses_Panel_get_user(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  const void * native_field = native_self->user;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}
#endif

#if BIND_Panel_user_FIELD_WRITER
/* set_user
 *
 * Parameters:
 * - value: const void *
 */
mrb_value
mrb_Curses_Panel_set_user(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  const void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->user = native_field;

  return ruby_field;
}
#endif

#if BIND_Panel_obscure_FIELD_READER
/* get_obscure
 *
 * Return Type: struct panelobs *
 */
mrb_value
mrb_Curses_Panel_get_obscure(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);

  struct panelobs * native_field = native_self->obscure;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_panelobs(mrb, native_field));

  return ruby_field;
}
#endif

#if BIND_Panel_obscure_FIELD_WRITER
/* set_obscure
 *
 * Parameters:
 * - value: struct panelobs *
 */
mrb_value
mrb_Curses_Panel_set_obscure(mrb_state* mrb, mrb_value self) {
  struct panel * native_self = mruby_unbox_struct panel(self);
  mrb_value ruby_field = mrb_nil_value();

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Panelobs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panelobs expected");
    return mrb_nil_value();
  }

  struct panelobs * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_panelobs(ruby_field));

  native_self->obscure = native_field;

  return ruby_field;
}
#endif


void mrb_Curses_Panel_init(mrb_state* mrb) {
  struct RClass* Panel_class = mrb_define_class_under(mrb, Curses_module(mrb), "Panel", mrb->object_class);
  MRB_SET_INSTANCE_TT(Panel_class, MRB_TT_DATA);

#if BIND_Panel_INITIALIZE
  mrb_define_method(mrb, Panel_class, "initialize", mrb_Curses_Panel_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Panel_class, "disown", mrb_Curses_Panel_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Panel_class, "belongs_to_ruby?", mrb_Curses_Panel_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Panel_win_FIELD_READER
  mrb_define_method(mrb, Panel_class, "win", mrb_Curses_Panel_get_win, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_win_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "win=", mrb_Curses_Panel_set_win, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_wstarty_FIELD_READER
  mrb_define_method(mrb, Panel_class, "wstarty", mrb_Curses_Panel_get_wstarty, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_wstarty_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "wstarty=", mrb_Curses_Panel_set_wstarty, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_wendy_FIELD_READER
  mrb_define_method(mrb, Panel_class, "wendy", mrb_Curses_Panel_get_wendy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_wendy_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "wendy=", mrb_Curses_Panel_set_wendy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_wstartx_FIELD_READER
  mrb_define_method(mrb, Panel_class, "wstartx", mrb_Curses_Panel_get_wstartx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_wstartx_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "wstartx=", mrb_Curses_Panel_set_wstartx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_wendx_FIELD_READER
  mrb_define_method(mrb, Panel_class, "wendx", mrb_Curses_Panel_get_wendx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_wendx_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "wendx=", mrb_Curses_Panel_set_wendx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_below_FIELD_READER
  mrb_define_method(mrb, Panel_class, "below", mrb_Curses_Panel_get_below, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_below_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "below=", mrb_Curses_Panel_set_below, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_above_FIELD_READER
  mrb_define_method(mrb, Panel_class, "above", mrb_Curses_Panel_get_above, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_above_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "above=", mrb_Curses_Panel_set_above, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_user_FIELD_READER
  mrb_define_method(mrb, Panel_class, "user", mrb_Curses_Panel_get_user, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_user_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "user=", mrb_Curses_Panel_set_user, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Panel_obscure_FIELD_READER
  mrb_define_method(mrb, Panel_class, "obscure", mrb_Curses_Panel_get_obscure, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Panel_obscure_FIELD_WRITER
  mrb_define_method(mrb, Panel_class, "obscure=", mrb_Curses_Panel_set_obscure, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
