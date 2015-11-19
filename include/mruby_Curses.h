
#ifndef Curses_HEADER
#define Curses_HEADER

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define Curses_module(mrb) mrb_module_get(mrb, "Curses")
#define MEVENT_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "MEVENT")
#define MOUSESTATUS_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "MOUSESTATUS")
#define SCREEN_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "SCREEN")
#define Win_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "Win")
#define Panel_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "Panel")
#define Panelobs_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "Panelobs")
#define TERMINAL_class(mrb) mrb_class_get_under(mrb, Curses_module(mrb), "TERMINAL")

/*
 * Class Bindings Options
 * ----------------------
 *
 * Use these macros to configure the generated bindings for classes & structs.
 *
 * Key:
 *
 * BIND_{type name}_TYPE                      : Should we bind the class at all?
 * BIND_{type name}_INITIALIZE                : If the class is bound, should we also bind initialize to malloc a new instance on `new`?
 * BIND_{type name}_{field name}_FIELD_READER : If the class is bound, should we also bind a reader for this field?
 * BIND_{type name}_{field name}_FIELD_WRITER : If the class is bound, should we also bind a writer for this field?
 * BIND_{type name}_{function name}_FUNCTION  : If the class is bound, should we also bind this member function?
 *
 * Fields & method are disabled by default so that bindings may be added and
 * tested incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_MEVENT_TYPE TRUE
#define BIND_MEVENT_INITIALIZE FALSE
#define BIND_MEVENT_bstate_FIELD_READER FALSE
#define BIND_MEVENT_bstate_FIELD_WRITER FALSE
#define BIND_MEVENT_id_FIELD_READER FALSE
#define BIND_MEVENT_id_FIELD_WRITER FALSE
#define BIND_MEVENT_x_FIELD_READER FALSE
#define BIND_MEVENT_x_FIELD_WRITER FALSE
#define BIND_MEVENT_y_FIELD_READER FALSE
#define BIND_MEVENT_y_FIELD_WRITER FALSE
#define BIND_MEVENT_z_FIELD_READER FALSE
#define BIND_MEVENT_z_FIELD_WRITER FALSE

#define BIND_MOUSESTATUS_TYPE TRUE
#define BIND_MOUSESTATUS_INITIALIZE FALSE
#define BIND_MOUSESTATUS_button_FIELD_READER FALSE
#define BIND_MOUSESTATUS_button_FIELD_WRITER FALSE
#define BIND_MOUSESTATUS_changes_FIELD_READER FALSE
#define BIND_MOUSESTATUS_changes_FIELD_WRITER FALSE
#define BIND_MOUSESTATUS_x_FIELD_READER FALSE
#define BIND_MOUSESTATUS_x_FIELD_WRITER FALSE
#define BIND_MOUSESTATUS_y_FIELD_READER FALSE
#define BIND_MOUSESTATUS_y_FIELD_WRITER FALSE

#define BIND_SCREEN_TYPE TRUE
#define BIND_SCREEN_INITIALIZE FALSE
#define BIND_SCREEN__map_mbe_to_key_FIELD_READER FALSE
#define BIND_SCREEN__map_mbe_to_key_FIELD_WRITER FALSE
#define BIND_SCREEN__preserve_FIELD_READER FALSE
#define BIND_SCREEN__preserve_FIELD_WRITER FALSE
#define BIND_SCREEN__restore_FIELD_READER FALSE
#define BIND_SCREEN__restore_FIELD_WRITER FALSE
#define BIND_SCREEN__trap_mbe_FIELD_READER FALSE
#define BIND_SCREEN__trap_mbe_FIELD_WRITER FALSE
#define BIND_SCREEN_alive_FIELD_READER FALSE
#define BIND_SCREEN_alive_FIELD_WRITER FALSE
#define BIND_SCREEN_audible_FIELD_READER FALSE
#define BIND_SCREEN_audible_FIELD_WRITER FALSE
#define BIND_SCREEN_autocr_FIELD_READER FALSE
#define BIND_SCREEN_autocr_FIELD_WRITER FALSE
#define BIND_SCREEN_cbreak_FIELD_READER FALSE
#define BIND_SCREEN_cbreak_FIELD_WRITER FALSE
#define BIND_SCREEN_cols_FIELD_READER FALSE
#define BIND_SCREEN_cols_FIELD_WRITER FALSE
#define BIND_SCREEN_curscol_FIELD_READER FALSE
#define BIND_SCREEN_curscol_FIELD_WRITER FALSE
#define BIND_SCREEN_cursrow_FIELD_READER FALSE
#define BIND_SCREEN_cursrow_FIELD_WRITER FALSE
#define BIND_SCREEN_delaytenths_FIELD_READER FALSE
#define BIND_SCREEN_delaytenths_FIELD_WRITER FALSE
#define BIND_SCREEN_echo_FIELD_READER FALSE
#define BIND_SCREEN_echo_FIELD_WRITER FALSE
#define BIND_SCREEN_key_code_FIELD_READER FALSE
#define BIND_SCREEN_key_code_FIELD_WRITER FALSE
#define BIND_SCREEN_line_color_FIELD_READER FALSE
#define BIND_SCREEN_line_color_FIELD_WRITER FALSE
#define BIND_SCREEN_lines_FIELD_READER FALSE
#define BIND_SCREEN_lines_FIELD_WRITER FALSE
#define BIND_SCREEN_linesrippedoff_FIELD_READER FALSE
#define BIND_SCREEN_linesrippedoff_FIELD_WRITER FALSE
#define BIND_SCREEN_linesrippedoffontop_FIELD_READER FALSE
#define BIND_SCREEN_linesrippedoffontop_FIELD_WRITER FALSE
#define BIND_SCREEN_mono_FIELD_READER FALSE
#define BIND_SCREEN_mono_FIELD_WRITER FALSE
#define BIND_SCREEN_mouse_wait_FIELD_READER FALSE
#define BIND_SCREEN_mouse_wait_FIELD_WRITER FALSE
#define BIND_SCREEN_orig_attr_FIELD_READER FALSE
#define BIND_SCREEN_orig_attr_FIELD_WRITER FALSE
#define BIND_SCREEN_orig_back_FIELD_READER FALSE
#define BIND_SCREEN_orig_back_FIELD_WRITER FALSE
#define BIND_SCREEN_orig_cursor_FIELD_READER FALSE
#define BIND_SCREEN_orig_cursor_FIELD_WRITER FALSE
#define BIND_SCREEN_orig_fore_FIELD_READER FALSE
#define BIND_SCREEN_orig_fore_FIELD_WRITER FALSE
#define BIND_SCREEN_raw_inp_FIELD_READER FALSE
#define BIND_SCREEN_raw_inp_FIELD_WRITER FALSE
#define BIND_SCREEN_raw_out_FIELD_READER FALSE
#define BIND_SCREEN_raw_out_FIELD_WRITER FALSE
#define BIND_SCREEN_resized_FIELD_READER FALSE
#define BIND_SCREEN_resized_FIELD_WRITER FALSE
#define BIND_SCREEN_return_key_modifiers_FIELD_READER FALSE
#define BIND_SCREEN_return_key_modifiers_FIELD_WRITER FALSE
#define BIND_SCREEN_save_key_modifiers_FIELD_READER FALSE
#define BIND_SCREEN_save_key_modifiers_FIELD_WRITER FALSE
#define BIND_SCREEN_slk_winptr_FIELD_READER FALSE
#define BIND_SCREEN_slk_winptr_FIELD_WRITER FALSE
#define BIND_SCREEN_slklines_FIELD_READER FALSE
#define BIND_SCREEN_slklines_FIELD_WRITER FALSE
#define BIND_SCREEN_visibility_FIELD_READER FALSE
#define BIND_SCREEN_visibility_FIELD_WRITER FALSE

#define BIND_Win_TYPE TRUE
#define BIND_Win_INITIALIZE FALSE
#define BIND_Win__attrs_FIELD_READER FALSE
#define BIND_Win__attrs_FIELD_WRITER FALSE
#define BIND_Win__begx_FIELD_READER FALSE
#define BIND_Win__begx_FIELD_WRITER FALSE
#define BIND_Win__begy_FIELD_READER FALSE
#define BIND_Win__begy_FIELD_WRITER FALSE
#define BIND_Win__bkgd_FIELD_READER FALSE
#define BIND_Win__bkgd_FIELD_WRITER FALSE
#define BIND_Win__bmarg_FIELD_READER FALSE
#define BIND_Win__bmarg_FIELD_WRITER FALSE
#define BIND_Win__clear_FIELD_READER FALSE
#define BIND_Win__clear_FIELD_WRITER FALSE
#define BIND_Win__curx_FIELD_READER FALSE
#define BIND_Win__curx_FIELD_WRITER FALSE
#define BIND_Win__cury_FIELD_READER FALSE
#define BIND_Win__cury_FIELD_WRITER FALSE
#define BIND_Win__delayms_FIELD_READER FALSE
#define BIND_Win__delayms_FIELD_WRITER FALSE
#define BIND_Win__firstch_FIELD_READER FALSE
#define BIND_Win__firstch_FIELD_WRITER FALSE
#define BIND_Win__flags_FIELD_READER FALSE
#define BIND_Win__flags_FIELD_WRITER FALSE
#define BIND_Win__immed_FIELD_READER FALSE
#define BIND_Win__immed_FIELD_WRITER FALSE
#define BIND_Win__lastch_FIELD_READER FALSE
#define BIND_Win__lastch_FIELD_WRITER FALSE
#define BIND_Win__leaveit_FIELD_READER FALSE
#define BIND_Win__leaveit_FIELD_WRITER FALSE
#define BIND_Win__maxx_FIELD_READER FALSE
#define BIND_Win__maxx_FIELD_WRITER FALSE
#define BIND_Win__maxy_FIELD_READER FALSE
#define BIND_Win__maxy_FIELD_WRITER FALSE
#define BIND_Win__nodelay_FIELD_READER FALSE
#define BIND_Win__nodelay_FIELD_WRITER FALSE
#define BIND_Win__parent_FIELD_READER FALSE
#define BIND_Win__parent_FIELD_WRITER FALSE
#define BIND_Win__parx_FIELD_READER FALSE
#define BIND_Win__parx_FIELD_WRITER FALSE
#define BIND_Win__pary_FIELD_READER FALSE
#define BIND_Win__pary_FIELD_WRITER FALSE
#define BIND_Win__scroll_FIELD_READER FALSE
#define BIND_Win__scroll_FIELD_WRITER FALSE
#define BIND_Win__sync_FIELD_READER FALSE
#define BIND_Win__sync_FIELD_WRITER FALSE
#define BIND_Win__tmarg_FIELD_READER FALSE
#define BIND_Win__tmarg_FIELD_WRITER FALSE
#define BIND_Win__use_keypad_FIELD_READER FALSE
#define BIND_Win__use_keypad_FIELD_WRITER FALSE
#define BIND_Win__y_FIELD_READER FALSE
#define BIND_Win__y_FIELD_WRITER FALSE

#define BIND_Panel_TYPE TRUE
#define BIND_Panel_INITIALIZE FALSE
#define BIND_Panel_above_FIELD_READER FALSE
#define BIND_Panel_above_FIELD_WRITER FALSE
#define BIND_Panel_below_FIELD_READER FALSE
#define BIND_Panel_below_FIELD_WRITER FALSE
#define BIND_Panel_obscure_FIELD_READER FALSE
#define BIND_Panel_obscure_FIELD_WRITER FALSE
#define BIND_Panel_user_FIELD_READER FALSE
#define BIND_Panel_user_FIELD_WRITER FALSE
#define BIND_Panel_wendx_FIELD_READER FALSE
#define BIND_Panel_wendx_FIELD_WRITER FALSE
#define BIND_Panel_wendy_FIELD_READER FALSE
#define BIND_Panel_wendy_FIELD_WRITER FALSE
#define BIND_Panel_win_FIELD_READER FALSE
#define BIND_Panel_win_FIELD_WRITER FALSE
#define BIND_Panel_wstartx_FIELD_READER FALSE
#define BIND_Panel_wstartx_FIELD_WRITER FALSE
#define BIND_Panel_wstarty_FIELD_READER FALSE
#define BIND_Panel_wstarty_FIELD_WRITER FALSE

#define BIND_Panelobs_TYPE TRUE
#define BIND_Panelobs_INITIALIZE FALSE
#define BIND_Panelobs_above_FIELD_READER FALSE
#define BIND_Panelobs_above_FIELD_WRITER FALSE
#define BIND_Panelobs_pan_FIELD_READER FALSE
#define BIND_Panelobs_pan_FIELD_WRITER FALSE

#define BIND_TERMINAL_TYPE TRUE
#define BIND_TERMINAL_INITIALIZE FALSE
#define BIND_TERMINAL__termname_FIELD_READER FALSE
#define BIND_TERMINAL__termname_FIELD_WRITER FALSE


/*
 * Global Function Options
 * -----------------------
 *
 * Set these macros to TRUE to enable bindings for these functions.
 * They are disabled initially so that bindings may be added and tested
 * incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

 #define BIND_addch_FUNCTION TRUE
 #define BIND_addchnstr_FUNCTION FALSE
 #define BIND_addchstr_FUNCTION FALSE
 #define BIND_addnstr_FUNCTION TRUE
 #define BIND_addrawch_FUNCTION TRUE
 #define BIND_addstr_FUNCTION TRUE
 #define BIND_assume_default_colors_FUNCTION TRUE
 #define BIND_attr_get_FUNCTION FALSE
 #define BIND_attr_off_FUNCTION FALSE
 #define BIND_attr_on_FUNCTION FALSE
 #define BIND_attr_set_FUNCTION FALSE
 #define BIND_attroff_FUNCTION TRUE
 #define BIND_attron_FUNCTION TRUE
 #define BIND_attrset_FUNCTION TRUE
 #define BIND_baudrate_FUNCTION TRUE
 #define BIND_beep_FUNCTION TRUE
 #define BIND_bkgd_FUNCTION TRUE
 #define BIND_bkgdset_FUNCTION TRUE
 #define BIND_border_FUNCTION TRUE
 #define BIND_bottom_panel_FUNCTION TRUE
 #define BIND_box_FUNCTION TRUE
 #define BIND_can_change_color_FUNCTION TRUE
 #define BIND_cbreak_FUNCTION TRUE
 #define BIND_chgat_FUNCTION FALSE
 #define BIND_clear_FUNCTION TRUE
 #define BIND_clearok_FUNCTION TRUE
 #define BIND_clrtobot_FUNCTION TRUE
 #define BIND_clrtoeol_FUNCTION TRUE
 #define BIND_color_content_FUNCTION FALSE
 #define BIND_color_set_FUNCTION FALSE
 #define BIND_copywin_FUNCTION TRUE
 #define BIND_crmode_FUNCTION TRUE
 #define BIND_curs_set_FUNCTION TRUE
 #define BIND_curses_version_FUNCTION TRUE
 #define BIND_def_prog_mode_FUNCTION TRUE
 #define BIND_def_shell_mode_FUNCTION TRUE
 #define BIND_del_curterm_FUNCTION TRUE
 #define BIND_del_panel_FUNCTION TRUE
 #define BIND_delay_output_FUNCTION TRUE
 #define BIND_delch_FUNCTION TRUE
 #define BIND_deleteln_FUNCTION TRUE
 #define BIND_delscreen_FUNCTION TRUE
 #define BIND_delwin_FUNCTION TRUE
 #define BIND_derwin_FUNCTION TRUE
 #define BIND_doupdate_FUNCTION TRUE
 #define BIND_draino_FUNCTION TRUE
 #define BIND_dupwin_FUNCTION TRUE
 #define BIND_echo_FUNCTION TRUE
 #define BIND_echochar_FUNCTION TRUE
 #define BIND_endwin_FUNCTION TRUE
 #define BIND_erase_FUNCTION TRUE
 #define BIND_erasechar_FUNCTION TRUE
 #define BIND_filter_FUNCTION TRUE
 #define BIND_fixterm_FUNCTION TRUE
 #define BIND_flash_FUNCTION TRUE
 #define BIND_flushinp_FUNCTION TRUE
 #define BIND_getattrs_FUNCTION TRUE
 #define BIND_getbegx_FUNCTION TRUE
 #define BIND_getbegy_FUNCTION TRUE
 #define BIND_getbkgd_FUNCTION TRUE
 #define BIND_getbmap_FUNCTION TRUE
 #define BIND_getcurx_FUNCTION TRUE
 #define BIND_getcury_FUNCTION TRUE
 #define BIND_getmaxx_FUNCTION TRUE
 #define BIND_getmaxy_FUNCTION TRUE
 #define BIND_getmouse_FUNCTION TRUE
 #define BIND_getnstr_FUNCTION TRUE
 #define BIND_getparx_FUNCTION TRUE
 #define BIND_getpary_FUNCTION TRUE
 #define BIND_getstr_FUNCTION TRUE
 #define BIND_getwin_FUNCTION FALSE
 #define BIND_halfdelay_FUNCTION TRUE
 #define BIND_has_colors_FUNCTION TRUE
 #define BIND_has_ic_FUNCTION TRUE
 #define BIND_has_il_FUNCTION TRUE
 #define BIND_has_key_FUNCTION TRUE
 #define BIND_hide_panel_FUNCTION TRUE
 #define BIND_hline_FUNCTION TRUE
 #define BIND_idcok_FUNCTION TRUE
 #define BIND_idlok_FUNCTION TRUE
 #define BIND_immedok_FUNCTION TRUE
 #define BIND_inch_FUNCTION TRUE
 #define BIND_inchnstr_FUNCTION FALSE
 #define BIND_inchstr_FUNCTION FALSE
 #define BIND_init_color_FUNCTION TRUE
 #define BIND_init_pair_FUNCTION TRUE
 #define BIND_initscr_FUNCTION TRUE
 #define BIND_innstr_FUNCTION TRUE
 #define BIND_insch_FUNCTION TRUE
 #define BIND_insdelln_FUNCTION TRUE
 #define BIND_insertln_FUNCTION TRUE
 #define BIND_insnstr_FUNCTION TRUE
 #define BIND_insrawch_FUNCTION TRUE
 #define BIND_insstr_FUNCTION TRUE
 #define BIND_instr_FUNCTION TRUE
 #define BIND_intrflush_FUNCTION TRUE
 #define BIND_is_linetouched_FUNCTION TRUE
 #define BIND_is_termresized_FUNCTION TRUE
 #define BIND_is_wintouched_FUNCTION TRUE
 #define BIND_isendwin_FUNCTION TRUE
 #define BIND_keyname_FUNCTION TRUE
 #define BIND_keypad_FUNCTION TRUE
 #define BIND_killchar_FUNCTION TRUE
 #define BIND_leaveok_FUNCTION TRUE
 #define BIND_longname_FUNCTION TRUE
 #define BIND_map_button_FUNCTION TRUE
 #define BIND_meta_FUNCTION TRUE
 #define BIND_mouse_off_FUNCTION TRUE
 #define BIND_mouse_on_FUNCTION TRUE
 #define BIND_mouse_set_FUNCTION TRUE
 #define BIND_mouse_trafo_FUNCTION FALSE
 #define BIND_mouseinterval_FUNCTION TRUE
 #define BIND_mousemask_FUNCTION FALSE
 #define BIND_move_FUNCTION TRUE
 #define BIND_move_panel_FUNCTION TRUE
 #define BIND_mvaddch_FUNCTION TRUE
 #define BIND_mvaddchnstr_FUNCTION FALSE
 #define BIND_mvaddchstr_FUNCTION FALSE
 #define BIND_mvaddnstr_FUNCTION TRUE
 #define BIND_mvaddrawch_FUNCTION TRUE
 #define BIND_mvaddstr_FUNCTION TRUE
 #define BIND_mvchgat_FUNCTION FALSE
 #define BIND_mvcur_FUNCTION TRUE
 #define BIND_mvdelch_FUNCTION TRUE
 #define BIND_mvdeleteln_FUNCTION TRUE
 #define BIND_mvderwin_FUNCTION TRUE
 #define BIND_mvgetch_FUNCTION TRUE
 #define BIND_mvgetnstr_FUNCTION TRUE
 #define BIND_mvgetstr_FUNCTION TRUE
 #define BIND_mvhline_FUNCTION TRUE
 #define BIND_mvinch_FUNCTION TRUE
 #define BIND_mvinchnstr_FUNCTION FALSE
 #define BIND_mvinchstr_FUNCTION FALSE
 #define BIND_mvinnstr_FUNCTION TRUE
 #define BIND_mvinsch_FUNCTION TRUE
 #define BIND_mvinsertln_FUNCTION TRUE
 #define BIND_mvinsnstr_FUNCTION TRUE
 #define BIND_mvinsrawch_FUNCTION TRUE
 #define BIND_mvinsstr_FUNCTION TRUE
 #define BIND_mvinstr_FUNCTION TRUE
 #define BIND_mvprintw_FUNCTION TRUE
 #define BIND_mvscanw_FUNCTION TRUE
 #define BIND_mvvline_FUNCTION TRUE
 #define BIND_mvwaddch_FUNCTION TRUE
 #define BIND_mvwaddchnstr_FUNCTION FALSE
 #define BIND_mvwaddchstr_FUNCTION FALSE
 #define BIND_mvwaddnstr_FUNCTION TRUE
 #define BIND_mvwaddrawch_FUNCTION TRUE
 #define BIND_mvwaddstr_FUNCTION TRUE
 #define BIND_mvwchgat_FUNCTION FALSE
 #define BIND_mvwdelch_FUNCTION TRUE
 #define BIND_mvwdeleteln_FUNCTION TRUE
 #define BIND_mvwgetch_FUNCTION TRUE
 #define BIND_mvwgetnstr_FUNCTION TRUE
 #define BIND_mvwgetstr_FUNCTION TRUE
 #define BIND_mvwhline_FUNCTION TRUE
 #define BIND_mvwin_FUNCTION TRUE
 #define BIND_mvwinch_FUNCTION TRUE
 #define BIND_mvwinchnstr_FUNCTION FALSE
 #define BIND_mvwinchstr_FUNCTION FALSE
 #define BIND_mvwinnstr_FUNCTION TRUE
 #define BIND_mvwinsch_FUNCTION TRUE
 #define BIND_mvwinsertln_FUNCTION TRUE
 #define BIND_mvwinsnstr_FUNCTION TRUE
 #define BIND_mvwinsrawch_FUNCTION TRUE
 #define BIND_mvwinsstr_FUNCTION TRUE
 #define BIND_mvwinstr_FUNCTION TRUE
 #define BIND_mvwprintw_FUNCTION TRUE
 #define BIND_mvwscanw_FUNCTION TRUE
 #define BIND_mvwvline_FUNCTION TRUE
 #define BIND_napms_FUNCTION TRUE
 #define BIND_nc_getmouse_FUNCTION TRUE
 #define BIND_new_panel_FUNCTION TRUE
 #define BIND_newpad_FUNCTION TRUE
 #define BIND_newterm_FUNCTION FALSE
 #define BIND_newwin_FUNCTION TRUE
 #define BIND_nl_FUNCTION TRUE
 #define BIND_nocbreak_FUNCTION TRUE
 #define BIND_nocrmode_FUNCTION TRUE
 #define BIND_nodelay_FUNCTION TRUE
 #define BIND_noecho_FUNCTION TRUE
 #define BIND_nonl_FUNCTION TRUE
 #define BIND_noqiflush_FUNCTION TRUE
 #define BIND_noraw_FUNCTION TRUE
 #define BIND_notimeout_FUNCTION TRUE
 #define BIND_overlay_FUNCTION TRUE
 #define BIND_overwrite_FUNCTION TRUE
 #define BIND_pair_content_FUNCTION FALSE
 #define BIND_panel_above_FUNCTION TRUE
 #define BIND_panel_below_FUNCTION TRUE
 #define BIND_panel_hidden_FUNCTION TRUE
 #define BIND_panel_userptr_FUNCTION FALSE
 #define BIND_panel_window_FUNCTION TRUE
 #define BIND_PDC_clearclipboard_FUNCTION TRUE
 #define BIND_PDC_debug_FUNCTION TRUE
 #define BIND_PDC_freeclipboard_FUNCTION TRUE
 #define BIND_PDC_get_input_fd_FUNCTION TRUE
 #define BIND_PDC_get_key_modifiers_FUNCTION TRUE
 #define BIND_PDC_getclipboard_FUNCTION FALSE
 #define BIND_PDC_return_key_modifiers_FUNCTION TRUE
 #define BIND_PDC_save_key_modifiers_FUNCTION TRUE
 #define BIND_PDC_set_blink_FUNCTION TRUE
 #define BIND_PDC_set_line_color_FUNCTION TRUE
 #define BIND_PDC_set_title_FUNCTION TRUE
 #define BIND_PDC_setclipboard_FUNCTION TRUE
 #define BIND_PDC_ungetch_FUNCTION TRUE
 #define BIND_pechochar_FUNCTION TRUE
 #define BIND_pnoutrefresh_FUNCTION TRUE
 #define BIND_prefresh_FUNCTION TRUE
 #define BIND_printw_FUNCTION TRUE
 #define BIND_putp_FUNCTION TRUE
 #define BIND_putwin_FUNCTION FALSE
 #define BIND_qiflush_FUNCTION TRUE
 #define BIND_raw_FUNCTION TRUE
 #define BIND_raw_output_FUNCTION TRUE
 #define BIND_redrawwin_FUNCTION TRUE
 #define BIND_refresh_FUNCTION TRUE
 #define BIND_replace_panel_FUNCTION TRUE
 #define BIND_request_mouse_pos_FUNCTION TRUE
 #define BIND_reset_prog_mode_FUNCTION TRUE
 #define BIND_reset_shell_mode_FUNCTION TRUE
 #define BIND_resetterm_FUNCTION TRUE
 #define BIND_resetty_FUNCTION TRUE
 #define BIND_resize_term_FUNCTION TRUE
 #define BIND_resize_window_FUNCTION TRUE
 #define BIND_restartterm_FUNCTION FALSE
 #define BIND_ripoffline_FUNCTION FALSE
 #define BIND_saveterm_FUNCTION TRUE
 #define BIND_savetty_FUNCTION TRUE
 #define BIND_scanw_FUNCTION TRUE
 #define BIND_scr_dump_FUNCTION TRUE
 #define BIND_scr_init_FUNCTION TRUE
 #define BIND_scr_restore_FUNCTION TRUE
 #define BIND_scr_set_FUNCTION TRUE
 #define BIND_scrl_FUNCTION TRUE
 #define BIND_scroll_FUNCTION TRUE
 #define BIND_scrollok_FUNCTION TRUE
 #define BIND_set_curterm_FUNCTION TRUE
 #define BIND_set_panel_userptr_FUNCTION FALSE
 #define BIND_set_term_FUNCTION TRUE
 #define BIND_setscrreg_FUNCTION TRUE
 #define BIND_setsyx_FUNCTION TRUE
 #define BIND_setterm_FUNCTION TRUE
 #define BIND_setupterm_FUNCTION FALSE
 #define BIND_show_panel_FUNCTION TRUE
 #define BIND_slk_attr_off_FUNCTION FALSE
 #define BIND_slk_attr_on_FUNCTION FALSE
 #define BIND_slk_attr_set_FUNCTION FALSE
 #define BIND_slk_attroff_FUNCTION TRUE
 #define BIND_slk_attron_FUNCTION TRUE
 #define BIND_slk_attrset_FUNCTION TRUE
 #define BIND_slk_clear_FUNCTION TRUE
 #define BIND_slk_color_FUNCTION TRUE
 #define BIND_slk_init_FUNCTION TRUE
 #define BIND_slk_label_FUNCTION TRUE
 #define BIND_slk_noutrefresh_FUNCTION TRUE
 #define BIND_slk_refresh_FUNCTION TRUE
 #define BIND_slk_restore_FUNCTION TRUE
 #define BIND_slk_set_FUNCTION TRUE
 #define BIND_slk_touch_FUNCTION TRUE
 #define BIND_standend_FUNCTION TRUE
 #define BIND_standout_FUNCTION TRUE
 #define BIND_start_color_FUNCTION TRUE
 #define BIND_subpad_FUNCTION TRUE
 #define BIND_subwin_FUNCTION TRUE
 #define BIND_syncok_FUNCTION TRUE
 #define BIND_term_attrs_FUNCTION FALSE
 #define BIND_termattrs_FUNCTION TRUE
 #define BIND_termname_FUNCTION TRUE
 #define BIND_tgetent_FUNCTION TRUE
 #define BIND_tgetflag_FUNCTION TRUE
 #define BIND_tgetnum_FUNCTION TRUE
 #define BIND_tgetstr_FUNCTION FALSE
 #define BIND_tgoto_FUNCTION TRUE
 #define BIND_tigetflag_FUNCTION TRUE
 #define BIND_tigetnum_FUNCTION TRUE
 #define BIND_tigetstr_FUNCTION TRUE
 #define BIND_timeout_FUNCTION TRUE
 #define BIND_top_panel_FUNCTION TRUE
 #define BIND_touchline_FUNCTION TRUE
 #define BIND_touchwin_FUNCTION TRUE
 #define BIND_tparm_FUNCTION TRUE
 #define BIND_tputs_FUNCTION FALSE
 #define BIND_traceoff_FUNCTION TRUE
 #define BIND_traceon_FUNCTION TRUE
 #define BIND_typeahead_FUNCTION TRUE
 #define BIND_unctrl_FUNCTION TRUE
 #define BIND_ungetmouse_FUNCTION TRUE
 #define BIND_untouchwin_FUNCTION TRUE
 #define BIND_update_panels_FUNCTION TRUE
 #define BIND_use_default_colors_FUNCTION TRUE
 #define BIND_use_env_FUNCTION TRUE
 #define BIND_vid_attr_FUNCTION FALSE
 #define BIND_vid_puts_FUNCTION FALSE
 #define BIND_vidattr_FUNCTION TRUE
 #define BIND_vidputs_FUNCTION FALSE
 #define BIND_vline_FUNCTION TRUE
 #define BIND_vw_printw_FUNCTION FALSE
 #define BIND_vw_scanw_FUNCTION FALSE
 #define BIND_vwprintw_FUNCTION FALSE
 #define BIND_vwscanw_FUNCTION FALSE
 #define BIND_waddch_FUNCTION TRUE
 #define BIND_waddchnstr_FUNCTION FALSE
 #define BIND_waddchstr_FUNCTION FALSE
 #define BIND_waddnstr_FUNCTION TRUE
 #define BIND_waddrawch_FUNCTION TRUE
 #define BIND_waddstr_FUNCTION TRUE
 #define BIND_wattr_get_FUNCTION FALSE
 #define BIND_wattr_off_FUNCTION FALSE
 #define BIND_wattr_on_FUNCTION FALSE
 #define BIND_wattr_set_FUNCTION FALSE
 #define BIND_wattroff_FUNCTION TRUE
 #define BIND_wattron_FUNCTION TRUE
 #define BIND_wattrset_FUNCTION TRUE
 #define BIND_wbkgd_FUNCTION TRUE
 #define BIND_wbkgdset_FUNCTION TRUE
 #define BIND_wborder_FUNCTION TRUE
 #define BIND_wchgat_FUNCTION FALSE
 #define BIND_wclear_FUNCTION TRUE
 #define BIND_wclrtobot_FUNCTION TRUE
 #define BIND_wclrtoeol_FUNCTION TRUE
 #define BIND_wcolor_set_FUNCTION FALSE
 #define BIND_wcursyncup_FUNCTION TRUE
 #define BIND_wdelch_FUNCTION TRUE
 #define BIND_wdeleteln_FUNCTION TRUE
 #define BIND_wechochar_FUNCTION TRUE
 #define BIND_wenclose_FUNCTION TRUE
 #define BIND_werase_FUNCTION TRUE
 #define BIND_wgetch_FUNCTION TRUE
 #define BIND_wgetnstr_FUNCTION TRUE
 #define BIND_wgetstr_FUNCTION TRUE
 #define BIND_whline_FUNCTION TRUE
 #define BIND_winch_FUNCTION TRUE
 #define BIND_winchnstr_FUNCTION FALSE
 #define BIND_winchstr_FUNCTION FALSE
 #define BIND_winnstr_FUNCTION TRUE
 #define BIND_winsch_FUNCTION TRUE
 #define BIND_winsdelln_FUNCTION TRUE
 #define BIND_winsertln_FUNCTION TRUE
 #define BIND_winsnstr_FUNCTION TRUE
 #define BIND_winsrawch_FUNCTION TRUE
 #define BIND_winsstr_FUNCTION TRUE
 #define BIND_winstr_FUNCTION TRUE
 #define BIND_wmouse_position_FUNCTION FALSE
 #define BIND_wmouse_trafo_FUNCTION FALSE
 #define BIND_wmove_FUNCTION TRUE
 #define BIND_wnoutrefresh_FUNCTION TRUE
 #define BIND_wordchar_FUNCTION TRUE
 #define BIND_wprintw_FUNCTION TRUE
 #define BIND_wredrawln_FUNCTION TRUE
 #define BIND_wrefresh_FUNCTION TRUE
 #define BIND_wresize_FUNCTION TRUE
 #define BIND_wscanw_FUNCTION TRUE
 #define BIND_wscrl_FUNCTION TRUE
 #define BIND_wsetscrreg_FUNCTION TRUE
 #define BIND_wstandend_FUNCTION TRUE
 #define BIND_wstandout_FUNCTION TRUE
 #define BIND_wsyncdown_FUNCTION TRUE
 #define BIND_wsyncup_FUNCTION TRUE
 #define BIND_wtimeout_FUNCTION TRUE
 #define BIND_wtouchln_FUNCTION TRUE

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

#include <stdlib.h>
#include <string.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "curses.h"
#include "panel.h"
#include "term.h"

/*
 * Class initialization function declarations
 * ------------------------------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

#if BIND_MEVENT_TYPE
void mrb_Curses_MEVENT_init(mrb_state* mrb);
#endif
#if BIND_MOUSESTATUS_TYPE
void mrb_Curses_MOUSESTATUS_init(mrb_state* mrb);
#endif
#if BIND_SCREEN_TYPE
void mrb_Curses_SCREEN_init(mrb_state* mrb);
#endif
#if BIND_Win_TYPE
void mrb_Curses_Win_init(mrb_state* mrb);
#endif
#if BIND_Panel_TYPE
void mrb_Curses_Panel_init(mrb_state* mrb);
#endif
#if BIND_Panelobs_TYPE
void mrb_Curses_Panelobs_init(mrb_state* mrb);
#endif
#if BIND_TERMINAL_TYPE
void mrb_Curses_TERMINAL_init(mrb_state* mrb);
#endif

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* (Either mruby, and it should be garage collected, or C, and it shouldn't be)
* Considered using the LSB of the pointer itself, but I don't think I can
* be assured that all memory is word-aligned (especially when C libraries
* implement their own memory management techniques like memory pools)
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby GC's the ruby object containing this pointer. This
   * is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object. This could
   * be a function pointer to invoke instead of `free` on GC,
   * a pointer back to the RObject, or even cast to an integer type
   * and used as a bit field. You get the idea...
   */
  void* data;
} mruby_to_native_ref;

