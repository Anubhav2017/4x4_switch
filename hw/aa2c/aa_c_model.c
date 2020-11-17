#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <aa_c_model_internal.h>
#include <aa_c_model.h>
FILE* __report_log_file__ = NULL;
int __trace_on__ = 0;
void _set_trace_file(FILE* fp) {
__report_log_file__ = fp;
}
bit_vector _ONE_1;
#define ONE_1 (_ONE_1)

bit_vector _ONE_2;
#define ONE_2 (_ONE_2)

bit_vector _ONE_3;
#define ONE_3 (_ONE_3)

bit_vector _ONE_33;
#define ONE_33 (_ONE_33)

bit_vector _ONE_8;
#define ONE_8 (_ONE_8)

bit_vector _ZERO_1;
#define ZERO_1 (_ZERO_1)

bit_vector _ZERO_2;
#define ZERO_2 (_ZERO_2)

bit_vector _ZERO_3;
#define ZERO_3 (_ZERO_3)

bit_vector _ZERO_33;
#define ZERO_33 (_ZERO_33)

bit_vector _ZERO_8;
#define ZERO_8 (_ZERO_8)

void __init_aa_globals__() 
{
init_static_bit_vector(&(ONE_1), 1);\
bit_vector_clear(&ONE_1);\
ONE_1.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_2), 2);\
bit_vector_clear(&ONE_2);\
ONE_2.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_3), 3);\
bit_vector_clear(&ONE_3);\
ONE_3.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_33), 33);\
bit_vector_clear(&ONE_33);\
ONE_33.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_8), 8);\
bit_vector_clear(&ONE_8);\
ONE_8.val.byte_array[0] = 1;\
init_static_bit_vector(&(ZERO_1), 1);\
bit_vector_clear(&ZERO_1);\
init_static_bit_vector(&(ZERO_2), 2);\
bit_vector_clear(&ZERO_2);\
init_static_bit_vector(&(ZERO_3), 3);\
bit_vector_clear(&ZERO_3);\
init_static_bit_vector(&(ZERO_33), 33);\
bit_vector_clear(&ZERO_33);\
init_static_bit_vector(&(ZERO_8), 8);\
bit_vector_clear(&ZERO_8);\
register_pipe("in_data_1", 2, 32, 0);\
register_pipe("in_data_2", 2, 32, 0);\
register_pipe("in_data_3", 2, 32, 0);\
register_pipe("in_data_4", 2, 32, 0);\
register_pipe("noblock_obuf_1_1", 640, 8, 2);\
register_pipe("noblock_obuf_1_2", 640, 8, 2);\
register_pipe("noblock_obuf_1_3", 640, 8, 2);\
register_pipe("noblock_obuf_1_4", 640, 8, 2);\
register_pipe("noblock_obuf_2_1", 640, 8, 2);\
register_pipe("noblock_obuf_2_2", 640, 8, 2);\
register_pipe("noblock_obuf_2_3", 640, 8, 2);\
register_pipe("noblock_obuf_2_4", 640, 8, 2);\
register_pipe("noblock_obuf_3_1", 640, 8, 2);\
register_pipe("noblock_obuf_3_2", 640, 8, 2);\
register_pipe("noblock_obuf_3_3", 640, 8, 2);\
register_pipe("noblock_obuf_3_4", 640, 8, 2);\
register_pipe("noblock_obuf_4_1", 640, 8, 2);\
register_pipe("noblock_obuf_4_2", 640, 8, 2);\
register_pipe("noblock_obuf_4_3", 640, 8, 2);\
register_pipe("noblock_obuf_4_4", 640, 8, 2);\
register_pipe("out_data_1", 2, 32, 0);\
register_pipe("out_data_2", 2, 32, 0);\
register_pipe("out_data_3", 2, 32, 0);\
register_pipe("out_data_4", 2, 32, 0);\
}
void _global_storage_initializer__()
{
MUTEX_DECL(_global_storage_initializer__series_block_stmt_60_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_60_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_60_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _inputPort_1_Daemon_()
{
MUTEX_DECL(_inputPort_1_Daemon_series_block_stmt_63_c_mutex_);
MUTEX_LOCK(_inputPort_1_Daemon_series_block_stmt_63_c_mutex_);
_inputPort_1_Daemon_inner_inarg_prep_macro__; 
_inputPort_1_Daemon_branch_block_stmt_64_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 73
__declare_static_bit_vector(konst_156,1);\
bit_vector_clear(&konst_156);\
konst_156.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 75
_inputPort_1_Daemon_merge_stmt_66_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_1_Daemon_phi_stmt_67_c_macro_; 
// 			$phi input_word := 			  in_data_1 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_1_Daemon_phi_stmt_73_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_1_Daemon_phi_stmt_76_c_macro_; 
_inputPort_1_Daemon_merge_stmt_66_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_85_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_89_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_93_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_97_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_1_Daemon_assign_stmt_107_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_1_Daemon_assign_stmt_113_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_1_Daemon_assign_stmt_118_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_123_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_1_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_127_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_132_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_1_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_136_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_141_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_1_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_145_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_150_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_1_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_154_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_156);\
konst_156.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_156)) break;
} 
}
_inputPort_1_Daemon_branch_block_stmt_64_c_export_apply_macro_;
}
_inputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_1_Daemon_series_block_stmt_63_c_mutex_);
}
void inputPort_1_Daemon()
{
_inputPort_1_Daemon_outer_arg_decl_macro__;
_inputPort_1_Daemon_();
_inputPort_1_Daemon_outer_op_xfer_macro__;
}


