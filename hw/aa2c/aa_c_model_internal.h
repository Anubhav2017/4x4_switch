#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define _global_storage_initializer__inner_inarg_prep_macro__ 
#define _global_storage_initializer__inner_outarg_prep_macro__ ;

#define _global_storage_initializer__outer_arg_decl_macro__ ;

#define _global_storage_initializer__outer_op_xfer_macro__ ;

#define _inputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_1_Daemon_branch_block_stmt_64_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_1_Daemon_merge_stmt_66_c_preamble_macro_ uint8_t merge_stmt_66_entry_flag;\
merge_stmt_66_entry_flag = do_while_entry_flag;\
goto merge_stmt_66_run;\
merge_stmt_66_run: ;\

#define _inputPort_1_Daemon_phi_stmt_67_c_macro_ __declare_static_bit_vector(konst_71,16);\
bit_vector_clear(&konst_71);\
__declare_static_bit_vector(type_cast_72,16);\
bit_vector_clear(&type_cast_72);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_71,16);\
bit_vector_clear(&konst_71);\
__declare_static_bit_vector(type_cast_72,16);\
bit_vector_clear(&type_cast_72);\
bit_vector_clear(&konst_71);\
bit_vector_bitcast_to_bit_vector( &(type_cast_72), &(konst_71));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_72));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_73_c_macro_ __declare_static_bit_vector(RPIPE_in_data_1_75,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_75));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_75));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_1_75,32);\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_75));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_75));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_76_c_macro_ __declare_static_bit_vector(konst_78,8);\
bit_vector_clear(&konst_78);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_78,8);\
bit_vector_clear(&konst_78);\
bit_vector_clear(&konst_78);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_78));\
}\
;
;

#define _inputPort_1_Daemon_merge_stmt_66_c_postamble_macro_ merge_stmt_66_entry_flag = 0;

#define _inputPort_1_Daemon_assign_stmt_85_c_macro_ __declare_static_bit_vector(konst_83,16);\
bit_vector_clear(&konst_83);\
__declare_static_bit_vector(EQ_u16_u1_84,1);\
bit_vector_clear(&konst_83);\
bit_vector_equal(0, &(count_down), &(konst_83), &(EQ_u16_u1_84));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_84));\
;

#define _inputPort_1_Daemon_assign_stmt_89_c_macro_ __declare_static_bit_vector(slice_88,8);\
bit_vector_slice(&(input_word), &(slice_88), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_88));\
;

#define _inputPort_1_Daemon_assign_stmt_93_c_macro_ __declare_static_bit_vector(slice_92,16);\
bit_vector_slice(&(input_word), &(slice_92), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_92));\
;

#define _inputPort_1_Daemon_assign_stmt_97_c_macro_ __declare_static_bit_vector(slice_96,8);\
bit_vector_slice(&(input_word), &(slice_96), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_96));\
;

#define _inputPort_1_Daemon_assign_stmt_107_c_macro_ __declare_static_bit_vector(konst_101,16);\
bit_vector_clear(&konst_101);\
konst_101.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_102,16);\
__declare_static_bit_vector(konst_104,16);\
bit_vector_clear(&konst_104);\
konst_104.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_105,16);\
__declare_static_bit_vector(MUX_106,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_101);\
konst_101.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_101), &(SUB_u16_u16_102));\
bit_vector_cast_to_bit_vector(0, &(MUX_106), &(SUB_u16_u16_102));\
}else {bit_vector_clear(&konst_104);\
konst_104.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_104), &(SUB_u16_u16_105));\
bit_vector_cast_to_bit_vector(0, &(MUX_106), &(SUB_u16_u16_105));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_106));\
;

#define _inputPort_1_Daemon_assign_stmt_113_c_macro_ __declare_static_bit_vector(MUX_112,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_112), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_112), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_112));\
;

#define _inputPort_1_Daemon_assign_stmt_118_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_117,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_117));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_117));\
;

#define _inputPort_1_Daemon_assign_stmt_123_c_macro_ __declare_static_bit_vector(konst_121,8);\
bit_vector_clear(&konst_121);\
konst_121.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_122,1);\
bit_vector_clear(&konst_121);\
konst_121.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_121), &(EQ_u8_u1_122));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_122));\
;

#define _inputPort_1_Daemon_assign_stmt_127_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_1_1",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_132_c_macro_ __declare_static_bit_vector(konst_130,8);\
bit_vector_clear(&konst_130);\
konst_130.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_131,1);\
bit_vector_clear(&konst_130);\
konst_130.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_130), &(EQ_u8_u1_131));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_131));\
;

#define _inputPort_1_Daemon_assign_stmt_136_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_1_2",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_141_c_macro_ __declare_static_bit_vector(konst_139,8);\
bit_vector_clear(&konst_139);\
konst_139.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_140,1);\
bit_vector_clear(&konst_139);\
konst_139.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_139), &(EQ_u8_u1_140));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_140));\
;

#define _inputPort_1_Daemon_assign_stmt_145_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_1_3",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_150_c_macro_ __declare_static_bit_vector(konst_148,8);\
bit_vector_clear(&konst_148);\
konst_148.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_149,1);\
bit_vector_clear(&konst_148);\
konst_148.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_148), &(EQ_u8_u1_149));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_149));\
;

#define _inputPort_1_Daemon_assign_stmt_154_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_1_4",&(data_to_outport));\
}
;
;

#define _inputPort_1_Daemon_branch_block_stmt_64_c_export_apply_macro_ ;

#define _inputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_2_Daemon_branch_block_stmt_160_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_2_Daemon_merge_stmt_162_c_preamble_macro_ uint8_t merge_stmt_162_entry_flag;\
merge_stmt_162_entry_flag = do_while_entry_flag;\
goto merge_stmt_162_run;\
merge_stmt_162_run: ;\

#define _inputPort_2_Daemon_phi_stmt_163_c_macro_ __declare_static_bit_vector(konst_165,16);\
bit_vector_clear(&konst_165);\
__declare_static_bit_vector(type_cast_166,16);\
bit_vector_clear(&type_cast_166);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_165,16);\
bit_vector_clear(&konst_165);\
__declare_static_bit_vector(type_cast_166,16);\
bit_vector_clear(&type_cast_166);\
bit_vector_clear(&konst_165);\
bit_vector_bitcast_to_bit_vector( &(type_cast_166), &(konst_165));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_166));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_168_c_macro_ __declare_static_bit_vector(RPIPE_in_data_2_170,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_170));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_170));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_2_170,32);\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_170));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_170));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_171_c_macro_ __declare_static_bit_vector(konst_173,8);\
bit_vector_clear(&konst_173);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_173,8);\
bit_vector_clear(&konst_173);\
bit_vector_clear(&konst_173);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_173));\
}\
;
;

#define _inputPort_2_Daemon_merge_stmt_162_c_postamble_macro_ merge_stmt_162_entry_flag = 0;

#define _inputPort_2_Daemon_assign_stmt_180_c_macro_ __declare_static_bit_vector(konst_178,16);\
bit_vector_clear(&konst_178);\
__declare_static_bit_vector(EQ_u16_u1_179,1);\
bit_vector_clear(&konst_178);\
bit_vector_equal(0, &(count_down), &(konst_178), &(EQ_u16_u1_179));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_179));\
;

#define _inputPort_2_Daemon_assign_stmt_184_c_macro_ __declare_static_bit_vector(slice_183,8);\
bit_vector_slice(&(input_word), &(slice_183), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_183));\
;

#define _inputPort_2_Daemon_assign_stmt_188_c_macro_ __declare_static_bit_vector(slice_187,16);\
bit_vector_slice(&(input_word), &(slice_187), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_187));\
;

#define _inputPort_2_Daemon_assign_stmt_192_c_macro_ __declare_static_bit_vector(slice_191,8);\
bit_vector_slice(&(input_word), &(slice_191), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_191));\
;

#define _inputPort_2_Daemon_assign_stmt_202_c_macro_ __declare_static_bit_vector(konst_196,16);\
bit_vector_clear(&konst_196);\
konst_196.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_197,16);\
__declare_static_bit_vector(konst_199,16);\
bit_vector_clear(&konst_199);\
konst_199.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_200,16);\
__declare_static_bit_vector(MUX_201,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_196);\
konst_196.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_196), &(SUB_u16_u16_197));\
bit_vector_cast_to_bit_vector(0, &(MUX_201), &(SUB_u16_u16_197));\
}else {bit_vector_clear(&konst_199);\
konst_199.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_199), &(SUB_u16_u16_200));\
bit_vector_cast_to_bit_vector(0, &(MUX_201), &(SUB_u16_u16_200));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_201));\
;

#define _inputPort_2_Daemon_assign_stmt_208_c_macro_ __declare_static_bit_vector(MUX_207,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_207), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_207), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_207));\
;

#define _inputPort_2_Daemon_assign_stmt_213_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_212,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_212));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_212));\
;

#define _inputPort_2_Daemon_assign_stmt_218_c_macro_ __declare_static_bit_vector(konst_216,8);\
bit_vector_clear(&konst_216);\
konst_216.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_217,1);\
bit_vector_clear(&konst_216);\
konst_216.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_216), &(EQ_u8_u1_217));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_217));\
;

#define _inputPort_2_Daemon_assign_stmt_222_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_2_1",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_227_c_macro_ __declare_static_bit_vector(konst_225,8);\
bit_vector_clear(&konst_225);\
konst_225.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_226,1);\
bit_vector_clear(&konst_225);\
konst_225.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_225), &(EQ_u8_u1_226));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_226));\
;

#define _inputPort_2_Daemon_assign_stmt_231_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_2_2",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_236_c_macro_ __declare_static_bit_vector(konst_234,8);\
bit_vector_clear(&konst_234);\
konst_234.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_235,1);\
bit_vector_clear(&konst_234);\
konst_234.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_234), &(EQ_u8_u1_235));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_235));\
;

#define _inputPort_2_Daemon_assign_stmt_240_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_2_3",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_245_c_macro_ __declare_static_bit_vector(konst_243,8);\
bit_vector_clear(&konst_243);\
konst_243.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_244,1);\
bit_vector_clear(&konst_243);\
konst_243.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_243), &(EQ_u8_u1_244));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_244));\
;

#define _inputPort_2_Daemon_assign_stmt_249_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_2_4",&(data_to_outport));\
}
;
;

#define _inputPort_2_Daemon_branch_block_stmt_160_c_export_apply_macro_ ;

#define _inputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_3_Daemon_branch_block_stmt_255_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_3_Daemon_merge_stmt_257_c_preamble_macro_ uint8_t merge_stmt_257_entry_flag;\
merge_stmt_257_entry_flag = do_while_entry_flag;\
goto merge_stmt_257_run;\
merge_stmt_257_run: ;\

#define _inputPort_3_Daemon_phi_stmt_258_c_macro_ __declare_static_bit_vector(konst_260,16);\
bit_vector_clear(&konst_260);\
__declare_static_bit_vector(type_cast_261,16);\
bit_vector_clear(&type_cast_261);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_260,16);\
bit_vector_clear(&konst_260);\
__declare_static_bit_vector(type_cast_261,16);\
bit_vector_clear(&type_cast_261);\
bit_vector_clear(&konst_260);\
bit_vector_bitcast_to_bit_vector( &(type_cast_261), &(konst_260));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_261));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_263_c_macro_ __declare_static_bit_vector(RPIPE_in_data_3_265,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_265));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_265));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_3_265,32);\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_265));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_265));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_266_c_macro_ __declare_static_bit_vector(konst_268,8);\
bit_vector_clear(&konst_268);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_268,8);\
bit_vector_clear(&konst_268);\
bit_vector_clear(&konst_268);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_268));\
}\
;
;

#define _inputPort_3_Daemon_merge_stmt_257_c_postamble_macro_ merge_stmt_257_entry_flag = 0;

#define _inputPort_3_Daemon_assign_stmt_275_c_macro_ __declare_static_bit_vector(konst_273,16);\
bit_vector_clear(&konst_273);\
__declare_static_bit_vector(EQ_u16_u1_274,1);\
bit_vector_clear(&konst_273);\
bit_vector_equal(0, &(count_down), &(konst_273), &(EQ_u16_u1_274));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_274));\
;

#define _inputPort_3_Daemon_assign_stmt_279_c_macro_ __declare_static_bit_vector(slice_278,8);\
bit_vector_slice(&(input_word), &(slice_278), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_278));\
;

#define _inputPort_3_Daemon_assign_stmt_283_c_macro_ __declare_static_bit_vector(slice_282,16);\
bit_vector_slice(&(input_word), &(slice_282), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_282));\
;

#define _inputPort_3_Daemon_assign_stmt_287_c_macro_ __declare_static_bit_vector(slice_286,8);\
bit_vector_slice(&(input_word), &(slice_286), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_286));\
;

#define _inputPort_3_Daemon_assign_stmt_297_c_macro_ __declare_static_bit_vector(konst_291,16);\
bit_vector_clear(&konst_291);\
konst_291.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_292,16);\
__declare_static_bit_vector(konst_294,16);\
bit_vector_clear(&konst_294);\
konst_294.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_295,16);\
__declare_static_bit_vector(MUX_296,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_291);\
konst_291.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_291), &(SUB_u16_u16_292));\
bit_vector_cast_to_bit_vector(0, &(MUX_296), &(SUB_u16_u16_292));\
}else {bit_vector_clear(&konst_294);\
konst_294.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_294), &(SUB_u16_u16_295));\
bit_vector_cast_to_bit_vector(0, &(MUX_296), &(SUB_u16_u16_295));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_296));\
;

#define _inputPort_3_Daemon_assign_stmt_303_c_macro_ __declare_static_bit_vector(MUX_302,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_302), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_302), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_302));\
;

#define _inputPort_3_Daemon_assign_stmt_308_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_307,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_307));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_307));\
;

#define _inputPort_3_Daemon_assign_stmt_313_c_macro_ __declare_static_bit_vector(konst_311,8);\
bit_vector_clear(&konst_311);\
konst_311.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_312,1);\
bit_vector_clear(&konst_311);\
konst_311.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_311), &(EQ_u8_u1_312));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_312));\
;

#define _inputPort_3_Daemon_assign_stmt_317_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_3_1",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_322_c_macro_ __declare_static_bit_vector(konst_320,8);\
bit_vector_clear(&konst_320);\
konst_320.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_321,1);\
bit_vector_clear(&konst_320);\
konst_320.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_320), &(EQ_u8_u1_321));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_321));\
;