#if BIND_MEVENT_TYPE
mrb_value
mruby_box_MEVENT(mrb_state* mrb, MEVENT *unboxed);

mrb_value
mruby_giftwrap_MEVENT(mrb_state* mrb, MEVENT *unboxed);

void
mruby_set_MEVENT_data_ptr(mrb_value obj, MEVENT *unboxed);

void
mruby_gift_MEVENT_data_ptr(mrb_value obj, MEVENT *unboxed);

MEVENT *
mruby_unbox_MEVENT(mrb_value boxed);
#endif

#if BIND_MOUSESTATUS_TYPE
mrb_value
mruby_box_MOUSE_STATUS(mrb_state* mrb, MOUSE_STATUS *unboxed);

mrb_value
mruby_giftwrap_MOUSE_STATUS(mrb_state* mrb, MOUSE_STATUS *unboxed);

void
mruby_set_MOUSE_STATUS_data_ptr(mrb_value obj, MOUSE_STATUS *unboxed);

void
mruby_gift_MOUSE_STATUS_data_ptr(mrb_value obj, MOUSE_STATUS *unboxed);

MOUSE_STATUS *
mruby_unbox_MOUSE_STATUS(mrb_value boxed);
#endif

#if BIND_SCREEN_TYPE
mrb_value
mruby_box_SCREEN(mrb_state* mrb, SCREEN *unboxed);

