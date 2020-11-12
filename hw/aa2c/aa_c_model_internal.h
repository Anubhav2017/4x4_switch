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

#define _inputPort_1_Daemon_phi_stmt_67_c_macro_ __declare_static_bit_vector(konst_70,16);\
bit_vector_clear(&konst_70);\
__declare_static_bit_vector(type_cast_71,16);\
bit_vector_clear(&type_cast_71);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_70,16);\
bit_vector_clear(&konst_70);\
__declare_static_bit_vector(type_cast_71,16);\
bit_vector_clear(&type_cast_71);\
bit_vector_clear(&konst_70);\
bit_vector_bitcast_to_bit_vector( &(type_cast_71), &(konst_70));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_71));\
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
#define _outputPort_1_Daemon_branch_block_stmt_602_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_1_Daemon_merge_stmt_604_c_preamble_macro_ uint8_t merge_stmt_604_entry_flag;\
merge_stmt_604_entry_flag = do_while_entry_flag;\
goto merge_stmt_604_run;\
merge_stmt_604_run: ;\

#define _outputPort_1_Daemon_phi_stmt_605_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_609_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_1_613,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_1",&(RPIPE_noblock_obuf_1_1_613));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_1_613));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_614_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_1_618,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_1",&(RPIPE_noblock_obuf_2_1_618));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_1_618));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_619_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_1_623,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_1",&(RPIPE_noblock_obuf_3_1_623));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_1_623));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_624_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_1_628,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_1",&(RPIPE_noblock_obuf_4_1_628));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_1_628));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_629_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_633_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_1_Daemon_merge_stmt_604_c_postamble_macro_ merge_stmt_604_entry_flag = 0;

#define _outputPort_1_Daemon_assign_stmt_642_c_macro_ __declare_static_bit_vector(konst_640,33);\
bit_vector_clear(&konst_640);\
konst_640.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_641,1);\
bit_vector_clear(&konst_640);\
konst_640.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_640), &(BITSEL_u33_u1_641));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_641));\
;

#define _outputPort_1_Daemon_assign_stmt_647_c_macro_ __declare_static_bit_vector(konst_645,33);\
bit_vector_clear(&konst_645);\
konst_645.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_646,1);\
bit_vector_clear(&konst_645);\
konst_645.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_645), &(BITSEL_u33_u1_646));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_646));\
;

#define _outputPort_1_Daemon_assign_stmt_652_c_macro_ __declare_static_bit_vector(konst_650,33);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_651,1);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_650), &(BITSEL_u33_u1_651));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_651));\
;

#define _outputPort_1_Daemon_assign_stmt_657_c_macro_ __declare_static_bit_vector(konst_655,33);\
bit_vector_clear(&konst_655);\
konst_655.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_656,1);\
bit_vector_clear(&konst_655);\
konst_655.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_655), &(BITSEL_u33_u1_656));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_656));\
;

#define _outputPort_1_Daemon_assign_stmt_686_c_macro_ __declare_static_bit_vector(konst_660,3);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_661,1);\
__declare_static_bit_vector(konst_663,1);\
bit_vector_clear(&konst_663);\
__declare_static_bit_vector(MUX_664,1);\
__declare_static_bit_vector(konst_666,3);\
bit_vector_clear(&konst_666);\
konst_666.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_667,1);\
__declare_static_bit_vector(konst_669,1);\
bit_vector_clear(&konst_669);\
__declare_static_bit_vector(MUX_670,1);\
__declare_static_bit_vector(OR_u1_u1_671,1);\
__declare_static_bit_vector(konst_673,3);\
bit_vector_clear(&konst_673);\
konst_673.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_674,1);\
__declare_static_bit_vector(konst_676,1);\
bit_vector_clear(&konst_676);\
__declare_static_bit_vector(MUX_677,1);\
__declare_static_bit_vector(konst_679,3);\
bit_vector_clear(&konst_679);\
konst_679.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_680,1);\
__declare_static_bit_vector(konst_682,1);\
bit_vector_clear(&konst_682);\
__declare_static_bit_vector(MUX_683,1);\
__declare_static_bit_vector(OR_u1_u1_684,1);\
__declare_static_bit_vector(OR_u1_u1_685,1);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_660), &(EQ_u3_u1_661));\
if (has_undefined_bit(&EQ_u3_u1_661)) {fprintf(stderr, "Error: variable EQ_u3_u1_661 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_661));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_661)){bit_vector_cast_to_bit_vector(0, &(MUX_664), &(p1_valid));\
}else {bit_vector_clear(&konst_663);\
bit_vector_cast_to_bit_vector(0, &(MUX_664), &(konst_663));\
}bit_vector_clear(&konst_666);\
konst_666.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_666), &(EQ_u3_u1_667));\
if (has_undefined_bit(&EQ_u3_u1_667)) {fprintf(stderr, "Error: variable EQ_u3_u1_667 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_667));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_667)){bit_vector_cast_to_bit_vector(0, &(MUX_670), &(p2_valid));\
}else {bit_vector_clear(&konst_669);\
bit_vector_cast_to_bit_vector(0, &(MUX_670), &(konst_669));\
}bit_vector_or(&(MUX_664), &(MUX_670), &(OR_u1_u1_671));\
bit_vector_clear(&konst_673);\
konst_673.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_673), &(EQ_u3_u1_674));\
if (has_undefined_bit(&EQ_u3_u1_674)) {fprintf(stderr, "Error: variable EQ_u3_u1_674 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_674));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_674)){bit_vector_cast_to_bit_vector(0, &(MUX_677), &(p3_valid));\
}else {bit_vector_clear(&konst_676);\
bit_vector_cast_to_bit_vector(0, &(MUX_677), &(konst_676));\
}bit_vector_clear(&konst_679);\
konst_679.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_679), &(EQ_u3_u1_680));\
if (has_undefined_bit(&EQ_u3_u1_680)) {fprintf(stderr, "Error: variable EQ_u3_u1_680 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_680));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_680)){bit_vector_cast_to_bit_vector(0, &(MUX_683), &(p4_valid));\
}else {bit_vector_clear(&konst_682);\
bit_vector_cast_to_bit_vector(0, &(MUX_683), &(konst_682));\
}bit_vector_or(&(MUX_677), &(MUX_683), &(OR_u1_u1_684));\
bit_vector_or(&(OR_u1_u1_671), &(OR_u1_u1_684), &(OR_u1_u1_685));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_685));\
;

#define _outputPort_1_Daemon_call_stmt_696_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_1_Daemon_assign_stmt_705_c_macro_ __declare_static_bit_vector(konst_699,3);\
bit_vector_clear(&konst_699);\
__declare_static_bit_vector(NEQ_u3_u1_700,1);\
__declare_static_bit_vector(konst_702,8);\
bit_vector_clear(&konst_702);\
__declare_static_bit_vector(EQ_u8_u1_703,1);\
__declare_static_bit_vector(AND_u1_u1_704,1);\
bit_vector_clear(&konst_699);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_699), &NEQ_u3_u1_700);\
bit_vector_clear(&konst_702);\
bit_vector_equal(0, &(down_counter), &(konst_702), &(EQ_u8_u1_703));\
bit_vector_and(&(NEQ_u3_u1_700), &(EQ_u8_u1_703), &(AND_u1_u1_704));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_704));\
;

#define _outputPort_1_Daemon_assign_stmt_716_c_macro_ __declare_static_bit_vector(konst_708,8);\
bit_vector_clear(&konst_708);\
konst_708.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_711,8);\
bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_712,8);\
__declare_static_bit_vector(MUX_714,8);\
__declare_static_bit_vector(MUX_715,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_708);\
konst_708.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_715), &(konst_708));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_711), &(SUB_u8_u8_712));\
bit_vector_cast_to_bit_vector(0, &(MUX_714), &(SUB_u8_u8_712));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_714), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_715), &(MUX_714));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_715));\
;

#define _outputPort_1_Daemon_assign_stmt_724_c_macro_ __declare_static_bit_vector(NOT_u1_u1_719,1);\
__declare_static_bit_vector(konst_721,3);\
bit_vector_clear(&konst_721);\
konst_721.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_722,1);\
__declare_static_bit_vector(OR_u1_u1_723,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_719));\
bit_vector_clear(&konst_721);\
konst_721.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_721), &(EQ_u3_u1_722));\
bit_vector_or(&(NOT_u1_u1_719), &(EQ_u3_u1_722), &(OR_u1_u1_723));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_723));\
;

#define _outputPort_1_Daemon_assign_stmt_732_c_macro_ __declare_static_bit_vector(NOT_u1_u1_727,1);\
__declare_static_bit_vector(konst_729,3);\
bit_vector_clear(&konst_729);\
konst_729.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_730,1);\
__declare_static_bit_vector(OR_u1_u1_731,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_727));\
bit_vector_clear(&konst_729);\
konst_729.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_729), &(EQ_u3_u1_730));\
bit_vector_or(&(NOT_u1_u1_727), &(EQ_u3_u1_730), &(OR_u1_u1_731));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_731));\
;

#define _outputPort_1_Daemon_assign_stmt_740_c_macro_ __declare_static_bit_vector(NOT_u1_u1_735,1);\
__declare_static_bit_vector(konst_737,3);\
bit_vector_clear(&konst_737);\
konst_737.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_738,1);\
__declare_static_bit_vector(OR_u1_u1_739,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_735));\
bit_vector_clear(&konst_737);\
konst_737.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_737), &(EQ_u3_u1_738));\
bit_vector_or(&(NOT_u1_u1_735), &(EQ_u3_u1_738), &(OR_u1_u1_739));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_739));\
;

#define _outputPort_1_Daemon_assign_stmt_748_c_macro_ __declare_static_bit_vector(NOT_u1_u1_743,1);\
__declare_static_bit_vector(konst_745,3);\
bit_vector_clear(&konst_745);\
konst_745.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_746,1);\
__declare_static_bit_vector(OR_u1_u1_747,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_743));\
bit_vector_clear(&konst_745);\
konst_745.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_745), &(EQ_u3_u1_746));\
bit_vector_or(&(NOT_u1_u1_743), &(EQ_u3_u1_746), &(OR_u1_u1_747));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_747));\
;

