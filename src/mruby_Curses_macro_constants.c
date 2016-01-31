#include "mruby_Curses.h"

void
mruby_Curses_define_macro_constants(mrb_state* mrb) {
#ifdef __PDCURSES__
  mrb_define_const(mrb, Curses_module(mrb), "__PDCURSES__", mrb_fixnum_value(__PDCURSES__));
#endif
#ifdef __PDCURSES_PANEL_H__
  mrb_define_const(mrb, Curses_module(mrb), "__PDCURSES_PANEL_H__", mrb_fixnum_value(__PDCURSES_PANEL_H__));
#endif
#ifdef __PDCURSES_TERM_H__
  mrb_define_const(mrb, Curses_module(mrb), "__PDCURSES_TERM_H__", mrb_fixnum_value(__PDCURSES_TERM_H__));
#endif
#ifdef A_ALTCHARSET
  mrb_define_const(mrb, Curses_module(mrb), "A_ALTCHARSET", mrb_fixnum_value(A_ALTCHARSET));
#endif
#ifdef A_ATTRIBUTES
  mrb_define_const(mrb, Curses_module(mrb), "A_ATTRIBUTES", mrb_fixnum_value(A_ATTRIBUTES));
#endif
#ifdef A_BLINK
  mrb_define_const(mrb, Curses_module(mrb), "A_BLINK", mrb_fixnum_value(A_BLINK));
#endif
#ifdef A_BOLD
  mrb_define_const(mrb, Curses_module(mrb), "A_BOLD", mrb_fixnum_value(A_BOLD));
#endif
#ifdef A_BUTTON_CHANGED
  /* A_BUTTON_CHANGED appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "A_BUTTON_CHANGED", mrb_float_value(mrb, A_BUTTON_CHANGED));
#endif
#ifdef A_CHARTEXT
  mrb_define_const(mrb, Curses_module(mrb), "A_CHARTEXT", mrb_fixnum_value(A_CHARTEXT));
#endif
#ifdef A_COLOR
  mrb_define_const(mrb, Curses_module(mrb), "A_COLOR", mrb_fixnum_value(A_COLOR));
#endif
#ifdef A_DIM
  mrb_define_const(mrb, Curses_module(mrb), "A_DIM", mrb_fixnum_value(A_DIM));
#endif
#ifdef A_INVIS
  mrb_define_const(mrb, Curses_module(mrb), "A_INVIS", mrb_fixnum_value(A_INVIS));
#endif
#ifdef A_ITALIC
  mrb_define_const(mrb, Curses_module(mrb), "A_ITALIC", mrb_fixnum_value(A_ITALIC));
#endif
#ifdef A_LEFTLINE
  mrb_define_const(mrb, Curses_module(mrb), "A_LEFTLINE", mrb_fixnum_value(A_LEFTLINE));
#endif
#ifdef A_NORMAL
  mrb_define_const(mrb, Curses_module(mrb), "A_NORMAL", mrb_fixnum_value(A_NORMAL));
#endif
#ifdef A_PROTECT
  mrb_define_const(mrb, Curses_module(mrb), "A_PROTECT", mrb_fixnum_value(A_PROTECT));
#endif
#ifdef A_REVERSE
  mrb_define_const(mrb, Curses_module(mrb), "A_REVERSE", mrb_fixnum_value(A_REVERSE));
#endif
#ifdef A_RIGHTLINE
  mrb_define_const(mrb, Curses_module(mrb), "A_RIGHTLINE", mrb_fixnum_value(A_RIGHTLINE));
#endif
#ifdef A_STANDOUT
  mrb_define_const(mrb, Curses_module(mrb), "A_STANDOUT", mrb_fixnum_value(A_STANDOUT));
#endif
#ifdef A_UNDERLINE
  mrb_define_const(mrb, Curses_module(mrb), "A_UNDERLINE", mrb_fixnum_value(A_UNDERLINE));
#endif
#ifdef ACS_BBSS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BBSS", mrb_fixnum_value(ACS_BBSS));
#endif
#ifdef ACS_BLOCK
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BLOCK", mrb_fixnum_value(ACS_BLOCK));
#endif
#ifdef ACS_BOARD
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BOARD", mrb_fixnum_value(ACS_BOARD));
#endif
#ifdef ACS_BSBS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BSBS", mrb_fixnum_value(ACS_BSBS));
#endif
#ifdef ACS_BSSB
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BSSB", mrb_fixnum_value(ACS_BSSB));
#endif
#ifdef ACS_BSSS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BSSS", mrb_fixnum_value(ACS_BSSS));
#endif
#ifdef ACS_BTEE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BTEE", mrb_fixnum_value(ACS_BTEE));
#endif
#ifdef ACS_BULLET
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BULLET", mrb_fixnum_value(ACS_BULLET));
#endif
#ifdef ACS_CKBOARD
  mrb_define_const(mrb, Curses_module(mrb), "ACS_CKBOARD", mrb_fixnum_value(ACS_CKBOARD));
#endif
#ifdef ACS_DARROW
  /* ACS_DARROW appears to be a floating point number */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_DARROW", mrb_float_value(mrb, ACS_DARROW));
#endif
#ifdef ACS_DEGREE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_DEGREE", mrb_fixnum_value(ACS_DEGREE));
#endif
#ifdef ACS_DIAMOND
  mrb_define_const(mrb, Curses_module(mrb), "ACS_DIAMOND", mrb_fixnum_value(ACS_DIAMOND));
#endif
#ifdef ACS_GEQUAL
  mrb_define_const(mrb, Curses_module(mrb), "ACS_GEQUAL", mrb_fixnum_value(ACS_GEQUAL));
#endif
#ifdef ACS_HLINE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_HLINE", mrb_fixnum_value(ACS_HLINE));
#endif
#ifdef ACS_LANTERN
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LANTERN", mrb_fixnum_value(ACS_LANTERN));
#endif
#ifdef ACS_LARROW
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LARROW", mrb_fixnum_value(ACS_LARROW));
#endif
#ifdef ACS_LEQUAL
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LEQUAL", mrb_fixnum_value(ACS_LEQUAL));
#endif
#ifdef ACS_LLCORNER
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LLCORNER", mrb_fixnum_value(ACS_LLCORNER));
#endif
#ifdef ACS_LRCORNER
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LRCORNER", mrb_fixnum_value(ACS_LRCORNER));
#endif
#ifdef ACS_LTEE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LTEE", mrb_fixnum_value(ACS_LTEE));
#endif
#ifdef ACS_NEQUAL
  mrb_define_const(mrb, Curses_module(mrb), "ACS_NEQUAL", mrb_fixnum_value(ACS_NEQUAL));
#endif
#ifdef ACS_PI
  mrb_define_const(mrb, Curses_module(mrb), "ACS_PI", mrb_fixnum_value(ACS_PI));
#endif
#ifdef ACS_PICK
  /* Ignoring function-like macro: ACS_PICK(w, n) */
#endif
#ifdef ACS_PLMINUS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_PLMINUS", mrb_fixnum_value(ACS_PLMINUS));
#endif
#ifdef ACS_PLUS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_PLUS", mrb_fixnum_value(ACS_PLUS));
#endif
#ifdef ACS_RARROW
  mrb_define_const(mrb, Curses_module(mrb), "ACS_RARROW", mrb_fixnum_value(ACS_RARROW));
#endif
#ifdef ACS_RTEE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_RTEE", mrb_fixnum_value(ACS_RTEE));
#endif
#ifdef ACS_S1
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S1", mrb_fixnum_value(ACS_S1));
#endif
#ifdef ACS_S3
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S3", mrb_fixnum_value(ACS_S3));
#endif
#ifdef ACS_S7
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S7", mrb_fixnum_value(ACS_S7));
#endif
#ifdef ACS_S9
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S9", mrb_fixnum_value(ACS_S9));
#endif
#ifdef ACS_SBBS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SBBS", mrb_fixnum_value(ACS_SBBS));
#endif
#ifdef ACS_SBSB
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SBSB", mrb_fixnum_value(ACS_SBSB));
#endif
#ifdef ACS_SBSS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SBSS", mrb_fixnum_value(ACS_SBSS));
#endif
#ifdef ACS_SSBB
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSBB", mrb_fixnum_value(ACS_SSBB));
#endif
#ifdef ACS_SSBS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSBS", mrb_fixnum_value(ACS_SSBS));
#endif
#ifdef ACS_SSSB
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSSB", mrb_fixnum_value(ACS_SSSB));
#endif
#ifdef ACS_SSSS
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSSS", mrb_fixnum_value(ACS_SSSS));
#endif
#ifdef ACS_STERLING
  mrb_define_const(mrb, Curses_module(mrb), "ACS_STERLING", mrb_fixnum_value(ACS_STERLING));
#endif
#ifdef ACS_TTEE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_TTEE", mrb_fixnum_value(ACS_TTEE));
#endif
#ifdef ACS_UARROW
  mrb_define_const(mrb, Curses_module(mrb), "ACS_UARROW", mrb_fixnum_value(ACS_UARROW));
#endif
#ifdef ACS_ULCORNER
  mrb_define_const(mrb, Curses_module(mrb), "ACS_ULCORNER", mrb_fixnum_value(ACS_ULCORNER));
#endif
#ifdef ACS_URCORNER
  mrb_define_const(mrb, Curses_module(mrb), "ACS_URCORNER", mrb_fixnum_value(ACS_URCORNER));
#endif
#ifdef ACS_VLINE
  mrb_define_const(mrb, Curses_module(mrb), "ACS_VLINE", mrb_fixnum_value(ACS_VLINE));
#endif
#ifdef ALL_MOUSE_EVENTS
  mrb_define_const(mrb, Curses_module(mrb), "ALL_MOUSE_EVENTS", mrb_fixnum_value(ALL_MOUSE_EVENTS));
#endif
#ifdef ALT_0
  mrb_define_const(mrb, Curses_module(mrb), "ALT_0", mrb_fixnum_value(ALT_0));
#endif
#ifdef ALT_1
  mrb_define_const(mrb, Curses_module(mrb), "ALT_1", mrb_fixnum_value(ALT_1));
#endif
#ifdef ALT_2
  mrb_define_const(mrb, Curses_module(mrb), "ALT_2", mrb_fixnum_value(ALT_2));
#endif
#ifdef ALT_3
  mrb_define_const(mrb, Curses_module(mrb), "ALT_3", mrb_fixnum_value(ALT_3));
#endif
#ifdef ALT_4
  mrb_define_const(mrb, Curses_module(mrb), "ALT_4", mrb_fixnum_value(ALT_4));
#endif
#ifdef ALT_5
  mrb_define_const(mrb, Curses_module(mrb), "ALT_5", mrb_fixnum_value(ALT_5));
#endif
#ifdef ALT_6
  mrb_define_const(mrb, Curses_module(mrb), "ALT_6", mrb_fixnum_value(ALT_6));
#endif
#ifdef ALT_7
  mrb_define_const(mrb, Curses_module(mrb), "ALT_7", mrb_fixnum_value(ALT_7));
#endif
#ifdef ALT_8
  mrb_define_const(mrb, Curses_module(mrb), "ALT_8", mrb_fixnum_value(ALT_8));
#endif
#ifdef ALT_9
  mrb_define_const(mrb, Curses_module(mrb), "ALT_9", mrb_fixnum_value(ALT_9));
#endif
#ifdef ALT_A
  mrb_define_const(mrb, Curses_module(mrb), "ALT_A", mrb_fixnum_value(ALT_A));
#endif
#ifdef ALT_B
  mrb_define_const(mrb, Curses_module(mrb), "ALT_B", mrb_fixnum_value(ALT_B));
#endif
#ifdef ALT_BKSP
  mrb_define_const(mrb, Curses_module(mrb), "ALT_BKSP", mrb_fixnum_value(ALT_BKSP));
#endif
#ifdef ALT_BQUOTE
  mrb_define_const(mrb, Curses_module(mrb), "ALT_BQUOTE", mrb_fixnum_value(ALT_BQUOTE));
#endif
#ifdef ALT_BSLASH
  mrb_define_const(mrb, Curses_module(mrb), "ALT_BSLASH", mrb_fixnum_value(ALT_BSLASH));
#endif
#ifdef ALT_C
  mrb_define_const(mrb, Curses_module(mrb), "ALT_C", mrb_fixnum_value(ALT_C));
#endif
#ifdef ALT_COMMA
  mrb_define_const(mrb, Curses_module(mrb), "ALT_COMMA", mrb_fixnum_value(ALT_COMMA));
#endif
#ifdef ALT_D
  mrb_define_const(mrb, Curses_module(mrb), "ALT_D", mrb_fixnum_value(ALT_D));
#endif
#ifdef ALT_DEL
  mrb_define_const(mrb, Curses_module(mrb), "ALT_DEL", mrb_fixnum_value(ALT_DEL));
#endif
#ifdef ALT_DOWN
  mrb_define_const(mrb, Curses_module(mrb), "ALT_DOWN", mrb_fixnum_value(ALT_DOWN));
#endif
#ifdef ALT_E
  mrb_define_const(mrb, Curses_module(mrb), "ALT_E", mrb_fixnum_value(ALT_E));
#endif
#ifdef ALT_END
  mrb_define_const(mrb, Curses_module(mrb), "ALT_END", mrb_fixnum_value(ALT_END));
#endif
#ifdef ALT_ENTER
  mrb_define_const(mrb, Curses_module(mrb), "ALT_ENTER", mrb_fixnum_value(ALT_ENTER));
#endif
#ifdef ALT_EQUAL
  mrb_define_const(mrb, Curses_module(mrb), "ALT_EQUAL", mrb_fixnum_value(ALT_EQUAL));
#endif
#ifdef ALT_ESC
  mrb_define_const(mrb, Curses_module(mrb), "ALT_ESC", mrb_fixnum_value(ALT_ESC));
#endif
#ifdef ALT_F
  mrb_define_const(mrb, Curses_module(mrb), "ALT_F", mrb_fixnum_value(ALT_F));
#endif
#ifdef ALT_FQUOTE
  mrb_define_const(mrb, Curses_module(mrb), "ALT_FQUOTE", mrb_fixnum_value(ALT_FQUOTE));
#endif
#ifdef ALT_FSLASH
  mrb_define_const(mrb, Curses_module(mrb), "ALT_FSLASH", mrb_fixnum_value(ALT_FSLASH));
#endif
#ifdef ALT_G
  mrb_define_const(mrb, Curses_module(mrb), "ALT_G", mrb_fixnum_value(ALT_G));
#endif
#ifdef ALT_H
  mrb_define_const(mrb, Curses_module(mrb), "ALT_H", mrb_fixnum_value(ALT_H));
#endif
#ifdef ALT_HOME
  mrb_define_const(mrb, Curses_module(mrb), "ALT_HOME", mrb_fixnum_value(ALT_HOME));
#endif
#ifdef ALT_I
  mrb_define_const(mrb, Curses_module(mrb), "ALT_I", mrb_fixnum_value(ALT_I));
#endif
#ifdef ALT_INS
  mrb_define_const(mrb, Curses_module(mrb), "ALT_INS", mrb_fixnum_value(ALT_INS));
#endif
#ifdef ALT_J
  mrb_define_const(mrb, Curses_module(mrb), "ALT_J", mrb_fixnum_value(ALT_J));
#endif
#ifdef ALT_K
  mrb_define_const(mrb, Curses_module(mrb), "ALT_K", mrb_fixnum_value(ALT_K));
#endif
#ifdef ALT_L
  mrb_define_const(mrb, Curses_module(mrb), "ALT_L", mrb_fixnum_value(ALT_L));
#endif
#ifdef ALT_LBRACKET
  mrb_define_const(mrb, Curses_module(mrb), "ALT_LBRACKET", mrb_fixnum_value(ALT_LBRACKET));
#endif
#ifdef ALT_LEFT
  mrb_define_const(mrb, Curses_module(mrb), "ALT_LEFT", mrb_fixnum_value(ALT_LEFT));
#endif
#ifdef ALT_M
  mrb_define_const(mrb, Curses_module(mrb), "ALT_M", mrb_fixnum_value(ALT_M));
#endif
#ifdef ALT_MINUS
  mrb_define_const(mrb, Curses_module(mrb), "ALT_MINUS", mrb_fixnum_value(ALT_MINUS));
#endif
#ifdef ALT_N
  mrb_define_const(mrb, Curses_module(mrb), "ALT_N", mrb_fixnum_value(ALT_N));
#endif
#ifdef ALT_O
  mrb_define_const(mrb, Curses_module(mrb), "ALT_O", mrb_fixnum_value(ALT_O));
#endif
#ifdef ALT_P
  mrb_define_const(mrb, Curses_module(mrb), "ALT_P", mrb_fixnum_value(ALT_P));
#endif
#ifdef ALT_PAD0
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD0", mrb_fixnum_value(ALT_PAD0));
#endif
#ifdef ALT_PAD1
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD1", mrb_fixnum_value(ALT_PAD1));
#endif
#ifdef ALT_PAD2
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD2", mrb_fixnum_value(ALT_PAD2));
#endif
#ifdef ALT_PAD3
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD3", mrb_fixnum_value(ALT_PAD3));
#endif
#ifdef ALT_PAD4
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD4", mrb_fixnum_value(ALT_PAD4));
#endif
#ifdef ALT_PAD5
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD5", mrb_fixnum_value(ALT_PAD5));
#endif
#ifdef ALT_PAD6
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD6", mrb_fixnum_value(ALT_PAD6));
#endif
#ifdef ALT_PAD7
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD7", mrb_fixnum_value(ALT_PAD7));
#endif
#ifdef ALT_PAD8
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD8", mrb_fixnum_value(ALT_PAD8));
#endif
#ifdef ALT_PAD9
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD9", mrb_fixnum_value(ALT_PAD9));
#endif
#ifdef ALT_PADENTER
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADENTER", mrb_fixnum_value(ALT_PADENTER));
#endif
#ifdef ALT_PADMINUS
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADMINUS", mrb_fixnum_value(ALT_PADMINUS));
#endif
#ifdef ALT_PADPLUS
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADPLUS", mrb_fixnum_value(ALT_PADPLUS));
#endif
#ifdef ALT_PADSLASH
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADSLASH", mrb_fixnum_value(ALT_PADSLASH));
#endif
#ifdef ALT_PADSTAR
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADSTAR", mrb_fixnum_value(ALT_PADSTAR));
#endif
#ifdef ALT_PADSTOP
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADSTOP", mrb_fixnum_value(ALT_PADSTOP));
#endif
#ifdef ALT_PGDN
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PGDN", mrb_fixnum_value(ALT_PGDN));
#endif
#ifdef ALT_PGUP
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PGUP", mrb_fixnum_value(ALT_PGUP));
#endif
#ifdef ALT_Q
  mrb_define_const(mrb, Curses_module(mrb), "ALT_Q", mrb_fixnum_value(ALT_Q));
#endif
#ifdef ALT_R
  mrb_define_const(mrb, Curses_module(mrb), "ALT_R", mrb_fixnum_value(ALT_R));
#endif
#ifdef ALT_RBRACKET
  mrb_define_const(mrb, Curses_module(mrb), "ALT_RBRACKET", mrb_fixnum_value(ALT_RBRACKET));
#endif
#ifdef ALT_RIGHT
  mrb_define_const(mrb, Curses_module(mrb), "ALT_RIGHT", mrb_fixnum_value(ALT_RIGHT));
#endif
#ifdef ALT_S
  mrb_define_const(mrb, Curses_module(mrb), "ALT_S", mrb_fixnum_value(ALT_S));
#endif
#ifdef ALT_SEMICOLON
  mrb_define_const(mrb, Curses_module(mrb), "ALT_SEMICOLON", mrb_fixnum_value(ALT_SEMICOLON));
#endif
#ifdef ALT_STOP
  mrb_define_const(mrb, Curses_module(mrb), "ALT_STOP", mrb_fixnum_value(ALT_STOP));
#endif
#ifdef ALT_T
  mrb_define_const(mrb, Curses_module(mrb), "ALT_T", mrb_fixnum_value(ALT_T));
#endif
#ifdef ALT_TAB
  mrb_define_const(mrb, Curses_module(mrb), "ALT_TAB", mrb_fixnum_value(ALT_TAB));
#endif
#ifdef ALT_U
  mrb_define_const(mrb, Curses_module(mrb), "ALT_U", mrb_fixnum_value(ALT_U));
#endif
#ifdef ALT_UP
  mrb_define_const(mrb, Curses_module(mrb), "ALT_UP", mrb_fixnum_value(ALT_UP));
#endif
#ifdef ALT_V
  mrb_define_const(mrb, Curses_module(mrb), "ALT_V", mrb_fixnum_value(ALT_V));
#endif
#ifdef ALT_W
  mrb_define_const(mrb, Curses_module(mrb), "ALT_W", mrb_fixnum_value(ALT_W));
#endif
#ifdef ALT_X
  mrb_define_const(mrb, Curses_module(mrb), "ALT_X", mrb_fixnum_value(ALT_X));
#endif
#ifdef ALT_Y
  mrb_define_const(mrb, Curses_module(mrb), "ALT_Y", mrb_fixnum_value(ALT_Y));
#endif
#ifdef ALT_Z
  mrb_define_const(mrb, Curses_module(mrb), "ALT_Z", mrb_fixnum_value(ALT_Z));
#endif
#ifdef ATR_MSK
  mrb_define_const(mrb, Curses_module(mrb), "ATR_MSK", mrb_fixnum_value(ATR_MSK));
#endif
#ifdef ATR_NRM
  mrb_define_const(mrb, Curses_module(mrb), "ATR_NRM", mrb_fixnum_value(ATR_NRM));
#endif
#ifdef BSDcurses
  mrb_define_const(mrb, Curses_module(mrb), "BSDcurses", mrb_fixnum_value(BSDcurses));
#endif
#ifdef BUTTON1_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_CLICKED", mrb_fixnum_value(BUTTON1_CLICKED));
#endif
#ifdef BUTTON1_DOUBLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON1_DOUBLE_CLICKED));
#endif
#ifdef BUTTON1_MOVED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_MOVED", mrb_fixnum_value(BUTTON1_MOVED));
#endif
#ifdef BUTTON1_PRESSED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_PRESSED", mrb_fixnum_value(BUTTON1_PRESSED));
#endif
#ifdef BUTTON1_RELEASED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_RELEASED", mrb_fixnum_value(BUTTON1_RELEASED));
#endif
#ifdef BUTTON1_TRIPLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON1_TRIPLE_CLICKED));
#endif
#ifdef BUTTON2_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_CLICKED", mrb_fixnum_value(BUTTON2_CLICKED));
#endif
#ifdef BUTTON2_DOUBLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON2_DOUBLE_CLICKED));
#endif
#ifdef BUTTON2_MOVED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_MOVED", mrb_fixnum_value(BUTTON2_MOVED));
#endif
#ifdef BUTTON2_PRESSED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_PRESSED", mrb_fixnum_value(BUTTON2_PRESSED));
#endif
#ifdef BUTTON2_RELEASED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_RELEASED", mrb_fixnum_value(BUTTON2_RELEASED));
#endif
#ifdef BUTTON2_TRIPLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON2_TRIPLE_CLICKED));
#endif
#ifdef BUTTON3_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_CLICKED", mrb_fixnum_value(BUTTON3_CLICKED));
#endif
#ifdef BUTTON3_DOUBLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON3_DOUBLE_CLICKED));
#endif
#ifdef BUTTON3_MOVED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_MOVED", mrb_fixnum_value(BUTTON3_MOVED));
#endif
#ifdef BUTTON3_PRESSED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_PRESSED", mrb_fixnum_value(BUTTON3_PRESSED));
#endif
#ifdef BUTTON3_RELEASED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_RELEASED", mrb_fixnum_value(BUTTON3_RELEASED));
#endif
#ifdef BUTTON3_TRIPLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON3_TRIPLE_CLICKED));
#endif
#ifdef BUTTON4_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_CLICKED", mrb_fixnum_value(BUTTON4_CLICKED));
#endif
#ifdef BUTTON4_DOUBLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON4_DOUBLE_CLICKED));
#endif
#ifdef BUTTON4_PRESSED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_PRESSED", mrb_fixnum_value(BUTTON4_PRESSED));
#endif
#ifdef BUTTON4_RELEASED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_RELEASED", mrb_fixnum_value(BUTTON4_RELEASED));
#endif
#ifdef BUTTON4_TRIPLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON4_TRIPLE_CLICKED));
#endif
#ifdef BUTTON5_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_CLICKED", mrb_fixnum_value(BUTTON5_CLICKED));
#endif
#ifdef BUTTON5_DOUBLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON5_DOUBLE_CLICKED));
#endif
#ifdef BUTTON5_PRESSED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_PRESSED", mrb_fixnum_value(BUTTON5_PRESSED));
#endif
#ifdef BUTTON5_RELEASED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_RELEASED", mrb_fixnum_value(BUTTON5_RELEASED));
#endif
#ifdef BUTTON5_TRIPLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON5_TRIPLE_CLICKED));
#endif
#ifdef BUTTON_ACTION_MASK
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_ACTION_MASK", mrb_fixnum_value(BUTTON_ACTION_MASK));
#endif
#ifdef BUTTON_ALT
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_ALT", mrb_fixnum_value(BUTTON_ALT));
#endif
#ifdef BUTTON_CHANGED
  /* Ignoring function-like macro: BUTTON_CHANGED(x) */
#endif
#ifdef BUTTON_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_CLICKED", mrb_fixnum_value(BUTTON_CLICKED));
#endif
#ifdef BUTTON_CONTROL
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_CONTROL", mrb_fixnum_value(BUTTON_CONTROL));
#endif
#ifdef BUTTON_DOUBLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON_DOUBLE_CLICKED));
#endif
#ifdef BUTTON_MODIFIER_ALT
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_ALT", mrb_fixnum_value(BUTTON_MODIFIER_ALT));
#endif
#ifdef BUTTON_MODIFIER_CONTROL
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_CONTROL", mrb_fixnum_value(BUTTON_MODIFIER_CONTROL));
#endif
#ifdef BUTTON_MODIFIER_MASK
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_MASK", mrb_fixnum_value(BUTTON_MODIFIER_MASK));
#endif
#ifdef BUTTON_MODIFIER_SHIFT
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_SHIFT", mrb_fixnum_value(BUTTON_MODIFIER_SHIFT));
#endif
#ifdef BUTTON_MOVED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MOVED", mrb_fixnum_value(BUTTON_MOVED));
#endif
#ifdef BUTTON_PRESSED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_PRESSED", mrb_fixnum_value(BUTTON_PRESSED));
#endif
#ifdef BUTTON_RELEASED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_RELEASED", mrb_fixnum_value(BUTTON_RELEASED));
#endif
#ifdef BUTTON_SHIFT
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_SHIFT", mrb_fixnum_value(BUTTON_SHIFT));
#endif
#ifdef BUTTON_STATUS
  /* Ignoring function-like macro: BUTTON_STATUS(x) */
#endif
#ifdef BUTTON_TRIPLE_CLICKED
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON_TRIPLE_CLICKED));
#endif
#ifdef CHR_MSK
  mrb_define_const(mrb, Curses_module(mrb), "CHR_MSK", mrb_fixnum_value(CHR_MSK));
