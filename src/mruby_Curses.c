/*
 * TODO: INCLUDES
 */

#include "mruby_Curses.h"

#ifdef __cplusplus
extern "C" {
#endif

#if BIND_addch_FUNCTION
#define addch_REQUIRED_ARGC 1
#define addch_OPTIONAL_ARGC 0
/* addch
 *
 * Parameters:
 * - arg1: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_addch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = addch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_addchnstr_FUNCTION
#define addchnstr_REQUIRED_ARGC 2
#define addchnstr_OPTIONAL_ARGC 0
/* addchnstr
 *
 * Parameters:
 * - arg1: const unsigned long *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_addchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  TODO_type_check_unsigned_long_PTR(arg1);
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned long * native_arg1 = TODO_mruby_unbox_unsigned_long_PTR(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = addchnstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_addchstr_FUNCTION
#define addchstr_REQUIRED_ARGC 1
#define addchstr_OPTIONAL_ARGC 0
/* addchstr
 *
 * Parameters:
 * - arg1: const unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_addchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  TODO_type_check_unsigned_long_PTR(arg1);


  /* Unbox parameters */
  const unsigned long * native_arg1 = TODO_mruby_unbox_unsigned_long_PTR(arg1);

  /* Invocation */
  int result = addchstr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_addnstr_FUNCTION
#define addnstr_REQUIRED_ARGC 2
#define addnstr_OPTIONAL_ARGC 0
/* addnstr
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_addnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = addnstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_addrawch_FUNCTION
#define addrawch_REQUIRED_ARGC 1
#define addrawch_OPTIONAL_ARGC 0
/* addrawch
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_addrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = addrawch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_addstr_FUNCTION
#define addstr_REQUIRED_ARGC 1
#define addstr_OPTIONAL_ARGC 0
/* addstr
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_addstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = addstr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_assume_default_colors_FUNCTION
#define assume_default_colors_REQUIRED_ARGC 2
#define assume_default_colors_OPTIONAL_ARGC 0
/* assume_default_colors
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_assume_default_colors(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = assume_default_colors(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attr_get_FUNCTION
#define attr_get_REQUIRED_ARGC 3
#define attr_get_OPTIONAL_ARGC 0
/* attr_get
 *
 * Parameters:
 * - arg1: unsigned long *
 * - arg2: short *
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_attr_get(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  TODO_type_check_unsigned_long_PTR(arg1);
  TODO_type_check_short_PTR(arg2);
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  unsigned long * native_arg1 = TODO_mruby_unbox_unsigned_long_PTR(arg1);

  short * native_arg2 = TODO_mruby_unbox_short_PTR(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = attr_get(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attr_off_FUNCTION
#define attr_off_REQUIRED_ARGC 2
#define attr_off_OPTIONAL_ARGC 0
/* attr_off
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_attr_off(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int result = attr_off(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attr_on_FUNCTION
#define attr_on_REQUIRED_ARGC 2
#define attr_on_OPTIONAL_ARGC 0
/* attr_on
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_attr_on(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int result = attr_on(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attr_set_FUNCTION
#define attr_set_REQUIRED_ARGC 3
#define attr_set_OPTIONAL_ARGC 0
/* attr_set
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: short
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_attr_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  short native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = attr_set(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attroff_FUNCTION
#define attroff_REQUIRED_ARGC 1
#define attroff_OPTIONAL_ARGC 0
/* attroff
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_attroff(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = attroff(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attron_FUNCTION
#define attron_REQUIRED_ARGC 1
#define attron_OPTIONAL_ARGC 0
/* attron
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_attron(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = attron(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_attrset_FUNCTION
#define attrset_REQUIRED_ARGC 1
#define attrset_OPTIONAL_ARGC 0
/* attrset
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_attrset(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = attrset(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_baudrate_FUNCTION
#define baudrate_REQUIRED_ARGC 0
#define baudrate_OPTIONAL_ARGC 0
/* baudrate
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_baudrate(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = baudrate();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_beep_FUNCTION
#define beep_REQUIRED_ARGC 0
#define beep_OPTIONAL_ARGC 0
/* beep
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_beep(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = beep();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_bkgd_FUNCTION
#define bkgd_REQUIRED_ARGC 1
#define bkgd_OPTIONAL_ARGC 0
/* bkgd
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_bkgd(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = bkgd(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_bkgdset_FUNCTION
#define bkgdset_REQUIRED_ARGC 1
#define bkgdset_OPTIONAL_ARGC 0
/* bkgdset
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: void
 */
mrb_value
mrb_Curses_bkgdset(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  bkgdset(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_border_FUNCTION
#define border_REQUIRED_ARGC 8
#define border_OPTIONAL_ARGC 0
/* border
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: unsigned long
 * - arg3: unsigned long
 * - arg4: unsigned long
 * - arg5: unsigned long
 * - arg6: unsigned long
 * - arg7: unsigned long
 * - arg8: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_border(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  unsigned long native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  unsigned long native_arg5 = mrb_fixnum(arg5);

  unsigned long native_arg6 = mrb_fixnum(arg6);

  unsigned long native_arg7 = mrb_fixnum(arg7);

  unsigned long native_arg8 = mrb_fixnum(arg8);

  /* Invocation */
  int result = border(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_bottom_panel_FUNCTION
#define bottom_panel_REQUIRED_ARGC 1
#define bottom_panel_OPTIONAL_ARGC 0
/* bottom_panel
 *
 * Parameters:
 * - pan: struct panel *
 * Return Type: int
 */
mrb_value
mrb_Curses_bottom_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  int result = bottom_panel(native_pan);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_box_FUNCTION
#define box_REQUIRED_ARGC 3
#define box_OPTIONAL_ARGC 0
/* box
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_box(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = box(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_can_change_color_FUNCTION
#define can_change_color_REQUIRED_ARGC 0
#define can_change_color_OPTIONAL_ARGC 0
/* can_change_color
 *
 * Parameters: None
 * Return Type: bool
 */
mrb_value
mrb_Curses_can_change_color(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  return can_change_color() ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_cbreak_FUNCTION
#define cbreak_REQUIRED_ARGC 0
#define cbreak_OPTIONAL_ARGC 0
/* cbreak
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_cbreak(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = cbreak();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_chgat_FUNCTION
#define chgat_REQUIRED_ARGC 4
#define chgat_OPTIONAL_ARGC 0
/* chgat
 *
 * Parameters:
 * - arg1: int
 * - arg2: unsigned long
 * - arg3: short
 * - arg4: const void *
 * Return Type: int
 */
mrb_value
mrb_Curses_chgat(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg4);


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  unsigned long native_arg2 = mrb_fixnum(arg2);

  short native_arg3 = mrb_fixnum(arg3);

  const void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  int result = chgat(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_clear_FUNCTION
#define clear_REQUIRED_ARGC 0
#define clear_OPTIONAL_ARGC 0
/* clear
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_clear(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = clear();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_clearok_FUNCTION
#define clearok_REQUIRED_ARGC 2
#define clearok_OPTIONAL_ARGC 0
/* clearok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_clearok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = clearok(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_clrtobot_FUNCTION
#define clrtobot_REQUIRED_ARGC 0
#define clrtobot_OPTIONAL_ARGC 0
/* clrtobot
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_clrtobot(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = clrtobot();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_clrtoeol_FUNCTION
#define clrtoeol_REQUIRED_ARGC 0
#define clrtoeol_OPTIONAL_ARGC 0
/* clrtoeol
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_clrtoeol(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = clrtoeol();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_color_content_FUNCTION
#define color_content_REQUIRED_ARGC 4
#define color_content_OPTIONAL_ARGC 0
/* color_content
 *
 * Parameters:
 * - arg1: short
 * - arg2: short *
 * - arg3: short *
 * - arg4: short *
 * Return Type: int
 */
mrb_value
mrb_Curses_color_content(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_short_PTR(arg2);
  TODO_type_check_short_PTR(arg3);
  TODO_type_check_short_PTR(arg4);


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  short * native_arg2 = TODO_mruby_unbox_short_PTR(arg2);

  short * native_arg3 = TODO_mruby_unbox_short_PTR(arg3);

  short * native_arg4 = TODO_mruby_unbox_short_PTR(arg4);

  /* Invocation */
  int result = color_content(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_color_set_FUNCTION
#define color_set_REQUIRED_ARGC 2
#define color_set_OPTIONAL_ARGC 0
/* color_set
 *
 * Parameters:
 * - arg1: short
 * - arg2: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_color_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int result = color_set(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_copywin_FUNCTION
#define copywin_REQUIRED_ARGC 9
#define copywin_OPTIONAL_ARGC 0
/* copywin
 *
 * Parameters:
 * - arg1: const struct _win *
 * - arg2: struct _win *
 * - arg3: int
 * - arg4: int
 * - arg5: int
 * - arg6: int
 * - arg7: int
 * - arg8: int
 * - arg9: int
 * Return Type: int
 */
mrb_value
mrb_Curses_copywin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg9, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  struct _win * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox__win(arg2));

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  int native_arg6 = mrb_fixnum(arg6);

  int native_arg7 = mrb_fixnum(arg7);

  int native_arg8 = mrb_fixnum(arg8);

  int native_arg9 = mrb_fixnum(arg9);

  /* Invocation */
  int result = copywin(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8, native_arg9);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_crmode_FUNCTION
#define crmode_REQUIRED_ARGC 0
#define crmode_OPTIONAL_ARGC 0
/* crmode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_crmode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = crmode();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_curs_set_FUNCTION
#define curs_set_REQUIRED_ARGC 1
#define curs_set_OPTIONAL_ARGC 0
/* curs_set
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_curs_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = curs_set(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_curses_version_FUNCTION
#define curses_version_REQUIRED_ARGC 0
#define curses_version_OPTIONAL_ARGC 0
/* curses_version
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_Curses_curses_version(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = curses_version();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_def_prog_mode_FUNCTION
#define def_prog_mode_REQUIRED_ARGC 0
#define def_prog_mode_OPTIONAL_ARGC 0
/* def_prog_mode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_def_prog_mode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = def_prog_mode();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_def_shell_mode_FUNCTION
#define def_shell_mode_REQUIRED_ARGC 0
#define def_shell_mode_OPTIONAL_ARGC 0
/* def_shell_mode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_def_shell_mode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = def_shell_mode();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_del_curterm_FUNCTION
#define del_curterm_REQUIRED_ARGC 1
#define del_curterm_OPTIONAL_ARGC 0
/* del_curterm
 *
 * Parameters:
 * - arg1: TERMINAL *
 * Return Type: int
 */
mrb_value
mrb_Curses_del_curterm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, TERMINAL_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TERMINAL expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  TERMINAL * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_TERMINAL(arg1));

  /* Invocation */
  int result = del_curterm(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_del_panel_FUNCTION
#define del_panel_REQUIRED_ARGC 1
#define del_panel_OPTIONAL_ARGC 0
/* del_panel
 *
 * Parameters:
 * - pan: struct panel *
 * Return Type: int
 */
mrb_value
mrb_Curses_del_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  int result = del_panel(native_pan);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_delay_output_FUNCTION
#define delay_output_REQUIRED_ARGC 1
#define delay_output_OPTIONAL_ARGC 0
/* delay_output
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_delay_output(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = delay_output(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_delch_FUNCTION
#define delch_REQUIRED_ARGC 0
#define delch_OPTIONAL_ARGC 0
/* delch
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_delch(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = delch();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_deleteln_FUNCTION
#define deleteln_REQUIRED_ARGC 0
#define deleteln_OPTIONAL_ARGC 0
/* deleteln
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_deleteln(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = deleteln();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_delscreen_FUNCTION
#define delscreen_REQUIRED_ARGC 1
#define delscreen_OPTIONAL_ARGC 0
/* delscreen
 *
 * Parameters:
 * - arg1: SCREEN *
 * Return Type: void
 */
mrb_value
mrb_Curses_delscreen(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, SCREEN_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SCREEN expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SCREEN * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_SCREEN(arg1));

  /* Invocation */
  delscreen(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_delwin_FUNCTION
#define delwin_REQUIRED_ARGC 1
#define delwin_OPTIONAL_ARGC 0
/* delwin
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_delwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = delwin(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_derwin_FUNCTION
#define derwin_REQUIRED_ARGC 5
#define derwin_OPTIONAL_ARGC 0
/* derwin
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * - arg5: int
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_derwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  WINDOW * result = derwin(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_doupdate_FUNCTION
#define doupdate_REQUIRED_ARGC 0
#define doupdate_OPTIONAL_ARGC 0
/* doupdate
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_doupdate(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = doupdate();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_draino_FUNCTION
#define draino_REQUIRED_ARGC 1
#define draino_OPTIONAL_ARGC 0
/* draino
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_draino(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = draino(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_dupwin_FUNCTION
#define dupwin_REQUIRED_ARGC 1
#define dupwin_OPTIONAL_ARGC 0
/* dupwin
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_dupwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  WINDOW * result = dupwin(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_echo_FUNCTION
#define echo_REQUIRED_ARGC 0
#define echo_OPTIONAL_ARGC 0
/* echo
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_echo(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = echo();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_echochar_FUNCTION
#define echochar_REQUIRED_ARGC 1
#define echochar_OPTIONAL_ARGC 0
/* echochar
 *
 * Parameters:
 * - arg1: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_echochar(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = echochar(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_endwin_FUNCTION
#define endwin_REQUIRED_ARGC 0
#define endwin_OPTIONAL_ARGC 0
/* endwin
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_endwin(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = endwin();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_erase_FUNCTION
#define erase_REQUIRED_ARGC 0
#define erase_OPTIONAL_ARGC 0
/* erase
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_erase(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = erase();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_erasechar_FUNCTION
#define erasechar_REQUIRED_ARGC 0
#define erasechar_OPTIONAL_ARGC 0
/* erasechar
 *
 * Parameters: None
 * Return Type: char
 */
mrb_value
mrb_Curses_erasechar(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char result = erasechar();

  /* Box the return value */
  mrb_value return_value = mrb_str_new(mrb, &result, 1);

  return return_value;
}
#endif

#if BIND_filter_FUNCTION
#define filter_REQUIRED_ARGC 0
#define filter_OPTIONAL_ARGC 0
/* filter
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Curses_filter(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  filter();

  return mrb_nil_value();
}
#endif

#if BIND_fixterm_FUNCTION
#define fixterm_REQUIRED_ARGC 0
#define fixterm_OPTIONAL_ARGC 0
/* fixterm
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_fixterm(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = fixterm();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_flash_FUNCTION
#define flash_REQUIRED_ARGC 0
#define flash_OPTIONAL_ARGC 0
/* flash
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_flash(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = flash();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_flushinp_FUNCTION
#define flushinp_REQUIRED_ARGC 0
#define flushinp_OPTIONAL_ARGC 0
/* flushinp
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_flushinp(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = flushinp();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getattrs_FUNCTION
#define getattrs_REQUIRED_ARGC 1
#define getattrs_OPTIONAL_ARGC 0
/* getattrs
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: chtype
 */
mrb_value
mrb_Curses_getattrs(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  chtype result = getattrs(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getbegx_FUNCTION
#define getbegx_REQUIRED_ARGC 1
#define getbegx_OPTIONAL_ARGC 0
/* getbegx
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getbegx(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getbegx(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getbegy_FUNCTION
#define getbegy_REQUIRED_ARGC 1
#define getbegy_OPTIONAL_ARGC 0
/* getbegy
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getbegy(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getbegy(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getbkgd_FUNCTION
#define getbkgd_REQUIRED_ARGC 1
#define getbkgd_OPTIONAL_ARGC 0
/* getbkgd
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: chtype
 */
mrb_value
mrb_Curses_getbkgd(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  chtype result = getbkgd(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getbmap_FUNCTION
#define getbmap_REQUIRED_ARGC 0
#define getbmap_OPTIONAL_ARGC 0
/* getbmap
 *
 * Parameters: None
 * Return Type: unsigned long
 */
mrb_value
mrb_Curses_getbmap(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned long result = getbmap();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getcurx_FUNCTION
#define getcurx_REQUIRED_ARGC 1
#define getcurx_OPTIONAL_ARGC 0
/* getcurx
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getcurx(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getcurx(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getcury_FUNCTION
#define getcury_REQUIRED_ARGC 1
#define getcury_OPTIONAL_ARGC 0
/* getcury
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getcury(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getcury(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getmaxx_FUNCTION
#define getmaxx_REQUIRED_ARGC 1
#define getmaxx_OPTIONAL_ARGC 0
/* getmaxx
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getmaxx(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getmaxx(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getmaxy_FUNCTION
#define getmaxy_REQUIRED_ARGC 1
#define getmaxy_OPTIONAL_ARGC 0
/* getmaxy
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getmaxy(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getmaxy(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getmouse_FUNCTION
#define getmouse_REQUIRED_ARGC 0
#define getmouse_OPTIONAL_ARGC 0
/* getmouse
 *
 * Parameters: None
 * Return Type: unsigned long
 */
mrb_value
mrb_Curses_getmouse(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned long result = getmouse();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getnstr_FUNCTION
#define getnstr_REQUIRED_ARGC 2
#define getnstr_OPTIONAL_ARGC 0
/* getnstr
 *
 * Parameters:
 * - arg1: char *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_getnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg1 = strdup(mrb_string_value_cstr(mrb, &arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = getnstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg1);
  native_arg1 = NULL;

  return return_value;
}
#endif

#if BIND_getparx_FUNCTION
#define getparx_REQUIRED_ARGC 1
#define getparx_OPTIONAL_ARGC 0
/* getparx
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getparx(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getparx(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getpary_FUNCTION
#define getpary_REQUIRED_ARGC 1
#define getpary_OPTIONAL_ARGC 0
/* getpary
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_getpary(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = getpary(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_getstr_FUNCTION
#define getstr_REQUIRED_ARGC 1
#define getstr_OPTIONAL_ARGC 0
/* getstr
 *
 * Parameters:
 * - arg1: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_getstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg1 = strdup(mrb_string_value_cstr(mrb, &arg1));

  /* Invocation */
  int result = getstr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg1);
  native_arg1 = NULL;

  return return_value;
}
#endif

#if BIND_getwin_FUNCTION
#define getwin_REQUIRED_ARGC 1
#define getwin_OPTIONAL_ARGC 0
/* getwin
 *
 * Parameters:
 * - arg1: struct _iobuf *
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_getwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  TODO_type_check__iobuf_PTR(arg1);


  /* Unbox parameters */
  struct _iobuf * native_arg1 = TODO_mruby_unbox__iobuf_PTR(arg1);

  /* Invocation */
  WINDOW * result = getwin(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_halfdelay_FUNCTION
#define halfdelay_REQUIRED_ARGC 1
#define halfdelay_OPTIONAL_ARGC 0
/* halfdelay
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_halfdelay(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = halfdelay(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_has_colors_FUNCTION
#define has_colors_REQUIRED_ARGC 0
#define has_colors_OPTIONAL_ARGC 0
/* has_colors
 *
 * Parameters: None
 * Return Type: bool
 */
mrb_value
mrb_Curses_has_colors(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  return has_colors() ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_has_ic_FUNCTION
#define has_ic_REQUIRED_ARGC 0
#define has_ic_OPTIONAL_ARGC 0
/* has_ic
 *
 * Parameters: None
 * Return Type: bool
 */
mrb_value
mrb_Curses_has_ic(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  return has_ic() ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_has_il_FUNCTION
#define has_il_REQUIRED_ARGC 0
#define has_il_OPTIONAL_ARGC 0
/* has_il
 *
 * Parameters: None
 * Return Type: bool
 */
mrb_value
mrb_Curses_has_il(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  return has_il() ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_has_key_FUNCTION
#define has_key_REQUIRED_ARGC 1
#define has_key_OPTIONAL_ARGC 0
/* has_key
 *
 * Parameters:
 * - arg1: int
 * Return Type: bool
 */
mrb_value
mrb_Curses_has_key(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  return has_key(native_arg1) ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_hide_panel_FUNCTION
#define hide_panel_REQUIRED_ARGC 1
#define hide_panel_OPTIONAL_ARGC 0
/* hide_panel
 *
 * Parameters:
 * - pan: struct panel *
 * Return Type: int
 */
mrb_value
mrb_Curses_hide_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  int result = hide_panel(native_pan);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_hline_FUNCTION
#define hline_REQUIRED_ARGC 2
#define hline_OPTIONAL_ARGC 0
/* hline
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_hline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = hline(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_idcok_FUNCTION
#define idcok_REQUIRED_ARGC 2
#define idcok_OPTIONAL_ARGC 0
/* idcok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: void
 */
mrb_value
mrb_Curses_idcok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  idcok(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_idlok_FUNCTION
#define idlok_REQUIRED_ARGC 2
#define idlok_OPTIONAL_ARGC 0
/* idlok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_idlok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = idlok(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_immedok_FUNCTION
#define immedok_REQUIRED_ARGC 2
#define immedok_OPTIONAL_ARGC 0
/* immedok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: void
 */
mrb_value
mrb_Curses_immedok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  immedok(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_inch_FUNCTION
#define inch_REQUIRED_ARGC 0
#define inch_OPTIONAL_ARGC 0
/* inch
 *
 * Parameters: None
 * Return Type: chtype
 */
mrb_value
mrb_Curses_inch(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  chtype result = inch();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_inchnstr_FUNCTION
#define inchnstr_REQUIRED_ARGC 2
#define inchnstr_OPTIONAL_ARGC 0
/* inchnstr
 *
 * Parameters:
 * - arg1: unsigned long *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_inchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  TODO_type_check_unsigned_long_PTR(arg1);
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long * native_arg1 = TODO_mruby_unbox_unsigned_long_PTR(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = inchnstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_inchstr_FUNCTION
#define inchstr_REQUIRED_ARGC 1
#define inchstr_OPTIONAL_ARGC 0
/* inchstr
 *
 * Parameters:
 * - arg1: unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_inchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  TODO_type_check_unsigned_long_PTR(arg1);


  /* Unbox parameters */
  unsigned long * native_arg1 = TODO_mruby_unbox_unsigned_long_PTR(arg1);

  /* Invocation */
  int result = inchstr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_init_color_FUNCTION
#define init_color_REQUIRED_ARGC 4
#define init_color_OPTIONAL_ARGC 0
/* init_color
 *
 * Parameters:
 * - arg1: short
 * - arg2: short
 * - arg3: short
 * - arg4: short
 * Return Type: int
 */
mrb_value
mrb_Curses_init_color(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  short native_arg2 = mrb_fixnum(arg2);

  short native_arg3 = mrb_fixnum(arg3);

  short native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = init_color(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_init_pair_FUNCTION
#define init_pair_REQUIRED_ARGC 3
#define init_pair_OPTIONAL_ARGC 0
/* init_pair
 *
 * Parameters:
 * - arg1: short
 * - arg2: short
 * - arg3: short
 * Return Type: int
 */
mrb_value
mrb_Curses_init_pair(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  short native_arg2 = mrb_fixnum(arg2);

  short native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = init_pair(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_initscr_FUNCTION
#define initscr_REQUIRED_ARGC 0
#define initscr_OPTIONAL_ARGC 0
/* initscr
 *
 * Parameters: None
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_initscr(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  WINDOW * result = initscr();

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_innstr_FUNCTION
#define innstr_REQUIRED_ARGC 2
#define innstr_OPTIONAL_ARGC 0
/* innstr
 *
 * Parameters:
 * - arg1: char *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_innstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg1 = strdup(mrb_string_value_cstr(mrb, &arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = innstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg1);
  native_arg1 = NULL;

  return return_value;
}
#endif

#if BIND_insch_FUNCTION
#define insch_REQUIRED_ARGC 1
#define insch_OPTIONAL_ARGC 0
/* insch
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_insch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = insch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_insdelln_FUNCTION
#define insdelln_REQUIRED_ARGC 1
#define insdelln_OPTIONAL_ARGC 0
/* insdelln
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_insdelln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = insdelln(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_insertln_FUNCTION
#define insertln_REQUIRED_ARGC 0
#define insertln_OPTIONAL_ARGC 0
/* insertln
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_insertln(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = insertln();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_insnstr_FUNCTION
#define insnstr_REQUIRED_ARGC 2
#define insnstr_OPTIONAL_ARGC 0
/* insnstr
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_insnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = insnstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_insrawch_FUNCTION
#define insrawch_REQUIRED_ARGC 1
#define insrawch_OPTIONAL_ARGC 0
/* insrawch
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_insrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = insrawch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_insstr_FUNCTION
#define insstr_REQUIRED_ARGC 1
#define insstr_OPTIONAL_ARGC 0
/* insstr
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_insstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = insstr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_instr_FUNCTION
#define instr_REQUIRED_ARGC 1
#define instr_OPTIONAL_ARGC 0
/* instr
 *
 * Parameters:
 * - arg1: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_instr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg1 = strdup(mrb_string_value_cstr(mrb, &arg1));

  /* Invocation */
  int result = instr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg1);
  native_arg1 = NULL;

  return return_value;
}
#endif

#if BIND_intrflush_FUNCTION
#define intrflush_REQUIRED_ARGC 2
#define intrflush_OPTIONAL_ARGC 0
/* intrflush
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_intrflush(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = intrflush(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_is_linetouched_FUNCTION
#define is_linetouched_REQUIRED_ARGC 2
#define is_linetouched_OPTIONAL_ARGC 0
/* is_linetouched
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * Return Type: bool
 */
mrb_value
mrb_Curses_is_linetouched(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  return is_linetouched(native_arg1, native_arg2) ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_is_termresized_FUNCTION
#define is_termresized_REQUIRED_ARGC 0
#define is_termresized_OPTIONAL_ARGC 0
/* is_termresized
 *
 * Parameters: None
 * Return Type: bool
 */
mrb_value
mrb_Curses_is_termresized(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  return is_termresized() ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_is_wintouched_FUNCTION
#define is_wintouched_REQUIRED_ARGC 1
#define is_wintouched_OPTIONAL_ARGC 0
/* is_wintouched
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: bool
 */
mrb_value
mrb_Curses_is_wintouched(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  return is_wintouched(native_arg1) ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_isendwin_FUNCTION
#define isendwin_REQUIRED_ARGC 0
#define isendwin_OPTIONAL_ARGC 0
/* isendwin
 *
 * Parameters: None
 * Return Type: bool
 */
mrb_value
mrb_Curses_isendwin(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  return isendwin() ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_keyname_FUNCTION
#define keyname_REQUIRED_ARGC 1
#define keyname_OPTIONAL_ARGC 0
/* keyname
 *
 * Parameters:
 * - arg1: int
 * Return Type: char *
 */
mrb_value
mrb_Curses_keyname(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  char * result = keyname(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_keypad_FUNCTION
#define keypad_REQUIRED_ARGC 2
#define keypad_OPTIONAL_ARGC 0
/* keypad
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_keypad(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = keypad(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_killchar_FUNCTION
#define killchar_REQUIRED_ARGC 0
#define killchar_OPTIONAL_ARGC 0
/* killchar
 *
 * Parameters: None
 * Return Type: char
 */
mrb_value
mrb_Curses_killchar(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char result = killchar();

  /* Box the return value */
  mrb_value return_value = mrb_str_new(mrb, &result, 1);

  return return_value;
}
#endif

#if BIND_leaveok_FUNCTION
#define leaveok_REQUIRED_ARGC 2
#define leaveok_OPTIONAL_ARGC 0
/* leaveok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_leaveok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = leaveok(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_longname_FUNCTION
#define longname_REQUIRED_ARGC 0
#define longname_OPTIONAL_ARGC 0
/* longname
 *
 * Parameters: None
 * Return Type: char *
 */
mrb_value
mrb_Curses_longname(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char * result = longname();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_map_button_FUNCTION
#define map_button_REQUIRED_ARGC 1
#define map_button_OPTIONAL_ARGC 0
/* map_button
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_map_button(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = map_button(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_meta_FUNCTION
#define meta_REQUIRED_ARGC 2
#define meta_OPTIONAL_ARGC 0
/* meta
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_meta(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = meta(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mouse_off_FUNCTION
#define mouse_off_REQUIRED_ARGC 1
#define mouse_off_OPTIONAL_ARGC 0
/* mouse_off
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mouse_off(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = mouse_off(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mouse_on_FUNCTION
#define mouse_on_REQUIRED_ARGC 1
#define mouse_on_OPTIONAL_ARGC 0
/* mouse_on
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mouse_on(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = mouse_on(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mouse_set_FUNCTION
#define mouse_set_REQUIRED_ARGC 1
#define mouse_set_OPTIONAL_ARGC 0
/* mouse_set
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mouse_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = mouse_set(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mouse_trafo_FUNCTION
#define mouse_trafo_REQUIRED_ARGC 3
#define mouse_trafo_OPTIONAL_ARGC 0
/* mouse_trafo
 *
 * Parameters:
 * - arg1: int *
 * - arg2: int *
 * - arg3: unsigned char
 * Return Type: bool
 */
mrb_value
mrb_Curses_mouse_trafo(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  TODO_type_check_int_PTR(arg1);
  TODO_type_check_int_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int * native_arg1 = TODO_mruby_unbox_int_PTR(arg1);

  int * native_arg2 = TODO_mruby_unbox_int_PTR(arg2);

  unsigned char native_arg3 = *mrb_string_value_ptr(mrb, arg3);

  /* Invocation */
  return mouse_trafo(native_arg1, native_arg2, native_arg3) ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_mouseinterval_FUNCTION
#define mouseinterval_REQUIRED_ARGC 1
#define mouseinterval_OPTIONAL_ARGC 0
/* mouseinterval
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mouseinterval(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = mouseinterval(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mousemask_FUNCTION
#define mousemask_REQUIRED_ARGC 2
#define mousemask_OPTIONAL_ARGC 0
/* mousemask
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: unsigned long *
 * Return Type: mmask_t
 */
mrb_value
mrb_Curses_mousemask(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg2);


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  unsigned long * native_arg2 = TODO_mruby_unbox_unsigned_long_PTR(arg2);

  /* Invocation */
  mmask_t result = mousemask(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_move_FUNCTION
#define move_REQUIRED_ARGC 2
#define move_OPTIONAL_ARGC 0
/* move
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_move(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = move(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_move_panel_FUNCTION
#define move_panel_REQUIRED_ARGC 3
#define move_panel_OPTIONAL_ARGC 0
/* move_panel
 *
 * Parameters:
 * - pan: struct panel *
 * - starty: int
 * - startx: int
 * Return Type: int
 */
mrb_value
mrb_Curses_move_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;
  mrb_value starty;
  mrb_value startx;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &pan, &starty, &startx);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, starty, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, startx, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  int native_starty = mrb_fixnum(starty);

  int native_startx = mrb_fixnum(startx);

  /* Invocation */
  int result = move_panel(native_pan, native_starty, native_startx);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvaddch_FUNCTION
#define mvaddch_REQUIRED_ARGC 3
#define mvaddch_OPTIONAL_ARGC 0
/* mvaddch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvaddch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const unsigned long native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvaddch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvaddchnstr_FUNCTION
#define mvaddchnstr_REQUIRED_ARGC 4
#define mvaddchnstr_OPTIONAL_ARGC 0
/* mvaddchnstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const unsigned long *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvaddchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const unsigned long * native_arg3 = TODO_mruby_unbox_unsigned_long_PTR(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvaddchnstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvaddchstr_FUNCTION
#define mvaddchstr_REQUIRED_ARGC 3
#define mvaddchstr_OPTIONAL_ARGC 0
/* mvaddchstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvaddchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg3);


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const unsigned long * native_arg3 = TODO_mruby_unbox_unsigned_long_PTR(arg3);

  /* Invocation */
  int result = mvaddchstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvaddnstr_FUNCTION
#define mvaddnstr_REQUIRED_ARGC 4
#define mvaddnstr_OPTIONAL_ARGC 0
/* mvaddnstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const char *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvaddnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvaddnstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvaddrawch_FUNCTION
#define mvaddrawch_REQUIRED_ARGC 3
#define mvaddrawch_OPTIONAL_ARGC 0
/* mvaddrawch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvaddrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvaddrawch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvaddstr_FUNCTION
#define mvaddstr_REQUIRED_ARGC 3
#define mvaddstr_OPTIONAL_ARGC 0
/* mvaddstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvaddstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  /* Invocation */
  int result = mvaddstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvchgat_FUNCTION
#define mvchgat_REQUIRED_ARGC 6
#define mvchgat_OPTIONAL_ARGC 0
/* mvchgat
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long
 * - arg5: short
 * - arg6: const void *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvchgat(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg6);


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  short native_arg5 = mrb_fixnum(arg5);

  const void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  /* Invocation */
  int result = mvchgat(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvcur_FUNCTION
#define mvcur_REQUIRED_ARGC 4
#define mvcur_OPTIONAL_ARGC 0
/* mvcur
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvcur(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvcur(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvdelch_FUNCTION
#define mvdelch_REQUIRED_ARGC 2
#define mvdelch_OPTIONAL_ARGC 0
/* mvdelch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvdelch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = mvdelch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvdeleteln_FUNCTION
#define mvdeleteln_REQUIRED_ARGC 2
#define mvdeleteln_OPTIONAL_ARGC 0
/* mvdeleteln
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvdeleteln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = mvdeleteln(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvderwin_FUNCTION
#define mvderwin_REQUIRED_ARGC 3
#define mvderwin_OPTIONAL_ARGC 0
/* mvderwin
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvderwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvderwin(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvgetch_FUNCTION
#define mvgetch_REQUIRED_ARGC 2
#define mvgetch_OPTIONAL_ARGC 0
/* mvgetch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvgetch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = mvgetch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvgetnstr_FUNCTION
#define mvgetnstr_REQUIRED_ARGC 4
#define mvgetnstr_OPTIONAL_ARGC 0
/* mvgetnstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: char *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvgetnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg3 = strdup(mrb_string_value_cstr(mrb, &arg3));

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvgetnstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg3);
  native_arg3 = NULL;

  return return_value;
}
#endif

#if BIND_mvgetstr_FUNCTION
#define mvgetstr_REQUIRED_ARGC 3
#define mvgetstr_OPTIONAL_ARGC 0
/* mvgetstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvgetstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg3 = strdup(mrb_string_value_cstr(mrb, &arg3));

  /* Invocation */
  int result = mvgetstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg3);
  native_arg3 = NULL;

  return return_value;
}
#endif

#if BIND_mvhline_FUNCTION
#define mvhline_REQUIRED_ARGC 4
#define mvhline_OPTIONAL_ARGC 0
/* mvhline
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvhline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvhline(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinch_FUNCTION
#define mvinch_REQUIRED_ARGC 2
#define mvinch_OPTIONAL_ARGC 0
/* mvinch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: chtype
 */
mrb_value
mrb_Curses_mvinch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  chtype result = mvinch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinchnstr_FUNCTION
#define mvinchnstr_REQUIRED_ARGC 4
#define mvinchnstr_OPTIONAL_ARGC 0
/* mvinchnstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long * native_arg3 = TODO_mruby_unbox_unsigned_long_PTR(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvinchnstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinchstr_FUNCTION
#define mvinchstr_REQUIRED_ARGC 3
#define mvinchstr_OPTIONAL_ARGC 0
/* mvinchstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg3);


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long * native_arg3 = TODO_mruby_unbox_unsigned_long_PTR(arg3);

  /* Invocation */
  int result = mvinchstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinnstr_FUNCTION
#define mvinnstr_REQUIRED_ARGC 4
#define mvinnstr_OPTIONAL_ARGC 0
/* mvinnstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: char *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg3 = strdup(mrb_string_value_cstr(mrb, &arg3));

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvinnstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg3);
  native_arg3 = NULL;

  return return_value;
}
#endif

#if BIND_mvinsch_FUNCTION
#define mvinsch_REQUIRED_ARGC 3
#define mvinsch_OPTIONAL_ARGC 0
/* mvinsch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinsch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvinsch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinsertln_FUNCTION
#define mvinsertln_REQUIRED_ARGC 2
#define mvinsertln_OPTIONAL_ARGC 0
/* mvinsertln
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinsertln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = mvinsertln(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinsnstr_FUNCTION
#define mvinsnstr_REQUIRED_ARGC 4
#define mvinsnstr_OPTIONAL_ARGC 0
/* mvinsnstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const char *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinsnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvinsnstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinsrawch_FUNCTION
#define mvinsrawch_REQUIRED_ARGC 3
#define mvinsrawch_OPTIONAL_ARGC 0
/* mvinsrawch
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinsrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvinsrawch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinsstr_FUNCTION
#define mvinsstr_REQUIRED_ARGC 3
#define mvinsstr_OPTIONAL_ARGC 0
/* mvinsstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinsstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  /* Invocation */
  int result = mvinsstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvinstr_FUNCTION
#define mvinstr_REQUIRED_ARGC 3
#define mvinstr_OPTIONAL_ARGC 0
/* mvinstr
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvinstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg3 = strdup(mrb_string_value_cstr(mrb, &arg3));

  /* Invocation */
  int result = mvinstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg3);
  native_arg3 = NULL;

  return return_value;
}
#endif

#if BIND_mvprintw_FUNCTION
#define mvprintw_REQUIRED_ARGC 3
#define mvprintw_OPTIONAL_ARGC 0
/* mvprintw
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvprintw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  /* Invocation */
  int result = mvprintw(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvscanw_FUNCTION
#define mvscanw_REQUIRED_ARGC 3
#define mvscanw_OPTIONAL_ARGC 0
/* mvscanw
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvscanw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  /* Invocation */
  int result = mvscanw(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvvline_FUNCTION
#define mvvline_REQUIRED_ARGC 4
#define mvvline_OPTIONAL_ARGC 0
/* mvvline
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: unsigned long
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvvline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvvline(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwaddch_FUNCTION
#define mvwaddch_REQUIRED_ARGC 4
#define mvwaddch_OPTIONAL_ARGC 0
/* mvwaddch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwaddch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const unsigned long native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvwaddch(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwaddchnstr_FUNCTION
#define mvwaddchnstr_REQUIRED_ARGC 5
#define mvwaddchnstr_OPTIONAL_ARGC 0
/* mvwaddchnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const unsigned long *
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwaddchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg4);
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const unsigned long * native_arg4 = TODO_mruby_unbox_unsigned_long_PTR(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwaddchnstr(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwaddchstr_FUNCTION
#define mvwaddchstr_REQUIRED_ARGC 4
#define mvwaddchstr_OPTIONAL_ARGC 0
/* mvwaddchstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwaddchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg4);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const unsigned long * native_arg4 = TODO_mruby_unbox_unsigned_long_PTR(arg4);

  /* Invocation */
  int result = mvwaddchstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwaddnstr_FUNCTION
#define mvwaddnstr_REQUIRED_ARGC 5
#define mvwaddnstr_OPTIONAL_ARGC 0
/* mvwaddnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const char *
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwaddnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwaddnstr(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwaddrawch_FUNCTION
#define mvwaddrawch_REQUIRED_ARGC 4
#define mvwaddrawch_OPTIONAL_ARGC 0
/* mvwaddrawch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwaddrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvwaddrawch(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwaddstr_FUNCTION
#define mvwaddstr_REQUIRED_ARGC 4
#define mvwaddstr_OPTIONAL_ARGC 0
/* mvwaddstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwaddstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  /* Invocation */
  int result = mvwaddstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwchgat_FUNCTION
#define mvwchgat_REQUIRED_ARGC 7
#define mvwchgat_OPTIONAL_ARGC 0
/* mvwchgat
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * - arg5: unsigned long
 * - arg6: short
 * - arg7: const void *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwchgat(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg7);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  unsigned long native_arg5 = mrb_fixnum(arg5);

  short native_arg6 = mrb_fixnum(arg6);

  const void * native_arg7 = TODO_mruby_unbox_void_PTR(arg7);

  /* Invocation */
  int result = mvwchgat(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwdelch_FUNCTION
#define mvwdelch_REQUIRED_ARGC 3
#define mvwdelch_OPTIONAL_ARGC 0
/* mvwdelch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwdelch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvwdelch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwdeleteln_FUNCTION
#define mvwdeleteln_REQUIRED_ARGC 3
#define mvwdeleteln_OPTIONAL_ARGC 0
/* mvwdeleteln
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwdeleteln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvwdeleteln(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwgetch_FUNCTION
#define mvwgetch_REQUIRED_ARGC 3
#define mvwgetch_OPTIONAL_ARGC 0
/* mvwgetch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwgetch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvwgetch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwgetnstr_FUNCTION
#define mvwgetnstr_REQUIRED_ARGC 5
#define mvwgetnstr_OPTIONAL_ARGC 0
/* mvwgetnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: char *
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwgetnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg4 = strdup(mrb_string_value_cstr(mrb, &arg4));

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwgetnstr(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg4);
  native_arg4 = NULL;

  return return_value;
}
#endif

#if BIND_mvwgetstr_FUNCTION
#define mvwgetstr_REQUIRED_ARGC 4
#define mvwgetstr_OPTIONAL_ARGC 0
/* mvwgetstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwgetstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg4 = strdup(mrb_string_value_cstr(mrb, &arg4));

  /* Invocation */
  int result = mvwgetstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg4);
  native_arg4 = NULL;

  return return_value;
}
#endif

#if BIND_mvwhline_FUNCTION
#define mvwhline_REQUIRED_ARGC 5
#define mvwhline_OPTIONAL_ARGC 0
/* mvwhline
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwhline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwhline(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwin_FUNCTION
#define mvwin_REQUIRED_ARGC 3
#define mvwin_OPTIONAL_ARGC 0
/* mvwin
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvwin(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinch_FUNCTION
#define mvwinch_REQUIRED_ARGC 3
#define mvwinch_OPTIONAL_ARGC 0
/* mvwinch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: chtype
 */
mrb_value
mrb_Curses_mvwinch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  chtype result = mvwinch(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinchnstr_FUNCTION
#define mvwinchnstr_REQUIRED_ARGC 5
#define mvwinchnstr_OPTIONAL_ARGC 0
/* mvwinchnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long *
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg4);
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long * native_arg4 = TODO_mruby_unbox_unsigned_long_PTR(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwinchnstr(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinchstr_FUNCTION
#define mvwinchstr_REQUIRED_ARGC 4
#define mvwinchstr_OPTIONAL_ARGC 0
/* mvwinchstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg4);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long * native_arg4 = TODO_mruby_unbox_unsigned_long_PTR(arg4);

  /* Invocation */
  int result = mvwinchstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinnstr_FUNCTION
#define mvwinnstr_REQUIRED_ARGC 5
#define mvwinnstr_OPTIONAL_ARGC 0
/* mvwinnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: char *
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg4 = strdup(mrb_string_value_cstr(mrb, &arg4));

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwinnstr(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg4);
  native_arg4 = NULL;

  return return_value;
}
#endif

#if BIND_mvwinsch_FUNCTION
#define mvwinsch_REQUIRED_ARGC 4
#define mvwinsch_OPTIONAL_ARGC 0
/* mvwinsch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinsch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvwinsch(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinsertln_FUNCTION
#define mvwinsertln_REQUIRED_ARGC 3
#define mvwinsertln_OPTIONAL_ARGC 0
/* mvwinsertln
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinsertln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = mvwinsertln(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinsnstr_FUNCTION
#define mvwinsnstr_REQUIRED_ARGC 5
#define mvwinsnstr_OPTIONAL_ARGC 0
/* mvwinsnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const char *
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinsnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwinsnstr(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinsrawch_FUNCTION
#define mvwinsrawch_REQUIRED_ARGC 4
#define mvwinsrawch_OPTIONAL_ARGC 0
/* mvwinsrawch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinsrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = mvwinsrawch(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinsstr_FUNCTION
#define mvwinsstr_REQUIRED_ARGC 4
#define mvwinsstr_OPTIONAL_ARGC 0
/* mvwinsstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinsstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  /* Invocation */
  int result = mvwinsstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwinstr_FUNCTION
#define mvwinstr_REQUIRED_ARGC 4
#define mvwinstr_OPTIONAL_ARGC 0
/* mvwinstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwinstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg4 = strdup(mrb_string_value_cstr(mrb, &arg4));

  /* Invocation */
  int result = mvwinstr(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg4);
  native_arg4 = NULL;

  return return_value;
}
#endif

#if BIND_mvwprintw_FUNCTION
#define mvwprintw_REQUIRED_ARGC 4
#define mvwprintw_OPTIONAL_ARGC 0
/* mvwprintw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwprintw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  /* Invocation */
  int result = mvwprintw(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwscanw_FUNCTION
#define mvwscanw_REQUIRED_ARGC 4
#define mvwscanw_OPTIONAL_ARGC 0
/* mvwscanw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwscanw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  /* Invocation */
  int result = mvwscanw(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_mvwvline_FUNCTION
#define mvwvline_REQUIRED_ARGC 5
#define mvwvline_OPTIONAL_ARGC 0
/* mvwvline
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: unsigned long
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_mvwvline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = mvwvline(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_napms_FUNCTION
#define napms_REQUIRED_ARGC 1
#define napms_OPTIONAL_ARGC 0
/* napms
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_napms(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = napms(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_nc_getmouse_FUNCTION
#define nc_getmouse_REQUIRED_ARGC 1
#define nc_getmouse_OPTIONAL_ARGC 0
/* nc_getmouse
 *
 * Parameters:
 * - arg1: MEVENT *
 * Return Type: int
 */
mrb_value
mrb_Curses_nc_getmouse(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, MEVENT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MEVENT expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  MEVENT * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_MEVENT(arg1));

  /* Invocation */
  int result = nc_getmouse(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_new_panel_FUNCTION
#define new_panel_REQUIRED_ARGC 1
#define new_panel_OPTIONAL_ARGC 0
/* new_panel
 *
 * Parameters:
 * - win: struct _win *
 * Return Type: PANEL *
 */
mrb_value
mrb_Curses_new_panel(mrb_state* mrb, mrb_value self) {
  mrb_value win;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &win);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, win, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_win = (mrb_nil_p(win) ? NULL : mruby_unbox__win(win));

  /* Invocation */
  PANEL * result = new_panel(native_win);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_panel(mrb, result));

  return return_value;
}
#endif

#if BIND_newpad_FUNCTION
#define newpad_REQUIRED_ARGC 2
#define newpad_OPTIONAL_ARGC 0
/* newpad
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_newpad(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  WINDOW * result = newpad(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_newterm_FUNCTION
#define newterm_REQUIRED_ARGC 3
#define newterm_OPTIONAL_ARGC 0
/* newterm
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: struct _iobuf *
 * - arg3: struct _iobuf *
 * Return Type: SCREEN *
 */
mrb_value
mrb_Curses_newterm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check__iobuf_PTR(arg2);
  TODO_type_check__iobuf_PTR(arg3);


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  struct _iobuf * native_arg2 = TODO_mruby_unbox__iobuf_PTR(arg2);

  struct _iobuf * native_arg3 = TODO_mruby_unbox__iobuf_PTR(arg3);

  /* Invocation */
  SCREEN * result = newterm(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SCREEN(mrb, result));

  return return_value;
}
#endif

#if BIND_newwin_FUNCTION
#define newwin_REQUIRED_ARGC 4
#define newwin_OPTIONAL_ARGC 0
/* newwin
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_newwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  WINDOW * result = newwin(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_nl_FUNCTION
#define nl_REQUIRED_ARGC 0
#define nl_OPTIONAL_ARGC 0
/* nl
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_nl(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = nl();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_nocbreak_FUNCTION
#define nocbreak_REQUIRED_ARGC 0
#define nocbreak_OPTIONAL_ARGC 0
/* nocbreak
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_nocbreak(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = nocbreak();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_nocrmode_FUNCTION
#define nocrmode_REQUIRED_ARGC 0
#define nocrmode_OPTIONAL_ARGC 0
/* nocrmode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_nocrmode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = nocrmode();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_nodelay_FUNCTION
#define nodelay_REQUIRED_ARGC 2
#define nodelay_OPTIONAL_ARGC 0
/* nodelay
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_nodelay(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = nodelay(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_noecho_FUNCTION
#define noecho_REQUIRED_ARGC 0
#define noecho_OPTIONAL_ARGC 0
/* noecho
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_noecho(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = noecho();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_nonl_FUNCTION
#define nonl_REQUIRED_ARGC 0
#define nonl_OPTIONAL_ARGC 0
/* nonl
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_nonl(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = nonl();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_noqiflush_FUNCTION
#define noqiflush_REQUIRED_ARGC 0
#define noqiflush_OPTIONAL_ARGC 0
/* noqiflush
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Curses_noqiflush(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  noqiflush();

  return mrb_nil_value();
}
#endif

#if BIND_noraw_FUNCTION
#define noraw_REQUIRED_ARGC 0
#define noraw_OPTIONAL_ARGC 0
/* noraw
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_noraw(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = noraw();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_notimeout_FUNCTION
#define notimeout_REQUIRED_ARGC 2
#define notimeout_OPTIONAL_ARGC 0
/* notimeout
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_notimeout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = notimeout(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_overlay_FUNCTION
#define overlay_REQUIRED_ARGC 2
#define overlay_OPTIONAL_ARGC 0
/* overlay
 *
 * Parameters:
 * - arg1: const struct _win *
 * - arg2: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_overlay(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  struct _win * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox__win(arg2));

  /* Invocation */
  int result = overlay(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_overwrite_FUNCTION
#define overwrite_REQUIRED_ARGC 2
#define overwrite_OPTIONAL_ARGC 0
/* overwrite
 *
 * Parameters:
 * - arg1: const struct _win *
 * - arg2: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_overwrite(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  struct _win * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox__win(arg2));

  /* Invocation */
  int result = overwrite(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_pair_content_FUNCTION
#define pair_content_REQUIRED_ARGC 3
#define pair_content_OPTIONAL_ARGC 0
/* pair_content
 *
 * Parameters:
 * - arg1: short
 * - arg2: short *
 * - arg3: short *
 * Return Type: int
 */
mrb_value
mrb_Curses_pair_content(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_short_PTR(arg2);
  TODO_type_check_short_PTR(arg3);


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  short * native_arg2 = TODO_mruby_unbox_short_PTR(arg2);

  short * native_arg3 = TODO_mruby_unbox_short_PTR(arg3);

  /* Invocation */
  int result = pair_content(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_panel_above_FUNCTION
#define panel_above_REQUIRED_ARGC 1
#define panel_above_OPTIONAL_ARGC 0
/* panel_above
 *
 * Parameters:
 * - pan: const struct panel *
 * Return Type: PANEL *
 */
mrb_value
mrb_Curses_panel_above(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  PANEL * result = panel_above(native_pan);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_panel(mrb, result));

  return return_value;
}
#endif

#if BIND_panel_below_FUNCTION
#define panel_below_REQUIRED_ARGC 1
#define panel_below_OPTIONAL_ARGC 0
/* panel_below
 *
 * Parameters:
 * - pan: const struct panel *
 * Return Type: PANEL *
 */
mrb_value
mrb_Curses_panel_below(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  PANEL * result = panel_below(native_pan);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_panel(mrb, result));

  return return_value;
}
#endif

#if BIND_panel_hidden_FUNCTION
#define panel_hidden_REQUIRED_ARGC 1
#define panel_hidden_OPTIONAL_ARGC 0
/* panel_hidden
 *
 * Parameters:
 * - pan: const struct panel *
 * Return Type: int
 */
mrb_value
mrb_Curses_panel_hidden(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  int result = panel_hidden(native_pan);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_panel_userptr_FUNCTION
#define panel_userptr_REQUIRED_ARGC 1
#define panel_userptr_OPTIONAL_ARGC 0
/* panel_userptr
 *
 * Parameters:
 * - pan: const struct panel *
 * Return Type: const void *
 */
mrb_value
mrb_Curses_panel_userptr(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  const void * result = panel_userptr(native_pan);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_panel_window_FUNCTION
#define panel_window_REQUIRED_ARGC 1
#define panel_window_OPTIONAL_ARGC 0
/* panel_window
 *
 * Parameters:
 * - pan: const struct panel *
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_panel_window(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  WINDOW * result = panel_window(native_pan);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_PDC_clearclipboard_FUNCTION
#define PDC_clearclipboard_REQUIRED_ARGC 0
#define PDC_clearclipboard_OPTIONAL_ARGC 0
/* PDC_clearclipboard
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_clearclipboard(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = PDC_clearclipboard();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_debug_FUNCTION
#define PDC_debug_REQUIRED_ARGC 1
#define PDC_debug_OPTIONAL_ARGC 0
/* PDC_debug
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: void
 */
mrb_value
mrb_Curses_PDC_debug(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  PDC_debug(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_PDC_freeclipboard_FUNCTION
#define PDC_freeclipboard_REQUIRED_ARGC 1
#define PDC_freeclipboard_OPTIONAL_ARGC 0
/* PDC_freeclipboard
 *
 * Parameters:
 * - arg1: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_freeclipboard(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg1 = strdup(mrb_string_value_cstr(mrb, &arg1));

  /* Invocation */
  int result = PDC_freeclipboard(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg1);
  native_arg1 = NULL;

  return return_value;
}
#endif

#if BIND_PDC_get_input_fd_FUNCTION
#define PDC_get_input_fd_REQUIRED_ARGC 0
#define PDC_get_input_fd_OPTIONAL_ARGC 0
/* PDC_get_input_fd
 *
 * Parameters: None
 * Return Type: unsigned long
 */
mrb_value
mrb_Curses_PDC_get_input_fd(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned long result = PDC_get_input_fd();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_get_key_modifiers_FUNCTION
#define PDC_get_key_modifiers_REQUIRED_ARGC 0
#define PDC_get_key_modifiers_OPTIONAL_ARGC 0
/* PDC_get_key_modifiers
 *
 * Parameters: None
 * Return Type: unsigned long
 */
mrb_value
mrb_Curses_PDC_get_key_modifiers(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned long result = PDC_get_key_modifiers();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_getclipboard_FUNCTION
#define PDC_getclipboard_REQUIRED_ARGC 2
#define PDC_getclipboard_OPTIONAL_ARGC 0
/* PDC_getclipboard
 *
 * Parameters:
 * - arg1: char **
 * - arg2: long *
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_getclipboard(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  TODO_type_check_char_PTR_PTR(arg1);
  TODO_type_check_long_PTR(arg2);


  /* Unbox parameters */
  char ** native_arg1 = TODO_mruby_unbox_char_PTR_PTR(arg1);

  long * native_arg2 = TODO_mruby_unbox_long_PTR(arg2);

  /* Invocation */
  int result = PDC_getclipboard(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_return_key_modifiers_FUNCTION
#define PDC_return_key_modifiers_REQUIRED_ARGC 1
#define PDC_return_key_modifiers_OPTIONAL_ARGC 0
/* PDC_return_key_modifiers
 *
 * Parameters:
 * - arg1: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_return_key_modifiers(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char native_arg1 = *mrb_string_value_ptr(mrb, arg1);

  /* Invocation */
  int result = PDC_return_key_modifiers(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_save_key_modifiers_FUNCTION
#define PDC_save_key_modifiers_REQUIRED_ARGC 1
#define PDC_save_key_modifiers_OPTIONAL_ARGC 0
/* PDC_save_key_modifiers
 *
 * Parameters:
 * - arg1: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_save_key_modifiers(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char native_arg1 = *mrb_string_value_ptr(mrb, arg1);

  /* Invocation */
  int result = PDC_save_key_modifiers(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_set_blink_FUNCTION
#define PDC_set_blink_REQUIRED_ARGC 1
#define PDC_set_blink_OPTIONAL_ARGC 0
/* PDC_set_blink
 *
 * Parameters:
 * - arg1: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_set_blink(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char native_arg1 = *mrb_string_value_ptr(mrb, arg1);

  /* Invocation */
  int result = PDC_set_blink(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_set_line_color_FUNCTION
#define PDC_set_line_color_REQUIRED_ARGC 1
#define PDC_set_line_color_OPTIONAL_ARGC 0
/* PDC_set_line_color
 *
 * Parameters:
 * - arg1: short
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_set_line_color(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = PDC_set_line_color(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_set_title_FUNCTION
#define PDC_set_title_REQUIRED_ARGC 1
#define PDC_set_title_OPTIONAL_ARGC 0
/* PDC_set_title
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: void
 */
mrb_value
mrb_Curses_PDC_set_title(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  PDC_set_title(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_PDC_setclipboard_FUNCTION
#define PDC_setclipboard_REQUIRED_ARGC 2
#define PDC_setclipboard_OPTIONAL_ARGC 0
/* PDC_setclipboard
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: long
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_setclipboard(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = PDC_setclipboard(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_PDC_ungetch_FUNCTION
#define PDC_ungetch_REQUIRED_ARGC 1
#define PDC_ungetch_OPTIONAL_ARGC 0
/* PDC_ungetch
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_PDC_ungetch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = PDC_ungetch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_pechochar_FUNCTION
#define pechochar_REQUIRED_ARGC 2
#define pechochar_OPTIONAL_ARGC 0
/* pechochar
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_pechochar(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = pechochar(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_pnoutrefresh_FUNCTION
#define pnoutrefresh_REQUIRED_ARGC 7
#define pnoutrefresh_OPTIONAL_ARGC 0
/* pnoutrefresh
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * - arg5: int
 * - arg6: int
 * - arg7: int
 * Return Type: int
 */
mrb_value
mrb_Curses_pnoutrefresh(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  int native_arg6 = mrb_fixnum(arg6);

  int native_arg7 = mrb_fixnum(arg7);

  /* Invocation */
  int result = pnoutrefresh(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_prefresh_FUNCTION
#define prefresh_REQUIRED_ARGC 7
#define prefresh_OPTIONAL_ARGC 0
/* prefresh
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * - arg5: int
 * - arg6: int
 * - arg7: int
 * Return Type: int
 */
mrb_value
mrb_Curses_prefresh(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  int native_arg6 = mrb_fixnum(arg6);

  int native_arg7 = mrb_fixnum(arg7);

  /* Invocation */
  int result = prefresh(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_printw_FUNCTION
#define printw_REQUIRED_ARGC 1
#define printw_OPTIONAL_ARGC 0
/* printw
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_printw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = printw(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_putp_FUNCTION
#define putp_REQUIRED_ARGC 1
#define putp_OPTIONAL_ARGC 0
/* putp
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_putp(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = putp(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_putwin_FUNCTION
#define putwin_REQUIRED_ARGC 2
#define putwin_OPTIONAL_ARGC 0
/* putwin
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: struct _iobuf *
 * Return Type: int
 */
mrb_value
mrb_Curses_putwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check__iobuf_PTR(arg2);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  struct _iobuf * native_arg2 = TODO_mruby_unbox__iobuf_PTR(arg2);

  /* Invocation */
  int result = putwin(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_qiflush_FUNCTION
#define qiflush_REQUIRED_ARGC 0
#define qiflush_OPTIONAL_ARGC 0
/* qiflush
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Curses_qiflush(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  qiflush();

  return mrb_nil_value();
}
#endif

#if BIND_raw_FUNCTION
#define raw_REQUIRED_ARGC 0
#define raw_OPTIONAL_ARGC 0
/* raw
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_raw(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = raw();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_raw_output_FUNCTION
#define raw_output_REQUIRED_ARGC 1
#define raw_output_OPTIONAL_ARGC 0
/* raw_output
 *
 * Parameters:
 * - arg1: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_raw_output(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char native_arg1 = *mrb_string_value_ptr(mrb, arg1);

  /* Invocation */
  int result = raw_output(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_redrawwin_FUNCTION
#define redrawwin_REQUIRED_ARGC 1
#define redrawwin_OPTIONAL_ARGC 0
/* redrawwin
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_redrawwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = redrawwin(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_refresh_FUNCTION
#define refresh_REQUIRED_ARGC 0
#define refresh_OPTIONAL_ARGC 0
/* refresh
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_refresh(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = refresh();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_replace_panel_FUNCTION
#define replace_panel_REQUIRED_ARGC 2
#define replace_panel_OPTIONAL_ARGC 0
/* replace_panel
 *
 * Parameters:
 * - pan: struct panel *
 * - win: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_replace_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;
  mrb_value win;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pan, &win);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, win, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  struct _win * native_win = (mrb_nil_p(win) ? NULL : mruby_unbox__win(win));

  /* Invocation */
  int result = replace_panel(native_pan, native_win);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_request_mouse_pos_FUNCTION
#define request_mouse_pos_REQUIRED_ARGC 0
#define request_mouse_pos_OPTIONAL_ARGC 0
/* request_mouse_pos
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_request_mouse_pos(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = request_mouse_pos();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_reset_prog_mode_FUNCTION
#define reset_prog_mode_REQUIRED_ARGC 0
#define reset_prog_mode_OPTIONAL_ARGC 0
/* reset_prog_mode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_reset_prog_mode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = reset_prog_mode();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_reset_shell_mode_FUNCTION
#define reset_shell_mode_REQUIRED_ARGC 0
#define reset_shell_mode_OPTIONAL_ARGC 0
/* reset_shell_mode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_reset_shell_mode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = reset_shell_mode();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_resetterm_FUNCTION
#define resetterm_REQUIRED_ARGC 0
#define resetterm_OPTIONAL_ARGC 0
/* resetterm
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_resetterm(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = resetterm();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_resetty_FUNCTION
#define resetty_REQUIRED_ARGC 0
#define resetty_OPTIONAL_ARGC 0
/* resetty
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_resetty(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = resetty();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_resize_term_FUNCTION
#define resize_term_REQUIRED_ARGC 2
#define resize_term_OPTIONAL_ARGC 0
/* resize_term
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_resize_term(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = resize_term(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_resize_window_FUNCTION
#define resize_window_REQUIRED_ARGC 3
#define resize_window_OPTIONAL_ARGC 0
/* resize_window
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_resize_window(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  WINDOW * result = resize_window(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_restartterm_FUNCTION
#define restartterm_REQUIRED_ARGC 3
#define restartterm_OPTIONAL_ARGC 0
/* restartterm
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: int
 * - arg3: int *
 * Return Type: int
 */
mrb_value
mrb_Curses_restartterm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(arg3);


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int * native_arg3 = TODO_mruby_unbox_int_PTR(arg3);

  /* Invocation */
  int result = restartterm(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_ripoffline_FUNCTION
#define ripoffline_REQUIRED_ARGC 4
#define ripoffline_OPTIONAL_ARGC 0
/* ripoffline
 *
 * Parameters:
 * - arg1: int
 * - arg2: int (*)(struct _win *, int)
 * - arg3: struct _win *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_ripoffline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN__win_PTR_COMMA_int_RPAREN(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int (*native_arg2)(struct _win *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN__win_PTR_COMMA_int_RPAREN(arg2);

  struct _win * native_arg3 = (mrb_nil_p(arg3) ? NULL : mruby_unbox__win(arg3));

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = ripoffline(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_saveterm_FUNCTION
#define saveterm_REQUIRED_ARGC 0
#define saveterm_OPTIONAL_ARGC 0
/* saveterm
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_saveterm(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = saveterm();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_savetty_FUNCTION
#define savetty_REQUIRED_ARGC 0
#define savetty_OPTIONAL_ARGC 0
/* savetty
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_savetty(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = savetty();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scanw_FUNCTION
#define scanw_REQUIRED_ARGC 1
#define scanw_OPTIONAL_ARGC 0
/* scanw
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_scanw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = scanw(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scr_dump_FUNCTION
#define scr_dump_REQUIRED_ARGC 1
#define scr_dump_OPTIONAL_ARGC 0
/* scr_dump
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_scr_dump(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = scr_dump(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scr_init_FUNCTION
#define scr_init_REQUIRED_ARGC 1
#define scr_init_OPTIONAL_ARGC 0
/* scr_init
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_scr_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = scr_init(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scr_restore_FUNCTION
#define scr_restore_REQUIRED_ARGC 1
#define scr_restore_OPTIONAL_ARGC 0
/* scr_restore
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_scr_restore(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = scr_restore(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scr_set_FUNCTION
#define scr_set_REQUIRED_ARGC 1
#define scr_set_OPTIONAL_ARGC 0
/* scr_set
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_scr_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = scr_set(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scrl_FUNCTION
#define scrl_REQUIRED_ARGC 1
#define scrl_OPTIONAL_ARGC 0
/* scrl
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_scrl(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = scrl(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scroll_FUNCTION
#define scroll_REQUIRED_ARGC 1
#define scroll_OPTIONAL_ARGC 0
/* scroll
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_scroll(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = scroll(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_scrollok_FUNCTION
#define scrollok_REQUIRED_ARGC 2
#define scrollok_OPTIONAL_ARGC 0
/* scrollok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_scrollok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = scrollok(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_set_curterm_FUNCTION
#define set_curterm_REQUIRED_ARGC 1
#define set_curterm_OPTIONAL_ARGC 0
/* set_curterm
 *
 * Parameters:
 * - arg1: TERMINAL *
 * Return Type: TERMINAL *
 */
mrb_value
mrb_Curses_set_curterm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, TERMINAL_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TERMINAL expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  TERMINAL * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_TERMINAL(arg1));

  /* Invocation */
  TERMINAL * result = set_curterm(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_TERMINAL(mrb, result));

  return return_value;
}
#endif

#if BIND_set_panel_userptr_FUNCTION
#define set_panel_userptr_REQUIRED_ARGC 2
#define set_panel_userptr_OPTIONAL_ARGC 0
/* set_panel_userptr
 *
 * Parameters:
 * - pan: struct panel *
 * - uptr: const void *
 * Return Type: int
 */
mrb_value
mrb_Curses_set_panel_userptr(mrb_state* mrb, mrb_value self) {
  mrb_value pan;
  mrb_value uptr;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pan, &uptr);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(uptr);


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  const void * native_uptr = TODO_mruby_unbox_void_PTR(uptr);

  /* Invocation */
  int result = set_panel_userptr(native_pan, native_uptr);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_set_term_FUNCTION
#define set_term_REQUIRED_ARGC 1
#define set_term_OPTIONAL_ARGC 0
/* set_term
 *
 * Parameters:
 * - arg1: SCREEN *
 * Return Type: SCREEN *
 */
mrb_value
mrb_Curses_set_term(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, SCREEN_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SCREEN expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  SCREEN * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_SCREEN(arg1));

  /* Invocation */
  SCREEN * result = set_term(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_SCREEN(mrb, result));

  return return_value;
}
#endif

#if BIND_setscrreg_FUNCTION
#define setscrreg_REQUIRED_ARGC 2
#define setscrreg_OPTIONAL_ARGC 0
/* setscrreg
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_setscrreg(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = setscrreg(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_setsyx_FUNCTION
#define setsyx_REQUIRED_ARGC 2
#define setsyx_OPTIONAL_ARGC 0
/* setsyx
 *
 * Parameters:
 * - arg1: int
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_setsyx(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = setsyx(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_setterm_FUNCTION
#define setterm_REQUIRED_ARGC 1
#define setterm_OPTIONAL_ARGC 0
/* setterm
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_setterm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = setterm(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_setupterm_FUNCTION
#define setupterm_REQUIRED_ARGC 3
#define setupterm_OPTIONAL_ARGC 0
/* setupterm
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: int
 * - arg3: int *
 * Return Type: int
 */
mrb_value
mrb_Curses_setupterm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(arg3);


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int * native_arg3 = TODO_mruby_unbox_int_PTR(arg3);

  /* Invocation */
  int result = setupterm(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_show_panel_FUNCTION
#define show_panel_REQUIRED_ARGC 1
#define show_panel_OPTIONAL_ARGC 0
/* show_panel
 *
 * Parameters:
 * - pan: struct panel *
 * Return Type: int
 */
mrb_value
mrb_Curses_show_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  int result = show_panel(native_pan);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_attr_off_FUNCTION
#define slk_attr_off_REQUIRED_ARGC 2
#define slk_attr_off_OPTIONAL_ARGC 0
/* slk_attr_off
 *
 * Parameters:
 * - arg1: const unsigned long
 * - arg2: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_attr_off(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int result = slk_attr_off(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_attr_on_FUNCTION
#define slk_attr_on_REQUIRED_ARGC 2
#define slk_attr_on_OPTIONAL_ARGC 0
/* slk_attr_on
 *
 * Parameters:
 * - arg1: const unsigned long
 * - arg2: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_attr_on(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int result = slk_attr_on(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_attr_set_FUNCTION
#define slk_attr_set_REQUIRED_ARGC 3
#define slk_attr_set_OPTIONAL_ARGC 0
/* slk_attr_set
 *
 * Parameters:
 * - arg1: const unsigned long
 * - arg2: short
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_attr_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  short native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = slk_attr_set(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_attroff_FUNCTION
#define slk_attroff_REQUIRED_ARGC 1
#define slk_attroff_OPTIONAL_ARGC 0
/* slk_attroff
 *
 * Parameters:
 * - arg1: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_attroff(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = slk_attroff(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_attron_FUNCTION
#define slk_attron_REQUIRED_ARGC 1
#define slk_attron_OPTIONAL_ARGC 0
/* slk_attron
 *
 * Parameters:
 * - arg1: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_attron(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = slk_attron(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_attrset_FUNCTION
#define slk_attrset_REQUIRED_ARGC 1
#define slk_attrset_OPTIONAL_ARGC 0
/* slk_attrset
 *
 * Parameters:
 * - arg1: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_attrset(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = slk_attrset(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_clear_FUNCTION
#define slk_clear_REQUIRED_ARGC 0
#define slk_clear_OPTIONAL_ARGC 0
/* slk_clear
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_clear(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = slk_clear();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_color_FUNCTION
#define slk_color_REQUIRED_ARGC 1
#define slk_color_OPTIONAL_ARGC 0
/* slk_color
 *
 * Parameters:
 * - arg1: short
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_color(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  short native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = slk_color(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_init_FUNCTION
#define slk_init_REQUIRED_ARGC 1
#define slk_init_OPTIONAL_ARGC 0
/* slk_init
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = slk_init(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_label_FUNCTION
#define slk_label_REQUIRED_ARGC 1
#define slk_label_OPTIONAL_ARGC 0
/* slk_label
 *
 * Parameters:
 * - arg1: int
 * Return Type: char *
 */
mrb_value
mrb_Curses_slk_label(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  char * result = slk_label(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_slk_noutrefresh_FUNCTION
#define slk_noutrefresh_REQUIRED_ARGC 0
#define slk_noutrefresh_OPTIONAL_ARGC 0
/* slk_noutrefresh
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_noutrefresh(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = slk_noutrefresh();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_refresh_FUNCTION
#define slk_refresh_REQUIRED_ARGC 0
#define slk_refresh_OPTIONAL_ARGC 0
/* slk_refresh
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_refresh(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = slk_refresh();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_restore_FUNCTION
#define slk_restore_REQUIRED_ARGC 0
#define slk_restore_OPTIONAL_ARGC 0
/* slk_restore
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_restore(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = slk_restore();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_set_FUNCTION
#define slk_set_REQUIRED_ARGC 3
#define slk_set_OPTIONAL_ARGC 0
/* slk_set
 *
 * Parameters:
 * - arg1: int
 * - arg2: const char *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = slk_set(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_slk_touch_FUNCTION
#define slk_touch_REQUIRED_ARGC 0
#define slk_touch_OPTIONAL_ARGC 0
/* slk_touch
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_slk_touch(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = slk_touch();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_standend_FUNCTION
#define standend_REQUIRED_ARGC 0
#define standend_OPTIONAL_ARGC 0
/* standend
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_standend(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = standend();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_standout_FUNCTION
#define standout_REQUIRED_ARGC 0
#define standout_OPTIONAL_ARGC 0
/* standout
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_standout(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = standout();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_start_color_FUNCTION
#define start_color_REQUIRED_ARGC 0
#define start_color_OPTIONAL_ARGC 0
/* start_color
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_start_color(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = start_color();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_subpad_FUNCTION
#define subpad_REQUIRED_ARGC 5
#define subpad_OPTIONAL_ARGC 0
/* subpad
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * - arg5: int
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_subpad(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  WINDOW * result = subpad(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_subwin_FUNCTION
#define subwin_REQUIRED_ARGC 5
#define subwin_OPTIONAL_ARGC 0
/* subwin
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * - arg5: int
 * Return Type: WINDOW *
 */
mrb_value
mrb_Curses_subwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  WINDOW * result = subwin(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box__win(mrb, result));

  return return_value;
}
#endif

#if BIND_syncok_FUNCTION
#define syncok_REQUIRED_ARGC 2
#define syncok_OPTIONAL_ARGC 0
/* syncok
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned char
 * Return Type: int
 */
mrb_value
mrb_Curses_syncok(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned char native_arg2 = *mrb_string_value_ptr(mrb, arg2);

  /* Invocation */
  int result = syncok(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_term_attrs_FUNCTION
#define term_attrs_REQUIRED_ARGC 0
#define term_attrs_OPTIONAL_ARGC 0
/* term_attrs
 *
 * Parameters: None
 * Return Type: attr_t
 */
mrb_value
mrb_Curses_term_attrs(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  attr_t result = term_attrs();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_attr_t(mrb, result);

  return return_value;
}
#endif

#if BIND_termattrs_FUNCTION
#define termattrs_REQUIRED_ARGC 0
#define termattrs_OPTIONAL_ARGC 0
/* termattrs
 *
 * Parameters: None
 * Return Type: chtype
 */
mrb_value
mrb_Curses_termattrs(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  chtype result = termattrs();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_termname_FUNCTION
#define termname_REQUIRED_ARGC 0
#define termname_OPTIONAL_ARGC 0
/* termname
 *
 * Parameters: None
 * Return Type: char *
 */
mrb_value
mrb_Curses_termname(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char * result = termname();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_tgetent_FUNCTION
#define tgetent_REQUIRED_ARGC 2
#define tgetent_OPTIONAL_ARGC 0
/* tgetent
 *
 * Parameters:
 * - arg1: char *
 * - arg2: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_tgetent(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg1 = strdup(mrb_string_value_cstr(mrb, &arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  /* Invocation */
  int result = tgetent(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg1);
  native_arg1 = NULL;

  return return_value;
}
#endif

#if BIND_tgetflag_FUNCTION
#define tgetflag_REQUIRED_ARGC 1
#define tgetflag_OPTIONAL_ARGC 0
/* tgetflag
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_tgetflag(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = tgetflag(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_tgetnum_FUNCTION
#define tgetnum_REQUIRED_ARGC 1
#define tgetnum_OPTIONAL_ARGC 0
/* tgetnum
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_tgetnum(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = tgetnum(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_tgetstr_FUNCTION
#define tgetstr_REQUIRED_ARGC 2
#define tgetstr_OPTIONAL_ARGC 0
/* tgetstr
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: char **
 * Return Type: char *
 */
mrb_value
mrb_Curses_tgetstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(arg2);


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  char ** native_arg2 = TODO_mruby_unbox_char_PTR_PTR(arg2);

  /* Invocation */
  char * result = tgetstr(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_tgoto_FUNCTION
#define tgoto_REQUIRED_ARGC 3
#define tgoto_OPTIONAL_ARGC 0
/* tgoto
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: int
 * - arg3: int
 * Return Type: char *
 */
mrb_value
mrb_Curses_tgoto(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  char * result = tgoto(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_tigetflag_FUNCTION
#define tigetflag_REQUIRED_ARGC 1
#define tigetflag_OPTIONAL_ARGC 0
/* tigetflag
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_tigetflag(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = tigetflag(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_tigetnum_FUNCTION
#define tigetnum_REQUIRED_ARGC 1
#define tigetnum_OPTIONAL_ARGC 0
/* tigetnum
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_tigetnum(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  int result = tigetnum(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_tigetstr_FUNCTION
#define tigetstr_REQUIRED_ARGC 1
#define tigetstr_OPTIONAL_ARGC 0
/* tigetstr
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: char *
 */
mrb_value
mrb_Curses_tigetstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  char * result = tigetstr(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_timeout_FUNCTION
#define timeout_REQUIRED_ARGC 1
#define timeout_OPTIONAL_ARGC 0
/* timeout
 *
 * Parameters:
 * - arg1: int
 * Return Type: void
 */
mrb_value
mrb_Curses_timeout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  timeout(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_top_panel_FUNCTION
#define top_panel_REQUIRED_ARGC 1
#define top_panel_OPTIONAL_ARGC 0
/* top_panel
 *
 * Parameters:
 * - pan: struct panel *
 * Return Type: int
 */
mrb_value
mrb_Curses_top_panel(mrb_state* mrb, mrb_value self) {
  mrb_value pan;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pan);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pan, Panel_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Panel expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct panel * native_pan = (mrb_nil_p(pan) ? NULL : mruby_unbox_panel(pan));

  /* Invocation */
  int result = top_panel(native_pan);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_touchline_FUNCTION
#define touchline_REQUIRED_ARGC 3
#define touchline_OPTIONAL_ARGC 0
/* touchline
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_touchline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = touchline(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_touchwin_FUNCTION
#define touchwin_REQUIRED_ARGC 1
#define touchwin_OPTIONAL_ARGC 0
/* touchwin
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_touchwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = touchwin(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_tparm_FUNCTION
#define tparm_REQUIRED_ARGC 10
#define tparm_OPTIONAL_ARGC 0
/* tparm
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: long
 * - arg3: long
 * - arg4: long
 * - arg5: long
 * - arg6: long
 * - arg7: long
 * - arg8: long
 * - arg9: long
 * - arg10: long
 * Return Type: char *
 */
mrb_value
mrb_Curses_tparm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value arg10;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg9, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg10, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  long native_arg2 = mrb_fixnum(arg2);

  long native_arg3 = mrb_fixnum(arg3);

  long native_arg4 = mrb_fixnum(arg4);

  long native_arg5 = mrb_fixnum(arg5);

  long native_arg6 = mrb_fixnum(arg6);

  long native_arg7 = mrb_fixnum(arg7);

  long native_arg8 = mrb_fixnum(arg8);

  long native_arg9 = mrb_fixnum(arg9);

  long native_arg10 = mrb_fixnum(arg10);

  /* Invocation */
  char * result = tparm(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8, native_arg9, native_arg10);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_tputs_FUNCTION
#define tputs_REQUIRED_ARGC 4
#define tputs_OPTIONAL_ARGC 0
/* tputs
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: int
 * - arg3: int (*)(int)
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_tputs(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_arg2 = mrb_fixnum(arg2);

  int (*native_arg3)(int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = tputs(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_traceoff_FUNCTION
#define traceoff_REQUIRED_ARGC 0
#define traceoff_OPTIONAL_ARGC 0
/* traceoff
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Curses_traceoff(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  traceoff();

  return mrb_nil_value();
}
#endif

#if BIND_traceon_FUNCTION
#define traceon_REQUIRED_ARGC 0
#define traceon_OPTIONAL_ARGC 0
/* traceon
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Curses_traceon(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  traceon();

  return mrb_nil_value();
}
#endif

#if BIND_typeahead_FUNCTION
#define typeahead_REQUIRED_ARGC 1
#define typeahead_OPTIONAL_ARGC 0
/* typeahead
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_Curses_typeahead(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = typeahead(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_unctrl_FUNCTION
#define unctrl_REQUIRED_ARGC 1
#define unctrl_OPTIONAL_ARGC 0
/* unctrl
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: char *
 */
mrb_value
mrb_Curses_unctrl(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  char * result = unctrl(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_ungetmouse_FUNCTION
#define ungetmouse_REQUIRED_ARGC 1
#define ungetmouse_OPTIONAL_ARGC 0
/* ungetmouse
 *
 * Parameters:
 * - arg1: MEVENT *
 * Return Type: int
 */
mrb_value
mrb_Curses_ungetmouse(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, MEVENT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MEVENT expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  MEVENT * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_MEVENT(arg1));

  /* Invocation */
  int result = ungetmouse(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_untouchwin_FUNCTION
#define untouchwin_REQUIRED_ARGC 1
#define untouchwin_OPTIONAL_ARGC 0
/* untouchwin
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_untouchwin(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = untouchwin(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_update_panels_FUNCTION
#define update_panels_REQUIRED_ARGC 0
#define update_panels_OPTIONAL_ARGC 0
/* update_panels
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Curses_update_panels(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  update_panels();

  return mrb_nil_value();
}
#endif

#if BIND_use_default_colors_FUNCTION
#define use_default_colors_REQUIRED_ARGC 0
#define use_default_colors_OPTIONAL_ARGC 0
/* use_default_colors
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Curses_use_default_colors(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = use_default_colors();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_use_env_FUNCTION
#define use_env_REQUIRED_ARGC 1
#define use_env_OPTIONAL_ARGC 0
/* use_env
 *
 * Parameters:
 * - arg1: unsigned char
 * Return Type: void
 */
mrb_value
mrb_Curses_use_env(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned char native_arg1 = *mrb_string_value_ptr(mrb, arg1);

  /* Invocation */
  use_env(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_vid_attr_FUNCTION
#define vid_attr_REQUIRED_ARGC 3
#define vid_attr_OPTIONAL_ARGC 0
/* vid_attr
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: short
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_vid_attr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  short native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = vid_attr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vid_puts_FUNCTION
#define vid_puts_REQUIRED_ARGC 5
#define vid_puts_OPTIONAL_ARGC 0
/* vid_puts
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: short
 * - arg3: void *
 * - arg4: int (*)(int)
 * - arg5: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vid_puts(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(arg4);
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  short native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  int (*native_arg4)(int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  /* Invocation */
  int result = vid_puts(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vidattr_FUNCTION
#define vidattr_REQUIRED_ARGC 1
#define vidattr_OPTIONAL_ARGC 0
/* vidattr
 *
 * Parameters:
 * - arg1: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_vidattr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = vidattr(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vidputs_FUNCTION
#define vidputs_REQUIRED_ARGC 3
#define vidputs_OPTIONAL_ARGC 0
/* vidputs
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: int (*)(int)
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vidputs(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  int (*native_arg2)(int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = vidputs(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vline_FUNCTION
#define vline_REQUIRED_ARGC 2
#define vline_OPTIONAL_ARGC 0
/* vline
 *
 * Parameters:
 * - arg1: unsigned long
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned long native_arg1 = mrb_fixnum(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = vline(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vw_printw_FUNCTION
#define vw_printw_REQUIRED_ARGC 3
#define vw_printw_OPTIONAL_ARGC 0
/* vw_printw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * - va_list: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vw_printw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &va_list);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, va_list, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_va_list = mrb_fixnum(va_list);

  /* Invocation */
  int result = vw_printw(native_arg1, native_arg2, native_va_list);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vw_scanw_FUNCTION
#define vw_scanw_REQUIRED_ARGC 3
#define vw_scanw_OPTIONAL_ARGC 0
/* vw_scanw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * - va_list: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vw_scanw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &va_list);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, va_list, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_va_list = mrb_fixnum(va_list);

  /* Invocation */
  int result = vw_scanw(native_arg1, native_arg2, native_va_list);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vwprintw_FUNCTION
#define vwprintw_REQUIRED_ARGC 3
#define vwprintw_OPTIONAL_ARGC 0
/* vwprintw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * - va_list: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vwprintw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &va_list);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, va_list, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_va_list = mrb_fixnum(va_list);

  /* Invocation */
  int result = vwprintw(native_arg1, native_arg2, native_va_list);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_vwscanw_FUNCTION
#define vwscanw_REQUIRED_ARGC 3
#define vwscanw_OPTIONAL_ARGC 0
/* vwscanw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * - va_list: int
 * Return Type: int
 */
mrb_value
mrb_Curses_vwscanw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &va_list);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, va_list, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_va_list = mrb_fixnum(va_list);

  /* Invocation */
  int result = vwscanw(native_arg1, native_arg2, native_va_list);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_waddch_FUNCTION
#define waddch_REQUIRED_ARGC 2
#define waddch_OPTIONAL_ARGC 0
/* waddch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_waddch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = waddch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_waddchnstr_FUNCTION
#define waddchnstr_REQUIRED_ARGC 3
#define waddchnstr_OPTIONAL_ARGC 0
/* waddchnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const unsigned long *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_waddchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const unsigned long * native_arg2 = TODO_mruby_unbox_unsigned_long_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = waddchnstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_waddchstr_FUNCTION
#define waddchstr_REQUIRED_ARGC 2
#define waddchstr_OPTIONAL_ARGC 0
/* waddchstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_waddchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg2);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const unsigned long * native_arg2 = TODO_mruby_unbox_unsigned_long_PTR(arg2);

  /* Invocation */
  int result = waddchstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_waddnstr_FUNCTION
#define waddnstr_REQUIRED_ARGC 3
#define waddnstr_OPTIONAL_ARGC 0
/* waddnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_waddnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = waddnstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_waddrawch_FUNCTION
#define waddrawch_REQUIRED_ARGC 2
#define waddrawch_OPTIONAL_ARGC 0
/* waddrawch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_waddrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = waddrawch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_waddstr_FUNCTION
#define waddstr_REQUIRED_ARGC 2
#define waddstr_OPTIONAL_ARGC 0
/* waddstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_waddstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  /* Invocation */
  int result = waddstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattr_get_FUNCTION
#define wattr_get_REQUIRED_ARGC 4
#define wattr_get_OPTIONAL_ARGC 0
/* wattr_get
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long *
 * - arg3: short *
 * - arg4: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_wattr_get(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg2);
  TODO_type_check_short_PTR(arg3);
  TODO_type_check_void_PTR(arg4);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long * native_arg2 = TODO_mruby_unbox_unsigned_long_PTR(arg2);

  short * native_arg3 = TODO_mruby_unbox_short_PTR(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  int result = wattr_get(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattr_off_FUNCTION
#define wattr_off_REQUIRED_ARGC 3
#define wattr_off_OPTIONAL_ARGC 0
/* wattr_off
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_wattr_off(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = wattr_off(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattr_on_FUNCTION
#define wattr_on_REQUIRED_ARGC 3
#define wattr_on_OPTIONAL_ARGC 0
/* wattr_on
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_wattr_on(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = wattr_on(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattr_set_FUNCTION
#define wattr_set_REQUIRED_ARGC 4
#define wattr_set_OPTIONAL_ARGC 0
/* wattr_set
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: short
 * - arg4: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_wattr_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg4);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  short native_arg3 = mrb_fixnum(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  int result = wattr_set(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattroff_FUNCTION
#define wattroff_REQUIRED_ARGC 2
#define wattroff_OPTIONAL_ARGC 0
/* wattroff
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_wattroff(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = wattroff(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattron_FUNCTION
#define wattron_REQUIRED_ARGC 2
#define wattron_OPTIONAL_ARGC 0
/* wattron
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_wattron(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = wattron(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wattrset_FUNCTION
#define wattrset_REQUIRED_ARGC 2
#define wattrset_OPTIONAL_ARGC 0
/* wattrset
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_wattrset(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = wattrset(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wbkgd_FUNCTION
#define wbkgd_REQUIRED_ARGC 2
#define wbkgd_OPTIONAL_ARGC 0
/* wbkgd
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_wbkgd(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = wbkgd(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wbkgdset_FUNCTION
#define wbkgdset_REQUIRED_ARGC 2
#define wbkgdset_OPTIONAL_ARGC 0
/* wbkgdset
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: void
 */
mrb_value
mrb_Curses_wbkgdset(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  wbkgdset(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_wborder_FUNCTION
#define wborder_REQUIRED_ARGC 9
#define wborder_OPTIONAL_ARGC 0
/* wborder
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: unsigned long
 * - arg4: unsigned long
 * - arg5: unsigned long
 * - arg6: unsigned long
 * - arg7: unsigned long
 * - arg8: unsigned long
 * - arg9: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_wborder(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg9, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  unsigned long native_arg4 = mrb_fixnum(arg4);

  unsigned long native_arg5 = mrb_fixnum(arg5);

  unsigned long native_arg6 = mrb_fixnum(arg6);

  unsigned long native_arg7 = mrb_fixnum(arg7);

  unsigned long native_arg8 = mrb_fixnum(arg8);

  unsigned long native_arg9 = mrb_fixnum(arg9);

  /* Invocation */
  int result = wborder(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8, native_arg9);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wchgat_FUNCTION
#define wchgat_REQUIRED_ARGC 5
#define wchgat_OPTIONAL_ARGC 0
/* wchgat
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: unsigned long
 * - arg4: short
 * - arg5: const void *
 * Return Type: int
 */
mrb_value
mrb_Curses_wchgat(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  unsigned long native_arg3 = mrb_fixnum(arg3);

  short native_arg4 = mrb_fixnum(arg4);

  const void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  int result = wchgat(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wclear_FUNCTION
#define wclear_REQUIRED_ARGC 1
#define wclear_OPTIONAL_ARGC 0
/* wclear
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wclear(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wclear(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wclrtobot_FUNCTION
#define wclrtobot_REQUIRED_ARGC 1
#define wclrtobot_OPTIONAL_ARGC 0
/* wclrtobot
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wclrtobot(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wclrtobot(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wclrtoeol_FUNCTION
#define wclrtoeol_REQUIRED_ARGC 1
#define wclrtoeol_OPTIONAL_ARGC 0
/* wclrtoeol
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wclrtoeol(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wclrtoeol(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wcolor_set_FUNCTION
#define wcolor_set_REQUIRED_ARGC 3
#define wcolor_set_OPTIONAL_ARGC 0
/* wcolor_set
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: short
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_Curses_wcolor_set(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  short native_arg2 = mrb_fixnum(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int result = wcolor_set(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wcursyncup_FUNCTION
#define wcursyncup_REQUIRED_ARGC 1
#define wcursyncup_OPTIONAL_ARGC 0
/* wcursyncup
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: void
 */
mrb_value
mrb_Curses_wcursyncup(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  wcursyncup(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_wdelch_FUNCTION
#define wdelch_REQUIRED_ARGC 1
#define wdelch_OPTIONAL_ARGC 0
/* wdelch
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wdelch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wdelch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wdeleteln_FUNCTION
#define wdeleteln_REQUIRED_ARGC 1
#define wdeleteln_OPTIONAL_ARGC 0
/* wdeleteln
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wdeleteln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wdeleteln(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wechochar_FUNCTION
#define wechochar_REQUIRED_ARGC 2
#define wechochar_OPTIONAL_ARGC 0
/* wechochar
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_wechochar(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = wechochar(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wenclose_FUNCTION
#define wenclose_REQUIRED_ARGC 3
#define wenclose_OPTIONAL_ARGC 0
/* wenclose
 *
 * Parameters:
 * - arg1: const struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: bool
 */
mrb_value
mrb_Curses_wenclose(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  return wenclose(native_arg1, native_arg2, native_arg3) ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_werase_FUNCTION
#define werase_REQUIRED_ARGC 1
#define werase_OPTIONAL_ARGC 0
/* werase
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_werase(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = werase(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wgetch_FUNCTION
#define wgetch_REQUIRED_ARGC 1
#define wgetch_OPTIONAL_ARGC 0
/* wgetch
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wgetch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wgetch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wgetnstr_FUNCTION
#define wgetnstr_REQUIRED_ARGC 3
#define wgetnstr_OPTIONAL_ARGC 0
/* wgetnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: char *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wgetnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg2 = strdup(mrb_string_value_cstr(mrb, &arg2));

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = wgetnstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg2);
  native_arg2 = NULL;

  return return_value;
}
#endif

#if BIND_wgetstr_FUNCTION
#define wgetstr_REQUIRED_ARGC 2
#define wgetstr_OPTIONAL_ARGC 0
/* wgetstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_wgetstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg2 = strdup(mrb_string_value_cstr(mrb, &arg2));

  /* Invocation */
  int result = wgetstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg2);
  native_arg2 = NULL;

  return return_value;
}
#endif

#if BIND_whline_FUNCTION
#define whline_REQUIRED_ARGC 3
#define whline_OPTIONAL_ARGC 0
/* whline
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_whline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = whline(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winch_FUNCTION
#define winch_REQUIRED_ARGC 1
#define winch_OPTIONAL_ARGC 0
/* winch
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: chtype
 */
mrb_value
mrb_Curses_winch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  chtype result = winch(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winchnstr_FUNCTION
#define winchnstr_REQUIRED_ARGC 3
#define winchnstr_OPTIONAL_ARGC 0
/* winchnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_winchnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long * native_arg2 = TODO_mruby_unbox_unsigned_long_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = winchnstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winchstr_FUNCTION
#define winchstr_REQUIRED_ARGC 2
#define winchstr_OPTIONAL_ARGC 0
/* winchstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long *
 * Return Type: int
 */
mrb_value
mrb_Curses_winchstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_PTR(arg2);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long * native_arg2 = TODO_mruby_unbox_unsigned_long_PTR(arg2);

  /* Invocation */
  int result = winchstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winnstr_FUNCTION
#define winnstr_REQUIRED_ARGC 3
#define winnstr_OPTIONAL_ARGC 0
/* winnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: char *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_winnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg2 = strdup(mrb_string_value_cstr(mrb, &arg2));

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = winnstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg2);
  native_arg2 = NULL;

  return return_value;
}
#endif

#if BIND_winsch_FUNCTION
#define winsch_REQUIRED_ARGC 2
#define winsch_OPTIONAL_ARGC 0
/* winsch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_winsch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = winsch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winsdelln_FUNCTION
#define winsdelln_REQUIRED_ARGC 2
#define winsdelln_OPTIONAL_ARGC 0
/* winsdelln
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_winsdelln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = winsdelln(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winsertln_FUNCTION
#define winsertln_REQUIRED_ARGC 1
#define winsertln_OPTIONAL_ARGC 0
/* winsertln
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_winsertln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = winsertln(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winsnstr_FUNCTION
#define winsnstr_REQUIRED_ARGC 3
#define winsnstr_OPTIONAL_ARGC 0
/* winsnstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_winsnstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = winsnstr(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winsrawch_FUNCTION
#define winsrawch_REQUIRED_ARGC 2
#define winsrawch_OPTIONAL_ARGC 0
/* winsrawch
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * Return Type: int
 */
mrb_value
mrb_Curses_winsrawch(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = winsrawch(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winsstr_FUNCTION
#define winsstr_REQUIRED_ARGC 2
#define winsstr_OPTIONAL_ARGC 0
/* winsstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_winsstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  /* Invocation */
  int result = winsstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_winstr_FUNCTION
#define winstr_REQUIRED_ARGC 2
#define winstr_OPTIONAL_ARGC 0
/* winstr
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: char *
 * Return Type: int
 */
mrb_value
mrb_Curses_winstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg2 = strdup(mrb_string_value_cstr(mrb, &arg2));

  /* Invocation */
  int result = winstr(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg2);
  native_arg2 = NULL;

  return return_value;
}
#endif

#if BIND_wmouse_position_FUNCTION
#define wmouse_position_REQUIRED_ARGC 3
#define wmouse_position_OPTIONAL_ARGC 0
/* wmouse_position
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int *
 * - arg3: int *
 * Return Type: void
 */
mrb_value
mrb_Curses_wmouse_position(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(arg2);
  TODO_type_check_int_PTR(arg3);


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int * native_arg2 = TODO_mruby_unbox_int_PTR(arg2);

  int * native_arg3 = TODO_mruby_unbox_int_PTR(arg3);

  /* Invocation */
  wmouse_position(native_arg1, native_arg2, native_arg3);

  return mrb_nil_value();
}
#endif

#if BIND_wmouse_trafo_FUNCTION
#define wmouse_trafo_REQUIRED_ARGC 4
#define wmouse_trafo_OPTIONAL_ARGC 0
/* wmouse_trafo
 *
 * Parameters:
 * - arg1: const struct _win *
 * - arg2: int *
 * - arg3: int *
 * - arg4: unsigned char
 * Return Type: bool
 */
mrb_value
mrb_Curses_wmouse_trafo(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(arg2);
  TODO_type_check_int_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int * native_arg2 = TODO_mruby_unbox_int_PTR(arg2);

  int * native_arg3 = TODO_mruby_unbox_int_PTR(arg3);

  unsigned char native_arg4 = *mrb_string_value_ptr(mrb, arg4);

  /* Invocation */
  return wmouse_trafo(native_arg1, native_arg2, native_arg3, native_arg4) ? mrb_true_value() : mrb_false_value();
}
#endif

#if BIND_wmove_FUNCTION
#define wmove_REQUIRED_ARGC 3
#define wmove_OPTIONAL_ARGC 0
/* wmove
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wmove(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = wmove(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wnoutrefresh_FUNCTION
#define wnoutrefresh_REQUIRED_ARGC 1
#define wnoutrefresh_OPTIONAL_ARGC 0
/* wnoutrefresh
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wnoutrefresh(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wnoutrefresh(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wordchar_FUNCTION
#define wordchar_REQUIRED_ARGC 0
#define wordchar_OPTIONAL_ARGC 0
/* wordchar
 *
 * Parameters: None
 * Return Type: char
 */
mrb_value
mrb_Curses_wordchar(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  char result = wordchar();

  /* Box the return value */
  mrb_value return_value = mrb_str_new(mrb, &result, 1);

  return return_value;
}
#endif

#if BIND_wprintw_FUNCTION
#define wprintw_REQUIRED_ARGC 2
#define wprintw_OPTIONAL_ARGC 0
/* wprintw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_wprintw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  /* Invocation */
  int result = wprintw(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wredrawln_FUNCTION
#define wredrawln_REQUIRED_ARGC 3
#define wredrawln_OPTIONAL_ARGC 0
/* wredrawln
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wredrawln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = wredrawln(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wrefresh_FUNCTION
#define wrefresh_REQUIRED_ARGC 1
#define wrefresh_OPTIONAL_ARGC 0
/* wrefresh
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wrefresh(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wrefresh(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wresize_FUNCTION
#define wresize_REQUIRED_ARGC 3
#define wresize_OPTIONAL_ARGC 0
/* wresize
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wresize(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = wresize(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wscanw_FUNCTION
#define wscanw_REQUIRED_ARGC 2
#define wscanw_OPTIONAL_ARGC 0
/* wscanw
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: const char *
 * Return Type: int
 */
mrb_value
mrb_Curses_wscanw(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  /* Invocation */
  int result = wscanw(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wscrl_FUNCTION
#define wscrl_REQUIRED_ARGC 2
#define wscrl_OPTIONAL_ARGC 0
/* wscrl
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wscrl(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = wscrl(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wsetscrreg_FUNCTION
#define wsetscrreg_REQUIRED_ARGC 3
#define wsetscrreg_OPTIONAL_ARGC 0
/* wsetscrreg
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wsetscrreg(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = wsetscrreg(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wstandend_FUNCTION
#define wstandend_REQUIRED_ARGC 1
#define wstandend_OPTIONAL_ARGC 0
/* wstandend
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wstandend(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wstandend(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wstandout_FUNCTION
#define wstandout_REQUIRED_ARGC 1
#define wstandout_OPTIONAL_ARGC 0
/* wstandout
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: int
 */
mrb_value
mrb_Curses_wstandout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  int result = wstandout(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wsyncdown_FUNCTION
#define wsyncdown_REQUIRED_ARGC 1
#define wsyncdown_OPTIONAL_ARGC 0
/* wsyncdown
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: void
 */
mrb_value
mrb_Curses_wsyncdown(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  wsyncdown(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_wsyncup_FUNCTION
#define wsyncup_REQUIRED_ARGC 1
#define wsyncup_OPTIONAL_ARGC 0
/* wsyncup
 *
 * Parameters:
 * - arg1: struct _win *
 * Return Type: void
 */
mrb_value
mrb_Curses_wsyncup(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  /* Invocation */
  wsyncup(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_wtimeout_FUNCTION
#define wtimeout_REQUIRED_ARGC 2
#define wtimeout_OPTIONAL_ARGC 0
/* wtimeout
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * Return Type: void
 */
mrb_value
mrb_Curses_wtimeout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  wtimeout(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_wtouchln_FUNCTION
#define wtouchln_REQUIRED_ARGC 4
#define wtouchln_OPTIONAL_ARGC 0
/* wtouchln
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: int
 * - arg3: int
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wtouchln(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = wtouchln(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wvline_FUNCTION
#define wvline_REQUIRED_ARGC 3
#define wvline_OPTIONAL_ARGC 0
/* wvline
 *
 * Parameters:
 * - arg1: struct _win *
 * - arg2: unsigned long
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_Curses_wvline(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Win_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Win expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct _win * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox__win(arg1));

  unsigned long native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = wvline(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif


void mrb_mruby_curses_gem_init(mrb_state* mrb) {
  struct RClass* Curses_module = mrb_define_module(mrb, "Curses");
  mruby_Curses_define_macro_constants(mrb);

  /*
   * Initialize class bindings
   */
#if BIND_MEVENT_TYPE
  mrb_Curses_MEVENT_init(mrb);
#endif
#if BIND_MOUSESTATUS_TYPE
  mrb_Curses_MOUSESTATUS_init(mrb);
#endif
#if BIND_SCREEN_TYPE
  mrb_Curses_SCREEN_init(mrb);
#endif
#if BIND_Win_TYPE
  mrb_Curses_Win_init(mrb);
#endif
#if BIND_Panel_TYPE
  mrb_Curses_Panel_init(mrb);
#endif
#if BIND_Panelobs_TYPE
  mrb_Curses_Panelobs_init(mrb);
#endif
#if BIND_TERMINAL_TYPE
  mrb_Curses_TERMINAL_init(mrb);
#endif

  /*
   * Global Functions
   */
#if BIND_addch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "addch", mrb_Curses_addch, MRB_ARGS_ARG(addch_REQUIRED_ARGC, addch_OPTIONAL_ARGC));
#endif
#if BIND_addchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "addchnstr", mrb_Curses_addchnstr, MRB_ARGS_ARG(addchnstr_REQUIRED_ARGC, addchnstr_OPTIONAL_ARGC));
#endif
#if BIND_addchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "addchstr", mrb_Curses_addchstr, MRB_ARGS_ARG(addchstr_REQUIRED_ARGC, addchstr_OPTIONAL_ARGC));
#endif
#if BIND_addnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "addnstr", mrb_Curses_addnstr, MRB_ARGS_ARG(addnstr_REQUIRED_ARGC, addnstr_OPTIONAL_ARGC));
#endif
#if BIND_addrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "addrawch", mrb_Curses_addrawch, MRB_ARGS_ARG(addrawch_REQUIRED_ARGC, addrawch_OPTIONAL_ARGC));
#endif
#if BIND_addstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "addstr", mrb_Curses_addstr, MRB_ARGS_ARG(addstr_REQUIRED_ARGC, addstr_OPTIONAL_ARGC));
#endif
#if BIND_assume_default_colors_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "assume_default_colors", mrb_Curses_assume_default_colors, MRB_ARGS_ARG(assume_default_colors_REQUIRED_ARGC, assume_default_colors_OPTIONAL_ARGC));
#endif
#if BIND_attr_get_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attr_get", mrb_Curses_attr_get, MRB_ARGS_ARG(attr_get_REQUIRED_ARGC, attr_get_OPTIONAL_ARGC));
#endif
#if BIND_attr_off_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attr_off", mrb_Curses_attr_off, MRB_ARGS_ARG(attr_off_REQUIRED_ARGC, attr_off_OPTIONAL_ARGC));
#endif
#if BIND_attr_on_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attr_on", mrb_Curses_attr_on, MRB_ARGS_ARG(attr_on_REQUIRED_ARGC, attr_on_OPTIONAL_ARGC));
#endif
#if BIND_attr_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attr_set", mrb_Curses_attr_set, MRB_ARGS_ARG(attr_set_REQUIRED_ARGC, attr_set_OPTIONAL_ARGC));
#endif
#if BIND_attroff_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attroff", mrb_Curses_attroff, MRB_ARGS_ARG(attroff_REQUIRED_ARGC, attroff_OPTIONAL_ARGC));
#endif
#if BIND_attron_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attron", mrb_Curses_attron, MRB_ARGS_ARG(attron_REQUIRED_ARGC, attron_OPTIONAL_ARGC));
#endif
#if BIND_attrset_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "attrset", mrb_Curses_attrset, MRB_ARGS_ARG(attrset_REQUIRED_ARGC, attrset_OPTIONAL_ARGC));
#endif
#if BIND_baudrate_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "baudrate", mrb_Curses_baudrate, MRB_ARGS_ARG(baudrate_REQUIRED_ARGC, baudrate_OPTIONAL_ARGC));
#endif
#if BIND_beep_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "beep", mrb_Curses_beep, MRB_ARGS_ARG(beep_REQUIRED_ARGC, beep_OPTIONAL_ARGC));
#endif
#if BIND_bkgd_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "bkgd", mrb_Curses_bkgd, MRB_ARGS_ARG(bkgd_REQUIRED_ARGC, bkgd_OPTIONAL_ARGC));
#endif
#if BIND_bkgdset_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "bkgdset", mrb_Curses_bkgdset, MRB_ARGS_ARG(bkgdset_REQUIRED_ARGC, bkgdset_OPTIONAL_ARGC));
#endif
#if BIND_border_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "border", mrb_Curses_border, MRB_ARGS_ARG(border_REQUIRED_ARGC, border_OPTIONAL_ARGC));
#endif
#if BIND_bottom_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "bottom_panel", mrb_Curses_bottom_panel, MRB_ARGS_ARG(bottom_panel_REQUIRED_ARGC, bottom_panel_OPTIONAL_ARGC));
#endif
#if BIND_box_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "box", mrb_Curses_box, MRB_ARGS_ARG(box_REQUIRED_ARGC, box_OPTIONAL_ARGC));
#endif
#if BIND_can_change_color_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "can_change_color", mrb_Curses_can_change_color, MRB_ARGS_ARG(can_change_color_REQUIRED_ARGC, can_change_color_OPTIONAL_ARGC));
#endif
#if BIND_cbreak_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "cbreak", mrb_Curses_cbreak, MRB_ARGS_ARG(cbreak_REQUIRED_ARGC, cbreak_OPTIONAL_ARGC));
#endif
#if BIND_chgat_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "chgat", mrb_Curses_chgat, MRB_ARGS_ARG(chgat_REQUIRED_ARGC, chgat_OPTIONAL_ARGC));
#endif
#if BIND_clear_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "clear", mrb_Curses_clear, MRB_ARGS_ARG(clear_REQUIRED_ARGC, clear_OPTIONAL_ARGC));
#endif
#if BIND_clearok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "clearok", mrb_Curses_clearok, MRB_ARGS_ARG(clearok_REQUIRED_ARGC, clearok_OPTIONAL_ARGC));
#endif
#if BIND_clrtobot_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "clrtobot", mrb_Curses_clrtobot, MRB_ARGS_ARG(clrtobot_REQUIRED_ARGC, clrtobot_OPTIONAL_ARGC));
#endif
#if BIND_clrtoeol_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "clrtoeol", mrb_Curses_clrtoeol, MRB_ARGS_ARG(clrtoeol_REQUIRED_ARGC, clrtoeol_OPTIONAL_ARGC));
#endif
#if BIND_color_content_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "color_content", mrb_Curses_color_content, MRB_ARGS_ARG(color_content_REQUIRED_ARGC, color_content_OPTIONAL_ARGC));
#endif
#if BIND_color_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "color_set", mrb_Curses_color_set, MRB_ARGS_ARG(color_set_REQUIRED_ARGC, color_set_OPTIONAL_ARGC));
#endif
#if BIND_copywin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "copywin", mrb_Curses_copywin, MRB_ARGS_ARG(copywin_REQUIRED_ARGC, copywin_OPTIONAL_ARGC));
#endif
#if BIND_crmode_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "crmode", mrb_Curses_crmode, MRB_ARGS_ARG(crmode_REQUIRED_ARGC, crmode_OPTIONAL_ARGC));
#endif
#if BIND_curs_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "curs_set", mrb_Curses_curs_set, MRB_ARGS_ARG(curs_set_REQUIRED_ARGC, curs_set_OPTIONAL_ARGC));
#endif
#if BIND_curses_version_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "curses_version", mrb_Curses_curses_version, MRB_ARGS_ARG(curses_version_REQUIRED_ARGC, curses_version_OPTIONAL_ARGC));
#endif
#if BIND_def_prog_mode_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "def_prog_mode", mrb_Curses_def_prog_mode, MRB_ARGS_ARG(def_prog_mode_REQUIRED_ARGC, def_prog_mode_OPTIONAL_ARGC));
#endif
#if BIND_def_shell_mode_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "def_shell_mode", mrb_Curses_def_shell_mode, MRB_ARGS_ARG(def_shell_mode_REQUIRED_ARGC, def_shell_mode_OPTIONAL_ARGC));
#endif
#if BIND_del_curterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "del_curterm", mrb_Curses_del_curterm, MRB_ARGS_ARG(del_curterm_REQUIRED_ARGC, del_curterm_OPTIONAL_ARGC));
#endif
#if BIND_del_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "del_panel", mrb_Curses_del_panel, MRB_ARGS_ARG(del_panel_REQUIRED_ARGC, del_panel_OPTIONAL_ARGC));
#endif
#if BIND_delay_output_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "delay_output", mrb_Curses_delay_output, MRB_ARGS_ARG(delay_output_REQUIRED_ARGC, delay_output_OPTIONAL_ARGC));
#endif
#if BIND_delch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "delch", mrb_Curses_delch, MRB_ARGS_ARG(delch_REQUIRED_ARGC, delch_OPTIONAL_ARGC));
#endif
#if BIND_deleteln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "deleteln", mrb_Curses_deleteln, MRB_ARGS_ARG(deleteln_REQUIRED_ARGC, deleteln_OPTIONAL_ARGC));
#endif
#if BIND_delscreen_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "delscreen", mrb_Curses_delscreen, MRB_ARGS_ARG(delscreen_REQUIRED_ARGC, delscreen_OPTIONAL_ARGC));
#endif
#if BIND_delwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "delwin", mrb_Curses_delwin, MRB_ARGS_ARG(delwin_REQUIRED_ARGC, delwin_OPTIONAL_ARGC));
#endif
#if BIND_derwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "derwin", mrb_Curses_derwin, MRB_ARGS_ARG(derwin_REQUIRED_ARGC, derwin_OPTIONAL_ARGC));
#endif
#if BIND_doupdate_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "doupdate", mrb_Curses_doupdate, MRB_ARGS_ARG(doupdate_REQUIRED_ARGC, doupdate_OPTIONAL_ARGC));
#endif
#if BIND_draino_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "draino", mrb_Curses_draino, MRB_ARGS_ARG(draino_REQUIRED_ARGC, draino_OPTIONAL_ARGC));
#endif
#if BIND_dupwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "dupwin", mrb_Curses_dupwin, MRB_ARGS_ARG(dupwin_REQUIRED_ARGC, dupwin_OPTIONAL_ARGC));
#endif
#if BIND_echo_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "echo", mrb_Curses_echo, MRB_ARGS_ARG(echo_REQUIRED_ARGC, echo_OPTIONAL_ARGC));
#endif
#if BIND_echochar_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "echochar", mrb_Curses_echochar, MRB_ARGS_ARG(echochar_REQUIRED_ARGC, echochar_OPTIONAL_ARGC));
#endif
#if BIND_endwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "endwin", mrb_Curses_endwin, MRB_ARGS_ARG(endwin_REQUIRED_ARGC, endwin_OPTIONAL_ARGC));
#endif
#if BIND_erase_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "erase", mrb_Curses_erase, MRB_ARGS_ARG(erase_REQUIRED_ARGC, erase_OPTIONAL_ARGC));
#endif
#if BIND_erasechar_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "erasechar", mrb_Curses_erasechar, MRB_ARGS_ARG(erasechar_REQUIRED_ARGC, erasechar_OPTIONAL_ARGC));
#endif
#if BIND_filter_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "filter", mrb_Curses_filter, MRB_ARGS_ARG(filter_REQUIRED_ARGC, filter_OPTIONAL_ARGC));
#endif
#if BIND_fixterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "fixterm", mrb_Curses_fixterm, MRB_ARGS_ARG(fixterm_REQUIRED_ARGC, fixterm_OPTIONAL_ARGC));
#endif
#if BIND_flash_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "flash", mrb_Curses_flash, MRB_ARGS_ARG(flash_REQUIRED_ARGC, flash_OPTIONAL_ARGC));
#endif
#if BIND_flushinp_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "flushinp", mrb_Curses_flushinp, MRB_ARGS_ARG(flushinp_REQUIRED_ARGC, flushinp_OPTIONAL_ARGC));
#endif
#if BIND_getattrs_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getattrs", mrb_Curses_getattrs, MRB_ARGS_ARG(getattrs_REQUIRED_ARGC, getattrs_OPTIONAL_ARGC));
#endif
#if BIND_getbegx_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getbegx", mrb_Curses_getbegx, MRB_ARGS_ARG(getbegx_REQUIRED_ARGC, getbegx_OPTIONAL_ARGC));
#endif
#if BIND_getbegy_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getbegy", mrb_Curses_getbegy, MRB_ARGS_ARG(getbegy_REQUIRED_ARGC, getbegy_OPTIONAL_ARGC));
#endif
#if BIND_getbkgd_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getbkgd", mrb_Curses_getbkgd, MRB_ARGS_ARG(getbkgd_REQUIRED_ARGC, getbkgd_OPTIONAL_ARGC));
#endif
#if BIND_getbmap_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getbmap", mrb_Curses_getbmap, MRB_ARGS_ARG(getbmap_REQUIRED_ARGC, getbmap_OPTIONAL_ARGC));
#endif
#if BIND_getcurx_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getcurx", mrb_Curses_getcurx, MRB_ARGS_ARG(getcurx_REQUIRED_ARGC, getcurx_OPTIONAL_ARGC));
#endif
#if BIND_getcury_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getcury", mrb_Curses_getcury, MRB_ARGS_ARG(getcury_REQUIRED_ARGC, getcury_OPTIONAL_ARGC));
#endif
#if BIND_getmaxx_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getmaxx", mrb_Curses_getmaxx, MRB_ARGS_ARG(getmaxx_REQUIRED_ARGC, getmaxx_OPTIONAL_ARGC));
#endif
#if BIND_getmaxy_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getmaxy", mrb_Curses_getmaxy, MRB_ARGS_ARG(getmaxy_REQUIRED_ARGC, getmaxy_OPTIONAL_ARGC));
#endif
#if BIND_getmouse_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getmouse", mrb_Curses_getmouse, MRB_ARGS_ARG(getmouse_REQUIRED_ARGC, getmouse_OPTIONAL_ARGC));
#endif
#if BIND_getnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getnstr", mrb_Curses_getnstr, MRB_ARGS_ARG(getnstr_REQUIRED_ARGC, getnstr_OPTIONAL_ARGC));
#endif
#if BIND_getparx_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getparx", mrb_Curses_getparx, MRB_ARGS_ARG(getparx_REQUIRED_ARGC, getparx_OPTIONAL_ARGC));
#endif
#if BIND_getpary_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getpary", mrb_Curses_getpary, MRB_ARGS_ARG(getpary_REQUIRED_ARGC, getpary_OPTIONAL_ARGC));
#endif
#if BIND_getstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getstr", mrb_Curses_getstr, MRB_ARGS_ARG(getstr_REQUIRED_ARGC, getstr_OPTIONAL_ARGC));
#endif
#if BIND_getwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "getwin", mrb_Curses_getwin, MRB_ARGS_ARG(getwin_REQUIRED_ARGC, getwin_OPTIONAL_ARGC));
#endif
#if BIND_halfdelay_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "halfdelay", mrb_Curses_halfdelay, MRB_ARGS_ARG(halfdelay_REQUIRED_ARGC, halfdelay_OPTIONAL_ARGC));
#endif
#if BIND_has_colors_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "has_colors", mrb_Curses_has_colors, MRB_ARGS_ARG(has_colors_REQUIRED_ARGC, has_colors_OPTIONAL_ARGC));
#endif
#if BIND_has_ic_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "has_ic", mrb_Curses_has_ic, MRB_ARGS_ARG(has_ic_REQUIRED_ARGC, has_ic_OPTIONAL_ARGC));
#endif
#if BIND_has_il_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "has_il", mrb_Curses_has_il, MRB_ARGS_ARG(has_il_REQUIRED_ARGC, has_il_OPTIONAL_ARGC));
#endif
#if BIND_has_key_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "has_key", mrb_Curses_has_key, MRB_ARGS_ARG(has_key_REQUIRED_ARGC, has_key_OPTIONAL_ARGC));
#endif
#if BIND_hide_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "hide_panel", mrb_Curses_hide_panel, MRB_ARGS_ARG(hide_panel_REQUIRED_ARGC, hide_panel_OPTIONAL_ARGC));
#endif
#if BIND_hline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "hline", mrb_Curses_hline, MRB_ARGS_ARG(hline_REQUIRED_ARGC, hline_OPTIONAL_ARGC));
#endif
#if BIND_idcok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "idcok", mrb_Curses_idcok, MRB_ARGS_ARG(idcok_REQUIRED_ARGC, idcok_OPTIONAL_ARGC));
#endif
#if BIND_idlok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "idlok", mrb_Curses_idlok, MRB_ARGS_ARG(idlok_REQUIRED_ARGC, idlok_OPTIONAL_ARGC));
#endif
#if BIND_immedok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "immedok", mrb_Curses_immedok, MRB_ARGS_ARG(immedok_REQUIRED_ARGC, immedok_OPTIONAL_ARGC));
#endif
#if BIND_inch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "inch", mrb_Curses_inch, MRB_ARGS_ARG(inch_REQUIRED_ARGC, inch_OPTIONAL_ARGC));
#endif
#if BIND_inchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "inchnstr", mrb_Curses_inchnstr, MRB_ARGS_ARG(inchnstr_REQUIRED_ARGC, inchnstr_OPTIONAL_ARGC));
#endif
#if BIND_inchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "inchstr", mrb_Curses_inchstr, MRB_ARGS_ARG(inchstr_REQUIRED_ARGC, inchstr_OPTIONAL_ARGC));
#endif
#if BIND_init_color_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "init_color", mrb_Curses_init_color, MRB_ARGS_ARG(init_color_REQUIRED_ARGC, init_color_OPTIONAL_ARGC));
#endif
#if BIND_init_pair_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "init_pair", mrb_Curses_init_pair, MRB_ARGS_ARG(init_pair_REQUIRED_ARGC, init_pair_OPTIONAL_ARGC));
#endif
#if BIND_initscr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "initscr", mrb_Curses_initscr, MRB_ARGS_ARG(initscr_REQUIRED_ARGC, initscr_OPTIONAL_ARGC));
#endif
#if BIND_innstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "innstr", mrb_Curses_innstr, MRB_ARGS_ARG(innstr_REQUIRED_ARGC, innstr_OPTIONAL_ARGC));
#endif
#if BIND_insch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "insch", mrb_Curses_insch, MRB_ARGS_ARG(insch_REQUIRED_ARGC, insch_OPTIONAL_ARGC));
#endif
#if BIND_insdelln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "insdelln", mrb_Curses_insdelln, MRB_ARGS_ARG(insdelln_REQUIRED_ARGC, insdelln_OPTIONAL_ARGC));
#endif
#if BIND_insertln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "insertln", mrb_Curses_insertln, MRB_ARGS_ARG(insertln_REQUIRED_ARGC, insertln_OPTIONAL_ARGC));
#endif
#if BIND_insnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "insnstr", mrb_Curses_insnstr, MRB_ARGS_ARG(insnstr_REQUIRED_ARGC, insnstr_OPTIONAL_ARGC));
#endif
#if BIND_insrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "insrawch", mrb_Curses_insrawch, MRB_ARGS_ARG(insrawch_REQUIRED_ARGC, insrawch_OPTIONAL_ARGC));
#endif
#if BIND_insstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "insstr", mrb_Curses_insstr, MRB_ARGS_ARG(insstr_REQUIRED_ARGC, insstr_OPTIONAL_ARGC));
#endif
#if BIND_instr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "instr", mrb_Curses_instr, MRB_ARGS_ARG(instr_REQUIRED_ARGC, instr_OPTIONAL_ARGC));
#endif
#if BIND_intrflush_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "intrflush", mrb_Curses_intrflush, MRB_ARGS_ARG(intrflush_REQUIRED_ARGC, intrflush_OPTIONAL_ARGC));
#endif
#if BIND_is_linetouched_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "is_linetouched", mrb_Curses_is_linetouched, MRB_ARGS_ARG(is_linetouched_REQUIRED_ARGC, is_linetouched_OPTIONAL_ARGC));
#endif
#if BIND_is_termresized_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "is_termresized", mrb_Curses_is_termresized, MRB_ARGS_ARG(is_termresized_REQUIRED_ARGC, is_termresized_OPTIONAL_ARGC));
#endif
#if BIND_is_wintouched_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "is_wintouched", mrb_Curses_is_wintouched, MRB_ARGS_ARG(is_wintouched_REQUIRED_ARGC, is_wintouched_OPTIONAL_ARGC));
#endif
#if BIND_isendwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "isendwin", mrb_Curses_isendwin, MRB_ARGS_ARG(isendwin_REQUIRED_ARGC, isendwin_OPTIONAL_ARGC));
#endif
#if BIND_keyname_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "keyname", mrb_Curses_keyname, MRB_ARGS_ARG(keyname_REQUIRED_ARGC, keyname_OPTIONAL_ARGC));
#endif
#if BIND_keypad_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "keypad", mrb_Curses_keypad, MRB_ARGS_ARG(keypad_REQUIRED_ARGC, keypad_OPTIONAL_ARGC));
#endif
#if BIND_killchar_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "killchar", mrb_Curses_killchar, MRB_ARGS_ARG(killchar_REQUIRED_ARGC, killchar_OPTIONAL_ARGC));
#endif
#if BIND_leaveok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "leaveok", mrb_Curses_leaveok, MRB_ARGS_ARG(leaveok_REQUIRED_ARGC, leaveok_OPTIONAL_ARGC));
#endif
#if BIND_longname_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "longname", mrb_Curses_longname, MRB_ARGS_ARG(longname_REQUIRED_ARGC, longname_OPTIONAL_ARGC));
#endif
#if BIND_map_button_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "map_button", mrb_Curses_map_button, MRB_ARGS_ARG(map_button_REQUIRED_ARGC, map_button_OPTIONAL_ARGC));
#endif
#if BIND_meta_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "meta", mrb_Curses_meta, MRB_ARGS_ARG(meta_REQUIRED_ARGC, meta_OPTIONAL_ARGC));
#endif
#if BIND_mouse_off_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mouse_off", mrb_Curses_mouse_off, MRB_ARGS_ARG(mouse_off_REQUIRED_ARGC, mouse_off_OPTIONAL_ARGC));
#endif
#if BIND_mouse_on_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mouse_on", mrb_Curses_mouse_on, MRB_ARGS_ARG(mouse_on_REQUIRED_ARGC, mouse_on_OPTIONAL_ARGC));
#endif
#if BIND_mouse_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mouse_set", mrb_Curses_mouse_set, MRB_ARGS_ARG(mouse_set_REQUIRED_ARGC, mouse_set_OPTIONAL_ARGC));
#endif
#if BIND_mouse_trafo_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mouse_trafo", mrb_Curses_mouse_trafo, MRB_ARGS_ARG(mouse_trafo_REQUIRED_ARGC, mouse_trafo_OPTIONAL_ARGC));
#endif
#if BIND_mouseinterval_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mouseinterval", mrb_Curses_mouseinterval, MRB_ARGS_ARG(mouseinterval_REQUIRED_ARGC, mouseinterval_OPTIONAL_ARGC));
#endif
#if BIND_mousemask_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mousemask", mrb_Curses_mousemask, MRB_ARGS_ARG(mousemask_REQUIRED_ARGC, mousemask_OPTIONAL_ARGC));
#endif
#if BIND_move_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "move", mrb_Curses_move, MRB_ARGS_ARG(move_REQUIRED_ARGC, move_OPTIONAL_ARGC));
#endif
#if BIND_move_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "move_panel", mrb_Curses_move_panel, MRB_ARGS_ARG(move_panel_REQUIRED_ARGC, move_panel_OPTIONAL_ARGC));
#endif
#if BIND_mvaddch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvaddch", mrb_Curses_mvaddch, MRB_ARGS_ARG(mvaddch_REQUIRED_ARGC, mvaddch_OPTIONAL_ARGC));
#endif
#if BIND_mvaddchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvaddchnstr", mrb_Curses_mvaddchnstr, MRB_ARGS_ARG(mvaddchnstr_REQUIRED_ARGC, mvaddchnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvaddchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvaddchstr", mrb_Curses_mvaddchstr, MRB_ARGS_ARG(mvaddchstr_REQUIRED_ARGC, mvaddchstr_OPTIONAL_ARGC));
#endif
#if BIND_mvaddnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvaddnstr", mrb_Curses_mvaddnstr, MRB_ARGS_ARG(mvaddnstr_REQUIRED_ARGC, mvaddnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvaddrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvaddrawch", mrb_Curses_mvaddrawch, MRB_ARGS_ARG(mvaddrawch_REQUIRED_ARGC, mvaddrawch_OPTIONAL_ARGC));
#endif
#if BIND_mvaddstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvaddstr", mrb_Curses_mvaddstr, MRB_ARGS_ARG(mvaddstr_REQUIRED_ARGC, mvaddstr_OPTIONAL_ARGC));
#endif
#if BIND_mvchgat_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvchgat", mrb_Curses_mvchgat, MRB_ARGS_ARG(mvchgat_REQUIRED_ARGC, mvchgat_OPTIONAL_ARGC));
#endif
#if BIND_mvcur_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvcur", mrb_Curses_mvcur, MRB_ARGS_ARG(mvcur_REQUIRED_ARGC, mvcur_OPTIONAL_ARGC));
#endif
#if BIND_mvdelch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvdelch", mrb_Curses_mvdelch, MRB_ARGS_ARG(mvdelch_REQUIRED_ARGC, mvdelch_OPTIONAL_ARGC));
#endif
#if BIND_mvdeleteln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvdeleteln", mrb_Curses_mvdeleteln, MRB_ARGS_ARG(mvdeleteln_REQUIRED_ARGC, mvdeleteln_OPTIONAL_ARGC));
#endif
#if BIND_mvderwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvderwin", mrb_Curses_mvderwin, MRB_ARGS_ARG(mvderwin_REQUIRED_ARGC, mvderwin_OPTIONAL_ARGC));
#endif
#if BIND_mvgetch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvgetch", mrb_Curses_mvgetch, MRB_ARGS_ARG(mvgetch_REQUIRED_ARGC, mvgetch_OPTIONAL_ARGC));
#endif
#if BIND_mvgetnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvgetnstr", mrb_Curses_mvgetnstr, MRB_ARGS_ARG(mvgetnstr_REQUIRED_ARGC, mvgetnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvgetstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvgetstr", mrb_Curses_mvgetstr, MRB_ARGS_ARG(mvgetstr_REQUIRED_ARGC, mvgetstr_OPTIONAL_ARGC));
#endif
#if BIND_mvhline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvhline", mrb_Curses_mvhline, MRB_ARGS_ARG(mvhline_REQUIRED_ARGC, mvhline_OPTIONAL_ARGC));
#endif
#if BIND_mvinch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinch", mrb_Curses_mvinch, MRB_ARGS_ARG(mvinch_REQUIRED_ARGC, mvinch_OPTIONAL_ARGC));
#endif
#if BIND_mvinchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinchnstr", mrb_Curses_mvinchnstr, MRB_ARGS_ARG(mvinchnstr_REQUIRED_ARGC, mvinchnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvinchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinchstr", mrb_Curses_mvinchstr, MRB_ARGS_ARG(mvinchstr_REQUIRED_ARGC, mvinchstr_OPTIONAL_ARGC));
#endif
#if BIND_mvinnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinnstr", mrb_Curses_mvinnstr, MRB_ARGS_ARG(mvinnstr_REQUIRED_ARGC, mvinnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvinsch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinsch", mrb_Curses_mvinsch, MRB_ARGS_ARG(mvinsch_REQUIRED_ARGC, mvinsch_OPTIONAL_ARGC));
#endif
#if BIND_mvinsertln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinsertln", mrb_Curses_mvinsertln, MRB_ARGS_ARG(mvinsertln_REQUIRED_ARGC, mvinsertln_OPTIONAL_ARGC));
#endif
#if BIND_mvinsnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinsnstr", mrb_Curses_mvinsnstr, MRB_ARGS_ARG(mvinsnstr_REQUIRED_ARGC, mvinsnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvinsrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinsrawch", mrb_Curses_mvinsrawch, MRB_ARGS_ARG(mvinsrawch_REQUIRED_ARGC, mvinsrawch_OPTIONAL_ARGC));
#endif
#if BIND_mvinsstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinsstr", mrb_Curses_mvinsstr, MRB_ARGS_ARG(mvinsstr_REQUIRED_ARGC, mvinsstr_OPTIONAL_ARGC));
#endif
#if BIND_mvinstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvinstr", mrb_Curses_mvinstr, MRB_ARGS_ARG(mvinstr_REQUIRED_ARGC, mvinstr_OPTIONAL_ARGC));
#endif
#if BIND_mvprintw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvprintw", mrb_Curses_mvprintw, MRB_ARGS_ARG(mvprintw_REQUIRED_ARGC, mvprintw_OPTIONAL_ARGC));
#endif
#if BIND_mvscanw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvscanw", mrb_Curses_mvscanw, MRB_ARGS_ARG(mvscanw_REQUIRED_ARGC, mvscanw_OPTIONAL_ARGC));
#endif
#if BIND_mvvline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvvline", mrb_Curses_mvvline, MRB_ARGS_ARG(mvvline_REQUIRED_ARGC, mvvline_OPTIONAL_ARGC));
#endif
#if BIND_mvwaddch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwaddch", mrb_Curses_mvwaddch, MRB_ARGS_ARG(mvwaddch_REQUIRED_ARGC, mvwaddch_OPTIONAL_ARGC));
#endif
#if BIND_mvwaddchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwaddchnstr", mrb_Curses_mvwaddchnstr, MRB_ARGS_ARG(mvwaddchnstr_REQUIRED_ARGC, mvwaddchnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwaddchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwaddchstr", mrb_Curses_mvwaddchstr, MRB_ARGS_ARG(mvwaddchstr_REQUIRED_ARGC, mvwaddchstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwaddnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwaddnstr", mrb_Curses_mvwaddnstr, MRB_ARGS_ARG(mvwaddnstr_REQUIRED_ARGC, mvwaddnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwaddrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwaddrawch", mrb_Curses_mvwaddrawch, MRB_ARGS_ARG(mvwaddrawch_REQUIRED_ARGC, mvwaddrawch_OPTIONAL_ARGC));
#endif
#if BIND_mvwaddstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwaddstr", mrb_Curses_mvwaddstr, MRB_ARGS_ARG(mvwaddstr_REQUIRED_ARGC, mvwaddstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwchgat_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwchgat", mrb_Curses_mvwchgat, MRB_ARGS_ARG(mvwchgat_REQUIRED_ARGC, mvwchgat_OPTIONAL_ARGC));
#endif
#if BIND_mvwdelch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwdelch", mrb_Curses_mvwdelch, MRB_ARGS_ARG(mvwdelch_REQUIRED_ARGC, mvwdelch_OPTIONAL_ARGC));
#endif
#if BIND_mvwdeleteln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwdeleteln", mrb_Curses_mvwdeleteln, MRB_ARGS_ARG(mvwdeleteln_REQUIRED_ARGC, mvwdeleteln_OPTIONAL_ARGC));
#endif
#if BIND_mvwgetch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwgetch", mrb_Curses_mvwgetch, MRB_ARGS_ARG(mvwgetch_REQUIRED_ARGC, mvwgetch_OPTIONAL_ARGC));
#endif
#if BIND_mvwgetnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwgetnstr", mrb_Curses_mvwgetnstr, MRB_ARGS_ARG(mvwgetnstr_REQUIRED_ARGC, mvwgetnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwgetstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwgetstr", mrb_Curses_mvwgetstr, MRB_ARGS_ARG(mvwgetstr_REQUIRED_ARGC, mvwgetstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwhline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwhline", mrb_Curses_mvwhline, MRB_ARGS_ARG(mvwhline_REQUIRED_ARGC, mvwhline_OPTIONAL_ARGC));
#endif
#if BIND_mvwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwin", mrb_Curses_mvwin, MRB_ARGS_ARG(mvwin_REQUIRED_ARGC, mvwin_OPTIONAL_ARGC));
#endif
#if BIND_mvwinch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinch", mrb_Curses_mvwinch, MRB_ARGS_ARG(mvwinch_REQUIRED_ARGC, mvwinch_OPTIONAL_ARGC));
#endif
#if BIND_mvwinchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinchnstr", mrb_Curses_mvwinchnstr, MRB_ARGS_ARG(mvwinchnstr_REQUIRED_ARGC, mvwinchnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwinchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinchstr", mrb_Curses_mvwinchstr, MRB_ARGS_ARG(mvwinchstr_REQUIRED_ARGC, mvwinchstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwinnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinnstr", mrb_Curses_mvwinnstr, MRB_ARGS_ARG(mvwinnstr_REQUIRED_ARGC, mvwinnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwinsch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinsch", mrb_Curses_mvwinsch, MRB_ARGS_ARG(mvwinsch_REQUIRED_ARGC, mvwinsch_OPTIONAL_ARGC));
#endif
#if BIND_mvwinsertln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinsertln", mrb_Curses_mvwinsertln, MRB_ARGS_ARG(mvwinsertln_REQUIRED_ARGC, mvwinsertln_OPTIONAL_ARGC));
#endif
#if BIND_mvwinsnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinsnstr", mrb_Curses_mvwinsnstr, MRB_ARGS_ARG(mvwinsnstr_REQUIRED_ARGC, mvwinsnstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwinsrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinsrawch", mrb_Curses_mvwinsrawch, MRB_ARGS_ARG(mvwinsrawch_REQUIRED_ARGC, mvwinsrawch_OPTIONAL_ARGC));
#endif
#if BIND_mvwinsstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinsstr", mrb_Curses_mvwinsstr, MRB_ARGS_ARG(mvwinsstr_REQUIRED_ARGC, mvwinsstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwinstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwinstr", mrb_Curses_mvwinstr, MRB_ARGS_ARG(mvwinstr_REQUIRED_ARGC, mvwinstr_OPTIONAL_ARGC));
#endif
#if BIND_mvwprintw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwprintw", mrb_Curses_mvwprintw, MRB_ARGS_ARG(mvwprintw_REQUIRED_ARGC, mvwprintw_OPTIONAL_ARGC));
#endif
#if BIND_mvwscanw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwscanw", mrb_Curses_mvwscanw, MRB_ARGS_ARG(mvwscanw_REQUIRED_ARGC, mvwscanw_OPTIONAL_ARGC));
#endif
#if BIND_mvwvline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "mvwvline", mrb_Curses_mvwvline, MRB_ARGS_ARG(mvwvline_REQUIRED_ARGC, mvwvline_OPTIONAL_ARGC));
#endif
#if BIND_napms_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "napms", mrb_Curses_napms, MRB_ARGS_ARG(napms_REQUIRED_ARGC, napms_OPTIONAL_ARGC));
#endif
#if BIND_nc_getmouse_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "nc_getmouse", mrb_Curses_nc_getmouse, MRB_ARGS_ARG(nc_getmouse_REQUIRED_ARGC, nc_getmouse_OPTIONAL_ARGC));
#endif
#if BIND_new_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "new_panel", mrb_Curses_new_panel, MRB_ARGS_ARG(new_panel_REQUIRED_ARGC, new_panel_OPTIONAL_ARGC));
#endif
#if BIND_newpad_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "newpad", mrb_Curses_newpad, MRB_ARGS_ARG(newpad_REQUIRED_ARGC, newpad_OPTIONAL_ARGC));
#endif
#if BIND_newterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "newterm", mrb_Curses_newterm, MRB_ARGS_ARG(newterm_REQUIRED_ARGC, newterm_OPTIONAL_ARGC));
#endif
#if BIND_newwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "newwin", mrb_Curses_newwin, MRB_ARGS_ARG(newwin_REQUIRED_ARGC, newwin_OPTIONAL_ARGC));
#endif
#if BIND_nl_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "nl", mrb_Curses_nl, MRB_ARGS_ARG(nl_REQUIRED_ARGC, nl_OPTIONAL_ARGC));
#endif
#if BIND_nocbreak_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "nocbreak", mrb_Curses_nocbreak, MRB_ARGS_ARG(nocbreak_REQUIRED_ARGC, nocbreak_OPTIONAL_ARGC));
#endif
#if BIND_nocrmode_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "nocrmode", mrb_Curses_nocrmode, MRB_ARGS_ARG(nocrmode_REQUIRED_ARGC, nocrmode_OPTIONAL_ARGC));
#endif
#if BIND_nodelay_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "nodelay", mrb_Curses_nodelay, MRB_ARGS_ARG(nodelay_REQUIRED_ARGC, nodelay_OPTIONAL_ARGC));
#endif
#if BIND_noecho_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "noecho", mrb_Curses_noecho, MRB_ARGS_ARG(noecho_REQUIRED_ARGC, noecho_OPTIONAL_ARGC));
#endif
#if BIND_nonl_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "nonl", mrb_Curses_nonl, MRB_ARGS_ARG(nonl_REQUIRED_ARGC, nonl_OPTIONAL_ARGC));
#endif
#if BIND_noqiflush_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "noqiflush", mrb_Curses_noqiflush, MRB_ARGS_ARG(noqiflush_REQUIRED_ARGC, noqiflush_OPTIONAL_ARGC));
#endif
#if BIND_noraw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "noraw", mrb_Curses_noraw, MRB_ARGS_ARG(noraw_REQUIRED_ARGC, noraw_OPTIONAL_ARGC));
#endif
#if BIND_notimeout_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "notimeout", mrb_Curses_notimeout, MRB_ARGS_ARG(notimeout_REQUIRED_ARGC, notimeout_OPTIONAL_ARGC));
#endif
#if BIND_overlay_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "overlay", mrb_Curses_overlay, MRB_ARGS_ARG(overlay_REQUIRED_ARGC, overlay_OPTIONAL_ARGC));
#endif
#if BIND_overwrite_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "overwrite", mrb_Curses_overwrite, MRB_ARGS_ARG(overwrite_REQUIRED_ARGC, overwrite_OPTIONAL_ARGC));
#endif
#if BIND_pair_content_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "pair_content", mrb_Curses_pair_content, MRB_ARGS_ARG(pair_content_REQUIRED_ARGC, pair_content_OPTIONAL_ARGC));
#endif
#if BIND_panel_above_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "panel_above", mrb_Curses_panel_above, MRB_ARGS_ARG(panel_above_REQUIRED_ARGC, panel_above_OPTIONAL_ARGC));
#endif
#if BIND_panel_below_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "panel_below", mrb_Curses_panel_below, MRB_ARGS_ARG(panel_below_REQUIRED_ARGC, panel_below_OPTIONAL_ARGC));
#endif
#if BIND_panel_hidden_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "panel_hidden", mrb_Curses_panel_hidden, MRB_ARGS_ARG(panel_hidden_REQUIRED_ARGC, panel_hidden_OPTIONAL_ARGC));
#endif
#if BIND_panel_userptr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "panel_userptr", mrb_Curses_panel_userptr, MRB_ARGS_ARG(panel_userptr_REQUIRED_ARGC, panel_userptr_OPTIONAL_ARGC));
#endif
#if BIND_panel_window_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "panel_window", mrb_Curses_panel_window, MRB_ARGS_ARG(panel_window_REQUIRED_ARGC, panel_window_OPTIONAL_ARGC));
#endif
#if BIND_PDC_clearclipboard_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_clearclipboard", mrb_Curses_PDC_clearclipboard, MRB_ARGS_ARG(PDC_clearclipboard_REQUIRED_ARGC, PDC_clearclipboard_OPTIONAL_ARGC));
#endif
#if BIND_PDC_debug_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_debug", mrb_Curses_PDC_debug, MRB_ARGS_ARG(PDC_debug_REQUIRED_ARGC, PDC_debug_OPTIONAL_ARGC));
#endif
#if BIND_PDC_freeclipboard_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_freeclipboard", mrb_Curses_PDC_freeclipboard, MRB_ARGS_ARG(PDC_freeclipboard_REQUIRED_ARGC, PDC_freeclipboard_OPTIONAL_ARGC));
#endif
#if BIND_PDC_get_input_fd_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_get_input_fd", mrb_Curses_PDC_get_input_fd, MRB_ARGS_ARG(PDC_get_input_fd_REQUIRED_ARGC, PDC_get_input_fd_OPTIONAL_ARGC));
#endif
#if BIND_PDC_get_key_modifiers_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_get_key_modifiers", mrb_Curses_PDC_get_key_modifiers, MRB_ARGS_ARG(PDC_get_key_modifiers_REQUIRED_ARGC, PDC_get_key_modifiers_OPTIONAL_ARGC));
#endif
#if BIND_PDC_getclipboard_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_getclipboard", mrb_Curses_PDC_getclipboard, MRB_ARGS_ARG(PDC_getclipboard_REQUIRED_ARGC, PDC_getclipboard_OPTIONAL_ARGC));
#endif
#if BIND_PDC_return_key_modifiers_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_return_key_modifiers", mrb_Curses_PDC_return_key_modifiers, MRB_ARGS_ARG(PDC_return_key_modifiers_REQUIRED_ARGC, PDC_return_key_modifiers_OPTIONAL_ARGC));
#endif
#if BIND_PDC_save_key_modifiers_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_save_key_modifiers", mrb_Curses_PDC_save_key_modifiers, MRB_ARGS_ARG(PDC_save_key_modifiers_REQUIRED_ARGC, PDC_save_key_modifiers_OPTIONAL_ARGC));
#endif
#if BIND_PDC_set_blink_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_set_blink", mrb_Curses_PDC_set_blink, MRB_ARGS_ARG(PDC_set_blink_REQUIRED_ARGC, PDC_set_blink_OPTIONAL_ARGC));
#endif
#if BIND_PDC_set_line_color_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_set_line_color", mrb_Curses_PDC_set_line_color, MRB_ARGS_ARG(PDC_set_line_color_REQUIRED_ARGC, PDC_set_line_color_OPTIONAL_ARGC));
#endif
#if BIND_PDC_set_title_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_set_title", mrb_Curses_PDC_set_title, MRB_ARGS_ARG(PDC_set_title_REQUIRED_ARGC, PDC_set_title_OPTIONAL_ARGC));
#endif
#if BIND_PDC_setclipboard_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_setclipboard", mrb_Curses_PDC_setclipboard, MRB_ARGS_ARG(PDC_setclipboard_REQUIRED_ARGC, PDC_setclipboard_OPTIONAL_ARGC));
#endif
#if BIND_PDC_ungetch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "PDC_ungetch", mrb_Curses_PDC_ungetch, MRB_ARGS_ARG(PDC_ungetch_REQUIRED_ARGC, PDC_ungetch_OPTIONAL_ARGC));
#endif
#if BIND_pechochar_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "pechochar", mrb_Curses_pechochar, MRB_ARGS_ARG(pechochar_REQUIRED_ARGC, pechochar_OPTIONAL_ARGC));
#endif
#if BIND_pnoutrefresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "pnoutrefresh", mrb_Curses_pnoutrefresh, MRB_ARGS_ARG(pnoutrefresh_REQUIRED_ARGC, pnoutrefresh_OPTIONAL_ARGC));
#endif
#if BIND_prefresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "prefresh", mrb_Curses_prefresh, MRB_ARGS_ARG(prefresh_REQUIRED_ARGC, prefresh_OPTIONAL_ARGC));
#endif
#if BIND_printw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "printw", mrb_Curses_printw, MRB_ARGS_ARG(printw_REQUIRED_ARGC, printw_OPTIONAL_ARGC));
#endif
#if BIND_putp_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "putp", mrb_Curses_putp, MRB_ARGS_ARG(putp_REQUIRED_ARGC, putp_OPTIONAL_ARGC));
#endif
#if BIND_putwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "putwin", mrb_Curses_putwin, MRB_ARGS_ARG(putwin_REQUIRED_ARGC, putwin_OPTIONAL_ARGC));
#endif
#if BIND_qiflush_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "qiflush", mrb_Curses_qiflush, MRB_ARGS_ARG(qiflush_REQUIRED_ARGC, qiflush_OPTIONAL_ARGC));
#endif
#if BIND_raw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "raw", mrb_Curses_raw, MRB_ARGS_ARG(raw_REQUIRED_ARGC, raw_OPTIONAL_ARGC));
#endif
#if BIND_raw_output_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "raw_output", mrb_Curses_raw_output, MRB_ARGS_ARG(raw_output_REQUIRED_ARGC, raw_output_OPTIONAL_ARGC));
#endif
#if BIND_redrawwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "redrawwin", mrb_Curses_redrawwin, MRB_ARGS_ARG(redrawwin_REQUIRED_ARGC, redrawwin_OPTIONAL_ARGC));
#endif
#if BIND_refresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "refresh", mrb_Curses_refresh, MRB_ARGS_ARG(refresh_REQUIRED_ARGC, refresh_OPTIONAL_ARGC));
#endif
#if BIND_replace_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "replace_panel", mrb_Curses_replace_panel, MRB_ARGS_ARG(replace_panel_REQUIRED_ARGC, replace_panel_OPTIONAL_ARGC));
#endif
#if BIND_request_mouse_pos_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "request_mouse_pos", mrb_Curses_request_mouse_pos, MRB_ARGS_ARG(request_mouse_pos_REQUIRED_ARGC, request_mouse_pos_OPTIONAL_ARGC));
#endif
#if BIND_reset_prog_mode_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "reset_prog_mode", mrb_Curses_reset_prog_mode, MRB_ARGS_ARG(reset_prog_mode_REQUIRED_ARGC, reset_prog_mode_OPTIONAL_ARGC));
#endif
#if BIND_reset_shell_mode_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "reset_shell_mode", mrb_Curses_reset_shell_mode, MRB_ARGS_ARG(reset_shell_mode_REQUIRED_ARGC, reset_shell_mode_OPTIONAL_ARGC));
#endif
#if BIND_resetterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "resetterm", mrb_Curses_resetterm, MRB_ARGS_ARG(resetterm_REQUIRED_ARGC, resetterm_OPTIONAL_ARGC));
#endif
#if BIND_resetty_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "resetty", mrb_Curses_resetty, MRB_ARGS_ARG(resetty_REQUIRED_ARGC, resetty_OPTIONAL_ARGC));
#endif
#if BIND_resize_term_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "resize_term", mrb_Curses_resize_term, MRB_ARGS_ARG(resize_term_REQUIRED_ARGC, resize_term_OPTIONAL_ARGC));
#endif
#if BIND_resize_window_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "resize_window", mrb_Curses_resize_window, MRB_ARGS_ARG(resize_window_REQUIRED_ARGC, resize_window_OPTIONAL_ARGC));
#endif
#if BIND_restartterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "restartterm", mrb_Curses_restartterm, MRB_ARGS_ARG(restartterm_REQUIRED_ARGC, restartterm_OPTIONAL_ARGC));
#endif
#if BIND_ripoffline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "ripoffline", mrb_Curses_ripoffline, MRB_ARGS_ARG(ripoffline_REQUIRED_ARGC, ripoffline_OPTIONAL_ARGC));
#endif
#if BIND_saveterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "saveterm", mrb_Curses_saveterm, MRB_ARGS_ARG(saveterm_REQUIRED_ARGC, saveterm_OPTIONAL_ARGC));
#endif
#if BIND_savetty_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "savetty", mrb_Curses_savetty, MRB_ARGS_ARG(savetty_REQUIRED_ARGC, savetty_OPTIONAL_ARGC));
#endif
#if BIND_scanw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scanw", mrb_Curses_scanw, MRB_ARGS_ARG(scanw_REQUIRED_ARGC, scanw_OPTIONAL_ARGC));
#endif
#if BIND_scr_dump_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scr_dump", mrb_Curses_scr_dump, MRB_ARGS_ARG(scr_dump_REQUIRED_ARGC, scr_dump_OPTIONAL_ARGC));
#endif
#if BIND_scr_init_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scr_init", mrb_Curses_scr_init, MRB_ARGS_ARG(scr_init_REQUIRED_ARGC, scr_init_OPTIONAL_ARGC));
#endif
#if BIND_scr_restore_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scr_restore", mrb_Curses_scr_restore, MRB_ARGS_ARG(scr_restore_REQUIRED_ARGC, scr_restore_OPTIONAL_ARGC));
#endif
#if BIND_scr_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scr_set", mrb_Curses_scr_set, MRB_ARGS_ARG(scr_set_REQUIRED_ARGC, scr_set_OPTIONAL_ARGC));
#endif
#if BIND_scrl_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scrl", mrb_Curses_scrl, MRB_ARGS_ARG(scrl_REQUIRED_ARGC, scrl_OPTIONAL_ARGC));
#endif
#if BIND_scroll_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scroll", mrb_Curses_scroll, MRB_ARGS_ARG(scroll_REQUIRED_ARGC, scroll_OPTIONAL_ARGC));
#endif
#if BIND_scrollok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "scrollok", mrb_Curses_scrollok, MRB_ARGS_ARG(scrollok_REQUIRED_ARGC, scrollok_OPTIONAL_ARGC));
#endif
#if BIND_set_curterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "set_curterm", mrb_Curses_set_curterm, MRB_ARGS_ARG(set_curterm_REQUIRED_ARGC, set_curterm_OPTIONAL_ARGC));
#endif
#if BIND_set_panel_userptr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "set_panel_userptr", mrb_Curses_set_panel_userptr, MRB_ARGS_ARG(set_panel_userptr_REQUIRED_ARGC, set_panel_userptr_OPTIONAL_ARGC));
#endif
#if BIND_set_term_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "set_term", mrb_Curses_set_term, MRB_ARGS_ARG(set_term_REQUIRED_ARGC, set_term_OPTIONAL_ARGC));
#endif
#if BIND_setscrreg_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "setscrreg", mrb_Curses_setscrreg, MRB_ARGS_ARG(setscrreg_REQUIRED_ARGC, setscrreg_OPTIONAL_ARGC));
#endif
#if BIND_setsyx_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "setsyx", mrb_Curses_setsyx, MRB_ARGS_ARG(setsyx_REQUIRED_ARGC, setsyx_OPTIONAL_ARGC));
#endif
#if BIND_setterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "setterm", mrb_Curses_setterm, MRB_ARGS_ARG(setterm_REQUIRED_ARGC, setterm_OPTIONAL_ARGC));
#endif
#if BIND_setupterm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "setupterm", mrb_Curses_setupterm, MRB_ARGS_ARG(setupterm_REQUIRED_ARGC, setupterm_OPTIONAL_ARGC));
#endif
#if BIND_show_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "show_panel", mrb_Curses_show_panel, MRB_ARGS_ARG(show_panel_REQUIRED_ARGC, show_panel_OPTIONAL_ARGC));
#endif
#if BIND_slk_attr_off_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_attr_off", mrb_Curses_slk_attr_off, MRB_ARGS_ARG(slk_attr_off_REQUIRED_ARGC, slk_attr_off_OPTIONAL_ARGC));
#endif
#if BIND_slk_attr_on_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_attr_on", mrb_Curses_slk_attr_on, MRB_ARGS_ARG(slk_attr_on_REQUIRED_ARGC, slk_attr_on_OPTIONAL_ARGC));
#endif
#if BIND_slk_attr_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_attr_set", mrb_Curses_slk_attr_set, MRB_ARGS_ARG(slk_attr_set_REQUIRED_ARGC, slk_attr_set_OPTIONAL_ARGC));
#endif
#if BIND_slk_attroff_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_attroff", mrb_Curses_slk_attroff, MRB_ARGS_ARG(slk_attroff_REQUIRED_ARGC, slk_attroff_OPTIONAL_ARGC));
#endif
#if BIND_slk_attron_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_attron", mrb_Curses_slk_attron, MRB_ARGS_ARG(slk_attron_REQUIRED_ARGC, slk_attron_OPTIONAL_ARGC));
#endif
#if BIND_slk_attrset_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_attrset", mrb_Curses_slk_attrset, MRB_ARGS_ARG(slk_attrset_REQUIRED_ARGC, slk_attrset_OPTIONAL_ARGC));
#endif
#if BIND_slk_clear_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_clear", mrb_Curses_slk_clear, MRB_ARGS_ARG(slk_clear_REQUIRED_ARGC, slk_clear_OPTIONAL_ARGC));
#endif
#if BIND_slk_color_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_color", mrb_Curses_slk_color, MRB_ARGS_ARG(slk_color_REQUIRED_ARGC, slk_color_OPTIONAL_ARGC));
#endif
#if BIND_slk_init_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_init", mrb_Curses_slk_init, MRB_ARGS_ARG(slk_init_REQUIRED_ARGC, slk_init_OPTIONAL_ARGC));
#endif
#if BIND_slk_label_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_label", mrb_Curses_slk_label, MRB_ARGS_ARG(slk_label_REQUIRED_ARGC, slk_label_OPTIONAL_ARGC));
#endif
#if BIND_slk_noutrefresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_noutrefresh", mrb_Curses_slk_noutrefresh, MRB_ARGS_ARG(slk_noutrefresh_REQUIRED_ARGC, slk_noutrefresh_OPTIONAL_ARGC));
#endif
#if BIND_slk_refresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_refresh", mrb_Curses_slk_refresh, MRB_ARGS_ARG(slk_refresh_REQUIRED_ARGC, slk_refresh_OPTIONAL_ARGC));
#endif
#if BIND_slk_restore_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_restore", mrb_Curses_slk_restore, MRB_ARGS_ARG(slk_restore_REQUIRED_ARGC, slk_restore_OPTIONAL_ARGC));
#endif
#if BIND_slk_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_set", mrb_Curses_slk_set, MRB_ARGS_ARG(slk_set_REQUIRED_ARGC, slk_set_OPTIONAL_ARGC));
#endif
#if BIND_slk_touch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "slk_touch", mrb_Curses_slk_touch, MRB_ARGS_ARG(slk_touch_REQUIRED_ARGC, slk_touch_OPTIONAL_ARGC));
#endif
#if BIND_standend_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "standend", mrb_Curses_standend, MRB_ARGS_ARG(standend_REQUIRED_ARGC, standend_OPTIONAL_ARGC));
#endif
#if BIND_standout_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "standout", mrb_Curses_standout, MRB_ARGS_ARG(standout_REQUIRED_ARGC, standout_OPTIONAL_ARGC));
#endif
#if BIND_start_color_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "start_color", mrb_Curses_start_color, MRB_ARGS_ARG(start_color_REQUIRED_ARGC, start_color_OPTIONAL_ARGC));
#endif
#if BIND_subpad_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "subpad", mrb_Curses_subpad, MRB_ARGS_ARG(subpad_REQUIRED_ARGC, subpad_OPTIONAL_ARGC));
#endif
#if BIND_subwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "subwin", mrb_Curses_subwin, MRB_ARGS_ARG(subwin_REQUIRED_ARGC, subwin_OPTIONAL_ARGC));
#endif
#if BIND_syncok_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "syncok", mrb_Curses_syncok, MRB_ARGS_ARG(syncok_REQUIRED_ARGC, syncok_OPTIONAL_ARGC));
#endif
#if BIND_term_attrs_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "term_attrs", mrb_Curses_term_attrs, MRB_ARGS_ARG(term_attrs_REQUIRED_ARGC, term_attrs_OPTIONAL_ARGC));
#endif
#if BIND_termattrs_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "termattrs", mrb_Curses_termattrs, MRB_ARGS_ARG(termattrs_REQUIRED_ARGC, termattrs_OPTIONAL_ARGC));
#endif
#if BIND_termname_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "termname", mrb_Curses_termname, MRB_ARGS_ARG(termname_REQUIRED_ARGC, termname_OPTIONAL_ARGC));
#endif
#if BIND_tgetent_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tgetent", mrb_Curses_tgetent, MRB_ARGS_ARG(tgetent_REQUIRED_ARGC, tgetent_OPTIONAL_ARGC));
#endif
#if BIND_tgetflag_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tgetflag", mrb_Curses_tgetflag, MRB_ARGS_ARG(tgetflag_REQUIRED_ARGC, tgetflag_OPTIONAL_ARGC));
#endif
#if BIND_tgetnum_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tgetnum", mrb_Curses_tgetnum, MRB_ARGS_ARG(tgetnum_REQUIRED_ARGC, tgetnum_OPTIONAL_ARGC));
#endif
#if BIND_tgetstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tgetstr", mrb_Curses_tgetstr, MRB_ARGS_ARG(tgetstr_REQUIRED_ARGC, tgetstr_OPTIONAL_ARGC));
#endif
#if BIND_tgoto_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tgoto", mrb_Curses_tgoto, MRB_ARGS_ARG(tgoto_REQUIRED_ARGC, tgoto_OPTIONAL_ARGC));
#endif
#if BIND_tigetflag_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tigetflag", mrb_Curses_tigetflag, MRB_ARGS_ARG(tigetflag_REQUIRED_ARGC, tigetflag_OPTIONAL_ARGC));
#endif
#if BIND_tigetnum_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tigetnum", mrb_Curses_tigetnum, MRB_ARGS_ARG(tigetnum_REQUIRED_ARGC, tigetnum_OPTIONAL_ARGC));
#endif
#if BIND_tigetstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tigetstr", mrb_Curses_tigetstr, MRB_ARGS_ARG(tigetstr_REQUIRED_ARGC, tigetstr_OPTIONAL_ARGC));
#endif
#if BIND_timeout_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "timeout", mrb_Curses_timeout, MRB_ARGS_ARG(timeout_REQUIRED_ARGC, timeout_OPTIONAL_ARGC));
#endif
#if BIND_top_panel_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "top_panel", mrb_Curses_top_panel, MRB_ARGS_ARG(top_panel_REQUIRED_ARGC, top_panel_OPTIONAL_ARGC));
#endif
#if BIND_touchline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "touchline", mrb_Curses_touchline, MRB_ARGS_ARG(touchline_REQUIRED_ARGC, touchline_OPTIONAL_ARGC));
#endif
#if BIND_touchwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "touchwin", mrb_Curses_touchwin, MRB_ARGS_ARG(touchwin_REQUIRED_ARGC, touchwin_OPTIONAL_ARGC));
#endif
#if BIND_tparm_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tparm", mrb_Curses_tparm, MRB_ARGS_ARG(tparm_REQUIRED_ARGC, tparm_OPTIONAL_ARGC));
#endif
#if BIND_tputs_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "tputs", mrb_Curses_tputs, MRB_ARGS_ARG(tputs_REQUIRED_ARGC, tputs_OPTIONAL_ARGC));
#endif
#if BIND_traceoff_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "traceoff", mrb_Curses_traceoff, MRB_ARGS_ARG(traceoff_REQUIRED_ARGC, traceoff_OPTIONAL_ARGC));
#endif
#if BIND_traceon_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "traceon", mrb_Curses_traceon, MRB_ARGS_ARG(traceon_REQUIRED_ARGC, traceon_OPTIONAL_ARGC));
#endif
#if BIND_typeahead_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "typeahead", mrb_Curses_typeahead, MRB_ARGS_ARG(typeahead_REQUIRED_ARGC, typeahead_OPTIONAL_ARGC));
#endif
#if BIND_unctrl_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "unctrl", mrb_Curses_unctrl, MRB_ARGS_ARG(unctrl_REQUIRED_ARGC, unctrl_OPTIONAL_ARGC));
#endif
#if BIND_ungetmouse_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "ungetmouse", mrb_Curses_ungetmouse, MRB_ARGS_ARG(ungetmouse_REQUIRED_ARGC, ungetmouse_OPTIONAL_ARGC));
#endif
#if BIND_untouchwin_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "untouchwin", mrb_Curses_untouchwin, MRB_ARGS_ARG(untouchwin_REQUIRED_ARGC, untouchwin_OPTIONAL_ARGC));
#endif
#if BIND_update_panels_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "update_panels", mrb_Curses_update_panels, MRB_ARGS_ARG(update_panels_REQUIRED_ARGC, update_panels_OPTIONAL_ARGC));
#endif
#if BIND_use_default_colors_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "use_default_colors", mrb_Curses_use_default_colors, MRB_ARGS_ARG(use_default_colors_REQUIRED_ARGC, use_default_colors_OPTIONAL_ARGC));
#endif
#if BIND_use_env_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "use_env", mrb_Curses_use_env, MRB_ARGS_ARG(use_env_REQUIRED_ARGC, use_env_OPTIONAL_ARGC));
#endif
#if BIND_vid_attr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vid_attr", mrb_Curses_vid_attr, MRB_ARGS_ARG(vid_attr_REQUIRED_ARGC, vid_attr_OPTIONAL_ARGC));
#endif
#if BIND_vid_puts_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vid_puts", mrb_Curses_vid_puts, MRB_ARGS_ARG(vid_puts_REQUIRED_ARGC, vid_puts_OPTIONAL_ARGC));
#endif
#if BIND_vidattr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vidattr", mrb_Curses_vidattr, MRB_ARGS_ARG(vidattr_REQUIRED_ARGC, vidattr_OPTIONAL_ARGC));
#endif
#if BIND_vidputs_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vidputs", mrb_Curses_vidputs, MRB_ARGS_ARG(vidputs_REQUIRED_ARGC, vidputs_OPTIONAL_ARGC));
#endif
#if BIND_vline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vline", mrb_Curses_vline, MRB_ARGS_ARG(vline_REQUIRED_ARGC, vline_OPTIONAL_ARGC));
#endif
#if BIND_vw_printw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vw_printw", mrb_Curses_vw_printw, MRB_ARGS_ARG(vw_printw_REQUIRED_ARGC, vw_printw_OPTIONAL_ARGC));
#endif
#if BIND_vw_scanw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vw_scanw", mrb_Curses_vw_scanw, MRB_ARGS_ARG(vw_scanw_REQUIRED_ARGC, vw_scanw_OPTIONAL_ARGC));
#endif
#if BIND_vwprintw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vwprintw", mrb_Curses_vwprintw, MRB_ARGS_ARG(vwprintw_REQUIRED_ARGC, vwprintw_OPTIONAL_ARGC));
#endif
#if BIND_vwscanw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "vwscanw", mrb_Curses_vwscanw, MRB_ARGS_ARG(vwscanw_REQUIRED_ARGC, vwscanw_OPTIONAL_ARGC));
#endif
#if BIND_waddch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "waddch", mrb_Curses_waddch, MRB_ARGS_ARG(waddch_REQUIRED_ARGC, waddch_OPTIONAL_ARGC));
#endif
#if BIND_waddchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "waddchnstr", mrb_Curses_waddchnstr, MRB_ARGS_ARG(waddchnstr_REQUIRED_ARGC, waddchnstr_OPTIONAL_ARGC));
#endif
#if BIND_waddchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "waddchstr", mrb_Curses_waddchstr, MRB_ARGS_ARG(waddchstr_REQUIRED_ARGC, waddchstr_OPTIONAL_ARGC));
#endif
#if BIND_waddnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "waddnstr", mrb_Curses_waddnstr, MRB_ARGS_ARG(waddnstr_REQUIRED_ARGC, waddnstr_OPTIONAL_ARGC));
#endif
#if BIND_waddrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "waddrawch", mrb_Curses_waddrawch, MRB_ARGS_ARG(waddrawch_REQUIRED_ARGC, waddrawch_OPTIONAL_ARGC));
#endif
#if BIND_waddstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "waddstr", mrb_Curses_waddstr, MRB_ARGS_ARG(waddstr_REQUIRED_ARGC, waddstr_OPTIONAL_ARGC));
#endif
#if BIND_wattr_get_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattr_get", mrb_Curses_wattr_get, MRB_ARGS_ARG(wattr_get_REQUIRED_ARGC, wattr_get_OPTIONAL_ARGC));
#endif
#if BIND_wattr_off_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattr_off", mrb_Curses_wattr_off, MRB_ARGS_ARG(wattr_off_REQUIRED_ARGC, wattr_off_OPTIONAL_ARGC));
#endif
#if BIND_wattr_on_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattr_on", mrb_Curses_wattr_on, MRB_ARGS_ARG(wattr_on_REQUIRED_ARGC, wattr_on_OPTIONAL_ARGC));
#endif
#if BIND_wattr_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattr_set", mrb_Curses_wattr_set, MRB_ARGS_ARG(wattr_set_REQUIRED_ARGC, wattr_set_OPTIONAL_ARGC));
#endif
#if BIND_wattroff_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattroff", mrb_Curses_wattroff, MRB_ARGS_ARG(wattroff_REQUIRED_ARGC, wattroff_OPTIONAL_ARGC));
#endif
#if BIND_wattron_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattron", mrb_Curses_wattron, MRB_ARGS_ARG(wattron_REQUIRED_ARGC, wattron_OPTIONAL_ARGC));
#endif
#if BIND_wattrset_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wattrset", mrb_Curses_wattrset, MRB_ARGS_ARG(wattrset_REQUIRED_ARGC, wattrset_OPTIONAL_ARGC));
#endif
#if BIND_wbkgd_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wbkgd", mrb_Curses_wbkgd, MRB_ARGS_ARG(wbkgd_REQUIRED_ARGC, wbkgd_OPTIONAL_ARGC));
#endif
#if BIND_wbkgdset_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wbkgdset", mrb_Curses_wbkgdset, MRB_ARGS_ARG(wbkgdset_REQUIRED_ARGC, wbkgdset_OPTIONAL_ARGC));
#endif
#if BIND_wborder_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wborder", mrb_Curses_wborder, MRB_ARGS_ARG(wborder_REQUIRED_ARGC, wborder_OPTIONAL_ARGC));
#endif
#if BIND_wchgat_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wchgat", mrb_Curses_wchgat, MRB_ARGS_ARG(wchgat_REQUIRED_ARGC, wchgat_OPTIONAL_ARGC));
#endif
#if BIND_wclear_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wclear", mrb_Curses_wclear, MRB_ARGS_ARG(wclear_REQUIRED_ARGC, wclear_OPTIONAL_ARGC));
#endif
#if BIND_wclrtobot_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wclrtobot", mrb_Curses_wclrtobot, MRB_ARGS_ARG(wclrtobot_REQUIRED_ARGC, wclrtobot_OPTIONAL_ARGC));
#endif
#if BIND_wclrtoeol_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wclrtoeol", mrb_Curses_wclrtoeol, MRB_ARGS_ARG(wclrtoeol_REQUIRED_ARGC, wclrtoeol_OPTIONAL_ARGC));
#endif
#if BIND_wcolor_set_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wcolor_set", mrb_Curses_wcolor_set, MRB_ARGS_ARG(wcolor_set_REQUIRED_ARGC, wcolor_set_OPTIONAL_ARGC));
#endif
#if BIND_wcursyncup_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wcursyncup", mrb_Curses_wcursyncup, MRB_ARGS_ARG(wcursyncup_REQUIRED_ARGC, wcursyncup_OPTIONAL_ARGC));
#endif
#if BIND_wdelch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wdelch", mrb_Curses_wdelch, MRB_ARGS_ARG(wdelch_REQUIRED_ARGC, wdelch_OPTIONAL_ARGC));
#endif
#if BIND_wdeleteln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wdeleteln", mrb_Curses_wdeleteln, MRB_ARGS_ARG(wdeleteln_REQUIRED_ARGC, wdeleteln_OPTIONAL_ARGC));
#endif
#if BIND_wechochar_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wechochar", mrb_Curses_wechochar, MRB_ARGS_ARG(wechochar_REQUIRED_ARGC, wechochar_OPTIONAL_ARGC));
#endif
#if BIND_wenclose_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wenclose", mrb_Curses_wenclose, MRB_ARGS_ARG(wenclose_REQUIRED_ARGC, wenclose_OPTIONAL_ARGC));
#endif
#if BIND_werase_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "werase", mrb_Curses_werase, MRB_ARGS_ARG(werase_REQUIRED_ARGC, werase_OPTIONAL_ARGC));
#endif
#if BIND_wgetch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wgetch", mrb_Curses_wgetch, MRB_ARGS_ARG(wgetch_REQUIRED_ARGC, wgetch_OPTIONAL_ARGC));
#endif
#if BIND_wgetnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wgetnstr", mrb_Curses_wgetnstr, MRB_ARGS_ARG(wgetnstr_REQUIRED_ARGC, wgetnstr_OPTIONAL_ARGC));
#endif
#if BIND_wgetstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wgetstr", mrb_Curses_wgetstr, MRB_ARGS_ARG(wgetstr_REQUIRED_ARGC, wgetstr_OPTIONAL_ARGC));
#endif
#if BIND_whline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "whline", mrb_Curses_whline, MRB_ARGS_ARG(whline_REQUIRED_ARGC, whline_OPTIONAL_ARGC));
#endif
#if BIND_winch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winch", mrb_Curses_winch, MRB_ARGS_ARG(winch_REQUIRED_ARGC, winch_OPTIONAL_ARGC));
#endif
#if BIND_winchnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winchnstr", mrb_Curses_winchnstr, MRB_ARGS_ARG(winchnstr_REQUIRED_ARGC, winchnstr_OPTIONAL_ARGC));
#endif
#if BIND_winchstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winchstr", mrb_Curses_winchstr, MRB_ARGS_ARG(winchstr_REQUIRED_ARGC, winchstr_OPTIONAL_ARGC));
#endif
#if BIND_winnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winnstr", mrb_Curses_winnstr, MRB_ARGS_ARG(winnstr_REQUIRED_ARGC, winnstr_OPTIONAL_ARGC));
#endif
#if BIND_winsch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winsch", mrb_Curses_winsch, MRB_ARGS_ARG(winsch_REQUIRED_ARGC, winsch_OPTIONAL_ARGC));
#endif
#if BIND_winsdelln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winsdelln", mrb_Curses_winsdelln, MRB_ARGS_ARG(winsdelln_REQUIRED_ARGC, winsdelln_OPTIONAL_ARGC));
#endif
#if BIND_winsertln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winsertln", mrb_Curses_winsertln, MRB_ARGS_ARG(winsertln_REQUIRED_ARGC, winsertln_OPTIONAL_ARGC));
#endif
#if BIND_winsnstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winsnstr", mrb_Curses_winsnstr, MRB_ARGS_ARG(winsnstr_REQUIRED_ARGC, winsnstr_OPTIONAL_ARGC));
#endif
#if BIND_winsrawch_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winsrawch", mrb_Curses_winsrawch, MRB_ARGS_ARG(winsrawch_REQUIRED_ARGC, winsrawch_OPTIONAL_ARGC));
#endif
#if BIND_winsstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winsstr", mrb_Curses_winsstr, MRB_ARGS_ARG(winsstr_REQUIRED_ARGC, winsstr_OPTIONAL_ARGC));
#endif
#if BIND_winstr_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "winstr", mrb_Curses_winstr, MRB_ARGS_ARG(winstr_REQUIRED_ARGC, winstr_OPTIONAL_ARGC));
#endif
#if BIND_wmouse_position_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wmouse_position", mrb_Curses_wmouse_position, MRB_ARGS_ARG(wmouse_position_REQUIRED_ARGC, wmouse_position_OPTIONAL_ARGC));
#endif
#if BIND_wmouse_trafo_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wmouse_trafo", mrb_Curses_wmouse_trafo, MRB_ARGS_ARG(wmouse_trafo_REQUIRED_ARGC, wmouse_trafo_OPTIONAL_ARGC));
#endif
#if BIND_wmove_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wmove", mrb_Curses_wmove, MRB_ARGS_ARG(wmove_REQUIRED_ARGC, wmove_OPTIONAL_ARGC));
#endif
#if BIND_wnoutrefresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wnoutrefresh", mrb_Curses_wnoutrefresh, MRB_ARGS_ARG(wnoutrefresh_REQUIRED_ARGC, wnoutrefresh_OPTIONAL_ARGC));
#endif
#if BIND_wordchar_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wordchar", mrb_Curses_wordchar, MRB_ARGS_ARG(wordchar_REQUIRED_ARGC, wordchar_OPTIONAL_ARGC));
#endif
#if BIND_wprintw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wprintw", mrb_Curses_wprintw, MRB_ARGS_ARG(wprintw_REQUIRED_ARGC, wprintw_OPTIONAL_ARGC));
#endif
#if BIND_wredrawln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wredrawln", mrb_Curses_wredrawln, MRB_ARGS_ARG(wredrawln_REQUIRED_ARGC, wredrawln_OPTIONAL_ARGC));
#endif
#if BIND_wrefresh_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wrefresh", mrb_Curses_wrefresh, MRB_ARGS_ARG(wrefresh_REQUIRED_ARGC, wrefresh_OPTIONAL_ARGC));
#endif
#if BIND_wresize_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wresize", mrb_Curses_wresize, MRB_ARGS_ARG(wresize_REQUIRED_ARGC, wresize_OPTIONAL_ARGC));
#endif
#if BIND_wscanw_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wscanw", mrb_Curses_wscanw, MRB_ARGS_ARG(wscanw_REQUIRED_ARGC, wscanw_OPTIONAL_ARGC));
#endif
#if BIND_wscrl_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wscrl", mrb_Curses_wscrl, MRB_ARGS_ARG(wscrl_REQUIRED_ARGC, wscrl_OPTIONAL_ARGC));
#endif
#if BIND_wsetscrreg_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wsetscrreg", mrb_Curses_wsetscrreg, MRB_ARGS_ARG(wsetscrreg_REQUIRED_ARGC, wsetscrreg_OPTIONAL_ARGC));
#endif
#if BIND_wstandend_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wstandend", mrb_Curses_wstandend, MRB_ARGS_ARG(wstandend_REQUIRED_ARGC, wstandend_OPTIONAL_ARGC));
#endif
#if BIND_wstandout_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wstandout", mrb_Curses_wstandout, MRB_ARGS_ARG(wstandout_REQUIRED_ARGC, wstandout_OPTIONAL_ARGC));
#endif
#if BIND_wsyncdown_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wsyncdown", mrb_Curses_wsyncdown, MRB_ARGS_ARG(wsyncdown_REQUIRED_ARGC, wsyncdown_OPTIONAL_ARGC));
#endif
#if BIND_wsyncup_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wsyncup", mrb_Curses_wsyncup, MRB_ARGS_ARG(wsyncup_REQUIRED_ARGC, wsyncup_OPTIONAL_ARGC));
#endif
#if BIND_wtimeout_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wtimeout", mrb_Curses_wtimeout, MRB_ARGS_ARG(wtimeout_REQUIRED_ARGC, wtimeout_OPTIONAL_ARGC));
#endif
#if BIND_wtouchln_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wtouchln", mrb_Curses_wtouchln, MRB_ARGS_ARG(wtouchln_REQUIRED_ARGC, wtouchln_OPTIONAL_ARGC));
#endif
#if BIND_wvline_FUNCTION
  mrb_define_class_method(mrb, Curses_module, "wvline", mrb_Curses_wvline, MRB_ARGS_ARG(wvline_REQUIRED_ARGC, wvline_OPTIONAL_ARGC));
#endif

}

void mrb_mruby_curses_gem_final(mrb_state* mrb){

}

#ifdef __cplusplus
}
#endif