#define _outputPort_1_Daemon_stmt_759_c_macro_ uint32_t _outputPort_1_Daemon_stmt_759_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t%s\n",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_759_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_1_Daemon_assign_stmt_792_c_macro_ __declare_static_bit_vector(konst_762,3);\
bit_vector_clear(&konst_762);\
konst_762.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_763,1);\
__declare_static_bit_vector(slice_765,32);\
__declare_static_bit_vector(konst_766,32);\
bit_vector_clear(&konst_766);\
__declare_static_bit_vector(MUX_767,32);\
__declare_static_bit_vector(konst_769,3);\
bit_vector_clear(&konst_769);\
konst_769.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_770,1);\
__declare_static_bit_vector(slice_772,32);\
__declare_static_bit_vector(konst_773,32);\
bit_vector_clear(&konst_773);\
__declare_static_bit_vector(MUX_774,32);\
__declare_static_bit_vector(OR_u32_u32_775,32);\
__declare_static_bit_vector(konst_777,3);\
bit_vector_clear(&konst_777);\
konst_777.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_778,1);\
__declare_static_bit_vector(slice_780,32);\
__declare_static_bit_vector(konst_781,32);\
bit_vector_clear(&konst_781);\
__declare_static_bit_vector(MUX_782,32);\
__declare_static_bit_vector(konst_784,3);\
bit_vector_clear(&konst_784);\
konst_784.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_785,1);\
__declare_static_bit_vector(slice_787,32);\
__declare_static_bit_vector(konst_788,32);\
bit_vector_clear(&konst_788);\
__declare_static_bit_vector(MUX_789,32);\
__declare_static_bit_vector(OR_u32_u32_790,32);\
__declare_static_bit_vector(OR_u32_u32_791,32);\
bit_vector_clear(&konst_762);\
konst_762.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_762), &(EQ_u3_u1_763));\
if (has_undefined_bit(&EQ_u3_u1_763)) {fprintf(stderr, "Error: variable EQ_u3_u1_763 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_763));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_763)){bit_vector_slice(&(pkt_1_e_word), &(slice_765), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_767), &(slice_765));\
}else {bit_vector_clear(&konst_766);\
bit_vector_cast_to_bit_vector(0, &(MUX_767), &(konst_766));\
}bit_vector_clear(&konst_769);\
konst_769.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_769), &(EQ_u3_u1_770));\
if (has_undefined_bit(&EQ_u3_u1_770)) {fprintf(stderr, "Error: variable EQ_u3_u1_770 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_770));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_770)){bit_vector_slice(&(pkt_2_e_word), &(slice_772), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_774), &(slice_772));\
}else {bit_vector_clear(&konst_773);\
bit_vector_cast_to_bit_vector(0, &(MUX_774), &(konst_773));\
}bit_vector_or(&(MUX_767), &(MUX_774), &(OR_u32_u32_775));\
bit_vector_clear(&konst_777);\
konst_777.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_777), &(EQ_u3_u1_778));\
if (has_undefined_bit(&EQ_u3_u1_778)) {fprintf(stderr, "Error: variable EQ_u3_u1_778 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_778));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_778)){bit_vector_slice(&(pkt_3_e_word), &(slice_780), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_782), &(slice_780));\
}else {bit_vector_clear(&konst_781);\
bit_vector_cast_to_bit_vector(0, &(MUX_782), &(konst_781));\
}bit_vector_clear(&konst_784);\
konst_784.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_784), &(EQ_u3_u1_785));\
if (has_undefined_bit(&EQ_u3_u1_785)) {fprintf(stderr, "Error: variable EQ_u3_u1_785 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_785));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_785)){bit_vector_slice(&(pkt_4_e_word), &(slice_787), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_789), &(slice_787));\
}else {bit_vector_clear(&konst_788);\
bit_vector_cast_to_bit_vector(0, &(MUX_789), &(konst_788));\
}bit_vector_or(&(MUX_782), &(MUX_789), &(OR_u32_u32_790));\
bit_vector_or(&(OR_u32_u32_775), &(OR_u32_u32_790), &(OR_u32_u32_791));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_791));\
;

#define _outputPort_1_Daemon_assign_stmt_821_c_macro_ __declare_static_bit_vector(konst_795,3);\
bit_vector_clear(&konst_795);\
konst_795.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_796,1);\
__declare_static_bit_vector(konst_798,1);\
bit_vector_clear(&konst_798);\
__declare_static_bit_vector(MUX_799,1);\
__declare_static_bit_vector(konst_801,3);\
bit_vector_clear(&konst_801);\
konst_801.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_802,1);\
__declare_static_bit_vector(konst_804,1);\
bit_vector_clear(&konst_804);\
__declare_static_bit_vector(MUX_805,1);\
__declare_static_bit_vector(OR_u1_u1_806,1);\
__declare_static_bit_vector(konst_808,3);\
bit_vector_clear(&konst_808);\
konst_808.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_809,1);\
__declare_static_bit_vector(konst_811,1);\
bit_vector_clear(&konst_811);\
__declare_static_bit_vector(MUX_812,1);\
__declare_static_bit_vector(konst_814,3);\
bit_vector_clear(&konst_814);\
konst_814.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_815,1);\
__declare_static_bit_vector(konst_817,1);\
bit_vector_clear(&konst_817);\
__declare_static_bit_vector(MUX_818,1);\
__declare_static_bit_vector(OR_u1_u1_819,1);\
__declare_static_bit_vector(OR_u1_u1_820,1);\
bit_vector_clear(&konst_795);\
konst_795.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_795), &(EQ_u3_u1_796));\
if (has_undefined_bit(&EQ_u3_u1_796)) {fprintf(stderr, "Error: variable EQ_u3_u1_796 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_796));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_796)){bit_vector_cast_to_bit_vector(0, &(MUX_799), &(p1_valid));\
}else {bit_vector_clear(&konst_798);\
bit_vector_cast_to_bit_vector(0, &(MUX_799), &(konst_798));\
}bit_vector_clear(&konst_801);\
konst_801.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_801), &(EQ_u3_u1_802));\
if (has_undefined_bit(&EQ_u3_u1_802)) {fprintf(stderr, "Error: variable EQ_u3_u1_802 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_802));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_802)){bit_vector_cast_to_bit_vector(0, &(MUX_805), &(p2_valid));\
}else {bit_vector_clear(&konst_804);\
bit_vector_cast_to_bit_vector(0, &(MUX_805), &(konst_804));\
}bit_vector_or(&(MUX_799), &(MUX_805), &(OR_u1_u1_806));\
bit_vector_clear(&konst_808);\
konst_808.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_808), &(EQ_u3_u1_809));\
if (has_undefined_bit(&EQ_u3_u1_809)) {fprintf(stderr, "Error: variable EQ_u3_u1_809 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_809));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_809)){bit_vector_cast_to_bit_vector(0, &(MUX_812), &(p3_valid));\
}else {bit_vector_clear(&konst_811);\
bit_vector_cast_to_bit_vector(0, &(MUX_812), &(konst_811));\
}bit_vector_clear(&konst_814);\
konst_814.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_814), &(EQ_u3_u1_815));\
if (has_undefined_bit(&EQ_u3_u1_815)) {fprintf(stderr, "Error: variable EQ_u3_u1_815 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_815));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_815)){bit_vector_cast_to_bit_vector(0, &(MUX_818), &(p4_valid));\
}else {bit_vector_clear(&konst_817);\
bit_vector_cast_to_bit_vector(0, &(MUX_818), &(konst_817));\
}bit_vector_or(&(MUX_812), &(MUX_818), &(OR_u1_u1_819));\
bit_vector_or(&(OR_u1_u1_806), &(OR_u1_u1_819), &(OR_u1_u1_820));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_820));\
;

#define _outputPort_1_Daemon_assign_stmt_825_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_1",&(data_to_out));\
}
;
;

#define _outputPort_1_Daemon_branch_block_stmt_602_c_export_apply_macro_ ;

#define _outputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_2_Daemon_branch_block_stmt_831_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_2_Daemon_merge_stmt_833_c_preamble_macro_ uint8_t merge_stmt_833_entry_flag;\
merge_stmt_833_entry_flag = do_while_entry_flag;\
goto merge_stmt_833_run;\
merge_stmt_833_run: ;\

#define _outputPort_2_Daemon_phi_stmt_834_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_838_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_2_842,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_2",&(RPIPE_noblock_obuf_1_2_842));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_2_842));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_843_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_2_847,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_2",&(RPIPE_noblock_obuf_2_2_847));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_2_847));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_848_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_2_852,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_2",&(RPIPE_noblock_obuf_3_2_852));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_2_852));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_853_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_2_857,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_2",&(RPIPE_noblock_obuf_4_2_857));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_2_857));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_858_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_862_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_2_Daemon_merge_stmt_833_c_postamble_macro_ merge_stmt_833_entry_flag = 0;

#define _outputPort_2_Daemon_assign_stmt_871_c_macro_ __declare_static_bit_vector(konst_869,33);\
bit_vector_clear(&konst_869);\
konst_869.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_870,1);\
bit_vector_clear(&konst_869);\
konst_869.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_869), &(BITSEL_u33_u1_870));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_870));\
;

#define _outputPort_2_Daemon_assign_stmt_876_c_macro_ __declare_static_bit_vector(konst_874,33);\
bit_vector_clear(&konst_874);\
konst_874.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_875,1);\
bit_vector_clear(&konst_874);\
konst_874.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_874), &(BITSEL_u33_u1_875));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_875));\
;

#define _outputPort_2_Daemon_assign_stmt_881_c_macro_ __declare_static_bit_vector(konst_879,33);\
bit_vector_clear(&konst_879);\
konst_879.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_880,1);\
bit_vector_clear(&konst_879);\
konst_879.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_879), &(BITSEL_u33_u1_880));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_880));\
;

#define _outputPort_2_Daemon_assign_stmt_886_c_macro_ __declare_static_bit_vector(konst_884,33);\
bit_vector_clear(&konst_884);\
konst_884.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_885,1);\
bit_vector_clear(&konst_884);\
konst_884.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_884), &(BITSEL_u33_u1_885));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_885));\
;

