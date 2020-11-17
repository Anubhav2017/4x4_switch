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
#define _outputPort_1_Daemon_branch_block_stmt_658_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_1_Daemon_merge_stmt_660_c_preamble_macro_ uint8_t merge_stmt_660_entry_flag;\
merge_stmt_660_entry_flag = do_while_entry_flag;\
goto merge_stmt_660_run;\
merge_stmt_660_run: ;\

#define _outputPort_1_Daemon_phi_stmt_661_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_665_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_1_669,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_1",&(RPIPE_noblock_obuf_1_1_669));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_1_669));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_670_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_1_674,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_1",&(RPIPE_noblock_obuf_2_1_674));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_1_674));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_675_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_1_679,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_1",&(RPIPE_noblock_obuf_3_1_679));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_1_679));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_680_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_1_684,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_1",&(RPIPE_noblock_obuf_4_1_684));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_1_684));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_685_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_689_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_1_Daemon_merge_stmt_660_c_postamble_macro_ merge_stmt_660_entry_flag = 0;

#define _outputPort_1_Daemon_assign_stmt_698_c_macro_ __declare_static_bit_vector(konst_696,33);\
bit_vector_clear(&konst_696);\
konst_696.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_697,1);\
bit_vector_clear(&konst_696);\
konst_696.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_696), &(BITSEL_u33_u1_697));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_697));\
;

#define _outputPort_1_Daemon_assign_stmt_703_c_macro_ __declare_static_bit_vector(konst_701,33);\
bit_vector_clear(&konst_701);\
konst_701.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_702,1);\
bit_vector_clear(&konst_701);\
konst_701.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_701), &(BITSEL_u33_u1_702));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_702));\
;

#define _outputPort_1_Daemon_assign_stmt_708_c_macro_ __declare_static_bit_vector(konst_706,33);\
bit_vector_clear(&konst_706);\
konst_706.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_707,1);\
bit_vector_clear(&konst_706);\
konst_706.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_706), &(BITSEL_u33_u1_707));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_707));\
;

#define _outputPort_1_Daemon_assign_stmt_713_c_macro_ __declare_static_bit_vector(konst_711,33);\
bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_712,1);\
bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_711), &(BITSEL_u33_u1_712));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_712));\
;

#define _outputPort_1_Daemon_assign_stmt_742_c_macro_ __declare_static_bit_vector(konst_716,3);\
bit_vector_clear(&konst_716);\
konst_716.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_717,1);\
__declare_static_bit_vector(konst_719,1);\
bit_vector_clear(&konst_719);\
__declare_static_bit_vector(MUX_720,1);\
__declare_static_bit_vector(konst_722,3);\
bit_vector_clear(&konst_722);\
konst_722.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_723,1);\
__declare_static_bit_vector(konst_725,1);\
bit_vector_clear(&konst_725);\
__declare_static_bit_vector(MUX_726,1);\
__declare_static_bit_vector(OR_u1_u1_727,1);\
__declare_static_bit_vector(konst_729,3);\
bit_vector_clear(&konst_729);\
konst_729.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_730,1);\
__declare_static_bit_vector(konst_732,1);\
bit_vector_clear(&konst_732);\
__declare_static_bit_vector(MUX_733,1);\
__declare_static_bit_vector(konst_735,3);\
bit_vector_clear(&konst_735);\
konst_735.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_736,1);\
__declare_static_bit_vector(konst_738,1);\
bit_vector_clear(&konst_738);\
__declare_static_bit_vector(MUX_739,1);\
__declare_static_bit_vector(OR_u1_u1_740,1);\
__declare_static_bit_vector(OR_u1_u1_741,1);\
bit_vector_clear(&konst_716);\
konst_716.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_716), &(EQ_u3_u1_717));\
if (has_undefined_bit(&EQ_u3_u1_717)) {fprintf(stderr, "Error: variable EQ_u3_u1_717 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_717));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_717)){bit_vector_cast_to_bit_vector(0, &(MUX_720), &(p1_valid));\
}else {bit_vector_clear(&konst_719);\
bit_vector_cast_to_bit_vector(0, &(MUX_720), &(konst_719));\
}bit_vector_clear(&konst_722);\
konst_722.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_722), &(EQ_u3_u1_723));\
if (has_undefined_bit(&EQ_u3_u1_723)) {fprintf(stderr, "Error: variable EQ_u3_u1_723 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_723));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_723)){bit_vector_cast_to_bit_vector(0, &(MUX_726), &(p2_valid));\
}else {bit_vector_clear(&konst_725);\
bit_vector_cast_to_bit_vector(0, &(MUX_726), &(konst_725));\
}bit_vector_or(&(MUX_720), &(MUX_726), &(OR_u1_u1_727));\
bit_vector_clear(&konst_729);\
konst_729.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_729), &(EQ_u3_u1_730));\
if (has_undefined_bit(&EQ_u3_u1_730)) {fprintf(stderr, "Error: variable EQ_u3_u1_730 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_730));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_730)){bit_vector_cast_to_bit_vector(0, &(MUX_733), &(p3_valid));\
}else {bit_vector_clear(&konst_732);\
bit_vector_cast_to_bit_vector(0, &(MUX_733), &(konst_732));\
}bit_vector_clear(&konst_735);\
konst_735.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_735), &(EQ_u3_u1_736));\
if (has_undefined_bit(&EQ_u3_u1_736)) {fprintf(stderr, "Error: variable EQ_u3_u1_736 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_736));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_736)){bit_vector_cast_to_bit_vector(0, &(MUX_739), &(p4_valid));\
}else {bit_vector_clear(&konst_738);\
bit_vector_cast_to_bit_vector(0, &(MUX_739), &(konst_738));\
}bit_vector_or(&(MUX_733), &(MUX_739), &(OR_u1_u1_740));\
bit_vector_or(&(OR_u1_u1_727), &(OR_u1_u1_740), &(OR_u1_u1_741));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_741));\
;

#define _outputPort_1_Daemon_call_stmt_752_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_1_Daemon_assign_stmt_765_c_macro_ __declare_static_bit_vector(OR_u1_u1_756,1);\
__declare_static_bit_vector(OR_u1_u1_759,1);\
__declare_static_bit_vector(OR_u1_u1_760,1);\
__declare_static_bit_vector(konst_762,8);\
bit_vector_clear(&konst_762);\
__declare_static_bit_vector(EQ_u8_u1_763,1);\
__declare_static_bit_vector(AND_u1_u1_764,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_756));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_759));\
bit_vector_or(&(OR_u1_u1_756), &(OR_u1_u1_759), &(OR_u1_u1_760));\
bit_vector_clear(&konst_762);\
bit_vector_equal(0, &(down_counter), &(konst_762), &(EQ_u8_u1_763));\
bit_vector_and(&(OR_u1_u1_760), &(EQ_u8_u1_763), &(AND_u1_u1_764));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_764));\
;

#define _outputPort_1_Daemon_assign_stmt_776_c_macro_ __declare_static_bit_vector(konst_768,8);\
bit_vector_clear(&konst_768);\
konst_768.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_771,8);\
bit_vector_clear(&konst_771);\
konst_771.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_772,8);\
__declare_static_bit_vector(MUX_774,8);\
__declare_static_bit_vector(MUX_775,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_768);\
konst_768.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_775), &(konst_768));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_771);\
konst_771.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_771), &(SUB_u8_u8_772));\
bit_vector_cast_to_bit_vector(0, &(MUX_774), &(SUB_u8_u8_772));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_774), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_775), &(MUX_774));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_775));\
;

#define _outputPort_1_Daemon_assign_stmt_784_c_macro_ __declare_static_bit_vector(NOT_u1_u1_779,1);\
__declare_static_bit_vector(konst_781,3);\
bit_vector_clear(&konst_781);\
konst_781.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_782,1);\
__declare_static_bit_vector(OR_u1_u1_783,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_779));\
bit_vector_clear(&konst_781);\
konst_781.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_781), &(EQ_u3_u1_782));\
bit_vector_or(&(NOT_u1_u1_779), &(EQ_u3_u1_782), &(OR_u1_u1_783));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_783));\
;

#define _outputPort_1_Daemon_assign_stmt_792_c_macro_ __declare_static_bit_vector(NOT_u1_u1_787,1);\
__declare_static_bit_vector(konst_789,3);\
bit_vector_clear(&konst_789);\
konst_789.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_790,1);\
__declare_static_bit_vector(OR_u1_u1_791,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_787));\
bit_vector_clear(&konst_789);\
konst_789.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_789), &(EQ_u3_u1_790));\
bit_vector_or(&(NOT_u1_u1_787), &(EQ_u3_u1_790), &(OR_u1_u1_791));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_791));\
;

#define _outputPort_1_Daemon_assign_stmt_800_c_macro_ __declare_static_bit_vector(NOT_u1_u1_795,1);\
__declare_static_bit_vector(konst_797,3);\
bit_vector_clear(&konst_797);\
konst_797.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_798,1);\
__declare_static_bit_vector(OR_u1_u1_799,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_795));\
bit_vector_clear(&konst_797);\
konst_797.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_797), &(EQ_u3_u1_798));\
bit_vector_or(&(NOT_u1_u1_795), &(EQ_u3_u1_798), &(OR_u1_u1_799));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_799));\
;

