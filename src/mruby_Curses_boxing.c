/*
 * TODO: Update includes
 */
 #include "mruby_Curses.h"


#if BIND_MEVENT_TYPE
/*
 * Boxing implementation for MEVENT
 */

static void free_MEVENT(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type MEVENT_data_type = {
   "MEVENT", free_MEVENT
};

mrb_value
mruby_box_MEVENT(mrb_state* mrb, MEVENT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MEVENT_class(mrb), &MEVENT_data_type, box));
}

mrb_value
mruby_giftwrap_MEVENT(mrb_state* mrb, MEVENT *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MEVENT_class(mrb), &MEVENT_data_type, box));
}

void
mruby_set_MEVENT_data_ptr(mrb_value obj, MEVENT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &MEVENT_data_type);
}

void
mruby_gift_MEVENT_data_ptr(mrb_value obj, MEVENT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &MEVENT_data_type);
}

MEVENT *
mruby_unbox_MEVENT(mrb_value boxed) {
  return (MEVENT *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_MOUSESTATUS_TYPE
/*
 * Boxing implementation for MOUSE_STATUS
 */

static void free_MOUSE_STATUS(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type MOUSE_STATUS_data_type = {
   "MOUSE_STATUS", free_MOUSE_STATUS
};

mrb_value
mruby_box_MOUSE_STATUS(mrb_state* mrb, MOUSE_STATUS *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MOUSESTATUS_class(mrb), &MOUSE_STATUS_data_type, box));
}

mrb_value
mruby_giftwrap_MOUSE_STATUS(mrb_state* mrb, MOUSE_STATUS *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MOUSESTATUS_class(mrb), &MOUSE_STATUS_data_type, box));
}

void
mruby_set_MOUSE_STATUS_data_ptr(mrb_value obj, MOUSE_STATUS *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &MOUSE_STATUS_data_type);
}

void
mruby_gift_MOUSE_STATUS_data_ptr(mrb_value obj, MOUSE_STATUS *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &MOUSE_STATUS_data_type);
}

MOUSE_STATUS *
mruby_unbox_MOUSE_STATUS(mrb_value boxed) {
  return (MOUSE_STATUS *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_SCREEN_TYPE
/*
 * Boxing implementation for SCREEN
 */

static void free_SCREEN(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type SCREEN_data_type = {
   "SCREEN", free_SCREEN
};

mrb_value
mruby_box_SCREEN(mrb_state* mrb, SCREEN *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SCREEN_class(mrb), &SCREEN_data_type, box));
}

mrb_value
mruby_giftwrap_SCREEN(mrb_state* mrb, SCREEN *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SCREEN_class(mrb), &SCREEN_data_type, box));
}

void
mruby_set_SCREEN_data_ptr(mrb_value obj, SCREEN *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SCREEN_data_type);
}

void
mruby_gift_SCREEN_data_ptr(mrb_value obj, SCREEN *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &SCREEN_data_type);
}

SCREEN *
mruby_unbox_SCREEN(mrb_value boxed) {
  return (SCREEN *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_TERMINAL_TYPE
/*
 * Boxing implementation for TERMINAL
 */

static void free_TERMINAL(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type TERMINAL_data_type = {
   "TERMINAL", free_TERMINAL
};

mrb_value
mruby_box_TERMINAL(mrb_state* mrb, TERMINAL *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, TERMINAL_class(mrb), &TERMINAL_data_type, box));
}

mrb_value
mruby_giftwrap_TERMINAL(mrb_state* mrb, TERMINAL *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, TERMINAL_class(mrb), &TERMINAL_data_type, box));
}

void
mruby_set_TERMINAL_data_ptr(mrb_value obj, TERMINAL *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &TERMINAL_data_type);
}

void
mruby_gift_TERMINAL_data_ptr(mrb_value obj, TERMINAL *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &TERMINAL_data_type);
}

TERMINAL *
mruby_unbox_TERMINAL(mrb_value boxed) {
  return (TERMINAL *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Win_TYPE
/*
 * Boxing implementation for WINDOW
 */

static void free__win(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type _win_data_type = {
   "struct _win", free__win
};

mrb_value
mruby_box__win(mrb_state* mrb, WINDOW *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Win_class(mrb), &_win_data_type, box));
}

mrb_value
mruby_giftwrap__win(mrb_state* mrb, WINDOW *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Win_class(mrb), &_win_data_type, box));
}

void
mruby_set__win_data_ptr(mrb_value obj, WINDOW *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_win_data_type);
}

void
mruby_gift__win_data_ptr(mrb_value obj, WINDOW *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &_win_data_type);
}

WINDOW *
mruby_unbox__win(mrb_value boxed) {
  return (WINDOW *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Panel_TYPE
/*
 * Boxing implementation for struct panel
 */

static void free_panel(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type panel_data_type = {
   "struct panel", free_panel
};

mrb_value
mruby_box_panel(mrb_state* mrb, struct panel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Panel_class(mrb), &panel_data_type, box));
}

mrb_value
mruby_giftwrap_panel(mrb_state* mrb, struct panel *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Panel_class(mrb), &panel_data_type, box));
}

void
mruby_set_panel_data_ptr(mrb_value obj, struct panel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &panel_data_type);
}

void
mruby_gift_panel_data_ptr(mrb_value obj, struct panel *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &panel_data_type);
}

struct panel *
mruby_unbox_panel(mrb_value boxed) {
  return (struct panel *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Panelobs_TYPE
/*
 * Boxing implementation for struct panelobs
 */

static void free_panelobs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type panelobs_data_type = {
   "struct panelobs", free_panelobs
};

mrb_value
mruby_box_panelobs(mrb_state* mrb, struct panelobs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Panelobs_class(mrb), &panelobs_data_type, box));
}

mrb_value
mruby_giftwrap_panelobs(mrb_state* mrb, struct panelobs *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Panelobs_class(mrb), &panelobs_data_type, box));
}

void
mruby_set_panelobs_data_ptr(mrb_value obj, struct panelobs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &panelobs_data_type);
}

void
mruby_gift_panelobs_data_ptr(mrb_value obj, struct panelobs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &panelobs_data_type);
}

struct panelobs *
mruby_unbox_panelobs(mrb_value boxed) {
  return (struct panelobs *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