#define _outputPort_2_Daemon_assign_stmt_915_c_macro_ __declare_static_bit_vector(konst_889,3);\
bit_vector_clear(&konst_889);\
konst_889.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_890,1);\
__declare_static_bit_vector(konst_892,1);\
bit_vector_clear(&konst_892);\
__declare_static_bit_vector(MUX_893,1);\
__declare_static_bit_vector(konst_895,3);\
bit_vector_clear(&konst_895);\
konst_895.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_896,1);\
__declare_static_bit_vector(konst_898,1);\
bit_vector_clear(&konst_898);\
__declare_static_bit_vector(MUX_899,1);\
__declare_static_bit_vector(OR_u1_u1_900,1);\
__declare_static_bit_vector(konst_902,3);\
bit_vector_clear(&konst_902);\
konst_902.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_903,1);\
__declare_static_bit_vector(konst_905,1);\
bit_vector_clear(&konst_905);\
__declare_static_bit_vector(MUX_906,1);\
__declare_static_bit_vector(konst_908,3);\
bit_vector_clear(&konst_908);\
konst_908.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_909,1);\
__declare_static_bit_vector(konst_911,1);\
bit_vector_clear(&konst_911);\
__declare_static_bit_vector(MUX_912,1);\
__declare_static_bit_vector(OR_u1_u1_913,1);\
__declare_static_bit_vector(OR_u1_u1_914,1);\
bit_vector_clear(&konst_889);\
konst_889.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_889), &(EQ_u3_u1_890));\
if (has_undefined_bit(&EQ_u3_u1_890)) {fprintf(stderr, "Error: variable EQ_u3_u1_890 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_890));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_890)){bit_vector_cast_to_bit_vector(0, &(MUX_893), &(p1_valid));\
}else {bit_vector_clear(&konst_892);\
bit_vector_cast_to_bit_vector(0, &(MUX_893), &(konst_892));\
}bit_vector_clear(&konst_895);\
konst_895.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_895), &(EQ_u3_u1_896));\
if (has_undefined_bit(&EQ_u3_u1_896)) {fprintf(stderr, "Error: variable EQ_u3_u1_896 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_896));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_896)){bit_vector_cast_to_bit_vector(0, &(MUX_899), &(p2_valid));\
}else {bit_vector_clear(&konst_898);\
bit_vector_cast_to_bit_vector(0, &(MUX_899), &(konst_898));\
}bit_vector_or(&(MUX_893), &(MUX_899), &(OR_u1_u1_900));\
bit_vector_clear(&konst_902);\
konst_902.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_902), &(EQ_u3_u1_903));\
if (has_undefined_bit(&EQ_u3_u1_903)) {fprintf(stderr, "Error: variable EQ_u3_u1_903 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_903));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_903)){bit_vector_cast_to_bit_vector(0, &(MUX_906), &(p3_valid));\
}else {bit_vector_clear(&konst_905);\
bit_vector_cast_to_bit_vector(0, &(MUX_906), &(konst_905));\
}bit_vector_clear(&konst_908);\
konst_908.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_908), &(EQ_u3_u1_909));\
if (has_undefined_bit(&EQ_u3_u1_909)) {fprintf(stderr, "Error: variable EQ_u3_u1_909 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_909));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_909)){bit_vector_cast_to_bit_vector(0, &(MUX_912), &(p4_valid));\
}else {bit_vector_clear(&konst_911);\
bit_vector_cast_to_bit_vector(0, &(MUX_912), &(konst_911));\
}bit_vector_or(&(MUX_906), &(MUX_912), &(OR_u1_u1_913));\
bit_vector_or(&(OR_u1_u1_900), &(OR_u1_u1_913), &(OR_u1_u1_914));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_914));\
;

#define _outputPort_2_Daemon_call_stmt_925_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_2_Daemon_assign_stmt_934_c_macro_ __declare_static_bit_vector(konst_928,3);\
bit_vector_clear(&konst_928);\
__declare_static_bit_vector(NEQ_u3_u1_929,1);\
__declare_static_bit_vector(konst_931,8);\
bit_vector_clear(&konst_931);\
__declare_static_bit_vector(EQ_u8_u1_932,1);\
__declare_static_bit_vector(AND_u1_u1_933,1);\
bit_vector_clear(&konst_928);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_928), &NEQ_u3_u1_929);\
bit_vector_clear(&konst_931);\
bit_vector_equal(0, &(down_counter), &(konst_931), &(EQ_u8_u1_932));\
bit_vector_and(&(NEQ_u3_u1_929), &(EQ_u8_u1_932), &(AND_u1_u1_933));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_933));\
;

#define _outputPort_2_Daemon_assign_stmt_945_c_macro_ __declare_static_bit_vector(konst_937,8);\
bit_vector_clear(&konst_937);\
konst_937.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_940,8);\
bit_vector_clear(&konst_940);\
konst_940.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_941,8);\
__declare_static_bit_vector(MUX_943,8);\
__declare_static_bit_vector(MUX_944,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_937);\
konst_937.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_944), &(konst_937));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_940);\
konst_940.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_940), &(SUB_u8_u8_941));\
bit_vector_cast_to_bit_vector(0, &(MUX_943), &(SUB_u8_u8_941));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_943), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_944), &(MUX_943));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_944));\
;

#define _outputPort_2_Daemon_assign_stmt_953_c_macro_ __declare_static_bit_vector(NOT_u1_u1_948,1);\
__declare_static_bit_vector(konst_950,3);\
bit_vector_clear(&konst_950);\
konst_950.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_951,1);\
__declare_static_bit_vector(OR_u1_u1_952,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_948));\
bit_vector_clear(&konst_950);\
konst_950.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_950), &(EQ_u3_u1_951));\
bit_vector_or(&(NOT_u1_u1_948), &(EQ_u3_u1_951), &(OR_u1_u1_952));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_952));\
;

#define _outputPort_2_Daemon_assign_stmt_961_c_macro_ __declare_static_bit_vector(NOT_u1_u1_956,1);\
__declare_static_bit_vector(konst_958,3);\
bit_vector_clear(&konst_958);\
konst_958.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_959,1);\
__declare_static_bit_vector(OR_u1_u1_960,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_956));\
bit_vector_clear(&konst_958);\
konst_958.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_958), &(EQ_u3_u1_959));\
bit_vector_or(&(NOT_u1_u1_956), &(EQ_u3_u1_959), &(OR_u1_u1_960));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_960));\
;

#define _outputPort_2_Daemon_assign_stmt_969_c_macro_ __declare_static_bit_vector(NOT_u1_u1_964,1);\
__declare_static_bit_vector(konst_966,3);\
bit_vector_clear(&konst_966);\
konst_966.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_967,1);\
__declare_static_bit_vector(OR_u1_u1_968,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_964));\
bit_vector_clear(&konst_966);\
konst_966.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_966), &(EQ_u3_u1_967));\
bit_vector_or(&(NOT_u1_u1_964), &(EQ_u3_u1_967), &(OR_u1_u1_968));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_968));\
;

#define _outputPort_2_Daemon_assign_stmt_977_c_macro_ __declare_static_bit_vector(NOT_u1_u1_972,1);\
__declare_static_bit_vector(konst_974,3);\
bit_vector_clear(&konst_974);\
konst_974.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_975,1);\
__declare_static_bit_vector(OR_u1_u1_976,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_972));\
bit_vector_clear(&konst_974);\
konst_974.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_974), &(EQ_u3_u1_975));\
bit_vector_or(&(NOT_u1_u1_972), &(EQ_u3_u1_975), &(OR_u1_u1_976));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_976));\
;

#define _outputPort_2_Daemon_stmt_988_c_macro_ uint32_t _outputPort_2_Daemon_stmt_988_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t%s\n",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_988_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_2_Daemon_assign_stmt_1021_c_macro_ __declare_static_bit_vector(konst_991,3);\
bit_vector_clear(&konst_991);\
konst_991.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_992,1);\
__declare_static_bit_vector(slice_994,32);\
__declare_static_bit_vector(konst_995,32);\
bit_vector_clear(&konst_995);\
__declare_static_bit_vector(MUX_996,32);\
__declare_static_bit_vector(konst_998,3);\
bit_vector_clear(&konst_998);\
konst_998.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_999,1);\
__declare_static_bit_vector(slice_1001,32);\
__declare_static_bit_vector(konst_1002,32);\
bit_vector_clear(&konst_1002);\
__declare_static_bit_vector(MUX_1003,32);\
__declare_static_bit_vector(OR_u32_u32_1004,32);\
__declare_static_bit_vector(konst_1006,3);\
bit_vector_clear(&konst_1006);\
konst_1006.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1007,1);\
__declare_static_bit_vector(slice_1009,32);\
__declare_static_bit_vector(konst_1010,32);\
bit_vector_clear(&konst_1010);\
__declare_static_bit_vector(MUX_1011,32);\
__declare_static_bit_vector(konst_1013,3);\
bit_vector_clear(&konst_1013);\
konst_1013.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1014,1);\
__declare_static_bit_vector(slice_1016,32);\
__declare_static_bit_vector(konst_1017,32);\
bit_vector_clear(&konst_1017);\
__declare_static_bit_vector(MUX_1018,32);\
__declare_static_bit_vector(OR_u32_u32_1019,32);\
__declare_static_bit_vector(OR_u32_u32_1020,32);\
bit_vector_clear(&konst_991);\
konst_991.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_991), &(EQ_u3_u1_992));\
if (has_undefined_bit(&EQ_u3_u1_992)) {fprintf(stderr, "Error: variable EQ_u3_u1_992 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_992));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_992)){bit_vector_slice(&(pkt_1_e_word), &(slice_994), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_996), &(slice_994));\
}else {bit_vector_clear(&konst_995);\
bit_vector_cast_to_bit_vector(0, &(MUX_996), &(konst_995));\
}bit_vector_clear(&konst_998);\
konst_998.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_998), &(EQ_u3_u1_999));\
if (has_undefined_bit(&EQ_u3_u1_999)) {fprintf(stderr, "Error: variable EQ_u3_u1_999 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_999));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_999)){bit_vector_slice(&(pkt_2_e_word), &(slice_1001), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1003), &(slice_1001));\
}else {bit_vector_clear(&konst_1002);\
bit_vector_cast_to_bit_vector(0, &(MUX_1003), &(konst_1002));\
}bit_vector_or(&(MUX_996), &(MUX_1003), &(OR_u32_u32_1004));\
bit_vector_clear(&konst_1006);\
konst_1006.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1006), &(EQ_u3_u1_1007));\
if (has_undefined_bit(&EQ_u3_u1_1007)) {fprintf(stderr, "Error: variable EQ_u3_u1_1007 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1007));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1007)){bit_vector_slice(&(pkt_3_e_word), &(slice_1009), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1011), &(slice_1009));\
}else {bit_vector_clear(&konst_1010);\
bit_vector_cast_to_bit_vector(0, &(MUX_1011), &(konst_1010));\
}bit_vector_clear(&konst_1013);\
konst_1013.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1013), &(EQ_u3_u1_1014));\
if (has_undefined_bit(&EQ_u3_u1_1014)) {fprintf(stderr, "Error: variable EQ_u3_u1_1014 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1014));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1014)){bit_vector_slice(&(pkt_4_e_word), &(slice_1016), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1018), &(slice_1016));\
}else {bit_vector_clear(&konst_1017);\
bit_vector_cast_to_bit_vector(0, &(MUX_1018), &(konst_1017));\
}bit_vector_or(&(MUX_1011), &(MUX_1018), &(OR_u32_u32_1019));\
bit_vector_or(&(OR_u32_u32_1004), &(OR_u32_u32_1019), &(OR_u32_u32_1020));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1020));\
;