void _inputPort_2_Daemon_()
{
MUTEX_DECL(_inputPort_2_Daemon_series_block_stmt_159_c_mutex_);
MUTEX_LOCK(_inputPort_2_Daemon_series_block_stmt_159_c_mutex_);
_inputPort_2_Daemon_inner_inarg_prep_macro__; 
_inputPort_2_Daemon_branch_block_stmt_160_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 108
__declare_static_bit_vector(konst_251,1);\
bit_vector_clear(&konst_251);\
konst_251.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 110
_inputPort_2_Daemon_merge_stmt_162_c_preamble_macro_; 
// 			$phi count_down := 			  next_count_down $on   $loopback 			  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_inputPort_2_Daemon_phi_stmt_163_c_macro_; 
// 			$phi input_word := 			  in_data_2 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_2_Daemon_phi_stmt_168_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_2_Daemon_phi_stmt_171_c_macro_; 
_inputPort_2_Daemon_merge_stmt_162_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_180_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_184_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_188_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_192_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_2_Daemon_assign_stmt_202_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_2_Daemon_assign_stmt_208_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_2_Daemon_assign_stmt_213_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_218_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_2_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_222_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_227_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_2_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_231_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_236_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_2_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_240_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_245_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_2_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_249_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_251);\
konst_251.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_251)) break;
} 
}
_inputPort_2_Daemon_branch_block_stmt_160_c_export_apply_macro_;
}
_inputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_2_Daemon_series_block_stmt_159_c_mutex_);
}
void inputPort_2_Daemon()
{
_inputPort_2_Daemon_outer_arg_decl_macro__;
_inputPort_2_Daemon_();
_inputPort_2_Daemon_outer_op_xfer_macro__;
}