#define _outputPort_1_Daemon_assign_stmt_808_c_macro_ __declare_static_bit_vector(NOT_u1_u1_803,1);\
__declare_static_bit_vector(konst_805,3);\
bit_vector_clear(&konst_805);\
konst_805.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_806,1);\
__declare_static_bit_vector(OR_u1_u1_807,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_803));\
bit_vector_clear(&konst_805);\
konst_805.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_805), &(EQ_u3_u1_806));\
bit_vector_or(&(NOT_u1_u1_803), &(EQ_u3_u1_806), &(OR_u1_u1_807));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_807));\
;

#define _outputPort_1_Daemon_assign_stmt_841_c_macro_ __declare_static_bit_vector(konst_811,3);\
bit_vector_clear(&konst_811);\
konst_811.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_812,1);\
__declare_static_bit_vector(slice_814,32);\
__declare_static_bit_vector(konst_815,32);\
bit_vector_clear(&konst_815);\
__declare_static_bit_vector(MUX_816,32);\
__declare_static_bit_vector(konst_818,3);\
bit_vector_clear(&konst_818);\
konst_818.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_819,1);\
__declare_static_bit_vector(slice_821,32);\
__declare_static_bit_vector(konst_822,32);\
bit_vector_clear(&konst_822);\
__declare_static_bit_vector(MUX_823,32);\
__declare_static_bit_vector(OR_u32_u32_824,32);\
__declare_static_bit_vector(konst_826,3);\
bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_827,1);\
__declare_static_bit_vector(slice_829,32);\
__declare_static_bit_vector(konst_830,32);\
bit_vector_clear(&konst_830);\
__declare_static_bit_vector(MUX_831,32);\
__declare_static_bit_vector(konst_833,3);\
bit_vector_clear(&konst_833);\
konst_833.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_834,1);\
__declare_static_bit_vector(slice_836,32);\
__declare_static_bit_vector(konst_837,32);\
bit_vector_clear(&konst_837);\
__declare_static_bit_vector(MUX_838,32);\
__declare_static_bit_vector(OR_u32_u32_839,32);\
__declare_static_bit_vector(OR_u32_u32_840,32);\
bit_vector_clear(&konst_811);\
konst_811.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_811), &(EQ_u3_u1_812));\
if (has_undefined_bit(&EQ_u3_u1_812)) {fprintf(stderr, "Error: variable EQ_u3_u1_812 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_812));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_812)){bit_vector_slice(&(pkt_1_e_word), &(slice_814), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_816), &(slice_814));\
}else {bit_vector_clear(&konst_815);\
bit_vector_cast_to_bit_vector(0, &(MUX_816), &(konst_815));\
}bit_vector_clear(&konst_818);\
konst_818.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_818), &(EQ_u3_u1_819));\
if (has_undefined_bit(&EQ_u3_u1_819)) {fprintf(stderr, "Error: variable EQ_u3_u1_819 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_819));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_819)){bit_vector_slice(&(pkt_2_e_word), &(slice_821), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_823), &(slice_821));\
}else {bit_vector_clear(&konst_822);\
bit_vector_cast_to_bit_vector(0, &(MUX_823), &(konst_822));\
}bit_vector_or(&(MUX_816), &(MUX_823), &(OR_u32_u32_824));\
bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_826), &(EQ_u3_u1_827));\
if (has_undefined_bit(&EQ_u3_u1_827)) {fprintf(stderr, "Error: variable EQ_u3_u1_827 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_827));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_827)){bit_vector_slice(&(pkt_3_e_word), &(slice_829), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_831), &(slice_829));\
}else {bit_vector_clear(&konst_830);\
bit_vector_cast_to_bit_vector(0, &(MUX_831), &(konst_830));\
}bit_vector_clear(&konst_833);\
konst_833.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_833), &(EQ_u3_u1_834));\
if (has_undefined_bit(&EQ_u3_u1_834)) {fprintf(stderr, "Error: variable EQ_u3_u1_834 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_834));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_834)){bit_vector_slice(&(pkt_4_e_word), &(slice_836), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_838), &(slice_836));\
}else {bit_vector_clear(&konst_837);\
bit_vector_cast_to_bit_vector(0, &(MUX_838), &(konst_837));\
}bit_vector_or(&(MUX_831), &(MUX_838), &(OR_u32_u32_839));\
bit_vector_or(&(OR_u32_u32_824), &(OR_u32_u32_839), &(OR_u32_u32_840));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_840));\
;

#define _outputPort_1_Daemon_assign_stmt_870_c_macro_ __declare_static_bit_vector(konst_844,3);\
bit_vector_clear(&konst_844);\
konst_844.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_845,1);\
__declare_static_bit_vector(konst_847,1);\
bit_vector_clear(&konst_847);\
__declare_static_bit_vector(MUX_848,1);\
__declare_static_bit_vector(konst_850,3);\
bit_vector_clear(&konst_850);\
konst_850.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_851,1);\
__declare_static_bit_vector(konst_853,1);\
bit_vector_clear(&konst_853);\
__declare_static_bit_vector(MUX_854,1);\
__declare_static_bit_vector(OR_u1_u1_855,1);\
__declare_static_bit_vector(konst_857,3);\
bit_vector_clear(&konst_857);\
konst_857.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_858,1);\
__declare_static_bit_vector(konst_860,1);\
bit_vector_clear(&konst_860);\
__declare_static_bit_vector(MUX_861,1);\
__declare_static_bit_vector(konst_863,3);\
bit_vector_clear(&konst_863);\
konst_863.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_864,1);\
__declare_static_bit_vector(konst_866,1);\
bit_vector_clear(&konst_866);\
__declare_static_bit_vector(MUX_867,1);\
__declare_static_bit_vector(OR_u1_u1_868,1);\
__declare_static_bit_vector(OR_u1_u1_869,1);\
bit_vector_clear(&konst_844);\
konst_844.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_844), &(EQ_u3_u1_845));\
if (has_undefined_bit(&EQ_u3_u1_845)) {fprintf(stderr, "Error: variable EQ_u3_u1_845 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_845));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_845)){bit_vector_cast_to_bit_vector(0, &(MUX_848), &(p1_valid));\
}else {bit_vector_clear(&konst_847);\
bit_vector_cast_to_bit_vector(0, &(MUX_848), &(konst_847));\
}bit_vector_clear(&konst_850);\
konst_850.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_850), &(EQ_u3_u1_851));\
if (has_undefined_bit(&EQ_u3_u1_851)) {fprintf(stderr, "Error: variable EQ_u3_u1_851 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_851));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_851)){bit_vector_cast_to_bit_vector(0, &(MUX_854), &(p2_valid));\
}else {bit_vector_clear(&konst_853);\
bit_vector_cast_to_bit_vector(0, &(MUX_854), &(konst_853));\
}bit_vector_or(&(MUX_848), &(MUX_854), &(OR_u1_u1_855));\
bit_vector_clear(&konst_857);\
konst_857.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_857), &(EQ_u3_u1_858));\
if (has_undefined_bit(&EQ_u3_u1_858)) {fprintf(stderr, "Error: variable EQ_u3_u1_858 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_858));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_858)){bit_vector_cast_to_bit_vector(0, &(MUX_861), &(p3_valid));\
}else {bit_vector_clear(&konst_860);\
bit_vector_cast_to_bit_vector(0, &(MUX_861), &(konst_860));\
}bit_vector_clear(&konst_863);\
konst_863.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_863), &(EQ_u3_u1_864));\
if (has_undefined_bit(&EQ_u3_u1_864)) {fprintf(stderr, "Error: variable EQ_u3_u1_864 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_864));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_864)){bit_vector_cast_to_bit_vector(0, &(MUX_867), &(p4_valid));\
}else {bit_vector_clear(&konst_866);\
bit_vector_cast_to_bit_vector(0, &(MUX_867), &(konst_866));\
}bit_vector_or(&(MUX_861), &(MUX_867), &(OR_u1_u1_868));\
bit_vector_or(&(OR_u1_u1_855), &(OR_u1_u1_868), &(OR_u1_u1_869));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_869));\
;

#define _outputPort_1_Daemon_assign_stmt_874_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_1",&(data_to_out));\
}
;
;

#define _outputPort_1_Daemon_branch_block_stmt_658_c_export_apply_macro_ ;

#define _outputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_2_Daemon_branch_block_stmt_880_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_2_Daemon_merge_stmt_882_c_preamble_macro_ uint8_t merge_stmt_882_entry_flag;\
merge_stmt_882_entry_flag = do_while_entry_flag;\
goto merge_stmt_882_run;\
merge_stmt_882_run: ;\

#define _outputPort_2_Daemon_phi_stmt_883_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_887_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_2_891,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_2",&(RPIPE_noblock_obuf_1_2_891));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_2_891));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_892_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_2_896,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_2",&(RPIPE_noblock_obuf_2_2_896));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_2_896));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_897_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_2_901,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_2",&(RPIPE_noblock_obuf_3_2_901));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_2_901));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_902_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_2_906,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_2",&(RPIPE_noblock_obuf_4_2_906));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_2_906));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_907_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_911_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_2_Daemon_merge_stmt_882_c_postamble_macro_ merge_stmt_882_entry_flag = 0;