#define _inputPort_3_Daemon_assign_stmt_326_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_3_2",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_331_c_macro_ __declare_static_bit_vector(konst_329,8);\
bit_vector_clear(&konst_329);\
konst_329.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_330,1);\
bit_vector_clear(&konst_329);\
konst_329.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_329), &(EQ_u8_u1_330));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_330));\
;

#define _inputPort_3_Daemon_assign_stmt_335_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_3_3",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_340_c_macro_ __declare_static_bit_vector(konst_338,8);\
bit_vector_clear(&konst_338);\
konst_338.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_339,1);\
bit_vector_clear(&konst_338);\
konst_338.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_338), &(EQ_u8_u1_339));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_339));\
;

#define _inputPort_3_Daemon_assign_stmt_344_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_3_4",&(data_to_outport));\
}
;
;

#define _inputPort_3_Daemon_branch_block_stmt_255_c_export_apply_macro_ ;

#define _inputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_4_Daemon_branch_block_stmt_350_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_4_Daemon_merge_stmt_352_c_preamble_macro_ uint8_t merge_stmt_352_entry_flag;\
merge_stmt_352_entry_flag = do_while_entry_flag;\
goto merge_stmt_352_run;\
merge_stmt_352_run: ;\

#define _inputPort_4_Daemon_phi_stmt_353_c_macro_ __declare_static_bit_vector(konst_355,16);\
bit_vector_clear(&konst_355);\
__declare_static_bit_vector(type_cast_356,16);\
bit_vector_clear(&type_cast_356);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_355,16);\
bit_vector_clear(&konst_355);\
__declare_static_bit_vector(type_cast_356,16);\
bit_vector_clear(&type_cast_356);\
bit_vector_clear(&konst_355);\
bit_vector_bitcast_to_bit_vector( &(type_cast_356), &(konst_355));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_356));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_358_c_macro_ __declare_static_bit_vector(RPIPE_in_data_4_360,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_360));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_360));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_4_360,32);\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_360));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_360));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_361_c_macro_ __declare_static_bit_vector(konst_363,8);\
bit_vector_clear(&konst_363);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_363,8);\
bit_vector_clear(&konst_363);\
bit_vector_clear(&konst_363);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_363));\
}\
;
;

#define _inputPort_4_Daemon_merge_stmt_352_c_postamble_macro_ merge_stmt_352_entry_flag = 0;

#define _inputPort_4_Daemon_assign_stmt_370_c_macro_ __declare_static_bit_vector(konst_368,16);\
bit_vector_clear(&konst_368);\
__declare_static_bit_vector(EQ_u16_u1_369,1);\
bit_vector_clear(&konst_368);\
bit_vector_equal(0, &(count_down), &(konst_368), &(EQ_u16_u1_369));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_369));\
;

#define _inputPort_4_Daemon_assign_stmt_374_c_macro_ __declare_static_bit_vector(slice_373,8);\
bit_vector_slice(&(input_word), &(slice_373), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_373));\
;

#define _inputPort_4_Daemon_assign_stmt_378_c_macro_ __declare_static_bit_vector(slice_377,16);\
bit_vector_slice(&(input_word), &(slice_377), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_377));\
;

#define _inputPort_4_Daemon_assign_stmt_382_c_macro_ __declare_static_bit_vector(slice_381,8);\
bit_vector_slice(&(input_word), &(slice_381), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_381));\
;

#define _inputPort_4_Daemon_assign_stmt_392_c_macro_ __declare_static_bit_vector(konst_386,16);\
bit_vector_clear(&konst_386);\
konst_386.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_387,16);\
__declare_static_bit_vector(konst_389,16);\
bit_vector_clear(&konst_389);\
konst_389.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_390,16);\
__declare_static_bit_vector(MUX_391,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_386);\
konst_386.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_386), &(SUB_u16_u16_387));\
bit_vector_cast_to_bit_vector(0, &(MUX_391), &(SUB_u16_u16_387));\
}else {bit_vector_clear(&konst_389);\
konst_389.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_389), &(SUB_u16_u16_390));\
bit_vector_cast_to_bit_vector(0, &(MUX_391), &(SUB_u16_u16_390));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_391));\
;

#define _inputPort_4_Daemon_assign_stmt_398_c_macro_ __declare_static_bit_vector(MUX_397,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_397), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_397), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_397));\
;

#define _inputPort_4_Daemon_assign_stmt_403_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_402,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_402));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_402));\
;

#define _inputPort_4_Daemon_assign_stmt_408_c_macro_ __declare_static_bit_vector(konst_406,8);\
bit_vector_clear(&konst_406);\
konst_406.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_407,1);\
bit_vector_clear(&konst_406);\
konst_406.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_406), &(EQ_u8_u1_407));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_407));\
;

#define _inputPort_4_Daemon_assign_stmt_412_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_4_1",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_417_c_macro_ __declare_static_bit_vector(konst_415,8);\
bit_vector_clear(&konst_415);\
konst_415.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_416,1);\
bit_vector_clear(&konst_415);\
konst_415.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_415), &(EQ_u8_u1_416));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_416));\
;

#define _inputPort_4_Daemon_assign_stmt_421_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_4_2",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_426_c_macro_ __declare_static_bit_vector(konst_424,8);\
bit_vector_clear(&konst_424);\
konst_424.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_425,1);\
bit_vector_clear(&konst_424);\
konst_424.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_424), &(EQ_u8_u1_425));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_425));\
;

#define _inputPort_4_Daemon_assign_stmt_430_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_4_3",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_435_c_macro_ __declare_static_bit_vector(konst_433,8);\
bit_vector_clear(&konst_433);\
konst_433.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_434,1);\
bit_vector_clear(&konst_433);\
konst_433.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_433), &(EQ_u8_u1_434));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_434));\
;

#define _inputPort_4_Daemon_assign_stmt_439_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_4_4",&(data_to_outport));\
}
;
;

#define _inputPort_4_Daemon_branch_block_stmt_350_c_export_apply_macro_ ;

#define _inputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_1_Daemon_branch_block_stmt_670_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(pkt_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_priority,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_1_Daemon_merge_stmt_672_c_preamble_macro_ uint8_t merge_stmt_672_entry_flag;\
merge_stmt_672_entry_flag = do_while_entry_flag;\
goto merge_stmt_672_run;\
merge_stmt_672_run: ;\

#define _outputPort_1_Daemon_phi_stmt_673_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_677_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_1_681,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_1",&(RPIPE_noblock_obuf_1_1_681));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_1_681));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_682_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_1_686,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_1",&(RPIPE_noblock_obuf_2_1_686));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_1_686));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_687_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_1_691,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_1",&(RPIPE_noblock_obuf_3_1_691));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_1_691));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_692_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_1_696,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_1",&(RPIPE_noblock_obuf_4_1_696));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_1_696));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_697_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_701_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ZERO_3));\
}\
;
;

#define _outputPort_1_Daemon_merge_stmt_672_c_postamble_macro_ merge_stmt_672_entry_flag = 0;

#define _outputPort_1_Daemon_assign_stmt_710_c_macro_ __declare_static_bit_vector(konst_708,33);\
bit_vector_clear(&konst_708);\
konst_708.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_709,1);\
bit_vector_clear(&konst_708);\
konst_708.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_708), &(BITSEL_u33_u1_709));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_709));\
;

#define _outputPort_1_Daemon_assign_stmt_715_c_macro_ __declare_static_bit_vector(konst_713,33);\
bit_vector_clear(&konst_713);\
konst_713.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_714,1);\
bit_vector_clear(&konst_713);\
konst_713.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_713), &(BITSEL_u33_u1_714));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_714));\
;

#define _outputPort_1_Daemon_assign_stmt_720_c_macro_ __declare_static_bit_vector(konst_718,33);\
bit_vector_clear(&konst_718);\
konst_718.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_719,1);\
bit_vector_clear(&konst_718);\
konst_718.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_718), &(BITSEL_u33_u1_719));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_719));\
;

#define _outputPort_1_Daemon_assign_stmt_725_c_macro_ __declare_static_bit_vector(konst_723,33);\
bit_vector_clear(&konst_723);\
konst_723.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_724,1);\
bit_vector_clear(&konst_723);\
konst_723.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_723), &(BITSEL_u33_u1_724));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_724));\
;

#define _outputPort_1_Daemon_assign_stmt_754_c_macro_ __declare_static_bit_vector(konst_728,3);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_729,1);\
__declare_static_bit_vector(konst_731,1);\
bit_vector_clear(&konst_731);\
__declare_static_bit_vector(MUX_732,1);\
__declare_static_bit_vector(konst_734,3);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_735,1);\
__declare_static_bit_vector(konst_737,1);\
bit_vector_clear(&konst_737);\
__declare_static_bit_vector(MUX_738,1);\
__declare_static_bit_vector(OR_u1_u1_739,1);\
__declare_static_bit_vector(konst_741,3);\
bit_vector_clear(&konst_741);\
konst_741.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_742,1);\
__declare_static_bit_vector(konst_744,1);\
bit_vector_clear(&konst_744);\
__declare_static_bit_vector(MUX_745,1);\
__declare_static_bit_vector(konst_747,3);\
bit_vector_clear(&konst_747);\
konst_747.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_748,1);\
__declare_static_bit_vector(konst_750,1);\
bit_vector_clear(&konst_750);\
__declare_static_bit_vector(MUX_751,1);\
__declare_static_bit_vector(OR_u1_u1_752,1);\
__declare_static_bit_vector(OR_u1_u1_753,1);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_728), &(EQ_u3_u1_729));\
if (has_undefined_bit(&EQ_u3_u1_729)) {fprintf(stderr, "Error: variable EQ_u3_u1_729 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_729));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_729)){bit_vector_cast_to_bit_vector(0, &(MUX_732), &(p1_valid));\
}else {bit_vector_clear(&konst_731);\
bit_vector_cast_to_bit_vector(0, &(MUX_732), &(konst_731));\
}bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_734), &(EQ_u3_u1_735));\
if (has_undefined_bit(&EQ_u3_u1_735)) {fprintf(stderr, "Error: variable EQ_u3_u1_735 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_735));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_735)){bit_vector_cast_to_bit_vector(0, &(MUX_738), &(p2_valid));\
}else {bit_vector_clear(&konst_737);\
bit_vector_cast_to_bit_vector(0, &(MUX_738), &(konst_737));\
}bit_vector_or(&(MUX_732), &(MUX_738), &(OR_u1_u1_739));\
bit_vector_clear(&konst_741);\
konst_741.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_741), &(EQ_u3_u1_742));\
if (has_undefined_bit(&EQ_u3_u1_742)) {fprintf(stderr, "Error: variable EQ_u3_u1_742 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_742));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_742)){bit_vector_cast_to_bit_vector(0, &(MUX_745), &(p3_valid));\
}else {bit_vector_clear(&konst_744);\
bit_vector_cast_to_bit_vector(0, &(MUX_745), &(konst_744));\
}bit_vector_clear(&konst_747);\
konst_747.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_747), &(EQ_u3_u1_748));\
if (has_undefined_bit(&EQ_u3_u1_748)) {fprintf(stderr, "Error: variable EQ_u3_u1_748 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_748));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_748)){bit_vector_cast_to_bit_vector(0, &(MUX_751), &(p4_valid));\
}else {bit_vector_clear(&konst_750);\
bit_vector_cast_to_bit_vector(0, &(MUX_751), &(konst_750));\
}bit_vector_or(&(MUX_745), &(MUX_751), &(OR_u1_u1_752));\
bit_vector_or(&(OR_u1_u1_739), &(OR_u1_u1_752), &(OR_u1_u1_753));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_753));\
;

#define _outputPort_1_Daemon_call_stmt_764_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_1_Daemon_assign_stmt_777_c_macro_ __declare_static_bit_vector(OR_u1_u1_768,1);\
__declare_static_bit_vector(OR_u1_u1_771,1);\
__declare_static_bit_vector(OR_u1_u1_772,1);\
__declare_static_bit_vector(konst_774,8);\
bit_vector_clear(&konst_774);\
__declare_static_bit_vector(EQ_u8_u1_775,1);\
__declare_static_bit_vector(AND_u1_u1_776,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_768));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_771));\
bit_vector_or(&(OR_u1_u1_768), &(OR_u1_u1_771), &(OR_u1_u1_772));\
bit_vector_clear(&konst_774);\
bit_vector_equal(0, &(down_counter), &(konst_774), &(EQ_u8_u1_775));\
bit_vector_and(&(OR_u1_u1_772), &(EQ_u8_u1_775), &(AND_u1_u1_776));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_776));\
;

#define _outputPort_1_Daemon_assign_stmt_788_c_macro_ __declare_static_bit_vector(konst_780,8);\
bit_vector_clear(&konst_780);\
konst_780.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_783,8);\
bit_vector_clear(&konst_783);\
konst_783.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_784,8);\
__declare_static_bit_vector(MUX_786,8);\
__declare_static_bit_vector(MUX_787,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_780);\
konst_780.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_787), &(konst_780));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_783);\
konst_783.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_783), &(SUB_u8_u8_784));\
bit_vector_cast_to_bit_vector(0, &(MUX_786), &(SUB_u8_u8_784));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_786), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_787), &(MUX_786));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_787));\
;

#define _outputPort_1_Daemon_assign_stmt_796_c_macro_ __declare_static_bit_vector(NOT_u1_u1_791,1);\
__declare_static_bit_vector(konst_793,3);\
bit_vector_clear(&konst_793);\
konst_793.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_794,1);\
__declare_static_bit_vector(OR_u1_u1_795,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_791));\
bit_vector_clear(&konst_793);\
konst_793.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_793), &(EQ_u3_u1_794));\
bit_vector_or(&(NOT_u1_u1_791), &(EQ_u3_u1_794), &(OR_u1_u1_795));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_795));\
;

#define _outputPort_1_Daemon_assign_stmt_804_c_macro_ __declare_static_bit_vector(NOT_u1_u1_799,1);\
__declare_static_bit_vector(konst_801,3);\
bit_vector_clear(&konst_801);\
konst_801.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_802,1);\
__declare_static_bit_vector(OR_u1_u1_803,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_799));\
bit_vector_clear(&konst_801);\
konst_801.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_801), &(EQ_u3_u1_802));\
bit_vector_or(&(NOT_u1_u1_799), &(EQ_u3_u1_802), &(OR_u1_u1_803));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_803));\
;