void _inputPort_3_Daemon_()
{
MUTEX_DECL(_inputPort_3_Daemon_series_block_stmt_254_c_mutex_);
MUTEX_LOCK(_inputPort_3_Daemon_series_block_stmt_254_c_mutex_);
_inputPort_3_Daemon_inner_inarg_prep_macro__; 
_inputPort_3_Daemon_branch_block_stmt_255_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 143
__declare_static_bit_vector(konst_346,1);\
bit_vector_clear(&konst_346);\
konst_346.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 145
_inputPort_3_Daemon_merge_stmt_257_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_3_Daemon_phi_stmt_258_c_macro_; 
// 			$phi input_word := 			  in_data_3 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_3_Daemon_phi_stmt_263_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_3_Daemon_phi_stmt_266_c_macro_; 
_inputPort_3_Daemon_merge_stmt_257_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_275_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_279_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_283_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_287_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_3_Daemon_assign_stmt_297_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_3_Daemon_assign_stmt_303_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_3_Daemon_assign_stmt_308_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_313_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_3_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_317_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_322_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_3_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_326_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_331_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_3_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_335_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_340_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_3_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_344_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_346);\
konst_346.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_346)) break;
} 
}
_inputPort_3_Daemon_branch_block_stmt_255_c_export_apply_macro_;
}
_inputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_3_Daemon_series_block_stmt_254_c_mutex_);
}
void inputPort_3_Daemon()
{
_inputPort_3_Daemon_outer_arg_decl_macro__;
_inputPort_3_Daemon_();
_inputPort_3_Daemon_outer_op_xfer_macro__;
}


void _inputPort_4_Daemon_()
{
MUTEX_DECL(_inputPort_4_Daemon_series_block_stmt_349_c_mutex_);
MUTEX_LOCK(_inputPort_4_Daemon_series_block_stmt_349_c_mutex_);
_inputPort_4_Daemon_inner_inarg_prep_macro__; 
_inputPort_4_Daemon_branch_block_stmt_350_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 178
__declare_static_bit_vector(konst_441,1);\
bit_vector_clear(&konst_441);\
konst_441.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 180
_inputPort_4_Daemon_merge_stmt_352_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_4_Daemon_phi_stmt_353_c_macro_; 
// 			$phi input_word := 			  in_data_4 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_4_Daemon_phi_stmt_358_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_4_Daemon_phi_stmt_361_c_macro_; 
_inputPort_4_Daemon_merge_stmt_352_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_370_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_374_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_378_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_382_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_4_Daemon_assign_stmt_392_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_4_Daemon_assign_stmt_398_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_4_Daemon_assign_stmt_403_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_408_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_4_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_412_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_417_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_4_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_421_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_426_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_4_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_430_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_435_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_4_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_439_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_441);\
konst_441.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_441)) break;
} 
}
_inputPort_4_Daemon_branch_block_stmt_350_c_export_apply_macro_;
}
_inputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_4_Daemon_series_block_stmt_349_c_mutex_);
}
void inputPort_4_Daemon()
{
_inputPort_4_Daemon_outer_arg_decl_macro__;
_inputPort_4_Daemon_();
_inputPort_4_Daemon_outer_op_xfer_macro__;
}


void _outputPort_1_Daemon_()
{
MUTEX_DECL(_outputPort_1_Daemon_series_block_stmt_657_c_mutex_);
MUTEX_LOCK(_outputPort_1_Daemon_series_block_stmt_657_c_mutex_);
_outputPort_1_Daemon_inner_inarg_prep_macro__; 
_outputPort_1_Daemon_branch_block_stmt_658_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 226
__declare_static_bit_vector(konst_876,1);\
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 228
_outputPort_1_Daemon_merge_stmt_660_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_1_Daemon_phi_stmt_661_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_665_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_670_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_675_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_680_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_685_c_macro_; 
// 			$phi pkt_priority := 			  ONE_3 $on   $entry 			  next_pkt_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_689_c_macro_; 
_outputPort_1_Daemon_merge_stmt_660_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_698_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_703_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_708_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_713_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_742_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_priority ) 
_outputPort_1_Daemon_call_stmt_752_c_macro_; 
// 			$volatile started_new_packet := (((p1_valid | p2_valid) | (p3_valid | p4_valid)) & (down_counter == 0 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_765_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_1_Daemon_assign_stmt_776_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_784_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_792_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_800_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_808_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_841_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_870_c_macro_; 
// 			$guard (send_flag) out_data_1 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_1_Daemon_assign_stmt_874_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_876)) break;
} 
}
_outputPort_1_Daemon_branch_block_stmt_658_c_export_apply_macro_;
}
_outputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_1_Daemon_series_block_stmt_657_c_mutex_);
}
void outputPort_1_Daemon()
{
_outputPort_1_Daemon_outer_arg_decl_macro__;
_outputPort_1_Daemon_();
_outputPort_1_Daemon_outer_op_xfer_macro__;
}