#define _outputPort_2_Daemon_assign_stmt_920_c_macro_ __declare_static_bit_vector(konst_918,33);\
bit_vector_clear(&konst_918);\
konst_918.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_919,1);\
bit_vector_clear(&konst_918);\
konst_918.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_918), &(BITSEL_u33_u1_919));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_919));\
;

#define _outputPort_2_Daemon_assign_stmt_925_c_macro_ __declare_static_bit_vector(konst_923,33);\
bit_vector_clear(&konst_923);\
konst_923.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_924,1);\
bit_vector_clear(&konst_923);\
konst_923.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_923), &(BITSEL_u33_u1_924));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_924));\
;

#define _outputPort_2_Daemon_assign_stmt_930_c_macro_ __declare_static_bit_vector(konst_928,33);\
bit_vector_clear(&konst_928);\
konst_928.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_929,1);\
bit_vector_clear(&konst_928);\
konst_928.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_928), &(BITSEL_u33_u1_929));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_929));\
;

#define _outputPort_2_Daemon_assign_stmt_935_c_macro_ __declare_static_bit_vector(konst_933,33);\
bit_vector_clear(&konst_933);\
konst_933.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_934,1);\
bit_vector_clear(&konst_933);\
konst_933.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_933), &(BITSEL_u33_u1_934));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_934));\
;

#define _outputPort_2_Daemon_assign_stmt_964_c_macro_ __declare_static_bit_vector(konst_938,3);\
bit_vector_clear(&konst_938);\
konst_938.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_939,1);\
__declare_static_bit_vector(konst_941,1);\
bit_vector_clear(&konst_941);\
__declare_static_bit_vector(MUX_942,1);\
__declare_static_bit_vector(konst_944,3);\
bit_vector_clear(&konst_944);\
konst_944.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_945,1);\
__declare_static_bit_vector(konst_947,1);\
bit_vector_clear(&konst_947);\
__declare_static_bit_vector(MUX_948,1);\
__declare_static_bit_vector(OR_u1_u1_949,1);\
__declare_static_bit_vector(konst_951,3);\
bit_vector_clear(&konst_951);\
konst_951.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_952,1);\
__declare_static_bit_vector(konst_954,1);\
bit_vector_clear(&konst_954);\
__declare_static_bit_vector(MUX_955,1);\
__declare_static_bit_vector(konst_957,3);\
bit_vector_clear(&konst_957);\
konst_957.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_958,1);\
__declare_static_bit_vector(konst_960,1);\
bit_vector_clear(&konst_960);\
__declare_static_bit_vector(MUX_961,1);\
__declare_static_bit_vector(OR_u1_u1_962,1);\
__declare_static_bit_vector(OR_u1_u1_963,1);\
bit_vector_clear(&konst_938);\
konst_938.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_938), &(EQ_u3_u1_939));\
if (has_undefined_bit(&EQ_u3_u1_939)) {fprintf(stderr, "Error: variable EQ_u3_u1_939 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_939));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_939)){bit_vector_cast_to_bit_vector(0, &(MUX_942), &(p1_valid));\
}else {bit_vector_clear(&konst_941);\
bit_vector_cast_to_bit_vector(0, &(MUX_942), &(konst_941));\
}bit_vector_clear(&konst_944);\
konst_944.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_944), &(EQ_u3_u1_945));\
if (has_undefined_bit(&EQ_u3_u1_945)) {fprintf(stderr, "Error: variable EQ_u3_u1_945 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_945));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_945)){bit_vector_cast_to_bit_vector(0, &(MUX_948), &(p2_valid));\
}else {bit_vector_clear(&konst_947);\
bit_vector_cast_to_bit_vector(0, &(MUX_948), &(konst_947));\
}bit_vector_or(&(MUX_942), &(MUX_948), &(OR_u1_u1_949));\
bit_vector_clear(&konst_951);\
konst_951.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_951), &(EQ_u3_u1_952));\
if (has_undefined_bit(&EQ_u3_u1_952)) {fprintf(stderr, "Error: variable EQ_u3_u1_952 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_952));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_952)){bit_vector_cast_to_bit_vector(0, &(MUX_955), &(p3_valid));\
}else {bit_vector_clear(&konst_954);\
bit_vector_cast_to_bit_vector(0, &(MUX_955), &(konst_954));\
}bit_vector_clear(&konst_957);\
konst_957.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_957), &(EQ_u3_u1_958));\
if (has_undefined_bit(&EQ_u3_u1_958)) {fprintf(stderr, "Error: variable EQ_u3_u1_958 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_958));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_958)){bit_vector_cast_to_bit_vector(0, &(MUX_961), &(p4_valid));\
}else {bit_vector_clear(&konst_960);\
bit_vector_cast_to_bit_vector(0, &(MUX_961), &(konst_960));\
}bit_vector_or(&(MUX_955), &(MUX_961), &(OR_u1_u1_962));\
bit_vector_or(&(OR_u1_u1_949), &(OR_u1_u1_962), &(OR_u1_u1_963));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_963));\
;

#define _outputPort_2_Daemon_call_stmt_974_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_2_Daemon_assign_stmt_987_c_macro_ __declare_static_bit_vector(OR_u1_u1_978,1);\
__declare_static_bit_vector(OR_u1_u1_981,1);\
__declare_static_bit_vector(OR_u1_u1_982,1);\
__declare_static_bit_vector(konst_984,8);\
bit_vector_clear(&konst_984);\
__declare_static_bit_vector(EQ_u8_u1_985,1);\
__declare_static_bit_vector(AND_u1_u1_986,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_978));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_981));\
bit_vector_or(&(OR_u1_u1_978), &(OR_u1_u1_981), &(OR_u1_u1_982));\
bit_vector_clear(&konst_984);\
bit_vector_equal(0, &(down_counter), &(konst_984), &(EQ_u8_u1_985));\
bit_vector_and(&(OR_u1_u1_982), &(EQ_u8_u1_985), &(AND_u1_u1_986));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_986));\
;

#define _outputPort_2_Daemon_assign_stmt_998_c_macro_ __declare_static_bit_vector(konst_990,8);\
bit_vector_clear(&konst_990);\
konst_990.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_993,8);\
bit_vector_clear(&konst_993);\
konst_993.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_994,8);\
__declare_static_bit_vector(MUX_996,8);\
__declare_static_bit_vector(MUX_997,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_990);\
konst_990.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_997), &(konst_990));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_993);\
konst_993.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_993), &(SUB_u8_u8_994));\
bit_vector_cast_to_bit_vector(0, &(MUX_996), &(SUB_u8_u8_994));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_996), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_997), &(MUX_996));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_997));\
;

#define _outputPort_2_Daemon_assign_stmt_1006_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1001,1);\
__declare_static_bit_vector(konst_1003,3);\
bit_vector_clear(&konst_1003);\
konst_1003.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1004,1);\
__declare_static_bit_vector(OR_u1_u1_1005,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1001));\
bit_vector_clear(&konst_1003);\
konst_1003.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1003), &(EQ_u3_u1_1004));\
bit_vector_or(&(NOT_u1_u1_1001), &(EQ_u3_u1_1004), &(OR_u1_u1_1005));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1005));\
;

#define _outputPort_2_Daemon_assign_stmt_1014_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1009,1);\
__declare_static_bit_vector(konst_1011,3);\
bit_vector_clear(&konst_1011);\
konst_1011.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1012,1);\
__declare_static_bit_vector(OR_u1_u1_1013,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1009));\
bit_vector_clear(&konst_1011);\
konst_1011.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1011), &(EQ_u3_u1_1012));\
bit_vector_or(&(NOT_u1_u1_1009), &(EQ_u3_u1_1012), &(OR_u1_u1_1013));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1013));\
;

#define _outputPort_2_Daemon_assign_stmt_1022_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1017,1);\
__declare_static_bit_vector(konst_1019,3);\
bit_vector_clear(&konst_1019);\
konst_1019.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1020,1);\
__declare_static_bit_vector(OR_u1_u1_1021,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1017));\
bit_vector_clear(&konst_1019);\
konst_1019.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1019), &(EQ_u3_u1_1020));\
bit_vector_or(&(NOT_u1_u1_1017), &(EQ_u3_u1_1020), &(OR_u1_u1_1021));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1021));\
;

#define _outputPort_2_Daemon_assign_stmt_1030_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1025,1);\
__declare_static_bit_vector(konst_1027,3);\
bit_vector_clear(&konst_1027);\
konst_1027.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1028,1);\
__declare_static_bit_vector(OR_u1_u1_1029,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1025));\
bit_vector_clear(&konst_1027);\
konst_1027.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1027), &(EQ_u3_u1_1028));\
bit_vector_or(&(NOT_u1_u1_1025), &(EQ_u3_u1_1028), &(OR_u1_u1_1029));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1029));\
;