#define _outputPort_1_Daemon_assign_stmt_812_c_macro_ __declare_static_bit_vector(NOT_u1_u1_807,1);\
__declare_static_bit_vector(konst_809,3);\
bit_vector_clear(&konst_809);\
konst_809.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_810,1);\
__declare_static_bit_vector(OR_u1_u1_811,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_807));\
bit_vector_clear(&konst_809);\
konst_809.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_809), &(EQ_u3_u1_810));\
bit_vector_or(&(NOT_u1_u1_807), &(EQ_u3_u1_810), &(OR_u1_u1_811));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_811));\
;

#define _outputPort_1_Daemon_assign_stmt_820_c_macro_ __declare_static_bit_vector(NOT_u1_u1_815,1);\
__declare_static_bit_vector(konst_817,3);\
bit_vector_clear(&konst_817);\
konst_817.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_818,1);\
__declare_static_bit_vector(OR_u1_u1_819,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_815));\
bit_vector_clear(&konst_817);\
konst_817.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_817), &(EQ_u3_u1_818));\
bit_vector_or(&(NOT_u1_u1_815), &(EQ_u3_u1_818), &(OR_u1_u1_819));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_819));\
;

#define _outputPort_1_Daemon_assign_stmt_853_c_macro_ __declare_static_bit_vector(konst_823,3);\
bit_vector_clear(&konst_823);\
konst_823.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_824,1);\
__declare_static_bit_vector(slice_826,32);\
__declare_static_bit_vector(konst_827,32);\
bit_vector_clear(&konst_827);\
__declare_static_bit_vector(MUX_828,32);\
__declare_static_bit_vector(konst_830,3);\
bit_vector_clear(&konst_830);\
konst_830.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_831,1);\
__declare_static_bit_vector(slice_833,32);\
__declare_static_bit_vector(konst_834,32);\
bit_vector_clear(&konst_834);\
__declare_static_bit_vector(MUX_835,32);\
__declare_static_bit_vector(OR_u32_u32_836,32);\
__declare_static_bit_vector(konst_838,3);\
bit_vector_clear(&konst_838);\
konst_838.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_839,1);\
__declare_static_bit_vector(slice_841,32);\
__declare_static_bit_vector(konst_842,32);\
bit_vector_clear(&konst_842);\
__declare_static_bit_vector(MUX_843,32);\
__declare_static_bit_vector(konst_845,3);\
bit_vector_clear(&konst_845);\
konst_845.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_846,1);\
__declare_static_bit_vector(slice_848,32);\
__declare_static_bit_vector(konst_849,32);\
bit_vector_clear(&konst_849);\
__declare_static_bit_vector(MUX_850,32);\
__declare_static_bit_vector(OR_u32_u32_851,32);\
__declare_static_bit_vector(OR_u32_u32_852,32);\
bit_vector_clear(&konst_823);\
konst_823.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_823), &(EQ_u3_u1_824));\
if (has_undefined_bit(&EQ_u3_u1_824)) {fprintf(stderr, "Error: variable EQ_u3_u1_824 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_824));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_824)){bit_vector_slice(&(pkt_1_e_word), &(slice_826), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_828), &(slice_826));\
}else {bit_vector_clear(&konst_827);\
bit_vector_cast_to_bit_vector(0, &(MUX_828), &(konst_827));\
}bit_vector_clear(&konst_830);\
konst_830.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_830), &(EQ_u3_u1_831));\
if (has_undefined_bit(&EQ_u3_u1_831)) {fprintf(stderr, "Error: variable EQ_u3_u1_831 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_831));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_831)){bit_vector_slice(&(pkt_2_e_word), &(slice_833), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_835), &(slice_833));\
}else {bit_vector_clear(&konst_834);\
bit_vector_cast_to_bit_vector(0, &(MUX_835), &(konst_834));\
}bit_vector_or(&(MUX_828), &(MUX_835), &(OR_u32_u32_836));\
bit_vector_clear(&konst_838);\
konst_838.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_838), &(EQ_u3_u1_839));\
if (has_undefined_bit(&EQ_u3_u1_839)) {fprintf(stderr, "Error: variable EQ_u3_u1_839 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_839));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_839)){bit_vector_slice(&(pkt_3_e_word), &(slice_841), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_843), &(slice_841));\
}else {bit_vector_clear(&konst_842);\
bit_vector_cast_to_bit_vector(0, &(MUX_843), &(konst_842));\
}bit_vector_clear(&konst_845);\
konst_845.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_845), &(EQ_u3_u1_846));\
if (has_undefined_bit(&EQ_u3_u1_846)) {fprintf(stderr, "Error: variable EQ_u3_u1_846 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_846));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_846)){bit_vector_slice(&(pkt_4_e_word), &(slice_848), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_850), &(slice_848));\
}else {bit_vector_clear(&konst_849);\
bit_vector_cast_to_bit_vector(0, &(MUX_850), &(konst_849));\
}bit_vector_or(&(MUX_843), &(MUX_850), &(OR_u32_u32_851));\
bit_vector_or(&(OR_u32_u32_836), &(OR_u32_u32_851), &(OR_u32_u32_852));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_852));\
;

#define _outputPort_1_Daemon_assign_stmt_882_c_macro_ __declare_static_bit_vector(konst_856,3);\
bit_vector_clear(&konst_856);\
konst_856.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_857,1);\
__declare_static_bit_vector(konst_859,1);\
bit_vector_clear(&konst_859);\
__declare_static_bit_vector(MUX_860,1);\
__declare_static_bit_vector(konst_862,3);\
bit_vector_clear(&konst_862);\
konst_862.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_863,1);\
__declare_static_bit_vector(konst_865,1);\
bit_vector_clear(&konst_865);\
__declare_static_bit_vector(MUX_866,1);\
__declare_static_bit_vector(OR_u1_u1_867,1);\
__declare_static_bit_vector(konst_869,3);\
bit_vector_clear(&konst_869);\
konst_869.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_870,1);\
__declare_static_bit_vector(konst_872,1);\
bit_vector_clear(&konst_872);\
__declare_static_bit_vector(MUX_873,1);\
__declare_static_bit_vector(konst_875,3);\
bit_vector_clear(&konst_875);\
konst_875.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_876,1);\
__declare_static_bit_vector(konst_878,1);\
bit_vector_clear(&konst_878);\
__declare_static_bit_vector(MUX_879,1);\
__declare_static_bit_vector(OR_u1_u1_880,1);\
__declare_static_bit_vector(OR_u1_u1_881,1);\
bit_vector_clear(&konst_856);\
konst_856.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_856), &(EQ_u3_u1_857));\
if (has_undefined_bit(&EQ_u3_u1_857)) {fprintf(stderr, "Error: variable EQ_u3_u1_857 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_857));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_857)){bit_vector_cast_to_bit_vector(0, &(MUX_860), &(p1_valid));\
}else {bit_vector_clear(&konst_859);\
bit_vector_cast_to_bit_vector(0, &(MUX_860), &(konst_859));\
}bit_vector_clear(&konst_862);\
konst_862.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_862), &(EQ_u3_u1_863));\
if (has_undefined_bit(&EQ_u3_u1_863)) {fprintf(stderr, "Error: variable EQ_u3_u1_863 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_863));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_863)){bit_vector_cast_to_bit_vector(0, &(MUX_866), &(p2_valid));\
}else {bit_vector_clear(&konst_865);\
bit_vector_cast_to_bit_vector(0, &(MUX_866), &(konst_865));\
}bit_vector_or(&(MUX_860), &(MUX_866), &(OR_u1_u1_867));\
bit_vector_clear(&konst_869);\
konst_869.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_869), &(EQ_u3_u1_870));\
if (has_undefined_bit(&EQ_u3_u1_870)) {fprintf(stderr, "Error: variable EQ_u3_u1_870 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_870));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_870)){bit_vector_cast_to_bit_vector(0, &(MUX_873), &(p3_valid));\
}else {bit_vector_clear(&konst_872);\
bit_vector_cast_to_bit_vector(0, &(MUX_873), &(konst_872));\
}bit_vector_clear(&konst_875);\
konst_875.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_875), &(EQ_u3_u1_876));\
if (has_undefined_bit(&EQ_u3_u1_876)) {fprintf(stderr, "Error: variable EQ_u3_u1_876 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_876));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_876)){bit_vector_cast_to_bit_vector(0, &(MUX_879), &(p4_valid));\
}else {bit_vector_clear(&konst_878);\
bit_vector_cast_to_bit_vector(0, &(MUX_879), &(konst_878));\
}bit_vector_or(&(MUX_873), &(MUX_879), &(OR_u1_u1_880));\
bit_vector_or(&(OR_u1_u1_867), &(OR_u1_u1_880), &(OR_u1_u1_881));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_881));\
;

#define _outputPort_1_Daemon_assign_stmt_886_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_1",&(data_to_out));\
}
;
;

#define _outputPort_1_Daemon_branch_block_stmt_670_c_export_apply_macro_ ;

#define _outputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_2_Daemon_branch_block_stmt_892_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(pkt_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_priority,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_2_Daemon_merge_stmt_894_c_preamble_macro_ uint8_t merge_stmt_894_entry_flag;\
merge_stmt_894_entry_flag = do_while_entry_flag;\
goto merge_stmt_894_run;\
merge_stmt_894_run: ;\

#define _outputPort_2_Daemon_phi_stmt_895_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_899_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_2_903,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_2",&(RPIPE_noblock_obuf_1_2_903));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_2_903));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_904_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_2_908,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_2",&(RPIPE_noblock_obuf_2_2_908));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_2_908));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_909_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_2_913,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_2",&(RPIPE_noblock_obuf_3_2_913));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_2_913));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_914_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_2_918,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_2",&(RPIPE_noblock_obuf_4_2_918));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_2_918));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_919_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_923_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ZERO_3));\
}\
;
;

#define _outputPort_2_Daemon_merge_stmt_894_c_postamble_macro_ merge_stmt_894_entry_flag = 0;

#define _outputPort_2_Daemon_assign_stmt_932_c_macro_ __declare_static_bit_vector(konst_930,33);\
bit_vector_clear(&konst_930);\
konst_930.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_931,1);\
bit_vector_clear(&konst_930);\
konst_930.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_930), &(BITSEL_u33_u1_931));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_931));\
;

#define _outputPort_2_Daemon_assign_stmt_937_c_macro_ __declare_static_bit_vector(konst_935,33);\
bit_vector_clear(&konst_935);\
konst_935.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_936,1);\
bit_vector_clear(&konst_935);\
konst_935.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_935), &(BITSEL_u33_u1_936));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_936));\
;

#define _outputPort_2_Daemon_assign_stmt_942_c_macro_ __declare_static_bit_vector(konst_940,33);\
bit_vector_clear(&konst_940);\
konst_940.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_941,1);\
bit_vector_clear(&konst_940);\
konst_940.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_940), &(BITSEL_u33_u1_941));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_941));\
;

#define _outputPort_2_Daemon_assign_stmt_947_c_macro_ __declare_static_bit_vector(konst_945,33);\
bit_vector_clear(&konst_945);\
konst_945.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_946,1);\
bit_vector_clear(&konst_945);\
konst_945.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_945), &(BITSEL_u33_u1_946));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_946));\
;

#define _outputPort_2_Daemon_assign_stmt_976_c_macro_ __declare_static_bit_vector(konst_950,3);\
bit_vector_clear(&konst_950);\
konst_950.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_951,1);\
__declare_static_bit_vector(konst_953,1);\
bit_vector_clear(&konst_953);\
__declare_static_bit_vector(MUX_954,1);\
__declare_static_bit_vector(konst_956,3);\
bit_vector_clear(&konst_956);\
konst_956.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_957,1);\
__declare_static_bit_vector(konst_959,1);\
bit_vector_clear(&konst_959);\
__declare_static_bit_vector(MUX_960,1);\
__declare_static_bit_vector(OR_u1_u1_961,1);\
__declare_static_bit_vector(konst_963,3);\
bit_vector_clear(&konst_963);\
konst_963.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_964,1);\
__declare_static_bit_vector(konst_966,1);\
bit_vector_clear(&konst_966);\
__declare_static_bit_vector(MUX_967,1);\
__declare_static_bit_vector(konst_969,3);\
bit_vector_clear(&konst_969);\
konst_969.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_970,1);\
__declare_static_bit_vector(konst_972,1);\
bit_vector_clear(&konst_972);\
__declare_static_bit_vector(MUX_973,1);\
__declare_static_bit_vector(OR_u1_u1_974,1);\
__declare_static_bit_vector(OR_u1_u1_975,1);\
bit_vector_clear(&konst_950);\
konst_950.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_950), &(EQ_u3_u1_951));\
if (has_undefined_bit(&EQ_u3_u1_951)) {fprintf(stderr, "Error: variable EQ_u3_u1_951 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_951));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_951)){bit_vector_cast_to_bit_vector(0, &(MUX_954), &(p1_valid));\
}else {bit_vector_clear(&konst_953);\
bit_vector_cast_to_bit_vector(0, &(MUX_954), &(konst_953));\
}bit_vector_clear(&konst_956);\
konst_956.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_956), &(EQ_u3_u1_957));\
if (has_undefined_bit(&EQ_u3_u1_957)) {fprintf(stderr, "Error: variable EQ_u3_u1_957 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_957));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_957)){bit_vector_cast_to_bit_vector(0, &(MUX_960), &(p2_valid));\
}else {bit_vector_clear(&konst_959);\
bit_vector_cast_to_bit_vector(0, &(MUX_960), &(konst_959));\
}bit_vector_or(&(MUX_954), &(MUX_960), &(OR_u1_u1_961));\
bit_vector_clear(&konst_963);\
konst_963.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_963), &(EQ_u3_u1_964));\
if (has_undefined_bit(&EQ_u3_u1_964)) {fprintf(stderr, "Error: variable EQ_u3_u1_964 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_964));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_964)){bit_vector_cast_to_bit_vector(0, &(MUX_967), &(p3_valid));\
}else {bit_vector_clear(&konst_966);\
bit_vector_cast_to_bit_vector(0, &(MUX_967), &(konst_966));\
}bit_vector_clear(&konst_969);\
konst_969.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_969), &(EQ_u3_u1_970));\
if (has_undefined_bit(&EQ_u3_u1_970)) {fprintf(stderr, "Error: variable EQ_u3_u1_970 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_970));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_970)){bit_vector_cast_to_bit_vector(0, &(MUX_973), &(p4_valid));\
}else {bit_vector_clear(&konst_972);\
bit_vector_cast_to_bit_vector(0, &(MUX_973), &(konst_972));\
}bit_vector_or(&(MUX_967), &(MUX_973), &(OR_u1_u1_974));\
bit_vector_or(&(OR_u1_u1_961), &(OR_u1_u1_974), &(OR_u1_u1_975));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_975));\
;