void _outputPort_2_Daemon_()
{
MUTEX_DECL(_outputPort_2_Daemon_series_block_stmt_879_c_mutex_);
MUTEX_LOCK(_outputPort_2_Daemon_series_block_stmt_879_c_mutex_);
_outputPort_2_Daemon_inner_inarg_prep_macro__; 
_outputPort_2_Daemon_branch_block_stmt_880_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 269
__declare_static_bit_vector(konst_1098,1);\
bit_vector_clear(&konst_1098);\
konst_1098.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 271
_outputPort_2_Daemon_merge_stmt_882_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_2_Daemon_phi_stmt_883_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_887_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_892_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_897_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_902_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_907_c_macro_; 
// 			$phi pkt_priority := 			  ONE_3 $on   $entry 			  next_pkt_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_911_c_macro_; 
_outputPort_2_Daemon_merge_stmt_882_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_920_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_925_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_930_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_935_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_964_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_priority ) 
_outputPort_2_Daemon_call_stmt_974_c_macro_; 
// 			$volatile started_new_packet := (((p1_valid | p2_valid) | (p3_valid | p4_valid)) & (down_counter == 0 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_987_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_2_Daemon_assign_stmt_998_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1006_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1014_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1022_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1030_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1063_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1092_c_macro_; 
// 			$guard (send_flag) out_data_2 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_2_Daemon_assign_stmt_1096_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1098);\
konst_1098.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1098)) break;
} 
}
_outputPort_2_Daemon_branch_block_stmt_880_c_export_apply_macro_;
}
_outputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_2_Daemon_series_block_stmt_879_c_mutex_);
}
void outputPort_2_Daemon()
{
_outputPort_2_Daemon_outer_arg_decl_macro__;
_outputPort_2_Daemon_();
_outputPort_2_Daemon_outer_op_xfer_macro__;
}


void _outputPort_3_Daemon_()
{
MUTEX_DECL(_outputPort_3_Daemon_series_block_stmt_1101_c_mutex_);
MUTEX_LOCK(_outputPort_3_Daemon_series_block_stmt_1101_c_mutex_);
_outputPort_3_Daemon_inner_inarg_prep_macro__; 
_outputPort_3_Daemon_branch_block_stmt_1102_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 312
__declare_static_bit_vector(konst_1320,1);\
bit_vector_clear(&konst_1320);\
konst_1320.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 314
_outputPort_3_Daemon_merge_stmt_1104_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_3_Daemon_phi_stmt_1105_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1109_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1114_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1119_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1124_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1129_c_macro_; 
// 			$phi pkt_priority := 			  ONE_3 $on   $entry 			  next_pkt_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1133_c_macro_; 
_outputPort_3_Daemon_merge_stmt_1104_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1142_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1147_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1152_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1157_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1186_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_priority ) 
_outputPort_3_Daemon_call_stmt_1196_c_macro_; 
// 			$volatile started_new_packet := (((p1_valid | p2_valid) | (p3_valid | p4_valid)) & (down_counter == 0 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1209_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_3_Daemon_assign_stmt_1220_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1228_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1236_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1244_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1252_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1285_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1314_c_macro_; 
// 			$guard (send_flag) out_data_3 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_3_Daemon_assign_stmt_1318_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1320);\
konst_1320.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1320)) break;
} 
}
_outputPort_3_Daemon_branch_block_stmt_1102_c_export_apply_macro_;
}
_outputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_3_Daemon_series_block_stmt_1101_c_mutex_);
}
void outputPort_3_Daemon()
{
_outputPort_3_Daemon_outer_arg_decl_macro__;
_outputPort_3_Daemon_();
_outputPort_3_Daemon_outer_op_xfer_macro__;
}