#define _outputPort_2_Daemon_assign_stmt_1050_c_macro_ __declare_static_bit_vector(konst_1024,3);\
bit_vector_clear(&konst_1024);\
konst_1024.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1025,1);\
__declare_static_bit_vector(konst_1027,1);\
bit_vector_clear(&konst_1027);\
__declare_static_bit_vector(MUX_1028,1);\
__declare_static_bit_vector(konst_1030,3);\
bit_vector_clear(&konst_1030);\
konst_1030.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1031,1);\
__declare_static_bit_vector(konst_1033,1);\
bit_vector_clear(&konst_1033);\
__declare_static_bit_vector(MUX_1034,1);\
__declare_static_bit_vector(OR_u1_u1_1035,1);\
__declare_static_bit_vector(konst_1037,3);\
bit_vector_clear(&konst_1037);\
konst_1037.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1038,1);\
__declare_static_bit_vector(konst_1040,1);\
bit_vector_clear(&konst_1040);\
__declare_static_bit_vector(MUX_1041,1);\
__declare_static_bit_vector(konst_1043,3);\
bit_vector_clear(&konst_1043);\
konst_1043.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1044,1);\
__declare_static_bit_vector(konst_1046,1);\
bit_vector_clear(&konst_1046);\
__declare_static_bit_vector(MUX_1047,1);\
__declare_static_bit_vector(OR_u1_u1_1048,1);\
__declare_static_bit_vector(OR_u1_u1_1049,1);\
bit_vector_clear(&konst_1024);\
konst_1024.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1024), &(EQ_u3_u1_1025));\
if (has_undefined_bit(&EQ_u3_u1_1025)) {fprintf(stderr, "Error: variable EQ_u3_u1_1025 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1025));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1025)){bit_vector_cast_to_bit_vector(0, &(MUX_1028), &(p1_valid));\
}else {bit_vector_clear(&konst_1027);\
bit_vector_cast_to_bit_vector(0, &(MUX_1028), &(konst_1027));\
}bit_vector_clear(&konst_1030);\
konst_1030.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1030), &(EQ_u3_u1_1031));\
if (has_undefined_bit(&EQ_u3_u1_1031)) {fprintf(stderr, "Error: variable EQ_u3_u1_1031 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1031));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1031)){bit_vector_cast_to_bit_vector(0, &(MUX_1034), &(p2_valid));\
}else {bit_vector_clear(&konst_1033);\
bit_vector_cast_to_bit_vector(0, &(MUX_1034), &(konst_1033));\
}bit_vector_or(&(MUX_1028), &(MUX_1034), &(OR_u1_u1_1035));\
bit_vector_clear(&konst_1037);\
konst_1037.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1037), &(EQ_u3_u1_1038));\
if (has_undefined_bit(&EQ_u3_u1_1038)) {fprintf(stderr, "Error: variable EQ_u3_u1_1038 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1038));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1038)){bit_vector_cast_to_bit_vector(0, &(MUX_1041), &(p3_valid));\
}else {bit_vector_clear(&konst_1040);\
bit_vector_cast_to_bit_vector(0, &(MUX_1041), &(konst_1040));\
}bit_vector_clear(&konst_1043);\
konst_1043.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1043), &(EQ_u3_u1_1044));\
if (has_undefined_bit(&EQ_u3_u1_1044)) {fprintf(stderr, "Error: variable EQ_u3_u1_1044 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1044));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1044)){bit_vector_cast_to_bit_vector(0, &(MUX_1047), &(p4_valid));\
}else {bit_vector_clear(&konst_1046);\
bit_vector_cast_to_bit_vector(0, &(MUX_1047), &(konst_1046));\
}bit_vector_or(&(MUX_1041), &(MUX_1047), &(OR_u1_u1_1048));\
bit_vector_or(&(OR_u1_u1_1035), &(OR_u1_u1_1048), &(OR_u1_u1_1049));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1049));\
;

#define _outputPort_2_Daemon_assign_stmt_1054_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_2",&(data_to_out));\
}
;
;

#define _outputPort_2_Daemon_branch_block_stmt_831_c_export_apply_macro_ ;

#define _outputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_3_Daemon_branch_block_stmt_1060_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_3_Daemon_merge_stmt_1062_c_preamble_macro_ uint8_t merge_stmt_1062_entry_flag;\
merge_stmt_1062_entry_flag = do_while_entry_flag;\
goto merge_stmt_1062_run;\
merge_stmt_1062_run: ;\

#define _outputPort_3_Daemon_phi_stmt_1063_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1067_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_3_1071,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_3",&(RPIPE_noblock_obuf_1_3_1071));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_3_1071));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1072_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_3_1076,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_3",&(RPIPE_noblock_obuf_2_3_1076));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_3_1076));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1077_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_3_1081,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_3",&(RPIPE_noblock_obuf_3_3_1081));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_3_1081));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1082_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_3_1086,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_3",&(RPIPE_noblock_obuf_4_3_1086));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_3_1086));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1087_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1091_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_3_Daemon_merge_stmt_1062_c_postamble_macro_ merge_stmt_1062_entry_flag = 0;

#define _outputPort_3_Daemon_assign_stmt_1100_c_macro_ __declare_static_bit_vector(konst_1098,33);\
bit_vector_clear(&konst_1098);\
konst_1098.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1099,1);\
bit_vector_clear(&konst_1098);\
konst_1098.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1098), &(BITSEL_u33_u1_1099));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1099));\
;

#define _outputPort_3_Daemon_assign_stmt_1105_c_macro_ __declare_static_bit_vector(konst_1103,33);\
bit_vector_clear(&konst_1103);\
konst_1103.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1104,1);\
bit_vector_clear(&konst_1103);\
konst_1103.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1103), &(BITSEL_u33_u1_1104));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1104));\
;

#define _outputPort_3_Daemon_assign_stmt_1110_c_macro_ __declare_static_bit_vector(konst_1108,33);\
bit_vector_clear(&konst_1108);\
konst_1108.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1109,1);\
bit_vector_clear(&konst_1108);\
konst_1108.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1108), &(BITSEL_u33_u1_1109));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1109));\
;

#define _outputPort_3_Daemon_assign_stmt_1115_c_macro_ __declare_static_bit_vector(konst_1113,33);\
bit_vector_clear(&konst_1113);\
konst_1113.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1114,1);\
bit_vector_clear(&konst_1113);\
konst_1113.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1113), &(BITSEL_u33_u1_1114));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1114));\
;

#define _outputPort_3_Daemon_assign_stmt_1144_c_macro_ __declare_static_bit_vector(konst_1118,3);\
bit_vector_clear(&konst_1118);\
konst_1118.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1119,1);\
__declare_static_bit_vector(konst_1121,1);\
bit_vector_clear(&konst_1121);\
__declare_static_bit_vector(MUX_1122,1);\
__declare_static_bit_vector(konst_1124,3);\
bit_vector_clear(&konst_1124);\
konst_1124.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1125,1);\
__declare_static_bit_vector(konst_1127,1);\
bit_vector_clear(&konst_1127);\
__declare_static_bit_vector(MUX_1128,1);\
__declare_static_bit_vector(OR_u1_u1_1129,1);\
__declare_static_bit_vector(konst_1131,3);\
bit_vector_clear(&konst_1131);\
konst_1131.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1132,1);\
__declare_static_bit_vector(konst_1134,1);\
bit_vector_clear(&konst_1134);\
__declare_static_bit_vector(MUX_1135,1);\
__declare_static_bit_vector(konst_1137,3);\
bit_vector_clear(&konst_1137);\
konst_1137.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1138,1);\
__declare_static_bit_vector(konst_1140,1);\
bit_vector_clear(&konst_1140);\
__declare_static_bit_vector(MUX_1141,1);\
__declare_static_bit_vector(OR_u1_u1_1142,1);\
__declare_static_bit_vector(OR_u1_u1_1143,1);\
bit_vector_clear(&konst_1118);\
konst_1118.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1118), &(EQ_u3_u1_1119));\
if (has_undefined_bit(&EQ_u3_u1_1119)) {fprintf(stderr, "Error: variable EQ_u3_u1_1119 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1119));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1119)){bit_vector_cast_to_bit_vector(0, &(MUX_1122), &(p1_valid));\
}else {bit_vector_clear(&konst_1121);\
bit_vector_cast_to_bit_vector(0, &(MUX_1122), &(konst_1121));\
}bit_vector_clear(&konst_1124);\
konst_1124.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1124), &(EQ_u3_u1_1125));\
if (has_undefined_bit(&EQ_u3_u1_1125)) {fprintf(stderr, "Error: variable EQ_u3_u1_1125 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1125));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1125)){bit_vector_cast_to_bit_vector(0, &(MUX_1128), &(p2_valid));\
}else {bit_vector_clear(&konst_1127);\
bit_vector_cast_to_bit_vector(0, &(MUX_1128), &(konst_1127));\
}bit_vector_or(&(MUX_1122), &(MUX_1128), &(OR_u1_u1_1129));\
bit_vector_clear(&konst_1131);\
konst_1131.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1131), &(EQ_u3_u1_1132));\
if (has_undefined_bit(&EQ_u3_u1_1132)) {fprintf(stderr, "Error: variable EQ_u3_u1_1132 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1132));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1132)){bit_vector_cast_to_bit_vector(0, &(MUX_1135), &(p3_valid));\
}else {bit_vector_clear(&konst_1134);\
bit_vector_cast_to_bit_vector(0, &(MUX_1135), &(konst_1134));\
}bit_vector_clear(&konst_1137);\
konst_1137.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1137), &(EQ_u3_u1_1138));\
if (has_undefined_bit(&EQ_u3_u1_1138)) {fprintf(stderr, "Error: variable EQ_u3_u1_1138 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1138));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1138)){bit_vector_cast_to_bit_vector(0, &(MUX_1141), &(p4_valid));\
}else {bit_vector_clear(&konst_1140);\
bit_vector_cast_to_bit_vector(0, &(MUX_1141), &(konst_1140));\
}bit_vector_or(&(MUX_1135), &(MUX_1141), &(OR_u1_u1_1142));\
bit_vector_or(&(OR_u1_u1_1129), &(OR_u1_u1_1142), &(OR_u1_u1_1143));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1143));\
;

#define _outputPort_3_Daemon_call_stmt_1154_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_3_Daemon_assign_stmt_1163_c_macro_ __declare_static_bit_vector(konst_1157,3);\
bit_vector_clear(&konst_1157);\
__declare_static_bit_vector(NEQ_u3_u1_1158,1);\
__declare_static_bit_vector(konst_1160,8);\
bit_vector_clear(&konst_1160);\
__declare_static_bit_vector(EQ_u8_u1_1161,1);\
__declare_static_bit_vector(AND_u1_u1_1162,1);\
bit_vector_clear(&konst_1157);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1157), &NEQ_u3_u1_1158);\
bit_vector_clear(&konst_1160);\
bit_vector_equal(0, &(down_counter), &(konst_1160), &(EQ_u8_u1_1161));\
bit_vector_and(&(NEQ_u3_u1_1158), &(EQ_u8_u1_1161), &(AND_u1_u1_1162));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1162));\
;