#define _outputPort_2_Daemon_call_stmt_986_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_2_Daemon_assign_stmt_999_c_macro_ __declare_static_bit_vector(OR_u1_u1_990,1);\
__declare_static_bit_vector(OR_u1_u1_993,1);\
__declare_static_bit_vector(OR_u1_u1_994,1);\
__declare_static_bit_vector(konst_996,8);\
bit_vector_clear(&konst_996);\
__declare_static_bit_vector(EQ_u8_u1_997,1);\
__declare_static_bit_vector(AND_u1_u1_998,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_990));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_993));\
bit_vector_or(&(OR_u1_u1_990), &(OR_u1_u1_993), &(OR_u1_u1_994));\
bit_vector_clear(&konst_996);\
bit_vector_equal(0, &(down_counter), &(konst_996), &(EQ_u8_u1_997));\
bit_vector_and(&(OR_u1_u1_994), &(EQ_u8_u1_997), &(AND_u1_u1_998));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_998));\
;

#define _outputPort_2_Daemon_assign_stmt_1010_c_macro_ __declare_static_bit_vector(konst_1002,8);\
bit_vector_clear(&konst_1002);\
konst_1002.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1005,8);\
bit_vector_clear(&konst_1005);\
konst_1005.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1006,8);\
__declare_static_bit_vector(MUX_1008,8);\
__declare_static_bit_vector(MUX_1009,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1002);\
konst_1002.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1009), &(konst_1002));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1005);\
konst_1005.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1005), &(SUB_u8_u8_1006));\
bit_vector_cast_to_bit_vector(0, &(MUX_1008), &(SUB_u8_u8_1006));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1008), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1009), &(MUX_1008));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1009));\
;

#define _outputPort_2_Daemon_assign_stmt_1018_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1013,1);\
__declare_static_bit_vector(konst_1015,3);\
bit_vector_clear(&konst_1015);\
konst_1015.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1016,1);\
__declare_static_bit_vector(OR_u1_u1_1017,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1013));\
bit_vector_clear(&konst_1015);\
konst_1015.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1015), &(EQ_u3_u1_1016));\
bit_vector_or(&(NOT_u1_u1_1013), &(EQ_u3_u1_1016), &(OR_u1_u1_1017));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1017));\
;

#define _outputPort_2_Daemon_assign_stmt_1026_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1021,1);\
__declare_static_bit_vector(konst_1023,3);\
bit_vector_clear(&konst_1023);\
konst_1023.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1024,1);\
__declare_static_bit_vector(OR_u1_u1_1025,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1021));\
bit_vector_clear(&konst_1023);\
konst_1023.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1023), &(EQ_u3_u1_1024));\
bit_vector_or(&(NOT_u1_u1_1021), &(EQ_u3_u1_1024), &(OR_u1_u1_1025));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1025));\
;

#define _outputPort_2_Daemon_assign_stmt_1034_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1029,1);\
__declare_static_bit_vector(konst_1031,3);\
bit_vector_clear(&konst_1031);\
konst_1031.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1032,1);\
__declare_static_bit_vector(OR_u1_u1_1033,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1029));\
bit_vector_clear(&konst_1031);\
konst_1031.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1031), &(EQ_u3_u1_1032));\
bit_vector_or(&(NOT_u1_u1_1029), &(EQ_u3_u1_1032), &(OR_u1_u1_1033));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1033));\
;

#define _outputPort_2_Daemon_assign_stmt_1042_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1037,1);\
__declare_static_bit_vector(konst_1039,3);\
bit_vector_clear(&konst_1039);\
konst_1039.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1040,1);\
__declare_static_bit_vector(OR_u1_u1_1041,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1037));\
bit_vector_clear(&konst_1039);\
konst_1039.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1039), &(EQ_u3_u1_1040));\
bit_vector_or(&(NOT_u1_u1_1037), &(EQ_u3_u1_1040), &(OR_u1_u1_1041));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1041));\
;

#define _outputPort_2_Daemon_assign_stmt_1075_c_macro_ __declare_static_bit_vector(konst_1045,3);\
bit_vector_clear(&konst_1045);\
konst_1045.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1046,1);\
__declare_static_bit_vector(slice_1048,32);\
__declare_static_bit_vector(konst_1049,32);\
bit_vector_clear(&konst_1049);\
__declare_static_bit_vector(MUX_1050,32);\
__declare_static_bit_vector(konst_1052,3);\
bit_vector_clear(&konst_1052);\
konst_1052.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1053,1);\
__declare_static_bit_vector(slice_1055,32);\
__declare_static_bit_vector(konst_1056,32);\
bit_vector_clear(&konst_1056);\
__declare_static_bit_vector(MUX_1057,32);\
__declare_static_bit_vector(OR_u32_u32_1058,32);\
__declare_static_bit_vector(konst_1060,3);\
bit_vector_clear(&konst_1060);\
konst_1060.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1061,1);\
__declare_static_bit_vector(slice_1063,32);\
__declare_static_bit_vector(konst_1064,32);\
bit_vector_clear(&konst_1064);\
__declare_static_bit_vector(MUX_1065,32);\
__declare_static_bit_vector(konst_1067,3);\
bit_vector_clear(&konst_1067);\
konst_1067.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1068,1);\
__declare_static_bit_vector(slice_1070,32);\
__declare_static_bit_vector(konst_1071,32);\
bit_vector_clear(&konst_1071);\
__declare_static_bit_vector(MUX_1072,32);\
__declare_static_bit_vector(OR_u32_u32_1073,32);\
__declare_static_bit_vector(OR_u32_u32_1074,32);\
bit_vector_clear(&konst_1045);\
konst_1045.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1045), &(EQ_u3_u1_1046));\
if (has_undefined_bit(&EQ_u3_u1_1046)) {fprintf(stderr, "Error: variable EQ_u3_u1_1046 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1046));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1046)){bit_vector_slice(&(pkt_1_e_word), &(slice_1048), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1050), &(slice_1048));\
}else {bit_vector_clear(&konst_1049);\
bit_vector_cast_to_bit_vector(0, &(MUX_1050), &(konst_1049));\
}bit_vector_clear(&konst_1052);\
konst_1052.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1052), &(EQ_u3_u1_1053));\
if (has_undefined_bit(&EQ_u3_u1_1053)) {fprintf(stderr, "Error: variable EQ_u3_u1_1053 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1053));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1053)){bit_vector_slice(&(pkt_2_e_word), &(slice_1055), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1057), &(slice_1055));\
}else {bit_vector_clear(&konst_1056);\
bit_vector_cast_to_bit_vector(0, &(MUX_1057), &(konst_1056));\
}bit_vector_or(&(MUX_1050), &(MUX_1057), &(OR_u32_u32_1058));\
bit_vector_clear(&konst_1060);\
konst_1060.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1060), &(EQ_u3_u1_1061));\
if (has_undefined_bit(&EQ_u3_u1_1061)) {fprintf(stderr, "Error: variable EQ_u3_u1_1061 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1061));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1061)){bit_vector_slice(&(pkt_3_e_word), &(slice_1063), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1065), &(slice_1063));\
}else {bit_vector_clear(&konst_1064);\
bit_vector_cast_to_bit_vector(0, &(MUX_1065), &(konst_1064));\
}bit_vector_clear(&konst_1067);\
konst_1067.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1067), &(EQ_u3_u1_1068));\
if (has_undefined_bit(&EQ_u3_u1_1068)) {fprintf(stderr, "Error: variable EQ_u3_u1_1068 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1068));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1068)){bit_vector_slice(&(pkt_4_e_word), &(slice_1070), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1072), &(slice_1070));\
}else {bit_vector_clear(&konst_1071);\
bit_vector_cast_to_bit_vector(0, &(MUX_1072), &(konst_1071));\
}bit_vector_or(&(MUX_1065), &(MUX_1072), &(OR_u32_u32_1073));\
bit_vector_or(&(OR_u32_u32_1058), &(OR_u32_u32_1073), &(OR_u32_u32_1074));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1074));\
;

#define _outputPort_2_Daemon_assign_stmt_1104_c_macro_ __declare_static_bit_vector(konst_1078,3);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1079,1);\
__declare_static_bit_vector(konst_1081,1);\
bit_vector_clear(&konst_1081);\
__declare_static_bit_vector(MUX_1082,1);\
__declare_static_bit_vector(konst_1084,3);\
bit_vector_clear(&konst_1084);\
konst_1084.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1085,1);\
__declare_static_bit_vector(konst_1087,1);\
bit_vector_clear(&konst_1087);\
__declare_static_bit_vector(MUX_1088,1);\
__declare_static_bit_vector(OR_u1_u1_1089,1);\
__declare_static_bit_vector(konst_1091,3);\
bit_vector_clear(&konst_1091);\
konst_1091.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1092,1);\
__declare_static_bit_vector(konst_1094,1);\
bit_vector_clear(&konst_1094);\
__declare_static_bit_vector(MUX_1095,1);\
__declare_static_bit_vector(konst_1097,3);\
bit_vector_clear(&konst_1097);\
konst_1097.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1098,1);\
__declare_static_bit_vector(konst_1100,1);\
bit_vector_clear(&konst_1100);\
__declare_static_bit_vector(MUX_1101,1);\
__declare_static_bit_vector(OR_u1_u1_1102,1);\
__declare_static_bit_vector(OR_u1_u1_1103,1);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1078), &(EQ_u3_u1_1079));\
if (has_undefined_bit(&EQ_u3_u1_1079)) {fprintf(stderr, "Error: variable EQ_u3_u1_1079 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1079));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1079)){bit_vector_cast_to_bit_vector(0, &(MUX_1082), &(p1_valid));\
}else {bit_vector_clear(&konst_1081);\
bit_vector_cast_to_bit_vector(0, &(MUX_1082), &(konst_1081));\
}bit_vector_clear(&konst_1084);\
konst_1084.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1084), &(EQ_u3_u1_1085));\
if (has_undefined_bit(&EQ_u3_u1_1085)) {fprintf(stderr, "Error: variable EQ_u3_u1_1085 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1085));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1085)){bit_vector_cast_to_bit_vector(0, &(MUX_1088), &(p2_valid));\
}else {bit_vector_clear(&konst_1087);\
bit_vector_cast_to_bit_vector(0, &(MUX_1088), &(konst_1087));\
}bit_vector_or(&(MUX_1082), &(MUX_1088), &(OR_u1_u1_1089));\
bit_vector_clear(&konst_1091);\
konst_1091.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1091), &(EQ_u3_u1_1092));\
if (has_undefined_bit(&EQ_u3_u1_1092)) {fprintf(stderr, "Error: variable EQ_u3_u1_1092 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1092));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1092)){bit_vector_cast_to_bit_vector(0, &(MUX_1095), &(p3_valid));\
}else {bit_vector_clear(&konst_1094);\
bit_vector_cast_to_bit_vector(0, &(MUX_1095), &(konst_1094));\
}bit_vector_clear(&konst_1097);\
konst_1097.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1097), &(EQ_u3_u1_1098));\
if (has_undefined_bit(&EQ_u3_u1_1098)) {fprintf(stderr, "Error: variable EQ_u3_u1_1098 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1098));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1098)){bit_vector_cast_to_bit_vector(0, &(MUX_1101), &(p4_valid));\
}else {bit_vector_clear(&konst_1100);\
bit_vector_cast_to_bit_vector(0, &(MUX_1101), &(konst_1100));\
}bit_vector_or(&(MUX_1095), &(MUX_1101), &(OR_u1_u1_1102));\
bit_vector_or(&(OR_u1_u1_1089), &(OR_u1_u1_1102), &(OR_u1_u1_1103));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1103));\
;

#define _outputPort_2_Daemon_assign_stmt_1108_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_2",&(data_to_out));\
}
;
;

#define _outputPort_2_Daemon_branch_block_stmt_892_c_export_apply_macro_ ;

#define _outputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_3_Daemon_branch_block_stmt_1114_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(pkt_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_priority,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_3_Daemon_merge_stmt_1116_c_preamble_macro_ uint8_t merge_stmt_1116_entry_flag;\
merge_stmt_1116_entry_flag = do_while_entry_flag;\
goto merge_stmt_1116_run;\
merge_stmt_1116_run: ;\

#define _outputPort_3_Daemon_phi_stmt_1117_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1121_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_3_1125,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_3",&(RPIPE_noblock_obuf_1_3_1125));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_3_1125));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1126_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_3_1130,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_3",&(RPIPE_noblock_obuf_2_3_1130));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_3_1130));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1131_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_3_1135,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_3",&(RPIPE_noblock_obuf_3_3_1135));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_3_1135));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1136_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_3_1140,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_3",&(RPIPE_noblock_obuf_4_3_1140));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_3_1140));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1141_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1145_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ZERO_3));\
}\
;
;

#define _outputPort_3_Daemon_merge_stmt_1116_c_postamble_macro_ merge_stmt_1116_entry_flag = 0;

#define _outputPort_3_Daemon_assign_stmt_1154_c_macro_ __declare_static_bit_vector(konst_1152,33);\
bit_vector_clear(&konst_1152);\
konst_1152.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1153,1);\
bit_vector_clear(&konst_1152);\
konst_1152.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1152), &(BITSEL_u33_u1_1153));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1153));\
;

#define _outputPort_3_Daemon_assign_stmt_1159_c_macro_ __declare_static_bit_vector(konst_1157,33);\
bit_vector_clear(&konst_1157);\
konst_1157.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1158,1);\
bit_vector_clear(&konst_1157);\
konst_1157.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1157), &(BITSEL_u33_u1_1158));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1158));\
;

#define _outputPort_3_Daemon_assign_stmt_1164_c_macro_ __declare_static_bit_vector(konst_1162,33);\
bit_vector_clear(&konst_1162);\
konst_1162.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1163,1);\
bit_vector_clear(&konst_1162);\
konst_1162.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1162), &(BITSEL_u33_u1_1163));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1163));\
;

#define _outputPort_3_Daemon_assign_stmt_1169_c_macro_ __declare_static_bit_vector(konst_1167,33);\
bit_vector_clear(&konst_1167);\
konst_1167.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1168,1);\
bit_vector_clear(&konst_1167);\
konst_1167.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1167), &(BITSEL_u33_u1_1168));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1168));\
;