mrb_value
mruby_giftwrap_SCREEN(mrb_state* mrb, SCREEN *unboxed);

void
mruby_set_SCREEN_data_ptr(mrb_value obj, SCREEN *unboxed);

void
mruby_gift_SCREEN_data_ptr(mrb_value obj, SCREEN *unboxed);

SCREEN *
mruby_unbox_SCREEN(mrb_value boxed);
#endif

#if BIND_Win_TYPE
mrb_value
mruby_box__win(mrb_state* mrb, struct _win *unboxed);

mrb_value
mruby_giftwrap__win(mrb_state* mrb, struct _win *unboxed);

void
mruby_set__win_data_ptr(mrb_value obj, struct _win *unboxed);

void
mruby_gift__win_data_ptr(mrb_value obj, struct _win *unboxed);

struct _win *
mruby_unbox__win(mrb_value boxed);
#endif

#if BIND_Panel_TYPE
mrb_value
mruby_box_panel(mrb_state* mrb, struct panel *unboxed);

mrb_value
mruby_giftwrap_panel(mrb_state* mrb, struct panel *unboxed);

void
mruby_set_panel_data_ptr(mrb_value obj, struct panel *unboxed);

void
mruby_gift_panel_data_ptr(mrb_value obj, struct panel *unboxed);

struct panel *
mruby_unbox_panel(mrb_value boxed);
#endif

#if BIND_Panelobs_TYPE
mrb_value
mruby_box_panelobs(mrb_state* mrb, struct panelobs *unboxed);

mrb_value
mruby_giftwrap_panelobs(mrb_state* mrb, struct panelobs *unboxed);

void
mruby_set_panelobs_data_ptr(mrb_value obj, struct panelobs *unboxed);

void
mruby_gift_panelobs_data_ptr(mrb_value obj, struct panelobs *unboxed);

struct panelobs *
mruby_unbox_panelobs(mrb_value boxed);
#endif

#if BIND_TERMINAL_TYPE
mrb_value
mruby_box_TERMINAL(mrb_state* mrb, TERMINAL *unboxed);

mrb_value
mruby_giftwrap_TERMINAL(mrb_state* mrb, TERMINAL *unboxed);

void
mruby_set_TERMINAL_data_ptr(mrb_value obj, TERMINAL *unboxed);

void
mruby_gift_TERMINAL_data_ptr(mrb_value obj, TERMINAL *unboxed);

TERMINAL *
mruby_unbox_TERMINAL(mrb_value boxed);
#endif


/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_Curses_define_macro_constants(mrb_state* mrb);

#endif