#define _outputPort_3_Daemon_assign_stmt_1174_c_macro_ __declare_static_bit_vector(konst_1166,8);\
bit_vector_clear(&konst_1166);\
konst_1166.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1169,8);\
bit_vector_clear(&konst_1169);\
konst_1169.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1170,8);\
__declare_static_bit_vector(MUX_1172,8);\
__declare_static_bit_vector(MUX_1173,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1166);\
konst_1166.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1173), &(konst_1166));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1169);\
konst_1169.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1169), &(SUB_u8_u8_1170));\
bit_vector_cast_to_bit_vector(0, &(MUX_1172), &(SUB_u8_u8_1170));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1172), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1173), &(MUX_1172));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1173));\
;

#define _outputPort_3_Daemon_assign_stmt_1182_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1177,1);\
__declare_static_bit_vector(konst_1179,3);\
bit_vector_clear(&konst_1179);\
konst_1179.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1180,1);\
__declare_static_bit_vector(OR_u1_u1_1181,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1177));\
bit_vector_clear(&konst_1179);\
konst_1179.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1179), &(EQ_u3_u1_1180));\
bit_vector_or(&(NOT_u1_u1_1177), &(EQ_u3_u1_1180), &(OR_u1_u1_1181));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1181));\
;

#define _outputPort_3_Daemon_assign_stmt_1190_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1185,1);\
__declare_static_bit_vector(konst_1187,3);\
bit_vector_clear(&konst_1187);\
konst_1187.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1188,1);\
__declare_static_bit_vector(OR_u1_u1_1189,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1185));\
bit_vector_clear(&konst_1187);\
konst_1187.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1187), &(EQ_u3_u1_1188));\
bit_vector_or(&(NOT_u1_u1_1185), &(EQ_u3_u1_1188), &(OR_u1_u1_1189));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1189));\
;

#define _outputPort_3_Daemon_assign_stmt_1198_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1193,1);\
__declare_static_bit_vector(konst_1195,3);\
bit_vector_clear(&konst_1195);\
konst_1195.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1196,1);\
__declare_static_bit_vector(OR_u1_u1_1197,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1193));\
bit_vector_clear(&konst_1195);\
konst_1195.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1195), &(EQ_u3_u1_1196));\
bit_vector_or(&(NOT_u1_u1_1193), &(EQ_u3_u1_1196), &(OR_u1_u1_1197));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1197));\
;

#define _outputPort_3_Daemon_assign_stmt_1206_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1201,1);\
__declare_static_bit_vector(konst_1203,3);\
bit_vector_clear(&konst_1203);\
konst_1203.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1204,1);\
__declare_static_bit_vector(OR_u1_u1_1205,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1201));\
bit_vector_clear(&konst_1203);\
konst_1203.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1203), &(EQ_u3_u1_1204));\
bit_vector_or(&(NOT_u1_u1_1201), &(EQ_u3_u1_1204), &(OR_u1_u1_1205));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1205));\
;

#define _outputPort_3_Daemon_stmt_1217_c_macro_ uint32_t _outputPort_3_Daemon_stmt_1217_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t%s\n",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1217_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_3_Daemon_assign_stmt_1250_c_macro_ __declare_static_bit_vector(konst_1220,3);\
bit_vector_clear(&konst_1220);\
konst_1220.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1221,1);\
__declare_static_bit_vector(slice_1223,32);\
__declare_static_bit_vector(konst_1224,32);\
bit_vector_clear(&konst_1224);\
__declare_static_bit_vector(MUX_1225,32);\
__declare_static_bit_vector(konst_1227,3);\
bit_vector_clear(&konst_1227);\
konst_1227.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1228,1);\
__declare_static_bit_vector(slice_1230,32);\
__declare_static_bit_vector(konst_1231,32);\
bit_vector_clear(&konst_1231);\
__declare_static_bit_vector(MUX_1232,32);\
__declare_static_bit_vector(OR_u32_u32_1233,32);\
__declare_static_bit_vector(konst_1235,3);\
bit_vector_clear(&konst_1235);\
konst_1235.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1236,1);\
__declare_static_bit_vector(slice_1238,32);\
__declare_static_bit_vector(konst_1239,32);\
bit_vector_clear(&konst_1239);\
__declare_static_bit_vector(MUX_1240,32);\
__declare_static_bit_vector(konst_1242,3);\
bit_vector_clear(&konst_1242);\
konst_1242.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1243,1);\
__declare_static_bit_vector(slice_1245,32);\
__declare_static_bit_vector(konst_1246,32);\
bit_vector_clear(&konst_1246);\
__declare_static_bit_vector(MUX_1247,32);\
__declare_static_bit_vector(OR_u32_u32_1248,32);\
__declare_static_bit_vector(OR_u32_u32_1249,32);\
bit_vector_clear(&konst_1220);\
konst_1220.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1220), &(EQ_u3_u1_1221));\
if (has_undefined_bit(&EQ_u3_u1_1221)) {fprintf(stderr, "Error: variable EQ_u3_u1_1221 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1221));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1221)){bit_vector_slice(&(pkt_1_e_word), &(slice_1223), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1225), &(slice_1223));\
}else {bit_vector_clear(&konst_1224);\
bit_vector_cast_to_bit_vector(0, &(MUX_1225), &(konst_1224));\
}bit_vector_clear(&konst_1227);\
konst_1227.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1227), &(EQ_u3_u1_1228));\
if (has_undefined_bit(&EQ_u3_u1_1228)) {fprintf(stderr, "Error: variable EQ_u3_u1_1228 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1228));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1228)){bit_vector_slice(&(pkt_2_e_word), &(slice_1230), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1232), &(slice_1230));\
}else {bit_vector_clear(&konst_1231);\
bit_vector_cast_to_bit_vector(0, &(MUX_1232), &(konst_1231));\
}bit_vector_or(&(MUX_1225), &(MUX_1232), &(OR_u32_u32_1233));\
bit_vector_clear(&konst_1235);\
konst_1235.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1235), &(EQ_u3_u1_1236));\
if (has_undefined_bit(&EQ_u3_u1_1236)) {fprintf(stderr, "Error: variable EQ_u3_u1_1236 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1236));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1236)){bit_vector_slice(&(pkt_3_e_word), &(slice_1238), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1240), &(slice_1238));\
}else {bit_vector_clear(&konst_1239);\
bit_vector_cast_to_bit_vector(0, &(MUX_1240), &(konst_1239));\
}bit_vector_clear(&konst_1242);\
konst_1242.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1242), &(EQ_u3_u1_1243));\
if (has_undefined_bit(&EQ_u3_u1_1243)) {fprintf(stderr, "Error: variable EQ_u3_u1_1243 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1243));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1243)){bit_vector_slice(&(pkt_4_e_word), &(slice_1245), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1247), &(slice_1245));\
}else {bit_vector_clear(&konst_1246);\
bit_vector_cast_to_bit_vector(0, &(MUX_1247), &(konst_1246));\
}bit_vector_or(&(MUX_1240), &(MUX_1247), &(OR_u32_u32_1248));\
bit_vector_or(&(OR_u32_u32_1233), &(OR_u32_u32_1248), &(OR_u32_u32_1249));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1249));\
;

#define _outputPort_3_Daemon_assign_stmt_1279_c_macro_ __declare_static_bit_vector(konst_1253,3);\
bit_vector_clear(&konst_1253);\
konst_1253.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1254,1);\
__declare_static_bit_vector(konst_1256,1);\
bit_vector_clear(&konst_1256);\
__declare_static_bit_vector(MUX_1257,1);\
__declare_static_bit_vector(konst_1259,3);\
bit_vector_clear(&konst_1259);\
konst_1259.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1260,1);\
__declare_static_bit_vector(konst_1262,1);\
bit_vector_clear(&konst_1262);\
__declare_static_bit_vector(MUX_1263,1);\
__declare_static_bit_vector(OR_u1_u1_1264,1);\
__declare_static_bit_vector(konst_1266,3);\
bit_vector_clear(&konst_1266);\
konst_1266.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1267,1);\
__declare_static_bit_vector(konst_1269,1);\
bit_vector_clear(&konst_1269);\
__declare_static_bit_vector(MUX_1270,1);\
__declare_static_bit_vector(konst_1272,3);\
bit_vector_clear(&konst_1272);\
konst_1272.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1273,1);\
__declare_static_bit_vector(konst_1275,1);\
bit_vector_clear(&konst_1275);\
__declare_static_bit_vector(MUX_1276,1);\
__declare_static_bit_vector(OR_u1_u1_1277,1);\
__declare_static_bit_vector(OR_u1_u1_1278,1);\
bit_vector_clear(&konst_1253);\
konst_1253.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1253), &(EQ_u3_u1_1254));\
if (has_undefined_bit(&EQ_u3_u1_1254)) {fprintf(stderr, "Error: variable EQ_u3_u1_1254 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1254));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1254)){bit_vector_cast_to_bit_vector(0, &(MUX_1257), &(p1_valid));\
}else {bit_vector_clear(&konst_1256);\
bit_vector_cast_to_bit_vector(0, &(MUX_1257), &(konst_1256));\
}bit_vector_clear(&konst_1259);\
konst_1259.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1259), &(EQ_u3_u1_1260));\
if (has_undefined_bit(&EQ_u3_u1_1260)) {fprintf(stderr, "Error: variable EQ_u3_u1_1260 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1260));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1260)){bit_vector_cast_to_bit_vector(0, &(MUX_1263), &(p2_valid));\
}else {bit_vector_clear(&konst_1262);\
bit_vector_cast_to_bit_vector(0, &(MUX_1263), &(konst_1262));\
}bit_vector_or(&(MUX_1257), &(MUX_1263), &(OR_u1_u1_1264));\
bit_vector_clear(&konst_1266);\
konst_1266.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1266), &(EQ_u3_u1_1267));\
if (has_undefined_bit(&EQ_u3_u1_1267)) {fprintf(stderr, "Error: variable EQ_u3_u1_1267 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1267));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1267)){bit_vector_cast_to_bit_vector(0, &(MUX_1270), &(p3_valid));\
}else {bit_vector_clear(&konst_1269);\
bit_vector_cast_to_bit_vector(0, &(MUX_1270), &(konst_1269));\
}bit_vector_clear(&konst_1272);\
konst_1272.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1272), &(EQ_u3_u1_1273));\
if (has_undefined_bit(&EQ_u3_u1_1273)) {fprintf(stderr, "Error: variable EQ_u3_u1_1273 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1273));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1273)){bit_vector_cast_to_bit_vector(0, &(MUX_1276), &(p4_valid));\
}else {bit_vector_clear(&konst_1275);\
bit_vector_cast_to_bit_vector(0, &(MUX_1276), &(konst_1275));\
}bit_vector_or(&(MUX_1270), &(MUX_1276), &(OR_u1_u1_1277));\
bit_vector_or(&(OR_u1_u1_1264), &(OR_u1_u1_1277), &(OR_u1_u1_1278));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1278));\
;

#define _outputPort_3_Daemon_assign_stmt_1283_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_3",&(data_to_out));\
}
;
;