#endif
#ifdef CHTYPE_LONG
  mrb_define_const(mrb, Curses_module(mrb), "CHTYPE_LONG", mrb_fixnum_value(CHTYPE_LONG));
#endif
#ifdef COLOR_BLACK
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_BLACK", mrb_fixnum_value(COLOR_BLACK));
#endif
#ifdef COLOR_BLUE
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_BLUE", mrb_fixnum_value(COLOR_BLUE));
#endif
#ifdef COLOR_CYAN
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_CYAN", mrb_fixnum_value(COLOR_CYAN));
#endif
#ifdef COLOR_GREEN
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_GREEN", mrb_fixnum_value(COLOR_GREEN));
#endif
#ifdef COLOR_MAGENTA
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_MAGENTA", mrb_fixnum_value(COLOR_MAGENTA));
#endif
#ifdef COLOR_PAIR
  /* Ignoring function-like macro: COLOR_PAIR(n) */
#endif
#ifdef COLOR_RED
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_RED", mrb_fixnum_value(COLOR_RED));
#endif
#ifdef COLOR_WHITE
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_WHITE", mrb_fixnum_value(COLOR_WHITE));
#endif
#ifdef COLOR_YELLOW
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_YELLOW", mrb_fixnum_value(COLOR_YELLOW));
#endif
#ifdef CTL_BKSP
  mrb_define_const(mrb, Curses_module(mrb), "CTL_BKSP", mrb_fixnum_value(CTL_BKSP));