#define _outputPort_2_Daemon_assign_stmt_1063_c_macro_ __declare_static_bit_vector(konst_1033,3);\
bit_vector_clear(&konst_1033);\
konst_1033.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1034,1);\
__declare_static_bit_vector(slice_1036,32);\
__declare_static_bit_vector(konst_1037,32);\
bit_vector_clear(&konst_1037);\
__declare_static_bit_vector(MUX_1038,32);\
__declare_static_bit_vector(konst_1040,3);\
bit_vector_clear(&konst_1040);\
konst_1040.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1041,1);\
__declare_static_bit_vector(slice_1043,32);\
__declare_static_bit_vector(konst_1044,32);\
bit_vector_clear(&konst_1044);\
__declare_static_bit_vector(MUX_1045,32);\
__declare_static_bit_vector(OR_u32_u32_1046,32);\
__declare_static_bit_vector(konst_1048,3);\
bit_vector_clear(&konst_1048);\
konst_1048.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1049,1);\
__declare_static_bit_vector(slice_1051,32);\
__declare_static_bit_vector(konst_1052,32);\
bit_vector_clear(&konst_1052);\
__declare_static_bit_vector(MUX_1053,32);\
__declare_static_bit_vector(konst_1055,3);\
bit_vector_clear(&konst_1055);\
konst_1055.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1056,1);\
__declare_static_bit_vector(slice_1058,32);\
__declare_static_bit_vector(konst_1059,32);\
bit_vector_clear(&konst_1059);\
__declare_static_bit_vector(MUX_1060,32);\
__declare_static_bit_vector(OR_u32_u32_1061,32);\
__declare_static_bit_vector(OR_u32_u32_1062,32);\
bit_vector_clear(&konst_1033);\
konst_1033.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1033), &(EQ_u3_u1_1034));\
if (has_undefined_bit(&EQ_u3_u1_1034)) {fprintf(stderr, "Error: variable EQ_u3_u1_1034 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1034));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1034)){bit_vector_slice(&(pkt_1_e_word), &(slice_1036), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1038), &(slice_1036));\
}else {bit_vector_clear(&konst_1037);\
bit_vector_cast_to_bit_vector(0, &(MUX_1038), &(konst_1037));\
}bit_vector_clear(&konst_1040);\
konst_1040.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1040), &(EQ_u3_u1_1041));\
if (has_undefined_bit(&EQ_u3_u1_1041)) {fprintf(stderr, "Error: variable EQ_u3_u1_1041 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1041));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1041)){bit_vector_slice(&(pkt_2_e_word), &(slice_1043), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1045), &(slice_1043));\
}else {bit_vector_clear(&konst_1044);\
bit_vector_cast_to_bit_vector(0, &(MUX_1045), &(konst_1044));\
}bit_vector_or(&(MUX_1038), &(MUX_1045), &(OR_u32_u32_1046));\
bit_vector_clear(&konst_1048);\
konst_1048.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1048), &(EQ_u3_u1_1049));\
if (has_undefined_bit(&EQ_u3_u1_1049)) {fprintf(stderr, "Error: variable EQ_u3_u1_1049 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1049));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1049)){bit_vector_slice(&(pkt_3_e_word), &(slice_1051), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1053), &(slice_1051));\
}else {bit_vector_clear(&konst_1052);\
bit_vector_cast_to_bit_vector(0, &(MUX_1053), &(konst_1052));\
}bit_vector_clear(&konst_1055);\
konst_1055.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1055), &(EQ_u3_u1_1056));\
if (has_undefined_bit(&EQ_u3_u1_1056)) {fprintf(stderr, "Error: variable EQ_u3_u1_1056 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1056));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1056)){bit_vector_slice(&(pkt_4_e_word), &(slice_1058), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1060), &(slice_1058));\
}else {bit_vector_clear(&konst_1059);\
bit_vector_cast_to_bit_vector(0, &(MUX_1060), &(konst_1059));\
}bit_vector_or(&(MUX_1053), &(MUX_1060), &(OR_u32_u32_1061));\
bit_vector_or(&(OR_u32_u32_1046), &(OR_u32_u32_1061), &(OR_u32_u32_1062));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1062));\
;

#define _outputPort_2_Daemon_assign_stmt_1092_c_macro_ __declare_static_bit_vector(konst_1066,3);\
bit_vector_clear(&konst_1066);\
konst_1066.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1067,1);\
__declare_static_bit_vector(konst_1069,1);\
bit_vector_clear(&konst_1069);\
__declare_static_bit_vector(MUX_1070,1);\
__declare_static_bit_vector(konst_1072,3);\
bit_vector_clear(&konst_1072);\
konst_1072.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1073,1);\
__declare_static_bit_vector(konst_1075,1);\
bit_vector_clear(&konst_1075);\
__declare_static_bit_vector(MUX_1076,1);\
__declare_static_bit_vector(OR_u1_u1_1077,1);\
__declare_static_bit_vector(konst_1079,3);\
bit_vector_clear(&konst_1079);\
konst_1079.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1080,1);\
__declare_static_bit_vector(konst_1082,1);\
bit_vector_clear(&konst_1082);\
__declare_static_bit_vector(MUX_1083,1);\
__declare_static_bit_vector(konst_1085,3);\
bit_vector_clear(&konst_1085);\
konst_1085.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1086,1);\
__declare_static_bit_vector(konst_1088,1);\
bit_vector_clear(&konst_1088);\
__declare_static_bit_vector(MUX_1089,1);\
__declare_static_bit_vector(OR_u1_u1_1090,1);\
__declare_static_bit_vector(OR_u1_u1_1091,1);\
bit_vector_clear(&konst_1066);\
konst_1066.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1066), &(EQ_u3_u1_1067));\
if (has_undefined_bit(&EQ_u3_u1_1067)) {fprintf(stderr, "Error: variable EQ_u3_u1_1067 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1067));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1067)){bit_vector_cast_to_bit_vector(0, &(MUX_1070), &(p1_valid));\
}else {bit_vector_clear(&konst_1069);\
bit_vector_cast_to_bit_vector(0, &(MUX_1070), &(konst_1069));\
}bit_vector_clear(&konst_1072);\
konst_1072.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1072), &(EQ_u3_u1_1073));\
if (has_undefined_bit(&EQ_u3_u1_1073)) {fprintf(stderr, "Error: variable EQ_u3_u1_1073 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1073));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1073)){bit_vector_cast_to_bit_vector(0, &(MUX_1076), &(p2_valid));\
}else {bit_vector_clear(&konst_1075);\
bit_vector_cast_to_bit_vector(0, &(MUX_1076), &(konst_1075));\
}bit_vector_or(&(MUX_1070), &(MUX_1076), &(OR_u1_u1_1077));\
bit_vector_clear(&konst_1079);\
konst_1079.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1079), &(EQ_u3_u1_1080));\
if (has_undefined_bit(&EQ_u3_u1_1080)) {fprintf(stderr, "Error: variable EQ_u3_u1_1080 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1080));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1080)){bit_vector_cast_to_bit_vector(0, &(MUX_1083), &(p3_valid));\
}else {bit_vector_clear(&konst_1082);\
bit_vector_cast_to_bit_vector(0, &(MUX_1083), &(konst_1082));\
}bit_vector_clear(&konst_1085);\
konst_1085.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1085), &(EQ_u3_u1_1086));\
if (has_undefined_bit(&EQ_u3_u1_1086)) {fprintf(stderr, "Error: variable EQ_u3_u1_1086 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1086));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1086)){bit_vector_cast_to_bit_vector(0, &(MUX_1089), &(p4_valid));\
}else {bit_vector_clear(&konst_1088);\
bit_vector_cast_to_bit_vector(0, &(MUX_1089), &(konst_1088));\
}bit_vector_or(&(MUX_1083), &(MUX_1089), &(OR_u1_u1_1090));\
bit_vector_or(&(OR_u1_u1_1077), &(OR_u1_u1_1090), &(OR_u1_u1_1091));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1091));\
;

#define _outputPort_2_Daemon_assign_stmt_1096_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_2",&(data_to_out));\
}
;
;

#define _outputPort_2_Daemon_branch_block_stmt_880_c_export_apply_macro_ ;

#define _outputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_3_Daemon_branch_block_stmt_1102_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_3_Daemon_merge_stmt_1104_c_preamble_macro_ uint8_t merge_stmt_1104_entry_flag;\
merge_stmt_1104_entry_flag = do_while_entry_flag;\
goto merge_stmt_1104_run;\
merge_stmt_1104_run: ;\

#define _outputPort_3_Daemon_phi_stmt_1105_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1109_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_3_1113,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_3",&(RPIPE_noblock_obuf_1_3_1113));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_3_1113));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1114_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_3_1118,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_3",&(RPIPE_noblock_obuf_2_3_1118));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_3_1118));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1119_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_3_1123,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_3",&(RPIPE_noblock_obuf_3_3_1123));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_3_1123));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1124_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_3_1128,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_3",&(RPIPE_noblock_obuf_4_3_1128));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_3_1128));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1129_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1133_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_3_Daemon_merge_stmt_1104_c_postamble_macro_ merge_stmt_1104_entry_flag = 0;

#define _outputPort_3_Daemon_assign_stmt_1142_c_macro_ __declare_static_bit_vector(konst_1140,33);\
bit_vector_clear(&konst_1140);\
konst_1140.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1141,1);\
bit_vector_clear(&konst_1140);\
konst_1140.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1140), &(BITSEL_u33_u1_1141));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1141));\
;