#define _outputPort_3_Daemon_branch_block_stmt_1060_c_export_apply_macro_ ;

#define _outputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_4_Daemon_branch_block_stmt_1289_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_4_Daemon_merge_stmt_1291_c_preamble_macro_ uint8_t merge_stmt_1291_entry_flag;\
merge_stmt_1291_entry_flag = do_while_entry_flag;\
goto merge_stmt_1291_run;\
merge_stmt_1291_run: ;\

#define _outputPort_4_Daemon_phi_stmt_1292_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1296_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_4_1300,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_4",&(RPIPE_noblock_obuf_1_4_1300));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_4_1300));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1301_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_4_1305,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_4",&(RPIPE_noblock_obuf_2_4_1305));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_4_1305));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1306_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_4_1310,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_4",&(RPIPE_noblock_obuf_3_4_1310));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_4_1310));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1311_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_4_1315,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_4",&(RPIPE_noblock_obuf_4_4_1315));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_4_1315));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1316_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1320_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_4_Daemon_merge_stmt_1291_c_postamble_macro_ merge_stmt_1291_entry_flag = 0;

#define _outputPort_4_Daemon_assign_stmt_1329_c_macro_ __declare_static_bit_vector(konst_1327,33);\
bit_vector_clear(&konst_1327);\
konst_1327.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1328,1);\
bit_vector_clear(&konst_1327);\
konst_1327.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1327), &(BITSEL_u33_u1_1328));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1328));\
;

#define _outputPort_4_Daemon_assign_stmt_1334_c_macro_ __declare_static_bit_vector(konst_1332,33);\
bit_vector_clear(&konst_1332);\
konst_1332.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1333,1);\
bit_vector_clear(&konst_1332);\
konst_1332.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1332), &(BITSEL_u33_u1_1333));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1333));\
;

#define _outputPort_4_Daemon_assign_stmt_1339_c_macro_ __declare_static_bit_vector(konst_1337,33);\
bit_vector_clear(&konst_1337);\
konst_1337.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1338,1);\
bit_vector_clear(&konst_1337);\
konst_1337.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1337), &(BITSEL_u33_u1_1338));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1338));\
;

#define _outputPort_4_Daemon_assign_stmt_1344_c_macro_ __declare_static_bit_vector(konst_1342,33);\
bit_vector_clear(&konst_1342);\
konst_1342.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1343,1);\
bit_vector_clear(&konst_1342);\
konst_1342.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1342), &(BITSEL_u33_u1_1343));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1343));\
;

#define _outputPort_4_Daemon_assign_stmt_1373_c_macro_ __declare_static_bit_vector(konst_1347,3);\
bit_vector_clear(&konst_1347);\
konst_1347.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1348,1);\
__declare_static_bit_vector(konst_1350,1);\
bit_vector_clear(&konst_1350);\
__declare_static_bit_vector(MUX_1351,1);\
__declare_static_bit_vector(konst_1353,3);\
bit_vector_clear(&konst_1353);\
konst_1353.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1354,1);\
__declare_static_bit_vector(konst_1356,1);\
bit_vector_clear(&konst_1356);\
__declare_static_bit_vector(MUX_1357,1);\
__declare_static_bit_vector(OR_u1_u1_1358,1);\
__declare_static_bit_vector(konst_1360,3);\
bit_vector_clear(&konst_1360);\
konst_1360.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1361,1);\
__declare_static_bit_vector(konst_1363,1);\
bit_vector_clear(&konst_1363);\
__declare_static_bit_vector(MUX_1364,1);\
__declare_static_bit_vector(konst_1366,3);\
bit_vector_clear(&konst_1366);\
konst_1366.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1367,1);\
__declare_static_bit_vector(konst_1369,1);\
bit_vector_clear(&konst_1369);\
__declare_static_bit_vector(MUX_1370,1);\
__declare_static_bit_vector(OR_u1_u1_1371,1);\
__declare_static_bit_vector(OR_u1_u1_1372,1);\
bit_vector_clear(&konst_1347);\
konst_1347.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1347), &(EQ_u3_u1_1348));\
if (has_undefined_bit(&EQ_u3_u1_1348)) {fprintf(stderr, "Error: variable EQ_u3_u1_1348 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1348));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1348)){bit_vector_cast_to_bit_vector(0, &(MUX_1351), &(p1_valid));\
}else {bit_vector_clear(&konst_1350);\
bit_vector_cast_to_bit_vector(0, &(MUX_1351), &(konst_1350));\
}bit_vector_clear(&konst_1353);\
konst_1353.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1353), &(EQ_u3_u1_1354));\
if (has_undefined_bit(&EQ_u3_u1_1354)) {fprintf(stderr, "Error: variable EQ_u3_u1_1354 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1354));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1354)){bit_vector_cast_to_bit_vector(0, &(MUX_1357), &(p2_valid));\
}else {bit_vector_clear(&konst_1356);\
bit_vector_cast_to_bit_vector(0, &(MUX_1357), &(konst_1356));\
}bit_vector_or(&(MUX_1351), &(MUX_1357), &(OR_u1_u1_1358));\
bit_vector_clear(&konst_1360);\
konst_1360.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1360), &(EQ_u3_u1_1361));\
if (has_undefined_bit(&EQ_u3_u1_1361)) {fprintf(stderr, "Error: variable EQ_u3_u1_1361 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1361));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1361)){bit_vector_cast_to_bit_vector(0, &(MUX_1364), &(p3_valid));\
}else {bit_vector_clear(&konst_1363);\
bit_vector_cast_to_bit_vector(0, &(MUX_1364), &(konst_1363));\
}bit_vector_clear(&konst_1366);\
konst_1366.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1366), &(EQ_u3_u1_1367));\
if (has_undefined_bit(&EQ_u3_u1_1367)) {fprintf(stderr, "Error: variable EQ_u3_u1_1367 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1367));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1367)){bit_vector_cast_to_bit_vector(0, &(MUX_1370), &(p4_valid));\
}else {bit_vector_clear(&konst_1369);\
bit_vector_cast_to_bit_vector(0, &(MUX_1370), &(konst_1369));\
}bit_vector_or(&(MUX_1364), &(MUX_1370), &(OR_u1_u1_1371));\
bit_vector_or(&(OR_u1_u1_1358), &(OR_u1_u1_1371), &(OR_u1_u1_1372));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1372));\
;

#define _outputPort_4_Daemon_call_stmt_1383_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_4_Daemon_assign_stmt_1392_c_macro_ __declare_static_bit_vector(konst_1386,3);\
bit_vector_clear(&konst_1386);\
__declare_static_bit_vector(NEQ_u3_u1_1387,1);\
__declare_static_bit_vector(konst_1389,8);\
bit_vector_clear(&konst_1389);\
__declare_static_bit_vector(EQ_u8_u1_1390,1);\
__declare_static_bit_vector(AND_u1_u1_1391,1);\
bit_vector_clear(&konst_1386);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1386), &NEQ_u3_u1_1387);\
bit_vector_clear(&konst_1389);\
bit_vector_equal(0, &(down_counter), &(konst_1389), &(EQ_u8_u1_1390));\
bit_vector_and(&(NEQ_u3_u1_1387), &(EQ_u8_u1_1390), &(AND_u1_u1_1391));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1391));\
;

#define _outputPort_4_Daemon_assign_stmt_1403_c_macro_ __declare_static_bit_vector(konst_1395,8);\
bit_vector_clear(&konst_1395);\
konst_1395.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1398,8);\
bit_vector_clear(&konst_1398);\
konst_1398.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1399,8);\
__declare_static_bit_vector(MUX_1401,8);\
__declare_static_bit_vector(MUX_1402,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1395);\
konst_1395.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1402), &(konst_1395));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1398);\
konst_1398.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1398), &(SUB_u8_u8_1399));\
bit_vector_cast_to_bit_vector(0, &(MUX_1401), &(SUB_u8_u8_1399));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1401), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1402), &(MUX_1401));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1402));\
;

#define _outputPort_4_Daemon_assign_stmt_1411_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1406,1);\
__declare_static_bit_vector(konst_1408,3);\
bit_vector_clear(&konst_1408);\
konst_1408.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1409,1);\
__declare_static_bit_vector(OR_u1_u1_1410,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1406));\
bit_vector_clear(&konst_1408);\
konst_1408.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1408), &(EQ_u3_u1_1409));\
bit_vector_or(&(NOT_u1_u1_1406), &(EQ_u3_u1_1409), &(OR_u1_u1_1410));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1410));\
;

#define _outputPort_4_Daemon_assign_stmt_1419_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1414,1);\
__declare_static_bit_vector(konst_1416,3);\
bit_vector_clear(&konst_1416);\
konst_1416.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1417,1);\
__declare_static_bit_vector(OR_u1_u1_1418,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1414));\
bit_vector_clear(&konst_1416);\
konst_1416.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1416), &(EQ_u3_u1_1417));\
bit_vector_or(&(NOT_u1_u1_1414), &(EQ_u3_u1_1417), &(OR_u1_u1_1418));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1418));\
;

#define _outputPort_4_Daemon_assign_stmt_1427_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1422,1);\
__declare_static_bit_vector(konst_1424,3);\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1425,1);\
__declare_static_bit_vector(OR_u1_u1_1426,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1422));\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1424), &(EQ_u3_u1_1425));\
bit_vector_or(&(NOT_u1_u1_1422), &(EQ_u3_u1_1425), &(OR_u1_u1_1426));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1426));\
;

#define _outputPort_4_Daemon_assign_stmt_1435_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1430,1);\
__declare_static_bit_vector(konst_1432,3);\
bit_vector_clear(&konst_1432);\
konst_1432.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1433,1);\
__declare_static_bit_vector(OR_u1_u1_1434,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1430));\
bit_vector_clear(&konst_1432);\
konst_1432.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1432), &(EQ_u3_u1_1433));\
bit_vector_or(&(NOT_u1_u1_1430), &(EQ_u3_u1_1433), &(OR_u1_u1_1434));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1434));\
;