#endif
#ifdef CTL_DEL
  mrb_define_const(mrb, Curses_module(mrb), "CTL_DEL", mrb_fixnum_value(CTL_DEL));
#endif
#ifdef CTL_DOWN
  mrb_define_const(mrb, Curses_module(mrb), "CTL_DOWN", mrb_fixnum_value(CTL_DOWN));
#endif
#ifdef CTL_END
  mrb_define_const(mrb, Curses_module(mrb), "CTL_END", mrb_fixnum_value(CTL_END));
#endif
#ifdef CTL_ENTER
  mrb_define_const(mrb, Curses_module(mrb), "CTL_ENTER", mrb_fixnum_value(CTL_ENTER));
#endif
#ifdef CTL_HOME
  mrb_define_const(mrb, Curses_module(mrb), "CTL_HOME", mrb_fixnum_value(CTL_HOME));
#endif
#ifdef CTL_INS
  mrb_define_const(mrb, Curses_module(mrb), "CTL_INS", mrb_fixnum_value(CTL_INS));
#endif
#ifdef CTL_LEFT
  mrb_define_const(mrb, Curses_module(mrb), "CTL_LEFT", mrb_fixnum_value(CTL_LEFT));
#endif
#ifdef CTL_PAD0
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD0", mrb_fixnum_value(CTL_PAD0));
#endif
#ifdef CTL_PAD1
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD1", mrb_fixnum_value(CTL_PAD1));
#endif
#ifdef CTL_PAD2
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD2", mrb_fixnum_value(CTL_PAD2));
#endif
#ifdef CTL_PAD3
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD3", mrb_fixnum_value(CTL_PAD3));
#endif
#ifdef CTL_PAD4
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD4", mrb_fixnum_value(CTL_PAD4));
#endif
#ifdef CTL_PAD5
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD5", mrb_fixnum_value(CTL_PAD5));
#endif
#ifdef CTL_PAD6
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD6", mrb_fixnum_value(CTL_PAD6));
#endif
#ifdef CTL_PAD7
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD7", mrb_fixnum_value(CTL_PAD7));
#endif
#ifdef CTL_PAD8
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD8", mrb_fixnum_value(CTL_PAD8));
#endif
#ifdef CTL_PAD9
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD9", mrb_fixnum_value(CTL_PAD9));
#endif
#ifdef CTL_PADCENTER
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADCENTER", mrb_fixnum_value(CTL_PADCENTER));
#endif
#ifdef CTL_PADENTER
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADENTER", mrb_fixnum_value(CTL_PADENTER));
#endif
#ifdef CTL_PADMINUS
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADMINUS", mrb_fixnum_value(CTL_PADMINUS));
#endif
#ifdef CTL_PADPLUS
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADPLUS", mrb_fixnum_value(CTL_PADPLUS));
#endif
#ifdef CTL_PADSLASH
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADSLASH", mrb_fixnum_value(CTL_PADSLASH));
#endif
#ifdef CTL_PADSTAR
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADSTAR", mrb_fixnum_value(CTL_PADSTAR));
#endif
#ifdef CTL_PADSTOP
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADSTOP", mrb_fixnum_value(CTL_PADSTOP));
#endif
#ifdef CTL_PGDN
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PGDN", mrb_fixnum_value(CTL_PGDN));
#endif
#ifdef CTL_PGUP
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PGUP", mrb_fixnum_value(CTL_PGUP));
#endif
#ifdef CTL_RIGHT
  mrb_define_const(mrb, Curses_module(mrb), "CTL_RIGHT", mrb_fixnum_value(CTL_RIGHT));
