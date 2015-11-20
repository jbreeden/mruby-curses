#include "mruby_Curses.h"

void
mruby_Curses_define_macro_constants(mrb_state* mrb) {
  /* WARNING
   * Code generator does it's best to determine the type of the macro
   * expansions, but mistakes will be made (as macros are just text,
   * and may contain other macros). So, you'll need to verify the
   * conversions used here are of the correct type.
   */

#ifdef __PDCURSES__
  /* __PDCURSES__ assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "__PDCURSES__", mrb_fixnum_value(__PDCURSES__));
#endif
#ifdef __PDCURSES_PANEL_H__
  /* __PDCURSES_PANEL_H__ assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "__PDCURSES_PANEL_H__", mrb_fixnum_value(__PDCURSES_PANEL_H__));
#endif
#ifdef __PDCURSES_TERM_H__
  /* __PDCURSES_TERM_H__ assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "__PDCURSES_TERM_H__", mrb_fixnum_value(__PDCURSES_TERM_H__));
#endif
#ifdef A_ALTCHARSET
  /* A_ALTCHARSET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_ALTCHARSET", mrb_fixnum_value(A_ALTCHARSET));
#endif
#ifdef A_ATTRIBUTES
  /* A_ATTRIBUTES assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_ATTRIBUTES", mrb_fixnum_value(A_ATTRIBUTES));
#endif
#ifdef A_BLINK
  /* A_BLINK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_BLINK", mrb_fixnum_value(A_BLINK));
#endif
#ifdef A_BOLD
  /* A_BOLD assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_BOLD", mrb_fixnum_value(A_BOLD));
#endif
#ifdef A_BUTTON_CHANGED
  /* A_BUTTON_CHANGED appears to be a floating point number */
  // mrb_define_const(mrb, Curses_module(mrb), "A_BUTTON_CHANGED", mrb_float_value(mrb, A_BUTTON_CHANGED));
#endif
#ifdef A_CHARTEXT
  /* A_CHARTEXT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_CHARTEXT", mrb_fixnum_value(A_CHARTEXT));
#endif
#ifdef A_COLOR
  /* A_COLOR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_COLOR", mrb_fixnum_value(A_COLOR));
#endif
#ifdef A_DIM
  /* A_DIM assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_DIM", mrb_fixnum_value(A_DIM));
#endif
#ifdef A_INVIS
  /* A_INVIS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_INVIS", mrb_fixnum_value(A_INVIS));
#endif
#ifdef A_ITALIC
  /* A_ITALIC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_ITALIC", mrb_fixnum_value(A_ITALIC));
#endif
#ifdef A_LEFTLINE
  /* A_LEFTLINE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_LEFTLINE", mrb_fixnum_value(A_LEFTLINE));
#endif
#ifdef A_NORMAL
  /* A_NORMAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_NORMAL", mrb_fixnum_value(A_NORMAL));
#endif
#ifdef A_PROTECT
  /* A_PROTECT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_PROTECT", mrb_fixnum_value(A_PROTECT));
#endif
#ifdef A_REVERSE
  /* A_REVERSE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_REVERSE", mrb_fixnum_value(A_REVERSE));
#endif
#ifdef A_RIGHTLINE
  /* A_RIGHTLINE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_RIGHTLINE", mrb_fixnum_value(A_RIGHTLINE));
#endif
#ifdef A_STANDOUT
  /* A_STANDOUT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_STANDOUT", mrb_fixnum_value(A_STANDOUT));
#endif
#ifdef A_UNDERLINE
  /* A_UNDERLINE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "A_UNDERLINE", mrb_fixnum_value(A_UNDERLINE));
#endif
#ifdef ACS_BBSS
  /* ACS_BBSS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BBSS", mrb_fixnum_value(ACS_BBSS));
#endif
#ifdef ACS_BLOCK
  /* ACS_BLOCK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BLOCK", mrb_fixnum_value(ACS_BLOCK));
#endif
#ifdef ACS_BOARD
  /* ACS_BOARD assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BOARD", mrb_fixnum_value(ACS_BOARD));
#endif
#ifdef ACS_BSBS
  /* ACS_BSBS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BSBS", mrb_fixnum_value(ACS_BSBS));
#endif
#ifdef ACS_BSSB
  /* ACS_BSSB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BSSB", mrb_fixnum_value(ACS_BSSB));
#endif
#ifdef ACS_BSSS
  /* ACS_BSSS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BSSS", mrb_fixnum_value(ACS_BSSS));
#endif
#ifdef ACS_BTEE
  /* ACS_BTEE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BTEE", mrb_fixnum_value(ACS_BTEE));
#endif
#ifdef ACS_BULLET
  /* ACS_BULLET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_BULLET", mrb_fixnum_value(ACS_BULLET));
#endif
#ifdef ACS_CKBOARD
  /* ACS_CKBOARD assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_CKBOARD", mrb_fixnum_value(ACS_CKBOARD));
#endif
#ifdef ACS_DARROW
  /* ACS_DARROW appears to be a floating point number */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_DARROW", mrb_float_value(mrb, ACS_DARROW));
#endif
#ifdef ACS_DEGREE
  /* ACS_DEGREE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_DEGREE", mrb_fixnum_value(ACS_DEGREE));
#endif
#ifdef ACS_DIAMOND
  /* ACS_DIAMOND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_DIAMOND", mrb_fixnum_value(ACS_DIAMOND));
#endif
#ifdef ACS_GEQUAL
  /* ACS_GEQUAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_GEQUAL", mrb_fixnum_value(ACS_GEQUAL));
#endif
#ifdef ACS_HLINE
  /* ACS_HLINE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_HLINE", mrb_fixnum_value(ACS_HLINE));
#endif
#ifdef ACS_LANTERN
  /* ACS_LANTERN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LANTERN", mrb_fixnum_value(ACS_LANTERN));
#endif
#ifdef ACS_LARROW
  /* ACS_LARROW assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LARROW", mrb_fixnum_value(ACS_LARROW));
#endif
#ifdef ACS_LEQUAL
  /* ACS_LEQUAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LEQUAL", mrb_fixnum_value(ACS_LEQUAL));
#endif
#ifdef ACS_LLCORNER
  /* ACS_LLCORNER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LLCORNER", mrb_fixnum_value(ACS_LLCORNER));
#endif
#ifdef ACS_LRCORNER
  /* ACS_LRCORNER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LRCORNER", mrb_fixnum_value(ACS_LRCORNER));
#endif
#ifdef ACS_LTEE
  /* ACS_LTEE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_LTEE", mrb_fixnum_value(ACS_LTEE));
#endif
#ifdef ACS_NEQUAL
  /* ACS_NEQUAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_NEQUAL", mrb_fixnum_value(ACS_NEQUAL));
#endif
#ifdef ACS_PI
  /* ACS_PI assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_PI", mrb_fixnum_value(ACS_PI));
#endif
#ifdef ACS_PICK
  /* Ignoring function-like macro: ACS_PICK(w, n) */
#endif
#ifdef ACS_PLMINUS
  /* ACS_PLMINUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_PLMINUS", mrb_fixnum_value(ACS_PLMINUS));
#endif
#ifdef ACS_PLUS
  /* ACS_PLUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_PLUS", mrb_fixnum_value(ACS_PLUS));
#endif
#ifdef ACS_RARROW
  /* ACS_RARROW assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_RARROW", mrb_fixnum_value(ACS_RARROW));
#endif
#ifdef ACS_RTEE
  /* ACS_RTEE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_RTEE", mrb_fixnum_value(ACS_RTEE));
#endif
#ifdef ACS_S1
  /* ACS_S1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S1", mrb_fixnum_value(ACS_S1));
#endif
#ifdef ACS_S3
  /* ACS_S3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S3", mrb_fixnum_value(ACS_S3));
#endif
#ifdef ACS_S7
  /* ACS_S7 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S7", mrb_fixnum_value(ACS_S7));
#endif
#ifdef ACS_S9
  /* ACS_S9 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_S9", mrb_fixnum_value(ACS_S9));
#endif
#ifdef ACS_SBBS
  /* ACS_SBBS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SBBS", mrb_fixnum_value(ACS_SBBS));
#endif
#ifdef ACS_SBSB
  /* ACS_SBSB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SBSB", mrb_fixnum_value(ACS_SBSB));
#endif
#ifdef ACS_SBSS
  /* ACS_SBSS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SBSS", mrb_fixnum_value(ACS_SBSS));
#endif
#ifdef ACS_SSBB
  /* ACS_SSBB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSBB", mrb_fixnum_value(ACS_SSBB));
#endif
#ifdef ACS_SSBS
  /* ACS_SSBS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSBS", mrb_fixnum_value(ACS_SSBS));
#endif
#ifdef ACS_SSSB
  /* ACS_SSSB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSSB", mrb_fixnum_value(ACS_SSSB));
#endif
#ifdef ACS_SSSS
  /* ACS_SSSS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_SSSS", mrb_fixnum_value(ACS_SSSS));
#endif
#ifdef ACS_STERLING
  /* ACS_STERLING assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_STERLING", mrb_fixnum_value(ACS_STERLING));
#endif
#ifdef ACS_TTEE
  /* ACS_TTEE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_TTEE", mrb_fixnum_value(ACS_TTEE));
#endif
#ifdef ACS_UARROW
  /* ACS_UARROW assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_UARROW", mrb_fixnum_value(ACS_UARROW));
#endif
#ifdef ACS_ULCORNER
  /* ACS_ULCORNER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_ULCORNER", mrb_fixnum_value(ACS_ULCORNER));
#endif
#ifdef ACS_URCORNER
  /* ACS_URCORNER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_URCORNER", mrb_fixnum_value(ACS_URCORNER));
#endif
#ifdef ACS_VLINE
  /* ACS_VLINE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ACS_VLINE", mrb_fixnum_value(ACS_VLINE));
#endif
#ifdef ALL_MOUSE_EVENTS
  /* ALL_MOUSE_EVENTS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALL_MOUSE_EVENTS", mrb_fixnum_value(ALL_MOUSE_EVENTS));
#endif
#ifdef ALT_0
  /* ALT_0 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_0", mrb_fixnum_value(ALT_0));
#endif
#ifdef ALT_1
  /* ALT_1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_1", mrb_fixnum_value(ALT_1));
#endif
#ifdef ALT_2
  /* ALT_2 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_2", mrb_fixnum_value(ALT_2));
#endif
#ifdef ALT_3
  /* ALT_3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_3", mrb_fixnum_value(ALT_3));
#endif
#ifdef ALT_4
  /* ALT_4 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_4", mrb_fixnum_value(ALT_4));
#endif
#ifdef ALT_5
  /* ALT_5 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_5", mrb_fixnum_value(ALT_5));
#endif
#ifdef ALT_6
  /* ALT_6 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_6", mrb_fixnum_value(ALT_6));
#endif
#ifdef ALT_7
  /* ALT_7 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_7", mrb_fixnum_value(ALT_7));
#endif
#ifdef ALT_8
  /* ALT_8 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_8", mrb_fixnum_value(ALT_8));
#endif
#ifdef ALT_9
  /* ALT_9 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_9", mrb_fixnum_value(ALT_9));
#endif
#ifdef ALT_A
  /* ALT_A assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_A", mrb_fixnum_value(ALT_A));
#endif
#ifdef ALT_B
  /* ALT_B assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_B", mrb_fixnum_value(ALT_B));
#endif
#ifdef ALT_BKSP
  /* ALT_BKSP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_BKSP", mrb_fixnum_value(ALT_BKSP));
#endif
#ifdef ALT_BQUOTE
  /* ALT_BQUOTE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_BQUOTE", mrb_fixnum_value(ALT_BQUOTE));
#endif
#ifdef ALT_BSLASH
  /* ALT_BSLASH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_BSLASH", mrb_fixnum_value(ALT_BSLASH));
#endif
#ifdef ALT_C
  /* ALT_C assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_C", mrb_fixnum_value(ALT_C));
#endif
#ifdef ALT_COMMA
  /* ALT_COMMA assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_COMMA", mrb_fixnum_value(ALT_COMMA));
#endif
#ifdef ALT_D
  /* ALT_D assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_D", mrb_fixnum_value(ALT_D));
#endif
#ifdef ALT_DEL
  /* ALT_DEL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_DEL", mrb_fixnum_value(ALT_DEL));
#endif
#ifdef ALT_DOWN
  /* ALT_DOWN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_DOWN", mrb_fixnum_value(ALT_DOWN));
#endif
#ifdef ALT_E
  /* ALT_E assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_E", mrb_fixnum_value(ALT_E));
#endif
#ifdef ALT_END
  /* ALT_END assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_END", mrb_fixnum_value(ALT_END));
#endif
#ifdef ALT_ENTER
  /* ALT_ENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_ENTER", mrb_fixnum_value(ALT_ENTER));
#endif
#ifdef ALT_EQUAL
  /* ALT_EQUAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_EQUAL", mrb_fixnum_value(ALT_EQUAL));
#endif
#ifdef ALT_ESC
  /* ALT_ESC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_ESC", mrb_fixnum_value(ALT_ESC));
#endif
#ifdef ALT_F
  /* ALT_F assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_F", mrb_fixnum_value(ALT_F));
#endif
#ifdef ALT_FQUOTE
  /* ALT_FQUOTE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_FQUOTE", mrb_fixnum_value(ALT_FQUOTE));
#endif
#ifdef ALT_FSLASH
  /* ALT_FSLASH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_FSLASH", mrb_fixnum_value(ALT_FSLASH));
#endif
#ifdef ALT_G
  /* ALT_G assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_G", mrb_fixnum_value(ALT_G));
#endif
#ifdef ALT_H
  /* ALT_H assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_H", mrb_fixnum_value(ALT_H));
#endif
#ifdef ALT_HOME
  /* ALT_HOME assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_HOME", mrb_fixnum_value(ALT_HOME));
#endif
#ifdef ALT_I
  /* ALT_I assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_I", mrb_fixnum_value(ALT_I));
#endif
#ifdef ALT_INS
  /* ALT_INS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_INS", mrb_fixnum_value(ALT_INS));
#endif
#ifdef ALT_J
  /* ALT_J assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_J", mrb_fixnum_value(ALT_J));
#endif
#ifdef ALT_K
  /* ALT_K assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_K", mrb_fixnum_value(ALT_K));
#endif
#ifdef ALT_L
  /* ALT_L assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_L", mrb_fixnum_value(ALT_L));
#endif
#ifdef ALT_LBRACKET
  /* ALT_LBRACKET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_LBRACKET", mrb_fixnum_value(ALT_LBRACKET));
#endif
#ifdef ALT_LEFT
  /* ALT_LEFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_LEFT", mrb_fixnum_value(ALT_LEFT));
#endif
#ifdef ALT_M
  /* ALT_M assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_M", mrb_fixnum_value(ALT_M));
#endif
#ifdef ALT_MINUS
  /* ALT_MINUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_MINUS", mrb_fixnum_value(ALT_MINUS));
#endif
#ifdef ALT_N
  /* ALT_N assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_N", mrb_fixnum_value(ALT_N));
#endif
#ifdef ALT_O
  /* ALT_O assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_O", mrb_fixnum_value(ALT_O));
#endif
#ifdef ALT_P
  /* ALT_P assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_P", mrb_fixnum_value(ALT_P));
#endif
#ifdef ALT_PAD0
  /* ALT_PAD0 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD0", mrb_fixnum_value(ALT_PAD0));
#endif
#ifdef ALT_PAD1
  /* ALT_PAD1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD1", mrb_fixnum_value(ALT_PAD1));
#endif
#ifdef ALT_PAD2
  /* ALT_PAD2 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD2", mrb_fixnum_value(ALT_PAD2));
#endif
#ifdef ALT_PAD3
  /* ALT_PAD3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD3", mrb_fixnum_value(ALT_PAD3));
#endif
#ifdef ALT_PAD4
  /* ALT_PAD4 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD4", mrb_fixnum_value(ALT_PAD4));
#endif
#ifdef ALT_PAD5
  /* ALT_PAD5 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD5", mrb_fixnum_value(ALT_PAD5));
#endif
#ifdef ALT_PAD6
  /* ALT_PAD6 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD6", mrb_fixnum_value(ALT_PAD6));
#endif
#ifdef ALT_PAD7
  /* ALT_PAD7 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD7", mrb_fixnum_value(ALT_PAD7));
#endif
#ifdef ALT_PAD8
  /* ALT_PAD8 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD8", mrb_fixnum_value(ALT_PAD8));
#endif
#ifdef ALT_PAD9
  /* ALT_PAD9 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PAD9", mrb_fixnum_value(ALT_PAD9));
#endif
#ifdef ALT_PADENTER
  /* ALT_PADENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADENTER", mrb_fixnum_value(ALT_PADENTER));
#endif
#ifdef ALT_PADMINUS
  /* ALT_PADMINUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADMINUS", mrb_fixnum_value(ALT_PADMINUS));
#endif
#ifdef ALT_PADPLUS
  /* ALT_PADPLUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADPLUS", mrb_fixnum_value(ALT_PADPLUS));
#endif
#ifdef ALT_PADSLASH
  /* ALT_PADSLASH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADSLASH", mrb_fixnum_value(ALT_PADSLASH));
#endif
#ifdef ALT_PADSTAR
  /* ALT_PADSTAR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADSTAR", mrb_fixnum_value(ALT_PADSTAR));
#endif
#ifdef ALT_PADSTOP
  /* ALT_PADSTOP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PADSTOP", mrb_fixnum_value(ALT_PADSTOP));
#endif
#ifdef ALT_PGDN
  /* ALT_PGDN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PGDN", mrb_fixnum_value(ALT_PGDN));
#endif
#ifdef ALT_PGUP
  /* ALT_PGUP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_PGUP", mrb_fixnum_value(ALT_PGUP));
#endif
#ifdef ALT_Q
  /* ALT_Q assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_Q", mrb_fixnum_value(ALT_Q));
#endif
#ifdef ALT_R
  /* ALT_R assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_R", mrb_fixnum_value(ALT_R));
#endif
#ifdef ALT_RBRACKET
  /* ALT_RBRACKET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_RBRACKET", mrb_fixnum_value(ALT_RBRACKET));
#endif
#ifdef ALT_RIGHT
  /* ALT_RIGHT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_RIGHT", mrb_fixnum_value(ALT_RIGHT));
#endif
#ifdef ALT_S
  /* ALT_S assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_S", mrb_fixnum_value(ALT_S));
#endif
#ifdef ALT_SEMICOLON
  /* ALT_SEMICOLON assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_SEMICOLON", mrb_fixnum_value(ALT_SEMICOLON));
#endif
#ifdef ALT_STOP
  /* ALT_STOP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_STOP", mrb_fixnum_value(ALT_STOP));
#endif
#ifdef ALT_T
  /* ALT_T assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_T", mrb_fixnum_value(ALT_T));
#endif
#ifdef ALT_TAB
  /* ALT_TAB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_TAB", mrb_fixnum_value(ALT_TAB));
#endif
#ifdef ALT_U
  /* ALT_U assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_U", mrb_fixnum_value(ALT_U));
#endif
#ifdef ALT_UP
  /* ALT_UP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_UP", mrb_fixnum_value(ALT_UP));
#endif
#ifdef ALT_V
  /* ALT_V assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_V", mrb_fixnum_value(ALT_V));
#endif
#ifdef ALT_W
  /* ALT_W assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_W", mrb_fixnum_value(ALT_W));
#endif
#ifdef ALT_X
  /* ALT_X assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_X", mrb_fixnum_value(ALT_X));
#endif
#ifdef ALT_Y
  /* ALT_Y assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_Y", mrb_fixnum_value(ALT_Y));
#endif
#ifdef ALT_Z
  /* ALT_Z assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ALT_Z", mrb_fixnum_value(ALT_Z));
#endif
#ifdef ATR_MSK
  /* ATR_MSK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ATR_MSK", mrb_fixnum_value(ATR_MSK));
#endif
#ifdef ATR_NRM
  /* ATR_NRM assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ATR_NRM", mrb_fixnum_value(ATR_NRM));
#endif
#ifdef BSDcurses
  /* BSDcurses assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BSDcurses", mrb_fixnum_value(BSDcurses));
#endif
#ifdef BUTTON1_CLICKED
  /* BUTTON1_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_CLICKED", mrb_fixnum_value(BUTTON1_CLICKED));
#endif
#ifdef BUTTON1_DOUBLE_CLICKED
  /* BUTTON1_DOUBLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON1_DOUBLE_CLICKED));
#endif
#ifdef BUTTON1_MOVED
  /* BUTTON1_MOVED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_MOVED", mrb_fixnum_value(BUTTON1_MOVED));
#endif
#ifdef BUTTON1_PRESSED
  /* BUTTON1_PRESSED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_PRESSED", mrb_fixnum_value(BUTTON1_PRESSED));
#endif
#ifdef BUTTON1_RELEASED
  /* BUTTON1_RELEASED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_RELEASED", mrb_fixnum_value(BUTTON1_RELEASED));
#endif
#ifdef BUTTON1_TRIPLE_CLICKED
  /* BUTTON1_TRIPLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON1_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON1_TRIPLE_CLICKED));
#endif
#ifdef BUTTON2_CLICKED
  /* BUTTON2_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_CLICKED", mrb_fixnum_value(BUTTON2_CLICKED));
#endif
#ifdef BUTTON2_DOUBLE_CLICKED
  /* BUTTON2_DOUBLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON2_DOUBLE_CLICKED));
#endif
#ifdef BUTTON2_MOVED
  /* BUTTON2_MOVED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_MOVED", mrb_fixnum_value(BUTTON2_MOVED));
#endif
#ifdef BUTTON2_PRESSED
  /* BUTTON2_PRESSED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_PRESSED", mrb_fixnum_value(BUTTON2_PRESSED));
#endif
#ifdef BUTTON2_RELEASED
  /* BUTTON2_RELEASED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_RELEASED", mrb_fixnum_value(BUTTON2_RELEASED));
#endif
#ifdef BUTTON2_TRIPLE_CLICKED
  /* BUTTON2_TRIPLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON2_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON2_TRIPLE_CLICKED));
#endif
#ifdef BUTTON3_CLICKED
  /* BUTTON3_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_CLICKED", mrb_fixnum_value(BUTTON3_CLICKED));
#endif
#ifdef BUTTON3_DOUBLE_CLICKED
  /* BUTTON3_DOUBLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON3_DOUBLE_CLICKED));
#endif
#ifdef BUTTON3_MOVED
  /* BUTTON3_MOVED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_MOVED", mrb_fixnum_value(BUTTON3_MOVED));
#endif
#ifdef BUTTON3_PRESSED
  /* BUTTON3_PRESSED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_PRESSED", mrb_fixnum_value(BUTTON3_PRESSED));
#endif
#ifdef BUTTON3_RELEASED
  /* BUTTON3_RELEASED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_RELEASED", mrb_fixnum_value(BUTTON3_RELEASED));
#endif
#ifdef BUTTON3_TRIPLE_CLICKED
  /* BUTTON3_TRIPLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON3_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON3_TRIPLE_CLICKED));
#endif
#ifdef BUTTON4_CLICKED
  /* BUTTON4_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_CLICKED", mrb_fixnum_value(BUTTON4_CLICKED));
#endif
#ifdef BUTTON4_DOUBLE_CLICKED
  /* BUTTON4_DOUBLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON4_DOUBLE_CLICKED));
#endif
#ifdef BUTTON4_PRESSED
  /* BUTTON4_PRESSED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_PRESSED", mrb_fixnum_value(BUTTON4_PRESSED));
#endif
#ifdef BUTTON4_RELEASED
  /* BUTTON4_RELEASED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_RELEASED", mrb_fixnum_value(BUTTON4_RELEASED));
#endif
#ifdef BUTTON4_TRIPLE_CLICKED
  /* BUTTON4_TRIPLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON4_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON4_TRIPLE_CLICKED));
#endif
#ifdef BUTTON5_CLICKED
  /* BUTTON5_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_CLICKED", mrb_fixnum_value(BUTTON5_CLICKED));
#endif
#ifdef BUTTON5_DOUBLE_CLICKED
  /* BUTTON5_DOUBLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON5_DOUBLE_CLICKED));
#endif
#ifdef BUTTON5_PRESSED
  /* BUTTON5_PRESSED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_PRESSED", mrb_fixnum_value(BUTTON5_PRESSED));
#endif
#ifdef BUTTON5_RELEASED
  /* BUTTON5_RELEASED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_RELEASED", mrb_fixnum_value(BUTTON5_RELEASED));
#endif
#ifdef BUTTON5_TRIPLE_CLICKED
  /* BUTTON5_TRIPLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON5_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON5_TRIPLE_CLICKED));
#endif
#ifdef BUTTON_ACTION_MASK
  /* BUTTON_ACTION_MASK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_ACTION_MASK", mrb_fixnum_value(BUTTON_ACTION_MASK));
#endif
#ifdef BUTTON_ALT
  /* BUTTON_ALT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_ALT", mrb_fixnum_value(BUTTON_ALT));
#endif
#ifdef BUTTON_CHANGED
  /* Ignoring function-like macro: BUTTON_CHANGED(x) */
#endif
#ifdef BUTTON_CLICKED
  /* BUTTON_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_CLICKED", mrb_fixnum_value(BUTTON_CLICKED));
#endif
#ifdef BUTTON_CONTROL
  /* BUTTON_CONTROL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_CONTROL", mrb_fixnum_value(BUTTON_CONTROL));
#endif
#ifdef BUTTON_DOUBLE_CLICKED
  /* BUTTON_DOUBLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_DOUBLE_CLICKED", mrb_fixnum_value(BUTTON_DOUBLE_CLICKED));
#endif
#ifdef BUTTON_MODIFIER_ALT
  /* BUTTON_MODIFIER_ALT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_ALT", mrb_fixnum_value(BUTTON_MODIFIER_ALT));
#endif
#ifdef BUTTON_MODIFIER_CONTROL
  /* BUTTON_MODIFIER_CONTROL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_CONTROL", mrb_fixnum_value(BUTTON_MODIFIER_CONTROL));
#endif
#ifdef BUTTON_MODIFIER_MASK
  /* BUTTON_MODIFIER_MASK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_MASK", mrb_fixnum_value(BUTTON_MODIFIER_MASK));
#endif
#ifdef BUTTON_MODIFIER_SHIFT
  /* BUTTON_MODIFIER_SHIFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MODIFIER_SHIFT", mrb_fixnum_value(BUTTON_MODIFIER_SHIFT));
#endif
#ifdef BUTTON_MOVED
  /* BUTTON_MOVED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_MOVED", mrb_fixnum_value(BUTTON_MOVED));
#endif
#ifdef BUTTON_PRESSED
  /* BUTTON_PRESSED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_PRESSED", mrb_fixnum_value(BUTTON_PRESSED));
#endif
#ifdef BUTTON_RELEASED
  /* BUTTON_RELEASED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_RELEASED", mrb_fixnum_value(BUTTON_RELEASED));
#endif
#ifdef BUTTON_SHIFT
  /* BUTTON_SHIFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_SHIFT", mrb_fixnum_value(BUTTON_SHIFT));
#endif
#ifdef BUTTON_STATUS
  /* Ignoring function-like macro: BUTTON_STATUS(x) */
#endif
#ifdef BUTTON_TRIPLE_CLICKED
  /* BUTTON_TRIPLE_CLICKED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "BUTTON_TRIPLE_CLICKED", mrb_fixnum_value(BUTTON_TRIPLE_CLICKED));
#endif
#ifdef CHR_MSK
  /* CHR_MSK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CHR_MSK", mrb_fixnum_value(CHR_MSK));
#endif
#ifdef CHTYPE_LONG
  /* CHTYPE_LONG assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CHTYPE_LONG", mrb_fixnum_value(CHTYPE_LONG));
#endif
#ifdef COLOR_BLACK
  /* COLOR_BLACK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_BLACK", mrb_fixnum_value(COLOR_BLACK));
#endif
#ifdef COLOR_BLUE
  /* COLOR_BLUE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_BLUE", mrb_fixnum_value(COLOR_BLUE));
#endif
#ifdef COLOR_CYAN
  /* COLOR_CYAN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_CYAN", mrb_fixnum_value(COLOR_CYAN));
#endif
#ifdef COLOR_GREEN
  /* COLOR_GREEN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_GREEN", mrb_fixnum_value(COLOR_GREEN));
#endif
#ifdef COLOR_MAGENTA
  /* COLOR_MAGENTA assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_MAGENTA", mrb_fixnum_value(COLOR_MAGENTA));
#endif
#ifdef COLOR_PAIR
  /* Ignoring function-like macro: COLOR_PAIR(n) */
#endif
#ifdef COLOR_RED
  /* COLOR_RED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_RED", mrb_fixnum_value(COLOR_RED));
#endif
#ifdef COLOR_WHITE
  /* COLOR_WHITE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_WHITE", mrb_fixnum_value(COLOR_WHITE));
#endif
#ifdef COLOR_YELLOW
  /* COLOR_YELLOW assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "COLOR_YELLOW", mrb_fixnum_value(COLOR_YELLOW));
#endif
#ifdef CTL_BKSP
  /* CTL_BKSP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_BKSP", mrb_fixnum_value(CTL_BKSP));
#endif
#ifdef CTL_DEL
  /* CTL_DEL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_DEL", mrb_fixnum_value(CTL_DEL));
#endif
#ifdef CTL_DOWN
  /* CTL_DOWN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_DOWN", mrb_fixnum_value(CTL_DOWN));
#endif
#ifdef CTL_END
  /* CTL_END assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_END", mrb_fixnum_value(CTL_END));
#endif
#ifdef CTL_ENTER
  /* CTL_ENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_ENTER", mrb_fixnum_value(CTL_ENTER));
#endif
#ifdef CTL_HOME
  /* CTL_HOME assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_HOME", mrb_fixnum_value(CTL_HOME));
#endif
#ifdef CTL_INS
  /* CTL_INS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_INS", mrb_fixnum_value(CTL_INS));
#endif
#ifdef CTL_LEFT
  /* CTL_LEFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_LEFT", mrb_fixnum_value(CTL_LEFT));
#endif
#ifdef CTL_PAD0
  /* CTL_PAD0 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD0", mrb_fixnum_value(CTL_PAD0));
#endif
#ifdef CTL_PAD1
  /* CTL_PAD1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD1", mrb_fixnum_value(CTL_PAD1));
#endif
#ifdef CTL_PAD2
  /* CTL_PAD2 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD2", mrb_fixnum_value(CTL_PAD2));
#endif
#ifdef CTL_PAD3
  /* CTL_PAD3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD3", mrb_fixnum_value(CTL_PAD3));
#endif
#ifdef CTL_PAD4
  /* CTL_PAD4 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD4", mrb_fixnum_value(CTL_PAD4));
#endif
#ifdef CTL_PAD5
  /* CTL_PAD5 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD5", mrb_fixnum_value(CTL_PAD5));
#endif
#ifdef CTL_PAD6
  /* CTL_PAD6 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD6", mrb_fixnum_value(CTL_PAD6));
#endif
#ifdef CTL_PAD7
  /* CTL_PAD7 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD7", mrb_fixnum_value(CTL_PAD7));
#endif
#ifdef CTL_PAD8
  /* CTL_PAD8 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD8", mrb_fixnum_value(CTL_PAD8));
#endif
#ifdef CTL_PAD9
  /* CTL_PAD9 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PAD9", mrb_fixnum_value(CTL_PAD9));
#endif
#ifdef CTL_PADCENTER
  /* CTL_PADCENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADCENTER", mrb_fixnum_value(CTL_PADCENTER));
#endif
#ifdef CTL_PADENTER
  /* CTL_PADENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADENTER", mrb_fixnum_value(CTL_PADENTER));
#endif
#ifdef CTL_PADMINUS
  /* CTL_PADMINUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADMINUS", mrb_fixnum_value(CTL_PADMINUS));
#endif
#ifdef CTL_PADPLUS
  /* CTL_PADPLUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADPLUS", mrb_fixnum_value(CTL_PADPLUS));
#endif
#ifdef CTL_PADSLASH
  /* CTL_PADSLASH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADSLASH", mrb_fixnum_value(CTL_PADSLASH));
#endif
#ifdef CTL_PADSTAR
  /* CTL_PADSTAR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADSTAR", mrb_fixnum_value(CTL_PADSTAR));
#endif
#ifdef CTL_PADSTOP
  /* CTL_PADSTOP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PADSTOP", mrb_fixnum_value(CTL_PADSTOP));
#endif
#ifdef CTL_PGDN
  /* CTL_PGDN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PGDN", mrb_fixnum_value(CTL_PGDN));
#endif
#ifdef CTL_PGUP
  /* CTL_PGUP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_PGUP", mrb_fixnum_value(CTL_PGUP));
#endif
#ifdef CTL_RIGHT
  /* CTL_RIGHT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_RIGHT", mrb_fixnum_value(CTL_RIGHT));
#endif
#ifdef CTL_TAB
  /* CTL_TAB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_TAB", mrb_fixnum_value(CTL_TAB));
#endif
#ifdef CTL_UP
  /* CTL_UP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "CTL_UP", mrb_fixnum_value(CTL_UP));
#endif
#ifdef ERR
  /* ERR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "ERR", mrb_fixnum_value(ERR));
#endif
#ifdef FALSE
  /* FALSE assumed to be an integer value */
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
  /* KEY_A1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_A1", mrb_fixnum_value(KEY_A1));
#endif
#ifdef KEY_A2
  /* KEY_A2 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_A2", mrb_fixnum_value(KEY_A2));
#endif
#ifdef KEY_A3
  /* KEY_A3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_A3", mrb_fixnum_value(KEY_A3));
#endif
#ifdef KEY_ABORT
  /* KEY_ABORT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ABORT", mrb_fixnum_value(KEY_ABORT));
#endif
#ifdef KEY_ALT_L
  /* KEY_ALT_L assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ALT_L", mrb_fixnum_value(KEY_ALT_L));
#endif
#ifdef KEY_ALT_R
  /* KEY_ALT_R assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ALT_R", mrb_fixnum_value(KEY_ALT_R));
#endif
#ifdef KEY_B1
  /* KEY_B1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_B1", mrb_fixnum_value(KEY_B1));
#endif
#ifdef KEY_B2
  /* KEY_B2 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_B2", mrb_fixnum_value(KEY_B2));
#endif
#ifdef KEY_B3
  /* KEY_B3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_B3", mrb_fixnum_value(KEY_B3));
#endif
#ifdef KEY_BACKSPACE
  /* KEY_BACKSPACE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BACKSPACE", mrb_fixnum_value(KEY_BACKSPACE));
#endif
#ifdef KEY_BEG
  /* KEY_BEG assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BEG", mrb_fixnum_value(KEY_BEG));
#endif
#ifdef KEY_BREAK
  /* KEY_BREAK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BREAK", mrb_fixnum_value(KEY_BREAK));
#endif
#ifdef KEY_BTAB
  /* KEY_BTAB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_BTAB", mrb_fixnum_value(KEY_BTAB));
#endif
#ifdef KEY_C1
  /* KEY_C1 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_C1", mrb_fixnum_value(KEY_C1));
#endif
#ifdef KEY_C2
  /* KEY_C2 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_C2", mrb_fixnum_value(KEY_C2));
#endif
#ifdef KEY_C3
  /* KEY_C3 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_C3", mrb_fixnum_value(KEY_C3));
#endif
#ifdef KEY_CANCEL
  /* KEY_CANCEL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CANCEL", mrb_fixnum_value(KEY_CANCEL));
#endif
#ifdef KEY_CATAB
  /* KEY_CATAB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CATAB", mrb_fixnum_value(KEY_CATAB));
#endif
#ifdef KEY_CLEAR
  /* KEY_CLEAR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CLEAR", mrb_fixnum_value(KEY_CLEAR));
#endif
#ifdef KEY_CLOSE
  /* KEY_CLOSE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CLOSE", mrb_fixnum_value(KEY_CLOSE));
#endif
#ifdef KEY_CODE_YES
  /* KEY_CODE_YES assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CODE_YES", mrb_fixnum_value(KEY_CODE_YES));
#endif
#ifdef KEY_COMMAND
  /* KEY_COMMAND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_COMMAND", mrb_fixnum_value(KEY_COMMAND));
#endif
#ifdef KEY_CONTROL_L
  /* KEY_CONTROL_L assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CONTROL_L", mrb_fixnum_value(KEY_CONTROL_L));
#endif
#ifdef KEY_CONTROL_R
  /* KEY_CONTROL_R assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CONTROL_R", mrb_fixnum_value(KEY_CONTROL_R));
#endif
#ifdef KEY_COPY
  /* KEY_COPY assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_COPY", mrb_fixnum_value(KEY_COPY));
#endif
#ifdef KEY_CREATE
  /* KEY_CREATE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CREATE", mrb_fixnum_value(KEY_CREATE));
#endif
#ifdef KEY_CTAB
  /* KEY_CTAB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_CTAB", mrb_fixnum_value(KEY_CTAB));
#endif
#ifdef KEY_DC
  /* KEY_DC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_DC", mrb_fixnum_value(KEY_DC));
#endif
#ifdef KEY_DL
  /* KEY_DL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_DL", mrb_fixnum_value(KEY_DL));
#endif
#ifdef KEY_DOWN
  /* KEY_DOWN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_DOWN", mrb_fixnum_value(KEY_DOWN));
#endif
#ifdef KEY_EIC
  /* KEY_EIC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EIC", mrb_fixnum_value(KEY_EIC));
#endif
#ifdef KEY_END
  /* KEY_END assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_END", mrb_fixnum_value(KEY_END));
#endif
#ifdef KEY_ENTER
  /* KEY_ENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_ENTER", mrb_fixnum_value(KEY_ENTER));
#endif
#ifdef KEY_EOL
  /* KEY_EOL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EOL", mrb_fixnum_value(KEY_EOL));
#endif
#ifdef KEY_EOS
  /* KEY_EOS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EOS", mrb_fixnum_value(KEY_EOS));
#endif
#ifdef KEY_EXIT
  /* KEY_EXIT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_EXIT", mrb_fixnum_value(KEY_EXIT));
#endif
#ifdef KEY_F
  /* Ignoring function-like macro: KEY_F(n) */
#endif
#ifdef KEY_F0
  /* KEY_F0 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_F0", mrb_fixnum_value(KEY_F0));
#endif
#ifdef KEY_FIND
  /* KEY_FIND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_FIND", mrb_fixnum_value(KEY_FIND));
#endif
#ifdef KEY_HELP
  /* KEY_HELP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_HELP", mrb_fixnum_value(KEY_HELP));
#endif
#ifdef KEY_HOME
  /* KEY_HOME assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_HOME", mrb_fixnum_value(KEY_HOME));
#endif
#ifdef KEY_IC
  /* KEY_IC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_IC", mrb_fixnum_value(KEY_IC));
#endif
#ifdef KEY_IL
  /* KEY_IL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_IL", mrb_fixnum_value(KEY_IL));
#endif
#ifdef KEY_LEFT
  /* KEY_LEFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_LEFT", mrb_fixnum_value(KEY_LEFT));
#endif
#ifdef KEY_LHELP
  /* KEY_LHELP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_LHELP", mrb_fixnum_value(KEY_LHELP));
#endif
#ifdef KEY_LL
  /* KEY_LL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_LL", mrb_fixnum_value(KEY_LL));
#endif
#ifdef KEY_MARK
  /* KEY_MARK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MARK", mrb_fixnum_value(KEY_MARK));
#endif
#ifdef KEY_MAX
  /* KEY_MAX assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MAX", mrb_fixnum_value(KEY_MAX));
#endif
#ifdef KEY_MESSAGE
  /* KEY_MESSAGE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MESSAGE", mrb_fixnum_value(KEY_MESSAGE));
#endif
#ifdef KEY_MIN
  /* KEY_MIN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MIN", mrb_fixnum_value(KEY_MIN));
#endif
#ifdef KEY_MOUSE
  /* KEY_MOUSE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MOUSE", mrb_fixnum_value(KEY_MOUSE));
#endif
#ifdef KEY_MOVE
  /* KEY_MOVE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_MOVE", mrb_fixnum_value(KEY_MOVE));
#endif
#ifdef KEY_NEXT
  /* KEY_NEXT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_NEXT", mrb_fixnum_value(KEY_NEXT));
#endif
#ifdef KEY_NPAGE
  /* KEY_NPAGE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_NPAGE", mrb_fixnum_value(KEY_NPAGE));
#endif
#ifdef KEY_OPEN
  /* KEY_OPEN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_OPEN", mrb_fixnum_value(KEY_OPEN));
#endif
#ifdef KEY_OPTIONS
  /* KEY_OPTIONS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_OPTIONS", mrb_fixnum_value(KEY_OPTIONS));
#endif
#ifdef KEY_PPAGE
  /* KEY_PPAGE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_PPAGE", mrb_fixnum_value(KEY_PPAGE));
#endif
#ifdef KEY_PREVIOUS
  /* KEY_PREVIOUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_PREVIOUS", mrb_fixnum_value(KEY_PREVIOUS));
#endif
#ifdef KEY_PRINT
  /* KEY_PRINT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_PRINT", mrb_fixnum_value(KEY_PRINT));
#endif
#ifdef KEY_REDO
  /* KEY_REDO assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REDO", mrb_fixnum_value(KEY_REDO));
#endif
#ifdef KEY_REFERENCE
  /* KEY_REFERENCE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REFERENCE", mrb_fixnum_value(KEY_REFERENCE));
#endif
#ifdef KEY_REFRESH
  /* KEY_REFRESH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REFRESH", mrb_fixnum_value(KEY_REFRESH));
#endif
#ifdef KEY_REPLACE
  /* KEY_REPLACE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_REPLACE", mrb_fixnum_value(KEY_REPLACE));
#endif
#ifdef KEY_RESET
  /* KEY_RESET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESET", mrb_fixnum_value(KEY_RESET));
#endif
#ifdef KEY_RESIZE
  /* KEY_RESIZE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESIZE", mrb_fixnum_value(KEY_RESIZE));
#endif
#ifdef KEY_RESTART
  /* KEY_RESTART assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESTART", mrb_fixnum_value(KEY_RESTART));
#endif
#ifdef KEY_RESUME
  /* KEY_RESUME assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RESUME", mrb_fixnum_value(KEY_RESUME));
#endif
#ifdef KEY_RIGHT
  /* KEY_RIGHT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_RIGHT", mrb_fixnum_value(KEY_RIGHT));
#endif
#ifdef KEY_SAVE
  /* KEY_SAVE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SAVE", mrb_fixnum_value(KEY_SAVE));
#endif
#ifdef KEY_SBEG
  /* KEY_SBEG assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SBEG", mrb_fixnum_value(KEY_SBEG));
#endif
#ifdef KEY_SCANCEL
  /* KEY_SCANCEL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCANCEL", mrb_fixnum_value(KEY_SCANCEL));
#endif
#ifdef KEY_SCOMMAND
  /* KEY_SCOMMAND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCOMMAND", mrb_fixnum_value(KEY_SCOMMAND));
#endif
#ifdef KEY_SCOPY
  /* KEY_SCOPY assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCOPY", mrb_fixnum_value(KEY_SCOPY));
#endif
#ifdef KEY_SCREATE
  /* KEY_SCREATE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SCREATE", mrb_fixnum_value(KEY_SCREATE));
#endif
#ifdef KEY_SDC
  /* KEY_SDC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SDC", mrb_fixnum_value(KEY_SDC));
#endif
#ifdef KEY_SDL
  /* KEY_SDL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SDL", mrb_fixnum_value(KEY_SDL));
#endif
#ifdef KEY_SDOWN
  /* KEY_SDOWN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SDOWN", mrb_fixnum_value(KEY_SDOWN));
#endif
#ifdef KEY_SELECT
  /* KEY_SELECT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SELECT", mrb_fixnum_value(KEY_SELECT));
#endif
#ifdef KEY_SEND
  /* KEY_SEND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SEND", mrb_fixnum_value(KEY_SEND));
#endif
#ifdef KEY_SEOL
  /* KEY_SEOL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SEOL", mrb_fixnum_value(KEY_SEOL));
#endif
#ifdef KEY_SEXIT
  /* KEY_SEXIT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SEXIT", mrb_fixnum_value(KEY_SEXIT));
#endif
#ifdef KEY_SF
  /* KEY_SF assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SF", mrb_fixnum_value(KEY_SF));
#endif
#ifdef KEY_SFIND
  /* KEY_SFIND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SFIND", mrb_fixnum_value(KEY_SFIND));
#endif
#ifdef KEY_SHELP
  /* KEY_SHELP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHELP", mrb_fixnum_value(KEY_SHELP));
#endif
#ifdef KEY_SHIFT_L
  /* KEY_SHIFT_L assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHIFT_L", mrb_fixnum_value(KEY_SHIFT_L));
#endif
#ifdef KEY_SHIFT_R
  /* KEY_SHIFT_R assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHIFT_R", mrb_fixnum_value(KEY_SHIFT_R));
#endif
#ifdef KEY_SHOME
  /* KEY_SHOME assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SHOME", mrb_fixnum_value(KEY_SHOME));
#endif
#ifdef KEY_SIC
  /* KEY_SIC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SIC", mrb_fixnum_value(KEY_SIC));
#endif
#ifdef KEY_SLEFT
  /* KEY_SLEFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SLEFT", mrb_fixnum_value(KEY_SLEFT));
#endif
#ifdef KEY_SMESSAGE
  /* KEY_SMESSAGE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SMESSAGE", mrb_fixnum_value(KEY_SMESSAGE));
#endif
#ifdef KEY_SMOVE
  /* KEY_SMOVE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SMOVE", mrb_fixnum_value(KEY_SMOVE));
#endif
#ifdef KEY_SNEXT
  /* KEY_SNEXT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SNEXT", mrb_fixnum_value(KEY_SNEXT));
#endif
#ifdef KEY_SOPTIONS
  /* KEY_SOPTIONS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SOPTIONS", mrb_fixnum_value(KEY_SOPTIONS));
#endif
#ifdef KEY_SPREVIOUS
  /* KEY_SPREVIOUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SPREVIOUS", mrb_fixnum_value(KEY_SPREVIOUS));
#endif
#ifdef KEY_SPRINT
  /* KEY_SPRINT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SPRINT", mrb_fixnum_value(KEY_SPRINT));
#endif
#ifdef KEY_SR
  /* KEY_SR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SR", mrb_fixnum_value(KEY_SR));
#endif
#ifdef KEY_SREDO
  /* KEY_SREDO assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SREDO", mrb_fixnum_value(KEY_SREDO));
#endif
#ifdef KEY_SREPLACE
  /* KEY_SREPLACE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SREPLACE", mrb_fixnum_value(KEY_SREPLACE));
#endif
#ifdef KEY_SRESET
  /* KEY_SRESET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SRESET", mrb_fixnum_value(KEY_SRESET));
#endif
#ifdef KEY_SRIGHT
  /* KEY_SRIGHT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SRIGHT", mrb_fixnum_value(KEY_SRIGHT));
#endif
#ifdef KEY_SRSUME
  /* KEY_SRSUME assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SRSUME", mrb_fixnum_value(KEY_SRSUME));
#endif
#ifdef KEY_SSAVE
  /* KEY_SSAVE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SSAVE", mrb_fixnum_value(KEY_SSAVE));
#endif
#ifdef KEY_SSUSPEND
  /* KEY_SSUSPEND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SSUSPEND", mrb_fixnum_value(KEY_SSUSPEND));
#endif
#ifdef KEY_STAB
  /* KEY_STAB assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_STAB", mrb_fixnum_value(KEY_STAB));
#endif
#ifdef KEY_SUNDO
  /* KEY_SUNDO assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SUNDO", mrb_fixnum_value(KEY_SUNDO));
#endif
#ifdef KEY_SUP
  /* KEY_SUP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SUP", mrb_fixnum_value(KEY_SUP));
#endif
#ifdef KEY_SUSPEND
  /* KEY_SUSPEND assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_SUSPEND", mrb_fixnum_value(KEY_SUSPEND));
#endif
#ifdef KEY_UNDO
  /* KEY_UNDO assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "KEY_UNDO", mrb_fixnum_value(KEY_UNDO));
#endif
#ifdef KEY_UP
  /* KEY_UP assumed to be an integer value */
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
  /* MOUSE_WHEEL_SCROLL assumed to be an integer value */
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
  /* NULL assumed to be an integer value */
  // mrb_define_const(mrb, Curses_module(mrb), "NULL", mrb_fixnum_value(NULL));
#endif
#ifdef OK
  /* OK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "OK", mrb_fixnum_value(OK));
#endif
#ifdef PAD0
  /* PAD0 assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PAD0", mrb_fixnum_value(PAD0));
#endif
#ifdef PADENTER
  /* PADENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PADENTER", mrb_fixnum_value(PADENTER));
#endif
#ifdef PADMINUS
  /* PADMINUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PADMINUS", mrb_fixnum_value(PADMINUS));
#endif
#ifdef PADPLUS
  /* PADPLUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PADPLUS", mrb_fixnum_value(PADPLUS));
#endif
#ifdef PADSLASH
  /* PADSLASH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PADSLASH", mrb_fixnum_value(PADSLASH));
#endif
#ifdef PADSTAR
  /* PADSTAR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PADSTAR", mrb_fixnum_value(PADSTAR));
#endif
#ifdef PADSTOP
  /* PADSTOP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PADSTOP", mrb_fixnum_value(PADSTOP));
#endif
#ifdef PAIR_NUMBER
  /* Ignoring function-like macro: PAIR_NUMBER(n) */
#endif
#ifdef PDC_ATTR_SHIFT
  /* PDC_ATTR_SHIFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_ATTR_SHIFT", mrb_fixnum_value(PDC_ATTR_SHIFT));
#endif
#ifdef PDC_BUILD
  /* PDC_BUILD assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUILD", mrb_fixnum_value(PDC_BUILD));
#endif
#ifdef PDC_BUTTON_ALT
  /* PDC_BUTTON_ALT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUTTON_ALT", mrb_fixnum_value(PDC_BUTTON_ALT));
#endif
#ifdef PDC_BUTTON_CONTROL
  /* PDC_BUTTON_CONTROL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUTTON_CONTROL", mrb_fixnum_value(PDC_BUTTON_CONTROL));
#endif
#ifdef PDC_BUTTON_SHIFT
  /* PDC_BUTTON_SHIFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_BUTTON_SHIFT", mrb_fixnum_value(PDC_BUTTON_SHIFT));
#endif
#ifdef PDC_CLIP_ACCESS_ERROR
  /* PDC_CLIP_ACCESS_ERROR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_ACCESS_ERROR", mrb_fixnum_value(PDC_CLIP_ACCESS_ERROR));
#endif
#ifdef PDC_CLIP_EMPTY
  /* PDC_CLIP_EMPTY assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_EMPTY", mrb_fixnum_value(PDC_CLIP_EMPTY));
#endif
#ifdef PDC_CLIP_MEMORY_ERROR
  /* PDC_CLIP_MEMORY_ERROR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_MEMORY_ERROR", mrb_fixnum_value(PDC_CLIP_MEMORY_ERROR));
#endif
#ifdef PDC_CLIP_SUCCESS
  /* PDC_CLIP_SUCCESS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_CLIP_SUCCESS", mrb_fixnum_value(PDC_CLIP_SUCCESS));
#endif
#ifdef PDC_COLOR_SHIFT
  /* PDC_COLOR_SHIFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_COLOR_SHIFT", mrb_fixnum_value(PDC_COLOR_SHIFT));
#endif
#ifdef PDC_KEY_MODIFIER_ALT
  /* PDC_KEY_MODIFIER_ALT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_ALT", mrb_fixnum_value(PDC_KEY_MODIFIER_ALT));
#endif
#ifdef PDC_KEY_MODIFIER_CONTROL
  /* PDC_KEY_MODIFIER_CONTROL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_CONTROL", mrb_fixnum_value(PDC_KEY_MODIFIER_CONTROL));
#endif
#ifdef PDC_KEY_MODIFIER_NUMLOCK
  /* PDC_KEY_MODIFIER_NUMLOCK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_NUMLOCK", mrb_fixnum_value(PDC_KEY_MODIFIER_NUMLOCK));
#endif
#ifdef PDC_KEY_MODIFIER_SHIFT
  /* PDC_KEY_MODIFIER_SHIFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_KEY_MODIFIER_SHIFT", mrb_fixnum_value(PDC_KEY_MODIFIER_SHIFT));
#endif
#ifdef PDC_MOUSE_MOVED
  /* PDC_MOUSE_MOVED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_MOVED", mrb_fixnum_value(PDC_MOUSE_MOVED));
#endif
#ifdef PDC_MOUSE_POSITION
  /* PDC_MOUSE_POSITION assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_POSITION", mrb_fixnum_value(PDC_MOUSE_POSITION));
#endif
#ifdef PDC_MOUSE_WHEEL_DOWN
  /* PDC_MOUSE_WHEEL_DOWN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_WHEEL_DOWN", mrb_fixnum_value(PDC_MOUSE_WHEEL_DOWN));
#endif
#ifdef PDC_MOUSE_WHEEL_UP
  /* PDC_MOUSE_WHEEL_UP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDC_MOUSE_WHEEL_UP", mrb_fixnum_value(PDC_MOUSE_WHEEL_UP));
#endif
#ifdef PDCEX
  /* PDCEX assumed to be an integer value */
  // mrb_define_const(mrb, Curses_module(mrb), "PDCEX", mrb_fixnum_value(PDCEX));
#endif
#ifdef PDCURSES
  /* PDCURSES assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "PDCURSES", mrb_fixnum_value(PDCURSES));
#endif
#ifdef REPORT_MOUSE_POSITION
  /* REPORT_MOUSE_POSITION assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "REPORT_MOUSE_POSITION", mrb_fixnum_value(REPORT_MOUSE_POSITION));
#endif
#ifdef SHF_DC
  /* SHF_DC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_DC", mrb_fixnum_value(SHF_DC));
#endif
#ifdef SHF_DOWN
  /* SHF_DOWN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_DOWN", mrb_fixnum_value(SHF_DOWN));
#endif
#ifdef SHF_IC
  /* SHF_IC assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_IC", mrb_fixnum_value(SHF_IC));
#endif
#ifdef SHF_PADENTER
  /* SHF_PADENTER assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADENTER", mrb_fixnum_value(SHF_PADENTER));
#endif
#ifdef SHF_PADMINUS
  /* SHF_PADMINUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADMINUS", mrb_fixnum_value(SHF_PADMINUS));
#endif
#ifdef SHF_PADPLUS
  /* SHF_PADPLUS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADPLUS", mrb_fixnum_value(SHF_PADPLUS));
#endif
#ifdef SHF_PADSLASH
  /* SHF_PADSLASH assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADSLASH", mrb_fixnum_value(SHF_PADSLASH));
#endif
#ifdef SHF_PADSTAR
  /* SHF_PADSTAR assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_PADSTAR", mrb_fixnum_value(SHF_PADSTAR));
#endif
#ifdef SHF_UP
  /* SHF_UP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SHF_UP", mrb_fixnum_value(SHF_UP));
#endif
#ifdef SYSVcurses
  /* SYSVcurses assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "SYSVcurses", mrb_fixnum_value(SYSVcurses));
#endif
#ifdef TRUE
  /* TRUE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "TRUE", mrb_fixnum_value(TRUE));
#endif
#ifdef ungetch
  /* Ignoring function-like macro: ungetch(ch) */
#endif
#ifdef WA_ALTCHARSET
  /* WA_ALTCHARSET assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_ALTCHARSET", mrb_fixnum_value(WA_ALTCHARSET));
#endif
#ifdef WA_BLINK
  /* WA_BLINK assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_BLINK", mrb_fixnum_value(WA_BLINK));
#endif
#ifdef WA_BOLD
  /* WA_BOLD assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_BOLD", mrb_fixnum_value(WA_BOLD));
#endif
#ifdef WA_DIM
  /* WA_DIM assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_DIM", mrb_fixnum_value(WA_DIM));
#endif
#ifdef WA_HORIZONTAL
  /* WA_HORIZONTAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_HORIZONTAL", mrb_fixnum_value(WA_HORIZONTAL));
#endif
#ifdef WA_INVIS
  /* WA_INVIS assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_INVIS", mrb_fixnum_value(WA_INVIS));
#endif
#ifdef WA_LEFT
  /* WA_LEFT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_LEFT", mrb_fixnum_value(WA_LEFT));
#endif
#ifdef WA_LOW
  /* WA_LOW assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_LOW", mrb_fixnum_value(WA_LOW));
#endif
#ifdef WA_PROTECT
  /* WA_PROTECT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_PROTECT", mrb_fixnum_value(WA_PROTECT));
#endif
#ifdef WA_REVERSE
  /* WA_REVERSE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_REVERSE", mrb_fixnum_value(WA_REVERSE));
#endif
#ifdef WA_RIGHT
  /* WA_RIGHT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_RIGHT", mrb_fixnum_value(WA_RIGHT));
#endif
#ifdef WA_STANDOUT
  /* WA_STANDOUT assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_STANDOUT", mrb_fixnum_value(WA_STANDOUT));
#endif
#ifdef WA_TOP
  /* WA_TOP assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_TOP", mrb_fixnum_value(WA_TOP));
#endif
#ifdef WA_UNDERLINE
  /* WA_UNDERLINE assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_UNDERLINE", mrb_fixnum_value(WA_UNDERLINE));
#endif
#ifdef WA_VERTICAL
  /* WA_VERTICAL assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WA_VERTICAL", mrb_fixnum_value(WA_VERTICAL));
#endif
#ifdef WHEEL_SCROLLED
  /* WHEEL_SCROLLED assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "WHEEL_SCROLLED", mrb_fixnum_value(WHEEL_SCROLLED));
#endif
#ifdef XOPEN
  /* XOPEN assumed to be an integer value */
  mrb_define_const(mrb, Curses_module(mrb), "XOPEN", mrb_fixnum_value(XOPEN));
#endif
}