#define _outputPort_4_Daemon_stmt_1446_c_macro_ uint32_t _outputPort_4_Daemon_stmt_1446_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t%s\n",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1446_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_4_Daemon_assign_stmt_1479_c_macro_ __declare_static_bit_vector(konst_1449,3);\
bit_vector_clear(&konst_1449);\
konst_1449.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1450,1);\
__declare_static_bit_vector(slice_1452,32);\
__declare_static_bit_vector(konst_1453,32);\
bit_vector_clear(&konst_1453);\
__declare_static_bit_vector(MUX_1454,32);\
__declare_static_bit_vector(konst_1456,3);\
bit_vector_clear(&konst_1456);\
konst_1456.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1457,1);\
__declare_static_bit_vector(slice_1459,32);\
__declare_static_bit_vector(konst_1460,32);\
bit_vector_clear(&konst_1460);\
__declare_static_bit_vector(MUX_1461,32);\
__declare_static_bit_vector(OR_u32_u32_1462,32);\
__declare_static_bit_vector(konst_1464,3);\
bit_vector_clear(&konst_1464);\
konst_1464.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1465,1);\
__declare_static_bit_vector(slice_1467,32);\
__declare_static_bit_vector(konst_1468,32);\
bit_vector_clear(&konst_1468);\
__declare_static_bit_vector(MUX_1469,32);\
__declare_static_bit_vector(konst_1471,3);\
bit_vector_clear(&konst_1471);\
konst_1471.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1472,1);\
__declare_static_bit_vector(slice_1474,32);\
__declare_static_bit_vector(konst_1475,32);\
bit_vector_clear(&konst_1475);\
__declare_static_bit_vector(MUX_1476,32);\
__declare_static_bit_vector(OR_u32_u32_1477,32);\
__declare_static_bit_vector(OR_u32_u32_1478,32);\
bit_vector_clear(&konst_1449);\
konst_1449.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1449), &(EQ_u3_u1_1450));\
if (has_undefined_bit(&EQ_u3_u1_1450)) {fprintf(stderr, "Error: variable EQ_u3_u1_1450 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1450));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1450)){bit_vector_slice(&(pkt_1_e_word), &(slice_1452), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1454), &(slice_1452));\
}else {bit_vector_clear(&konst_1453);\
bit_vector_cast_to_bit_vector(0, &(MUX_1454), &(konst_1453));\
}bit_vector_clear(&konst_1456);\
konst_1456.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1456), &(EQ_u3_u1_1457));\
if (has_undefined_bit(&EQ_u3_u1_1457)) {fprintf(stderr, "Error: variable EQ_u3_u1_1457 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1457));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1457)){bit_vector_slice(&(pkt_2_e_word), &(slice_1459), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1461), &(slice_1459));\
}else {bit_vector_clear(&konst_1460);\
bit_vector_cast_to_bit_vector(0, &(MUX_1461), &(konst_1460));\
}bit_vector_or(&(MUX_1454), &(MUX_1461), &(OR_u32_u32_1462));\
bit_vector_clear(&konst_1464);\
konst_1464.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1464), &(EQ_u3_u1_1465));\
if (has_undefined_bit(&EQ_u3_u1_1465)) {fprintf(stderr, "Error: variable EQ_u3_u1_1465 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1465));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1465)){bit_vector_slice(&(pkt_3_e_word), &(slice_1467), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1469), &(slice_1467));\
}else {bit_vector_clear(&konst_1468);\
bit_vector_cast_to_bit_vector(0, &(MUX_1469), &(konst_1468));\
}bit_vector_clear(&konst_1471);\
konst_1471.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1471), &(EQ_u3_u1_1472));\
if (has_undefined_bit(&EQ_u3_u1_1472)) {fprintf(stderr, "Error: variable EQ_u3_u1_1472 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1472));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1472)){bit_vector_slice(&(pkt_4_e_word), &(slice_1474), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1476), &(slice_1474));\
}else {bit_vector_clear(&konst_1475);\
bit_vector_cast_to_bit_vector(0, &(MUX_1476), &(konst_1475));\
}bit_vector_or(&(MUX_1469), &(MUX_1476), &(OR_u32_u32_1477));\
bit_vector_or(&(OR_u32_u32_1462), &(OR_u32_u32_1477), &(OR_u32_u32_1478));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1478));\
;

#define _outputPort_4_Daemon_assign_stmt_1508_c_macro_ __declare_static_bit_vector(konst_1482,3);\
bit_vector_clear(&konst_1482);\
konst_1482.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1483,1);\
__declare_static_bit_vector(konst_1485,1);\
bit_vector_clear(&konst_1485);\
__declare_static_bit_vector(MUX_1486,1);\
__declare_static_bit_vector(konst_1488,3);\
bit_vector_clear(&konst_1488);\
konst_1488.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1489,1);\
__declare_static_bit_vector(konst_1491,1);\
bit_vector_clear(&konst_1491);\
__declare_static_bit_vector(MUX_1492,1);\
__declare_static_bit_vector(OR_u1_u1_1493,1);\
__declare_static_bit_vector(konst_1495,3);\
bit_vector_clear(&konst_1495);\
konst_1495.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1496,1);\
__declare_static_bit_vector(konst_1498,1);\
bit_vector_clear(&konst_1498);\
__declare_static_bit_vector(MUX_1499,1);\
__declare_static_bit_vector(konst_1501,3);\
bit_vector_clear(&konst_1501);\
konst_1501.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1502,1);\
__declare_static_bit_vector(konst_1504,1);\
bit_vector_clear(&konst_1504);\
__declare_static_bit_vector(MUX_1505,1);\
__declare_static_bit_vector(OR_u1_u1_1506,1);\
__declare_static_bit_vector(OR_u1_u1_1507,1);\
bit_vector_clear(&konst_1482);\
konst_1482.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1482), &(EQ_u3_u1_1483));\
if (has_undefined_bit(&EQ_u3_u1_1483)) {fprintf(stderr, "Error: variable EQ_u3_u1_1483 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1483));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1483)){bit_vector_cast_to_bit_vector(0, &(MUX_1486), &(p1_valid));\
}else {bit_vector_clear(&konst_1485);\
bit_vector_cast_to_bit_vector(0, &(MUX_1486), &(konst_1485));\
}bit_vector_clear(&konst_1488);\
konst_1488.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1488), &(EQ_u3_u1_1489));\
if (has_undefined_bit(&EQ_u3_u1_1489)) {fprintf(stderr, "Error: variable EQ_u3_u1_1489 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1489));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1489)){bit_vector_cast_to_bit_vector(0, &(MUX_1492), &(p2_valid));\
}else {bit_vector_clear(&konst_1491);\
bit_vector_cast_to_bit_vector(0, &(MUX_1492), &(konst_1491));\
}bit_vector_or(&(MUX_1486), &(MUX_1492), &(OR_u1_u1_1493));\
bit_vector_clear(&konst_1495);\
konst_1495.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1495), &(EQ_u3_u1_1496));\
if (has_undefined_bit(&EQ_u3_u1_1496)) {fprintf(stderr, "Error: variable EQ_u3_u1_1496 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1496));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1496)){bit_vector_cast_to_bit_vector(0, &(MUX_1499), &(p3_valid));\
}else {bit_vector_clear(&konst_1498);\
bit_vector_cast_to_bit_vector(0, &(MUX_1499), &(konst_1498));\
}bit_vector_clear(&konst_1501);\
konst_1501.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1501), &(EQ_u3_u1_1502));\
if (has_undefined_bit(&EQ_u3_u1_1502)) {fprintf(stderr, "Error: variable EQ_u3_u1_1502 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1502));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1502)){bit_vector_cast_to_bit_vector(0, &(MUX_1505), &(p4_valid));\
}else {bit_vector_clear(&konst_1504);\
bit_vector_cast_to_bit_vector(0, &(MUX_1505), &(konst_1504));\
}bit_vector_or(&(MUX_1499), &(MUX_1505), &(OR_u1_u1_1506));\
bit_vector_or(&(OR_u1_u1_1493), &(OR_u1_u1_1506), &(OR_u1_u1_1507));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1507));\
;

#define _outputPort_4_Daemon_assign_stmt_1512_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;
;

#define _outputPort_4_Daemon_branch_block_stmt_1289_c_export_apply_macro_ ;

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

#define _prioritySelect_assign_stmt_476_c_macro_ __declare_static_bit_vector(AND_u1_u1_462,1);\
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
__declare_static_bit_vector(AND_u1_u1_475,1);\
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
bit_vector_and(&(AND_u1_u1_462), &(OR_u1_u1_474), &(AND_u1_u1_475));\
bit_vector_cast_to_bit_vector(0, &(select_1), &(AND_u1_u1_475));\
;

#define _prioritySelect_assign_stmt_494_c_macro_ __declare_static_bit_vector(AND_u1_u1_480,1);\
__declare_static_bit_vector(konst_482,3);\
bit_vector_clear(&konst_482);\
konst_482.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_483,1);\
__declare_static_bit_vector(NOT_u1_u1_485,1);\
__declare_static_bit_vector(NOT_u1_u1_487,1);\
__declare_static_bit_vector(AND_u1_u1_488,1);\
__declare_static_bit_vector(NOT_u1_u1_490,1);\
__declare_static_bit_vector(AND_u1_u1_491,1);\
__declare_static_bit_vector(OR_u1_u1_492,1);\
__declare_static_bit_vector(AND_u1_u1_493,1);\
bit_vector_and(&(d0), &(p2_valid), &(AND_u1_u1_480));\
bit_vector_clear(&konst_482);\
konst_482.val.byte_array[0] = 2;\
bit_vector_equal(0, &(pkt_priority), &(konst_482), &(EQ_u3_u1_483));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_485));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_487));\
bit_vector_and(&(NOT_u1_u1_485), &(NOT_u1_u1_487), &(AND_u1_u1_488));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_490));\
bit_vector_and(&(AND_u1_u1_488), &(NOT_u1_u1_490), &(AND_u1_u1_491));\
bit_vector_or(&(EQ_u3_u1_483), &(AND_u1_u1_491), &(OR_u1_u1_492));\
bit_vector_and(&(AND_u1_u1_480), &(OR_u1_u1_492), &(AND_u1_u1_493));\
bit_vector_cast_to_bit_vector(0, &(select_2), &(AND_u1_u1_493));\
;

#define _prioritySelect_assign_stmt_512_c_macro_ __declare_static_bit_vector(AND_u1_u1_498,1);\
__declare_static_bit_vector(konst_500,3);\
bit_vector_clear(&konst_500);\
konst_500.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_501,1);\
__declare_static_bit_vector(NOT_u1_u1_503,1);\
__declare_static_bit_vector(NOT_u1_u1_505,1);\
__declare_static_bit_vector(AND_u1_u1_506,1);\
__declare_static_bit_vector(NOT_u1_u1_508,1);\
__declare_static_bit_vector(AND_u1_u1_509,1);\
__declare_static_bit_vector(OR_u1_u1_510,1);\
__declare_static_bit_vector(AND_u1_u1_511,1);\
bit_vector_and(&(d0), &(p3_valid), &(AND_u1_u1_498));\
bit_vector_clear(&konst_500);\
konst_500.val.byte_array[0] = 3;\
bit_vector_equal(0, &(pkt_priority), &(konst_500), &(EQ_u3_u1_501));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_503));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_505));\
bit_vector_and(&(NOT_u1_u1_503), &(NOT_u1_u1_505), &(AND_u1_u1_506));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_508));\
bit_vector_and(&(AND_u1_u1_506), &(NOT_u1_u1_508), &(AND_u1_u1_509));\
bit_vector_or(&(EQ_u3_u1_501), &(AND_u1_u1_509), &(OR_u1_u1_510));\
bit_vector_and(&(AND_u1_u1_498), &(OR_u1_u1_510), &(AND_u1_u1_511));\
bit_vector_cast_to_bit_vector(0, &(select_3), &(AND_u1_u1_511));\
;