#endif
#ifdef CTL_TAB
  mrb_define_const(mrb, Curses_module(mrb), "CTL_TAB", mrb_fixnum_value(CTL_TAB));
#endif
#ifdef CTL_UP
  mrb_define_const(mrb, Curses_module(mrb), "CTL_UP", mrb_fixnum_value(CTL_UP));
#endif
#ifdef ERR
  mrb_define_const(mrb, Curses_module(mrb), "ERR", mrb_fixnum_value(ERR));
#endif
#ifdef FALSE
  mrb_define_const(mrb, Curses_module(mrb), "FALSE", mrb_fixnum_value(FALSE));
#endif
#ifdef getbegyx
  /* Ignoring function-like macro: getbegyx(w, y, x) */
#endif
#ifdef getch
  /* Ignoring function-like macro: getch() */
#endif
#ifdef getmaxyx
  /* Ignoring function-like macro: getmaxyx(w, y, x) */
#endif
#ifdef getparyx
  /* Ignoring function-like macro: getparyx(w, y, x) */
#endif
#ifdef getsyx
  /* Ignoring function-like macro: getsyx(y, x) */
#endif
#ifdef getyx
  /* Ignoring function-like macro: getyx(w, y, x) */
#endif
#ifdef KEY_A1
  mrb_define_const(mrb, Curses_module(mrb), "KEY_A1", mrb_fixnum_value(KEY_A1));