#define _outputPort_3_Daemon_assign_stmt_1147_c_macro_ __declare_static_bit_vector(konst_1145,33);\
bit_vector_clear(&konst_1145);\
konst_1145.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1146,1);\
bit_vector_clear(&konst_1145);\
konst_1145.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1145), &(BITSEL_u33_u1_1146));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1146));\
;

#define _outputPort_3_Daemon_assign_stmt_1152_c_macro_ __declare_static_bit_vector(konst_1150,33);\
bit_vector_clear(&konst_1150);\
konst_1150.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1151,1);\
bit_vector_clear(&konst_1150);\
konst_1150.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1150), &(BITSEL_u33_u1_1151));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1151));\
;

#define _outputPort_3_Daemon_assign_stmt_1157_c_macro_ __declare_static_bit_vector(konst_1155,33);\
bit_vector_clear(&konst_1155);\
konst_1155.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1156,1);\
bit_vector_clear(&konst_1155);\
konst_1155.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1155), &(BITSEL_u33_u1_1156));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1156));\
;

#define _outputPort_3_Daemon_assign_stmt_1186_c_macro_ __declare_static_bit_vector(konst_1160,3);\
bit_vector_clear(&konst_1160);\
konst_1160.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1161,1);\
__declare_static_bit_vector(konst_1163,1);\
bit_vector_clear(&konst_1163);\
__declare_static_bit_vector(MUX_1164,1);\
__declare_static_bit_vector(konst_1166,3);\
bit_vector_clear(&konst_1166);\
konst_1166.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1167,1);\
__declare_static_bit_vector(konst_1169,1);\
bit_vector_clear(&konst_1169);\
__declare_static_bit_vector(MUX_1170,1);\
__declare_static_bit_vector(OR_u1_u1_1171,1);\
__declare_static_bit_vector(konst_1173,3);\
bit_vector_clear(&konst_1173);\
konst_1173.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1174,1);\
__declare_static_bit_vector(konst_1176,1);\
bit_vector_clear(&konst_1176);\
__declare_static_bit_vector(MUX_1177,1);\
__declare_static_bit_vector(konst_1179,3);\
bit_vector_clear(&konst_1179);\
konst_1179.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1180,1);\
__declare_static_bit_vector(konst_1182,1);\
bit_vector_clear(&konst_1182);\
__declare_static_bit_vector(MUX_1183,1);\
__declare_static_bit_vector(OR_u1_u1_1184,1);\
__declare_static_bit_vector(OR_u1_u1_1185,1);\
bit_vector_clear(&konst_1160);\
konst_1160.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1160), &(EQ_u3_u1_1161));\
if (has_undefined_bit(&EQ_u3_u1_1161)) {fprintf(stderr, "Error: variable EQ_u3_u1_1161 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1161));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1161)){bit_vector_cast_to_bit_vector(0, &(MUX_1164), &(p1_valid));\
}else {bit_vector_clear(&konst_1163);\
bit_vector_cast_to_bit_vector(0, &(MUX_1164), &(konst_1163));\
}bit_vector_clear(&konst_1166);\
konst_1166.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1166), &(EQ_u3_u1_1167));\
if (has_undefined_bit(&EQ_u3_u1_1167)) {fprintf(stderr, "Error: variable EQ_u3_u1_1167 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1167));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1167)){bit_vector_cast_to_bit_vector(0, &(MUX_1170), &(p2_valid));\
}else {bit_vector_clear(&konst_1169);\
bit_vector_cast_to_bit_vector(0, &(MUX_1170), &(konst_1169));\
}bit_vector_or(&(MUX_1164), &(MUX_1170), &(OR_u1_u1_1171));\
bit_vector_clear(&konst_1173);\
konst_1173.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1173), &(EQ_u3_u1_1174));\
if (has_undefined_bit(&EQ_u3_u1_1174)) {fprintf(stderr, "Error: variable EQ_u3_u1_1174 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1174));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1174)){bit_vector_cast_to_bit_vector(0, &(MUX_1177), &(p3_valid));\
}else {bit_vector_clear(&konst_1176);\
bit_vector_cast_to_bit_vector(0, &(MUX_1177), &(konst_1176));\
}bit_vector_clear(&konst_1179);\
konst_1179.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1179), &(EQ_u3_u1_1180));\
if (has_undefined_bit(&EQ_u3_u1_1180)) {fprintf(stderr, "Error: variable EQ_u3_u1_1180 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1180));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1180)){bit_vector_cast_to_bit_vector(0, &(MUX_1183), &(p4_valid));\
}else {bit_vector_clear(&konst_1182);\
bit_vector_cast_to_bit_vector(0, &(MUX_1183), &(konst_1182));\
}bit_vector_or(&(MUX_1177), &(MUX_1183), &(OR_u1_u1_1184));\
bit_vector_or(&(OR_u1_u1_1171), &(OR_u1_u1_1184), &(OR_u1_u1_1185));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1185));\
;

#define _outputPort_3_Daemon_call_stmt_1196_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_3_Daemon_assign_stmt_1209_c_macro_ __declare_static_bit_vector(OR_u1_u1_1200,1);\
__declare_static_bit_vector(OR_u1_u1_1203,1);\
__declare_static_bit_vector(OR_u1_u1_1204,1);\
__declare_static_bit_vector(konst_1206,8);\
bit_vector_clear(&konst_1206);\
__declare_static_bit_vector(EQ_u8_u1_1207,1);\
__declare_static_bit_vector(AND_u1_u1_1208,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_1200));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_1203));\
bit_vector_or(&(OR_u1_u1_1200), &(OR_u1_u1_1203), &(OR_u1_u1_1204));\
bit_vector_clear(&konst_1206);\
bit_vector_equal(0, &(down_counter), &(konst_1206), &(EQ_u8_u1_1207));\
bit_vector_and(&(OR_u1_u1_1204), &(EQ_u8_u1_1207), &(AND_u1_u1_1208));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1208));\
;

#define _outputPort_3_Daemon_assign_stmt_1220_c_macro_ __declare_static_bit_vector(konst_1212,8);\
bit_vector_clear(&konst_1212);\
konst_1212.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1215,8);\
bit_vector_clear(&konst_1215);\
konst_1215.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1216,8);\
__declare_static_bit_vector(MUX_1218,8);\
__declare_static_bit_vector(MUX_1219,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1212);\
konst_1212.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1219), &(konst_1212));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1215);\
konst_1215.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1215), &(SUB_u8_u8_1216));\
bit_vector_cast_to_bit_vector(0, &(MUX_1218), &(SUB_u8_u8_1216));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1218), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1219), &(MUX_1218));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1219));\
;

#define _outputPort_3_Daemon_assign_stmt_1228_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1223,1);\
__declare_static_bit_vector(konst_1225,3);\
bit_vector_clear(&konst_1225);\
konst_1225.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1226,1);\
__declare_static_bit_vector(OR_u1_u1_1227,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1223));\
bit_vector_clear(&konst_1225);\
konst_1225.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1225), &(EQ_u3_u1_1226));\
bit_vector_or(&(NOT_u1_u1_1223), &(EQ_u3_u1_1226), &(OR_u1_u1_1227));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1227));\
;

#define _outputPort_3_Daemon_assign_stmt_1236_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1231,1);\
__declare_static_bit_vector(konst_1233,3);\
bit_vector_clear(&konst_1233);\
konst_1233.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1234,1);\
__declare_static_bit_vector(OR_u1_u1_1235,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1231));\
bit_vector_clear(&konst_1233);\
konst_1233.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1233), &(EQ_u3_u1_1234));\
bit_vector_or(&(NOT_u1_u1_1231), &(EQ_u3_u1_1234), &(OR_u1_u1_1235));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1235));\
;

#define _outputPort_3_Daemon_assign_stmt_1244_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1239,1);\
__declare_static_bit_vector(konst_1241,3);\
bit_vector_clear(&konst_1241);\
konst_1241.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1242,1);\
__declare_static_bit_vector(OR_u1_u1_1243,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1239));\
bit_vector_clear(&konst_1241);\
konst_1241.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1241), &(EQ_u3_u1_1242));\
bit_vector_or(&(NOT_u1_u1_1239), &(EQ_u3_u1_1242), &(OR_u1_u1_1243));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1243));\
;

#define _outputPort_3_Daemon_assign_stmt_1252_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1247,1);\
__declare_static_bit_vector(konst_1249,3);\
bit_vector_clear(&konst_1249);\
konst_1249.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1250,1);\
__declare_static_bit_vector(OR_u1_u1_1251,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1247));\
bit_vector_clear(&konst_1249);\
konst_1249.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1249), &(EQ_u3_u1_1250));\
bit_vector_or(&(NOT_u1_u1_1247), &(EQ_u3_u1_1250), &(OR_u1_u1_1251));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1251));\
;