#define _outputPort_3_Daemon_assign_stmt_1198_c_macro_ __declare_static_bit_vector(konst_1172,3);\
bit_vector_clear(&konst_1172);\
konst_1172.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1173,1);\
__declare_static_bit_vector(konst_1175,1);\
bit_vector_clear(&konst_1175);\
__declare_static_bit_vector(MUX_1176,1);\
__declare_static_bit_vector(konst_1178,3);\
bit_vector_clear(&konst_1178);\
konst_1178.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1179,1);\
__declare_static_bit_vector(konst_1181,1);\
bit_vector_clear(&konst_1181);\
__declare_static_bit_vector(MUX_1182,1);\
__declare_static_bit_vector(OR_u1_u1_1183,1);\
__declare_static_bit_vector(konst_1185,3);\
bit_vector_clear(&konst_1185);\
konst_1185.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1186,1);\
__declare_static_bit_vector(konst_1188,1);\
bit_vector_clear(&konst_1188);\
__declare_static_bit_vector(MUX_1189,1);\
__declare_static_bit_vector(konst_1191,3);\
bit_vector_clear(&konst_1191);\
konst_1191.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1192,1);\
__declare_static_bit_vector(konst_1194,1);\
bit_vector_clear(&konst_1194);\
__declare_static_bit_vector(MUX_1195,1);\
__declare_static_bit_vector(OR_u1_u1_1196,1);\
__declare_static_bit_vector(OR_u1_u1_1197,1);\
bit_vector_clear(&konst_1172);\
konst_1172.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1172), &(EQ_u3_u1_1173));\
if (has_undefined_bit(&EQ_u3_u1_1173)) {fprintf(stderr, "Error: variable EQ_u3_u1_1173 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1173));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1173)){bit_vector_cast_to_bit_vector(0, &(MUX_1176), &(p1_valid));\
}else {bit_vector_clear(&konst_1175);\
bit_vector_cast_to_bit_vector(0, &(MUX_1176), &(konst_1175));\
}bit_vector_clear(&konst_1178);\
konst_1178.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1178), &(EQ_u3_u1_1179));\
if (has_undefined_bit(&EQ_u3_u1_1179)) {fprintf(stderr, "Error: variable EQ_u3_u1_1179 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1179));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1179)){bit_vector_cast_to_bit_vector(0, &(MUX_1182), &(p2_valid));\
}else {bit_vector_clear(&konst_1181);\
bit_vector_cast_to_bit_vector(0, &(MUX_1182), &(konst_1181));\
}bit_vector_or(&(MUX_1176), &(MUX_1182), &(OR_u1_u1_1183));\
bit_vector_clear(&konst_1185);\
konst_1185.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1185), &(EQ_u3_u1_1186));\
if (has_undefined_bit(&EQ_u3_u1_1186)) {fprintf(stderr, "Error: variable EQ_u3_u1_1186 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1186));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1186)){bit_vector_cast_to_bit_vector(0, &(MUX_1189), &(p3_valid));\
}else {bit_vector_clear(&konst_1188);\
bit_vector_cast_to_bit_vector(0, &(MUX_1189), &(konst_1188));\
}bit_vector_clear(&konst_1191);\
konst_1191.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1191), &(EQ_u3_u1_1192));\
if (has_undefined_bit(&EQ_u3_u1_1192)) {fprintf(stderr, "Error: variable EQ_u3_u1_1192 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1192));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1192)){bit_vector_cast_to_bit_vector(0, &(MUX_1195), &(p4_valid));\
}else {bit_vector_clear(&konst_1194);\
bit_vector_cast_to_bit_vector(0, &(MUX_1195), &(konst_1194));\
}bit_vector_or(&(MUX_1189), &(MUX_1195), &(OR_u1_u1_1196));\
bit_vector_or(&(OR_u1_u1_1183), &(OR_u1_u1_1196), &(OR_u1_u1_1197));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1197));\
;

#define _outputPort_3_Daemon_call_stmt_1208_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_3_Daemon_assign_stmt_1221_c_macro_ __declare_static_bit_vector(OR_u1_u1_1212,1);\
__declare_static_bit_vector(OR_u1_u1_1215,1);\
__declare_static_bit_vector(OR_u1_u1_1216,1);\
__declare_static_bit_vector(konst_1218,8);\
bit_vector_clear(&konst_1218);\
__declare_static_bit_vector(EQ_u8_u1_1219,1);\
__declare_static_bit_vector(AND_u1_u1_1220,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_1212));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_1215));\
bit_vector_or(&(OR_u1_u1_1212), &(OR_u1_u1_1215), &(OR_u1_u1_1216));\
bit_vector_clear(&konst_1218);\
bit_vector_equal(0, &(down_counter), &(konst_1218), &(EQ_u8_u1_1219));\
bit_vector_and(&(OR_u1_u1_1216), &(EQ_u8_u1_1219), &(AND_u1_u1_1220));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1220));\
;

#define _outputPort_3_Daemon_assign_stmt_1232_c_macro_ __declare_static_bit_vector(konst_1224,8);\
bit_vector_clear(&konst_1224);\
konst_1224.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1227,8);\
bit_vector_clear(&konst_1227);\
konst_1227.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1228,8);\
__declare_static_bit_vector(MUX_1230,8);\
__declare_static_bit_vector(MUX_1231,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1224);\
konst_1224.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1231), &(konst_1224));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1227);\
konst_1227.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1227), &(SUB_u8_u8_1228));\
bit_vector_cast_to_bit_vector(0, &(MUX_1230), &(SUB_u8_u8_1228));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1230), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1231), &(MUX_1230));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1231));\
;

#define _outputPort_3_Daemon_assign_stmt_1240_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1235,1);\
__declare_static_bit_vector(konst_1237,3);\
bit_vector_clear(&konst_1237);\
konst_1237.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1238,1);\
__declare_static_bit_vector(OR_u1_u1_1239,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1235));\
bit_vector_clear(&konst_1237);\
konst_1237.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1237), &(EQ_u3_u1_1238));\
bit_vector_or(&(NOT_u1_u1_1235), &(EQ_u3_u1_1238), &(OR_u1_u1_1239));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1239));\
;

#define _outputPort_3_Daemon_assign_stmt_1248_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1243,1);\
__declare_static_bit_vector(konst_1245,3);\
bit_vector_clear(&konst_1245);\
konst_1245.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1246,1);\
__declare_static_bit_vector(OR_u1_u1_1247,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1243));\
bit_vector_clear(&konst_1245);\
konst_1245.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1245), &(EQ_u3_u1_1246));\
bit_vector_or(&(NOT_u1_u1_1243), &(EQ_u3_u1_1246), &(OR_u1_u1_1247));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1247));\
;

#define _outputPort_3_Daemon_assign_stmt_1256_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1251,1);\
__declare_static_bit_vector(konst_1253,3);\
bit_vector_clear(&konst_1253);\
konst_1253.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1254,1);\
__declare_static_bit_vector(OR_u1_u1_1255,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1251));\
bit_vector_clear(&konst_1253);\
konst_1253.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1253), &(EQ_u3_u1_1254));\
bit_vector_or(&(NOT_u1_u1_1251), &(EQ_u3_u1_1254), &(OR_u1_u1_1255));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1255));\
;

#define _outputPort_3_Daemon_assign_stmt_1264_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1259,1);\
__declare_static_bit_vector(konst_1261,3);\
bit_vector_clear(&konst_1261);\
konst_1261.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1262,1);\
__declare_static_bit_vector(OR_u1_u1_1263,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1259));\
bit_vector_clear(&konst_1261);\
konst_1261.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1261), &(EQ_u3_u1_1262));\
bit_vector_or(&(NOT_u1_u1_1259), &(EQ_u3_u1_1262), &(OR_u1_u1_1263));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1263));\
;

#define _outputPort_3_Daemon_assign_stmt_1297_c_macro_ __declare_static_bit_vector(konst_1267,3);\
bit_vector_clear(&konst_1267);\
konst_1267.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1268,1);\
__declare_static_bit_vector(slice_1270,32);\
__declare_static_bit_vector(konst_1271,32);\
bit_vector_clear(&konst_1271);\
__declare_static_bit_vector(MUX_1272,32);\
__declare_static_bit_vector(konst_1274,3);\
bit_vector_clear(&konst_1274);\
konst_1274.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1275,1);\
__declare_static_bit_vector(slice_1277,32);\
__declare_static_bit_vector(konst_1278,32);\
bit_vector_clear(&konst_1278);\
__declare_static_bit_vector(MUX_1279,32);\
__declare_static_bit_vector(OR_u32_u32_1280,32);\
__declare_static_bit_vector(konst_1282,3);\
bit_vector_clear(&konst_1282);\
konst_1282.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1283,1);\
__declare_static_bit_vector(slice_1285,32);\
__declare_static_bit_vector(konst_1286,32);\
bit_vector_clear(&konst_1286);\
__declare_static_bit_vector(MUX_1287,32);\
__declare_static_bit_vector(konst_1289,3);\
bit_vector_clear(&konst_1289);\
konst_1289.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1290,1);\
__declare_static_bit_vector(slice_1292,32);\
__declare_static_bit_vector(konst_1293,32);\
bit_vector_clear(&konst_1293);\
__declare_static_bit_vector(MUX_1294,32);\
__declare_static_bit_vector(OR_u32_u32_1295,32);\
__declare_static_bit_vector(OR_u32_u32_1296,32);\
bit_vector_clear(&konst_1267);\
konst_1267.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1267), &(EQ_u3_u1_1268));\
if (has_undefined_bit(&EQ_u3_u1_1268)) {fprintf(stderr, "Error: variable EQ_u3_u1_1268 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1268));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1268)){bit_vector_slice(&(pkt_1_e_word), &(slice_1270), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1272), &(slice_1270));\
}else {bit_vector_clear(&konst_1271);\
bit_vector_cast_to_bit_vector(0, &(MUX_1272), &(konst_1271));\
}bit_vector_clear(&konst_1274);\
konst_1274.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1274), &(EQ_u3_u1_1275));\
if (has_undefined_bit(&EQ_u3_u1_1275)) {fprintf(stderr, "Error: variable EQ_u3_u1_1275 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1275));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1275)){bit_vector_slice(&(pkt_2_e_word), &(slice_1277), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1279), &(slice_1277));\
}else {bit_vector_clear(&konst_1278);\
bit_vector_cast_to_bit_vector(0, &(MUX_1279), &(konst_1278));\
}bit_vector_or(&(MUX_1272), &(MUX_1279), &(OR_u32_u32_1280));\
bit_vector_clear(&konst_1282);\
konst_1282.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1282), &(EQ_u3_u1_1283));\
if (has_undefined_bit(&EQ_u3_u1_1283)) {fprintf(stderr, "Error: variable EQ_u3_u1_1283 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1283));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1283)){bit_vector_slice(&(pkt_3_e_word), &(slice_1285), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1287), &(slice_1285));\
}else {bit_vector_clear(&konst_1286);\
bit_vector_cast_to_bit_vector(0, &(MUX_1287), &(konst_1286));\
}bit_vector_clear(&konst_1289);\
konst_1289.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1289), &(EQ_u3_u1_1290));\
if (has_undefined_bit(&EQ_u3_u1_1290)) {fprintf(stderr, "Error: variable EQ_u3_u1_1290 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1290));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1290)){bit_vector_slice(&(pkt_4_e_word), &(slice_1292), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1294), &(slice_1292));\
}else {bit_vector_clear(&konst_1293);\
bit_vector_cast_to_bit_vector(0, &(MUX_1294), &(konst_1293));\
}bit_vector_or(&(MUX_1287), &(MUX_1294), &(OR_u32_u32_1295));\
bit_vector_or(&(OR_u32_u32_1280), &(OR_u32_u32_1295), &(OR_u32_u32_1296));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1296));\
;

#define _outputPort_3_Daemon_assign_stmt_1326_c_macro_ __declare_static_bit_vector(konst_1300,3);\
bit_vector_clear(&konst_1300);\
konst_1300.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1301,1);\
__declare_static_bit_vector(konst_1303,1);\
bit_vector_clear(&konst_1303);\
__declare_static_bit_vector(MUX_1304,1);\
__declare_static_bit_vector(konst_1306,3);\
bit_vector_clear(&konst_1306);\
konst_1306.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1307,1);\
__declare_static_bit_vector(konst_1309,1);\
bit_vector_clear(&konst_1309);\
__declare_static_bit_vector(MUX_1310,1);\
__declare_static_bit_vector(OR_u1_u1_1311,1);\
__declare_static_bit_vector(konst_1313,3);\
bit_vector_clear(&konst_1313);\
konst_1313.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1314,1);\
__declare_static_bit_vector(konst_1316,1);\
bit_vector_clear(&konst_1316);\
__declare_static_bit_vector(MUX_1317,1);\
__declare_static_bit_vector(konst_1319,3);\
bit_vector_clear(&konst_1319);\
konst_1319.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1320,1);\
__declare_static_bit_vector(konst_1322,1);\
bit_vector_clear(&konst_1322);\
__declare_static_bit_vector(MUX_1323,1);\
__declare_static_bit_vector(OR_u1_u1_1324,1);\
__declare_static_bit_vector(OR_u1_u1_1325,1);\
bit_vector_clear(&konst_1300);\
konst_1300.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1300), &(EQ_u3_u1_1301));\
if (has_undefined_bit(&EQ_u3_u1_1301)) {fprintf(stderr, "Error: variable EQ_u3_u1_1301 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1301));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1301)){bit_vector_cast_to_bit_vector(0, &(MUX_1304), &(p1_valid));\
}else {bit_vector_clear(&konst_1303);\
bit_vector_cast_to_bit_vector(0, &(MUX_1304), &(konst_1303));\
}bit_vector_clear(&konst_1306);\
konst_1306.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1306), &(EQ_u3_u1_1307));\
if (has_undefined_bit(&EQ_u3_u1_1307)) {fprintf(stderr, "Error: variable EQ_u3_u1_1307 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1307));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1307)){bit_vector_cast_to_bit_vector(0, &(MUX_1310), &(p2_valid));\
}else {bit_vector_clear(&konst_1309);\
bit_vector_cast_to_bit_vector(0, &(MUX_1310), &(konst_1309));\
}bit_vector_or(&(MUX_1304), &(MUX_1310), &(OR_u1_u1_1311));\
bit_vector_clear(&konst_1313);\
konst_1313.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1313), &(EQ_u3_u1_1314));\
if (has_undefined_bit(&EQ_u3_u1_1314)) {fprintf(stderr, "Error: variable EQ_u3_u1_1314 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1314));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1314)){bit_vector_cast_to_bit_vector(0, &(MUX_1317), &(p3_valid));\
}else {bit_vector_clear(&konst_1316);\
bit_vector_cast_to_bit_vector(0, &(MUX_1317), &(konst_1316));\
}bit_vector_clear(&konst_1319);\
konst_1319.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1319), &(EQ_u3_u1_1320));\
if (has_undefined_bit(&EQ_u3_u1_1320)) {fprintf(stderr, "Error: variable EQ_u3_u1_1320 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1320));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1320)){bit_vector_cast_to_bit_vector(0, &(MUX_1323), &(p4_valid));\
}else {bit_vector_clear(&konst_1322);\
bit_vector_cast_to_bit_vector(0, &(MUX_1323), &(konst_1322));\
}bit_vector_or(&(MUX_1317), &(MUX_1323), &(OR_u1_u1_1324));\
bit_vector_or(&(OR_u1_u1_1311), &(OR_u1_u1_1324), &(OR_u1_u1_1325));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1325));\
;