#endif
#ifdef KEY_A2
  mrb_define_const(mrb, Curses_module(mrb), "KEY_A2", mrb_fixnum_value(KEY_A2));
#endif
#ifdef KEY_A3
  mrb_define_const(mrb, Curses_module(mrb), "KEY_A3", mrb_fixnum_value(KEY_A3));
#endif
#ifdef KEY_ABORT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ABORT", mrb_fixnum_value(KEY_ABORT));
#endif
#ifdef KEY_ALT_L
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ALT_L", mrb_fixnum_value(KEY_ALT_L));
#endif
#ifdef KEY_ALT_R
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ALT_R", mrb_fixnum_value(KEY_ALT_R));
#endif
#ifdef KEY_B1
  mrb_define_const(mrb, Curses_module(mrb), "KEY_B1", mrb_fixnum_value(KEY_B1));
#endif
#ifdef KEY_B2
  mrb_define_const(mrb, Curses_module(mrb), "KEY_B2", mrb_fixnum_value(KEY_B2));
#endif
#ifdef KEY_B3
  mrb_define_const(mrb, Curses_module(mrb), "KEY_B3", mrb_fixnum_value(KEY_B3));
#endif
#ifdef KEY_BACKSPACE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BACKSPACE", mrb_fixnum_value(KEY_BACKSPACE));
#endif
#ifdef KEY_BEG
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BEG", mrb_fixnum_value(KEY_BEG));
#endif
#ifdef KEY_BREAK
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BREAK", mrb_fixnum_value(KEY_BREAK));
#endif
#ifdef KEY_BTAB
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BTAB", mrb_fixnum_value(KEY_BTAB));
#endif
#ifdef KEY_C1
  mrb_define_const(mrb, Curses_module(mrb), "KEY_C1", mrb_fixnum_value(KEY_C1));
#endif
#ifdef KEY_C2
  mrb_define_const(mrb, Curses_module(mrb), "KEY_C2", mrb_fixnum_value(KEY_C2));
#endif
#ifdef KEY_C3
  mrb_define_const(mrb, Curses_module(mrb), "KEY_C3", mrb_fixnum_value(KEY_C3));
#endif
#ifdef KEY_CANCEL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CANCEL", mrb_fixnum_value(KEY_CANCEL));
#endif
#ifdef KEY_CATAB
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CATAB", mrb_fixnum_value(KEY_CATAB));
#endif
#ifdef KEY_CLEAR
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CLEAR", mrb_fixnum_value(KEY_CLEAR));
#endif
#ifdef KEY_CLOSE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CLOSE", mrb_fixnum_value(KEY_CLOSE));
#endif
#ifdef KEY_CODE_YES
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CODE_YES", mrb_fixnum_value(KEY_CODE_YES));
#endif
#ifdef KEY_COMMAND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_COMMAND", mrb_fixnum_value(KEY_COMMAND));
#endif
#ifdef KEY_CONTROL_L
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CONTROL_L", mrb_fixnum_value(KEY_CONTROL_L));
#endif
#ifdef KEY_CONTROL_R
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CONTROL_R", mrb_fixnum_value(KEY_CONTROL_R));
#endif
#ifdef KEY_COPY
  mrb_define_const(mrb, Curses_module(mrb), "KEY_COPY", mrb_fixnum_value(KEY_COPY));