void _outputPort_4_Daemon_()
{
MUTEX_DECL(_outputPort_4_Daemon_series_block_stmt_1323_c_mutex_);
MUTEX_LOCK(_outputPort_4_Daemon_series_block_stmt_1323_c_mutex_);
_outputPort_4_Daemon_inner_inarg_prep_macro__; 
_outputPort_4_Daemon_branch_block_stmt_1324_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 355
__declare_static_bit_vector(konst_1542,1);\
bit_vector_clear(&konst_1542);\
konst_1542.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 357
_outputPort_4_Daemon_merge_stmt_1326_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_4_Daemon_phi_stmt_1327_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1331_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1336_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1341_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1346_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1351_c_macro_; 
// 			$phi pkt_priority := 			  ONE_3 $on   $entry 			  next_pkt_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1355_c_macro_; 
_outputPort_4_Daemon_merge_stmt_1326_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1364_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1369_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1374_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1379_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1408_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_priority ) 
_outputPort_4_Daemon_call_stmt_1418_c_macro_; 
// 			$volatile started_new_packet := (((p1_valid | p2_valid) | (p3_valid | p4_valid)) & (down_counter == 0 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1431_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_4_Daemon_assign_stmt_1442_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1450_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1458_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1466_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1474_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1507_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1536_c_macro_; 
// 			$guard (send_flag) out_data_4 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_4_Daemon_assign_stmt_1540_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1542);\
konst_1542.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1542)) break;
} 
}
_outputPort_4_Daemon_branch_block_stmt_1324_c_export_apply_macro_;
}
_outputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_4_Daemon_series_block_stmt_1323_c_mutex_);
}
void outputPort_4_Daemon()
{
_outputPort_4_Daemon_outer_arg_decl_macro__;
_outputPort_4_Daemon_();
_outputPort_4_Daemon_outer_op_xfer_macro__;
}