#define _prioritySelect_assign_stmt_530_c_macro_ __declare_static_bit_vector(AND_u1_u1_516,1);\
__declare_static_bit_vector(konst_518,3);\
bit_vector_clear(&konst_518);\
konst_518.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_519,1);\
__declare_static_bit_vector(NOT_u1_u1_521,1);\
__declare_static_bit_vector(NOT_u1_u1_523,1);\
__declare_static_bit_vector(AND_u1_u1_524,1);\
__declare_static_bit_vector(NOT_u1_u1_526,1);\
__declare_static_bit_vector(AND_u1_u1_527,1);\
__declare_static_bit_vector(OR_u1_u1_528,1);\
__declare_static_bit_vector(AND_u1_u1_529,1);\
bit_vector_and(&(d0), &(p4_valid), &(AND_u1_u1_516));\
bit_vector_clear(&konst_518);\
konst_518.val.byte_array[0] = 4;\
bit_vector_equal(0, &(pkt_priority), &(konst_518), &(EQ_u3_u1_519));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_521));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_523));\
bit_vector_and(&(NOT_u1_u1_521), &(NOT_u1_u1_523), &(AND_u1_u1_524));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_526));\
bit_vector_and(&(AND_u1_u1_524), &(NOT_u1_u1_526), &(AND_u1_u1_527));\
bit_vector_or(&(EQ_u3_u1_519), &(AND_u1_u1_527), &(OR_u1_u1_528));\
bit_vector_and(&(AND_u1_u1_516), &(OR_u1_u1_528), &(AND_u1_u1_529));\
bit_vector_cast_to_bit_vector(0, &(select_4), &(AND_u1_u1_529));\
;

#define _prioritySelect_assign_stmt_572_c_macro_ __declare_static_bit_vector(NOT_u1_u1_533,1);\
__declare_static_bit_vector(konst_535,3);\
bit_vector_clear(&konst_535);\
__declare_static_bit_vector(MUX_536,3);\
__declare_static_bit_vector(konst_538,3);\
bit_vector_clear(&konst_538);\
konst_538.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_539,3);\
bit_vector_clear(&konst_539);\
__declare_static_bit_vector(MUX_540,3);\
__declare_static_bit_vector(OR_u3_u3_541,3);\
__declare_static_bit_vector(konst_543,3);\
bit_vector_clear(&konst_543);\
konst_543.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_544,3);\
bit_vector_clear(&konst_544);\
__declare_static_bit_vector(MUX_545,3);\
__declare_static_bit_vector(OR_u3_u3_546,3);\
__declare_static_bit_vector(konst_548,3);\
bit_vector_clear(&konst_548);\
konst_548.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_549,3);\
bit_vector_clear(&konst_549);\
__declare_static_bit_vector(MUX_550,3);\
__declare_static_bit_vector(konst_552,3);\
bit_vector_clear(&konst_552);\
konst_552.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_553,3);\
bit_vector_clear(&konst_553);\
__declare_static_bit_vector(MUX_554,3);\
__declare_static_bit_vector(OR_u3_u3_555,3);\
__declare_static_bit_vector(NOT_u1_u1_557,1);\
__declare_static_bit_vector(NOT_u1_u1_559,1);\
__declare_static_bit_vector(AND_u1_u1_560,1);\
__declare_static_bit_vector(NOT_u1_u1_562,1);\
__declare_static_bit_vector(NOT_u1_u1_564,1);\
__declare_static_bit_vector(AND_u1_u1_565,1);\
__declare_static_bit_vector(AND_u1_u1_566,1);\
__declare_static_bit_vector(konst_568,3);\
bit_vector_clear(&konst_568);\
__declare_static_bit_vector(MUX_569,3);\
__declare_static_bit_vector(OR_u3_u3_570,3);\
__declare_static_bit_vector(OR_u3_u3_571,3);\
bit_vector_not( &(d0), &(NOT_u1_u1_533));\
if (has_undefined_bit(&NOT_u1_u1_533)) {fprintf(stderr, "Error: variable NOT_u1_u1_533 has undefined value (%s) at test point.\n", to_string(&NOT_u1_u1_533));assert(0);} \
if(bit_vector_to_uint64(0, &NOT_u1_u1_533)){bit_vector_cast_to_bit_vector(0, &(MUX_536), &(active_packet));\
}else {bit_vector_clear(&konst_535);\
bit_vector_cast_to_bit_vector(0, &(MUX_536), &(konst_535));\
}if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_538);\
konst_538.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_540), &(konst_538));\
}else {bit_vector_clear(&konst_539);\
bit_vector_cast_to_bit_vector(0, &(MUX_540), &(konst_539));\
}bit_vector_or(&(MUX_536), &(MUX_540), &(OR_u3_u3_541));\
if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_543);\
konst_543.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_545), &(konst_543));\
}else {bit_vector_clear(&konst_544);\
bit_vector_cast_to_bit_vector(0, &(MUX_545), &(konst_544));\
}bit_vector_or(&(OR_u3_u3_541), &(MUX_545), &(OR_u3_u3_546));\
if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_548);\
konst_548.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_550), &(konst_548));\
}else {bit_vector_clear(&konst_549);\
bit_vector_cast_to_bit_vector(0, &(MUX_550), &(konst_549));\
}if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_552);\
konst_552.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_554), &(konst_552));\
}else {bit_vector_clear(&konst_553);\
bit_vector_cast_to_bit_vector(0, &(MUX_554), &(konst_553));\
}bit_vector_or(&(MUX_550), &(MUX_554), &(OR_u3_u3_555));\
bit_vector_not( &(select_1), &(NOT_u1_u1_557));\
bit_vector_not( &(select_2), &(NOT_u1_u1_559));\
bit_vector_and(&(NOT_u1_u1_557), &(NOT_u1_u1_559), &(AND_u1_u1_560));\
bit_vector_not( &(select_3), &(NOT_u1_u1_562));\
bit_vector_not( &(select_4), &(NOT_u1_u1_564));\
bit_vector_and(&(NOT_u1_u1_562), &(NOT_u1_u1_564), &(AND_u1_u1_565));\
bit_vector_and(&(AND_u1_u1_560), &(AND_u1_u1_565), &(AND_u1_u1_566));\
if (has_undefined_bit(&AND_u1_u1_566)) {fprintf(stderr, "Error: variable AND_u1_u1_566 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_566));assert(0);} \
if(bit_vector_to_uint64(0, &AND_u1_u1_566)){bit_vector_cast_to_bit_vector(0, &(MUX_569), &(active_packet));\
}else {bit_vector_clear(&konst_568);\
bit_vector_cast_to_bit_vector(0, &(MUX_569), &(konst_568));\
}bit_vector_or(&(OR_u3_u3_555), &(MUX_569), &(OR_u3_u3_570));\
bit_vector_or(&(OR_u3_u3_546), &(OR_u3_u3_570), &(OR_u3_u3_571));\
bit_vector_cast_to_bit_vector(0, &(next_active_packet), &(OR_u3_u3_571));\
;

#define _prioritySelect_assign_stmt_599_c_macro_ __declare_static_bit_vector(NOT_u1_u1_575,1);\
__declare_static_bit_vector(konst_577,3);\
bit_vector_clear(&konst_577);\
__declare_static_bit_vector(MUX_578,3);\
__declare_static_bit_vector(konst_580,3);\
bit_vector_clear(&konst_580);\
konst_580.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_581,3);\
bit_vector_clear(&konst_581);\
__declare_static_bit_vector(MUX_582,3);\
__declare_static_bit_vector(OR_u3_u3_583,3);\
__declare_static_bit_vector(konst_585,3);\
bit_vector_clear(&konst_585);\
konst_585.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_586,3);\
bit_vector_clear(&konst_586);\
__declare_static_bit_vector(MUX_587,3);\
__declare_static_bit_vector(OR_u3_u3_588,3);\
__declare_static_bit_vector(konst_590,3);\
bit_vector_clear(&konst_590);\
konst_590.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_591,3);\
bit_vector_clear(&konst_591);\
__declare_static_bit_vector(MUX_592,3);\
__declare_static_bit_vector(konst_594,3);\
bit_vector_clear(&konst_594);\
konst_594.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_595,3);\
bit_vector_clear(&konst_595);\
__declare_static_bit_vector(MUX_596,3);\
__declare_static_bit_vector(OR_u3_u3_597,3);\
__declare_static_bit_vector(OR_u3_u3_598,3);\
bit_vector_not( &(d0), &(NOT_u1_u1_575));\
if (has_undefined_bit(&NOT_u1_u1_575)) {fprintf(stderr, "Error: variable NOT_u1_u1_575 has undefined value (%s) at test point.\n", to_string(&NOT_u1_u1_575));assert(0);} \
if(bit_vector_to_uint64(0, &NOT_u1_u1_575)){bit_vector_cast_to_bit_vector(0, &(MUX_578), &(active_packet));\
}else {bit_vector_clear(&konst_577);\
bit_vector_cast_to_bit_vector(0, &(MUX_578), &(konst_577));\
}if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_580);\
konst_580.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_582), &(konst_580));\
}else {bit_vector_clear(&konst_581);\
bit_vector_cast_to_bit_vector(0, &(MUX_582), &(konst_581));\
}bit_vector_or(&(MUX_578), &(MUX_582), &(OR_u3_u3_583));\
if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_585);\
konst_585.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_587), &(konst_585));\
}else {bit_vector_clear(&konst_586);\
bit_vector_cast_to_bit_vector(0, &(MUX_587), &(konst_586));\
}bit_vector_or(&(OR_u3_u3_583), &(MUX_587), &(OR_u3_u3_588));\
if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_590);\
konst_590.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_592), &(konst_590));\
}else {bit_vector_clear(&konst_591);\
bit_vector_cast_to_bit_vector(0, &(MUX_592), &(konst_591));\
}if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_594);\
konst_594.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_596), &(konst_594));\
}else {bit_vector_clear(&konst_595);\
bit_vector_cast_to_bit_vector(0, &(MUX_596), &(konst_595));\
}bit_vector_or(&(MUX_592), &(MUX_596), &(OR_u3_u3_597));\
bit_vector_or(&(OR_u3_u3_588), &(OR_u3_u3_597), &(OR_u3_u3_598));\
bit_vector_cast_to_bit_vector(0, &(next_pkt_priority), &(OR_u3_u3_598));\
;

#define _prioritySelect_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_active_packet)), &(next_active_packet));\
bit_vector_cast_to_bit_vector(0, &((*__pnext_pkt_priority)), &(next_pkt_priority));\
;