#define _outputPort_3_Daemon_assign_stmt_1285_c_macro_ __declare_static_bit_vector(konst_1255,3);\
bit_vector_clear(&konst_1255);\
konst_1255.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1256,1);\
__declare_static_bit_vector(slice_1258,32);\
__declare_static_bit_vector(konst_1259,32);\
bit_vector_clear(&konst_1259);\
__declare_static_bit_vector(MUX_1260,32);\
__declare_static_bit_vector(konst_1262,3);\
bit_vector_clear(&konst_1262);\
konst_1262.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1263,1);\
__declare_static_bit_vector(slice_1265,32);\
__declare_static_bit_vector(konst_1266,32);\
bit_vector_clear(&konst_1266);\
__declare_static_bit_vector(MUX_1267,32);\
__declare_static_bit_vector(OR_u32_u32_1268,32);\
__declare_static_bit_vector(konst_1270,3);\
bit_vector_clear(&konst_1270);\
konst_1270.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1271,1);\
__declare_static_bit_vector(slice_1273,32);\
__declare_static_bit_vector(konst_1274,32);\
bit_vector_clear(&konst_1274);\
__declare_static_bit_vector(MUX_1275,32);\
__declare_static_bit_vector(konst_1277,3);\
bit_vector_clear(&konst_1277);\
konst_1277.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1278,1);\
__declare_static_bit_vector(slice_1280,32);\
__declare_static_bit_vector(konst_1281,32);\
bit_vector_clear(&konst_1281);\
__declare_static_bit_vector(MUX_1282,32);\
__declare_static_bit_vector(OR_u32_u32_1283,32);\
__declare_static_bit_vector(OR_u32_u32_1284,32);\
bit_vector_clear(&konst_1255);\
konst_1255.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1255), &(EQ_u3_u1_1256));\
if (has_undefined_bit(&EQ_u3_u1_1256)) {fprintf(stderr, "Error: variable EQ_u3_u1_1256 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1256));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1256)){bit_vector_slice(&(pkt_1_e_word), &(slice_1258), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1260), &(slice_1258));\
}else {bit_vector_clear(&konst_1259);\
bit_vector_cast_to_bit_vector(0, &(MUX_1260), &(konst_1259));\
}bit_vector_clear(&konst_1262);\
konst_1262.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1262), &(EQ_u3_u1_1263));\
if (has_undefined_bit(&EQ_u3_u1_1263)) {fprintf(stderr, "Error: variable EQ_u3_u1_1263 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1263));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1263)){bit_vector_slice(&(pkt_2_e_word), &(slice_1265), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1267), &(slice_1265));\
}else {bit_vector_clear(&konst_1266);\
bit_vector_cast_to_bit_vector(0, &(MUX_1267), &(konst_1266));\
}bit_vector_or(&(MUX_1260), &(MUX_1267), &(OR_u32_u32_1268));\
bit_vector_clear(&konst_1270);\
konst_1270.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1270), &(EQ_u3_u1_1271));\
if (has_undefined_bit(&EQ_u3_u1_1271)) {fprintf(stderr, "Error: variable EQ_u3_u1_1271 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1271));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1271)){bit_vector_slice(&(pkt_3_e_word), &(slice_1273), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1275), &(slice_1273));\
}else {bit_vector_clear(&konst_1274);\
bit_vector_cast_to_bit_vector(0, &(MUX_1275), &(konst_1274));\
}bit_vector_clear(&konst_1277);\
konst_1277.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1277), &(EQ_u3_u1_1278));\
if (has_undefined_bit(&EQ_u3_u1_1278)) {fprintf(stderr, "Error: variable EQ_u3_u1_1278 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1278));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1278)){bit_vector_slice(&(pkt_4_e_word), &(slice_1280), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1282), &(slice_1280));\
}else {bit_vector_clear(&konst_1281);\
bit_vector_cast_to_bit_vector(0, &(MUX_1282), &(konst_1281));\
}bit_vector_or(&(MUX_1275), &(MUX_1282), &(OR_u32_u32_1283));\
bit_vector_or(&(OR_u32_u32_1268), &(OR_u32_u32_1283), &(OR_u32_u32_1284));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1284));\
;

#define _outputPort_3_Daemon_assign_stmt_1314_c_macro_ __declare_static_bit_vector(konst_1288,3);\
bit_vector_clear(&konst_1288);\
konst_1288.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1289,1);\
__declare_static_bit_vector(konst_1291,1);\
bit_vector_clear(&konst_1291);\
__declare_static_bit_vector(MUX_1292,1);\
__declare_static_bit_vector(konst_1294,3);\
bit_vector_clear(&konst_1294);\
konst_1294.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1295,1);\
__declare_static_bit_vector(konst_1297,1);\
bit_vector_clear(&konst_1297);\
__declare_static_bit_vector(MUX_1298,1);\
__declare_static_bit_vector(OR_u1_u1_1299,1);\
__declare_static_bit_vector(konst_1301,3);\
bit_vector_clear(&konst_1301);\
konst_1301.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1302,1);\
__declare_static_bit_vector(konst_1304,1);\
bit_vector_clear(&konst_1304);\
__declare_static_bit_vector(MUX_1305,1);\
__declare_static_bit_vector(konst_1307,3);\
bit_vector_clear(&konst_1307);\
konst_1307.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1308,1);\
__declare_static_bit_vector(konst_1310,1);\
bit_vector_clear(&konst_1310);\
__declare_static_bit_vector(MUX_1311,1);\
__declare_static_bit_vector(OR_u1_u1_1312,1);\
__declare_static_bit_vector(OR_u1_u1_1313,1);\
bit_vector_clear(&konst_1288);\
konst_1288.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1288), &(EQ_u3_u1_1289));\
if (has_undefined_bit(&EQ_u3_u1_1289)) {fprintf(stderr, "Error: variable EQ_u3_u1_1289 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1289));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1289)){bit_vector_cast_to_bit_vector(0, &(MUX_1292), &(p1_valid));\
}else {bit_vector_clear(&konst_1291);\
bit_vector_cast_to_bit_vector(0, &(MUX_1292), &(konst_1291));\
}bit_vector_clear(&konst_1294);\
konst_1294.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1294), &(EQ_u3_u1_1295));\
if (has_undefined_bit(&EQ_u3_u1_1295)) {fprintf(stderr, "Error: variable EQ_u3_u1_1295 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1295));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1295)){bit_vector_cast_to_bit_vector(0, &(MUX_1298), &(p2_valid));\
}else {bit_vector_clear(&konst_1297);\
bit_vector_cast_to_bit_vector(0, &(MUX_1298), &(konst_1297));\
}bit_vector_or(&(MUX_1292), &(MUX_1298), &(OR_u1_u1_1299));\
bit_vector_clear(&konst_1301);\
konst_1301.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1301), &(EQ_u3_u1_1302));\
if (has_undefined_bit(&EQ_u3_u1_1302)) {fprintf(stderr, "Error: variable EQ_u3_u1_1302 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1302));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1302)){bit_vector_cast_to_bit_vector(0, &(MUX_1305), &(p3_valid));\
}else {bit_vector_clear(&konst_1304);\
bit_vector_cast_to_bit_vector(0, &(MUX_1305), &(konst_1304));\
}bit_vector_clear(&konst_1307);\
konst_1307.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1307), &(EQ_u3_u1_1308));\
if (has_undefined_bit(&EQ_u3_u1_1308)) {fprintf(stderr, "Error: variable EQ_u3_u1_1308 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1308));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1308)){bit_vector_cast_to_bit_vector(0, &(MUX_1311), &(p4_valid));\
}else {bit_vector_clear(&konst_1310);\
bit_vector_cast_to_bit_vector(0, &(MUX_1311), &(konst_1310));\
}bit_vector_or(&(MUX_1305), &(MUX_1311), &(OR_u1_u1_1312));\
bit_vector_or(&(OR_u1_u1_1299), &(OR_u1_u1_1312), &(OR_u1_u1_1313));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1313));\
;

#define _outputPort_3_Daemon_assign_stmt_1318_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_3",&(data_to_out));\
}
;
;

#define _outputPort_3_Daemon_branch_block_stmt_1102_c_export_apply_macro_ ;

#define _outputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_4_Daemon_branch_block_stmt_1324_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
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


#define _outputPort_4_Daemon_merge_stmt_1326_c_preamble_macro_ uint8_t merge_stmt_1326_entry_flag;\
merge_stmt_1326_entry_flag = do_while_entry_flag;\
goto merge_stmt_1326_run;\
merge_stmt_1326_run: ;\

#define _outputPort_4_Daemon_phi_stmt_1327_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1331_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_4_1335,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_4",&(RPIPE_noblock_obuf_1_4_1335));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_4_1335));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1336_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_4_1340,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_4",&(RPIPE_noblock_obuf_2_4_1340));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_4_1340));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1341_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_4_1345,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_4",&(RPIPE_noblock_obuf_3_4_1345));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_4_1345));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1346_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_4_1350,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_4",&(RPIPE_noblock_obuf_4_4_1350));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_4_1350));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1351_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1355_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(next_pkt_priority));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_priority), &(ONE_3));\
}\
;
;

#define _outputPort_4_Daemon_merge_stmt_1326_c_postamble_macro_ merge_stmt_1326_entry_flag = 0;

#define _outputPort_4_Daemon_assign_stmt_1364_c_macro_ __declare_static_bit_vector(konst_1362,33);\
bit_vector_clear(&konst_1362);\
konst_1362.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1363,1);\
bit_vector_clear(&konst_1362);\
konst_1362.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1362), &(BITSEL_u33_u1_1363));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1363));\
;