#endif
#ifdef KEY_CREATE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CREATE", mrb_fixnum_value(KEY_CREATE));
#endif
#ifdef KEY_CTAB
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CTAB", mrb_fixnum_value(KEY_CTAB));
#endif
#ifdef KEY_DC
  mrb_define_const(mrb, Curses_module(mrb), "KEY_DC", mrb_fixnum_value(KEY_DC));
#endif
#ifdef KEY_DL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_DL", mrb_fixnum_value(KEY_DL));
#endif
#ifdef KEY_DOWN
  mrb_define_const(mrb, Curses_module(mrb), "KEY_DOWN", mrb_fixnum_value(KEY_DOWN));
#endif
#ifdef KEY_EIC
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EIC", mrb_fixnum_value(KEY_EIC));
#endif
#ifdef KEY_END
  mrb_define_const(mrb, Curses_module(mrb), "KEY_END", mrb_fixnum_value(KEY_END));
#endif
#ifdef KEY_ENTER
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ENTER", mrb_fixnum_value(KEY_ENTER));
#endif
#ifdef KEY_EOL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EOL", mrb_fixnum_value(KEY_EOL));
#endif
#ifdef KEY_EOS
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EOS", mrb_fixnum_value(KEY_EOS));
#endif
#ifdef KEY_EXIT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EXIT", mrb_fixnum_value(KEY_EXIT));
#endif
#ifdef KEY_F
  /* Ignoring function-like macro: KEY_F(n) */
#endif
#ifdef KEY_F0
  mrb_define_const(mrb, Curses_module(mrb), "KEY_F0", mrb_fixnum_value(KEY_F0));
#endif
#ifdef KEY_FIND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_FIND", mrb_fixnum_value(KEY_FIND));
#endif
#ifdef KEY_HELP
  mrb_define_const(mrb, Curses_module(mrb), "KEY_HELP", mrb_fixnum_value(KEY_HELP));
#endif
#ifdef KEY_HOME
  mrb_define_const(mrb, Curses_module(mrb), "KEY_HOME", mrb_fixnum_value(KEY_HOME));
#endif
#ifdef KEY_IC
  mrb_define_const(mrb, Curses_module(mrb), "KEY_IC", mrb_fixnum_value(KEY_IC));
#endif
#ifdef KEY_IL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_IL", mrb_fixnum_value(KEY_IL));
#endif
#ifdef KEY_LEFT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_LEFT", mrb_fixnum_value(KEY_LEFT));
#endif
#ifdef KEY_LHELP
  mrb_define_const(mrb, Curses_module(mrb), "KEY_LHELP", mrb_fixnum_value(KEY_LHELP));
#endif
#ifdef KEY_LL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_LL", mrb_fixnum_value(KEY_LL));
#endif
#ifdef KEY_MARK
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MARK", mrb_fixnum_value(KEY_MARK));
#endif
#ifdef KEY_MAX
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MAX", mrb_fixnum_value(KEY_MAX));
#endif
#ifdef KEY_MESSAGE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MESSAGE", mrb_fixnum_value(KEY_MESSAGE));
#endif
#ifdef KEY_MIN
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MIN", mrb_fixnum_value(KEY_MIN));
#endif
#ifdef KEY_MOUSE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MOUSE", mrb_fixnum_value(KEY_MOUSE));
#endif
#ifdef KEY_MOVE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MOVE", mrb_fixnum_value(KEY_MOVE));
#endif
#ifdef KEY_NEXT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_NEXT", mrb_fixnum_value(KEY_NEXT));
#endif
#ifdef KEY_NPAGE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_NPAGE", mrb_fixnum_value(KEY_NPAGE));
#endif
#ifdef KEY_OPEN
  mrb_define_const(mrb, Curses_module(mrb), "KEY_OPEN", mrb_fixnum_value(KEY_OPEN));
#endif
#ifdef KEY_OPTIONS
  mrb_define_const(mrb, Curses_module(mrb), "KEY_OPTIONS", mrb_fixnum_value(KEY_OPTIONS));
#endif
#ifdef KEY_PPAGE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_PPAGE", mrb_fixnum_value(KEY_PPAGE));
#endif
#ifdef KEY_PREVIOUS
  mrb_define_const(mrb, Curses_module(mrb), "KEY_PREVIOUS", mrb_fixnum_value(KEY_PREVIOUS));