#define _outputPort_3_Daemon_assign_stmt_1330_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_3",&(data_to_out));\
}
;
;

#define _outputPort_3_Daemon_branch_block_stmt_1114_c_export_apply_macro_ ;

#define _outputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_4_Daemon_branch_block_stmt_1336_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(pkt_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_priority,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_4_Daemon_merge_stmt_1338_c_preamble_macro_ uint8_t merge_stmt_1338_entry_flag;\
merge_stmt_1338_entry_flag = do_while_entry_flag;\
goto merge_stmt_1338_run;\
merge_stmt_1338_run: ;\

#define _outputPort_4_Daemon_phi_stmt_1339_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1343_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_4_1347,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_4",&(RPIPE_noblock_obuf_1_4_1347));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_4_1347));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1348_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_4_1352,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_4",&(RPIPE_noblock_obuf_2_4_1352));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_4_1352));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1353_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_4_1357,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_4",&(RPIPE_noblock_obuf_3_4_1357));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_4_1357));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1358_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_4_1362,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_4",&(RPIPE_noblock_obuf_4_4_1362));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_4_1362));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1363_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1367_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ZERO_3));\
}\
;
;

#define _outputPort_4_Daemon_merge_stmt_1338_c_postamble_macro_ merge_stmt_1338_entry_flag = 0;

#define _outputPort_4_Daemon_assign_stmt_1376_c_macro_ __declare_static_bit_vector(konst_1374,33);\
bit_vector_clear(&konst_1374);\
konst_1374.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1375,1);\
bit_vector_clear(&konst_1374);\
konst_1374.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1374), &(BITSEL_u33_u1_1375));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1375));\
;

#define _outputPort_4_Daemon_assign_stmt_1381_c_macro_ __declare_static_bit_vector(konst_1379,33);\
bit_vector_clear(&konst_1379);\
konst_1379.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1380,1);\
bit_vector_clear(&konst_1379);\
konst_1379.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1379), &(BITSEL_u33_u1_1380));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1380));\
;

#define _outputPort_4_Daemon_assign_stmt_1386_c_macro_ __declare_static_bit_vector(konst_1384,33);\
bit_vector_clear(&konst_1384);\
konst_1384.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1385,1);\
bit_vector_clear(&konst_1384);\
konst_1384.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1384), &(BITSEL_u33_u1_1385));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1385));\
;

#define _outputPort_4_Daemon_assign_stmt_1391_c_macro_ __declare_static_bit_vector(konst_1389,33);\
bit_vector_clear(&konst_1389);\
konst_1389.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1390,1);\
bit_vector_clear(&konst_1389);\
konst_1389.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1389), &(BITSEL_u33_u1_1390));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1390));\
;

#define _outputPort_4_Daemon_assign_stmt_1420_c_macro_ __declare_static_bit_vector(konst_1394,3);\
bit_vector_clear(&konst_1394);\
konst_1394.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1395,1);\
__declare_static_bit_vector(konst_1397,1);\
bit_vector_clear(&konst_1397);\
__declare_static_bit_vector(MUX_1398,1);\
__declare_static_bit_vector(konst_1400,3);\
bit_vector_clear(&konst_1400);\
konst_1400.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1401,1);\
__declare_static_bit_vector(konst_1403,1);\
bit_vector_clear(&konst_1403);\
__declare_static_bit_vector(MUX_1404,1);\
__declare_static_bit_vector(OR_u1_u1_1405,1);\
__declare_static_bit_vector(konst_1407,3);\
bit_vector_clear(&konst_1407);\
konst_1407.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1408,1);\
__declare_static_bit_vector(konst_1410,1);\
bit_vector_clear(&konst_1410);\
__declare_static_bit_vector(MUX_1411,1);\
__declare_static_bit_vector(konst_1413,3);\
bit_vector_clear(&konst_1413);\
konst_1413.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1414,1);\
__declare_static_bit_vector(konst_1416,1);\
bit_vector_clear(&konst_1416);\
__declare_static_bit_vector(MUX_1417,1);\
__declare_static_bit_vector(OR_u1_u1_1418,1);\
__declare_static_bit_vector(OR_u1_u1_1419,1);\
bit_vector_clear(&konst_1394);\
konst_1394.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1394), &(EQ_u3_u1_1395));\
if (has_undefined_bit(&EQ_u3_u1_1395)) {fprintf(stderr, "Error: variable EQ_u3_u1_1395 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1395));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1395)){bit_vector_cast_to_bit_vector(0, &(MUX_1398), &(p1_valid));\
}else {bit_vector_clear(&konst_1397);\
bit_vector_cast_to_bit_vector(0, &(MUX_1398), &(konst_1397));\
}bit_vector_clear(&konst_1400);\
konst_1400.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1400), &(EQ_u3_u1_1401));\
if (has_undefined_bit(&EQ_u3_u1_1401)) {fprintf(stderr, "Error: variable EQ_u3_u1_1401 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1401));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1401)){bit_vector_cast_to_bit_vector(0, &(MUX_1404), &(p2_valid));\
}else {bit_vector_clear(&konst_1403);\
bit_vector_cast_to_bit_vector(0, &(MUX_1404), &(konst_1403));\
}bit_vector_or(&(MUX_1398), &(MUX_1404), &(OR_u1_u1_1405));\
bit_vector_clear(&konst_1407);\
konst_1407.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1407), &(EQ_u3_u1_1408));\
if (has_undefined_bit(&EQ_u3_u1_1408)) {fprintf(stderr, "Error: variable EQ_u3_u1_1408 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1408));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1408)){bit_vector_cast_to_bit_vector(0, &(MUX_1411), &(p3_valid));\
}else {bit_vector_clear(&konst_1410);\
bit_vector_cast_to_bit_vector(0, &(MUX_1411), &(konst_1410));\
}bit_vector_clear(&konst_1413);\
konst_1413.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1413), &(EQ_u3_u1_1414));\
if (has_undefined_bit(&EQ_u3_u1_1414)) {fprintf(stderr, "Error: variable EQ_u3_u1_1414 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1414));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1414)){bit_vector_cast_to_bit_vector(0, &(MUX_1417), &(p4_valid));\
}else {bit_vector_clear(&konst_1416);\
bit_vector_cast_to_bit_vector(0, &(MUX_1417), &(konst_1416));\
}bit_vector_or(&(MUX_1411), &(MUX_1417), &(OR_u1_u1_1418));\
bit_vector_or(&(OR_u1_u1_1405), &(OR_u1_u1_1418), &(OR_u1_u1_1419));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1419));\
;

#define _outputPort_4_Daemon_call_stmt_1430_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_4_Daemon_assign_stmt_1443_c_macro_ __declare_static_bit_vector(OR_u1_u1_1434,1);\
__declare_static_bit_vector(OR_u1_u1_1437,1);\
__declare_static_bit_vector(OR_u1_u1_1438,1);\
__declare_static_bit_vector(konst_1440,8);\
bit_vector_clear(&konst_1440);\
__declare_static_bit_vector(EQ_u8_u1_1441,1);\
__declare_static_bit_vector(AND_u1_u1_1442,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_1434));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_1437));\
bit_vector_or(&(OR_u1_u1_1434), &(OR_u1_u1_1437), &(OR_u1_u1_1438));\
bit_vector_clear(&konst_1440);\
bit_vector_equal(0, &(down_counter), &(konst_1440), &(EQ_u8_u1_1441));\
bit_vector_and(&(OR_u1_u1_1438), &(EQ_u8_u1_1441), &(AND_u1_u1_1442));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1442));\
;

#define _outputPort_4_Daemon_assign_stmt_1454_c_macro_ __declare_static_bit_vector(konst_1446,8);\
bit_vector_clear(&konst_1446);\
konst_1446.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1449,8);\
bit_vector_clear(&konst_1449);\
konst_1449.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1450,8);\
__declare_static_bit_vector(MUX_1452,8);\
__declare_static_bit_vector(MUX_1453,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1446);\
konst_1446.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1453), &(konst_1446));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1449);\
konst_1449.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1449), &(SUB_u8_u8_1450));\
bit_vector_cast_to_bit_vector(0, &(MUX_1452), &(SUB_u8_u8_1450));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1452), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1453), &(MUX_1452));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1453));\
;

#define _outputPort_4_Daemon_assign_stmt_1462_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1457,1);\
__declare_static_bit_vector(konst_1459,3);\
bit_vector_clear(&konst_1459);\
konst_1459.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1460,1);\
__declare_static_bit_vector(OR_u1_u1_1461,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1457));\
bit_vector_clear(&konst_1459);\
konst_1459.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1459), &(EQ_u3_u1_1460));\
bit_vector_or(&(NOT_u1_u1_1457), &(EQ_u3_u1_1460), &(OR_u1_u1_1461));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1461));\
;

#define _outputPort_4_Daemon_assign_stmt_1470_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1465,1);\
__declare_static_bit_vector(konst_1467,3);\
bit_vector_clear(&konst_1467);\
konst_1467.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1468,1);\
__declare_static_bit_vector(OR_u1_u1_1469,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1465));\
bit_vector_clear(&konst_1467);\
konst_1467.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1467), &(EQ_u3_u1_1468));\
bit_vector_or(&(NOT_u1_u1_1465), &(EQ_u3_u1_1468), &(OR_u1_u1_1469));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1469));\
;

#define _outputPort_4_Daemon_assign_stmt_1478_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1473,1);\
__declare_static_bit_vector(konst_1475,3);\
bit_vector_clear(&konst_1475);\
konst_1475.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1476,1);\
__declare_static_bit_vector(OR_u1_u1_1477,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1473));\
bit_vector_clear(&konst_1475);\
konst_1475.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1475), &(EQ_u3_u1_1476));\
bit_vector_or(&(NOT_u1_u1_1473), &(EQ_u3_u1_1476), &(OR_u1_u1_1477));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1477));\
;

#define _outputPort_4_Daemon_assign_stmt_1486_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1481,1);\
__declare_static_bit_vector(konst_1483,3);\
bit_vector_clear(&konst_1483);\
konst_1483.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1484,1);\
__declare_static_bit_vector(OR_u1_u1_1485,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1481));\
bit_vector_clear(&konst_1483);\
konst_1483.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1483), &(EQ_u3_u1_1484));\
bit_vector_or(&(NOT_u1_u1_1481), &(EQ_u3_u1_1484), &(OR_u1_u1_1485));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1485));\
;

#define _outputPort_4_Daemon_assign_stmt_1519_c_macro_ __declare_static_bit_vector(konst_1489,3);\
bit_vector_clear(&konst_1489);\
konst_1489.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1490,1);\
__declare_static_bit_vector(slice_1492,32);\
__declare_static_bit_vector(konst_1493,32);\
bit_vector_clear(&konst_1493);\
__declare_static_bit_vector(MUX_1494,32);\
__declare_static_bit_vector(konst_1496,3);\
bit_vector_clear(&konst_1496);\
konst_1496.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1497,1);\
__declare_static_bit_vector(slice_1499,32);\
__declare_static_bit_vector(konst_1500,32);\
bit_vector_clear(&konst_1500);\
__declare_static_bit_vector(MUX_1501,32);\
__declare_static_bit_vector(OR_u32_u32_1502,32);\
__declare_static_bit_vector(konst_1504,3);\
bit_vector_clear(&konst_1504);\
konst_1504.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1505,1);\
__declare_static_bit_vector(slice_1507,32);\
__declare_static_bit_vector(konst_1508,32);\
bit_vector_clear(&konst_1508);\
__declare_static_bit_vector(MUX_1509,32);\
__declare_static_bit_vector(konst_1511,3);\
bit_vector_clear(&konst_1511);\
konst_1511.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1512,1);\
__declare_static_bit_vector(slice_1514,32);\
__declare_static_bit_vector(konst_1515,32);\
bit_vector_clear(&konst_1515);\
__declare_static_bit_vector(MUX_1516,32);\
__declare_static_bit_vector(OR_u32_u32_1517,32);\
__declare_static_bit_vector(OR_u32_u32_1518,32);\
bit_vector_clear(&konst_1489);\
konst_1489.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1489), &(EQ_u3_u1_1490));\
if (has_undefined_bit(&EQ_u3_u1_1490)) {fprintf(stderr, "Error: variable EQ_u3_u1_1490 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1490));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1490)){bit_vector_slice(&(pkt_1_e_word), &(slice_1492), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1494), &(slice_1492));\
}else {bit_vector_clear(&konst_1493);\
bit_vector_cast_to_bit_vector(0, &(MUX_1494), &(konst_1493));\
}bit_vector_clear(&konst_1496);\
konst_1496.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1496), &(EQ_u3_u1_1497));\
if (has_undefined_bit(&EQ_u3_u1_1497)) {fprintf(stderr, "Error: variable EQ_u3_u1_1497 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1497));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1497)){bit_vector_slice(&(pkt_2_e_word), &(slice_1499), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1501), &(slice_1499));\
}else {bit_vector_clear(&konst_1500);\
bit_vector_cast_to_bit_vector(0, &(MUX_1501), &(konst_1500));\
}bit_vector_or(&(MUX_1494), &(MUX_1501), &(OR_u32_u32_1502));\
bit_vector_clear(&konst_1504);\
konst_1504.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1504), &(EQ_u3_u1_1505));\
if (has_undefined_bit(&EQ_u3_u1_1505)) {fprintf(stderr, "Error: variable EQ_u3_u1_1505 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1505));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1505)){bit_vector_slice(&(pkt_3_e_word), &(slice_1507), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1509), &(slice_1507));\
}else {bit_vector_clear(&konst_1508);\
bit_vector_cast_to_bit_vector(0, &(MUX_1509), &(konst_1508));\
}bit_vector_clear(&konst_1511);\
konst_1511.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1511), &(EQ_u3_u1_1512));\
if (has_undefined_bit(&EQ_u3_u1_1512)) {fprintf(stderr, "Error: variable EQ_u3_u1_1512 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1512));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1512)){bit_vector_slice(&(pkt_4_e_word), &(slice_1514), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1516), &(slice_1514));\
}else {bit_vector_clear(&konst_1515);\
bit_vector_cast_to_bit_vector(0, &(MUX_1516), &(konst_1515));\
}bit_vector_or(&(MUX_1509), &(MUX_1516), &(OR_u32_u32_1517));\
bit_vector_or(&(OR_u32_u32_1502), &(OR_u32_u32_1517), &(OR_u32_u32_1518));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1518));\
;