#define _outputPort_4_Daemon_assign_stmt_1369_c_macro_ __declare_static_bit_vector(konst_1367,33);\
bit_vector_clear(&konst_1367);\
konst_1367.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1368,1);\
bit_vector_clear(&konst_1367);\
konst_1367.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1367), &(BITSEL_u33_u1_1368));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1368));\
;

#define _outputPort_4_Daemon_assign_stmt_1374_c_macro_ __declare_static_bit_vector(konst_1372,33);\
bit_vector_clear(&konst_1372);\
konst_1372.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1373,1);\
bit_vector_clear(&konst_1372);\
konst_1372.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1372), &(BITSEL_u33_u1_1373));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1373));\
;

#define _outputPort_4_Daemon_assign_stmt_1379_c_macro_ __declare_static_bit_vector(konst_1377,33);\
bit_vector_clear(&konst_1377);\
konst_1377.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1378,1);\
bit_vector_clear(&konst_1377);\
konst_1377.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1377), &(BITSEL_u33_u1_1378));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1378));\
;

#define _outputPort_4_Daemon_assign_stmt_1408_c_macro_ __declare_static_bit_vector(konst_1382,3);\
bit_vector_clear(&konst_1382);\
konst_1382.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1383,1);\
__declare_static_bit_vector(konst_1385,1);\
bit_vector_clear(&konst_1385);\
__declare_static_bit_vector(MUX_1386,1);\
__declare_static_bit_vector(konst_1388,3);\
bit_vector_clear(&konst_1388);\
konst_1388.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1389,1);\
__declare_static_bit_vector(konst_1391,1);\
bit_vector_clear(&konst_1391);\
__declare_static_bit_vector(MUX_1392,1);\
__declare_static_bit_vector(OR_u1_u1_1393,1);\
__declare_static_bit_vector(konst_1395,3);\
bit_vector_clear(&konst_1395);\
konst_1395.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1396,1);\
__declare_static_bit_vector(konst_1398,1);\
bit_vector_clear(&konst_1398);\
__declare_static_bit_vector(MUX_1399,1);\
__declare_static_bit_vector(konst_1401,3);\
bit_vector_clear(&konst_1401);\
konst_1401.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1402,1);\
__declare_static_bit_vector(konst_1404,1);\
bit_vector_clear(&konst_1404);\
__declare_static_bit_vector(MUX_1405,1);\
__declare_static_bit_vector(OR_u1_u1_1406,1);\
__declare_static_bit_vector(OR_u1_u1_1407,1);\
bit_vector_clear(&konst_1382);\
konst_1382.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1382), &(EQ_u3_u1_1383));\
if (has_undefined_bit(&EQ_u3_u1_1383)) {fprintf(stderr, "Error: variable EQ_u3_u1_1383 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1383));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1383)){bit_vector_cast_to_bit_vector(0, &(MUX_1386), &(p1_valid));\
}else {bit_vector_clear(&konst_1385);\
bit_vector_cast_to_bit_vector(0, &(MUX_1386), &(konst_1385));\
}bit_vector_clear(&konst_1388);\
konst_1388.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1388), &(EQ_u3_u1_1389));\
if (has_undefined_bit(&EQ_u3_u1_1389)) {fprintf(stderr, "Error: variable EQ_u3_u1_1389 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1389));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1389)){bit_vector_cast_to_bit_vector(0, &(MUX_1392), &(p2_valid));\
}else {bit_vector_clear(&konst_1391);\
bit_vector_cast_to_bit_vector(0, &(MUX_1392), &(konst_1391));\
}bit_vector_or(&(MUX_1386), &(MUX_1392), &(OR_u1_u1_1393));\
bit_vector_clear(&konst_1395);\
konst_1395.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1395), &(EQ_u3_u1_1396));\
if (has_undefined_bit(&EQ_u3_u1_1396)) {fprintf(stderr, "Error: variable EQ_u3_u1_1396 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1396));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1396)){bit_vector_cast_to_bit_vector(0, &(MUX_1399), &(p3_valid));\
}else {bit_vector_clear(&konst_1398);\
bit_vector_cast_to_bit_vector(0, &(MUX_1399), &(konst_1398));\
}bit_vector_clear(&konst_1401);\
konst_1401.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1401), &(EQ_u3_u1_1402));\
if (has_undefined_bit(&EQ_u3_u1_1402)) {fprintf(stderr, "Error: variable EQ_u3_u1_1402 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1402));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1402)){bit_vector_cast_to_bit_vector(0, &(MUX_1405), &(p4_valid));\
}else {bit_vector_clear(&konst_1404);\
bit_vector_cast_to_bit_vector(0, &(MUX_1405), &(konst_1404));\
}bit_vector_or(&(MUX_1399), &(MUX_1405), &(OR_u1_u1_1406));\
bit_vector_or(&(OR_u1_u1_1393), &(OR_u1_u1_1406), &(OR_u1_u1_1407));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1407));\
;

#define _outputPort_4_Daemon_call_stmt_1418_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_priority));\
;

#define _outputPort_4_Daemon_assign_stmt_1431_c_macro_ __declare_static_bit_vector(OR_u1_u1_1422,1);\
__declare_static_bit_vector(OR_u1_u1_1425,1);\
__declare_static_bit_vector(OR_u1_u1_1426,1);\
__declare_static_bit_vector(konst_1428,8);\
bit_vector_clear(&konst_1428);\
__declare_static_bit_vector(EQ_u8_u1_1429,1);\
__declare_static_bit_vector(AND_u1_u1_1430,1);\
bit_vector_or(&(p1_valid), &(p2_valid), &(OR_u1_u1_1422));\
bit_vector_or(&(p3_valid), &(p4_valid), &(OR_u1_u1_1425));\
bit_vector_or(&(OR_u1_u1_1422), &(OR_u1_u1_1425), &(OR_u1_u1_1426));\
bit_vector_clear(&konst_1428);\
bit_vector_equal(0, &(down_counter), &(konst_1428), &(EQ_u8_u1_1429));\
bit_vector_and(&(OR_u1_u1_1426), &(EQ_u8_u1_1429), &(AND_u1_u1_1430));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1430));\
;

#define _outputPort_4_Daemon_assign_stmt_1442_c_macro_ __declare_static_bit_vector(konst_1434,8);\
bit_vector_clear(&konst_1434);\
konst_1434.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1437,8);\
bit_vector_clear(&konst_1437);\
konst_1437.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1438,8);\
__declare_static_bit_vector(MUX_1440,8);\
__declare_static_bit_vector(MUX_1441,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1434);\
konst_1434.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1441), &(konst_1434));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1437);\
konst_1437.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1437), &(SUB_u8_u8_1438));\
bit_vector_cast_to_bit_vector(0, &(MUX_1440), &(SUB_u8_u8_1438));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1440), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1441), &(MUX_1440));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1441));\
;

#define _outputPort_4_Daemon_assign_stmt_1450_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1445,1);\
__declare_static_bit_vector(konst_1447,3);\
bit_vector_clear(&konst_1447);\
konst_1447.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1448,1);\
__declare_static_bit_vector(OR_u1_u1_1449,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1445));\
bit_vector_clear(&konst_1447);\
konst_1447.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1447), &(EQ_u3_u1_1448));\
bit_vector_or(&(NOT_u1_u1_1445), &(EQ_u3_u1_1448), &(OR_u1_u1_1449));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1449));\
;

#define _outputPort_4_Daemon_assign_stmt_1458_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1453,1);\
__declare_static_bit_vector(konst_1455,3);\
bit_vector_clear(&konst_1455);\
konst_1455.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1456,1);\
__declare_static_bit_vector(OR_u1_u1_1457,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1453));\
bit_vector_clear(&konst_1455);\
konst_1455.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1455), &(EQ_u3_u1_1456));\
bit_vector_or(&(NOT_u1_u1_1453), &(EQ_u3_u1_1456), &(OR_u1_u1_1457));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1457));\
;

#define _outputPort_4_Daemon_assign_stmt_1466_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1461,1);\
__declare_static_bit_vector(konst_1463,3);\
bit_vector_clear(&konst_1463);\
konst_1463.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1464,1);\
__declare_static_bit_vector(OR_u1_u1_1465,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1461));\
bit_vector_clear(&konst_1463);\
konst_1463.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1463), &(EQ_u3_u1_1464));\
bit_vector_or(&(NOT_u1_u1_1461), &(EQ_u3_u1_1464), &(OR_u1_u1_1465));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1465));\
;

#define _outputPort_4_Daemon_assign_stmt_1474_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1469,1);\
__declare_static_bit_vector(konst_1471,3);\
bit_vector_clear(&konst_1471);\
konst_1471.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1472,1);\
__declare_static_bit_vector(OR_u1_u1_1473,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1469));\
bit_vector_clear(&konst_1471);\
konst_1471.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1471), &(EQ_u3_u1_1472));\
bit_vector_or(&(NOT_u1_u1_1469), &(EQ_u3_u1_1472), &(OR_u1_u1_1473));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1473));\
;

