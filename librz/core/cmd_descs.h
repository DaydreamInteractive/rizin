// SPDX-License-Identifier: LGPL-3.0-only
//
// WARNING: This file was auto-generated by cmd_descs_generate.py script. Do not
// modify it manually. Look at cmd_descs.yaml if you want to update commands.
//

#include <rz_cmd.h>
#include <rz_core.h>
#include <rz_util.h>

// Command handlers, manually defined somewhere else
RZ_IPI int rz_cmd_system(void *data, const char *input);
RZ_IPI RzCmdStatus rz_last_output_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_hash_bang_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_alias(void *data, const char *input);
RZ_IPI RzCmdStatus rz_env_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_tasks_transient_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_output_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_break_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_delete_all_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_tasks_wait_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_macro(void *data, const char *input);
RZ_IPI RzCmdStatus rz_pointer_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_stdin(void *data, const char *input);
RZ_IPI RzCmdStatus rz_interpret_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_script_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_repeat_forward_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_output_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_editor_2_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_pipe_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_system_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_interpret_macro_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_search(void *data, const char *input);
RZ_IPI RzCmdStatus rz_remote_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_send_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_io_system_run_oldhandler(void *data, const char *input);
RZ_IPI RzCmdStatus rz_remote_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_del_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_open_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_mode_enable_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_mode_disable_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_rap_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_equal_g_handler_old(void *data, const char *input);
RZ_IPI int rz_equal_h_handler_old(void *data, const char *input);
RZ_IPI int rz_equal_H_handler_old(void *data, const char *input);
RZ_IPI RzCmdStatus rz_remote_tcp_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_remote_rap_bg_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_cmd_help_search_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI int rz_cmd_help(void *data, const char *input);
RZ_IPI RzCmdStatus rz_push_escaped_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_ox(void *data, const char *input);
RZ_IPI int rz_cmd_analysis(void *data, const char *input);
RZ_IPI int rz_cmd_bsize(void *data, const char *input);
RZ_IPI int rz_cmd_cmp(void *data, const char *input);
RZ_IPI int rz_cmd_meta(void *data, const char *input);
RZ_IPI int rz_debug_continue_oldhandler(void *data, const char *input);
RZ_IPI int rz_cmd_debug(void *data, const char *input);
RZ_IPI RzCmdStatus rz_eval_getset_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_list_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_eval_reset_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_bool_invert_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_eval_color(void *data, const char *input);
RZ_IPI RzCmdStatus rz_eval_editor_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_readonly_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_spaces_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_eval_type_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_env_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_flag(void *data, const char *input);
RZ_IPI int rz_cmd_egg(void *data, const char *input);
RZ_IPI int rz_cmd_info(void *data, const char *input);
RZ_IPI int rz_cmd_kuery(void *data, const char *input);
RZ_IPI RzCmdStatus rz_ls_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_m(void *data, const char *input);
RZ_IPI int rz_cmd_plugins(void *data, const char *input);
RZ_IPI int rz_cmd_open(void *data, const char *input);
RZ_IPI int rz_cmd_print(void *data, const char *input);
RZ_IPI RzCmdStatus rz_project_save_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_project_open_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_project_open_no_bin_io_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_quit(void *data, const char *input);
RZ_IPI int rz_cmd_resize(void *data, const char *input);
RZ_IPI RzCmdStatus rz_seek_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_padded_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_base_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_delta_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_blocksize_backward_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_blocksize_forward_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_history_list_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_seek_redo_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_undo_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_undo_reset_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_seek_search(void *data, const char *input);
RZ_IPI RzCmdStatus rz_seek_asz_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_basicblock_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_function_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_function_current_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_begin_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_end_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_next_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_prev_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_opcode_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_seek_register_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_sleep_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_type(void *data, const char *input);
RZ_IPI RzCmdStatus rz_uniq_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_uname_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_cmd_visual(void *data, const char *input);
RZ_IPI int rz_cmd_panels(void *data, const char *input);
RZ_IPI RzCmdStatus rz_write_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_bits_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_unset_bits_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value1_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value2_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value4_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_value8_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_zero_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_1_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_1_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_2_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_2_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_4_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_4_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_8_inc_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_8_dec_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_base64_decode_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_write_base64_encode_handler(RzCore *core, int argc, const char **argv);
RZ_IPI int rz_wh_handler_old(void *data, const char *input);
RZ_IPI int rz_we_handler_old(void *data, const char *input);
RZ_IPI int rz_wu_handler_old(void *data, const char *input);
RZ_IPI int rz_wr_handler_old(void *data, const char *input);
RZ_IPI int rz_wA_handler_old(void *data, const char *input);
RZ_IPI int rz_wc_handler_old(void *data, const char *input);
RZ_IPI int rz_wz_handler_old(void *data, const char *input);
RZ_IPI int rz_wt_handler_old(void *data, const char *input);
RZ_IPI int rz_wf_handler_old(void *data, const char *input);
RZ_IPI int rz_ww_handler_old(void *data, const char *input);
RZ_IPI int rz_wx_handler_old(void *data, const char *input);
RZ_IPI int rz_wa_handler_old(void *data, const char *input);
RZ_IPI int rz_wb_handler_old(void *data, const char *input);
RZ_IPI int rz_wm_handler_old(void *data, const char *input);
RZ_IPI int rz_wo_handler_old(void *data, const char *input);
RZ_IPI int rz_wd_handler_old(void *data, const char *input);
RZ_IPI int rz_ws_handler_old(void *data, const char *input);
RZ_IPI int rz_cmd_hexdump(void *data, const char *input);
RZ_IPI int rz_cmd_yank(void *data, const char *input);
RZ_IPI RzCmdStatus rz_zign_show_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_find_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_best_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_best_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_add_fcn_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_add_all_fcns_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_generate_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_load_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_save_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_load_gzip_sdb_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_flirt_dump_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_flirt_scan_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_search_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_search_fcn_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_cmp_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_cmp_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_cmp_diff_name_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_space_select_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_space_delete_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_space_add_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_space_rename_handler(RzCore *core, int argc, const char **argv);
RZ_IPI RzCmdStatus rz_zign_info_handler(RzCore *core, int argc, const char **argv, RzOutputMode mode);
RZ_IPI RzCmdStatus rz_zign_info_range_handler(RzCore *core, int argc, const char **argv);

// Main function that initialize the entire commands tree
RZ_IPI void newshell_cmddescs_init(RzCore *core);