#define _outputPort_4_Daemon_assign_stmt_1548_c_macro_ __declare_static_bit_vector(konst_1522,3);\
bit_vector_clear(&konst_1522);\
konst_1522.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1523,1);\
__declare_static_bit_vector(konst_1525,1);\
bit_vector_clear(&konst_1525);\
__declare_static_bit_vector(MUX_1526,1);\
__declare_static_bit_vector(konst_1528,3);\
bit_vector_clear(&konst_1528);\
konst_1528.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1529,1);\
__declare_static_bit_vector(konst_1531,1);\
bit_vector_clear(&konst_1531);\
__declare_static_bit_vector(MUX_1532,1);\
__declare_static_bit_vector(OR_u1_u1_1533,1);\
__declare_static_bit_vector(konst_1535,3);\
bit_vector_clear(&konst_1535);\
konst_1535.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1536,1);\
__declare_static_bit_vector(konst_1538,1);\
bit_vector_clear(&konst_1538);\
__declare_static_bit_vector(MUX_1539,1);\
__declare_static_bit_vector(konst_1541,3);\
bit_vector_clear(&konst_1541);\
konst_1541.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1542,1);\
__declare_static_bit_vector(konst_1544,1);\
bit_vector_clear(&konst_1544);\
__declare_static_bit_vector(MUX_1545,1);\
__declare_static_bit_vector(OR_u1_u1_1546,1);\
__declare_static_bit_vector(OR_u1_u1_1547,1);\
bit_vector_clear(&konst_1522);\
konst_1522.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1522), &(EQ_u3_u1_1523));\
if (has_undefined_bit(&EQ_u3_u1_1523)) {fprintf(stderr, "Error: variable EQ_u3_u1_1523 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1523));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1523)){bit_vector_cast_to_bit_vector(0, &(MUX_1526), &(p1_valid));\
}else {bit_vector_clear(&konst_1525);\
bit_vector_cast_to_bit_vector(0, &(MUX_1526), &(konst_1525));\
}bit_vector_clear(&konst_1528);\
konst_1528.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1528), &(EQ_u3_u1_1529));\
if (has_undefined_bit(&EQ_u3_u1_1529)) {fprintf(stderr, "Error: variable EQ_u3_u1_1529 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1529));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1529)){bit_vector_cast_to_bit_vector(0, &(MUX_1532), &(p2_valid));\
}else {bit_vector_clear(&konst_1531);\
bit_vector_cast_to_bit_vector(0, &(MUX_1532), &(konst_1531));\
}bit_vector_or(&(MUX_1526), &(MUX_1532), &(OR_u1_u1_1533));\
bit_vector_clear(&konst_1535);\
konst_1535.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1535), &(EQ_u3_u1_1536));\
if (has_undefined_bit(&EQ_u3_u1_1536)) {fprintf(stderr, "Error: variable EQ_u3_u1_1536 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1536));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1536)){bit_vector_cast_to_bit_vector(0, &(MUX_1539), &(p3_valid));\
}else {bit_vector_clear(&konst_1538);\
bit_vector_cast_to_bit_vector(0, &(MUX_1539), &(konst_1538));\
}bit_vector_clear(&konst_1541);\
konst_1541.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1541), &(EQ_u3_u1_1542));\
if (has_undefined_bit(&EQ_u3_u1_1542)) {fprintf(stderr, "Error: variable EQ_u3_u1_1542 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1542));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1542)){bit_vector_cast_to_bit_vector(0, &(MUX_1545), &(p4_valid));\
}else {bit_vector_clear(&konst_1544);\
bit_vector_cast_to_bit_vector(0, &(MUX_1545), &(konst_1544));\
}bit_vector_or(&(MUX_1539), &(MUX_1545), &(OR_u1_u1_1546));\
bit_vector_or(&(OR_u1_u1_1533), &(OR_u1_u1_1546), &(OR_u1_u1_1547));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1547));\
;

#define _outputPort_4_Daemon_assign_stmt_1552_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;
;

#define _outputPort_4_Daemon_branch_block_stmt_1336_c_export_apply_macro_ ;

#define _outputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _prioritySelect_inner_inarg_prep_macro__ __declare_static_bit_vector(down_counter,8);\
bit_vector_cast_to_bit_vector(0, &(down_counter), &((*__pdown_counter)));\
__declare_static_bit_vector(active_packet,3);\
bit_vector_cast_to_bit_vector(0, &(active_packet), &((*__pactive_packet)));\
__declare_static_bit_vector(pkt_priority,3);\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &((*__ppkt_priority)));\
__declare_static_bit_vector(p1_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &((*__pp1_valid)));\
__declare_static_bit_vector(p2_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &((*__pp2_valid)));\
__declare_static_bit_vector(p3_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &((*__pp3_valid)));\
__declare_static_bit_vector(p4_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &((*__pp4_valid)));\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_priority,3);\
__declare_static_bit_vector(d0,1);\
__declare_static_bit_vector(select_1,1);\
__declare_static_bit_vector(select_2,1);\
__declare_static_bit_vector(select_3,1);\
__declare_static_bit_vector(select_4,1);\

#define _prioritySelect_assign_stmt_458_c_macro_ __declare_static_bit_vector(konst_456,8);\
bit_vector_clear(&konst_456);\
__declare_static_bit_vector(EQ_u8_u1_457,1);\
bit_vector_clear(&konst_456);\
bit_vector_equal(0, &(down_counter), &(konst_456), &(EQ_u8_u1_457));\
bit_vector_cast_to_bit_vector(0, &(d0), &(EQ_u8_u1_457));\
;

#define _prioritySelect_assign_stmt_493_c_macro_ __declare_static_bit_vector(AND_u1_u1_462,1);\
__declare_static_bit_vector(konst_464,3);\
bit_vector_clear(&konst_464);\
konst_464.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_465,1);\
__declare_static_bit_vector(NOT_u1_u1_467,1);\
__declare_static_bit_vector(NOT_u1_u1_469,1);\
__declare_static_bit_vector(AND_u1_u1_470,1);\
__declare_static_bit_vector(NOT_u1_u1_472,1);\
__declare_static_bit_vector(AND_u1_u1_473,1);\
__declare_static_bit_vector(OR_u1_u1_474,1);\
__declare_static_bit_vector(konst_476,3);\
bit_vector_clear(&konst_476);\
konst_476.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_477,1);\
__declare_static_bit_vector(NOT_u1_u1_479,1);\
__declare_static_bit_vector(AND_u1_u1_480,1);\
__declare_static_bit_vector(NOT_u1_u1_482,1);\
__declare_static_bit_vector(AND_u1_u1_483,1);\
__declare_static_bit_vector(konst_485,3);\
bit_vector_clear(&konst_485);\
konst_485.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_486,1);\
__declare_static_bit_vector(NOT_u1_u1_488,1);\
__declare_static_bit_vector(AND_u1_u1_489,1);\
__declare_static_bit_vector(OR_u1_u1_490,1);\
__declare_static_bit_vector(OR_u1_u1_491,1);\
__declare_static_bit_vector(AND_u1_u1_492,1);\
bit_vector_and(&(d0), &(p1_valid), &(AND_u1_u1_462));\
bit_vector_clear(&konst_464);\
konst_464.val.byte_array[0] = 1;\
bit_vector_equal(0, &(pkt_priority), &(konst_464), &(EQ_u3_u1_465));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_467));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_469));\
bit_vector_and(&(NOT_u1_u1_467), &(NOT_u1_u1_469), &(AND_u1_u1_470));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_472));\
bit_vector_and(&(AND_u1_u1_470), &(NOT_u1_u1_472), &(AND_u1_u1_473));\
bit_vector_or(&(EQ_u3_u1_465), &(AND_u1_u1_473), &(OR_u1_u1_474));\
bit_vector_clear(&konst_476);\
konst_476.val.byte_array[0] = 3;\
bit_vector_equal(0, &(pkt_priority), &(konst_476), &(EQ_u3_u1_477));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_479));\
bit_vector_and(&(EQ_u3_u1_477), &(NOT_u1_u1_479), &(AND_u1_u1_480));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_482));\
bit_vector_and(&(AND_u1_u1_480), &(NOT_u1_u1_482), &(AND_u1_u1_483));\
bit_vector_clear(&konst_485);\
konst_485.val.byte_array[0] = 4;\
bit_vector_equal(0, &(pkt_priority), &(konst_485), &(EQ_u3_u1_486));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_488));\
bit_vector_and(&(EQ_u3_u1_486), &(NOT_u1_u1_488), &(AND_u1_u1_489));\
bit_vector_or(&(AND_u1_u1_483), &(AND_u1_u1_489), &(OR_u1_u1_490));\
bit_vector_or(&(OR_u1_u1_474), &(OR_u1_u1_490), &(OR_u1_u1_491));\
bit_vector_and(&(AND_u1_u1_462), &(OR_u1_u1_491), &(AND_u1_u1_492));\
bit_vector_cast_to_bit_vector(0, &(select_1), &(AND_u1_u1_492));\
;

#define _prioritySelect_assign_stmt_528_c_macro_ __declare_static_bit_vector(AND_u1_u1_497,1);\
__declare_static_bit_vector(konst_499,3);\
bit_vector_clear(&konst_499);\
konst_499.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_500,1);\
__declare_static_bit_vector(NOT_u1_u1_502,1);\
__declare_static_bit_vector(NOT_u1_u1_504,1);\
__declare_static_bit_vector(AND_u1_u1_505,1);\
__declare_static_bit_vector(NOT_u1_u1_507,1);\
__declare_static_bit_vector(AND_u1_u1_508,1);\
__declare_static_bit_vector(OR_u1_u1_509,1);\
__declare_static_bit_vector(konst_511,3);\
bit_vector_clear(&konst_511);\
konst_511.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_512,1);\
__declare_static_bit_vector(NOT_u1_u1_514,1);\
__declare_static_bit_vector(AND_u1_u1_515,1);\
__declare_static_bit_vector(NOT_u1_u1_517,1);\
__declare_static_bit_vector(AND_u1_u1_518,1);\
__declare_static_bit_vector(konst_520,3);\
bit_vector_clear(&konst_520);\
konst_520.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_521,1);\
__declare_static_bit_vector(NOT_u1_u1_523,1);\
__declare_static_bit_vector(AND_u1_u1_524,1);\
__declare_static_bit_vector(OR_u1_u1_525,1);\
__declare_static_bit_vector(OR_u1_u1_526,1);\
__declare_static_bit_vector(AND_u1_u1_527,1);\
bit_vector_and(&(d0), &(p2_valid), &(AND_u1_u1_497));\
bit_vector_clear(&konst_499);\
konst_499.val.byte_array[0] = 2;\
bit_vector_equal(0, &(pkt_priority), &(konst_499), &(EQ_u3_u1_500));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_502));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_504));\
bit_vector_and(&(NOT_u1_u1_502), &(NOT_u1_u1_504), &(AND_u1_u1_505));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_507));\
bit_vector_and(&(AND_u1_u1_505), &(NOT_u1_u1_507), &(AND_u1_u1_508));\
bit_vector_or(&(EQ_u3_u1_500), &(AND_u1_u1_508), &(OR_u1_u1_509));\
bit_vector_clear(&konst_511);\
konst_511.val.byte_array[0] = 4;\
bit_vector_equal(0, &(pkt_priority), &(konst_511), &(EQ_u3_u1_512));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_514));\
bit_vector_and(&(EQ_u3_u1_512), &(NOT_u1_u1_514), &(AND_u1_u1_515));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_517));\
bit_vector_and(&(AND_u1_u1_515), &(NOT_u1_u1_517), &(AND_u1_u1_518));\
bit_vector_clear(&konst_520);\
konst_520.val.byte_array[0] = 1;\
bit_vector_equal(0, &(pkt_priority), &(konst_520), &(EQ_u3_u1_521));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_523));\
bit_vector_and(&(EQ_u3_u1_521), &(NOT_u1_u1_523), &(AND_u1_u1_524));\
bit_vector_or(&(AND_u1_u1_518), &(AND_u1_u1_524), &(OR_u1_u1_525));\
bit_vector_or(&(OR_u1_u1_509), &(OR_u1_u1_525), &(OR_u1_u1_526));\
bit_vector_and(&(AND_u1_u1_497), &(OR_u1_u1_526), &(AND_u1_u1_527));\
bit_vector_cast_to_bit_vector(0, &(select_2), &(AND_u1_u1_527));\
;