#endif
#ifdef KEY_PRINT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_PRINT", mrb_fixnum_value(KEY_PRINT));
#endif
#ifdef KEY_REDO
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REDO", mrb_fixnum_value(KEY_REDO));
#endif
#ifdef KEY_REFERENCE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REFERENCE", mrb_fixnum_value(KEY_REFERENCE));
#endif
#ifdef KEY_REFRESH
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REFRESH", mrb_fixnum_value(KEY_REFRESH));
#endif
#ifdef KEY_REPLACE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REPLACE", mrb_fixnum_value(KEY_REPLACE));
#endif
#ifdef KEY_RESET
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESET", mrb_fixnum_value(KEY_RESET));
#endif
#ifdef KEY_RESIZE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESIZE", mrb_fixnum_value(KEY_RESIZE));
#endif
#ifdef KEY_RESTART
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESTART", mrb_fixnum_value(KEY_RESTART));
#endif
#ifdef KEY_RESUME
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESUME", mrb_fixnum_value(KEY_RESUME));
#endif
#ifdef KEY_RIGHT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RIGHT", mrb_fixnum_value(KEY_RIGHT));
#endif
#ifdef KEY_SAVE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SAVE", mrb_fixnum_value(KEY_SAVE));
#endif
#ifdef KEY_SBEG
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SBEG", mrb_fixnum_value(KEY_SBEG));
#endif
#ifdef KEY_SCANCEL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCANCEL", mrb_fixnum_value(KEY_SCANCEL));
#endif
#ifdef KEY_SCOMMAND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCOMMAND", mrb_fixnum_value(KEY_SCOMMAND));
#endif
#ifdef KEY_SCOPY
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCOPY", mrb_fixnum_value(KEY_SCOPY));
#endif
#ifdef KEY_SCREATE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCREATE", mrb_fixnum_value(KEY_SCREATE));
#endif
#ifdef KEY_SDC
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SDC", mrb_fixnum_value(KEY_SDC));
#endif
#ifdef KEY_SDL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SDL", mrb_fixnum_value(KEY_SDL));
#endif
#ifdef KEY_SDOWN
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SDOWN", mrb_fixnum_value(KEY_SDOWN));
#endif
#ifdef KEY_SELECT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SELECT", mrb_fixnum_value(KEY_SELECT));
#endif
#ifdef KEY_SEND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SEND", mrb_fixnum_value(KEY_SEND));
#endif
#ifdef KEY_SEOL
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SEOL", mrb_fixnum_value(KEY_SEOL));
#endif
#ifdef KEY_SEXIT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SEXIT", mrb_fixnum_value(KEY_SEXIT));
#endif
#ifdef KEY_SF
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SF", mrb_fixnum_value(KEY_SF));
#endif
#ifdef KEY_SFIND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SFIND", mrb_fixnum_value(KEY_SFIND));
#endif
#ifdef KEY_SHELP
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHELP", mrb_fixnum_value(KEY_SHELP));
#endif
#ifdef KEY_SHIFT_L
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHIFT_L", mrb_fixnum_value(KEY_SHIFT_L));
#endif
#ifdef KEY_SHIFT_R
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHIFT_R", mrb_fixnum_value(KEY_SHIFT_R));
#endif
#ifdef KEY_SHOME
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHOME", mrb_fixnum_value(KEY_SHOME));
#endif
#ifdef KEY_SIC
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SIC", mrb_fixnum_value(KEY_SIC));
#endif
#ifdef KEY_SLEFT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SLEFT", mrb_fixnum_value(KEY_SLEFT));
#endif
#ifdef KEY_SMESSAGE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SMESSAGE", mrb_fixnum_value(KEY_SMESSAGE));
#endif
#ifdef KEY_SMOVE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SMOVE", mrb_fixnum_value(KEY_SMOVE));
#endif
#ifdef KEY_SNEXT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SNEXT", mrb_fixnum_value(KEY_SNEXT));
#endif
#ifdef KEY_SOPTIONS
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SOPTIONS", mrb_fixnum_value(KEY_SOPTIONS));
#endif
#ifdef KEY_SPREVIOUS
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SPREVIOUS", mrb_fixnum_value(KEY_SPREVIOUS));
#endif
#ifdef KEY_SPRINT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SPRINT", mrb_fixnum_value(KEY_SPRINT));
#endif
#ifdef KEY_SR
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SR", mrb_fixnum_value(KEY_SR));
#endif
#ifdef KEY_SREDO
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SREDO", mrb_fixnum_value(KEY_SREDO));
#endif
#ifdef KEY_SREPLACE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SREPLACE", mrb_fixnum_value(KEY_SREPLACE));
#endif
#ifdef KEY_SRESET
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SRESET", mrb_fixnum_value(KEY_SRESET));
#endif
#ifdef KEY_SRIGHT
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SRIGHT", mrb_fixnum_value(KEY_SRIGHT));
#endif
#ifdef KEY_SRSUME
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SRSUME", mrb_fixnum_value(KEY_SRSUME));
#endif
#ifdef KEY_SSAVE
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SSAVE", mrb_fixnum_value(KEY_SSAVE));
#endif
#ifdef KEY_SSUSPEND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SSUSPEND", mrb_fixnum_value(KEY_SSUSPEND));
#endif
#ifdef KEY_STAB
  mrb_define_const(mrb, Curses_module(mrb), "KEY_STAB", mrb_fixnum_value(KEY_STAB));
#endif
#ifdef KEY_SUNDO
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SUNDO", mrb_fixnum_value(KEY_SUNDO));
#endif
#ifdef KEY_SUP
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SUP", mrb_fixnum_value(KEY_SUP));
#endif
#ifdef KEY_SUSPEND
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SUSPEND", mrb_fixnum_value(KEY_SUSPEND));
#endif
#ifdef KEY_UNDO
  mrb_define_const(mrb, Curses_module(mrb), "KEY_UNDO", mrb_fixnum_value(KEY_UNDO));
#endif
#ifdef KEY_UP
  mrb_define_const(mrb, Curses_module(mrb), "KEY_UP", mrb_fixnum_value(KEY_UP));
#endif
#ifdef MOUSE_MOVED
  /* MOUSE_MOVED appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "MOUSE_MOVED", mrb_float_value(mrb, MOUSE_MOVED));
#endif
#ifdef MOUSE_POS_REPORT
  /* MOUSE_POS_REPORT appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "MOUSE_POS_REPORT", mrb_float_value(mrb, MOUSE_POS_REPORT));
#endif
#ifdef MOUSE_WHEEL_DOWN
  /* MOUSE_WHEEL_DOWN appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "MOUSE_WHEEL_DOWN", mrb_float_value(mrb, MOUSE_WHEEL_DOWN));
#endif
#ifdef MOUSE_WHEEL_SCROLL
  mrb_define_const(mrb, Curses_module(mrb), "MOUSE_WHEEL_SCROLL", mrb_fixnum_value(MOUSE_WHEEL_SCROLL));
#endif
#ifdef MOUSE_WHEEL_UP
  /* MOUSE_WHEEL_UP appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "MOUSE_WHEEL_UP", mrb_float_value(mrb, MOUSE_WHEEL_UP));
#endif
#ifdef MOUSE_X_POS
  /* MOUSE_X_POS appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "MOUSE_X_POS", mrb_float_value(mrb, MOUSE_X_POS));
#endif
#ifdef MOUSE_Y_POS
  /* MOUSE_Y_POS appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "MOUSE_Y_POS", mrb_float_value(mrb, MOUSE_Y_POS));
#endif
#ifdef NULL
  // mrb_define_const(mrb, Curses_module(mrb), "NULL", mrb_fixnum_value(NULL));
#endif
#ifdef OK
  mrb_define_const(mrb, Curses_module(mrb), "OK", mrb_fixnum_value(OK));
#endif
#ifdef PAD0
  mrb_define_const(mrb, Curses_module(mrb), "PAD0", mrb_fixnum_value(PAD0));
#endif
#ifdef PADENTER
  mrb_define_const(mrb, Curses_module(mrb), "PADENTER", mrb_fixnum_value(PADENTER));
#endif
#ifdef PADMINUS
  mrb_define_const(mrb, Curses_module(mrb), "PADMINUS", mrb_fixnum_value(PADMINUS));
#endif
#ifdef PADPLUS
  mrb_define_const(mrb, Curses_module(mrb), "PADPLUS", mrb_fixnum_value(PADPLUS));
#endif
#ifdef PADSLASH
  mrb_define_const(mrb, Curses_module(mrb), "PADSLASH", mrb_fixnum_value(PADSLASH));
#endif
#ifdef PADSTAR
  mrb_define_const(mrb, Curses_module(mrb), "PADSTAR", mrb_fixnum_value(PADSTAR));
#endif
#ifdef PADSTOP
  mrb_define_const(mrb, Curses_module(mrb), "PADSTOP", mrb_fixnum_value(PADSTOP));
#endif
#ifdef PAIR_NUMBER
  /* Ignoring function-like macro: PAIR_NUMBER(n) */
#endif
#ifdef PDC_ATTR_SHIFT
  mrb_define_const(mrb, Curses_module(mrb), "PDC_ATTR_SHIFT", mrb_fixnum_value(PDC_ATTR_SHIFT));
#endif
#ifdef PDC_BUILD
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUILD", mrb_fixnum_value(PDC_BUILD));
#endif
#ifdef PDC_BUTTON_ALT
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUTTON_ALT", mrb_fixnum_value(PDC_BUTTON_ALT));
#endif
#ifdef PDC_BUTTON_CONTROL
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUTTON_CONTROL", mrb_fixnum_value(PDC_BUTTON_CONTROL));
#endif
#ifdef PDC_BUTTON_SHIFT
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUTTON_SHIFT", mrb_fixnum_value(PDC_BUTTON_SHIFT));
#endif
#ifdef PDC_CLIP_ACCESS_ERROR
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_ACCESS_ERROR", mrb_fixnum_value(PDC_CLIP_ACCESS_ERROR));
#endif
#ifdef PDC_CLIP_EMPTY
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_EMPTY", mrb_fixnum_value(PDC_CLIP_EMPTY));
#endif
#ifdef PDC_CLIP_MEMORY_ERROR
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_MEMORY_ERROR", mrb_fixnum_value(PDC_CLIP_MEMORY_ERROR));
#endif
#ifdef PDC_CLIP_SUCCESS
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_SUCCESS", mrb_fixnum_value(PDC_CLIP_SUCCESS));
#endif
#ifdef PDC_COLOR_SHIFT
  mrb_define_const(mrb, Curses_module(mrb), "PDC_COLOR_SHIFT", mrb_fixnum_value(PDC_COLOR_SHIFT));