#define _outputPort_4_Daemon_assign_stmt_1507_c_macro_ __declare_static_bit_vector(konst_1477,3);\
bit_vector_clear(&konst_1477);\
konst_1477.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1478,1);\
__declare_static_bit_vector(slice_1480,32);\
__declare_static_bit_vector(konst_1481,32);\
bit_vector_clear(&konst_1481);\
__declare_static_bit_vector(MUX_1482,32);\
__declare_static_bit_vector(konst_1484,3);\
bit_vector_clear(&konst_1484);\
konst_1484.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1485,1);\
__declare_static_bit_vector(slice_1487,32);\
__declare_static_bit_vector(konst_1488,32);\
bit_vector_clear(&konst_1488);\
__declare_static_bit_vector(MUX_1489,32);\
__declare_static_bit_vector(OR_u32_u32_1490,32);\
__declare_static_bit_vector(konst_1492,3);\
bit_vector_clear(&konst_1492);\
konst_1492.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1493,1);\
__declare_static_bit_vector(slice_1495,32);\
__declare_static_bit_vector(konst_1496,32);\
bit_vector_clear(&konst_1496);\
__declare_static_bit_vector(MUX_1497,32);\
__declare_static_bit_vector(konst_1499,3);\
bit_vector_clear(&konst_1499);\
konst_1499.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1500,1);\
__declare_static_bit_vector(slice_1502,32);\
__declare_static_bit_vector(konst_1503,32);\
bit_vector_clear(&konst_1503);\
__declare_static_bit_vector(MUX_1504,32);\
__declare_static_bit_vector(OR_u32_u32_1505,32);\
__declare_static_bit_vector(OR_u32_u32_1506,32);\
bit_vector_clear(&konst_1477);\
konst_1477.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1477), &(EQ_u3_u1_1478));\
if (has_undefined_bit(&EQ_u3_u1_1478)) {fprintf(stderr, "Error: variable EQ_u3_u1_1478 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1478));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1478)){bit_vector_slice(&(pkt_1_e_word), &(slice_1480), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1482), &(slice_1480));\
}else {bit_vector_clear(&konst_1481);\
bit_vector_cast_to_bit_vector(0, &(MUX_1482), &(konst_1481));\
}bit_vector_clear(&konst_1484);\
konst_1484.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1484), &(EQ_u3_u1_1485));\
if (has_undefined_bit(&EQ_u3_u1_1485)) {fprintf(stderr, "Error: variable EQ_u3_u1_1485 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1485));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1485)){bit_vector_slice(&(pkt_2_e_word), &(slice_1487), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1489), &(slice_1487));\
}else {bit_vector_clear(&konst_1488);\
bit_vector_cast_to_bit_vector(0, &(MUX_1489), &(konst_1488));\
}bit_vector_or(&(MUX_1482), &(MUX_1489), &(OR_u32_u32_1490));\
bit_vector_clear(&konst_1492);\
konst_1492.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1492), &(EQ_u3_u1_1493));\
if (has_undefined_bit(&EQ_u3_u1_1493)) {fprintf(stderr, "Error: variable EQ_u3_u1_1493 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1493));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1493)){bit_vector_slice(&(pkt_3_e_word), &(slice_1495), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1497), &(slice_1495));\
}else {bit_vector_clear(&konst_1496);\
bit_vector_cast_to_bit_vector(0, &(MUX_1497), &(konst_1496));\
}bit_vector_clear(&konst_1499);\
konst_1499.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1499), &(EQ_u3_u1_1500));\
if (has_undefined_bit(&EQ_u3_u1_1500)) {fprintf(stderr, "Error: variable EQ_u3_u1_1500 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1500));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1500)){bit_vector_slice(&(pkt_4_e_word), &(slice_1502), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1504), &(slice_1502));\
}else {bit_vector_clear(&konst_1503);\
bit_vector_cast_to_bit_vector(0, &(MUX_1504), &(konst_1503));\
}bit_vector_or(&(MUX_1497), &(MUX_1504), &(OR_u32_u32_1505));\
bit_vector_or(&(OR_u32_u32_1490), &(OR_u32_u32_1505), &(OR_u32_u32_1506));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1506));\
;

#define _outputPort_4_Daemon_assign_stmt_1536_c_macro_ __declare_static_bit_vector(konst_1510,3);\
bit_vector_clear(&konst_1510);\
konst_1510.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1511,1);\
__declare_static_bit_vector(konst_1513,1);\
bit_vector_clear(&konst_1513);\
__declare_static_bit_vector(MUX_1514,1);\
__declare_static_bit_vector(konst_1516,3);\
bit_vector_clear(&konst_1516);\
konst_1516.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1517,1);\
__declare_static_bit_vector(konst_1519,1);\
bit_vector_clear(&konst_1519);\
__declare_static_bit_vector(MUX_1520,1);\
__declare_static_bit_vector(OR_u1_u1_1521,1);\
__declare_static_bit_vector(konst_1523,3);\
bit_vector_clear(&konst_1523);\
konst_1523.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1524,1);\
__declare_static_bit_vector(konst_1526,1);\
bit_vector_clear(&konst_1526);\
__declare_static_bit_vector(MUX_1527,1);\
__declare_static_bit_vector(konst_1529,3);\
bit_vector_clear(&konst_1529);\
konst_1529.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1530,1);\
__declare_static_bit_vector(konst_1532,1);\
bit_vector_clear(&konst_1532);\
__declare_static_bit_vector(MUX_1533,1);\
__declare_static_bit_vector(OR_u1_u1_1534,1);\
__declare_static_bit_vector(OR_u1_u1_1535,1);\
bit_vector_clear(&konst_1510);\
konst_1510.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1510), &(EQ_u3_u1_1511));\
if (has_undefined_bit(&EQ_u3_u1_1511)) {fprintf(stderr, "Error: variable EQ_u3_u1_1511 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1511));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1511)){bit_vector_cast_to_bit_vector(0, &(MUX_1514), &(p1_valid));\
}else {bit_vector_clear(&konst_1513);\
bit_vector_cast_to_bit_vector(0, &(MUX_1514), &(konst_1513));\
}bit_vector_clear(&konst_1516);\
konst_1516.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1516), &(EQ_u3_u1_1517));\
if (has_undefined_bit(&EQ_u3_u1_1517)) {fprintf(stderr, "Error: variable EQ_u3_u1_1517 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1517));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1517)){bit_vector_cast_to_bit_vector(0, &(MUX_1520), &(p2_valid));\
}else {bit_vector_clear(&konst_1519);\
bit_vector_cast_to_bit_vector(0, &(MUX_1520), &(konst_1519));\
}bit_vector_or(&(MUX_1514), &(MUX_1520), &(OR_u1_u1_1521));\
bit_vector_clear(&konst_1523);\
konst_1523.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1523), &(EQ_u3_u1_1524));\
if (has_undefined_bit(&EQ_u3_u1_1524)) {fprintf(stderr, "Error: variable EQ_u3_u1_1524 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1524));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1524)){bit_vector_cast_to_bit_vector(0, &(MUX_1527), &(p3_valid));\
}else {bit_vector_clear(&konst_1526);\
bit_vector_cast_to_bit_vector(0, &(MUX_1527), &(konst_1526));\
}bit_vector_clear(&konst_1529);\
konst_1529.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1529), &(EQ_u3_u1_1530));\
if (has_undefined_bit(&EQ_u3_u1_1530)) {fprintf(stderr, "Error: variable EQ_u3_u1_1530 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1530));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1530)){bit_vector_cast_to_bit_vector(0, &(MUX_1533), &(p4_valid));\
}else {bit_vector_clear(&konst_1532);\
bit_vector_cast_to_bit_vector(0, &(MUX_1533), &(konst_1532));\
}bit_vector_or(&(MUX_1527), &(MUX_1533), &(OR_u1_u1_1534));\
bit_vector_or(&(OR_u1_u1_1521), &(OR_u1_u1_1534), &(OR_u1_u1_1535));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1535));\
;

#define _outputPort_4_Daemon_assign_stmt_1540_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;
;

#define _outputPort_4_Daemon_branch_block_stmt_1324_c_export_apply_macro_ ;

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

#define _prioritySelect_assign_stmt_655_c_macro_ __declare_static_bit_vector(konst_643,3);\
bit_vector_clear(&konst_643);\
konst_643.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_645,3);\
bit_vector_clear(&konst_645);\
konst_645.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_647,3);\
bit_vector_clear(&konst_647);\
konst_647.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_649,3);\
bit_vector_clear(&konst_649);\
konst_649.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUX_651,3);\
__declare_static_bit_vector(MUX_652,3);\
__declare_static_bit_vector(MUX_653,3);\
__declare_static_bit_vector(MUX_654,3);\
if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_643);\
konst_643.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_654), &(konst_643));\
}else {if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_645);\
konst_645.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_653), &(konst_645));\
}else {if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_647);\
konst_647.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_652), &(konst_647));\
}else {if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_649);\
konst_649.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_651), &(konst_649));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_651), &(pkt_priority));\
}bit_vector_cast_to_bit_vector(0, &(MUX_652), &(MUX_651));\
}bit_vector_cast_to_bit_vector(0, &(MUX_653), &(MUX_652));\
}bit_vector_cast_to_bit_vector(0, &(MUX_654), &(MUX_653));\
}bit_vector_cast_to_bit_vector(0, &(next_pkt_priority), &(MUX_654));\
;

#define _prioritySelect_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_active_packet)), &(next_active_packet));\
bit_vector_cast_to_bit_vector(0, &((*__pnext_pkt_priority)), &(next_pkt_priority));\
;