#define _prioritySelect_assign_stmt_563_c_macro_ __declare_static_bit_vector(AND_u1_u1_532,1);\
__declare_static_bit_vector(konst_534,3);\
bit_vector_clear(&konst_534);\
konst_534.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_535,1);\
__declare_static_bit_vector(NOT_u1_u1_537,1);\
__declare_static_bit_vector(NOT_u1_u1_539,1);\
__declare_static_bit_vector(AND_u1_u1_540,1);\
__declare_static_bit_vector(NOT_u1_u1_542,1);\
__declare_static_bit_vector(AND_u1_u1_543,1);\
__declare_static_bit_vector(OR_u1_u1_544,1);\
__declare_static_bit_vector(konst_546,3);\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_547,1);\
__declare_static_bit_vector(NOT_u1_u1_549,1);\
__declare_static_bit_vector(AND_u1_u1_550,1);\
__declare_static_bit_vector(NOT_u1_u1_552,1);\
__declare_static_bit_vector(AND_u1_u1_553,1);\
__declare_static_bit_vector(konst_555,3);\
bit_vector_clear(&konst_555);\
konst_555.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_556,1);\
__declare_static_bit_vector(NOT_u1_u1_558,1);\
__declare_static_bit_vector(AND_u1_u1_559,1);\
__declare_static_bit_vector(OR_u1_u1_560,1);\
__declare_static_bit_vector(OR_u1_u1_561,1);\
__declare_static_bit_vector(AND_u1_u1_562,1);\
bit_vector_and(&(d0), &(p3_valid), &(AND_u1_u1_532));\
bit_vector_clear(&konst_534);\
konst_534.val.byte_array[0] = 3;\
bit_vector_equal(0, &(pkt_priority), &(konst_534), &(EQ_u3_u1_535));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_537));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_539));\
bit_vector_and(&(NOT_u1_u1_537), &(NOT_u1_u1_539), &(AND_u1_u1_540));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_542));\
bit_vector_and(&(AND_u1_u1_540), &(NOT_u1_u1_542), &(AND_u1_u1_543));\
bit_vector_or(&(EQ_u3_u1_535), &(AND_u1_u1_543), &(OR_u1_u1_544));\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 1;\
bit_vector_equal(0, &(pkt_priority), &(konst_546), &(EQ_u3_u1_547));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_549));\
bit_vector_and(&(EQ_u3_u1_547), &(NOT_u1_u1_549), &(AND_u1_u1_550));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_552));\
bit_vector_and(&(AND_u1_u1_550), &(NOT_u1_u1_552), &(AND_u1_u1_553));\
bit_vector_clear(&konst_555);\
konst_555.val.byte_array[0] = 2;\
bit_vector_equal(0, &(pkt_priority), &(konst_555), &(EQ_u3_u1_556));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_558));\
bit_vector_and(&(EQ_u3_u1_556), &(NOT_u1_u1_558), &(AND_u1_u1_559));\
bit_vector_or(&(AND_u1_u1_553), &(AND_u1_u1_559), &(OR_u1_u1_560));\
bit_vector_or(&(OR_u1_u1_544), &(OR_u1_u1_560), &(OR_u1_u1_561));\
bit_vector_and(&(AND_u1_u1_532), &(OR_u1_u1_561), &(AND_u1_u1_562));\
bit_vector_cast_to_bit_vector(0, &(select_3), &(AND_u1_u1_562));\
;

#define _prioritySelect_assign_stmt_598_c_macro_ __declare_static_bit_vector(AND_u1_u1_567,1);\
__declare_static_bit_vector(konst_569,3);\
bit_vector_clear(&konst_569);\
konst_569.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_570,1);\
__declare_static_bit_vector(NOT_u1_u1_572,1);\
__declare_static_bit_vector(NOT_u1_u1_574,1);\
__declare_static_bit_vector(AND_u1_u1_575,1);\
__declare_static_bit_vector(NOT_u1_u1_577,1);\
__declare_static_bit_vector(AND_u1_u1_578,1);\
__declare_static_bit_vector(OR_u1_u1_579,1);\
__declare_static_bit_vector(konst_581,3);\
bit_vector_clear(&konst_581);\
konst_581.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_582,1);\
__declare_static_bit_vector(NOT_u1_u1_584,1);\
__declare_static_bit_vector(AND_u1_u1_585,1);\
__declare_static_bit_vector(NOT_u1_u1_587,1);\
__declare_static_bit_vector(AND_u1_u1_588,1);\
__declare_static_bit_vector(konst_590,3);\
bit_vector_clear(&konst_590);\
konst_590.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_591,1);\
__declare_static_bit_vector(NOT_u1_u1_593,1);\
__declare_static_bit_vector(AND_u1_u1_594,1);\
__declare_static_bit_vector(OR_u1_u1_595,1);\
__declare_static_bit_vector(OR_u1_u1_596,1);\
__declare_static_bit_vector(AND_u1_u1_597,1);\
bit_vector_and(&(d0), &(p4_valid), &(AND_u1_u1_567));\
bit_vector_clear(&konst_569);\
konst_569.val.byte_array[0] = 4;\
bit_vector_equal(0, &(pkt_priority), &(konst_569), &(EQ_u3_u1_570));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_572));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_574));\
bit_vector_and(&(NOT_u1_u1_572), &(NOT_u1_u1_574), &(AND_u1_u1_575));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_577));\
bit_vector_and(&(AND_u1_u1_575), &(NOT_u1_u1_577), &(AND_u1_u1_578));\
bit_vector_or(&(EQ_u3_u1_570), &(AND_u1_u1_578), &(OR_u1_u1_579));\
bit_vector_clear(&konst_581);\
konst_581.val.byte_array[0] = 2;\
bit_vector_equal(0, &(pkt_priority), &(konst_581), &(EQ_u3_u1_582));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_584));\
bit_vector_and(&(EQ_u3_u1_582), &(NOT_u1_u1_584), &(AND_u1_u1_585));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_587));\
bit_vector_and(&(AND_u1_u1_585), &(NOT_u1_u1_587), &(AND_u1_u1_588));\
bit_vector_clear(&konst_590);\
konst_590.val.byte_array[0] = 3;\
bit_vector_equal(0, &(pkt_priority), &(konst_590), &(EQ_u3_u1_591));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_593));\
bit_vector_and(&(EQ_u3_u1_591), &(NOT_u1_u1_593), &(AND_u1_u1_594));\
bit_vector_or(&(AND_u1_u1_588), &(AND_u1_u1_594), &(OR_u1_u1_595));\
bit_vector_or(&(OR_u1_u1_579), &(OR_u1_u1_595), &(OR_u1_u1_596));\
bit_vector_and(&(AND_u1_u1_567), &(OR_u1_u1_596), &(AND_u1_u1_597));\
bit_vector_cast_to_bit_vector(0, &(select_4), &(AND_u1_u1_597));\
;

#define _prioritySelect_assign_stmt_640_c_macro_ __declare_static_bit_vector(NOT_u1_u1_601,1);\
__declare_static_bit_vector(konst_603,3);\
bit_vector_clear(&konst_603);\
__declare_static_bit_vector(MUX_604,3);\
__declare_static_bit_vector(konst_606,3);\
bit_vector_clear(&konst_606);\
konst_606.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_607,3);\
bit_vector_clear(&konst_607);\
__declare_static_bit_vector(MUX_608,3);\
__declare_static_bit_vector(OR_u3_u3_609,3);\
__declare_static_bit_vector(konst_611,3);\
bit_vector_clear(&konst_611);\
konst_611.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_612,3);\
bit_vector_clear(&konst_612);\
__declare_static_bit_vector(MUX_613,3);\
__declare_static_bit_vector(OR_u3_u3_614,3);\
__declare_static_bit_vector(konst_616,3);\
bit_vector_clear(&konst_616);\
konst_616.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_617,3);\
bit_vector_clear(&konst_617);\
__declare_static_bit_vector(MUX_618,3);\
__declare_static_bit_vector(konst_620,3);\
bit_vector_clear(&konst_620);\
konst_620.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_621,3);\
bit_vector_clear(&konst_621);\
__declare_static_bit_vector(MUX_622,3);\
__declare_static_bit_vector(OR_u3_u3_623,3);\
__declare_static_bit_vector(NOT_u1_u1_625,1);\
__declare_static_bit_vector(NOT_u1_u1_627,1);\
__declare_static_bit_vector(AND_u1_u1_628,1);\
__declare_static_bit_vector(NOT_u1_u1_630,1);\
__declare_static_bit_vector(NOT_u1_u1_632,1);\
__declare_static_bit_vector(AND_u1_u1_633,1);\
__declare_static_bit_vector(AND_u1_u1_634,1);\
__declare_static_bit_vector(konst_636,3);\
bit_vector_clear(&konst_636);\
__declare_static_bit_vector(MUX_637,3);\
__declare_static_bit_vector(OR_u3_u3_638,3);\
__declare_static_bit_vector(OR_u3_u3_639,3);\
bit_vector_not( &(d0), &(NOT_u1_u1_601));\
if (has_undefined_bit(&NOT_u1_u1_601)) {fprintf(stderr, "Error: variable NOT_u1_u1_601 has undefined value (%s) at test point.\n", to_string(&NOT_u1_u1_601));assert(0);} \
if(bit_vector_to_uint64(0, &NOT_u1_u1_601)){bit_vector_cast_to_bit_vector(0, &(MUX_604), &(active_packet));\
}else {bit_vector_clear(&konst_603);\
bit_vector_cast_to_bit_vector(0, &(MUX_604), &(konst_603));\
}if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_606);\
konst_606.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_608), &(konst_606));\
}else {bit_vector_clear(&konst_607);\
bit_vector_cast_to_bit_vector(0, &(MUX_608), &(konst_607));\
}bit_vector_or(&(MUX_604), &(MUX_608), &(OR_u3_u3_609));\
if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_611);\
konst_611.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_613), &(konst_611));\
}else {bit_vector_clear(&konst_612);\
bit_vector_cast_to_bit_vector(0, &(MUX_613), &(konst_612));\
}bit_vector_or(&(OR_u3_u3_609), &(MUX_613), &(OR_u3_u3_614));\
if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_616);\
konst_616.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_618), &(konst_616));\
}else {bit_vector_clear(&konst_617);\
bit_vector_cast_to_bit_vector(0, &(MUX_618), &(konst_617));\
}if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_620);\
konst_620.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_622), &(konst_620));\
}else {bit_vector_clear(&konst_621);\
bit_vector_cast_to_bit_vector(0, &(MUX_622), &(konst_621));\
}bit_vector_or(&(MUX_618), &(MUX_622), &(OR_u3_u3_623));\
bit_vector_not( &(select_1), &(NOT_u1_u1_625));\
bit_vector_not( &(select_2), &(NOT_u1_u1_627));\
bit_vector_and(&(NOT_u1_u1_625), &(NOT_u1_u1_627), &(AND_u1_u1_628));\
bit_vector_not( &(select_3), &(NOT_u1_u1_630));\
bit_vector_not( &(select_4), &(NOT_u1_u1_632));\
bit_vector_and(&(NOT_u1_u1_630), &(NOT_u1_u1_632), &(AND_u1_u1_633));\
bit_vector_and(&(AND_u1_u1_628), &(AND_u1_u1_633), &(AND_u1_u1_634));\
if (has_undefined_bit(&AND_u1_u1_634)) {fprintf(stderr, "Error: variable AND_u1_u1_634 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_634));assert(0);} \
if(bit_vector_to_uint64(0, &AND_u1_u1_634)){bit_vector_cast_to_bit_vector(0, &(MUX_637), &(active_packet));\
}else {bit_vector_clear(&konst_636);\
bit_vector_cast_to_bit_vector(0, &(MUX_637), &(konst_636));\
}bit_vector_or(&(OR_u3_u3_623), &(MUX_637), &(OR_u3_u3_638));\
bit_vector_or(&(OR_u3_u3_614), &(OR_u3_u3_638), &(OR_u3_u3_639));\
bit_vector_cast_to_bit_vector(0, &(next_active_packet), &(OR_u3_u3_639));\
;

#define _prioritySelect_assign_stmt_667_c_macro_ __declare_static_bit_vector(NOT_u1_u1_643,1);\
__declare_static_bit_vector(konst_645,3);\
bit_vector_clear(&konst_645);\
__declare_static_bit_vector(MUX_646,3);\
__declare_static_bit_vector(konst_648,3);\
bit_vector_clear(&konst_648);\
konst_648.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_649,3);\
bit_vector_clear(&konst_649);\
__declare_static_bit_vector(MUX_650,3);\
__declare_static_bit_vector(OR_u3_u3_651,3);\
__declare_static_bit_vector(konst_653,3);\
bit_vector_clear(&konst_653);\
konst_653.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_654,3);\
bit_vector_clear(&konst_654);\
__declare_static_bit_vector(MUX_655,3);\
__declare_static_bit_vector(OR_u3_u3_656,3);\
__declare_static_bit_vector(konst_658,3);\
bit_vector_clear(&konst_658);\
konst_658.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_659,3);\
bit_vector_clear(&konst_659);\
__declare_static_bit_vector(MUX_660,3);\
__declare_static_bit_vector(konst_662,3);\
bit_vector_clear(&konst_662);\
konst_662.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_663,3);\
bit_vector_clear(&konst_663);\
__declare_static_bit_vector(MUX_664,3);\
__declare_static_bit_vector(OR_u3_u3_665,3);\
__declare_static_bit_vector(OR_u3_u3_666,3);\
bit_vector_not( &(d0), &(NOT_u1_u1_643));\
if (has_undefined_bit(&NOT_u1_u1_643)) {fprintf(stderr, "Error: variable NOT_u1_u1_643 has undefined value (%s) at test point.\n", to_string(&NOT_u1_u1_643));assert(0);} \
if(bit_vector_to_uint64(0, &NOT_u1_u1_643)){bit_vector_cast_to_bit_vector(0, &(MUX_646), &(pkt_priority));\
}else {bit_vector_clear(&konst_645);\
bit_vector_cast_to_bit_vector(0, &(MUX_646), &(konst_645));\
}if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_648);\
konst_648.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_650), &(konst_648));\
}else {bit_vector_clear(&konst_649);\
bit_vector_cast_to_bit_vector(0, &(MUX_650), &(konst_649));\
}bit_vector_or(&(MUX_646), &(MUX_650), &(OR_u3_u3_651));\
if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_653);\
konst_653.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_655), &(konst_653));\
}else {bit_vector_clear(&konst_654);\
bit_vector_cast_to_bit_vector(0, &(MUX_655), &(konst_654));\
}bit_vector_or(&(OR_u3_u3_651), &(MUX_655), &(OR_u3_u3_656));\
if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_658);\
konst_658.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_660), &(konst_658));\
}else {bit_vector_clear(&konst_659);\
bit_vector_cast_to_bit_vector(0, &(MUX_660), &(konst_659));\
}if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_662);\
konst_662.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_664), &(konst_662));\
}else {bit_vector_clear(&konst_663);\
bit_vector_cast_to_bit_vector(0, &(MUX_664), &(konst_663));\
}bit_vector_or(&(MUX_660), &(MUX_664), &(OR_u3_u3_665));\
bit_vector_or(&(OR_u3_u3_656), &(OR_u3_u3_665), &(OR_u3_u3_666));\
bit_vector_cast_to_bit_vector(0, &(next_pkt_priority), &(OR_u3_u3_666));\
;

#define _prioritySelect_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_active_packet)), &(next_active_packet));\
bit_vector_cast_to_bit_vector(0, &((*__pnext_pkt_priority)), &(next_pkt_priority));\
;