#endif
#ifdef PDC_KEY_MODIFIER_ALT
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_ALT", mrb_fixnum_value(PDC_KEY_MODIFIER_ALT));
#endif
#ifdef PDC_KEY_MODIFIER_CONTROL
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_CONTROL", mrb_fixnum_value(PDC_KEY_MODIFIER_CONTROL));
#endif
#ifdef PDC_KEY_MODIFIER_NUMLOCK
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_NUMLOCK", mrb_fixnum_value(PDC_KEY_MODIFIER_NUMLOCK));
#endif
#ifdef PDC_KEY_MODIFIER_SHIFT
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_SHIFT", mrb_fixnum_value(PDC_KEY_MODIFIER_SHIFT));
#endif
#ifdef PDC_MOUSE_MOVED
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_MOVED", mrb_fixnum_value(PDC_MOUSE_MOVED));
#endif
#ifdef PDC_MOUSE_POSITION
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_POSITION", mrb_fixnum_value(PDC_MOUSE_POSITION));
#endif
#ifdef PDC_MOUSE_WHEEL_DOWN
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_WHEEL_DOWN", mrb_fixnum_value(PDC_MOUSE_WHEEL_DOWN));
#endif
#ifdef PDC_MOUSE_WHEEL_UP
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_WHEEL_UP", mrb_fixnum_value(PDC_MOUSE_WHEEL_UP));
#endif
#ifdef PDCEX
  // mrb_define_const(mrb, Curses_module(mrb), "PDCEX", mrb_fixnum_value(PDCEX));
#endif
#ifdef PDCURSES
  mrb_define_const(mrb, Curses_module(mrb), "PDCURSES", mrb_fixnum_value(PDCURSES));
#endif
#ifdef REPORT_MOUSE_POSITION
  mrb_define_const(mrb, Curses_module(mrb), "REPORT_MOUSE_POSITION", mrb_fixnum_value(REPORT_MOUSE_POSITION));
#endif
#ifdef SHF_DC
  mrb_define_const(mrb, Curses_module(mrb), "SHF_DC", mrb_fixnum_value(SHF_DC));
#endif
#ifdef SHF_DOWN
  mrb_define_const(mrb, Curses_module(mrb), "SHF_DOWN", mrb_fixnum_value(SHF_DOWN));
#endif
#ifdef SHF_IC
  mrb_define_const(mrb, Curses_module(mrb), "SHF_IC", mrb_fixnum_value(SHF_IC));
#endif
#ifdef SHF_PADENTER
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADENTER", mrb_fixnum_value(SHF_PADENTER));
#endif
#ifdef SHF_PADMINUS
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADMINUS", mrb_fixnum_value(SHF_PADMINUS));
#endif
#ifdef SHF_PADPLUS
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADPLUS", mrb_fixnum_value(SHF_PADPLUS));
#endif
#ifdef SHF_PADSLASH
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADSLASH", mrb_fixnum_value(SHF_PADSLASH));
#endif
#ifdef SHF_PADSTAR
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADSTAR", mrb_fixnum_value(SHF_PADSTAR));
#endif
#ifdef SHF_UP
  mrb_define_const(mrb, Curses_module(mrb), "SHF_UP", mrb_fixnum_value(SHF_UP));
#endif
#ifdef SYSVcurses
  mrb_define_const(mrb, Curses_module(mrb), "SYSVcurses", mrb_fixnum_value(SYSVcurses));
#endif
#ifdef TRUE
  mrb_define_const(mrb, Curses_module(mrb), "TRUE", mrb_fixnum_value(TRUE));
#endif
#ifdef ungetch
  /* Ignoring function-like macro: ungetch(ch) */
#endif
#ifdef WA_ALTCHARSET
  mrb_define_const(mrb, Curses_module(mrb), "WA_ALTCHARSET", mrb_fixnum_value(WA_ALTCHARSET));
#endif
#ifdef WA_BLINK
  mrb_define_const(mrb, Curses_module(mrb), "WA_BLINK", mrb_fixnum_value(WA_BLINK));
#endif
#ifdef WA_BOLD
  mrb_define_const(mrb, Curses_module(mrb), "WA_BOLD", mrb_fixnum_value(WA_BOLD));
#endif
#ifdef WA_DIM
  mrb_define_const(mrb, Curses_module(mrb), "WA_DIM", mrb_fixnum_value(WA_DIM));
#endif
#ifdef WA_HORIZONTAL
  mrb_define_const(mrb, Curses_module(mrb), "WA_HORIZONTAL", mrb_fixnum_value(WA_HORIZONTAL));
#endif
#ifdef WA_INVIS
  mrb_define_const(mrb, Curses_module(mrb), "WA_INVIS", mrb_fixnum_value(WA_INVIS));
#endif
#ifdef WA_LEFT
  mrb_define_const(mrb, Curses_module(mrb), "WA_LEFT", mrb_fixnum_value(WA_LEFT));
#endif
#ifdef WA_LOW
  mrb_define_const(mrb, Curses_module(mrb), "WA_LOW", mrb_fixnum_value(WA_LOW));
#endif
#ifdef WA_PROTECT
  mrb_define_const(mrb, Curses_module(mrb), "WA_PROTECT", mrb_fixnum_value(WA_PROTECT));
#endif
#ifdef WA_REVERSE
  mrb_define_const(mrb, Curses_module(mrb), "WA_REVERSE", mrb_fixnum_value(WA_REVERSE));
#endif
#ifdef WA_RIGHT
  mrb_define_const(mrb, Curses_module(mrb), "WA_RIGHT", mrb_fixnum_value(WA_RIGHT));
#endif
#ifdef WA_STANDOUT
  mrb_define_const(mrb, Curses_module(mrb), "WA_STANDOUT", mrb_fixnum_value(WA_STANDOUT));
#endif
#ifdef WA_TOP
  mrb_define_const(mrb, Curses_module(mrb), "WA_TOP", mrb_fixnum_value(WA_TOP));
#endif
#ifdef WA_UNDERLINE
  mrb_define_const(mrb, Curses_module(mrb), "WA_UNDERLINE", mrb_fixnum_value(WA_UNDERLINE));
#endif
#ifdef WA_VERTICAL
  mrb_define_const(mrb, Curses_module(mrb), "WA_VERTICAL", mrb_fixnum_value(WA_VERTICAL));
#endif
#ifdef WHEEL_SCROLLED
  mrb_define_const(mrb, Curses_module(mrb), "WHEEL_SCROLLED", mrb_fixnum_value(WHEEL_SCROLLED));
#endif
#ifdef XOPEN
  mrb_define_const(mrb, Curses_module(mrb), "XOPEN", mrb_fixnum_value(XOPEN));
#endif
}