void _prioritySelect_(bit_vector* __pdown_counter, bit_vector* __pactive_packet, bit_vector* __ppkt_priority, bit_vector* __pp1_valid, bit_vector* __pp2_valid, bit_vector* __pp3_valid, bit_vector* __pp4_valid, bit_vector*  __pnext_active_packet, bit_vector*  __pnext_pkt_priority)
{
MUTEX_DECL(_prioritySelect_series_block_stmt_444_c_mutex_);
MUTEX_LOCK(_prioritySelect_series_block_stmt_444_c_mutex_);
_prioritySelect_inner_inarg_prep_macro__; 
// 	d0 := (down_counter == 0 ) $buffering 1
_prioritySelect_assign_stmt_458_c_macro_; 
// 	select_1 := ((d0 & p1_valid) & (((pkt_priority == 1 ) | ((( ~ p4_valid ) & ( ~ p2_valid )) & ( ~ p3_valid ))) | ((((pkt_priority == 3 ) & ( ~ p3_valid )) & ( ~ p4_valid )) | ((pkt_priority == 4 ) & ( ~ p4_valid ))))) $buffering 1
_prioritySelect_assign_stmt_493_c_macro_; 
// 	select_2 := ((d0 & p2_valid) & (((pkt_priority == 2 ) | ((( ~ p4_valid ) & ( ~ p1_valid )) & ( ~ p3_valid ))) | ((((pkt_priority == 4 ) & ( ~ p4_valid )) & ( ~ p1_valid )) | ((pkt_priority == 1 ) & ( ~ p1_valid ))))) $buffering 1
_prioritySelect_assign_stmt_528_c_macro_; 
// 	select_3 := ((d0 & p3_valid) & (((pkt_priority == 3 ) | ((( ~ p4_valid ) & ( ~ p2_valid )) & ( ~ p1_valid ))) | ((((pkt_priority == 1 ) & ( ~ p1_valid )) & ( ~ p2_valid )) | ((pkt_priority == 2 ) & ( ~ p2_valid ))))) $buffering 1
_prioritySelect_assign_stmt_563_c_macro_; 
// 	select_4 := ((d0 & p4_valid) & (((pkt_priority == 4 ) | ((( ~ p1_valid ) & ( ~ p2_valid )) & ( ~ p3_valid ))) | ((((pkt_priority == 2 ) & ( ~ p2_valid )) & ( ~ p3_valid )) | ((pkt_priority == 3 ) & ( ~ p3_valid ))))) $buffering 1
_prioritySelect_assign_stmt_598_c_macro_; 
// 	next_active_packet := (((( $mux ( ~ d0 ) active_packet  _b0  )  | ( $mux select_1 1   _b0  ) ) | ( $mux select_2 2   _b0  ) ) | ((( $mux select_3 3   _b0  )  | ( $mux select_4 4   _b0  ) ) | ( $mux ((( ~ select_1 ) & ( ~ select_2 )) & (( ~ select_3 ) & ( ~ select_4 ))) active_packet  _b0  ) )) $buffering 1
_prioritySelect_assign_stmt_640_c_macro_; 
// 	next_pkt_priority := ( $mux select_1 2   ( $mux select_2 3   ( $mux select_3 4   ( $mux select_4 1   pkt_priority )  )  )  )  $buffering 1
_prioritySelect_assign_stmt_655_c_macro_; 
_prioritySelect_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_prioritySelect_series_block_stmt_444_c_mutex_);
}
DEFINE_THREAD(inputPort_1_Daemon);
PTHREAD_DECL(inputPort_1_Daemon);
DEFINE_THREAD(inputPort_2_Daemon);
PTHREAD_DECL(inputPort_2_Daemon);
DEFINE_THREAD(inputPort_3_Daemon);
PTHREAD_DECL(inputPort_3_Daemon);
DEFINE_THREAD(inputPort_4_Daemon);
PTHREAD_DECL(inputPort_4_Daemon);
DEFINE_THREAD(outputPort_1_Daemon);
PTHREAD_DECL(outputPort_1_Daemon);
DEFINE_THREAD(outputPort_2_Daemon);
PTHREAD_DECL(outputPort_2_Daemon);
DEFINE_THREAD(outputPort_3_Daemon);
PTHREAD_DECL(outputPort_3_Daemon);
DEFINE_THREAD(outputPort_4_Daemon);
PTHREAD_DECL(outputPort_4_Daemon);
void start_daemons(FILE* fp, int trace_on) {
__report_log_file__ = fp;
__trace_on__ = trace_on;
__init_aa_globals__(); 
PTHREAD_CREATE(inputPort_1_Daemon);
PTHREAD_CREATE(inputPort_2_Daemon);
PTHREAD_CREATE(inputPort_3_Daemon);
PTHREAD_CREATE(inputPort_4_Daemon);
PTHREAD_CREATE(outputPort_1_Daemon);
PTHREAD_CREATE(outputPort_2_Daemon);
PTHREAD_CREATE(outputPort_3_Daemon);
PTHREAD_CREATE(outputPort_4_Daemon);
}
void stop_daemons() {
PTHREAD_CANCEL(inputPort_1_Daemon);
PTHREAD_CANCEL(inputPort_2_Daemon);
PTHREAD_CANCEL(inputPort_3_Daemon);
PTHREAD_CANCEL(inputPort_4_Daemon);
PTHREAD_CANCEL(outputPort_1_Daemon);
PTHREAD_CANCEL(outputPort_2_Daemon);
PTHREAD_CANCEL(outputPort_3_Daemon);
PTHREAD_CANCEL(outputPort_4_Daemon);
}
