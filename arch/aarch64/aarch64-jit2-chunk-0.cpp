#include <aarch64-jit2.h>
#include <queue>
#include <set>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace captive::arch::aarch64;
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_abs_simd(const aarch64_decode_a64_SIMD_TWO_REG_MISC&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:3581 [F] s_b_0_0=sym_2511_3_parameter_inst.SCALAR (const) */
    /* execute.simd:3581 [F] s_b_0_1: If s_b_0_0: Jump b_1 else b_3 (const) */
    if (insn.SCALAR) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:3582 [F] s_b_1_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:6275 [D] s_b_1_1 = ReadRegBank 7:s_b_1_0 (u64) */
    auto s_b_1_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_1_1,emitter.const_u8(8));
    }
    /* execute.simd:3582 [D] s_b_1_2 = (s64)s_b_1_1 */
    auto s_b_1_2 = emitter.reinterpret(s_b_1_1, emitter.context().types().s64());
    /* execute.simd:3583 [F] s_b_1_3=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3583 [D] s_b_1_4 = __builtin_abs64 */
    auto s_b_1_4 = emitter.call(__captive___builtin_abs64, s_b_1_2);
    /* execute.simd:6246 [D] s_b_1_5: WriteRegBank 2:s_b_1_3 = s_b_1_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_4);
    /* execute.simd:6247 [F] s_b_1_6 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_1_7: WriteRegBank 3:s_b_1_3 = s_b_1_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_1_8: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_4, b_5, b_6, b_7, b_8, b_9, b_10, b_11,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:3585 [F] s_b_3_0=sym_2511_3_parameter_inst.arrangement (const) */
    /* execute.simd:3586 [F] s_b_3_1 = constant s32 0 (const) */
    /* execute.simd:3597 [F] s_b_3_2 = constant s32 1 (const) */
    /* execute.simd:3608 [F] s_b_3_3 = constant s32 2 (const) */
    /* execute.simd:3619 [F] s_b_3_4 = constant s32 3 (const) */
    /* execute.simd:3630 [F] s_b_3_5 = constant s32 4 (const) */
    /* execute.simd:3641 [F] s_b_3_6 = constant s32 5 (const) */
    /* execute.simd:3652 [F] s_b_3_7 = constant s32 6 (const) */
    /* execute.simd:3585 [F] s_b_3_8: Switch s_b_3_0: < <todo> > def b_11 (const) -> b_11, b_10, b_9, b_8, b_7, b_6, b_5, b_4,  */
    switch (insn.arrangement) 
    {
    case (int32_t)1ULL:
      goto fixed_block_b_5;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_7;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_8;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_9;
      break;
    case (int32_t)6ULL:
      goto fixed_block_b_10;
      break;
    default:
      goto fixed_block_b_11;
    }
  }
  /* b_3,  */
  fixed_block_b_4: 
  {
    /* execute.simd:3587 [F] s_b_4_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3587 [D] s_b_4_1 = ReadRegBank 15:s_b_4_0 (v8u8) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_1,emitter.const_u8(8));
    }
    /* execute.simd:3587 [D] s_b_4_2 = (v8s8)s_b_4_1 */
    auto s_b_4_2 = emitter.reinterpret(s_b_4_1, emitter.context().types().v8s8());
    /* ???:4294967295 [F] s_b_4_3 = constant v16u8 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_4_4 = constant u8 0 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_4] */
    auto s_b_4_5 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3591 [D] s_b_4_6 = (s32)s_b_4_5 */
    auto s_b_4_6 = emitter.sx(s_b_4_5, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_7 = __builtin_abs32 */
    auto s_b_4_7 = emitter.call(__captive___builtin_abs32, s_b_4_6);
    /* execute.simd:3591 [D] s_b_4_8 = (u8)s_b_4_7 */
    auto s_b_4_8 = emitter.truncate(s_b_4_7, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_9 = constant s32 0 (const) */
    /* execute.simd:3591 [D] s_b_4_10 = s_b_4_3[s_b_4_9] <= s_b_4_8 */
    auto s_b_4_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint8_t, 16>(0)[0], emitter.context().types().v16u8()), emitter.const_s32((int32_t)0ULL), s_b_4_8);
    /* ???:4294967295 [F] s_b_4_11 = constant u8 1 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_11] */
    auto s_b_4_12 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3591 [D] s_b_4_13 = (s32)s_b_4_12 */
    auto s_b_4_13 = emitter.sx(s_b_4_12, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_14 = __builtin_abs32 */
    auto s_b_4_14 = emitter.call(__captive___builtin_abs32, s_b_4_13);
    /* execute.simd:3591 [D] s_b_4_15 = (u8)s_b_4_14 */
    auto s_b_4_15 = emitter.truncate(s_b_4_14, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_16 = constant s32 1 (const) */
    /* execute.simd:3591 [D] s_b_4_17 = s_b_4_10[s_b_4_16] <= s_b_4_15 */
    auto s_b_4_17 = emitter.vector_insert(s_b_4_10, emitter.const_s32((int32_t)1ULL), s_b_4_15);
    /* ???:4294967295 [F] s_b_4_18 = constant u8 2 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_18] */
    auto s_b_4_19 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3591 [D] s_b_4_20 = (s32)s_b_4_19 */
    auto s_b_4_20 = emitter.sx(s_b_4_19, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_21 = __builtin_abs32 */
    auto s_b_4_21 = emitter.call(__captive___builtin_abs32, s_b_4_20);
    /* execute.simd:3591 [D] s_b_4_22 = (u8)s_b_4_21 */
    auto s_b_4_22 = emitter.truncate(s_b_4_21, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_23 = constant s32 2 (const) */
    /* execute.simd:3591 [D] s_b_4_24 = s_b_4_17[s_b_4_23] <= s_b_4_22 */
    auto s_b_4_24 = emitter.vector_insert(s_b_4_17, emitter.const_s32((int32_t)2ULL), s_b_4_22);
    /* ???:4294967295 [F] s_b_4_25 = constant u8 3 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_25] */
    auto s_b_4_26 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3591 [D] s_b_4_27 = (s32)s_b_4_26 */
    auto s_b_4_27 = emitter.sx(s_b_4_26, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_28 = __builtin_abs32 */
    auto s_b_4_28 = emitter.call(__captive___builtin_abs32, s_b_4_27);
    /* execute.simd:3591 [D] s_b_4_29 = (u8)s_b_4_28 */
    auto s_b_4_29 = emitter.truncate(s_b_4_28, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_30 = constant s32 3 (const) */
    /* execute.simd:3591 [D] s_b_4_31 = s_b_4_24[s_b_4_30] <= s_b_4_29 */
    auto s_b_4_31 = emitter.vector_insert(s_b_4_24, emitter.const_s32((int32_t)3ULL), s_b_4_29);
    /* ???:4294967295 [F] s_b_4_32 = constant u8 4 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_32] */
    auto s_b_4_33 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:3591 [D] s_b_4_34 = (s32)s_b_4_33 */
    auto s_b_4_34 = emitter.sx(s_b_4_33, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_35 = __builtin_abs32 */
    auto s_b_4_35 = emitter.call(__captive___builtin_abs32, s_b_4_34);
    /* execute.simd:3591 [D] s_b_4_36 = (u8)s_b_4_35 */
    auto s_b_4_36 = emitter.truncate(s_b_4_35, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_37 = constant s32 4 (const) */
    /* execute.simd:3591 [D] s_b_4_38 = s_b_4_31[s_b_4_37] <= s_b_4_36 */
    auto s_b_4_38 = emitter.vector_insert(s_b_4_31, emitter.const_s32((int32_t)4ULL), s_b_4_36);
    /* ???:4294967295 [F] s_b_4_39 = constant u8 5 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_39] */
    auto s_b_4_40 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:3591 [D] s_b_4_41 = (s32)s_b_4_40 */
    auto s_b_4_41 = emitter.sx(s_b_4_40, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_42 = __builtin_abs32 */
    auto s_b_4_42 = emitter.call(__captive___builtin_abs32, s_b_4_41);
    /* execute.simd:3591 [D] s_b_4_43 = (u8)s_b_4_42 */
    auto s_b_4_43 = emitter.truncate(s_b_4_42, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_44 = constant s32 5 (const) */
    /* execute.simd:3591 [D] s_b_4_45 = s_b_4_38[s_b_4_44] <= s_b_4_43 */
    auto s_b_4_45 = emitter.vector_insert(s_b_4_38, emitter.const_s32((int32_t)5ULL), s_b_4_43);
    /* ???:4294967295 [F] s_b_4_46 = constant u8 6 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_46] */
    auto s_b_4_47 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:3591 [D] s_b_4_48 = (s32)s_b_4_47 */
    auto s_b_4_48 = emitter.sx(s_b_4_47, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_49 = __builtin_abs32 */
    auto s_b_4_49 = emitter.call(__captive___builtin_abs32, s_b_4_48);
    /* execute.simd:3591 [D] s_b_4_50 = (u8)s_b_4_49 */
    auto s_b_4_50 = emitter.truncate(s_b_4_49, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_51 = constant s32 6 (const) */
    /* execute.simd:3591 [D] s_b_4_52 = s_b_4_45[s_b_4_51] <= s_b_4_50 */
    auto s_b_4_52 = emitter.vector_insert(s_b_4_45, emitter.const_s32((int32_t)6ULL), s_b_4_50);
    /* ???:4294967295 [F] s_b_4_53 = constant u8 7 (const) */
    /* execute.simd:3591 [D] s_b_4_2[s_b_4_53] */
    auto s_b_4_54 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:3591 [D] s_b_4_55 = (s32)s_b_4_54 */
    auto s_b_4_55 = emitter.sx(s_b_4_54, emitter.context().types().s32());
    /* execute.simd:3591 [D] s_b_4_56 = __builtin_abs32 */
    auto s_b_4_56 = emitter.call(__captive___builtin_abs32, s_b_4_55);
    /* execute.simd:3591 [D] s_b_4_57 = (u8)s_b_4_56 */
    auto s_b_4_57 = emitter.truncate(s_b_4_56, emitter.context().types().u8());
    /* execute.simd:3591 [F] s_b_4_58 = constant s32 7 (const) */
    /* execute.simd:3591 [D] s_b_4_59 = s_b_4_52[s_b_4_58] <= s_b_4_57 */
    auto s_b_4_59 = emitter.vector_insert(s_b_4_52, emitter.const_s32((int32_t)7ULL), s_b_4_57);
    /* execute.simd:3594 [F] s_b_4_60=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3594 [D] s_b_4_61: WriteRegBank 16:s_b_4_60 = s_b_4_59 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_59,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_59);
    /* execute.simd:0 [F] s_b_4_62: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_5: 
  {
    /* execute.simd:3598 [F] s_b_5_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3598 [D] s_b_5_1 = ReadRegBank 16:s_b_5_0 (v16u8) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_5_1,emitter.const_u8(16));
    }
    /* execute.simd:3598 [D] s_b_5_2 = (v16s8)s_b_5_1 */
    auto s_b_5_2 = emitter.reinterpret(s_b_5_1, emitter.context().types().v16s8());
    /* ???:4294967295 [F] s_b_5_3 = constant v16u8 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_5_4 = constant u8 0 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_4] */
    auto s_b_5_5 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3602 [D] s_b_5_6 = (s32)s_b_5_5 */
    auto s_b_5_6 = emitter.sx(s_b_5_5, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_7 = __builtin_abs32 */
    auto s_b_5_7 = emitter.call(__captive___builtin_abs32, s_b_5_6);
    /* execute.simd:3602 [D] s_b_5_8 = (u8)s_b_5_7 */
    auto s_b_5_8 = emitter.truncate(s_b_5_7, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_9 = constant s32 0 (const) */
    /* execute.simd:3602 [D] s_b_5_10 = s_b_5_3[s_b_5_9] <= s_b_5_8 */
    auto s_b_5_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint8_t, 16>(0)[0], emitter.context().types().v16u8()), emitter.const_s32((int32_t)0ULL), s_b_5_8);
    /* ???:4294967295 [F] s_b_5_11 = constant u8 1 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_11] */
    auto s_b_5_12 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3602 [D] s_b_5_13 = (s32)s_b_5_12 */
    auto s_b_5_13 = emitter.sx(s_b_5_12, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_14 = __builtin_abs32 */
    auto s_b_5_14 = emitter.call(__captive___builtin_abs32, s_b_5_13);
    /* execute.simd:3602 [D] s_b_5_15 = (u8)s_b_5_14 */
    auto s_b_5_15 = emitter.truncate(s_b_5_14, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_16 = constant s32 1 (const) */
    /* execute.simd:3602 [D] s_b_5_17 = s_b_5_10[s_b_5_16] <= s_b_5_15 */
    auto s_b_5_17 = emitter.vector_insert(s_b_5_10, emitter.const_s32((int32_t)1ULL), s_b_5_15);
    /* ???:4294967295 [F] s_b_5_18 = constant u8 2 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_18] */
    auto s_b_5_19 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3602 [D] s_b_5_20 = (s32)s_b_5_19 */
    auto s_b_5_20 = emitter.sx(s_b_5_19, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_21 = __builtin_abs32 */
    auto s_b_5_21 = emitter.call(__captive___builtin_abs32, s_b_5_20);
    /* execute.simd:3602 [D] s_b_5_22 = (u8)s_b_5_21 */
    auto s_b_5_22 = emitter.truncate(s_b_5_21, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_23 = constant s32 2 (const) */
    /* execute.simd:3602 [D] s_b_5_24 = s_b_5_17[s_b_5_23] <= s_b_5_22 */
    auto s_b_5_24 = emitter.vector_insert(s_b_5_17, emitter.const_s32((int32_t)2ULL), s_b_5_22);
    /* ???:4294967295 [F] s_b_5_25 = constant u8 3 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_25] */
    auto s_b_5_26 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3602 [D] s_b_5_27 = (s32)s_b_5_26 */
    auto s_b_5_27 = emitter.sx(s_b_5_26, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_28 = __builtin_abs32 */
    auto s_b_5_28 = emitter.call(__captive___builtin_abs32, s_b_5_27);
    /* execute.simd:3602 [D] s_b_5_29 = (u8)s_b_5_28 */
    auto s_b_5_29 = emitter.truncate(s_b_5_28, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_30 = constant s32 3 (const) */
    /* execute.simd:3602 [D] s_b_5_31 = s_b_5_24[s_b_5_30] <= s_b_5_29 */
    auto s_b_5_31 = emitter.vector_insert(s_b_5_24, emitter.const_s32((int32_t)3ULL), s_b_5_29);
    /* ???:4294967295 [F] s_b_5_32 = constant u8 4 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_32] */
    auto s_b_5_33 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:3602 [D] s_b_5_34 = (s32)s_b_5_33 */
    auto s_b_5_34 = emitter.sx(s_b_5_33, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_35 = __builtin_abs32 */
    auto s_b_5_35 = emitter.call(__captive___builtin_abs32, s_b_5_34);
    /* execute.simd:3602 [D] s_b_5_36 = (u8)s_b_5_35 */
    auto s_b_5_36 = emitter.truncate(s_b_5_35, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_37 = constant s32 4 (const) */
    /* execute.simd:3602 [D] s_b_5_38 = s_b_5_31[s_b_5_37] <= s_b_5_36 */
    auto s_b_5_38 = emitter.vector_insert(s_b_5_31, emitter.const_s32((int32_t)4ULL), s_b_5_36);
    /* ???:4294967295 [F] s_b_5_39 = constant u8 5 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_39] */
    auto s_b_5_40 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:3602 [D] s_b_5_41 = (s32)s_b_5_40 */
    auto s_b_5_41 = emitter.sx(s_b_5_40, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_42 = __builtin_abs32 */
    auto s_b_5_42 = emitter.call(__captive___builtin_abs32, s_b_5_41);
    /* execute.simd:3602 [D] s_b_5_43 = (u8)s_b_5_42 */
    auto s_b_5_43 = emitter.truncate(s_b_5_42, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_44 = constant s32 5 (const) */
    /* execute.simd:3602 [D] s_b_5_45 = s_b_5_38[s_b_5_44] <= s_b_5_43 */
    auto s_b_5_45 = emitter.vector_insert(s_b_5_38, emitter.const_s32((int32_t)5ULL), s_b_5_43);
    /* ???:4294967295 [F] s_b_5_46 = constant u8 6 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_46] */
    auto s_b_5_47 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:3602 [D] s_b_5_48 = (s32)s_b_5_47 */
    auto s_b_5_48 = emitter.sx(s_b_5_47, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_49 = __builtin_abs32 */
    auto s_b_5_49 = emitter.call(__captive___builtin_abs32, s_b_5_48);
    /* execute.simd:3602 [D] s_b_5_50 = (u8)s_b_5_49 */
    auto s_b_5_50 = emitter.truncate(s_b_5_49, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_51 = constant s32 6 (const) */
    /* execute.simd:3602 [D] s_b_5_52 = s_b_5_45[s_b_5_51] <= s_b_5_50 */
    auto s_b_5_52 = emitter.vector_insert(s_b_5_45, emitter.const_s32((int32_t)6ULL), s_b_5_50);
    /* ???:4294967295 [F] s_b_5_53 = constant u8 7 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_53] */
    auto s_b_5_54 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:3602 [D] s_b_5_55 = (s32)s_b_5_54 */
    auto s_b_5_55 = emitter.sx(s_b_5_54, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_56 = __builtin_abs32 */
    auto s_b_5_56 = emitter.call(__captive___builtin_abs32, s_b_5_55);
    /* execute.simd:3602 [D] s_b_5_57 = (u8)s_b_5_56 */
    auto s_b_5_57 = emitter.truncate(s_b_5_56, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_58 = constant s32 7 (const) */
    /* execute.simd:3602 [D] s_b_5_59 = s_b_5_52[s_b_5_58] <= s_b_5_57 */
    auto s_b_5_59 = emitter.vector_insert(s_b_5_52, emitter.const_s32((int32_t)7ULL), s_b_5_57);
    /* ???:4294967295 [F] s_b_5_60 = constant u8 8 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_60] */
    auto s_b_5_61 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)8ULL));
    /* execute.simd:3602 [D] s_b_5_62 = (s32)s_b_5_61 */
    auto s_b_5_62 = emitter.sx(s_b_5_61, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_63 = __builtin_abs32 */
    auto s_b_5_63 = emitter.call(__captive___builtin_abs32, s_b_5_62);
    /* execute.simd:3602 [D] s_b_5_64 = (u8)s_b_5_63 */
    auto s_b_5_64 = emitter.truncate(s_b_5_63, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_65 = constant s32 8 (const) */
    /* execute.simd:3602 [D] s_b_5_66 = s_b_5_59[s_b_5_65] <= s_b_5_64 */
    auto s_b_5_66 = emitter.vector_insert(s_b_5_59, emitter.const_s32((int32_t)8ULL), s_b_5_64);
    /* ???:4294967295 [F] s_b_5_67 = constant u8 9 (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_67] */
    auto s_b_5_68 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)9ULL));
    /* execute.simd:3602 [D] s_b_5_69 = (s32)s_b_5_68 */
    auto s_b_5_69 = emitter.sx(s_b_5_68, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_70 = __builtin_abs32 */
    auto s_b_5_70 = emitter.call(__captive___builtin_abs32, s_b_5_69);
    /* execute.simd:3602 [D] s_b_5_71 = (u8)s_b_5_70 */
    auto s_b_5_71 = emitter.truncate(s_b_5_70, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_72 = constant s32 9 (const) */
    /* execute.simd:3602 [D] s_b_5_73 = s_b_5_66[s_b_5_72] <= s_b_5_71 */
    auto s_b_5_73 = emitter.vector_insert(s_b_5_66, emitter.const_s32((int32_t)9ULL), s_b_5_71);
    /* ???:4294967295 [F] s_b_5_74 = constant u8 a (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_74] */
    auto s_b_5_75 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)10ULL));
    /* execute.simd:3602 [D] s_b_5_76 = (s32)s_b_5_75 */
    auto s_b_5_76 = emitter.sx(s_b_5_75, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_77 = __builtin_abs32 */
    auto s_b_5_77 = emitter.call(__captive___builtin_abs32, s_b_5_76);
    /* execute.simd:3602 [D] s_b_5_78 = (u8)s_b_5_77 */
    auto s_b_5_78 = emitter.truncate(s_b_5_77, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_79 = constant s32 a (const) */
    /* execute.simd:3602 [D] s_b_5_80 = s_b_5_73[s_b_5_79] <= s_b_5_78 */
    auto s_b_5_80 = emitter.vector_insert(s_b_5_73, emitter.const_s32((int32_t)10ULL), s_b_5_78);
    /* ???:4294967295 [F] s_b_5_81 = constant u8 b (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_81] */
    auto s_b_5_82 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)11ULL));
    /* execute.simd:3602 [D] s_b_5_83 = (s32)s_b_5_82 */
    auto s_b_5_83 = emitter.sx(s_b_5_82, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_84 = __builtin_abs32 */
    auto s_b_5_84 = emitter.call(__captive___builtin_abs32, s_b_5_83);
    /* execute.simd:3602 [D] s_b_5_85 = (u8)s_b_5_84 */
    auto s_b_5_85 = emitter.truncate(s_b_5_84, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_86 = constant s32 b (const) */
    /* execute.simd:3602 [D] s_b_5_87 = s_b_5_80[s_b_5_86] <= s_b_5_85 */
    auto s_b_5_87 = emitter.vector_insert(s_b_5_80, emitter.const_s32((int32_t)11ULL), s_b_5_85);
    /* ???:4294967295 [F] s_b_5_88 = constant u8 c (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_88] */
    auto s_b_5_89 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)12ULL));
    /* execute.simd:3602 [D] s_b_5_90 = (s32)s_b_5_89 */
    auto s_b_5_90 = emitter.sx(s_b_5_89, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_91 = __builtin_abs32 */
    auto s_b_5_91 = emitter.call(__captive___builtin_abs32, s_b_5_90);
    /* execute.simd:3602 [D] s_b_5_92 = (u8)s_b_5_91 */
    auto s_b_5_92 = emitter.truncate(s_b_5_91, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_93 = constant s32 c (const) */
    /* execute.simd:3602 [D] s_b_5_94 = s_b_5_87[s_b_5_93] <= s_b_5_92 */
    auto s_b_5_94 = emitter.vector_insert(s_b_5_87, emitter.const_s32((int32_t)12ULL), s_b_5_92);
    /* ???:4294967295 [F] s_b_5_95 = constant u8 d (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_95] */
    auto s_b_5_96 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)13ULL));
    /* execute.simd:3602 [D] s_b_5_97 = (s32)s_b_5_96 */
    auto s_b_5_97 = emitter.sx(s_b_5_96, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_98 = __builtin_abs32 */
    auto s_b_5_98 = emitter.call(__captive___builtin_abs32, s_b_5_97);
    /* execute.simd:3602 [D] s_b_5_99 = (u8)s_b_5_98 */
    auto s_b_5_99 = emitter.truncate(s_b_5_98, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_100 = constant s32 d (const) */
    /* execute.simd:3602 [D] s_b_5_101 = s_b_5_94[s_b_5_100] <= s_b_5_99 */
    auto s_b_5_101 = emitter.vector_insert(s_b_5_94, emitter.const_s32((int32_t)13ULL), s_b_5_99);
    /* ???:4294967295 [F] s_b_5_102 = constant u8 e (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_102] */
    auto s_b_5_103 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)14ULL));
    /* execute.simd:3602 [D] s_b_5_104 = (s32)s_b_5_103 */
    auto s_b_5_104 = emitter.sx(s_b_5_103, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_105 = __builtin_abs32 */
    auto s_b_5_105 = emitter.call(__captive___builtin_abs32, s_b_5_104);
    /* execute.simd:3602 [D] s_b_5_106 = (u8)s_b_5_105 */
    auto s_b_5_106 = emitter.truncate(s_b_5_105, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_107 = constant s32 e (const) */
    /* execute.simd:3602 [D] s_b_5_108 = s_b_5_101[s_b_5_107] <= s_b_5_106 */
    auto s_b_5_108 = emitter.vector_insert(s_b_5_101, emitter.const_s32((int32_t)14ULL), s_b_5_106);
    /* ???:4294967295 [F] s_b_5_109 = constant u8 f (const) */
    /* execute.simd:3602 [D] s_b_5_2[s_b_5_109] */
    auto s_b_5_110 = emitter.vector_extract(s_b_5_2, emitter.const_u8((uint8_t)15ULL));
    /* execute.simd:3602 [D] s_b_5_111 = (s32)s_b_5_110 */
    auto s_b_5_111 = emitter.sx(s_b_5_110, emitter.context().types().s32());
    /* execute.simd:3602 [D] s_b_5_112 = __builtin_abs32 */
    auto s_b_5_112 = emitter.call(__captive___builtin_abs32, s_b_5_111);
    /* execute.simd:3602 [D] s_b_5_113 = (u8)s_b_5_112 */
    auto s_b_5_113 = emitter.truncate(s_b_5_112, emitter.context().types().u8());
    /* execute.simd:3602 [F] s_b_5_114 = constant s32 f (const) */
    /* execute.simd:3602 [D] s_b_5_115 = s_b_5_108[s_b_5_114] <= s_b_5_113 */
    auto s_b_5_115 = emitter.vector_insert(s_b_5_108, emitter.const_s32((int32_t)15ULL), s_b_5_113);
    /* execute.simd:3605 [F] s_b_5_116=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3605 [D] s_b_5_117: WriteRegBank 16:s_b_5_116 = s_b_5_115 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_115,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_115);
    /* execute.simd:0 [F] s_b_5_118: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_6: 
  {
    /* execute.simd:3609 [F] s_b_6_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3609 [D] s_b_6_1 = ReadRegBank 17:s_b_6_0 (v4u16) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* execute.simd:3609 [D] s_b_6_2 = (v4s16)s_b_6_1 */
    auto s_b_6_2 = emitter.reinterpret(s_b_6_1, emitter.context().types().v4s16());
    /* ???:4294967295 [F] s_b_6_3 = constant v8u16 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_6_4 = constant u8 0 (const) */
    /* execute.simd:3613 [D] s_b_6_2[s_b_6_4] */
    auto s_b_6_5 = emitter.vector_extract(s_b_6_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3613 [D] s_b_6_6 = (s32)s_b_6_5 */
    auto s_b_6_6 = emitter.sx(s_b_6_5, emitter.context().types().s32());
    /* execute.simd:3613 [D] s_b_6_7 = __builtin_abs32 */
    auto s_b_6_7 = emitter.call(__captive___builtin_abs32, s_b_6_6);
    /* execute.simd:3613 [D] s_b_6_8 = (u16)s_b_6_7 */
    auto s_b_6_8 = emitter.truncate(s_b_6_7, emitter.context().types().u16());
    /* execute.simd:3613 [F] s_b_6_9 = constant s32 0 (const) */
    /* execute.simd:3613 [D] s_b_6_10 = s_b_6_3[s_b_6_9] <= s_b_6_8 */
    auto s_b_6_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_6_8);
    /* ???:4294967295 [F] s_b_6_11 = constant u8 1 (const) */
    /* execute.simd:3613 [D] s_b_6_2[s_b_6_11] */
    auto s_b_6_12 = emitter.vector_extract(s_b_6_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3613 [D] s_b_6_13 = (s32)s_b_6_12 */
    auto s_b_6_13 = emitter.sx(s_b_6_12, emitter.context().types().s32());
    /* execute.simd:3613 [D] s_b_6_14 = __builtin_abs32 */
    auto s_b_6_14 = emitter.call(__captive___builtin_abs32, s_b_6_13);
    /* execute.simd:3613 [D] s_b_6_15 = (u16)s_b_6_14 */
    auto s_b_6_15 = emitter.truncate(s_b_6_14, emitter.context().types().u16());
    /* execute.simd:3613 [F] s_b_6_16 = constant s32 1 (const) */
    /* execute.simd:3613 [D] s_b_6_17 = s_b_6_10[s_b_6_16] <= s_b_6_15 */
    auto s_b_6_17 = emitter.vector_insert(s_b_6_10, emitter.const_s32((int32_t)1ULL), s_b_6_15);
    /* ???:4294967295 [F] s_b_6_18 = constant u8 2 (const) */
    /* execute.simd:3613 [D] s_b_6_2[s_b_6_18] */
    auto s_b_6_19 = emitter.vector_extract(s_b_6_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3613 [D] s_b_6_20 = (s32)s_b_6_19 */
    auto s_b_6_20 = emitter.sx(s_b_6_19, emitter.context().types().s32());
    /* execute.simd:3613 [D] s_b_6_21 = __builtin_abs32 */
    auto s_b_6_21 = emitter.call(__captive___builtin_abs32, s_b_6_20);
    /* execute.simd:3613 [D] s_b_6_22 = (u16)s_b_6_21 */
    auto s_b_6_22 = emitter.truncate(s_b_6_21, emitter.context().types().u16());
    /* execute.simd:3613 [F] s_b_6_23 = constant s32 2 (const) */
    /* execute.simd:3613 [D] s_b_6_24 = s_b_6_17[s_b_6_23] <= s_b_6_22 */
    auto s_b_6_24 = emitter.vector_insert(s_b_6_17, emitter.const_s32((int32_t)2ULL), s_b_6_22);
    /* ???:4294967295 [F] s_b_6_25 = constant u8 3 (const) */
    /* execute.simd:3613 [D] s_b_6_2[s_b_6_25] */
    auto s_b_6_26 = emitter.vector_extract(s_b_6_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3613 [D] s_b_6_27 = (s32)s_b_6_26 */
    auto s_b_6_27 = emitter.sx(s_b_6_26, emitter.context().types().s32());
    /* execute.simd:3613 [D] s_b_6_28 = __builtin_abs32 */
    auto s_b_6_28 = emitter.call(__captive___builtin_abs32, s_b_6_27);
    /* execute.simd:3613 [D] s_b_6_29 = (u16)s_b_6_28 */
    auto s_b_6_29 = emitter.truncate(s_b_6_28, emitter.context().types().u16());
    /* execute.simd:3613 [F] s_b_6_30 = constant s32 3 (const) */
    /* execute.simd:3613 [D] s_b_6_31 = s_b_6_24[s_b_6_30] <= s_b_6_29 */
    auto s_b_6_31 = emitter.vector_insert(s_b_6_24, emitter.const_s32((int32_t)3ULL), s_b_6_29);
    /* execute.simd:3616 [F] s_b_6_32=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3616 [D] s_b_6_33: WriteRegBank 18:s_b_6_32 = s_b_6_31 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_31,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_31);
    /* execute.simd:0 [F] s_b_6_34: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_7: 
  {
    /* execute.simd:3620 [F] s_b_7_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3620 [D] s_b_7_1 = ReadRegBank 18:s_b_7_0 (v8u16) */
    auto s_b_7_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_7_1,emitter.const_u8(16));
    }
    /* execute.simd:3620 [D] s_b_7_2 = (v8s16)s_b_7_1 */
    auto s_b_7_2 = emitter.reinterpret(s_b_7_1, emitter.context().types().v8s16());
    /* ???:4294967295 [F] s_b_7_3 = constant v8u16 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_7_4 = constant u8 0 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_4] */
    auto s_b_7_5 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3624 [D] s_b_7_6 = (s32)s_b_7_5 */
    auto s_b_7_6 = emitter.sx(s_b_7_5, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_7 = __builtin_abs32 */
    auto s_b_7_7 = emitter.call(__captive___builtin_abs32, s_b_7_6);
    /* execute.simd:3624 [D] s_b_7_8 = (u16)s_b_7_7 */
    auto s_b_7_8 = emitter.truncate(s_b_7_7, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_9 = constant s32 0 (const) */
    /* execute.simd:3624 [D] s_b_7_10 = s_b_7_3[s_b_7_9] <= s_b_7_8 */
    auto s_b_7_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_7_8);
    /* ???:4294967295 [F] s_b_7_11 = constant u8 1 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_11] */
    auto s_b_7_12 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3624 [D] s_b_7_13 = (s32)s_b_7_12 */
    auto s_b_7_13 = emitter.sx(s_b_7_12, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_14 = __builtin_abs32 */
    auto s_b_7_14 = emitter.call(__captive___builtin_abs32, s_b_7_13);
    /* execute.simd:3624 [D] s_b_7_15 = (u16)s_b_7_14 */
    auto s_b_7_15 = emitter.truncate(s_b_7_14, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_16 = constant s32 1 (const) */
    /* execute.simd:3624 [D] s_b_7_17 = s_b_7_10[s_b_7_16] <= s_b_7_15 */
    auto s_b_7_17 = emitter.vector_insert(s_b_7_10, emitter.const_s32((int32_t)1ULL), s_b_7_15);
    /* ???:4294967295 [F] s_b_7_18 = constant u8 2 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_18] */
    auto s_b_7_19 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3624 [D] s_b_7_20 = (s32)s_b_7_19 */
    auto s_b_7_20 = emitter.sx(s_b_7_19, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_21 = __builtin_abs32 */
    auto s_b_7_21 = emitter.call(__captive___builtin_abs32, s_b_7_20);
    /* execute.simd:3624 [D] s_b_7_22 = (u16)s_b_7_21 */
    auto s_b_7_22 = emitter.truncate(s_b_7_21, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_23 = constant s32 2 (const) */
    /* execute.simd:3624 [D] s_b_7_24 = s_b_7_17[s_b_7_23] <= s_b_7_22 */
    auto s_b_7_24 = emitter.vector_insert(s_b_7_17, emitter.const_s32((int32_t)2ULL), s_b_7_22);
    /* ???:4294967295 [F] s_b_7_25 = constant u8 3 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_25] */
    auto s_b_7_26 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3624 [D] s_b_7_27 = (s32)s_b_7_26 */
    auto s_b_7_27 = emitter.sx(s_b_7_26, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_28 = __builtin_abs32 */
    auto s_b_7_28 = emitter.call(__captive___builtin_abs32, s_b_7_27);
    /* execute.simd:3624 [D] s_b_7_29 = (u16)s_b_7_28 */
    auto s_b_7_29 = emitter.truncate(s_b_7_28, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_30 = constant s32 3 (const) */
    /* execute.simd:3624 [D] s_b_7_31 = s_b_7_24[s_b_7_30] <= s_b_7_29 */
    auto s_b_7_31 = emitter.vector_insert(s_b_7_24, emitter.const_s32((int32_t)3ULL), s_b_7_29);
    /* ???:4294967295 [F] s_b_7_32 = constant u8 4 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_32] */
    auto s_b_7_33 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:3624 [D] s_b_7_34 = (s32)s_b_7_33 */
    auto s_b_7_34 = emitter.sx(s_b_7_33, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_35 = __builtin_abs32 */
    auto s_b_7_35 = emitter.call(__captive___builtin_abs32, s_b_7_34);
    /* execute.simd:3624 [D] s_b_7_36 = (u16)s_b_7_35 */
    auto s_b_7_36 = emitter.truncate(s_b_7_35, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_37 = constant s32 4 (const) */
    /* execute.simd:3624 [D] s_b_7_38 = s_b_7_31[s_b_7_37] <= s_b_7_36 */
    auto s_b_7_38 = emitter.vector_insert(s_b_7_31, emitter.const_s32((int32_t)4ULL), s_b_7_36);
    /* ???:4294967295 [F] s_b_7_39 = constant u8 5 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_39] */
    auto s_b_7_40 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:3624 [D] s_b_7_41 = (s32)s_b_7_40 */
    auto s_b_7_41 = emitter.sx(s_b_7_40, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_42 = __builtin_abs32 */
    auto s_b_7_42 = emitter.call(__captive___builtin_abs32, s_b_7_41);
    /* execute.simd:3624 [D] s_b_7_43 = (u16)s_b_7_42 */
    auto s_b_7_43 = emitter.truncate(s_b_7_42, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_44 = constant s32 5 (const) */
    /* execute.simd:3624 [D] s_b_7_45 = s_b_7_38[s_b_7_44] <= s_b_7_43 */
    auto s_b_7_45 = emitter.vector_insert(s_b_7_38, emitter.const_s32((int32_t)5ULL), s_b_7_43);
    /* ???:4294967295 [F] s_b_7_46 = constant u8 6 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_46] */
    auto s_b_7_47 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:3624 [D] s_b_7_48 = (s32)s_b_7_47 */
    auto s_b_7_48 = emitter.sx(s_b_7_47, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_49 = __builtin_abs32 */
    auto s_b_7_49 = emitter.call(__captive___builtin_abs32, s_b_7_48);
    /* execute.simd:3624 [D] s_b_7_50 = (u16)s_b_7_49 */
    auto s_b_7_50 = emitter.truncate(s_b_7_49, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_51 = constant s32 6 (const) */
    /* execute.simd:3624 [D] s_b_7_52 = s_b_7_45[s_b_7_51] <= s_b_7_50 */
    auto s_b_7_52 = emitter.vector_insert(s_b_7_45, emitter.const_s32((int32_t)6ULL), s_b_7_50);
    /* ???:4294967295 [F] s_b_7_53 = constant u8 7 (const) */
    /* execute.simd:3624 [D] s_b_7_2[s_b_7_53] */
    auto s_b_7_54 = emitter.vector_extract(s_b_7_2, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:3624 [D] s_b_7_55 = (s32)s_b_7_54 */
    auto s_b_7_55 = emitter.sx(s_b_7_54, emitter.context().types().s32());
    /* execute.simd:3624 [D] s_b_7_56 = __builtin_abs32 */
    auto s_b_7_56 = emitter.call(__captive___builtin_abs32, s_b_7_55);
    /* execute.simd:3624 [D] s_b_7_57 = (u16)s_b_7_56 */
    auto s_b_7_57 = emitter.truncate(s_b_7_56, emitter.context().types().u16());
    /* execute.simd:3624 [F] s_b_7_58 = constant s32 7 (const) */
    /* execute.simd:3624 [D] s_b_7_59 = s_b_7_52[s_b_7_58] <= s_b_7_57 */
    auto s_b_7_59 = emitter.vector_insert(s_b_7_52, emitter.const_s32((int32_t)7ULL), s_b_7_57);
    /* execute.simd:3627 [F] s_b_7_60=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3627 [D] s_b_7_61: WriteRegBank 18:s_b_7_60 = s_b_7_59 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_59,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_59);
    /* execute.simd:0 [F] s_b_7_62: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_8: 
  {
    /* execute.simd:3631 [F] s_b_8_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3631 [D] s_b_8_1 = ReadRegBank 19:s_b_8_0 (v2u32) */
    auto s_b_8_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_8_1,emitter.const_u8(8));
    }
    /* execute.simd:3631 [D] s_b_8_2 = (v2s32)s_b_8_1 */
    auto s_b_8_2 = emitter.reinterpret(s_b_8_1, emitter.context().types().v2s32());
    /* ???:4294967295 [F] s_b_8_3 = constant v4u32 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_8_4 = constant u8 0 (const) */
    /* execute.simd:3635 [D] s_b_8_2[s_b_8_4] */
    auto s_b_8_5 = emitter.vector_extract(s_b_8_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3635 [D] s_b_8_6 = __builtin_abs32 */
    auto s_b_8_6 = emitter.call(__captive___builtin_abs32, s_b_8_5);
    /* execute.simd:3635 [F] s_b_8_7 = constant s32 0 (const) */
    /* execute.simd:3635 [D] s_b_8_8 = s_b_8_3[s_b_8_7] <= s_b_8_6 */
    auto s_b_8_8 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_8_6);
    /* ???:4294967295 [F] s_b_8_9 = constant u8 1 (const) */
    /* execute.simd:3635 [D] s_b_8_2[s_b_8_9] */
    auto s_b_8_10 = emitter.vector_extract(s_b_8_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3635 [D] s_b_8_11 = __builtin_abs32 */
    auto s_b_8_11 = emitter.call(__captive___builtin_abs32, s_b_8_10);
    /* execute.simd:3635 [F] s_b_8_12 = constant s32 1 (const) */
    /* execute.simd:3635 [D] s_b_8_13 = s_b_8_8[s_b_8_12] <= s_b_8_11 */
    auto s_b_8_13 = emitter.vector_insert(s_b_8_8, emitter.const_s32((int32_t)1ULL), s_b_8_11);
    /* execute.simd:3638 [F] s_b_8_14=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3638 [D] s_b_8_15: WriteRegBank 20:s_b_8_14 = s_b_8_13 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_8_13,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_8_13);
    /* execute.simd:0 [F] s_b_8_16: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.simd:3642 [F] s_b_9_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3642 [D] s_b_9_1 = ReadRegBank 20:s_b_9_0 (v4u32) */
    auto s_b_9_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_9_1,emitter.const_u8(16));
    }
    /* execute.simd:3642 [D] s_b_9_2 = (v4s32)s_b_9_1 */
    auto s_b_9_2 = emitter.reinterpret(s_b_9_1, emitter.context().types().v4s32());
    /* ???:4294967295 [F] s_b_9_3 = constant v4u32 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_9_4 = constant u8 0 (const) */
    /* execute.simd:3646 [D] s_b_9_2[s_b_9_4] */
    auto s_b_9_5 = emitter.vector_extract(s_b_9_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3646 [D] s_b_9_6 = __builtin_abs32 */
    auto s_b_9_6 = emitter.call(__captive___builtin_abs32, s_b_9_5);
    /* execute.simd:3646 [F] s_b_9_7 = constant s32 0 (const) */
    /* execute.simd:3646 [D] s_b_9_8 = s_b_9_3[s_b_9_7] <= s_b_9_6 */
    auto s_b_9_8 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_9_6);
    /* ???:4294967295 [F] s_b_9_9 = constant u8 1 (const) */
    /* execute.simd:3646 [D] s_b_9_2[s_b_9_9] */
    auto s_b_9_10 = emitter.vector_extract(s_b_9_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3646 [D] s_b_9_11 = __builtin_abs32 */
    auto s_b_9_11 = emitter.call(__captive___builtin_abs32, s_b_9_10);
    /* execute.simd:3646 [F] s_b_9_12 = constant s32 1 (const) */
    /* execute.simd:3646 [D] s_b_9_13 = s_b_9_8[s_b_9_12] <= s_b_9_11 */
    auto s_b_9_13 = emitter.vector_insert(s_b_9_8, emitter.const_s32((int32_t)1ULL), s_b_9_11);
    /* ???:4294967295 [F] s_b_9_14 = constant u8 2 (const) */
    /* execute.simd:3646 [D] s_b_9_2[s_b_9_14] */
    auto s_b_9_15 = emitter.vector_extract(s_b_9_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3646 [D] s_b_9_16 = __builtin_abs32 */
    auto s_b_9_16 = emitter.call(__captive___builtin_abs32, s_b_9_15);
    /* execute.simd:3646 [F] s_b_9_17 = constant s32 2 (const) */
    /* execute.simd:3646 [D] s_b_9_18 = s_b_9_13[s_b_9_17] <= s_b_9_16 */
    auto s_b_9_18 = emitter.vector_insert(s_b_9_13, emitter.const_s32((int32_t)2ULL), s_b_9_16);
    /* ???:4294967295 [F] s_b_9_19 = constant u8 3 (const) */
    /* execute.simd:3646 [D] s_b_9_2[s_b_9_19] */
    auto s_b_9_20 = emitter.vector_extract(s_b_9_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3646 [D] s_b_9_21 = __builtin_abs32 */
    auto s_b_9_21 = emitter.call(__captive___builtin_abs32, s_b_9_20);
    /* execute.simd:3646 [F] s_b_9_22 = constant s32 3 (const) */
    /* execute.simd:3646 [D] s_b_9_23 = s_b_9_18[s_b_9_22] <= s_b_9_21 */
    auto s_b_9_23 = emitter.vector_insert(s_b_9_18, emitter.const_s32((int32_t)3ULL), s_b_9_21);
    /* execute.simd:3649 [F] s_b_9_24=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3649 [D] s_b_9_25: WriteRegBank 20:s_b_9_24 = s_b_9_23 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_9_23,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_9_23);
    /* execute.simd:0 [F] s_b_9_26: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_10: 
  {
    /* execute.simd:3653 [F] s_b_10_0=sym_2511_3_parameter_inst.rn (const) */
    /* execute.simd:3653 [D] s_b_10_1 = ReadRegBank 21:s_b_10_0 (v2u64) */
    auto s_b_10_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_10_1,emitter.const_u8(16));
    }
    /* execute.simd:3653 [D] s_b_10_2 = (v2s64)s_b_10_1 */
    auto s_b_10_2 = emitter.reinterpret(s_b_10_1, emitter.context().types().v2s64());
    /* ???:4294967295 [F] s_b_10_3 = constant v2u64 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_10_4 = constant u8 0 (const) */
    /* execute.simd:3657 [D] s_b_10_2[s_b_10_4] */
    auto s_b_10_5 = emitter.vector_extract(s_b_10_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3657 [D] s_b_10_6 = __builtin_abs64 */
    auto s_b_10_6 = emitter.call(__captive___builtin_abs64, s_b_10_5);
    /* execute.simd:3657 [F] s_b_10_7 = constant s32 0 (const) */
    /* execute.simd:3657 [D] s_b_10_8 = s_b_10_3[s_b_10_7] <= s_b_10_6 */
    auto s_b_10_8 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint64_t, 2>(0)[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_10_6);
    /* ???:4294967295 [F] s_b_10_9 = constant u8 1 (const) */
    /* execute.simd:3657 [D] s_b_10_2[s_b_10_9] */
    auto s_b_10_10 = emitter.vector_extract(s_b_10_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3657 [D] s_b_10_11 = __builtin_abs64 */
    auto s_b_10_11 = emitter.call(__captive___builtin_abs64, s_b_10_10);
    /* execute.simd:3657 [F] s_b_10_12 = constant s32 1 (const) */
    /* execute.simd:3657 [D] s_b_10_13 = s_b_10_8[s_b_10_12] <= s_b_10_11 */
    auto s_b_10_13 = emitter.vector_insert(s_b_10_8, emitter.const_s32((int32_t)1ULL), s_b_10_11);
    /* execute.simd:3660 [F] s_b_10_14=sym_2511_3_parameter_inst.rd (const) */
    /* execute.simd:3660 [D] s_b_10_15: WriteRegBank 21:s_b_10_14 = s_b_10_13 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_10_13,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_10_13);
    /* execute.simd:0 [F] s_b_10_16: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_11: 
  {
    /* execute.simd:3664 [D] s_b_11_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_11_1: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_addv(const aarch64_decode_a64_SIMD_ACROSS_LANES&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  uint64_t CV_sym_5274_0_total;
  auto DV_sym_5274_0_total = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:162 [F] s_b_0_0 = constant u64 0 (const) */
    /* execute.simd:162 [F] s_b_0_1: sym_5274_0_total = s_b_0_0 (const), dominates: s_b_13_1 s_b_12_1 s_b_11_1 s_b_7_2 s_b_5_2 s_b_4_2 s_b_3_2 s_b_2_2  */
    CV_sym_5274_0_total = (uint64_t)0ULL;
    emitter.store_local(DV_sym_5274_0_total, emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:164 [F] s_b_0_2=sym_5271_3_parameter_inst.arrangement (const) */
    /* execute.simd:165 [F] s_b_0_3 = constant s32 0 (const) */
    /* execute.simd:173 [F] s_b_0_4 = constant s32 1 (const) */
    /* execute.simd:181 [F] s_b_0_5 = constant s32 2 (const) */
    /* execute.simd:189 [F] s_b_0_6 = constant s32 3 (const) */
    /* execute.simd:197 [F] s_b_0_7 = constant s32 4 (const) */
    /* execute.simd:201 [F] s_b_0_8 = constant s32 5 (const) */
    /* execute.simd:209 [F] s_b_0_9 = constant s32 6 (const) */
    /* execute.simd:164 [F] s_b_0_10: Switch s_b_0_2: < <todo> > def b_9 (const) -> b_9, b_8, b_7, b_6, b_5, b_4, b_3, b_2,  */
    switch (insn.arrangement) 
    {
    case (int32_t)6ULL:
      goto fixed_block_b_8;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_7;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_5;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    default:
      goto fixed_block_b_9;
    }
  }
  /* b_2, b_3, b_4, b_5, b_6, b_7, b_8, b_9,  */
  fixed_block_b_1: 
  {
    /* execute.simd:219 [F] s_b_1_0=sym_5271_3_parameter_inst.size (const) */
    /* execute.simd:220 [F] s_b_1_1 = constant s32 0 (const) */
    /* execute.simd:224 [F] s_b_1_2 = constant s32 1 (const) */
    /* execute.simd:228 [F] s_b_1_3 = constant s32 2 (const) */
    /* execute.simd:219 [F] s_b_1_4: Switch s_b_1_0: < <todo> > def b_14 (const) -> b_14, b_13, b_12, b_11,  */
    switch (insn.size) 
    {
    case (int32_t)2ULL:
      goto fixed_block_b_13;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_12;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_11;
      break;
    default:
      goto fixed_block_b_14;
    }
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.simd:166 [F] s_b_2_0=sym_5271_3_parameter_inst.rn (const) */
    /* execute.simd:166 [D] s_b_2_1 = ReadRegBank 15:s_b_2_0 (v8u8) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* execute.simd:169 [F] s_b_2_2 = sym_5274_0_total (const) uint64_t */
    uint64_t s_b_2_2 = CV_sym_5274_0_total;
    /* ???:4294967295 [F] s_b_2_3 = constant u8 0 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_3] */
    auto s_b_2_4 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)0ULL));
    /* ???:4294967295 [D] s_b_2_5 = (u64)s_b_2_4 */
    auto s_b_2_5 = emitter.zx(s_b_2_4, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_6 = s_b_2_2+s_b_2_5 */
    auto s_b_2_6 = emitter.add(emitter.const_u64(s_b_2_2), s_b_2_5);
    /* execute.simd:169 [D] s_b_2_7: sym_5274_0_total = s_b_2_6, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_6);
    /* ???:4294967295 [F] s_b_2_8 = constant u8 1 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_8] */
    auto s_b_2_9 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)1ULL));
    /* ???:4294967295 [D] s_b_2_10 = (u64)s_b_2_9 */
    auto s_b_2_10 = emitter.zx(s_b_2_9, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_11 = s_b_2_6+s_b_2_10 */
    auto s_b_2_11 = emitter.add(s_b_2_6, s_b_2_10);
    /* execute.simd:169 [D] s_b_2_12: sym_5274_0_total = s_b_2_11, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_11);
    /* ???:4294967295 [F] s_b_2_13 = constant u8 2 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_13] */
    auto s_b_2_14 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)2ULL));
    /* ???:4294967295 [D] s_b_2_15 = (u64)s_b_2_14 */
    auto s_b_2_15 = emitter.zx(s_b_2_14, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_16 = s_b_2_11+s_b_2_15 */
    auto s_b_2_16 = emitter.add(s_b_2_11, s_b_2_15);
    /* execute.simd:169 [D] s_b_2_17: sym_5274_0_total = s_b_2_16, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_16);
    /* ???:4294967295 [F] s_b_2_18 = constant u8 3 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_18] */
    auto s_b_2_19 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)3ULL));
    /* ???:4294967295 [D] s_b_2_20 = (u64)s_b_2_19 */
    auto s_b_2_20 = emitter.zx(s_b_2_19, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_21 = s_b_2_16+s_b_2_20 */
    auto s_b_2_21 = emitter.add(s_b_2_16, s_b_2_20);
    /* execute.simd:169 [D] s_b_2_22: sym_5274_0_total = s_b_2_21, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_21);
    /* ???:4294967295 [F] s_b_2_23 = constant u8 4 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_23] */
    auto s_b_2_24 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)4ULL));
    /* ???:4294967295 [D] s_b_2_25 = (u64)s_b_2_24 */
    auto s_b_2_25 = emitter.zx(s_b_2_24, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_26 = s_b_2_21+s_b_2_25 */
    auto s_b_2_26 = emitter.add(s_b_2_21, s_b_2_25);
    /* execute.simd:169 [D] s_b_2_27: sym_5274_0_total = s_b_2_26, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_26);
    /* ???:4294967295 [F] s_b_2_28 = constant u8 5 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_28] */
    auto s_b_2_29 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)5ULL));
    /* ???:4294967295 [D] s_b_2_30 = (u64)s_b_2_29 */
    auto s_b_2_30 = emitter.zx(s_b_2_29, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_31 = s_b_2_26+s_b_2_30 */
    auto s_b_2_31 = emitter.add(s_b_2_26, s_b_2_30);
    /* execute.simd:169 [D] s_b_2_32: sym_5274_0_total = s_b_2_31, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_31);
    /* ???:4294967295 [F] s_b_2_33 = constant u8 6 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_33] */
    auto s_b_2_34 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)6ULL));
    /* ???:4294967295 [D] s_b_2_35 = (u64)s_b_2_34 */
    auto s_b_2_35 = emitter.zx(s_b_2_34, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_36 = s_b_2_31+s_b_2_35 */
    auto s_b_2_36 = emitter.add(s_b_2_31, s_b_2_35);
    /* execute.simd:169 [D] s_b_2_37: sym_5274_0_total = s_b_2_36, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_36);
    /* ???:4294967295 [F] s_b_2_38 = constant u8 7 (const) */
    /* execute.simd:169 [D] s_b_2_1[s_b_2_38] */
    auto s_b_2_39 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)7ULL));
    /* ???:4294967295 [D] s_b_2_40 = (u64)s_b_2_39 */
    auto s_b_2_40 = emitter.zx(s_b_2_39, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_41 = s_b_2_36+s_b_2_40 */
    auto s_b_2_41 = emitter.add(s_b_2_36, s_b_2_40);
    /* execute.simd:169 [D] s_b_2_42: sym_5274_0_total = s_b_2_41, dominates: s_b_13_1 s_b_12_1 s_b_11_1  */
    emitter.store_local(DV_sym_5274_0_total, s_b_2_41);
    /* execute.simd:0 [F] s_b_2_43: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:174 [F] s_b_3_0=sym_5271_3_parameter_inst.rn (const) */
    /* execute.simd:174 [D] s_b_3_1 = ReadRegBank 16:s_b_3_0 (v16u8) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_3_1,emitter.const_u8(16));
    }
    /* execute.simd:177 [F] s_b_3_2 = sym_5274_0_total (const) uint64_t */
    uint64_t s_b_3_2 = CV_sym_5274_0_total;
    /* ???:4294967295 [F] s_b_3_3 = constant u8 0 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_3] */
    auto s_b_3_4 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)0ULL));
    /* ???:4294967295 [D] s_b_3_5 = (u64)s_b_3_4 */
    auto s_b_3_5 = emitter.zx(s_b_3_4, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_6 = s_b_3_2+s_b_3_5 */
    auto s_b_3_6 = emitter.add(emitter.const_u64(s_b_3_2), s_b_3_5);
    /* execute.simd:177 [D] s_b_3_7: sym_5274_0_total = s_b_3_6, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_6);
    /* ???:4294967295 [F] s_b_3_8 = constant u8 1 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_8] */
    auto s_b_3_9 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)1ULL));
    /* ???:4294967295 [D] s_b_3_10 = (u64)s_b_3_9 */
    auto s_b_3_10 = emitter.zx(s_b_3_9, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_11 = s_b_3_6+s_b_3_10 */
    auto s_b_3_11 = emitter.add(s_b_3_6, s_b_3_10);
    /* execute.simd:177 [D] s_b_3_12: sym_5274_0_total = s_b_3_11, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_11);
    /* ???:4294967295 [F] s_b_3_13 = constant u8 2 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_13] */
    auto s_b_3_14 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)2ULL));
    /* ???:4294967295 [D] s_b_3_15 = (u64)s_b_3_14 */
    auto s_b_3_15 = emitter.zx(s_b_3_14, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_16 = s_b_3_11+s_b_3_15 */
    auto s_b_3_16 = emitter.add(s_b_3_11, s_b_3_15);
    /* execute.simd:177 [D] s_b_3_17: sym_5274_0_total = s_b_3_16, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_16);
    /* ???:4294967295 [F] s_b_3_18 = constant u8 3 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_18] */
    auto s_b_3_19 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)3ULL));
    /* ???:4294967295 [D] s_b_3_20 = (u64)s_b_3_19 */
    auto s_b_3_20 = emitter.zx(s_b_3_19, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_21 = s_b_3_16+s_b_3_20 */
    auto s_b_3_21 = emitter.add(s_b_3_16, s_b_3_20);
    /* execute.simd:177 [D] s_b_3_22: sym_5274_0_total = s_b_3_21, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_21);
    /* ???:4294967295 [F] s_b_3_23 = constant u8 4 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_23] */
    auto s_b_3_24 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)4ULL));
    /* ???:4294967295 [D] s_b_3_25 = (u64)s_b_3_24 */
    auto s_b_3_25 = emitter.zx(s_b_3_24, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_26 = s_b_3_21+s_b_3_25 */
    auto s_b_3_26 = emitter.add(s_b_3_21, s_b_3_25);
    /* execute.simd:177 [D] s_b_3_27: sym_5274_0_total = s_b_3_26, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_26);
    /* ???:4294967295 [F] s_b_3_28 = constant u8 5 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_28] */
    auto s_b_3_29 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)5ULL));
    /* ???:4294967295 [D] s_b_3_30 = (u64)s_b_3_29 */
    auto s_b_3_30 = emitter.zx(s_b_3_29, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_31 = s_b_3_26+s_b_3_30 */
    auto s_b_3_31 = emitter.add(s_b_3_26, s_b_3_30);
    /* execute.simd:177 [D] s_b_3_32: sym_5274_0_total = s_b_3_31, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_31);
    /* ???:4294967295 [F] s_b_3_33 = constant u8 6 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_33] */
    auto s_b_3_34 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)6ULL));
    /* ???:4294967295 [D] s_b_3_35 = (u64)s_b_3_34 */
    auto s_b_3_35 = emitter.zx(s_b_3_34, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_36 = s_b_3_31+s_b_3_35 */
    auto s_b_3_36 = emitter.add(s_b_3_31, s_b_3_35);
    /* execute.simd:177 [D] s_b_3_37: sym_5274_0_total = s_b_3_36, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_36);
    /* ???:4294967295 [F] s_b_3_38 = constant u8 7 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_38] */
    auto s_b_3_39 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)7ULL));
    /* ???:4294967295 [D] s_b_3_40 = (u64)s_b_3_39 */
    auto s_b_3_40 = emitter.zx(s_b_3_39, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_41 = s_b_3_36+s_b_3_40 */
    auto s_b_3_41 = emitter.add(s_b_3_36, s_b_3_40);
    /* execute.simd:177 [D] s_b_3_42: sym_5274_0_total = s_b_3_41, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_41);
    /* ???:4294967295 [F] s_b_3_43 = constant u8 8 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_43] */
    auto s_b_3_44 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)8ULL));
    /* ???:4294967295 [D] s_b_3_45 = (u64)s_b_3_44 */
    auto s_b_3_45 = emitter.zx(s_b_3_44, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_46 = s_b_3_41+s_b_3_45 */
    auto s_b_3_46 = emitter.add(s_b_3_41, s_b_3_45);
    /* execute.simd:177 [D] s_b_3_47: sym_5274_0_total = s_b_3_46, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_46);
    /* ???:4294967295 [F] s_b_3_48 = constant u8 9 (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_48] */
    auto s_b_3_49 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)9ULL));
    /* ???:4294967295 [D] s_b_3_50 = (u64)s_b_3_49 */
    auto s_b_3_50 = emitter.zx(s_b_3_49, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_51 = s_b_3_46+s_b_3_50 */
    auto s_b_3_51 = emitter.add(s_b_3_46, s_b_3_50);
    /* execute.simd:177 [D] s_b_3_52: sym_5274_0_total = s_b_3_51, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_51);
    /* ???:4294967295 [F] s_b_3_53 = constant u8 a (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_53] */
    auto s_b_3_54 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)10ULL));
    /* ???:4294967295 [D] s_b_3_55 = (u64)s_b_3_54 */
    auto s_b_3_55 = emitter.zx(s_b_3_54, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_56 = s_b_3_51+s_b_3_55 */
    auto s_b_3_56 = emitter.add(s_b_3_51, s_b_3_55);
    /* execute.simd:177 [D] s_b_3_57: sym_5274_0_total = s_b_3_56, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_56);
    /* ???:4294967295 [F] s_b_3_58 = constant u8 b (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_58] */
    auto s_b_3_59 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)11ULL));
    /* ???:4294967295 [D] s_b_3_60 = (u64)s_b_3_59 */
    auto s_b_3_60 = emitter.zx(s_b_3_59, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_61 = s_b_3_56+s_b_3_60 */
    auto s_b_3_61 = emitter.add(s_b_3_56, s_b_3_60);
    /* execute.simd:177 [D] s_b_3_62: sym_5274_0_total = s_b_3_61, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_61);
    /* ???:4294967295 [F] s_b_3_63 = constant u8 c (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_63] */
    auto s_b_3_64 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)12ULL));
    /* ???:4294967295 [D] s_b_3_65 = (u64)s_b_3_64 */
    auto s_b_3_65 = emitter.zx(s_b_3_64, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_66 = s_b_3_61+s_b_3_65 */
    auto s_b_3_66 = emitter.add(s_b_3_61, s_b_3_65);
    /* execute.simd:177 [D] s_b_3_67: sym_5274_0_total = s_b_3_66, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_66);
    /* ???:4294967295 [F] s_b_3_68 = constant u8 d (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_68] */
    auto s_b_3_69 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)13ULL));
    /* ???:4294967295 [D] s_b_3_70 = (u64)s_b_3_69 */
    auto s_b_3_70 = emitter.zx(s_b_3_69, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_71 = s_b_3_66+s_b_3_70 */
    auto s_b_3_71 = emitter.add(s_b_3_66, s_b_3_70);
    /* execute.simd:177 [D] s_b_3_72: sym_5274_0_total = s_b_3_71, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_71);
    /* ???:4294967295 [F] s_b_3_73 = constant u8 e (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_73] */
    auto s_b_3_74 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)14ULL));
    /* ???:4294967295 [D] s_b_3_75 = (u64)s_b_3_74 */
    auto s_b_3_75 = emitter.zx(s_b_3_74, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_76 = s_b_3_71+s_b_3_75 */
    auto s_b_3_76 = emitter.add(s_b_3_71, s_b_3_75);
    /* execute.simd:177 [D] s_b_3_77: sym_5274_0_total = s_b_3_76, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_76);
    /* ???:4294967295 [F] s_b_3_78 = constant u8 f (const) */
    /* execute.simd:177 [D] s_b_3_1[s_b_3_78] */
    auto s_b_3_79 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)15ULL));
    /* ???:4294967295 [D] s_b_3_80 = (u64)s_b_3_79 */
    auto s_b_3_80 = emitter.zx(s_b_3_79, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_81 = s_b_3_76+s_b_3_80 */
    auto s_b_3_81 = emitter.add(s_b_3_76, s_b_3_80);
    /* execute.simd:177 [D] s_b_3_82: sym_5274_0_total = s_b_3_81, dominates: s_b_13_1 s_b_12_1 s_b_11_1  */
    emitter.store_local(DV_sym_5274_0_total, s_b_3_81);
    /* execute.simd:0 [F] s_b_3_83: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.simd:182 [F] s_b_4_0=sym_5271_3_parameter_inst.rn (const) */
    /* execute.simd:182 [D] s_b_4_1 = ReadRegBank 17:s_b_4_0 (v4u16) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_1,emitter.const_u8(8));
    }
    /* execute.simd:185 [F] s_b_4_2 = sym_5274_0_total (const) uint64_t */
    uint64_t s_b_4_2 = CV_sym_5274_0_total;
    /* ???:4294967295 [F] s_b_4_3 = constant u8 0 (const) */
    /* execute.simd:185 [D] s_b_4_1[s_b_4_3] */
    auto s_b_4_4 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)0ULL));
    /* ???:4294967295 [D] s_b_4_5 = (u64)s_b_4_4 */
    auto s_b_4_5 = emitter.zx(s_b_4_4, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_4_6 = s_b_4_2+s_b_4_5 */
    auto s_b_4_6 = emitter.add(emitter.const_u64(s_b_4_2), s_b_4_5);
    /* execute.simd:185 [D] s_b_4_7: sym_5274_0_total = s_b_4_6, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_4_6);
    /* ???:4294967295 [F] s_b_4_8 = constant u8 1 (const) */
    /* execute.simd:185 [D] s_b_4_1[s_b_4_8] */
    auto s_b_4_9 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)1ULL));
    /* ???:4294967295 [D] s_b_4_10 = (u64)s_b_4_9 */
    auto s_b_4_10 = emitter.zx(s_b_4_9, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_4_11 = s_b_4_6+s_b_4_10 */
    auto s_b_4_11 = emitter.add(s_b_4_6, s_b_4_10);
    /* execute.simd:185 [D] s_b_4_12: sym_5274_0_total = s_b_4_11, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_4_11);
    /* ???:4294967295 [F] s_b_4_13 = constant u8 2 (const) */
    /* execute.simd:185 [D] s_b_4_1[s_b_4_13] */
    auto s_b_4_14 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)2ULL));
    /* ???:4294967295 [D] s_b_4_15 = (u64)s_b_4_14 */
    auto s_b_4_15 = emitter.zx(s_b_4_14, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_4_16 = s_b_4_11+s_b_4_15 */
    auto s_b_4_16 = emitter.add(s_b_4_11, s_b_4_15);
    /* execute.simd:185 [D] s_b_4_17: sym_5274_0_total = s_b_4_16, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_4_16);
    /* ???:4294967295 [F] s_b_4_18 = constant u8 3 (const) */
    /* execute.simd:185 [D] s_b_4_1[s_b_4_18] */
    auto s_b_4_19 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)3ULL));
    /* ???:4294967295 [D] s_b_4_20 = (u64)s_b_4_19 */
    auto s_b_4_20 = emitter.zx(s_b_4_19, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_4_21 = s_b_4_16+s_b_4_20 */
    auto s_b_4_21 = emitter.add(s_b_4_16, s_b_4_20);
    /* execute.simd:185 [D] s_b_4_22: sym_5274_0_total = s_b_4_21, dominates: s_b_13_1 s_b_12_1 s_b_11_1  */
    emitter.store_local(DV_sym_5274_0_total, s_b_4_21);
    /* execute.simd:0 [F] s_b_4_23: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_5: 
  {
    /* execute.simd:190 [F] s_b_5_0=sym_5271_3_parameter_inst.rn (const) */
    /* execute.simd:190 [D] s_b_5_1 = ReadRegBank 18:s_b_5_0 (v8u16) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_5_1,emitter.const_u8(16));
    }
    /* execute.simd:193 [F] s_b_5_2 = sym_5274_0_total (const) uint64_t */
    uint64_t s_b_5_2 = CV_sym_5274_0_total;
    /* ???:4294967295 [F] s_b_5_3 = constant u8 0 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_3] */
    auto s_b_5_4 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)0ULL));
    /* ???:4294967295 [D] s_b_5_5 = (u64)s_b_5_4 */
    auto s_b_5_5 = emitter.zx(s_b_5_4, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_6 = s_b_5_2+s_b_5_5 */
    auto s_b_5_6 = emitter.add(emitter.const_u64(s_b_5_2), s_b_5_5);
    /* execute.simd:193 [D] s_b_5_7: sym_5274_0_total = s_b_5_6, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_6);
    /* ???:4294967295 [F] s_b_5_8 = constant u8 1 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_8] */
    auto s_b_5_9 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)1ULL));
    /* ???:4294967295 [D] s_b_5_10 = (u64)s_b_5_9 */
    auto s_b_5_10 = emitter.zx(s_b_5_9, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_11 = s_b_5_6+s_b_5_10 */
    auto s_b_5_11 = emitter.add(s_b_5_6, s_b_5_10);
    /* execute.simd:193 [D] s_b_5_12: sym_5274_0_total = s_b_5_11, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_11);
    /* ???:4294967295 [F] s_b_5_13 = constant u8 2 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_13] */
    auto s_b_5_14 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)2ULL));
    /* ???:4294967295 [D] s_b_5_15 = (u64)s_b_5_14 */
    auto s_b_5_15 = emitter.zx(s_b_5_14, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_16 = s_b_5_11+s_b_5_15 */
    auto s_b_5_16 = emitter.add(s_b_5_11, s_b_5_15);
    /* execute.simd:193 [D] s_b_5_17: sym_5274_0_total = s_b_5_16, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_16);
    /* ???:4294967295 [F] s_b_5_18 = constant u8 3 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_18] */
    auto s_b_5_19 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)3ULL));
    /* ???:4294967295 [D] s_b_5_20 = (u64)s_b_5_19 */
    auto s_b_5_20 = emitter.zx(s_b_5_19, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_21 = s_b_5_16+s_b_5_20 */
    auto s_b_5_21 = emitter.add(s_b_5_16, s_b_5_20);
    /* execute.simd:193 [D] s_b_5_22: sym_5274_0_total = s_b_5_21, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_21);
    /* ???:4294967295 [F] s_b_5_23 = constant u8 4 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_23] */
    auto s_b_5_24 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)4ULL));
    /* ???:4294967295 [D] s_b_5_25 = (u64)s_b_5_24 */
    auto s_b_5_25 = emitter.zx(s_b_5_24, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_26 = s_b_5_21+s_b_5_25 */
    auto s_b_5_26 = emitter.add(s_b_5_21, s_b_5_25);
    /* execute.simd:193 [D] s_b_5_27: sym_5274_0_total = s_b_5_26, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_26);
    /* ???:4294967295 [F] s_b_5_28 = constant u8 5 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_28] */
    auto s_b_5_29 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)5ULL));
    /* ???:4294967295 [D] s_b_5_30 = (u64)s_b_5_29 */
    auto s_b_5_30 = emitter.zx(s_b_5_29, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_31 = s_b_5_26+s_b_5_30 */
    auto s_b_5_31 = emitter.add(s_b_5_26, s_b_5_30);
    /* execute.simd:193 [D] s_b_5_32: sym_5274_0_total = s_b_5_31, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_31);
    /* ???:4294967295 [F] s_b_5_33 = constant u8 6 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_33] */
    auto s_b_5_34 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)6ULL));
    /* ???:4294967295 [D] s_b_5_35 = (u64)s_b_5_34 */
    auto s_b_5_35 = emitter.zx(s_b_5_34, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_36 = s_b_5_31+s_b_5_35 */
    auto s_b_5_36 = emitter.add(s_b_5_31, s_b_5_35);
    /* execute.simd:193 [D] s_b_5_37: sym_5274_0_total = s_b_5_36, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_36);
    /* ???:4294967295 [F] s_b_5_38 = constant u8 7 (const) */
    /* execute.simd:193 [D] s_b_5_1[s_b_5_38] */
    auto s_b_5_39 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)7ULL));
    /* ???:4294967295 [D] s_b_5_40 = (u64)s_b_5_39 */
    auto s_b_5_40 = emitter.zx(s_b_5_39, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_41 = s_b_5_36+s_b_5_40 */
    auto s_b_5_41 = emitter.add(s_b_5_36, s_b_5_40);
    /* execute.simd:193 [D] s_b_5_42: sym_5274_0_total = s_b_5_41, dominates: s_b_13_1 s_b_12_1 s_b_11_1  */
    emitter.store_local(DV_sym_5274_0_total, s_b_5_41);
    /* execute.simd:0 [F] s_b_5_43: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_6: 
  {
    /* execute.simd:198 [D] s_b_6_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_6_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_7: 
  {
    /* execute.simd:202 [F] s_b_7_0=sym_5271_3_parameter_inst.rn (const) */
    /* execute.simd:202 [D] s_b_7_1 = ReadRegBank 20:s_b_7_0 (v4u32) */
    auto s_b_7_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_7_1,emitter.const_u8(16));
    }
    /* execute.simd:205 [F] s_b_7_2 = sym_5274_0_total (const) uint64_t */
    uint64_t s_b_7_2 = CV_sym_5274_0_total;
    /* ???:4294967295 [F] s_b_7_3 = constant u8 0 (const) */
    /* execute.simd:205 [D] s_b_7_1[s_b_7_3] */
    auto s_b_7_4 = emitter.vector_extract(s_b_7_1, emitter.const_u8((uint8_t)0ULL));
    /* ???:4294967295 [D] s_b_7_5 = (u64)s_b_7_4 */
    auto s_b_7_5 = emitter.zx(s_b_7_4, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_7_6 = s_b_7_2+s_b_7_5 */
    auto s_b_7_6 = emitter.add(emitter.const_u64(s_b_7_2), s_b_7_5);
    /* execute.simd:205 [D] s_b_7_7: sym_5274_0_total = s_b_7_6, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_7_6);
    /* ???:4294967295 [F] s_b_7_8 = constant u8 1 (const) */
    /* execute.simd:205 [D] s_b_7_1[s_b_7_8] */
    auto s_b_7_9 = emitter.vector_extract(s_b_7_1, emitter.const_u8((uint8_t)1ULL));
    /* ???:4294967295 [D] s_b_7_10 = (u64)s_b_7_9 */
    auto s_b_7_10 = emitter.zx(s_b_7_9, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_7_11 = s_b_7_6+s_b_7_10 */
    auto s_b_7_11 = emitter.add(s_b_7_6, s_b_7_10);
    /* execute.simd:205 [D] s_b_7_12: sym_5274_0_total = s_b_7_11, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_7_11);
    /* ???:4294967295 [F] s_b_7_13 = constant u8 2 (const) */
    /* execute.simd:205 [D] s_b_7_1[s_b_7_13] */
    auto s_b_7_14 = emitter.vector_extract(s_b_7_1, emitter.const_u8((uint8_t)2ULL));
    /* ???:4294967295 [D] s_b_7_15 = (u64)s_b_7_14 */
    auto s_b_7_15 = emitter.zx(s_b_7_14, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_7_16 = s_b_7_11+s_b_7_15 */
    auto s_b_7_16 = emitter.add(s_b_7_11, s_b_7_15);
    /* execute.simd:205 [D] s_b_7_17: sym_5274_0_total = s_b_7_16, dominates:  */
    emitter.store_local(DV_sym_5274_0_total, s_b_7_16);
    /* ???:4294967295 [F] s_b_7_18 = constant u8 3 (const) */
    /* execute.simd:205 [D] s_b_7_1[s_b_7_18] */
    auto s_b_7_19 = emitter.vector_extract(s_b_7_1, emitter.const_u8((uint8_t)3ULL));
    /* ???:4294967295 [D] s_b_7_20 = (u64)s_b_7_19 */
    auto s_b_7_20 = emitter.zx(s_b_7_19, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_7_21 = s_b_7_16+s_b_7_20 */
    auto s_b_7_21 = emitter.add(s_b_7_16, s_b_7_20);
    /* execute.simd:205 [D] s_b_7_22: sym_5274_0_total = s_b_7_21, dominates: s_b_13_1 s_b_12_1 s_b_11_1  */
    emitter.store_local(DV_sym_5274_0_total, s_b_7_21);
    /* execute.simd:0 [F] s_b_7_23: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_8: 
  {
    /* execute.simd:210 [D] s_b_8_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_8_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_9: 
  {
    /* execute.simd:214 [D] s_b_9_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_9_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_11, b_12, b_13, b_14,  */
  fixed_block_b_10: 
  {
    /* ???:4294967295 [F] s_b_10_0: Return */
    goto fixed_done;
  }
  /* b_1,  */
  fixed_block_b_11: 
  {
    /* execute.simd:221 [F] s_b_11_0=sym_5271_3_parameter_inst.rd (const) */
    /* execute.simd:221 [D] s_b_11_1 = sym_5274_0_total uint64_t */
    auto s_b_11_1 = emitter.load_local(DV_sym_5274_0_total, emitter.context().types().u64());
    /* execute.simd:221 [D] s_b_11_2 = (u8)s_b_11_1 */
    auto s_b_11_2 = emitter.truncate(s_b_11_1, emitter.context().types().u8());
    /* execute.simd:6225 [D] s_b_11_3 = (u64)s_b_11_2 */
    auto s_b_11_3 = emitter.zx(s_b_11_2, emitter.context().types().u64());
    /* execute.simd:6225 [D] s_b_11_4: WriteRegBank 2:s_b_11_0 = s_b_11_3 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_11_3,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_11_3);
    /* execute.simd:6226 [F] s_b_11_5 = constant u64 0 (const) */
    /* execute.simd:6226 [F] s_b_11_6: WriteRegBank 3:s_b_11_0 = s_b_11_5 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_11_7: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_1,  */
  fixed_block_b_12: 
  {
    /* execute.simd:225 [F] s_b_12_0=sym_5271_3_parameter_inst.rd (const) */
    /* execute.simd:225 [D] s_b_12_1 = sym_5274_0_total uint64_t */
    auto s_b_12_1 = emitter.load_local(DV_sym_5274_0_total, emitter.context().types().u64());
    /* execute.simd:225 [D] s_b_12_2 = (u16)s_b_12_1 */
    auto s_b_12_2 = emitter.truncate(s_b_12_1, emitter.context().types().u16());
    /* execute.simd:6232 [D] s_b_12_3 = (u64)s_b_12_2 */
    auto s_b_12_3 = emitter.zx(s_b_12_2, emitter.context().types().u64());
    /* execute.simd:6232 [D] s_b_12_4: WriteRegBank 2:s_b_12_0 = s_b_12_3 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_12_3,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_12_3);
    /* execute.simd:6233 [F] s_b_12_5 = constant u64 0 (const) */
    /* execute.simd:6233 [F] s_b_12_6: WriteRegBank 3:s_b_12_0 = s_b_12_5 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_12_7: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_1,  */
  fixed_block_b_13: 
  {
    /* execute.simd:229 [F] s_b_13_0=sym_5271_3_parameter_inst.rd (const) */
    /* execute.simd:229 [D] s_b_13_1 = sym_5274_0_total uint64_t */
    auto s_b_13_1 = emitter.load_local(DV_sym_5274_0_total, emitter.context().types().u64());
    /* execute.simd:229 [D] s_b_13_2 = (u32)s_b_13_1 */
    auto s_b_13_2 = emitter.truncate(s_b_13_1, emitter.context().types().u32());
    /* execute.simd:6239 [D] s_b_13_3 = (u64)s_b_13_2 */
    auto s_b_13_3 = emitter.zx(s_b_13_2, emitter.context().types().u64());
    /* execute.simd:6239 [D] s_b_13_4: WriteRegBank 2:s_b_13_0 = s_b_13_3 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_13_3,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_13_3);
    /* execute.simd:6240 [F] s_b_13_5 = constant u64 0 (const) */
    /* execute.simd:6240 [F] s_b_13_6: WriteRegBank 3:s_b_13_0 = s_b_13_5 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_13_7: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_1,  */
  fixed_block_b_14: 
  {
    /* execute.simd:233 [D] s_b_14_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_14_1: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_bcond(const aarch64_decode_a64_COND_B_IMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  if (insn.is_predicated) 
  {
    auto __predicate_taken = emitter.context().create_block();
    auto predicate_result = generate_predicate_a64_COND_B_IMM(insn, emitter);
    if (TRACE) 
    {
      auto __predicate_not_taken = emitter.context().create_block();
      emitter.branch(predicate_result, __predicate_taken, __predicate_not_taken);
      emitter.set_current_block(__predicate_not_taken);
      emitter.trace(captive::arch::dbt::el::TraceEvent::NOT_TAKEN);
      if (insn.end_of_block) 
      {
        emitter.inc_pc(emitter.const_u8(4));
      }
      emitter.jump(__exit_block);
    }
    else if (insn.end_of_block) 
    {
      auto __predicate_not_taken = emitter.context().create_block();
      emitter.branch(predicate_result, __predicate_taken, __predicate_not_taken);
      emitter.set_current_block(__predicate_not_taken);
      emitter.inc_pc(emitter.const_u8(4));
      emitter.jump(__exit_block);
    }
    else 
    {
      emitter.branch(predicate_result, __predicate_taken, __exit_block);
    }
    emitter.set_current_block(__predicate_taken);
  }
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:307 [D] s_b_0_0 = read_pc */
    auto s_b_0_0 = emitter.load_pc();
    /* execute.a64:307 [D] s_b_0_1 = (s64)s_b_0_0 */
    auto s_b_0_1 = emitter.reinterpret(s_b_0_0, emitter.context().types().s64());
    /* execute.a64:307 [F] s_b_0_2=sym_6053_3_parameter_inst.imms64 (const) */
    /* execute.a64:307 [D] s_b_0_3 = s_b_0_1+s_b_0_2 */
    auto s_b_0_3 = emitter.add(s_b_0_1, emitter.const_s64(insn.imms64));
    /* execute.a64:307 [D] s_b_0_4 = (u64)s_b_0_3 */
    auto s_b_0_4 = emitter.reinterpret(s_b_0_3, emitter.context().types().u64());
    /* execute.a64:307 [D] s_b_0_5 = write_pc */
    emitter.store_pc(s_b_0_4);
    /* ???:4294967295 [F] s_b_0_6: Return */
    goto fixed_done;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_bsl(const aarch64_decode_a64_SIMD_THREE_SAME&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:2332 [F] s_b_0_0=sym_6439_3_parameter_inst.Q (const) */
    /* execute.simd:2332 [F] s_b_0_1: If s_b_0_0: Jump b_1 else b_3 (const) */
    if (insn.Q) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:2340 [F] s_b_1_0=sym_6439_3_parameter_inst.rd (const) */
    /* execute.simd:6280 [D] s_b_1_1 = ReadRegBank 2:s_b_1_0 (u64) */
    auto s_b_1_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_1,emitter.const_u8(8));
    }
    /* execute.simd:6281 [D] s_b_1_2 = ReadRegBank 3:s_b_1_0 (u64) */
    auto s_b_1_2 = emitter.load_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),s_b_1_2,emitter.const_u8(8));
    }
    /* execute.simd:2341 [F] s_b_1_3=sym_6439_3_parameter_inst.rn (const) */
    /* execute.simd:6280 [D] s_b_1_4 = ReadRegBank 2:s_b_1_3 (u64) */
    auto s_b_1_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_1_4,emitter.const_u8(8));
    }
    /* execute.simd:6281 [D] s_b_1_5 = ReadRegBank 3:s_b_1_3 (u64) */
    auto s_b_1_5 = emitter.load_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(264 + (16 * insn.rn))),s_b_1_5,emitter.const_u8(8));
    }
    /* execute.simd:2342 [F] s_b_1_6=sym_6439_3_parameter_inst.rm (const) */
    /* execute.simd:6280 [D] s_b_1_7 = ReadRegBank 2:s_b_1_6 (u64) */
    auto s_b_1_7 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_1_7,emitter.const_u8(8));
    }
    /* execute.simd:6281 [D] s_b_1_8 = ReadRegBank 3:s_b_1_6 (u64) */
    auto s_b_1_8 = emitter.load_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(264 + (16 * insn.rm))),s_b_1_8,emitter.const_u8(8));
    }
    /* execute.simd:2344 [F] s_b_1_9=sym_6439_3_parameter_inst.rd (const) */
    /* execute.simd:2344 [D] s_b_1_10 = s_b_1_7^s_b_1_4 */
    auto s_b_1_10 = emitter.bitwise_xor(s_b_1_7, s_b_1_4);
    /* execute.simd:2344 [D] s_b_1_11 = s_b_1_10&s_b_1_1 */
    auto s_b_1_11 = emitter.bitwise_and(s_b_1_10, s_b_1_1);
    /* execute.simd:2344 [D] s_b_1_12 = s_b_1_7^s_b_1_11 */
    auto s_b_1_12 = emitter.bitwise_xor(s_b_1_7, s_b_1_11);
    /* execute.simd:2344 [D] s_b_1_13 = s_b_1_8^s_b_1_5 */
    auto s_b_1_13 = emitter.bitwise_xor(s_b_1_8, s_b_1_5);
    /* execute.simd:2344 [D] s_b_1_14 = s_b_1_13&s_b_1_2 */
    auto s_b_1_14 = emitter.bitwise_and(s_b_1_13, s_b_1_2);
    /* execute.simd:2344 [D] s_b_1_15 = s_b_1_8^s_b_1_14 */
    auto s_b_1_15 = emitter.bitwise_xor(s_b_1_8, s_b_1_14);
    /* execute.simd:6253 [D] s_b_1_16: WriteRegBank 2:s_b_1_9 = s_b_1_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_12,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_12);
    /* execute.simd:6254 [D] s_b_1_17: WriteRegBank 3:s_b_1_9 = s_b_1_15 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),s_b_1_15,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),s_b_1_15);
    /* execute.simd:0 [F] s_b_1_18: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:2350 [F] s_b_3_0=sym_6439_3_parameter_inst.rd (const) */
    /* execute.simd:6275 [D] s_b_3_1 = ReadRegBank 7:s_b_3_0 (u64) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_1,emitter.const_u8(8));
    }
    /* execute.simd:2351 [F] s_b_3_2=sym_6439_3_parameter_inst.rn (const) */
    /* execute.simd:6275 [D] s_b_3_3 = ReadRegBank 7:s_b_3_2 (u64) */
    auto s_b_3_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_3_3,emitter.const_u8(8));
    }
    /* execute.simd:2352 [F] s_b_3_4=sym_6439_3_parameter_inst.rm (const) */
    /* execute.simd:6275 [D] s_b_3_5 = ReadRegBank 7:s_b_3_4 (u64) */
    auto s_b_3_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_3_5,emitter.const_u8(8));
    }
    /* execute.simd:2354 [F] s_b_3_6=sym_6439_3_parameter_inst.rd (const) */
    /* execute.simd:2354 [D] s_b_3_7 = s_b_3_5^s_b_3_3 */
    auto s_b_3_7 = emitter.bitwise_xor(s_b_3_5, s_b_3_3);
    /* execute.simd:2354 [D] s_b_3_8 = s_b_3_7&s_b_3_1 */
    auto s_b_3_8 = emitter.bitwise_and(s_b_3_7, s_b_3_1);
    /* execute.simd:2354 [D] s_b_3_9 = s_b_3_5^s_b_3_8 */
    auto s_b_3_9 = emitter.bitwise_xor(s_b_3_5, s_b_3_8);
    /* execute.simd:6246 [D] s_b_3_10: WriteRegBank 2:s_b_3_6 = s_b_3_9 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_9,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_9);
    /* execute.simd:6247 [F] s_b_3_11 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_3_12: WriteRegBank 3:s_b_3_6 = s_b_3_11 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_3_13: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_clz(const aarch64_decode_a64_DP_1S&insn, captive::arch::dbt::el::Emitter& emitter)
{
  std::queue<captive::arch::dbt::el::Block *> dynamic_block_queue;
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto block_b_2 = emitter.context().create_block();
  auto block_b_4 = emitter.context().create_block();
  auto block_b_5 = emitter.context().create_block();
  auto block_b_6 = emitter.context().create_block();
  auto block_b_7 = emitter.context().create_block();
  auto block_b_8 = emitter.context().create_block();
  auto block_b_9 = emitter.context().create_block();
  auto block_b_10 = emitter.context().create_block();
  auto block_b_11 = emitter.context().create_block();
  auto DV_sym_54893_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), true);
  auto DV_sym_54783_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), true);
  auto DV_sym_7040_0_rn = emitter.alloc_local(emitter.context().types().u32(), true);
  auto DV_sym_7009_0_rn = emitter.alloc_local(emitter.context().types().u64(), true);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2202 [F] s_b_0_0=sym_6998_3_parameter_inst.sf (const) */
    /* execute.a64:2202 [F] s_b_0_1: If s_b_0_0: Jump b_1 else b_3 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2657 [F] s_b_1_0=sym_6998_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_1_1 = (u32)s_b_1_0 (const) */
    /* execute.a64:2651 [F] s_b_1_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_1_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_1_5 = ReadRegBank 0:s_b_1_0 (u64) */
    auto s_b_1_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_1_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_1_6: Select s_b_1_3 ? s_b_1_4 : s_b_1_5 */
    dbt::el::Value *s_b_1_6;
    s_b_1_6 = (s_b_1_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_1_5);
    /* execute.a64:2203 [D] s_b_1_7: sym_7009_0_rn = s_b_1_6, dominates: s_b_5_0  */
    emitter.store_local(DV_sym_7009_0_rn, s_b_1_6);
    /* execute.a64:2204 [F] s_b_1_8 = constant u64 0 (const) */
    /* execute.a64:2204 [D] s_b_1_9 = s_b_1_6==s_b_1_8 */
    auto s_b_1_9 = emitter.cmp_eq(s_b_1_6, emitter.const_u64((uint64_t)0ULL));
    /* execute.a64:2204 [D] s_b_1_10: If s_b_1_9: Jump b_4 else b_5 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_4;
        dynamic_block_queue.push(block_b_4);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_5;
        dynamic_block_queue.push(block_b_5);
        false_target = block;
      }
      emitter.branch(s_b_1_9, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_2 not fully fixed
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.a64:2659 [F] s_b_3_0=sym_6998_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_3_1 = (u32)s_b_3_0 (const) */
    /* execute.a64:2646 [F] s_b_3_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_3_3 = s_b_3_1==s_b_3_2 (const) */
    uint8_t s_b_3_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_3_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_3_5 = ReadRegBank 1:s_b_3_0 (u32) */
    auto s_b_3_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_3_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_3_6: Select s_b_3_3 ? s_b_3_4 : s_b_3_5 */
    dbt::el::Value *s_b_3_6;
    s_b_3_6 = (s_b_3_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_3_5);
    /* execute.a64:2659 [D] s_b_3_7 = (u64)s_b_3_6 */
    auto s_b_3_7 = emitter.zx(s_b_3_6, emitter.context().types().u64());
    /* execute.a64:2210 [D] s_b_3_8 = (u32)s_b_3_7 */
    auto s_b_3_8 = emitter.truncate(s_b_3_7, emitter.context().types().u32());
    /* execute.a64:2210 [D] s_b_3_9: sym_7040_0_rn = s_b_3_8, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_7040_0_rn, s_b_3_8);
    /* execute.a64:2211 [F] s_b_3_10 = constant u32 0 (const) */
    /* execute.a64:2211 [D] s_b_3_11 = s_b_3_8==s_b_3_10 */
    auto s_b_3_11 = emitter.cmp_eq(s_b_3_8, emitter.const_u32((uint32_t)0ULL));
    /* execute.a64:2211 [D] s_b_3_12: If s_b_3_11: Jump b_6 else b_7 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_6;
        dynamic_block_queue.push(block_b_6);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_7;
        dynamic_block_queue.push(block_b_7);
        false_target = block;
      }
      emitter.branch(s_b_3_11, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_4 not fully fixed
  // BLOCK b_5 not fully fixed
  // BLOCK b_6 not fully fixed
  // BLOCK b_7 not fully fixed
  // BLOCK b_8 not fully fixed
  // BLOCK b_9 not fully fixed
  // BLOCK b_10 not fully fixed
  // BLOCK b_11 not fully fixed
  fixed_done:
  if (dynamic_block_queue.size() > 0) 
  {
    std::set<captive::arch::dbt::el::Block *> emitted_blocks;
    while (dynamic_block_queue.size() > 0) 
    {
      captive::arch::dbt::el::Block *block_index = dynamic_block_queue.front();
      dynamic_block_queue.pop();
      if (emitted_blocks.count(block_index)) continue;
      emitted_blocks.insert(block_index);
      if (block_index == block_b_2) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_2);
        /* ???:4294967295 [F] s_b_2_0: Return */
        emitter.jump(__exit_block);
      }
      else if (block_index == block_b_4) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_4);
        /* execute.a64:2691 [F] s_b_4_0=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2682 [F] s_b_4_1 = (u32)s_b_4_0 (const) */
        /* execute.a64:2682 [F] s_b_4_2 = constant u32 1f (const) */
        /* execute.a64:2682 [F] s_b_4_3 = s_b_4_1==s_b_4_2 (const) */
        uint8_t s_b_4_3 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
        /* execute.a64:2682 [F] s_b_4_4: If s_b_4_3: Jump b_2 else b_8 (const) */
        if (s_b_4_3) 
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
        else 
        {
          auto block = block_b_8;
          dynamic_block_queue.push(block_b_8);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_5) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_5);
        /* execute.a64:2207 [D] s_b_5_0 = sym_7009_0_rn uint64_t */
        auto s_b_5_0 = emitter.load_local(DV_sym_7009_0_rn, emitter.context().types().u64());
        /* execute.a64:2207 [D] s_b_5_1 = __builtin_clz64 */
        auto s_b_5_1 = emitter.clz(s_b_5_0);
        /* execute.a64:2207 [D] s_b_5_2 = (u64)s_b_5_1 */
        auto s_b_5_2 = (dbt::el::Value *)s_b_5_1;
        /* execute.a64:2691 [F] s_b_5_3=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2691 [D] s_b_5_4: sym_54783_3_parameter_value = s_b_5_2, dominates: s_b_9_1  */
        emitter.store_local(DV_sym_54783_3_parameter_value, s_b_5_2);
        /* execute.a64:2682 [F] s_b_5_5 = (u32)s_b_5_3 (const) */
        /* execute.a64:2682 [F] s_b_5_6 = constant u32 1f (const) */
        /* execute.a64:2682 [F] s_b_5_7 = s_b_5_5==s_b_5_6 (const) */
        uint8_t s_b_5_7 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
        /* execute.a64:2682 [F] s_b_5_8: If s_b_5_7: Jump b_2 else b_9 (const) */
        if (s_b_5_7) 
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
        else 
        {
          auto block = block_b_9;
          dynamic_block_queue.push(block_b_9);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_6) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_6);
        /* execute.a64:2693 [F] s_b_6_0=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2682 [F] s_b_6_1 = (u32)s_b_6_0 (const) */
        /* execute.a64:2682 [F] s_b_6_2 = constant u32 1f (const) */
        /* execute.a64:2682 [F] s_b_6_3 = s_b_6_1==s_b_6_2 (const) */
        uint8_t s_b_6_3 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
        /* execute.a64:2682 [F] s_b_6_4: If s_b_6_3: Jump b_2 else b_10 (const) */
        if (s_b_6_3) 
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
        else 
        {
          auto block = block_b_10;
          dynamic_block_queue.push(block_b_10);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_7) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_7);
        /* execute.a64:2214 [D] s_b_7_0 = sym_7040_0_rn uint32_t */
        auto s_b_7_0 = emitter.load_local(DV_sym_7040_0_rn, emitter.context().types().u32());
        /* execute.a64:2214 [D] s_b_7_1 = __builtin_clz32 */
        auto s_b_7_1 = emitter.clz(s_b_7_0);
        /* execute.a64:2214 [D] s_b_7_2 = (u64)s_b_7_1 */
        auto s_b_7_2 = emitter.zx(s_b_7_1, emitter.context().types().u64());
        /* execute.a64:2693 [F] s_b_7_3=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2693 [D] s_b_7_4 = (u32)s_b_7_2 */
        auto s_b_7_4 = emitter.truncate(s_b_7_2, emitter.context().types().u32());
        /* execute.a64:2693 [D] s_b_7_5 = (u64)s_b_7_4 */
        auto s_b_7_5 = emitter.zx(s_b_7_4, emitter.context().types().u64());
        /* execute.a64:2693 [D] s_b_7_6: sym_54893_3_parameter_value = s_b_7_5, dominates: s_b_11_1  */
        emitter.store_local(DV_sym_54893_3_parameter_value, s_b_7_5);
        /* execute.a64:2682 [F] s_b_7_7 = (u32)s_b_7_3 (const) */
        /* execute.a64:2682 [F] s_b_7_8 = constant u32 1f (const) */
        /* execute.a64:2682 [F] s_b_7_9 = s_b_7_7==s_b_7_8 (const) */
        uint8_t s_b_7_9 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
        /* execute.a64:2682 [F] s_b_7_10: If s_b_7_9: Jump b_2 else b_11 (const) */
        if (s_b_7_9) 
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
        else 
        {
          auto block = block_b_11;
          dynamic_block_queue.push(block_b_11);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_8) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_8);
        /* execute.a64:2684 [F] s_b_8_0=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2684 [F] s_b_8_1 = constant u64 40 (const) */
        /* execute.a64:2684 [F] s_b_8_2: WriteRegBank 0:s_b_8_0 = s_b_8_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64((uint64_t)64ULL),emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64((uint64_t)64ULL));
        /* execute.a64:0 [F] s_b_8_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_9) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_9);
        /* execute.a64:2684 [F] s_b_9_0=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2684 [D] s_b_9_1 = sym_54783_3_parameter_value uint64_t */
        auto s_b_9_1 = emitter.load_local(DV_sym_54783_3_parameter_value, emitter.context().types().u64());
        /* execute.a64:2684 [D] s_b_9_2: WriteRegBank 0:s_b_9_0 = s_b_9_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_9_1,emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_9_1);
        /* execute.a64:0 [F] s_b_9_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_10) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_10);
        /* execute.a64:2684 [F] s_b_10_0=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2684 [F] s_b_10_1 = constant u64 20 (const) */
        /* execute.a64:2684 [F] s_b_10_2: WriteRegBank 0:s_b_10_0 = s_b_10_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64((uint64_t)32ULL),emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64((uint64_t)32ULL));
        /* execute.a64:0 [F] s_b_10_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_11) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_11);
        /* execute.a64:2684 [F] s_b_11_0=sym_6998_3_parameter_inst.rd (const) */
        /* execute.a64:2684 [D] s_b_11_1 = sym_54893_3_parameter_value uint64_t */
        auto s_b_11_1 = emitter.load_local(DV_sym_54893_3_parameter_value, emitter.context().types().u64());
        /* execute.a64:2684 [D] s_b_11_2: WriteRegBank 0:s_b_11_0 = s_b_11_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_11_1,emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_11_1);
        /* execute.a64:0 [F] s_b_11_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
    }
  }
  else 
  {
    emitter.jump(__exit_block);
  }
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_crc32(const aarch64_decode_a64_DP_2S&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:3075 [D] s_b_0_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* ???:4294967295 [F] s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_dup_gen(const aarch64_decode_a64_SIMD_COPY&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_9793_0_rlo = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_9746_0_element = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_57259_1__R_s_b_0_8 = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:406 [F] s_b_0_0=sym_9737_3_parameter_inst.width (const) */
    /* execute.simd:406 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.simd:406 [F] s_b_0_2 = constant u32 40 (const) */
    /* execute.simd:406 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.width) == (uint32_t)64ULL));
    /* execute.a64:2656 [F] s_b_0_4: If s_b_0_3: Jump b_13 else b_14 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_13;
    }
    else 
    {
      goto fixed_block_b_14;
    }
  }
  /* b_2, b_3, b_4, b_5, b_6, b_7, b_8, b_9,  */
  fixed_block_b_1: 
  {
    /* execute.simd:450 [F] s_b_1_0=sym_9737_3_parameter_inst.Q (const) */
    /* execute.simd:450 [F] s_b_1_1 = (u32)s_b_1_0 (const) */
    /* execute.simd:450 [F] s_b_1_2 = constant u32 1 (const) */
    /* execute.simd:450 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(((uint32_t)insn.Q) == (uint32_t)1ULL));
    /* execute.simd:450 [F] s_b_1_4: If s_b_1_3: Jump b_10 else b_12 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_12;
    }
  }
  /* b_15,  */
  fixed_block_b_2: 
  {
    /* execute.simd:411 [D] s_b_2_0 = sym_9746_0_element uint64_t */
    auto s_b_2_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_2_1 = constant u64 ff (const) */
    /* ???:4294967295 [D] s_b_2_2 = s_b_2_0&s_b_2_1 */
    auto s_b_2_2 = emitter.bitwise_and(s_b_2_0, emitter.const_u64((uint64_t)255ULL));
    /* execute.simd:411 [D] s_b_2_3: sym_9746_0_element = s_b_2_2, dominates:  */
    emitter.store_local(DV_sym_9746_0_element, s_b_2_2);
    /* execute.simd:412 [F] s_b_2_4 = constant u64 8 (const) */
    /* execute.simd:412 [D] s_b_2_5 = s_b_2_2<<s_b_2_4 */
    auto s_b_2_5 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)8ULL));
    /* execute.simd:412 [D] s_b_2_6 = s_b_2_2|s_b_2_5 */
    auto s_b_2_6 = emitter.bitwise_or(s_b_2_2, s_b_2_5);
    /* execute.simd:412 [F] s_b_2_7 = constant u64 10 (const) */
    /* execute.simd:412 [D] s_b_2_8 = s_b_2_2<<s_b_2_7 */
    auto s_b_2_8 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)16ULL));
    /* execute.simd:412 [D] s_b_2_9 = s_b_2_6|s_b_2_8 */
    auto s_b_2_9 = emitter.bitwise_or(s_b_2_6, s_b_2_8);
    /* execute.simd:412 [F] s_b_2_10 = constant u64 18 (const) */
    /* execute.simd:412 [D] s_b_2_11 = s_b_2_2<<s_b_2_10 */
    auto s_b_2_11 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)24ULL));
    /* execute.simd:412 [D] s_b_2_12 = s_b_2_9|s_b_2_11 */
    auto s_b_2_12 = emitter.bitwise_or(s_b_2_9, s_b_2_11);
    /* execute.simd:412 [F] s_b_2_13 = constant u64 20 (const) */
    /* execute.simd:412 [D] s_b_2_14 = s_b_2_2<<s_b_2_13 */
    auto s_b_2_14 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)32ULL));
    /* execute.simd:412 [D] s_b_2_15 = s_b_2_12|s_b_2_14 */
    auto s_b_2_15 = emitter.bitwise_or(s_b_2_12, s_b_2_14);
    /* execute.simd:412 [F] s_b_2_16 = constant u64 28 (const) */
    /* execute.simd:412 [D] s_b_2_17 = s_b_2_2<<s_b_2_16 */
    auto s_b_2_17 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)40ULL));
    /* execute.simd:412 [D] s_b_2_18 = s_b_2_15|s_b_2_17 */
    auto s_b_2_18 = emitter.bitwise_or(s_b_2_15, s_b_2_17);
    /* execute.simd:412 [F] s_b_2_19 = constant u64 30 (const) */
    /* execute.simd:412 [D] s_b_2_20 = s_b_2_2<<s_b_2_19 */
    auto s_b_2_20 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)48ULL));
    /* execute.simd:412 [D] s_b_2_21 = s_b_2_18|s_b_2_20 */
    auto s_b_2_21 = emitter.bitwise_or(s_b_2_18, s_b_2_20);
    /* execute.simd:412 [F] s_b_2_22 = constant u64 38 (const) */
    /* execute.simd:412 [D] s_b_2_23 = s_b_2_2<<s_b_2_22 */
    auto s_b_2_23 = emitter.shl(s_b_2_2, emitter.const_u64((uint64_t)56ULL));
    /* execute.simd:412 [D] s_b_2_24 = s_b_2_21|s_b_2_23 */
    auto s_b_2_24 = emitter.bitwise_or(s_b_2_21, s_b_2_23);
    /* execute.simd:412 [D] s_b_2_25: sym_9793_0_rlo = s_b_2_24, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_2_24);
    /* execute.simd:0 [F] s_b_2_26: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_3: 
  {
    /* execute.simd:416 [D] s_b_3_0 = sym_9746_0_element uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_3_1 = constant u64 ff (const) */
    /* ???:4294967295 [D] s_b_3_2 = s_b_3_0&s_b_3_1 */
    auto s_b_3_2 = emitter.bitwise_and(s_b_3_0, emitter.const_u64((uint64_t)255ULL));
    /* execute.simd:416 [D] s_b_3_3: sym_9746_0_element = s_b_3_2, dominates:  */
    emitter.store_local(DV_sym_9746_0_element, s_b_3_2);
    /* execute.simd:417 [F] s_b_3_4 = constant u64 8 (const) */
    /* execute.simd:417 [D] s_b_3_5 = s_b_3_2<<s_b_3_4 */
    auto s_b_3_5 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)8ULL));
    /* execute.simd:417 [D] s_b_3_6 = s_b_3_2|s_b_3_5 */
    auto s_b_3_6 = emitter.bitwise_or(s_b_3_2, s_b_3_5);
    /* execute.simd:417 [F] s_b_3_7 = constant u64 10 (const) */
    /* execute.simd:417 [D] s_b_3_8 = s_b_3_2<<s_b_3_7 */
    auto s_b_3_8 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)16ULL));
    /* execute.simd:417 [D] s_b_3_9 = s_b_3_6|s_b_3_8 */
    auto s_b_3_9 = emitter.bitwise_or(s_b_3_6, s_b_3_8);
    /* execute.simd:417 [F] s_b_3_10 = constant u64 18 (const) */
    /* execute.simd:417 [D] s_b_3_11 = s_b_3_2<<s_b_3_10 */
    auto s_b_3_11 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)24ULL));
    /* execute.simd:417 [D] s_b_3_12 = s_b_3_9|s_b_3_11 */
    auto s_b_3_12 = emitter.bitwise_or(s_b_3_9, s_b_3_11);
    /* execute.simd:417 [F] s_b_3_13 = constant u64 20 (const) */
    /* execute.simd:417 [D] s_b_3_14 = s_b_3_2<<s_b_3_13 */
    auto s_b_3_14 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)32ULL));
    /* execute.simd:417 [D] s_b_3_15 = s_b_3_12|s_b_3_14 */
    auto s_b_3_15 = emitter.bitwise_or(s_b_3_12, s_b_3_14);
    /* execute.simd:417 [F] s_b_3_16 = constant u64 28 (const) */
    /* execute.simd:417 [D] s_b_3_17 = s_b_3_2<<s_b_3_16 */
    auto s_b_3_17 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)40ULL));
    /* execute.simd:417 [D] s_b_3_18 = s_b_3_15|s_b_3_17 */
    auto s_b_3_18 = emitter.bitwise_or(s_b_3_15, s_b_3_17);
    /* execute.simd:417 [F] s_b_3_19 = constant u64 30 (const) */
    /* execute.simd:417 [D] s_b_3_20 = s_b_3_2<<s_b_3_19 */
    auto s_b_3_20 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)48ULL));
    /* execute.simd:417 [D] s_b_3_21 = s_b_3_18|s_b_3_20 */
    auto s_b_3_21 = emitter.bitwise_or(s_b_3_18, s_b_3_20);
    /* execute.simd:417 [F] s_b_3_22 = constant u64 38 (const) */
    /* execute.simd:417 [D] s_b_3_23 = s_b_3_2<<s_b_3_22 */
    auto s_b_3_23 = emitter.shl(s_b_3_2, emitter.const_u64((uint64_t)56ULL));
    /* execute.simd:417 [D] s_b_3_24 = s_b_3_21|s_b_3_23 */
    auto s_b_3_24 = emitter.bitwise_or(s_b_3_21, s_b_3_23);
    /* execute.simd:417 [D] s_b_3_25: sym_9793_0_rlo = s_b_3_24, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_3_24);
    /* execute.simd:0 [F] s_b_3_26: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_4: 
  {
    /* execute.simd:421 [D] s_b_4_0 = sym_9746_0_element uint64_t */
    auto s_b_4_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_4_1 = constant u64 ffff (const) */
    /* ???:4294967295 [D] s_b_4_2 = s_b_4_0&s_b_4_1 */
    auto s_b_4_2 = emitter.bitwise_and(s_b_4_0, emitter.const_u64((uint64_t)65535ULL));
    /* execute.simd:421 [D] s_b_4_3: sym_9746_0_element = s_b_4_2, dominates:  */
    emitter.store_local(DV_sym_9746_0_element, s_b_4_2);
    /* execute.simd:422 [F] s_b_4_4 = constant u64 10 (const) */
    /* execute.simd:422 [D] s_b_4_5 = s_b_4_2<<s_b_4_4 */
    auto s_b_4_5 = emitter.shl(s_b_4_2, emitter.const_u64((uint64_t)16ULL));
    /* execute.simd:422 [D] s_b_4_6 = s_b_4_2|s_b_4_5 */
    auto s_b_4_6 = emitter.bitwise_or(s_b_4_2, s_b_4_5);
    /* execute.simd:422 [F] s_b_4_7 = constant u64 20 (const) */
    /* execute.simd:422 [D] s_b_4_8 = s_b_4_2<<s_b_4_7 */
    auto s_b_4_8 = emitter.shl(s_b_4_2, emitter.const_u64((uint64_t)32ULL));
    /* execute.simd:422 [D] s_b_4_9 = s_b_4_6|s_b_4_8 */
    auto s_b_4_9 = emitter.bitwise_or(s_b_4_6, s_b_4_8);
    /* execute.simd:422 [F] s_b_4_10 = constant u64 30 (const) */
    /* execute.simd:422 [D] s_b_4_11 = s_b_4_2<<s_b_4_10 */
    auto s_b_4_11 = emitter.shl(s_b_4_2, emitter.const_u64((uint64_t)48ULL));
    /* execute.simd:422 [D] s_b_4_12 = s_b_4_9|s_b_4_11 */
    auto s_b_4_12 = emitter.bitwise_or(s_b_4_9, s_b_4_11);
    /* execute.simd:422 [D] s_b_4_13: sym_9793_0_rlo = s_b_4_12, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_4_12);
    /* execute.simd:0 [F] s_b_4_14: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_5: 
  {
    /* execute.simd:426 [D] s_b_5_0 = sym_9746_0_element uint64_t */
    auto s_b_5_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_5_1 = constant u64 ffff (const) */
    /* ???:4294967295 [D] s_b_5_2 = s_b_5_0&s_b_5_1 */
    auto s_b_5_2 = emitter.bitwise_and(s_b_5_0, emitter.const_u64((uint64_t)65535ULL));
    /* execute.simd:426 [D] s_b_5_3: sym_9746_0_element = s_b_5_2, dominates:  */
    emitter.store_local(DV_sym_9746_0_element, s_b_5_2);
    /* execute.simd:427 [F] s_b_5_4 = constant u64 10 (const) */
    /* execute.simd:427 [D] s_b_5_5 = s_b_5_2<<s_b_5_4 */
    auto s_b_5_5 = emitter.shl(s_b_5_2, emitter.const_u64((uint64_t)16ULL));
    /* execute.simd:427 [D] s_b_5_6 = s_b_5_2|s_b_5_5 */
    auto s_b_5_6 = emitter.bitwise_or(s_b_5_2, s_b_5_5);
    /* execute.simd:427 [F] s_b_5_7 = constant u64 20 (const) */
    /* execute.simd:427 [D] s_b_5_8 = s_b_5_2<<s_b_5_7 */
    auto s_b_5_8 = emitter.shl(s_b_5_2, emitter.const_u64((uint64_t)32ULL));
    /* execute.simd:427 [D] s_b_5_9 = s_b_5_6|s_b_5_8 */
    auto s_b_5_9 = emitter.bitwise_or(s_b_5_6, s_b_5_8);
    /* execute.simd:427 [F] s_b_5_10 = constant u64 30 (const) */
    /* execute.simd:427 [D] s_b_5_11 = s_b_5_2<<s_b_5_10 */
    auto s_b_5_11 = emitter.shl(s_b_5_2, emitter.const_u64((uint64_t)48ULL));
    /* execute.simd:427 [D] s_b_5_12 = s_b_5_9|s_b_5_11 */
    auto s_b_5_12 = emitter.bitwise_or(s_b_5_9, s_b_5_11);
    /* execute.simd:427 [D] s_b_5_13: sym_9793_0_rlo = s_b_5_12, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_5_12);
    /* execute.simd:0 [F] s_b_5_14: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_6: 
  {
    /* execute.simd:431 [D] s_b_6_0 = sym_9746_0_element uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_6_1 = constant u64 ffffffff (const) */
    /* ???:4294967295 [D] s_b_6_2 = s_b_6_0&s_b_6_1 */
    auto s_b_6_2 = emitter.bitwise_and(s_b_6_0, emitter.const_u64((uint64_t)4294967295ULL));
    /* execute.simd:431 [D] s_b_6_3: sym_9746_0_element = s_b_6_2, dominates:  */
    emitter.store_local(DV_sym_9746_0_element, s_b_6_2);
    /* execute.simd:432 [F] s_b_6_4 = constant u64 20 (const) */
    /* execute.simd:432 [D] s_b_6_5 = s_b_6_2<<s_b_6_4 */
    auto s_b_6_5 = emitter.shl(s_b_6_2, emitter.const_u64((uint64_t)32ULL));
    /* execute.simd:432 [D] s_b_6_6 = s_b_6_2|s_b_6_5 */
    auto s_b_6_6 = emitter.bitwise_or(s_b_6_2, s_b_6_5);
    /* execute.simd:432 [D] s_b_6_7: sym_9793_0_rlo = s_b_6_6, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_6_6);
    /* execute.simd:0 [F] s_b_6_8: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_7: 
  {
    /* execute.simd:436 [D] s_b_7_0 = sym_9746_0_element uint64_t */
    auto s_b_7_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_7_1 = constant u64 ffffffff (const) */
    /* ???:4294967295 [D] s_b_7_2 = s_b_7_0&s_b_7_1 */
    auto s_b_7_2 = emitter.bitwise_and(s_b_7_0, emitter.const_u64((uint64_t)4294967295ULL));
    /* execute.simd:436 [D] s_b_7_3: sym_9746_0_element = s_b_7_2, dominates:  */
    emitter.store_local(DV_sym_9746_0_element, s_b_7_2);
    /* execute.simd:437 [F] s_b_7_4 = constant u64 20 (const) */
    /* execute.simd:437 [D] s_b_7_5 = s_b_7_2<<s_b_7_4 */
    auto s_b_7_5 = emitter.shl(s_b_7_2, emitter.const_u64((uint64_t)32ULL));
    /* execute.simd:437 [D] s_b_7_6 = s_b_7_2|s_b_7_5 */
    auto s_b_7_6 = emitter.bitwise_or(s_b_7_2, s_b_7_5);
    /* execute.simd:437 [D] s_b_7_7: sym_9793_0_rlo = s_b_7_6, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_7_6);
    /* execute.simd:0 [F] s_b_7_8: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_8: 
  {
    /* execute.simd:441 [D] s_b_8_0 = sym_9746_0_element uint64_t */
    auto s_b_8_0 = emitter.load_local(DV_sym_9746_0_element, emitter.context().types().u64());
    /* execute.simd:441 [D] s_b_8_1: sym_9793_0_rlo = s_b_8_0, dominates: s_b_10_1 s_b_12_1  */
    emitter.store_local(DV_sym_9793_0_rlo, s_b_8_0);
    /* execute.simd:0 [F] s_b_8_2: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_15,  */
  fixed_block_b_9: 
  {
    /* execute.simd:445 [D] s_b_9_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_9_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_1,  */
  fixed_block_b_10: 
  {
    /* execute.simd:451 [F] s_b_10_0=sym_9737_3_parameter_inst.rd (const) */
    /* execute.simd:451 [D] s_b_10_1 = sym_9793_0_rlo uint64_t */
    auto s_b_10_1 = emitter.load_local(DV_sym_9793_0_rlo, emitter.context().types().u64());
    /* execute.simd:6253 [D] s_b_10_2: WriteRegBank 2:s_b_10_0 = s_b_10_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_10_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_10_1);
    /* execute.simd:6254 [D] s_b_10_3: WriteRegBank 3:s_b_10_0 = s_b_10_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),s_b_10_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),s_b_10_1);
    /* execute.simd:0 [F] s_b_10_4: Jump b_11 (const) */
    goto fixed_block_b_11;
  }
  /* b_10, b_12,  */
  fixed_block_b_11: 
  {
    /* ???:4294967295 [F] s_b_11_0: Return */
    goto fixed_done;
  }
  /* b_1,  */
  fixed_block_b_12: 
  {
    /* execute.simd:453 [F] s_b_12_0=sym_9737_3_parameter_inst.rd (const) */
    /* execute.simd:453 [D] s_b_12_1 = sym_9793_0_rlo uint64_t */
    auto s_b_12_1 = emitter.load_local(DV_sym_9793_0_rlo, emitter.context().types().u64());
    /* execute.simd:6246 [D] s_b_12_2: WriteRegBank 2:s_b_12_0 = s_b_12_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_12_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_12_1);
    /* execute.simd:6247 [F] s_b_12_3 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_12_4: WriteRegBank 3:s_b_12_0 = s_b_12_3 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_12_5: Jump b_11 (const) */
    goto fixed_block_b_11;
  }
  /* b_0,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2657 [F] s_b_13_0=sym_9737_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_13_1 = (u32)s_b_13_0 (const) */
    /* execute.a64:2651 [F] s_b_13_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_13_3 = s_b_13_1==s_b_13_2 (const) */
    uint8_t s_b_13_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_13_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_13_5 = ReadRegBank 0:s_b_13_0 (u64) */
    auto s_b_13_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_13_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_13_6: Select s_b_13_3 ? s_b_13_4 : s_b_13_5 */
    dbt::el::Value *s_b_13_6;
    s_b_13_6 = (s_b_13_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_13_5);
    /* execute.a64:2657 [D] s_b_13_7: sym_57259_1__R_s_b_0_8 = s_b_13_6, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_57259_1__R_s_b_0_8, s_b_13_6);
    /* execute.a64:2657 [F] s_b_13_8: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_0,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2659 [F] s_b_14_0=sym_9737_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_14_1 = (u32)s_b_14_0 (const) */
    /* execute.a64:2646 [F] s_b_14_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_14_3 = s_b_14_1==s_b_14_2 (const) */
    uint8_t s_b_14_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_14_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_14_5 = ReadRegBank 1:s_b_14_0 (u32) */
    auto s_b_14_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_14_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_14_6: Select s_b_14_3 ? s_b_14_4 : s_b_14_5 */
    dbt::el::Value *s_b_14_6;
    s_b_14_6 = (s_b_14_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_14_5);
    /* execute.a64:2659 [D] s_b_14_7 = (u64)s_b_14_6 */
    auto s_b_14_7 = emitter.zx(s_b_14_6, emitter.context().types().u64());
    /* execute.a64:2659 [D] s_b_14_8: sym_57259_1__R_s_b_0_8 = s_b_14_7, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_57259_1__R_s_b_0_8, s_b_14_7);
    /* execute.a64:2659 [F] s_b_14_9: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_13, b_14,  */
  fixed_block_b_15: 
  {
    /* execute.simd:406 [D] s_b_15_0 = sym_57259_1__R_s_b_0_8 uint64_t */
    auto s_b_15_0 = emitter.load_local(DV_sym_57259_1__R_s_b_0_8, emitter.context().types().u64());
    /* execute.simd:406 [D] s_b_15_1: sym_9746_0_element = s_b_15_0, dominates: s_b_8_0 s_b_7_0 s_b_6_0 s_b_5_0 s_b_4_0 s_b_3_0 s_b_2_0  */
    emitter.store_local(DV_sym_9746_0_element, s_b_15_0);
    /* execute.simd:409 [F] s_b_15_2=sym_9737_3_parameter_inst.arrangement (const) */
    /* execute.simd:410 [F] s_b_15_3 = constant s32 0 (const) */
    /* execute.simd:415 [F] s_b_15_4 = constant s32 1 (const) */
    /* execute.simd:420 [F] s_b_15_5 = constant s32 2 (const) */
    /* execute.simd:425 [F] s_b_15_6 = constant s32 3 (const) */
    /* execute.simd:430 [F] s_b_15_7 = constant s32 4 (const) */
    /* execute.simd:435 [F] s_b_15_8 = constant s32 5 (const) */
    /* execute.simd:440 [F] s_b_15_9 = constant s32 6 (const) */
    /* execute.simd:409 [F] s_b_15_10: Switch s_b_15_2: < <todo> > def b_9 (const) -> b_9, b_8, b_7, b_6, b_5, b_4, b_3, b_2,  */
    switch (insn.arrangement) 
    {
    case (int32_t)6ULL:
      goto fixed_block_b_8;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_7;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_5;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    default:
      goto fixed_block_b_9;
    }
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_fabd(const aarch64_decode_a64_SIMD_THREE_SAME&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:1755 [F] s_b_0_0=sym_10364_3_parameter_inst.SCALAR (const) */
    /* execute.simd:1755 [F] s_b_0_1: If s_b_0_0: Jump b_1 else b_3 (const) */
    if (insn.SCALAR) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:1756 [F] s_b_1_0=sym_10364_3_parameter_inst.size (const) */
    /* execute.simd:1756 [F] s_b_1_1 = (u32)s_b_1_0 (const) */
    /* execute.simd:1756 [F] s_b_1_2 = constant u32 2 (const) */
    /* execute.simd:1756 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)2ULL));
    /* execute.simd:1756 [F] s_b_1_4: If s_b_1_3: Jump b_4 else b_5 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_3, b_4, b_5, b_6,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:1768 [D] s_b_3_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:1768 [F] s_b_3_1: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.simd:1757 [F] s_b_4_0=sym_10364_3_parameter_inst.rn (const) */
    /* execute.simd:6200 [D] s_b_4_1 = ReadRegBank 9:s_b_4_0 (f32) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().f32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_1,emitter.const_u8(4));
    }
    /* execute.simd:1758 [F] s_b_4_2=sym_10364_3_parameter_inst.rm (const) */
    /* execute.simd:6200 [D] s_b_4_3 = ReadRegBank 9:s_b_4_2 (f32) */
    auto s_b_4_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().f32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_4_3,emitter.const_u8(4));
    }
    /* execute.simd:1760 [F] s_b_4_4=sym_10364_3_parameter_inst.rd (const) */
    /* execute.simd:1760 [D] s_b_4_5 = s_b_4_1-s_b_4_3 */
    auto s_b_4_5 = emitter.sub(s_b_4_1, s_b_4_3);
    /* execute.simd:1760 [D] s_b_4_6 = float_abs */
    auto s_b_4_6 = emitter.call(__captive_float_abs, s_b_4_5);
    /* execute.simd:6210 [D] s_b_4_7: WriteRegBank 9:s_b_4_4 = s_b_4_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_6,emitter.const_u8(4));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_6);
    /* execute.simd:6211 [F] s_b_4_8 = constant u32 0 (const) */
    /* execute.simd:6211 [F] s_b_4_9: WriteRegBank 10:s_b_4_4 = s_b_4_8 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(260 + (16 * insn.rd))),emitter.const_u32((uint32_t)0ULL),emitter.const_u8(4));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(260 + (16 * insn.rd))),emitter.const_u32((uint32_t)0ULL));
    /* execute.simd:6212 [F] s_b_4_10 = constant u64 0 (const) */
    /* execute.simd:6212 [F] s_b_4_11: WriteRegBank 3:s_b_4_4 = s_b_4_10 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_4_12: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1,  */
  fixed_block_b_5: 
  {
    /* execute.simd:1761 [F] s_b_5_0=sym_10364_3_parameter_inst.size (const) */
    /* execute.simd:1761 [F] s_b_5_1 = (u32)s_b_5_0 (const) */
    /* execute.simd:1761 [F] s_b_5_2 = constant u32 3 (const) */
    /* execute.simd:1761 [F] s_b_5_3 = s_b_5_1==s_b_5_2 (const) */
    uint8_t s_b_5_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.simd:1761 [F] s_b_5_4: If s_b_5_3: Jump b_6 else b_2 (const) */
    if (s_b_5_3) 
    {
      goto fixed_block_b_6;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_5,  */
  fixed_block_b_6: 
  {
    /* execute.simd:1762 [F] s_b_6_0=sym_10364_3_parameter_inst.rn (const) */
    /* execute.simd:6205 [D] s_b_6_1 = ReadRegBank 11:s_b_6_0 (f64) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().f64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* execute.simd:1763 [F] s_b_6_2=sym_10364_3_parameter_inst.rm (const) */
    /* execute.simd:6205 [D] s_b_6_3 = ReadRegBank 11:s_b_6_2 (f64) */
    auto s_b_6_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().f64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_6_3,emitter.const_u8(8));
    }
    /* execute.simd:1765 [F] s_b_6_4=sym_10364_3_parameter_inst.rd (const) */
    /* execute.simd:1765 [D] s_b_6_5 = s_b_6_1-s_b_6_3 */
    auto s_b_6_5 = emitter.sub(s_b_6_1, s_b_6_3);
    /* execute.simd:1765 [D] s_b_6_6 = double_abs */
    auto s_b_6_6 = emitter.call(__captive_double_abs, s_b_6_5);
    /* execute.simd:6218 [D] s_b_6_7: WriteRegBank 11:s_b_6_4 = s_b_6_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_6,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_6);
    /* execute.simd:6219 [F] s_b_6_8 = constant u64 0 (const) */
    /* execute.simd:6219 [F] s_b_6_9: WriteRegBank 3:s_b_6_4 = s_b_6_8 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_6_10: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_fcvtas_simd(const aarch64_decode_a64_SIMD_TWO_REG_MISC&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:4615 [F] s_b_0_0=sym_10877_3_parameter_inst.SCALAR (const) */
    /* execute.simd:4615 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.simd:4615 [F] s_b_0_2 = constant u32 1 (const) */
    /* execute.simd:4615 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.SCALAR) == (uint32_t)1ULL));
    /* execute.simd:4615 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_3 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:4616 [F] s_b_1_0=sym_10877_3_parameter_inst.size (const) */
    /* execute.simd:4616 [F] s_b_1_1 = (u32)s_b_1_0 (const) */
    /* execute.simd:4616 [F] s_b_1_2 = constant u32 0 (const) */
    /* execute.simd:4616 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)0ULL));
    /* execute.simd:4616 [F] s_b_1_4: If s_b_1_3: Jump b_4 else b_5 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_3, b_4, b_5,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:4624 [D] s_b_3_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:4624 [F] s_b_3_1: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.simd:4618 [F] s_b_4_0=sym_10877_3_parameter_inst.rd (const) */
    /* execute.simd:4618 [F] s_b_4_1=sym_10877_3_parameter_inst.rn (const) */
    /* execute.simd:6200 [D] s_b_4_2 = ReadRegBank 9:s_b_4_1 (f32) */
    auto s_b_4_2 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().f32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_2,emitter.const_u8(4));
    }
    /* execute.simd:4618 [F] s_b_4_3 = constant u8 0 (const) */
    /* execute.simd:4618 [D] s_b_4_4 = __builtin_fcvt_f32_s32 */
    auto s_b_4_4 = emitter.call(__captive___builtin_fcvt_f32_s32, s_b_4_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:4618 [D] s_b_4_5 = (u32)s_b_4_4 */
    auto s_b_4_5 = emitter.reinterpret(s_b_4_4, emitter.context().types().u32());
    /* execute.simd:6239 [D] s_b_4_6 = (u64)s_b_4_5 */
    auto s_b_4_6 = emitter.zx(s_b_4_5, emitter.context().types().u64());
    /* execute.simd:6239 [D] s_b_4_7: WriteRegBank 2:s_b_4_0 = s_b_4_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_6,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_6);
    /* execute.simd:6240 [F] s_b_4_8 = constant u64 0 (const) */
    /* execute.simd:6240 [F] s_b_4_9: WriteRegBank 3:s_b_4_0 = s_b_4_8 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_4_10: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1,  */
  fixed_block_b_5: 
  {
    /* execute.simd:4621 [F] s_b_5_0=sym_10877_3_parameter_inst.rd (const) */
    /* execute.simd:4621 [F] s_b_5_1=sym_10877_3_parameter_inst.rn (const) */
    /* execute.simd:6205 [D] s_b_5_2 = ReadRegBank 11:s_b_5_1 (f64) */
    auto s_b_5_2 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().f64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_5_2,emitter.const_u8(8));
    }
    /* execute.simd:4621 [F] s_b_5_3 = constant u8 0 (const) */
    /* execute.simd:4621 [D] s_b_5_4 = __builtin_fcvt_f64_s64 */
    auto s_b_5_4 = emitter.call(__captive___builtin_fcvt_f64_s64, s_b_5_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:4621 [D] s_b_5_5 = (u64)s_b_5_4 */
    auto s_b_5_5 = emitter.reinterpret(s_b_5_4, emitter.context().types().u64());
    /* execute.simd:6246 [D] s_b_5_6: WriteRegBank 2:s_b_5_0 = s_b_5_5 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_5,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_5);
    /* execute.simd:6247 [F] s_b_5_7 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_5_8: WriteRegBank 3:s_b_5_0 = s_b_5_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_5_9: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_fmaxnmv(const aarch64_decode_a64_SIMD_ACROSS_LANES&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:3075 [D] s_b_0_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* ???:4294967295 [F] s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_fmovi(const aarch64_decode_a64_FP_IMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:5211 [F] s_b_0_0=sym_12312_3_parameter_inst.type (const) */
    /* execute.simd:5211 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.simd:5211 [F] s_b_0_2 = constant u32 0 (const) */
    /* execute.simd:5211 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.type) == (uint32_t)0ULL));
    /* execute.simd:5211 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_3 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:5212 [F] s_b_1_0=sym_12312_3_parameter_inst.rd (const) */
    /* execute.simd:5212 [F] s_b_1_1=sym_12312_3_parameter_inst.imm8 (const) */
    /* execute.simd:6287 [F] s_b_1_2 = (u32)s_b_1_1 (const) */
    /* execute.simd:6289 [F] s_b_1_3 = (u64)s_b_1_2 (const) */
    /* execute.simd:6289 [F] s_b_1_4 = constant u64 80 (const) */
    /* execute.simd:6289 [F] s_b_1_5 = s_b_1_3&s_b_1_4 (const) */
    uint64_t s_b_1_5 = ((uint64_t)(((uint64_t)((uint32_t)insn.imm8)) & (uint64_t)128ULL));
    /* execute.simd:6289 [F] s_b_1_6 = constant u64 7 (const) */
    /* execute.simd:6289 [F] s_b_1_7 = s_b_1_5>>s_b_1_6 (const) */
    uint64_t s_b_1_7 = ((uint64_t)(s_b_1_5 >> (uint64_t)7ULL));
    /* execute.simd:6289 [F] s_b_1_8 = (u32)s_b_1_7 (const) */
    /* execute.simd:6290 [F] s_b_1_9 = (u64)s_b_1_2 (const) */
    /* execute.simd:6290 [F] s_b_1_10 = constant u64 40 (const) */
    /* execute.simd:6290 [F] s_b_1_11 = s_b_1_9&s_b_1_10 (const) */
    uint64_t s_b_1_11 = ((uint64_t)(((uint64_t)((uint32_t)insn.imm8)) & (uint64_t)64ULL));
    /* execute.simd:6290 [F] s_b_1_12 = !s_b_1_11 (const) */
    uint64_t s_b_1_12 = !s_b_1_11;
    /* execute.simd:6290 [F] s_b_1_13 = constant u64 7 (const) */
    /* execute.simd:6290 [F] s_b_1_14 = s_b_1_12<<s_b_1_13 (const) */
    uint64_t s_b_1_14 = ((uint64_t)(s_b_1_12 << (uint64_t)7ULL));
    /* execute.simd:6290 [F] s_b_1_15 = (u32)s_b_1_14 (const) */
    /* execute.simd:6291 [F] s_b_1_16 = (u64)s_b_1_2 (const) */
    /* execute.simd:6291 [F] s_b_1_17 = constant u64 40 (const) */
    /* execute.simd:6291 [F] s_b_1_18 = s_b_1_16&s_b_1_17 (const) */
    uint64_t s_b_1_18 = ((uint64_t)(((uint64_t)((uint32_t)insn.imm8)) & (uint64_t)64ULL));
    /* execute.simd:6291 [F] s_b_1_19 = constant u64 0 (const) */
    /* execute.simd:6291 [F] s_b_1_20 = s_b_1_18==s_b_1_19 (const) */
    uint8_t s_b_1_20 = ((uint8_t)(s_b_1_18 == (uint64_t)0ULL));
    /* execute.simd:6291 [F] s_b_1_21 = constant u32 0 (const) */
    /* execute.simd:6291 [F] s_b_1_22 = constant u32 7c (const) */
    /* execute.simd:6291 [F] s_b_1_23: Select s_b_1_20 ? s_b_1_21 : s_b_1_22 (const) */
    uint32_t s_b_1_23 = ((uint32_t)(s_b_1_20 ? ((uint32_t)0ULL) : ((uint32_t)124ULL)));
    /* ???:4294967295 [F] s_b_1_24 = s_b_1_15|s_b_1_23 (const) */
    uint32_t s_b_1_24 = ((uint32_t)(((uint32_t)s_b_1_14) | s_b_1_23));
    /* execute.simd:6292 [F] s_b_1_25 = (u64)s_b_1_2 (const) */
    /* execute.simd:6292 [F] s_b_1_26 = constant u64 30 (const) */
    /* execute.simd:6292 [F] s_b_1_27 = s_b_1_25&s_b_1_26 (const) */
    uint64_t s_b_1_27 = ((uint64_t)(((uint64_t)((uint32_t)insn.imm8)) & (uint64_t)48ULL));
    /* execute.simd:6292 [F] s_b_1_28 = constant u64 4 (const) */
    /* execute.simd:6292 [F] s_b_1_29 = s_b_1_27>>s_b_1_28 (const) */
    uint64_t s_b_1_29 = ((uint64_t)(s_b_1_27 >> (uint64_t)4ULL));
    /* ???:4294967295 [F] s_b_1_30 = (u64)s_b_1_24 (const) */
    /* ???:4294967295 [F] s_b_1_31 = s_b_1_30|s_b_1_29 (const) */
    uint64_t s_b_1_31 = ((uint64_t)(((uint64_t)s_b_1_24) | s_b_1_29));
    /* execute.simd:6292 [F] s_b_1_32 = (u32)s_b_1_31 (const) */
    /* execute.simd:6294 [F] s_b_1_33 = (u64)s_b_1_2 (const) */
    /* execute.simd:6294 [F] s_b_1_34 = constant u64 f (const) */
    /* execute.simd:6294 [F] s_b_1_35 = s_b_1_33&s_b_1_34 (const) */
    uint64_t s_b_1_35 = ((uint64_t)(((uint64_t)((uint32_t)insn.imm8)) & (uint64_t)15ULL));
    /* execute.simd:6294 [F] s_b_1_36 = constant u64 13 (const) */
    /* execute.simd:6294 [F] s_b_1_37 = s_b_1_35<<s_b_1_36 (const) */
    uint64_t s_b_1_37 = ((uint64_t)(s_b_1_35 << (uint64_t)19ULL));
    /* execute.simd:6294 [F] s_b_1_38 = (u32)s_b_1_37 (const) */
    /* execute.simd:6295 [F] s_b_1_39 = constant u32 1f (const) */
    /* execute.simd:6295 [F] s_b_1_40 = s_b_1_8<<s_b_1_39 (const) */
    uint32_t s_b_1_40 = ((uint32_t)(((uint32_t)s_b_1_7) << (uint32_t)31ULL));
    /* execute.simd:6295 [F] s_b_1_41 = constant u32 17 (const) */
    /* execute.simd:6295 [F] s_b_1_42 = s_b_1_32<<s_b_1_41 (const) */
    uint32_t s_b_1_42 = ((uint32_t)(((uint32_t)s_b_1_31) << (uint32_t)23ULL));
    /* execute.simd:6295 [F] s_b_1_43 = s_b_1_40|s_b_1_42 (const) */
    uint32_t s_b_1_43 = ((uint32_t)(s_b_1_40 | s_b_1_42));
    /* execute.simd:6295 [F] s_b_1_44 = s_b_1_43|s_b_1_38 (const) */
    uint32_t s_b_1_44 = ((uint32_t)(s_b_1_43 | ((uint32_t)s_b_1_37)));
    /* execute.simd:6239 [F] s_b_1_45 = (u64)s_b_1_44 (const) */
    /* execute.simd:6239 [F] s_b_1_46: WriteRegBank 2:s_b_1_0 = s_b_1_45 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(((uint64_t)s_b_1_44)),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(((uint64_t)s_b_1_44)));
    /* execute.simd:6240 [F] s_b_1_47 = constant u64 0 (const) */
    /* execute.simd:6240 [F] s_b_1_48: WriteRegBank 3:s_b_1_0 = s_b_1_47 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_1_49: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:5214 [F] s_b_3_0=sym_12312_3_parameter_inst.rd (const) */
    /* execute.simd:5214 [F] s_b_3_1=sym_12312_3_parameter_inst.imm8 (const) */
    /* execute.simd:6300 [F] s_b_3_2 = (u64)s_b_3_1 (const) */
    /* execute.simd:6302 [F] s_b_3_3 = constant u64 80 (const) */
    /* execute.simd:6302 [F] s_b_3_4 = s_b_3_2&s_b_3_3 (const) */
    uint64_t s_b_3_4 = ((uint64_t)(((uint64_t)insn.imm8) & (uint64_t)128ULL));
    /* execute.simd:6302 [F] s_b_3_5 = constant u64 7 (const) */
    /* execute.simd:6302 [F] s_b_3_6 = s_b_3_4>>s_b_3_5 (const) */
    uint64_t s_b_3_6 = ((uint64_t)(s_b_3_4 >> (uint64_t)7ULL));
    /* execute.simd:6303 [F] s_b_3_7 = constant u64 40 (const) */
    /* execute.simd:6303 [F] s_b_3_8 = s_b_3_2&s_b_3_7 (const) */
    uint64_t s_b_3_8 = ((uint64_t)(((uint64_t)insn.imm8) & (uint64_t)64ULL));
    /* execute.simd:6303 [F] s_b_3_9 = !s_b_3_8 (const) */
    uint64_t s_b_3_9 = !s_b_3_8;
    /* execute.simd:6303 [F] s_b_3_10 = constant u64 a (const) */
    /* execute.simd:6303 [F] s_b_3_11 = s_b_3_9<<s_b_3_10 (const) */
    uint64_t s_b_3_11 = ((uint64_t)(s_b_3_9 << (uint64_t)10ULL));
    /* execute.simd:6304 [F] s_b_3_12 = constant u64 40 (const) */
    /* execute.simd:6304 [F] s_b_3_13 = s_b_3_2&s_b_3_12 (const) */
    uint64_t s_b_3_13 = ((uint64_t)(((uint64_t)insn.imm8) & (uint64_t)64ULL));
    /* execute.simd:6304 [F] s_b_3_14 = constant u64 0 (const) */
    /* execute.simd:6304 [F] s_b_3_15 = s_b_3_13==s_b_3_14 (const) */
    uint8_t s_b_3_15 = ((uint8_t)(s_b_3_13 == (uint64_t)0ULL));
    /* execute.simd:6304 [F] s_b_3_16 = constant u64 0 (const) */
    /* execute.simd:6304 [F] s_b_3_17 = constant u64 3fc (const) */
    /* execute.simd:6304 [F] s_b_3_18: Select s_b_3_15 ? s_b_3_16 : s_b_3_17 (const) */
    uint64_t s_b_3_18 = ((uint64_t)(s_b_3_15 ? ((uint64_t)0ULL) : ((uint64_t)1020ULL)));
    /* ???:4294967295 [F] s_b_3_19 = s_b_3_11|s_b_3_18 (const) */
    uint64_t s_b_3_19 = ((uint64_t)(s_b_3_11 | s_b_3_18));
    /* execute.simd:6305 [F] s_b_3_20 = constant u64 30 (const) */
    /* execute.simd:6305 [F] s_b_3_21 = s_b_3_2&s_b_3_20 (const) */
    uint64_t s_b_3_21 = ((uint64_t)(((uint64_t)insn.imm8) & (uint64_t)48ULL));
    /* execute.simd:6305 [F] s_b_3_22 = constant u64 4 (const) */
    /* execute.simd:6305 [F] s_b_3_23 = s_b_3_21>>s_b_3_22 (const) */
    uint64_t s_b_3_23 = ((uint64_t)(s_b_3_21 >> (uint64_t)4ULL));
    /* ???:4294967295 [F] s_b_3_24 = s_b_3_19|s_b_3_23 (const) */
    uint64_t s_b_3_24 = ((uint64_t)(s_b_3_19 | s_b_3_23));
    /* execute.simd:6307 [F] s_b_3_25 = constant u64 f (const) */
    /* execute.simd:6307 [F] s_b_3_26 = s_b_3_2&s_b_3_25 (const) */
    uint64_t s_b_3_26 = ((uint64_t)(((uint64_t)insn.imm8) & (uint64_t)15ULL));
    /* execute.simd:6307 [F] s_b_3_27 = constant u64 30 (const) */
    /* execute.simd:6307 [F] s_b_3_28 = s_b_3_26<<s_b_3_27 (const) */
    uint64_t s_b_3_28 = ((uint64_t)(s_b_3_26 << (uint64_t)48ULL));
    /* execute.simd:6308 [F] s_b_3_29 = constant u64 3f (const) */
    /* execute.simd:6308 [F] s_b_3_30 = s_b_3_6<<s_b_3_29 (const) */
    uint64_t s_b_3_30 = ((uint64_t)(s_b_3_6 << (uint64_t)63ULL));
    /* execute.simd:6308 [F] s_b_3_31 = constant u64 34 (const) */
    /* execute.simd:6308 [F] s_b_3_32 = s_b_3_24<<s_b_3_31 (const) */
    uint64_t s_b_3_32 = ((uint64_t)(s_b_3_24 << (uint64_t)52ULL));
    /* execute.simd:6308 [F] s_b_3_33 = s_b_3_30|s_b_3_32 (const) */
    uint64_t s_b_3_33 = ((uint64_t)(s_b_3_30 | s_b_3_32));
    /* execute.simd:6308 [F] s_b_3_34 = s_b_3_33|s_b_3_28 (const) */
    uint64_t s_b_3_34 = ((uint64_t)(s_b_3_33 | s_b_3_28));
    /* execute.simd:6246 [F] s_b_3_35: WriteRegBank 2:s_b_3_0 = s_b_3_34 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(s_b_3_34),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(s_b_3_34));
    /* execute.simd:6247 [F] s_b_3_36 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_3_37: WriteRegBank 3:s_b_3_0 = s_b_3_36 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_3_38: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_fsub(const aarch64_decode_a64_FP_DP_2&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:4128 [F] s_b_0_0=sym_12752_3_parameter_inst.type (const) */
    /* execute.simd:4128 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.simd:4128 [F] s_b_0_2 = constant u32 0 (const) */
    /* execute.simd:4128 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.type) == (uint32_t)0ULL));
    /* execute.simd:4128 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_3 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:4130 [F] s_b_1_0=sym_12752_3_parameter_inst.rn (const) */
    /* execute.simd:6200 [D] s_b_1_1 = ReadRegBank 9:s_b_1_0 (f32) */
    auto s_b_1_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().f32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_1_1,emitter.const_u8(4));
    }
    /* execute.simd:4131 [F] s_b_1_2=sym_12752_3_parameter_inst.rm (const) */
    /* execute.simd:6200 [D] s_b_1_3 = ReadRegBank 9:s_b_1_2 (f32) */
    auto s_b_1_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().f32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_1_3,emitter.const_u8(4));
    }
    /* execute.simd:4133 [D] s_b_1_4 = s_b_1_1-s_b_1_3 */
    auto s_b_1_4 = emitter.sub(s_b_1_1, s_b_1_3);
    /* execute.simd:4134 [F] s_b_1_5=sym_12752_3_parameter_inst.rd (const) */
    /* execute.simd:6210 [D] s_b_1_6: WriteRegBank 9:s_b_1_5 = s_b_1_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_4,emitter.const_u8(4));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_1_4);
    /* execute.simd:6211 [F] s_b_1_7 = constant u32 0 (const) */
    /* execute.simd:6211 [F] s_b_1_8: WriteRegBank 10:s_b_1_5 = s_b_1_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(260 + (16 * insn.rd))),emitter.const_u32((uint32_t)0ULL),emitter.const_u8(4));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(260 + (16 * insn.rd))),emitter.const_u32((uint32_t)0ULL));
    /* execute.simd:6212 [F] s_b_1_9 = constant u64 0 (const) */
    /* execute.simd:6212 [F] s_b_1_10: WriteRegBank 3:s_b_1_5 = s_b_1_9 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_1_11: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:4137 [F] s_b_3_0=sym_12752_3_parameter_inst.rn (const) */
    /* execute.simd:6205 [D] s_b_3_1 = ReadRegBank 11:s_b_3_0 (f64) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().f64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_3_1,emitter.const_u8(8));
    }
    /* execute.simd:4138 [F] s_b_3_2=sym_12752_3_parameter_inst.rm (const) */
    /* execute.simd:6205 [D] s_b_3_3 = ReadRegBank 11:s_b_3_2 (f64) */
    auto s_b_3_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().f64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_3_3,emitter.const_u8(8));
    }
    /* execute.simd:4140 [D] s_b_3_4 = s_b_3_1-s_b_3_3 */
    auto s_b_3_4 = emitter.sub(s_b_3_1, s_b_3_3);
    /* execute.simd:4141 [F] s_b_3_5=sym_12752_3_parameter_inst.rd (const) */
    /* execute.simd:6218 [D] s_b_3_6: WriteRegBank 11:s_b_3_5 = s_b_3_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_4);
    /* execute.simd:6219 [F] s_b_3_7 = constant u64 0 (const) */
    /* execute.simd:6219 [F] s_b_3_8: WriteRegBank 3:s_b_3_5 = s_b_3_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_3_9: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ld1s(const aarch64_decode_a64_SIMD_LS_SINGLE&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_64722_1__R_s_b_0_5 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_64760_1__R_s_b_13_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_13510_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_13485_0_value = emitter.alloc_local(emitter.context().types().u32(), false);
  auto DV_sym_13457_0_value = emitter.alloc_local(emitter.context().types().u16(), false);
  auto DV_sym_13438_0_value = emitter.alloc_local(emitter.context().types().u8(), false);
  auto DV_sym_13431_0_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2730 [F] s_b_0_0=sym_13425_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_10 else b_8 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_2, b_3, b_5, b_6, b_7, b_9,  */
  fixed_block_b_1: 
  {
    /* ???:4294967295 [F] s_b_1_0: Return */
    goto fixed_done;
  }
  /* b_9,  */
  fixed_block_b_2: 
  {
    /* execute.simd:2750 [D] s_b_2_0 = sym_13431_0_addr uint64_t */
    auto s_b_2_0 = emitter.load_local(DV_sym_13431_0_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_2_1 = Load 1 s_b_2_0 => sym_13438_0_value */
    auto s_b_2_1 = emitter.load_memory(s_b_2_0, emitter.context().types().u8());
    emitter.store_local(DV_sym_13438_0_value, s_b_2_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_2_0, s_b_2_1, emitter.const_u8(1));
    }
    /* execute.simd:2752 [F] s_b_2_2=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2752 [D] s_b_2_3 = ReadRegBank 16:s_b_2_2 (v16u8) */
    auto s_b_2_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_2_3,emitter.const_u8(16));
    }
    /* execute.simd:2753 [D] s_b_2_4 = sym_13438_0_value uint8_t */
    auto s_b_2_4 = emitter.load_local(DV_sym_13438_0_value, emitter.context().types().u8());
    /* execute.simd:2753 [F] s_b_2_5=sym_13425_3_parameter_inst.eindex (const) */
    /* execute.simd:2753 [F] s_b_2_6 = (s32)s_b_2_5 (const) */
    /* execute.simd:2753 [D] s_b_2_7 = s_b_2_3[s_b_2_6] <= s_b_2_4 */
    auto s_b_2_7 = emitter.vector_insert(s_b_2_3, emitter.const_s32(((int32_t)insn.eindex)), s_b_2_4);
    /* execute.simd:2754 [F] s_b_2_8=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2754 [D] s_b_2_9: WriteRegBank 16:s_b_2_8 = s_b_2_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_2_7,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_2_7);
    /* execute.simd:0 [F] s_b_2_10: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_9,  */
  fixed_block_b_3: 
  {
    /* execute.simd:2759 [D] s_b_3_0 = sym_13431_0_addr uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_13431_0_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_1 = Load 2 s_b_3_0 => sym_13457_0_value */
    auto s_b_3_1 = emitter.load_memory(s_b_3_0, emitter.context().types().u16());
    emitter.store_local(DV_sym_13457_0_value, s_b_3_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_3_0, s_b_3_1, emitter.const_u8(2));
    }
    /* execute.simd:2761 [F] s_b_3_2=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2761 [D] s_b_3_3 = ReadRegBank 18:s_b_3_2 (v8u16) */
    auto s_b_3_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_3_3,emitter.const_u8(16));
    }
    /* execute.simd:2762 [D] s_b_3_4 = sym_13457_0_value uint16_t */
    auto s_b_3_4 = emitter.load_local(DV_sym_13457_0_value, emitter.context().types().u16());
    /* execute.simd:2762 [F] s_b_3_5=sym_13425_3_parameter_inst.eindex (const) */
    /* execute.simd:2762 [F] s_b_3_6 = (s32)s_b_3_5 (const) */
    /* execute.simd:2762 [D] s_b_3_7 = s_b_3_3[s_b_3_6] <= s_b_3_4 */
    auto s_b_3_7 = emitter.vector_insert(s_b_3_3, emitter.const_s32(((int32_t)insn.eindex)), s_b_3_4);
    /* execute.simd:2763 [F] s_b_3_8=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2763 [D] s_b_3_9: WriteRegBank 18:s_b_3_8 = s_b_3_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_3_7,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_3_7);
    /* execute.simd:0 [F] s_b_3_10: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_9,  */
  fixed_block_b_4: 
  {
    /* execute.simd:2767 [F] s_b_4_0=sym_13425_3_parameter_inst.size (const) */
    /* execute.simd:2767 [F] s_b_4_1 = (u32)s_b_4_0 (const) */
    /* execute.simd:2767 [F] s_b_4_2 = constant u32 0 (const) */
    /* execute.simd:2767 [F] s_b_4_3 = s_b_4_1==s_b_4_2 (const) */
    uint8_t s_b_4_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)0ULL));
    /* execute.simd:2767 [F] s_b_4_4: If s_b_4_3: Jump b_5 else b_6 (const) */
    if (s_b_4_3) 
    {
      goto fixed_block_b_5;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_4,  */
  fixed_block_b_5: 
  {
    /* execute.simd:2769 [D] s_b_5_0 = sym_13431_0_addr uint64_t */
    auto s_b_5_0 = emitter.load_local(DV_sym_13431_0_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_5_1 = Load 4 s_b_5_0 => sym_13485_0_value */
    auto s_b_5_1 = emitter.load_memory(s_b_5_0, emitter.context().types().u32());
    emitter.store_local(DV_sym_13485_0_value, s_b_5_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_5_0, s_b_5_1, emitter.const_u8(4));
    }
    /* execute.simd:2771 [F] s_b_5_2=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2771 [D] s_b_5_3 = ReadRegBank 20:s_b_5_2 (v4u32) */
    auto s_b_5_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_5_3,emitter.const_u8(16));
    }
    /* execute.simd:2772 [D] s_b_5_4 = sym_13485_0_value uint32_t */
    auto s_b_5_4 = emitter.load_local(DV_sym_13485_0_value, emitter.context().types().u32());
    /* execute.simd:2772 [F] s_b_5_5=sym_13425_3_parameter_inst.eindex (const) */
    /* execute.simd:2772 [F] s_b_5_6 = (s32)s_b_5_5 (const) */
    /* execute.simd:2772 [D] s_b_5_7 = s_b_5_3[s_b_5_6] <= s_b_5_4 */
    auto s_b_5_7 = emitter.vector_insert(s_b_5_3, emitter.const_s32(((int32_t)insn.eindex)), s_b_5_4);
    /* execute.simd:2773 [F] s_b_5_8=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2773 [D] s_b_5_9: WriteRegBank 20:s_b_5_8 = s_b_5_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_5_7,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_5_7);
    /* execute.simd:2768 [F] s_b_5_10: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_4,  */
  fixed_block_b_6: 
  {
    /* execute.simd:2774 [F] s_b_6_0=sym_13425_3_parameter_inst.size (const) */
    /* execute.simd:2774 [F] s_b_6_1 = (u32)s_b_6_0 (const) */
    /* execute.simd:2774 [F] s_b_6_2 = constant u32 1 (const) */
    /* execute.simd:2774 [F] s_b_6_3 = s_b_6_1==s_b_6_2 (const) */
    uint8_t s_b_6_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)1ULL));
    /* execute.simd:2774 [F] s_b_6_4: If s_b_6_3: Jump b_7 else b_1 (const) */
    if (s_b_6_3) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_1;
    }
  }
  /* b_6,  */
  fixed_block_b_7: 
  {
    /* execute.simd:2776 [D] s_b_7_0 = sym_13431_0_addr uint64_t */
    auto s_b_7_0 = emitter.load_local(DV_sym_13431_0_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_7_1 = Load 8 s_b_7_0 => sym_13510_0_value */
    auto s_b_7_1 = emitter.load_memory(s_b_7_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_13510_0_value, s_b_7_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_7_0, s_b_7_1, emitter.const_u8(8));
    }
    /* execute.simd:2778 [F] s_b_7_2=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2778 [D] s_b_7_3 = ReadRegBank 21:s_b_7_2 (v2u64) */
    auto s_b_7_3 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v2u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_7_3,emitter.const_u8(16));
    }
    /* execute.simd:2779 [D] s_b_7_4 = sym_13510_0_value uint64_t */
    auto s_b_7_4 = emitter.load_local(DV_sym_13510_0_value, emitter.context().types().u64());
    /* execute.simd:2779 [F] s_b_7_5=sym_13425_3_parameter_inst.eindex (const) */
    /* execute.simd:2779 [F] s_b_7_6 = (s32)s_b_7_5 (const) */
    /* execute.simd:2779 [D] s_b_7_7 = s_b_7_3[s_b_7_6] <= s_b_7_4 */
    auto s_b_7_7 = emitter.vector_insert(s_b_7_3, emitter.const_s32(((int32_t)insn.eindex)), s_b_7_4);
    /* execute.simd:2780 [F] s_b_7_8=sym_13425_3_parameter_inst.rt (const) */
    /* execute.simd:2780 [D] s_b_7_9: WriteRegBank 21:s_b_7_8 = s_b_7_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_7_7,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_7_7);
    /* execute.simd:2775 [F] s_b_7_10: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2733 [F] s_b_8_0=sym_13425_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_8_1 = ReadRegBank 0:s_b_8_0 (u64) */
    auto s_b_8_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_8_1,emitter.const_u8(8));
    }
    /* execute.a64:2733 [D] s_b_8_2: sym_64722_1__R_s_b_0_5 = s_b_8_1, dominates: s_b_9_0  */
    emitter.store_local(DV_sym_64722_1__R_s_b_0_5, s_b_8_1);
    /* execute.a64:2733 [F] s_b_8_3: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_8, b_14,  */
  fixed_block_b_9: 
  {
    /* execute.simd:2745 [D] s_b_9_0 = sym_64722_1__R_s_b_0_5 uint64_t */
    auto s_b_9_0 = emitter.load_local(DV_sym_64722_1__R_s_b_0_5, emitter.context().types().u64());
    /* execute.simd:2745 [D] s_b_9_1: sym_13431_0_addr = s_b_9_0, dominates: s_b_5_0 s_b_7_0 s_b_3_0 s_b_2_0  */
    emitter.store_local(DV_sym_13431_0_addr, s_b_9_0);
    /* execute.simd:2747 [F] s_b_9_2=sym_13425_3_parameter_inst.opcode (const) */
    /* execute.simd:2748 [F] s_b_9_3 = constant s32 0 (const) */
    /* execute.simd:2757 [F] s_b_9_4 = constant s32 2 (const) */
    /* execute.simd:2766 [F] s_b_9_5 = constant s32 4 (const) */
    /* execute.simd:2747 [F] s_b_9_6: Switch s_b_9_2: < <todo> > def b_1 (const) -> b_4, b_3, b_1, b_2,  */
    switch (insn.opcode) 
    {
    case (int32_t)4ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    default:
      goto fixed_block_b_1;
    }
  }
  /* b_0,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2701 [F] s_b_10_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_10_1 = __builtin_get_feature */
    uint32_t s_b_10_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_10_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_10_3 = s_b_10_1==s_b_10_2 (const) */
    uint8_t s_b_10_3 = ((uint8_t)(s_b_10_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_10_4: If s_b_10_3: Jump b_11 else b_15 (const) */
    if (s_b_10_3) 
    {
      goto fixed_block_b_11;
    }
    else 
    {
      goto fixed_block_b_15;
    }
  }
  /* b_10,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2702 [D] s_b_11_0 = ReadReg 20 (u64) */
    auto s_b_11_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_11_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_11_1: sym_64760_1__R_s_b_13_0 = s_b_11_0, dominates: s_b_14_0  */
    emitter.store_local(DV_sym_64760_1__R_s_b_13_0, s_b_11_0);
    /* execute.a64:2702 [F] s_b_11_2: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_15,  */
  fixed_block_b_12: 
  {
    /* execute.a64:2705 [D] s_b_12_0 = ReadReg 20 (u64) */
    auto s_b_12_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_12_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_12_1: sym_64760_1__R_s_b_13_0 = s_b_12_0, dominates: s_b_14_0  */
    emitter.store_local(DV_sym_64760_1__R_s_b_13_0, s_b_12_0);
    /* execute.a64:2705 [F] s_b_12_2: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_15,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2707 [D] s_b_13_0 = ReadReg 21 (u64) */
    auto s_b_13_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_13_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_13_1: sym_64760_1__R_s_b_13_0 = s_b_13_0, dominates: s_b_14_0  */
    emitter.store_local(DV_sym_64760_1__R_s_b_13_0, s_b_13_0);
    /* execute.a64:2707 [F] s_b_13_2: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_11, b_12, b_13,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2731 [D] s_b_14_0 = sym_64760_1__R_s_b_13_0 uint64_t */
    auto s_b_14_0 = emitter.load_local(DV_sym_64760_1__R_s_b_13_0, emitter.context().types().u64());
    /* execute.a64:2731 [D] s_b_14_1: sym_64722_1__R_s_b_0_5 = s_b_14_0, dominates: s_b_9_0  */
    emitter.store_local(DV_sym_64722_1__R_s_b_0_5, s_b_14_0);
    /* execute.a64:2731 [F] s_b_14_2: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_10,  */
  fixed_block_b_15: 
  {
    /* execute.a64:3012 [F] s_b_15_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_15_1 = __builtin_get_feature */
    uint32_t s_b_15_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_15_2 = (u8)s_b_15_1 (const) */
    /* execute.a64:2704 [F] s_b_15_3 = (u32)s_b_15_2 (const) */
    /* execute.a64:2704 [F] s_b_15_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_15_5 = s_b_15_3==s_b_15_4 (const) */
    uint8_t s_b_15_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_15_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_15_6: If s_b_15_5: Jump b_12 else b_13 (const) */
    if (s_b_15_5) 
    {
      goto fixed_block_b_12;
    }
    else 
    {
      goto fixed_block_b_13;
    }
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ldarb(const aarch64_decode_a64_LS_EX&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_70419_0_data8 = emitter.alloc_local(emitter.context().types().u8(), false);
  auto DV_sym_70414_3_parameter_address = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_70351_1__R_s_b_4_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_70313_1__R_s_b_0_5 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_71018_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2730 [F] s_b_0_0=sym_14144_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_3 else b_1 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_3;
    }
    else 
    {
      goto fixed_block_b_1;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2733 [F] s_b_1_0=sym_14144_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_1_1 = ReadRegBank 0:s_b_1_0 (u64) */
    auto s_b_1_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_1_1,emitter.const_u8(8));
    }
    /* execute.a64:2733 [D] s_b_1_2: sym_70313_1__R_s_b_0_5 = s_b_1_1, dominates: s_b_2_0  */
    emitter.store_local(DV_sym_70313_1__R_s_b_0_5, s_b_1_1);
    /* execute.a64:2733 [F] s_b_1_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_7,  */
  fixed_block_b_2: 
  {
    /* execute.a64:651 [D] s_b_2_0 = sym_70313_1__R_s_b_0_5 uint64_t */
    auto s_b_2_0 = emitter.load_local(DV_sym_70313_1__R_s_b_0_5, emitter.context().types().u64());
    /* execute.a64:652 [D] s_b_2_1: sym_70414_3_parameter_address = s_b_2_0, dominates: s_b_8_1  */
    emitter.store_local(DV_sym_70414_3_parameter_address, s_b_2_0);
    /* ???:4294967295 [D] s_b_2_2 = Load 1 s_b_2_0 => sym_70419_0_data8 */
    auto s_b_2_2 = emitter.load_memory(s_b_2_0, emitter.context().types().u8());
    emitter.store_local(DV_sym_70419_0_data8, s_b_2_2);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_2_0, s_b_2_2, emitter.const_u8(1));
    }
    /* execute.a64:1663 [D] s_b_2_3 = sym_70419_0_data8 uint8_t */
    auto s_b_2_3 = emitter.load_local(DV_sym_70419_0_data8, emitter.context().types().u8());
    /* execute.a64:1663 [D] s_b_2_4 = (u64)s_b_2_3 */
    auto s_b_2_4 = emitter.zx(s_b_2_3, emitter.context().types().u64());
    /* execute.a64:2693 [F] s_b_2_5=sym_14144_3_parameter_inst.rt (const) */
    /* execute.a64:2693 [D] s_b_2_6 = (u32)s_b_2_4 */
    auto s_b_2_6 = emitter.truncate(s_b_2_4, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_2_7 = (u64)s_b_2_6 */
    auto s_b_2_7 = emitter.zx(s_b_2_6, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_2_8: sym_71018_3_parameter_value = s_b_2_7, dominates: s_b_10_1  */
    emitter.store_local(DV_sym_71018_3_parameter_value, s_b_2_7);
    /* execute.a64:2682 [F] s_b_2_9 = (u32)s_b_2_5 (const) */
    /* execute.a64:2682 [F] s_b_2_10 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_2_11 = s_b_2_9==s_b_2_10 (const) */
    uint8_t s_b_2_11 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_2_12: If s_b_2_11: Jump b_8 else b_10 (const) */
    if (s_b_2_11) 
    {
      goto fixed_block_b_8;
    }
    else 
    {
      goto fixed_block_b_10;
    }
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.a64:2701 [F] s_b_3_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_3_1 = __builtin_get_feature */
    uint32_t s_b_3_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_3_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_3_3 = s_b_3_1==s_b_3_2 (const) */
    uint8_t s_b_3_3 = ((uint8_t)(s_b_3_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_3_4: If s_b_3_3: Jump b_4 else b_9 (const) */
    if (s_b_3_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_3,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2702 [D] s_b_4_0 = ReadReg 20 (u64) */
    auto s_b_4_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_4_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_4_1: sym_70351_1__R_s_b_4_0 = s_b_4_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_70351_1__R_s_b_4_0, s_b_4_0);
    /* execute.a64:2702 [F] s_b_4_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_9,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2705 [D] s_b_5_0 = ReadReg 20 (u64) */
    auto s_b_5_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_5_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_5_1: sym_70351_1__R_s_b_4_0 = s_b_5_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_70351_1__R_s_b_4_0, s_b_5_0);
    /* execute.a64:2705 [F] s_b_5_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_9,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2707 [D] s_b_6_0 = ReadReg 21 (u64) */
    auto s_b_6_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_6_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_6_1: sym_70351_1__R_s_b_4_0 = s_b_6_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_70351_1__R_s_b_4_0, s_b_6_0);
    /* execute.a64:2707 [F] s_b_6_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_4, b_5, b_6,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2731 [D] s_b_7_0 = sym_70351_1__R_s_b_4_0 uint64_t */
    auto s_b_7_0 = emitter.load_local(DV_sym_70351_1__R_s_b_4_0, emitter.context().types().u64());
    /* execute.a64:2731 [D] s_b_7_1: sym_70313_1__R_s_b_0_5 = s_b_7_0, dominates: s_b_2_0  */
    emitter.store_local(DV_sym_70313_1__R_s_b_0_5, s_b_7_0);
    /* execute.a64:2731 [F] s_b_7_2: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_2, b_10,  */
  fixed_block_b_8: 
  {
    /* execute.a64:1723 [F] s_b_8_0 = constant u32 0 (const) */
    /* execute.a64:1723 [D] s_b_8_1 = sym_70414_3_parameter_address uint64_t */
    auto s_b_8_1 = emitter.load_local(DV_sym_70414_3_parameter_address, emitter.context().types().u64());
    /* execute.a64:1723 [D] s_b_8_2 = mem_monitor_acquire */
    emitter.call(__captive_mem_monitor_acquire, emitter.const_u32((uint32_t)0ULL), s_b_8_1);
    /* ???:4294967295 [F] s_b_8_3: Return */
    goto fixed_done;
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.a64:3012 [F] s_b_9_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_9_1 = __builtin_get_feature */
    uint32_t s_b_9_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_9_2 = (u8)s_b_9_1 (const) */
    /* execute.a64:2704 [F] s_b_9_3 = (u32)s_b_9_2 (const) */
    /* execute.a64:2704 [F] s_b_9_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_9_5 = s_b_9_3==s_b_9_4 (const) */
    uint8_t s_b_9_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_9_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_9_6: If s_b_9_5: Jump b_5 else b_6 (const) */
    if (s_b_9_5) 
    {
      goto fixed_block_b_5;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_2,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2684 [F] s_b_10_0=sym_14144_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_10_1 = sym_71018_3_parameter_value uint64_t */
    auto s_b_10_1 = emitter.load_local(DV_sym_71018_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_10_2: WriteRegBank 0:s_b_10_0 = s_b_10_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_10_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_10_1);
    /* execute.a64:0 [F] s_b_10_3: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ldp_simd(const aarch64_decode_a64_LS_REG_PAIR_OFF&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_87074_1__R_s_b_0_5 = emitter.alloc_local(emitter.context().types().u64(), false);
  uint8_t CV_sym_87160_3_parameter_size;
  auto DV_sym_87112_1__R_s_b_4_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87171_3_parameter_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  uint8_t CV_sym_87166_0_offset;
  auto DV_sym_87228_3_parameter_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87230_0_value = emitter.alloc_local(emitter.context().types().u8(), false);
  auto DV_sym_87265_0_vh = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87259_0_vl = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87252_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87245_0_value = emitter.alloc_local(emitter.context().types().u32(), false);
  auto DV_sym_87238_0_value = emitter.alloc_local(emitter.context().types().u16(), false);
  auto DV_sym_87380_0_value = emitter.alloc_local(emitter.context().types().u8(), false);
  auto DV_sym_87378_3_parameter_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87388_0_value = emitter.alloc_local(emitter.context().types().u16(), false);
  auto DV_sym_87415_0_vh = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87409_0_vl = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87402_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_87395_0_value = emitter.alloc_local(emitter.context().types().u32(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2730 [F] s_b_0_0=sym_14482_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_3 else b_1 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_3;
    }
    else 
    {
      goto fixed_block_b_1;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2733 [F] s_b_1_0=sym_14482_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_1_1 = ReadRegBank 0:s_b_1_0 (u64) */
    auto s_b_1_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_1_1,emitter.const_u8(8));
    }
    /* execute.a64:2733 [D] s_b_1_2: sym_87074_1__R_s_b_0_5 = s_b_1_1, dominates: s_b_2_0  */
    emitter.store_local(DV_sym_87074_1__R_s_b_0_5, s_b_1_1);
    /* execute.a64:2733 [F] s_b_1_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_7,  */
  fixed_block_b_2: 
  {
    /* execute.simd:764 [D] s_b_2_0 = sym_87074_1__R_s_b_0_5 uint64_t */
    auto s_b_2_0 = emitter.load_local(DV_sym_87074_1__R_s_b_0_5, emitter.context().types().u64());
    /* execute.simd:765 [F] s_b_2_1=sym_14482_3_parameter_inst.imms64 (const) */
    /* ???:4294967295 [F] s_b_2_2 = (u64)s_b_2_1 (const) */
    /* ???:4294967295 [D] s_b_2_3 = s_b_2_0+s_b_2_2 */
    auto s_b_2_3 = emitter.add(s_b_2_0, emitter.const_u64(((uint64_t)insn.imms64)));
    /* execute.simd:767 [F] s_b_2_4=sym_14482_3_parameter_inst.opc (const) */
    /* execute.simd:767 [F] s_b_2_5 = (u32)s_b_2_4 (const) */
    /* execute.simd:767 [F] s_b_2_6 = constant u32 2 (const) */
    /* execute.simd:767 [F] s_b_2_7 = s_b_2_5+s_b_2_6 (const) */
    uint32_t s_b_2_7 = ((uint32_t)(((uint32_t)insn.opc) + (uint32_t)2ULL));
    /* execute.simd:767 [F] s_b_2_8 = (u8)s_b_2_7 (const) */
    /* execute.simd:767 [F] s_b_2_9: sym_87160_3_parameter_size = s_b_2_8 (const), dominates: s_b_15_0  */
    CV_sym_87160_3_parameter_size = ((uint8_t)s_b_2_7);
    /* execute.simd:767 [D] s_b_2_10: sym_87171_3_parameter_addr = s_b_2_3, dominates: s_b_15_1  */
    emitter.store_local(DV_sym_87171_3_parameter_addr, s_b_2_3);
    /* execute.simd:732 [F] s_b_2_11 = constant u32 1 (const) */
    /* execute.simd:732 [F] s_b_2_12 = (u32)s_b_2_8 (const) */
    /* execute.simd:732 [F] s_b_2_13 = s_b_2_11<<s_b_2_12 (const) */
    uint32_t s_b_2_13 = ((uint32_t)((uint32_t)1ULL << ((uint32_t)((uint8_t)s_b_2_7))));
    /* execute.simd:732 [F] s_b_2_14 = (u8)s_b_2_13 (const) */
    /* execute.simd:732 [F] s_b_2_15: sym_87166_0_offset = s_b_2_14 (const), dominates: s_b_15_2  */
    CV_sym_87166_0_offset = ((uint8_t)s_b_2_13);
    /* execute.simd:733 [D] s_b_2_16: sym_87228_3_parameter_addr = s_b_2_3, dominates: s_b_14_0 s_b_13_0 s_b_12_0 s_b_11_0 s_b_10_0  */
    emitter.store_local(DV_sym_87228_3_parameter_addr, s_b_2_3);
    /* execute.simd:3714 [F] s_b_2_17 = constant s32 0 (const) */
    /* execute.simd:3721 [F] s_b_2_18 = constant s32 1 (const) */
    /* execute.simd:3728 [F] s_b_2_19 = constant s32 2 (const) */
    /* execute.simd:3735 [F] s_b_2_20 = constant s32 3 (const) */
    /* execute.simd:3742 [F] s_b_2_21 = constant s32 4 (const) */
    /* execute.simd:3713 [F] s_b_2_22: Switch s_b_2_8: < <todo> > def b_15 (const) -> b_14, b_13, b_12, b_11, b_10, b_15,  */
    switch (((uint8_t)s_b_2_7)) 
    {
    case (int32_t)4ULL:
      goto fixed_block_b_14;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_11;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_10;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_13;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_12;
      break;
    default:
      goto fixed_block_b_15;
    }
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.a64:2701 [F] s_b_3_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_3_1 = __builtin_get_feature */
    uint32_t s_b_3_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_3_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_3_3 = s_b_3_1==s_b_3_2 (const) */
    uint8_t s_b_3_3 = ((uint8_t)(s_b_3_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_3_4: If s_b_3_3: Jump b_4 else b_9 (const) */
    if (s_b_3_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_3,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2702 [D] s_b_4_0 = ReadReg 20 (u64) */
    auto s_b_4_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_4_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_4_1: sym_87112_1__R_s_b_4_0 = s_b_4_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_87112_1__R_s_b_4_0, s_b_4_0);
    /* execute.a64:2702 [F] s_b_4_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_9,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2705 [D] s_b_5_0 = ReadReg 20 (u64) */
    auto s_b_5_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_5_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_5_1: sym_87112_1__R_s_b_4_0 = s_b_5_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_87112_1__R_s_b_4_0, s_b_5_0);
    /* execute.a64:2705 [F] s_b_5_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_9,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2707 [D] s_b_6_0 = ReadReg 21 (u64) */
    auto s_b_6_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_6_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_6_1: sym_87112_1__R_s_b_4_0 = s_b_6_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_87112_1__R_s_b_4_0, s_b_6_0);
    /* execute.a64:2707 [F] s_b_6_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_4, b_5, b_6,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2731 [D] s_b_7_0 = sym_87112_1__R_s_b_4_0 uint64_t */
    auto s_b_7_0 = emitter.load_local(DV_sym_87112_1__R_s_b_4_0, emitter.context().types().u64());
    /* execute.a64:2731 [D] s_b_7_1: sym_87074_1__R_s_b_0_5 = s_b_7_0, dominates: s_b_2_0  */
    emitter.store_local(DV_sym_87074_1__R_s_b_0_5, s_b_7_0);
    /* execute.a64:2731 [F] s_b_7_2: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_15, b_16, b_17, b_18, b_19, b_20,  */
  fixed_block_b_8: 
  {
    /* ???:4294967295 [F] s_b_8_0: Return */
    goto fixed_done;
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.a64:3012 [F] s_b_9_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_9_1 = __builtin_get_feature */
    uint32_t s_b_9_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_9_2 = (u8)s_b_9_1 (const) */
    /* execute.a64:2704 [F] s_b_9_3 = (u32)s_b_9_2 (const) */
    /* execute.a64:2704 [F] s_b_9_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_9_5 = s_b_9_3==s_b_9_4 (const) */
    uint8_t s_b_9_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_9_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_9_6: If s_b_9_5: Jump b_5 else b_6 (const) */
    if (s_b_9_5) 
    {
      goto fixed_block_b_5;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_2,  */
  fixed_block_b_10: 
  {
    /* execute.simd:3717 [D] s_b_10_0 = sym_87228_3_parameter_addr uint64_t */
    auto s_b_10_0 = emitter.load_local(DV_sym_87228_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_10_1 = Load 1 s_b_10_0 => sym_87230_0_value */
    auto s_b_10_1 = emitter.load_memory(s_b_10_0, emitter.context().types().u8());
    emitter.store_local(DV_sym_87230_0_value, s_b_10_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_10_0, s_b_10_1, emitter.const_u8(1));
    }
    /* execute.simd:3718 [F] s_b_10_2=sym_14482_3_parameter_inst.rt (const) */
    /* execute.simd:3718 [D] s_b_10_3 = sym_87230_0_value uint8_t */
    auto s_b_10_3 = emitter.load_local(DV_sym_87230_0_value, emitter.context().types().u8());
    /* execute.simd:6225 [D] s_b_10_4 = (u64)s_b_10_3 */
    auto s_b_10_4 = emitter.zx(s_b_10_3, emitter.context().types().u64());
    /* execute.simd:6225 [D] s_b_10_5: WriteRegBank 2:s_b_10_2 = s_b_10_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_10_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_10_4);
    /* execute.simd:6226 [F] s_b_10_6 = constant u64 0 (const) */
    /* execute.simd:6226 [F] s_b_10_7: WriteRegBank 3:s_b_10_2 = s_b_10_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_10_8: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_2,  */
  fixed_block_b_11: 
  {
    /* execute.simd:3731 [D] s_b_11_0 = sym_87228_3_parameter_addr uint64_t */
    auto s_b_11_0 = emitter.load_local(DV_sym_87228_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_11_1 = Load 4 s_b_11_0 => sym_87245_0_value */
    auto s_b_11_1 = emitter.load_memory(s_b_11_0, emitter.context().types().u32());
    emitter.store_local(DV_sym_87245_0_value, s_b_11_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_11_0, s_b_11_1, emitter.const_u8(4));
    }
    /* execute.simd:3732 [F] s_b_11_2=sym_14482_3_parameter_inst.rt (const) */
    /* execute.simd:3732 [D] s_b_11_3 = sym_87245_0_value uint32_t */
    auto s_b_11_3 = emitter.load_local(DV_sym_87245_0_value, emitter.context().types().u32());
    /* execute.simd:6239 [D] s_b_11_4 = (u64)s_b_11_3 */
    auto s_b_11_4 = emitter.zx(s_b_11_3, emitter.context().types().u64());
    /* execute.simd:6239 [D] s_b_11_5: WriteRegBank 2:s_b_11_2 = s_b_11_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_11_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_11_4);
    /* execute.simd:6240 [F] s_b_11_6 = constant u64 0 (const) */
    /* execute.simd:6240 [F] s_b_11_7: WriteRegBank 3:s_b_11_2 = s_b_11_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_11_8: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_2,  */
  fixed_block_b_12: 
  {
    /* execute.simd:3724 [D] s_b_12_0 = sym_87228_3_parameter_addr uint64_t */
    auto s_b_12_0 = emitter.load_local(DV_sym_87228_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_12_1 = Load 2 s_b_12_0 => sym_87238_0_value */
    auto s_b_12_1 = emitter.load_memory(s_b_12_0, emitter.context().types().u16());
    emitter.store_local(DV_sym_87238_0_value, s_b_12_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_12_0, s_b_12_1, emitter.const_u8(2));
    }
    /* execute.simd:3725 [F] s_b_12_2=sym_14482_3_parameter_inst.rt (const) */
    /* execute.simd:3725 [D] s_b_12_3 = sym_87238_0_value uint16_t */
    auto s_b_12_3 = emitter.load_local(DV_sym_87238_0_value, emitter.context().types().u16());
    /* execute.simd:6232 [D] s_b_12_4 = (u64)s_b_12_3 */
    auto s_b_12_4 = emitter.zx(s_b_12_3, emitter.context().types().u64());
    /* execute.simd:6232 [D] s_b_12_5: WriteRegBank 2:s_b_12_2 = s_b_12_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_12_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_12_4);
    /* execute.simd:6233 [F] s_b_12_6 = constant u64 0 (const) */
    /* execute.simd:6233 [F] s_b_12_7: WriteRegBank 3:s_b_12_2 = s_b_12_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_12_8: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_2,  */
  fixed_block_b_13: 
  {
    /* execute.simd:3738 [D] s_b_13_0 = sym_87228_3_parameter_addr uint64_t */
    auto s_b_13_0 = emitter.load_local(DV_sym_87228_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_13_1 = Load 8 s_b_13_0 => sym_87252_0_value */
    auto s_b_13_1 = emitter.load_memory(s_b_13_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_87252_0_value, s_b_13_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_13_0, s_b_13_1, emitter.const_u8(8));
    }
    /* execute.simd:3739 [F] s_b_13_2=sym_14482_3_parameter_inst.rt (const) */
    /* execute.simd:3739 [D] s_b_13_3 = sym_87252_0_value uint64_t */
    auto s_b_13_3 = emitter.load_local(DV_sym_87252_0_value, emitter.context().types().u64());
    /* execute.simd:6246 [D] s_b_13_4: WriteRegBank 2:s_b_13_2 = s_b_13_3 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_13_3,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_13_3);
    /* execute.simd:6247 [F] s_b_13_5 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_13_6: WriteRegBank 3:s_b_13_2 = s_b_13_5 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_13_7: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_2,  */
  fixed_block_b_14: 
  {
    /* execute.simd:3746 [D] s_b_14_0 = sym_87228_3_parameter_addr uint64_t */
    auto s_b_14_0 = emitter.load_local(DV_sym_87228_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_14_1 = Load 8 s_b_14_0 => sym_87259_0_vl */
    auto s_b_14_1 = emitter.load_memory(s_b_14_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_87259_0_vl, s_b_14_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_14_0, s_b_14_1, emitter.const_u8(8));
    }
    /* execute.simd:3747 [F] s_b_14_2 = constant u64 8 (const) */
    /* execute.simd:3747 [D] s_b_14_3 = s_b_14_0+s_b_14_2 */
    auto s_b_14_3 = emitter.add(s_b_14_0, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [D] s_b_14_4 = Load 8 s_b_14_3 => sym_87265_0_vh */
    auto s_b_14_4 = emitter.load_memory(s_b_14_3, emitter.context().types().u64());
    emitter.store_local(DV_sym_87265_0_vh, s_b_14_4);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_14_3, s_b_14_4, emitter.const_u8(8));
    }
    /* execute.simd:3748 [F] s_b_14_5=sym_14482_3_parameter_inst.rt (const) */
    /* execute.simd:3748 [D] s_b_14_6 = sym_87259_0_vl uint64_t */
    auto s_b_14_6 = emitter.load_local(DV_sym_87259_0_vl, emitter.context().types().u64());
    /* execute.simd:3748 [D] s_b_14_7 = sym_87265_0_vh uint64_t */
    auto s_b_14_7 = emitter.load_local(DV_sym_87265_0_vh, emitter.context().types().u64());
    /* execute.simd:6253 [D] s_b_14_8: WriteRegBank 2:s_b_14_5 = s_b_14_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_14_6,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_14_6);
    /* execute.simd:6254 [D] s_b_14_9: WriteRegBank 3:s_b_14_5 = s_b_14_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),s_b_14_7,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),s_b_14_7);
    /* execute.simd:0 [F] s_b_14_10: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_2, b_10, b_11, b_12, b_13, b_14,  */
  fixed_block_b_15: 
  {
    /* execute.simd:734 [F] s_b_15_0 = sym_87160_3_parameter_size (const) uint8_t */
    uint8_t s_b_15_0 = CV_sym_87160_3_parameter_size;
    /* execute.simd:734 [D] s_b_15_1 = sym_87171_3_parameter_addr uint64_t */
    auto s_b_15_1 = emitter.load_local(DV_sym_87171_3_parameter_addr, emitter.context().types().u64());
    /* execute.simd:734 [F] s_b_15_2 = sym_87166_0_offset (const) uint8_t */
    uint8_t s_b_15_2 = CV_sym_87166_0_offset;
    /* execute.simd:734 [F] s_b_15_3 = (u64)s_b_15_2 (const) */
    /* execute.simd:734 [D] s_b_15_4 = s_b_15_1+s_b_15_3 */
    auto s_b_15_4 = emitter.add(s_b_15_1, emitter.const_u64(((uint64_t)s_b_15_2)));
    /* execute.simd:734 [D] s_b_15_5: sym_87378_3_parameter_addr = s_b_15_4, dominates: s_b_16_0 s_b_20_0 s_b_19_0 s_b_18_0 s_b_17_0  */
    emitter.store_local(DV_sym_87378_3_parameter_addr, s_b_15_4);
    /* execute.simd:3714 [F] s_b_15_6 = constant s32 0 (const) */
    /* execute.simd:3721 [F] s_b_15_7 = constant s32 1 (const) */
    /* execute.simd:3728 [F] s_b_15_8 = constant s32 2 (const) */
    /* execute.simd:3735 [F] s_b_15_9 = constant s32 3 (const) */
    /* execute.simd:3742 [F] s_b_15_10 = constant s32 4 (const) */
    /* execute.simd:3713 [F] s_b_15_11: Switch s_b_15_0: < <todo> > def b_8 (const) -> b_8, b_16, b_20, b_19, b_18, b_17,  */
    switch (s_b_15_0) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_16;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_18;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_19;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_17;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_20;
      break;
    default:
      goto fixed_block_b_8;
    }
  }
  /* b_15,  */
  fixed_block_b_16: 
  {
    /* execute.simd:3717 [D] s_b_16_0 = sym_87378_3_parameter_addr uint64_t */
    auto s_b_16_0 = emitter.load_local(DV_sym_87378_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_16_1 = Load 1 s_b_16_0 => sym_87380_0_value */
    auto s_b_16_1 = emitter.load_memory(s_b_16_0, emitter.context().types().u8());
    emitter.store_local(DV_sym_87380_0_value, s_b_16_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_16_0, s_b_16_1, emitter.const_u8(1));
    }
    /* execute.simd:3718 [F] s_b_16_2=sym_14482_3_parameter_inst.rt2 (const) */
    /* execute.simd:3718 [D] s_b_16_3 = sym_87380_0_value uint8_t */
    auto s_b_16_3 = emitter.load_local(DV_sym_87380_0_value, emitter.context().types().u8());
    /* execute.simd:6225 [D] s_b_16_4 = (u64)s_b_16_3 */
    auto s_b_16_4 = emitter.zx(s_b_16_3, emitter.context().types().u64());
    /* execute.simd:6225 [D] s_b_16_5: WriteRegBank 2:s_b_16_2 = s_b_16_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_16_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_16_4);
    /* execute.simd:6226 [F] s_b_16_6 = constant u64 0 (const) */
    /* execute.simd:6226 [F] s_b_16_7: WriteRegBank 3:s_b_16_2 = s_b_16_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_16_8: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_15,  */
  fixed_block_b_17: 
  {
    /* execute.simd:3731 [D] s_b_17_0 = sym_87378_3_parameter_addr uint64_t */
    auto s_b_17_0 = emitter.load_local(DV_sym_87378_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_17_1 = Load 4 s_b_17_0 => sym_87395_0_value */
    auto s_b_17_1 = emitter.load_memory(s_b_17_0, emitter.context().types().u32());
    emitter.store_local(DV_sym_87395_0_value, s_b_17_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_17_0, s_b_17_1, emitter.const_u8(4));
    }
    /* execute.simd:3732 [F] s_b_17_2=sym_14482_3_parameter_inst.rt2 (const) */
    /* execute.simd:3732 [D] s_b_17_3 = sym_87395_0_value uint32_t */
    auto s_b_17_3 = emitter.load_local(DV_sym_87395_0_value, emitter.context().types().u32());
    /* execute.simd:6239 [D] s_b_17_4 = (u64)s_b_17_3 */
    auto s_b_17_4 = emitter.zx(s_b_17_3, emitter.context().types().u64());
    /* execute.simd:6239 [D] s_b_17_5: WriteRegBank 2:s_b_17_2 = s_b_17_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_17_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_17_4);
    /* execute.simd:6240 [F] s_b_17_6 = constant u64 0 (const) */
    /* execute.simd:6240 [F] s_b_17_7: WriteRegBank 3:s_b_17_2 = s_b_17_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_17_8: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_15,  */
  fixed_block_b_18: 
  {
    /* execute.simd:3724 [D] s_b_18_0 = sym_87378_3_parameter_addr uint64_t */
    auto s_b_18_0 = emitter.load_local(DV_sym_87378_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_18_1 = Load 2 s_b_18_0 => sym_87388_0_value */
    auto s_b_18_1 = emitter.load_memory(s_b_18_0, emitter.context().types().u16());
    emitter.store_local(DV_sym_87388_0_value, s_b_18_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_18_0, s_b_18_1, emitter.const_u8(2));
    }
    /* execute.simd:3725 [F] s_b_18_2=sym_14482_3_parameter_inst.rt2 (const) */
    /* execute.simd:3725 [D] s_b_18_3 = sym_87388_0_value uint16_t */
    auto s_b_18_3 = emitter.load_local(DV_sym_87388_0_value, emitter.context().types().u16());
    /* execute.simd:6232 [D] s_b_18_4 = (u64)s_b_18_3 */
    auto s_b_18_4 = emitter.zx(s_b_18_3, emitter.context().types().u64());
    /* execute.simd:6232 [D] s_b_18_5: WriteRegBank 2:s_b_18_2 = s_b_18_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_18_4,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_18_4);
    /* execute.simd:6233 [F] s_b_18_6 = constant u64 0 (const) */
    /* execute.simd:6233 [F] s_b_18_7: WriteRegBank 3:s_b_18_2 = s_b_18_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_18_8: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_15,  */
  fixed_block_b_19: 
  {
    /* execute.simd:3738 [D] s_b_19_0 = sym_87378_3_parameter_addr uint64_t */
    auto s_b_19_0 = emitter.load_local(DV_sym_87378_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_19_1 = Load 8 s_b_19_0 => sym_87402_0_value */
    auto s_b_19_1 = emitter.load_memory(s_b_19_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_87402_0_value, s_b_19_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_19_0, s_b_19_1, emitter.const_u8(8));
    }
    /* execute.simd:3739 [F] s_b_19_2=sym_14482_3_parameter_inst.rt2 (const) */
    /* execute.simd:3739 [D] s_b_19_3 = sym_87402_0_value uint64_t */
    auto s_b_19_3 = emitter.load_local(DV_sym_87402_0_value, emitter.context().types().u64());
    /* execute.simd:6246 [D] s_b_19_4: WriteRegBank 2:s_b_19_2 = s_b_19_3 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_19_3,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_19_3);
    /* execute.simd:6247 [F] s_b_19_5 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_19_6: WriteRegBank 3:s_b_19_2 = s_b_19_5 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_19_7: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_15,  */
  fixed_block_b_20: 
  {
    /* execute.simd:3746 [D] s_b_20_0 = sym_87378_3_parameter_addr uint64_t */
    auto s_b_20_0 = emitter.load_local(DV_sym_87378_3_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_20_1 = Load 8 s_b_20_0 => sym_87409_0_vl */
    auto s_b_20_1 = emitter.load_memory(s_b_20_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_87409_0_vl, s_b_20_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_20_0, s_b_20_1, emitter.const_u8(8));
    }
    /* execute.simd:3747 [F] s_b_20_2 = constant u64 8 (const) */
    /* execute.simd:3747 [D] s_b_20_3 = s_b_20_0+s_b_20_2 */
    auto s_b_20_3 = emitter.add(s_b_20_0, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [D] s_b_20_4 = Load 8 s_b_20_3 => sym_87415_0_vh */
    auto s_b_20_4 = emitter.load_memory(s_b_20_3, emitter.context().types().u64());
    emitter.store_local(DV_sym_87415_0_vh, s_b_20_4);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_20_3, s_b_20_4, emitter.const_u8(8));
    }
    /* execute.simd:3748 [F] s_b_20_5=sym_14482_3_parameter_inst.rt2 (const) */
    /* execute.simd:3748 [D] s_b_20_6 = sym_87409_0_vl uint64_t */
    auto s_b_20_6 = emitter.load_local(DV_sym_87409_0_vl, emitter.context().types().u64());
    /* execute.simd:3748 [D] s_b_20_7 = sym_87415_0_vh uint64_t */
    auto s_b_20_7 = emitter.load_local(DV_sym_87415_0_vh, emitter.context().types().u64());
    /* execute.simd:6253 [D] s_b_20_8: WriteRegBank 2:s_b_20_5 = s_b_20_6 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_20_6,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_20_6);
    /* execute.simd:6254 [D] s_b_20_9: WriteRegBank 3:s_b_20_5 = s_b_20_7 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),s_b_20_7,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),s_b_20_7);
    /* execute.simd:0 [F] s_b_20_10: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ldr_reg(const aarch64_decode_a64_LS_REG_REG_OFF&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_96092_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  uint8_t CV_sym_15049_0_shift;
  uint64_t CV_sym_15076_0_rm;
  auto DV_sym_15076_0_rm = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_15174_0_address = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_15186_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_15190_0_v32 = emitter.alloc_local(emitter.context().types().u32(), false);
  auto DV_sym_95518_1__R_s_b_2_5 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_96136_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_96034_1__R_s_b_37_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_96158_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_95990_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:1182 [F] s_b_0_0=sym_15038_3_parameter_inst.S (const) */
    /* execute.a64:1182 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:1182 [F] s_b_0_2 = constant u32 0 (const) */
    /* execute.a64:1182 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.S) == (uint32_t)0ULL));
    /* execute.a64:1182 [F] s_b_0_4 = constant u8 0 (const) */
    /* execute.a64:1182 [F] s_b_0_5=sym_15038_3_parameter_inst.size (const) */
    /* execute.a64:1182 [F] s_b_0_6 = (u8)s_b_0_5 (const) */
    /* execute.a64:1182 [F] s_b_0_7: Select s_b_0_3 ? s_b_0_4 : s_b_0_6 (const) */
    uint8_t s_b_0_7 = ((uint8_t)(s_b_0_3 ? ((uint8_t)0ULL) : (((uint8_t)insn.size))));
    /* execute.a64:1182 [F] s_b_0_8: sym_15049_0_shift = s_b_0_7 (const), dominates: s_b_1_1 s_b_4_1 s_b_6_1 s_b_8_1  */
    CV_sym_15049_0_shift = s_b_0_7;
    /* execute.a64:1185 [F] s_b_0_9=sym_15038_3_parameter_inst.option0 (const) */
    /* execute.a64:1185 [F] s_b_0_10 = (u32)s_b_0_9 (const) */
    /* execute.a64:1185 [F] s_b_0_11 = constant u32 0 (const) */
    /* execute.a64:1185 [F] s_b_0_12 = s_b_0_10==s_b_0_11 (const) */
    uint8_t s_b_0_12 = ((uint8_t)(((uint32_t)insn.option0) == (uint32_t)0ULL));
    /* execute.a64:1185 [F] s_b_0_13=sym_15038_3_parameter_inst.option21 (const) */
    /* execute.a64:1185 [F] s_b_0_14 = (u32)s_b_0_13 (const) */
    /* execute.a64:1185 [F] s_b_0_15 = constant u32 1 (const) */
    /* execute.a64:1185 [F] s_b_0_16 = s_b_0_14==s_b_0_15 (const) */
    uint8_t s_b_0_16 = ((uint8_t)(((uint32_t)insn.option21) == (uint32_t)1ULL));
    /* ???:4294967295 [F] s_b_0_17 = constant u8 0 (const) */
    /* ???:4294967295 [F] s_b_0_18 = s_b_0_12!=s_b_0_17 (const) */
    uint8_t s_b_0_18 = ((uint8_t)(s_b_0_12 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_0_19 = s_b_0_16!=s_b_0_17 (const) */
    uint8_t s_b_0_19 = ((uint8_t)(s_b_0_16 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_0_20 = s_b_0_18&s_b_0_19 (const) */
    uint8_t s_b_0_20 = ((uint8_t)(s_b_0_18 & s_b_0_19));
    /* execute.a64:1185 [F] s_b_0_21: If s_b_0_20: Jump b_1 else b_3 (const) */
    if (s_b_0_20) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:1186 [F] s_b_1_0=sym_15038_3_parameter_inst.rm (const) */
    /* execute.a64:1186 [F] s_b_1_1 = sym_15049_0_shift (const) uint8_t */
    uint8_t s_b_1_1 = CV_sym_15049_0_shift;
    /* execute.a64:2646 [F] s_b_1_2 = (u32)s_b_1_0 (const) */
    /* execute.a64:2646 [F] s_b_1_3 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_1_4 = s_b_1_2==s_b_1_3 (const) */
    uint8_t s_b_1_4 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_1_5 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_1_6 = ReadRegBank 1:s_b_1_0 (u32) */
    auto s_b_1_6 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_1_6,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_1_7: Select s_b_1_4 ? s_b_1_5 : s_b_1_6 */
    dbt::el::Value *s_b_1_7;
    s_b_1_7 = (s_b_1_4) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_1_6);
    /* execute.a64:2659 [D] s_b_1_8 = (u64)s_b_1_7 */
    auto s_b_1_8 = emitter.zx(s_b_1_7, emitter.context().types().u64());
    /* execute.a64:2616 [D] s_b_1_9 = (u32)s_b_1_8 */
    auto s_b_1_9 = emitter.truncate(s_b_1_8, emitter.context().types().u32());
    /* execute.a64:2616 [D] s_b_1_10 = (u64)s_b_1_9 */
    auto s_b_1_10 = emitter.zx(s_b_1_9, emitter.context().types().u64());
    /* execute.a64:2616 [F] s_b_1_11 = (u64)s_b_1_1 (const) */
    /* execute.a64:2616 [D] s_b_1_12 = s_b_1_10<<s_b_1_11 */
    auto s_b_1_12 = emitter.shl(s_b_1_10, emitter.const_u64(((uint64_t)s_b_1_1)));
    /* execute.a64:1186 [D] s_b_1_13: sym_15076_0_rm = s_b_1_12, dominates: s_b_17_1  */
    emitter.store_local(DV_sym_15076_0_rm, s_b_1_12);
    /* execute.a64:1186 [F] s_b_1_14: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_4, b_6, b_8, b_9,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2730 [F] s_b_2_0=sym_15038_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_2_1 = (u32)s_b_2_0 (const) */
    /* execute.a64:2730 [F] s_b_2_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_2_3 = s_b_2_1==s_b_2_2 (const) */
    uint8_t s_b_2_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_2_4: If s_b_2_3: Jump b_20 else b_16 (const) */
    if (s_b_2_3) 
    {
      goto fixed_block_b_20;
    }
    else 
    {
      goto fixed_block_b_16;
    }
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.a64:1187 [F] s_b_3_0=sym_15038_3_parameter_inst.option0 (const) */
    /* execute.a64:1187 [F] s_b_3_1 = (u32)s_b_3_0 (const) */
    /* execute.a64:1187 [F] s_b_3_2 = constant u32 0 (const) */
    /* execute.a64:1187 [F] s_b_3_3 = s_b_3_1==s_b_3_2 (const) */
    uint8_t s_b_3_3 = ((uint8_t)(((uint32_t)insn.option0) == (uint32_t)0ULL));
    /* execute.a64:1187 [F] s_b_3_4=sym_15038_3_parameter_inst.option21 (const) */
    /* execute.a64:1187 [F] s_b_3_5 = (u32)s_b_3_4 (const) */
    /* execute.a64:1187 [F] s_b_3_6 = constant u32 3 (const) */
    /* execute.a64:1187 [F] s_b_3_7 = s_b_3_5==s_b_3_6 (const) */
    uint8_t s_b_3_7 = ((uint8_t)(((uint32_t)insn.option21) == (uint32_t)3ULL));
    /* ???:4294967295 [F] s_b_3_8 = constant u8 0 (const) */
    /* ???:4294967295 [F] s_b_3_9 = s_b_3_3!=s_b_3_8 (const) */
    uint8_t s_b_3_9 = ((uint8_t)(s_b_3_3 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_3_10 = s_b_3_7!=s_b_3_8 (const) */
    uint8_t s_b_3_10 = ((uint8_t)(s_b_3_7 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_3_11 = s_b_3_9&s_b_3_10 (const) */
    uint8_t s_b_3_11 = ((uint8_t)(s_b_3_9 & s_b_3_10));
    /* execute.a64:1187 [F] s_b_3_12: If s_b_3_11: Jump b_4 else b_5 (const) */
    if (s_b_3_11) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_3,  */
  fixed_block_b_4: 
  {
    /* execute.a64:1188 [F] s_b_4_0=sym_15038_3_parameter_inst.rm (const) */
    /* execute.a64:1188 [F] s_b_4_1 = sym_15049_0_shift (const) uint8_t */
    uint8_t s_b_4_1 = CV_sym_15049_0_shift;
    /* execute.a64:2646 [F] s_b_4_2 = (u32)s_b_4_0 (const) */
    /* execute.a64:2646 [F] s_b_4_3 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_4_4 = s_b_4_2==s_b_4_3 (const) */
    uint8_t s_b_4_4 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_4_5 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_4_6 = ReadRegBank 1:s_b_4_0 (u32) */
    auto s_b_4_6 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_4_6,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_4_7: Select s_b_4_4 ? s_b_4_5 : s_b_4_6 */
    dbt::el::Value *s_b_4_7;
    s_b_4_7 = (s_b_4_4) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_4_6);
    /* execute.a64:2659 [D] s_b_4_8 = (u64)s_b_4_7 */
    auto s_b_4_8 = emitter.zx(s_b_4_7, emitter.context().types().u64());
    /* execute.a64:2632 [D] s_b_4_9 = (s32)s_b_4_8 */
    auto s_b_4_9 = emitter.truncate(s_b_4_8, emitter.context().types().s32());
    /* execute.a64:2632 [D] s_b_4_10 = (s64)s_b_4_9 */
    auto s_b_4_10 = emitter.sx(s_b_4_9, emitter.context().types().s64());
    /* execute.a64:2632 [D] s_b_4_11 = (u64)s_b_4_10 */
    auto s_b_4_11 = emitter.reinterpret(s_b_4_10, emitter.context().types().u64());
    /* execute.a64:2632 [F] s_b_4_12 = (u64)s_b_4_1 (const) */
    /* execute.a64:2632 [D] s_b_4_13 = s_b_4_11<<s_b_4_12 */
    auto s_b_4_13 = emitter.shl(s_b_4_11, emitter.const_u64(((uint64_t)s_b_4_1)));
    /* execute.a64:1188 [D] s_b_4_14: sym_15076_0_rm = s_b_4_13, dominates: s_b_17_1  */
    emitter.store_local(DV_sym_15076_0_rm, s_b_4_13);
    /* execute.a64:1188 [F] s_b_4_15: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_5: 
  {
    /* execute.a64:1189 [F] s_b_5_0=sym_15038_3_parameter_inst.option0 (const) */
    /* execute.a64:1189 [F] s_b_5_1 = (u32)s_b_5_0 (const) */
    /* execute.a64:1189 [F] s_b_5_2 = constant u32 1 (const) */
    /* execute.a64:1189 [F] s_b_5_3 = s_b_5_1==s_b_5_2 (const) */
    uint8_t s_b_5_3 = ((uint8_t)(((uint32_t)insn.option0) == (uint32_t)1ULL));
    /* execute.a64:1189 [F] s_b_5_4=sym_15038_3_parameter_inst.option21 (const) */
    /* execute.a64:1189 [F] s_b_5_5 = (u32)s_b_5_4 (const) */
    /* execute.a64:1189 [F] s_b_5_6 = constant u32 1 (const) */
    /* execute.a64:1189 [F] s_b_5_7 = s_b_5_5==s_b_5_6 (const) */
    uint8_t s_b_5_7 = ((uint8_t)(((uint32_t)insn.option21) == (uint32_t)1ULL));
    /* ???:4294967295 [F] s_b_5_8 = constant u8 0 (const) */
    /* ???:4294967295 [F] s_b_5_9 = s_b_5_3!=s_b_5_8 (const) */
    uint8_t s_b_5_9 = ((uint8_t)(s_b_5_3 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_5_10 = s_b_5_7!=s_b_5_8 (const) */
    uint8_t s_b_5_10 = ((uint8_t)(s_b_5_7 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_5_11 = s_b_5_9&s_b_5_10 (const) */
    uint8_t s_b_5_11 = ((uint8_t)(s_b_5_9 & s_b_5_10));
    /* execute.a64:1189 [F] s_b_5_12: If s_b_5_11: Jump b_6 else b_7 (const) */
    if (s_b_5_11) 
    {
      goto fixed_block_b_6;
    }
    else 
    {
      goto fixed_block_b_7;
    }
  }
  /* b_5,  */
  fixed_block_b_6: 
  {
    /* execute.a64:1190 [F] s_b_6_0=sym_15038_3_parameter_inst.rm (const) */
    /* execute.a64:1190 [F] s_b_6_1 = sym_15049_0_shift (const) uint8_t */
    uint8_t s_b_6_1 = CV_sym_15049_0_shift;
    /* execute.a64:2651 [F] s_b_6_2 = (u32)s_b_6_0 (const) */
    /* execute.a64:2651 [F] s_b_6_3 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_6_4 = s_b_6_2==s_b_6_3 (const) */
    uint8_t s_b_6_4 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_6_5 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_6_6 = ReadRegBank 0:s_b_6_0 (u64) */
    auto s_b_6_6 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_6_6,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_6_7: Select s_b_6_4 ? s_b_6_5 : s_b_6_6 */
    dbt::el::Value *s_b_6_7;
    s_b_6_7 = (s_b_6_4) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_6_6);
    /* execute.a64:2620 [F] s_b_6_8 = (u64)s_b_6_1 (const) */
    /* execute.a64:2620 [D] s_b_6_9 = s_b_6_7<<s_b_6_8 */
    auto s_b_6_9 = emitter.shl(s_b_6_7, emitter.const_u64(((uint64_t)s_b_6_1)));
    /* execute.a64:1190 [D] s_b_6_10: sym_15076_0_rm = s_b_6_9, dominates: s_b_17_1  */
    emitter.store_local(DV_sym_15076_0_rm, s_b_6_9);
    /* execute.a64:1190 [F] s_b_6_11: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_5,  */
  fixed_block_b_7: 
  {
    /* execute.a64:1191 [F] s_b_7_0=sym_15038_3_parameter_inst.option0 (const) */
    /* execute.a64:1191 [F] s_b_7_1 = (u32)s_b_7_0 (const) */
    /* execute.a64:1191 [F] s_b_7_2 = constant u32 1 (const) */
    /* execute.a64:1191 [F] s_b_7_3 = s_b_7_1==s_b_7_2 (const) */
    uint8_t s_b_7_3 = ((uint8_t)(((uint32_t)insn.option0) == (uint32_t)1ULL));
    /* execute.a64:1191 [F] s_b_7_4=sym_15038_3_parameter_inst.option21 (const) */
    /* execute.a64:1191 [F] s_b_7_5 = (u32)s_b_7_4 (const) */
    /* execute.a64:1191 [F] s_b_7_6 = constant u32 3 (const) */
    /* execute.a64:1191 [F] s_b_7_7 = s_b_7_5==s_b_7_6 (const) */
    uint8_t s_b_7_7 = ((uint8_t)(((uint32_t)insn.option21) == (uint32_t)3ULL));
    /* ???:4294967295 [F] s_b_7_8 = constant u8 0 (const) */
    /* ???:4294967295 [F] s_b_7_9 = s_b_7_3!=s_b_7_8 (const) */
    uint8_t s_b_7_9 = ((uint8_t)(s_b_7_3 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_7_10 = s_b_7_7!=s_b_7_8 (const) */
    uint8_t s_b_7_10 = ((uint8_t)(s_b_7_7 != (uint8_t)0ULL));
    /* ???:4294967295 [F] s_b_7_11 = s_b_7_9&s_b_7_10 (const) */
    uint8_t s_b_7_11 = ((uint8_t)(s_b_7_9 & s_b_7_10));
    /* execute.a64:1191 [F] s_b_7_12: If s_b_7_11: Jump b_8 else b_9 (const) */
    if (s_b_7_11) 
    {
      goto fixed_block_b_8;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_7,  */
  fixed_block_b_8: 
  {
    /* execute.a64:1192 [F] s_b_8_0=sym_15038_3_parameter_inst.rm (const) */
    /* execute.a64:1192 [F] s_b_8_1 = sym_15049_0_shift (const) uint8_t */
    uint8_t s_b_8_1 = CV_sym_15049_0_shift;
    /* execute.a64:2651 [F] s_b_8_2 = (u32)s_b_8_0 (const) */
    /* execute.a64:2651 [F] s_b_8_3 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_8_4 = s_b_8_2==s_b_8_3 (const) */
    uint8_t s_b_8_4 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_8_5 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_8_6 = ReadRegBank 0:s_b_8_0 (u64) */
    auto s_b_8_6 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_8_6,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_8_7: Select s_b_8_4 ? s_b_8_5 : s_b_8_6 */
    dbt::el::Value *s_b_8_7;
    s_b_8_7 = (s_b_8_4) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_8_6);
    /* execute.a64:2636 [F] s_b_8_8 = (u64)s_b_8_1 (const) */
    /* execute.a64:2636 [D] s_b_8_9 = s_b_8_7<<s_b_8_8 */
    auto s_b_8_9 = emitter.shl(s_b_8_7, emitter.const_u64(((uint64_t)s_b_8_1)));
    /* execute.a64:1192 [D] s_b_8_10: sym_15076_0_rm = s_b_8_9, dominates: s_b_17_1  */
    emitter.store_local(DV_sym_15076_0_rm, s_b_8_9);
    /* execute.a64:1192 [F] s_b_8_11: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_7,  */
  fixed_block_b_9: 
  {
    /* execute.a64:1194 [F] s_b_9_0 = constant u64 0 (const) */
    /* execute.a64:1194 [F] s_b_9_1: sym_15076_0_rm = s_b_9_0 (const), dominates: s_b_17_1  */
    CV_sym_15076_0_rm = (uint64_t)0ULL;
    emitter.store_local(DV_sym_15076_0_rm, emitter.const_u64((uint64_t)0ULL));
    /* execute.a64:1195 [D] s_b_9_2 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.a64:1194 [F] s_b_9_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_17,  */
  fixed_block_b_10: 
  {
    /* execute.a64:1202 [D] s_b_10_0 = sym_15174_0_address uint64_t */
    auto s_b_10_0 = emitter.load_local(DV_sym_15174_0_address, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_10_1 = Load 8 s_b_10_0 => sym_15186_0_value */
    auto s_b_10_1 = emitter.load_memory(s_b_10_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_15186_0_value, s_b_10_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_10_0, s_b_10_1, emitter.const_u8(8));
    }
    /* execute.a64:1202 [F] s_b_10_2: Jump b_11 (const) */
    goto fixed_block_b_11;
  }
  /* b_10, b_12,  */
  fixed_block_b_11: 
  {
    /* execute.a64:1210 [F] s_b_11_0=sym_15038_3_parameter_inst.X (const) */
    /* execute.a64:1210 [F] s_b_11_1 = (u32)s_b_11_0 (const) */
    /* execute.a64:1210 [F] s_b_11_2 = constant u32 1 (const) */
    /* execute.a64:1210 [F] s_b_11_3 = s_b_11_1==s_b_11_2 (const) */
    uint8_t s_b_11_3 = ((uint8_t)(((uint32_t)insn.X) == (uint32_t)1ULL));
    /* execute.a64:1210 [F] s_b_11_4: If s_b_11_3: Jump b_13 else b_15 (const) */
    if (s_b_11_3) 
    {
      goto fixed_block_b_13;
    }
    else 
    {
      goto fixed_block_b_15;
    }
  }
  /* b_17,  */
  fixed_block_b_12: 
  {
    /* execute.a64:1205 [D] s_b_12_0 = sym_15174_0_address uint64_t */
    auto s_b_12_0 = emitter.load_local(DV_sym_15174_0_address, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_12_1 = Load 4 s_b_12_0 => sym_15190_0_v32 */
    auto s_b_12_1 = emitter.load_memory(s_b_12_0, emitter.context().types().u32());
    emitter.store_local(DV_sym_15190_0_v32, s_b_12_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_12_0, s_b_12_1, emitter.const_u8(4));
    }
    /* execute.a64:1207 [D] s_b_12_2 = sym_15190_0_v32 uint32_t */
    auto s_b_12_2 = emitter.load_local(DV_sym_15190_0_v32, emitter.context().types().u32());
    /* execute.a64:1207 [D] s_b_12_3 = (u64)s_b_12_2 */
    auto s_b_12_3 = emitter.zx(s_b_12_2, emitter.context().types().u64());
    /* execute.a64:1207 [D] s_b_12_4: sym_15186_0_value = s_b_12_3, dominates: s_b_13_0 s_b_15_4  */
    emitter.store_local(DV_sym_15186_0_value, s_b_12_3);
    /* execute.a64:1204 [F] s_b_12_5: Jump b_11 (const) */
    goto fixed_block_b_11;
  }
  /* b_11,  */
  fixed_block_b_13: 
  {
    /* execute.a64:1211 [D] s_b_13_0 = sym_15186_0_value uint64_t */
    auto s_b_13_0 = emitter.load_local(DV_sym_15186_0_value, emitter.context().types().u64());
    /* execute.a64:1211 [D] s_b_13_1 = (s32)s_b_13_0 */
    auto s_b_13_1 = emitter.truncate(s_b_13_0, emitter.context().types().s32());
    /* execute.a64:1211 [D] s_b_13_2 = (s64)s_b_13_1 */
    auto s_b_13_2 = emitter.sx(s_b_13_1, emitter.context().types().s64());
    /* execute.a64:1211 [D] s_b_13_3 = (u64)s_b_13_2 */
    auto s_b_13_3 = emitter.reinterpret(s_b_13_2, emitter.context().types().u64());
    /* execute.a64:2691 [F] s_b_13_4=sym_15038_3_parameter_inst.rt (const) */
    /* execute.a64:2691 [D] s_b_13_5: sym_96092_3_parameter_value = s_b_13_3, dominates: s_b_25_1  */
    emitter.store_local(DV_sym_96092_3_parameter_value, s_b_13_3);
    /* execute.a64:2682 [F] s_b_13_6 = (u32)s_b_13_4 (const) */
    /* execute.a64:2682 [F] s_b_13_7 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_13_8 = s_b_13_6==s_b_13_7 (const) */
    uint8_t s_b_13_8 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_13_9: If s_b_13_8: Jump b_14 else b_25 (const) */
    if (s_b_13_8) 
    {
      goto fixed_block_b_14;
    }
    else 
    {
      goto fixed_block_b_25;
    }
  }
  /* b_13, b_18, b_19, b_25, b_26, b_27,  */
  fixed_block_b_14: 
  {
    /* ???:4294967295 [F] s_b_14_0: Return */
    goto fixed_done;
  }
  /* b_11,  */
  fixed_block_b_15: 
  {
    /* execute.a64:1213 [F] s_b_15_0=sym_15038_3_parameter_inst.size (const) */
    /* execute.a64:1213 [F] s_b_15_1 = (u32)s_b_15_0 (const) */
    /* execute.a64:1213 [F] s_b_15_2 = constant u32 3 (const) */
    /* execute.a64:1213 [F] s_b_15_3 = s_b_15_1==s_b_15_2 (const) */
    uint8_t s_b_15_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1213 [D] s_b_15_4 = sym_15186_0_value uint64_t */
    auto s_b_15_4 = emitter.load_local(DV_sym_15186_0_value, emitter.context().types().u64());
    /* execute.a64:1213 [D] s_b_15_5: sym_95990_3_parameter_value = s_b_15_4, dominates: s_b_18_1 s_b_19_1  */
    emitter.store_local(DV_sym_95990_3_parameter_value, s_b_15_4);
    /* execute.a64:2690 [F] s_b_15_6: If s_b_15_3: Jump b_18 else b_19 (const) */
    if (s_b_15_3) 
    {
      goto fixed_block_b_18;
    }
    else 
    {
      goto fixed_block_b_19;
    }
  }
  /* b_2,  */
  fixed_block_b_16: 
  {
    /* execute.a64:2733 [F] s_b_16_0=sym_15038_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_16_1 = ReadRegBank 0:s_b_16_0 (u64) */
    auto s_b_16_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_16_1,emitter.const_u8(8));
    }
    /* execute.a64:2733 [D] s_b_16_2: sym_95518_1__R_s_b_2_5 = s_b_16_1, dominates: s_b_17_0  */
    emitter.store_local(DV_sym_95518_1__R_s_b_2_5, s_b_16_1);
    /* execute.a64:2733 [F] s_b_16_3: Jump b_17 (const) */
    goto fixed_block_b_17;
  }
  /* b_16, b_24,  */
  fixed_block_b_17: 
  {
    /* execute.a64:1198 [D] s_b_17_0 = sym_95518_1__R_s_b_2_5 uint64_t */
    auto s_b_17_0 = emitter.load_local(DV_sym_95518_1__R_s_b_2_5, emitter.context().types().u64());
    /* execute.a64:1198 [D] s_b_17_1 = sym_15076_0_rm uint64_t */
    auto s_b_17_1 = emitter.load_local(DV_sym_15076_0_rm, emitter.context().types().u64());
    /* execute.a64:1198 [D] s_b_17_2 = s_b_17_0+s_b_17_1 */
    auto s_b_17_2 = emitter.add(s_b_17_0, s_b_17_1);
    /* execute.a64:1198 [D] s_b_17_3: sym_15174_0_address = s_b_17_2, dominates: s_b_10_0 s_b_12_0  */
    emitter.store_local(DV_sym_15174_0_address, s_b_17_2);
    /* execute.a64:1201 [F] s_b_17_4=sym_15038_3_parameter_inst.size (const) */
    /* execute.a64:1201 [F] s_b_17_5 = (u32)s_b_17_4 (const) */
    /* execute.a64:1201 [F] s_b_17_6 = constant u32 3 (const) */
    /* execute.a64:1201 [F] s_b_17_7 = s_b_17_5==s_b_17_6 (const) */
    uint8_t s_b_17_7 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1201 [F] s_b_17_8: If s_b_17_7: Jump b_10 else b_12 (const) */
    if (s_b_17_7) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_12;
    }
  }
  /* b_15,  */
  fixed_block_b_18: 
  {
    /* execute.a64:2691 [F] s_b_18_0=sym_15038_3_parameter_inst.rt (const) */
    /* execute.a64:2691 [D] s_b_18_1 = sym_95990_3_parameter_value uint64_t */
    auto s_b_18_1 = emitter.load_local(DV_sym_95990_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2691 [D] s_b_18_2: sym_96136_3_parameter_value = s_b_18_1, dominates: s_b_26_1  */
    emitter.store_local(DV_sym_96136_3_parameter_value, s_b_18_1);
    /* execute.a64:2682 [F] s_b_18_3 = (u32)s_b_18_0 (const) */
    /* execute.a64:2682 [F] s_b_18_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_18_5 = s_b_18_3==s_b_18_4 (const) */
    uint8_t s_b_18_5 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_18_6: If s_b_18_5: Jump b_14 else b_26 (const) */
    if (s_b_18_5) 
    {
      goto fixed_block_b_14;
    }
    else 
    {
      goto fixed_block_b_26;
    }
  }
  /* b_15,  */
  fixed_block_b_19: 
  {
    /* execute.a64:2693 [F] s_b_19_0=sym_15038_3_parameter_inst.rt (const) */
    /* execute.a64:2693 [D] s_b_19_1 = sym_95990_3_parameter_value uint64_t */
    auto s_b_19_1 = emitter.load_local(DV_sym_95990_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_19_2 = (u32)s_b_19_1 */
    auto s_b_19_2 = emitter.truncate(s_b_19_1, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_19_3 = (u64)s_b_19_2 */
    auto s_b_19_3 = emitter.zx(s_b_19_2, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_19_4: sym_96158_3_parameter_value = s_b_19_3, dominates: s_b_27_1  */
    emitter.store_local(DV_sym_96158_3_parameter_value, s_b_19_3);
    /* execute.a64:2682 [F] s_b_19_5 = (u32)s_b_19_0 (const) */
    /* execute.a64:2682 [F] s_b_19_6 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_19_7 = s_b_19_5==s_b_19_6 (const) */
    uint8_t s_b_19_7 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_19_8: If s_b_19_7: Jump b_14 else b_27 (const) */
    if (s_b_19_7) 
    {
      goto fixed_block_b_14;
    }
    else 
    {
      goto fixed_block_b_27;
    }
  }
  /* b_2,  */
  fixed_block_b_20: 
  {
    /* execute.a64:2701 [F] s_b_20_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_20_1 = __builtin_get_feature */
    uint32_t s_b_20_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_20_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_20_3 = s_b_20_1==s_b_20_2 (const) */
    uint8_t s_b_20_3 = ((uint8_t)(s_b_20_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_20_4: If s_b_20_3: Jump b_21 else b_28 (const) */
    if (s_b_20_3) 
    {
      goto fixed_block_b_21;
    }
    else 
    {
      goto fixed_block_b_28;
    }
  }
  /* b_20,  */
  fixed_block_b_21: 
  {
    /* execute.a64:2702 [D] s_b_21_0 = ReadReg 20 (u64) */
    auto s_b_21_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_21_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_21_1: sym_96034_1__R_s_b_37_0 = s_b_21_0, dominates: s_b_24_0  */
    emitter.store_local(DV_sym_96034_1__R_s_b_37_0, s_b_21_0);
    /* execute.a64:2702 [F] s_b_21_2: Jump b_24 (const) */
    goto fixed_block_b_24;
  }
  /* b_28,  */
  fixed_block_b_22: 
  {
    /* execute.a64:2705 [D] s_b_22_0 = ReadReg 20 (u64) */
    auto s_b_22_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_22_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_22_1: sym_96034_1__R_s_b_37_0 = s_b_22_0, dominates: s_b_24_0  */
    emitter.store_local(DV_sym_96034_1__R_s_b_37_0, s_b_22_0);
    /* execute.a64:2705 [F] s_b_22_2: Jump b_24 (const) */
    goto fixed_block_b_24;
  }
  /* b_28,  */
  fixed_block_b_23: 
  {
    /* execute.a64:2707 [D] s_b_23_0 = ReadReg 21 (u64) */
    auto s_b_23_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_23_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_23_1: sym_96034_1__R_s_b_37_0 = s_b_23_0, dominates: s_b_24_0  */
    emitter.store_local(DV_sym_96034_1__R_s_b_37_0, s_b_23_0);
    /* execute.a64:2707 [F] s_b_23_2: Jump b_24 (const) */
    goto fixed_block_b_24;
  }
  /* b_21, b_22, b_23,  */
  fixed_block_b_24: 
  {
    /* execute.a64:2731 [D] s_b_24_0 = sym_96034_1__R_s_b_37_0 uint64_t */
    auto s_b_24_0 = emitter.load_local(DV_sym_96034_1__R_s_b_37_0, emitter.context().types().u64());
    /* execute.a64:2731 [D] s_b_24_1: sym_95518_1__R_s_b_2_5 = s_b_24_0, dominates: s_b_17_0  */
    emitter.store_local(DV_sym_95518_1__R_s_b_2_5, s_b_24_0);
    /* execute.a64:2731 [F] s_b_24_2: Jump b_17 (const) */
    goto fixed_block_b_17;
  }
  /* b_13,  */
  fixed_block_b_25: 
  {
    /* execute.a64:2684 [F] s_b_25_0=sym_15038_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_25_1 = sym_96092_3_parameter_value uint64_t */
    auto s_b_25_1 = emitter.load_local(DV_sym_96092_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_25_2: WriteRegBank 0:s_b_25_0 = s_b_25_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_25_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_25_1);
    /* execute.a64:0 [F] s_b_25_3: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_18,  */
  fixed_block_b_26: 
  {
    /* execute.a64:2684 [F] s_b_26_0=sym_15038_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_26_1 = sym_96136_3_parameter_value uint64_t */
    auto s_b_26_1 = emitter.load_local(DV_sym_96136_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_26_2: WriteRegBank 0:s_b_26_0 = s_b_26_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_26_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_26_1);
    /* execute.a64:0 [F] s_b_26_3: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_19,  */
  fixed_block_b_27: 
  {
    /* execute.a64:2684 [F] s_b_27_0=sym_15038_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_27_1 = sym_96158_3_parameter_value uint64_t */
    auto s_b_27_1 = emitter.load_local(DV_sym_96158_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_27_2: WriteRegBank 0:s_b_27_0 = s_b_27_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_27_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_27_1);
    /* execute.a64:0 [F] s_b_27_3: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_20,  */
  fixed_block_b_28: 
  {
    /* execute.a64:3012 [F] s_b_28_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_28_1 = __builtin_get_feature */
    uint32_t s_b_28_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_28_2 = (u8)s_b_28_1 (const) */
    /* execute.a64:2704 [F] s_b_28_3 = (u32)s_b_28_2 (const) */
    /* execute.a64:2704 [F] s_b_28_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_28_5 = s_b_28_3==s_b_28_4 (const) */
    uint8_t s_b_28_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_28_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_28_6: If s_b_28_5: Jump b_22 else b_23 (const) */
    if (s_b_28_5) 
    {
      goto fixed_block_b_22;
    }
    else 
    {
      goto fixed_block_b_23;
    }
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ldri(const aarch64_decode_a64_LS_REG_UIMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_107837_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_107815_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_107693_1__R_s_b_0_5 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_107713_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_107757_1__R_s_b_10_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_16110_0_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  uint64_t CV_sym_16122_0_value;
  auto DV_sym_16122_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_16135_0_v2 = emitter.alloc_local(emitter.context().types().u32(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2730 [F] s_b_0_0=sym_16102_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_11 else b_6 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_11;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_7,  */
  fixed_block_b_1: 
  {
    /* execute.a64:1462 [D] s_b_1_0 = sym_16110_0_addr uint64_t */
    auto s_b_1_0 = emitter.load_local(DV_sym_16110_0_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_1_1 = Load 8 s_b_1_0 => sym_16122_0_value */
    auto s_b_1_1 = emitter.load_memory(s_b_1_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_16122_0_value, s_b_1_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_1_0, s_b_1_1, emitter.const_u8(8));
    }
    /* execute.a64:1462 [F] s_b_1_2: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_4, b_5,  */
  fixed_block_b_2: 
  {
    /* execute.a64:1473 [F] s_b_2_0=sym_16102_3_parameter_inst.size (const) */
    /* execute.a64:1473 [F] s_b_2_1 = (u32)s_b_2_0 (const) */
    /* execute.a64:1473 [F] s_b_2_2 = constant u32 3 (const) */
    /* execute.a64:1473 [F] s_b_2_3 = s_b_2_1==s_b_2_2 (const) */
    uint8_t s_b_2_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1473 [D] s_b_2_4 = sym_16122_0_value uint64_t */
    auto s_b_2_4 = emitter.load_local(DV_sym_16122_0_value, emitter.context().types().u64());
    /* execute.a64:1473 [D] s_b_2_5: sym_107713_3_parameter_value = s_b_2_4, dominates: s_b_8_1 s_b_9_1  */
    emitter.store_local(DV_sym_107713_3_parameter_value, s_b_2_4);
    /* execute.a64:2690 [F] s_b_2_6: If s_b_2_3: Jump b_8 else b_9 (const) */
    if (s_b_2_3) 
    {
      goto fixed_block_b_8;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_7,  */
  fixed_block_b_3: 
  {
    /* execute.a64:1463 [F] s_b_3_0=sym_16102_3_parameter_inst.size (const) */
    /* execute.a64:1463 [F] s_b_3_1 = (u32)s_b_3_0 (const) */
    /* execute.a64:1463 [F] s_b_3_2 = constant u32 2 (const) */
    /* execute.a64:1463 [F] s_b_3_3 = s_b_3_1==s_b_3_2 (const) */
    uint8_t s_b_3_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)2ULL));
    /* execute.a64:1463 [F] s_b_3_4: If s_b_3_3: Jump b_4 else b_5 (const) */
    if (s_b_3_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_3,  */
  fixed_block_b_4: 
  {
    /* execute.a64:1465 [D] s_b_4_0 = sym_16110_0_addr uint64_t */
    auto s_b_4_0 = emitter.load_local(DV_sym_16110_0_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_4_1 = Load 4 s_b_4_0 => sym_16135_0_v2 */
    auto s_b_4_1 = emitter.load_memory(s_b_4_0, emitter.context().types().u32());
    emitter.store_local(DV_sym_16135_0_v2, s_b_4_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_4_0, s_b_4_1, emitter.const_u8(4));
    }
    /* execute.a64:1467 [D] s_b_4_2 = sym_16135_0_v2 uint32_t */
    auto s_b_4_2 = emitter.load_local(DV_sym_16135_0_v2, emitter.context().types().u32());
    /* execute.a64:1467 [D] s_b_4_3 = (u64)s_b_4_2 */
    auto s_b_4_3 = emitter.zx(s_b_4_2, emitter.context().types().u64());
    /* execute.a64:1467 [D] s_b_4_4: sym_16122_0_value = s_b_4_3, dominates: s_b_2_4  */
    emitter.store_local(DV_sym_16122_0_value, s_b_4_3);
    /* execute.a64:1464 [F] s_b_4_5: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_3,  */
  fixed_block_b_5: 
  {
    /* execute.a64:1469 [F] s_b_5_0 = constant u64 0 (const) */
    /* execute.a64:1469 [F] s_b_5_1: sym_16122_0_value = s_b_5_0 (const), dominates: s_b_2_4  */
    CV_sym_16122_0_value = (uint64_t)0ULL;
    emitter.store_local(DV_sym_16122_0_value, emitter.const_u64((uint64_t)0ULL));
    /* execute.a64:1470 [D] s_b_5_2 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.a64:1469 [F] s_b_5_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_0,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2733 [F] s_b_6_0=sym_16102_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_6_1 = ReadRegBank 0:s_b_6_0 (u64) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* execute.a64:2733 [D] s_b_6_2: sym_107693_1__R_s_b_0_5 = s_b_6_1, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_107693_1__R_s_b_0_5, s_b_6_1);
    /* execute.a64:2733 [F] s_b_6_3: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_6, b_15,  */
  fixed_block_b_7: 
  {
    /* execute.a64:1458 [D] s_b_7_0 = sym_107693_1__R_s_b_0_5 uint64_t */
    auto s_b_7_0 = emitter.load_local(DV_sym_107693_1__R_s_b_0_5, emitter.context().types().u64());
    /* execute.a64:1458 [F] s_b_7_1=sym_16102_3_parameter_inst.immu64 (const) */
    /* execute.a64:1458 [D] s_b_7_2 = s_b_7_0+s_b_7_1 */
    auto s_b_7_2 = emitter.add(s_b_7_0, emitter.const_u64(insn.immu64));
    /* execute.a64:1458 [D] s_b_7_3: sym_16110_0_addr = s_b_7_2, dominates: s_b_1_0 s_b_4_0  */
    emitter.store_local(DV_sym_16110_0_addr, s_b_7_2);
    /* execute.a64:1461 [F] s_b_7_4=sym_16102_3_parameter_inst.size (const) */
    /* execute.a64:1461 [F] s_b_7_5 = (u32)s_b_7_4 (const) */
    /* execute.a64:1461 [F] s_b_7_6 = constant u32 3 (const) */
    /* execute.a64:1461 [F] s_b_7_7 = s_b_7_5==s_b_7_6 (const) */
    uint8_t s_b_7_7 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1461 [F] s_b_7_8: If s_b_7_7: Jump b_1 else b_3 (const) */
    if (s_b_7_7) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_2,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2691 [F] s_b_8_0=sym_16102_3_parameter_inst.rt (const) */
    /* execute.a64:2691 [D] s_b_8_1 = sym_107713_3_parameter_value uint64_t */
    auto s_b_8_1 = emitter.load_local(DV_sym_107713_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2691 [D] s_b_8_2: sym_107815_3_parameter_value = s_b_8_1, dominates: s_b_16_1  */
    emitter.store_local(DV_sym_107815_3_parameter_value, s_b_8_1);
    /* execute.a64:2682 [F] s_b_8_3 = (u32)s_b_8_0 (const) */
    /* execute.a64:2682 [F] s_b_8_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_8_5 = s_b_8_3==s_b_8_4 (const) */
    uint8_t s_b_8_5 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_8_6: If s_b_8_5: Jump b_10 else b_16 (const) */
    if (s_b_8_5) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_16;
    }
  }
  /* b_2,  */
  fixed_block_b_9: 
  {
    /* execute.a64:2693 [F] s_b_9_0=sym_16102_3_parameter_inst.rt (const) */
    /* execute.a64:2693 [D] s_b_9_1 = sym_107713_3_parameter_value uint64_t */
    auto s_b_9_1 = emitter.load_local(DV_sym_107713_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_9_2 = (u32)s_b_9_1 */
    auto s_b_9_2 = emitter.truncate(s_b_9_1, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_9_3 = (u64)s_b_9_2 */
    auto s_b_9_3 = emitter.zx(s_b_9_2, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_9_4: sym_107837_3_parameter_value = s_b_9_3, dominates: s_b_17_1  */
    emitter.store_local(DV_sym_107837_3_parameter_value, s_b_9_3);
    /* execute.a64:2682 [F] s_b_9_5 = (u32)s_b_9_0 (const) */
    /* execute.a64:2682 [F] s_b_9_6 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_9_7 = s_b_9_5==s_b_9_6 (const) */
    uint8_t s_b_9_7 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_9_8: If s_b_9_7: Jump b_10 else b_17 (const) */
    if (s_b_9_7) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_17;
    }
  }
  /* b_8, b_9, b_16, b_17,  */
  fixed_block_b_10: 
  {
    /* ???:4294967295 [F] s_b_10_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2701 [F] s_b_11_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_11_1 = __builtin_get_feature */
    uint32_t s_b_11_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_11_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_11_3 = s_b_11_1==s_b_11_2 (const) */
    uint8_t s_b_11_3 = ((uint8_t)(s_b_11_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_11_4: If s_b_11_3: Jump b_12 else b_18 (const) */
    if (s_b_11_3) 
    {
      goto fixed_block_b_12;
    }
    else 
    {
      goto fixed_block_b_18;
    }
  }
  /* b_11,  */
  fixed_block_b_12: 
  {
    /* execute.a64:2702 [D] s_b_12_0 = ReadReg 20 (u64) */
    auto s_b_12_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_12_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_12_1: sym_107757_1__R_s_b_10_0 = s_b_12_0, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_107757_1__R_s_b_10_0, s_b_12_0);
    /* execute.a64:2702 [F] s_b_12_2: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_18,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2705 [D] s_b_13_0 = ReadReg 20 (u64) */
    auto s_b_13_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_13_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_13_1: sym_107757_1__R_s_b_10_0 = s_b_13_0, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_107757_1__R_s_b_10_0, s_b_13_0);
    /* execute.a64:2705 [F] s_b_13_2: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_18,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2707 [D] s_b_14_0 = ReadReg 21 (u64) */
    auto s_b_14_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_14_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_14_1: sym_107757_1__R_s_b_10_0 = s_b_14_0, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_107757_1__R_s_b_10_0, s_b_14_0);
    /* execute.a64:2707 [F] s_b_14_2: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_12, b_13, b_14,  */
  fixed_block_b_15: 
  {
    /* execute.a64:2731 [D] s_b_15_0 = sym_107757_1__R_s_b_10_0 uint64_t */
    auto s_b_15_0 = emitter.load_local(DV_sym_107757_1__R_s_b_10_0, emitter.context().types().u64());
    /* execute.a64:2731 [D] s_b_15_1: sym_107693_1__R_s_b_0_5 = s_b_15_0, dominates: s_b_7_0  */
    emitter.store_local(DV_sym_107693_1__R_s_b_0_5, s_b_15_0);
    /* execute.a64:2731 [F] s_b_15_2: Jump b_7 (const) */
    goto fixed_block_b_7;
  }
  /* b_8,  */
  fixed_block_b_16: 
  {
    /* execute.a64:2684 [F] s_b_16_0=sym_16102_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_16_1 = sym_107815_3_parameter_value uint64_t */
    auto s_b_16_1 = emitter.load_local(DV_sym_107815_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_16_2: WriteRegBank 0:s_b_16_0 = s_b_16_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_16_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_16_1);
    /* execute.a64:0 [F] s_b_16_3: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_9,  */
  fixed_block_b_17: 
  {
    /* execute.a64:2684 [F] s_b_17_0=sym_16102_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_17_1 = sym_107837_3_parameter_value uint64_t */
    auto s_b_17_1 = emitter.load_local(DV_sym_107837_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_17_2: WriteRegBank 0:s_b_17_0 = s_b_17_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_17_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_17_1);
    /* execute.a64:0 [F] s_b_17_3: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_11,  */
  fixed_block_b_18: 
  {
    /* execute.a64:3012 [F] s_b_18_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_18_1 = __builtin_get_feature */
    uint32_t s_b_18_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_18_2 = (u8)s_b_18_1 (const) */
    /* execute.a64:2704 [F] s_b_18_3 = (u32)s_b_18_2 (const) */
    /* execute.a64:2704 [F] s_b_18_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_18_5 = s_b_18_3==s_b_18_4 (const) */
    uint8_t s_b_18_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_18_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_18_6: If s_b_18_5: Jump b_13 else b_14 (const) */
    if (s_b_18_5) 
    {
      goto fixed_block_b_13;
    }
    else 
    {
      goto fixed_block_b_14;
    }
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ldur(const aarch64_decode_a64_LS_REG_USIMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_16258_0_address = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_16275_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_16279_0_v32 = emitter.alloc_local(emitter.context().types().u32(), false);
  auto DV_sym_109552_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_109596_1__R_s_b_7_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_109532_1__R_s_b_0_5 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_109654_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_109676_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2730 [F] s_b_0_0=sym_16252_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_9 else b_4 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_9;
    }
    else 
    {
      goto fixed_block_b_4;
    }
  }
  /* b_5,  */
  fixed_block_b_1: 
  {
    /* execute.a64:1367 [D] s_b_1_0 = sym_16258_0_address uint64_t */
    auto s_b_1_0 = emitter.load_local(DV_sym_16258_0_address, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_1_1 = Load 8 s_b_1_0 => sym_16275_0_value */
    auto s_b_1_1 = emitter.load_memory(s_b_1_0, emitter.context().types().u64());
    emitter.store_local(DV_sym_16275_0_value, s_b_1_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_1_0, s_b_1_1, emitter.const_u8(8));
    }
    /* execute.a64:1367 [F] s_b_1_2: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* execute.a64:1374 [F] s_b_2_0=sym_16252_3_parameter_inst.size (const) */
    /* execute.a64:1374 [F] s_b_2_1 = (u32)s_b_2_0 (const) */
    /* execute.a64:1374 [F] s_b_2_2 = constant u32 3 (const) */
    /* execute.a64:1374 [F] s_b_2_3 = s_b_2_1==s_b_2_2 (const) */
    uint8_t s_b_2_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1374 [D] s_b_2_4 = sym_16275_0_value uint64_t */
    auto s_b_2_4 = emitter.load_local(DV_sym_16275_0_value, emitter.context().types().u64());
    /* execute.a64:1374 [D] s_b_2_5: sym_109552_3_parameter_value = s_b_2_4, dominates: s_b_6_1 s_b_7_1  */
    emitter.store_local(DV_sym_109552_3_parameter_value, s_b_2_4);
    /* execute.a64:2690 [F] s_b_2_6: If s_b_2_3: Jump b_6 else b_7 (const) */
    if (s_b_2_3) 
    {
      goto fixed_block_b_6;
    }
    else 
    {
      goto fixed_block_b_7;
    }
  }
  /* b_5,  */
  fixed_block_b_3: 
  {
    /* execute.a64:1370 [D] s_b_3_0 = sym_16258_0_address uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_16258_0_address, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_1 = Load 4 s_b_3_0 => sym_16279_0_v32 */
    auto s_b_3_1 = emitter.load_memory(s_b_3_0, emitter.context().types().u32());
    emitter.store_local(DV_sym_16279_0_v32, s_b_3_1);
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_MEMORY, s_b_3_0, s_b_3_1, emitter.const_u8(4));
    }
    /* execute.a64:1371 [D] s_b_3_2 = sym_16279_0_v32 uint32_t */
    auto s_b_3_2 = emitter.load_local(DV_sym_16279_0_v32, emitter.context().types().u32());
    /* execute.a64:1371 [D] s_b_3_3 = (u64)s_b_3_2 */
    auto s_b_3_3 = emitter.zx(s_b_3_2, emitter.context().types().u64());
    /* execute.a64:1371 [D] s_b_3_4: sym_16275_0_value = s_b_3_3, dominates: s_b_2_4  */
    emitter.store_local(DV_sym_16275_0_value, s_b_3_3);
    /* execute.a64:1369 [F] s_b_3_5: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2733 [F] s_b_4_0=sym_16252_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_4_1 = ReadRegBank 0:s_b_4_0 (u64) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_4_1,emitter.const_u8(8));
    }
    /* execute.a64:2733 [D] s_b_4_2: sym_109532_1__R_s_b_0_5 = s_b_4_1, dominates: s_b_5_0  */
    emitter.store_local(DV_sym_109532_1__R_s_b_0_5, s_b_4_1);
    /* execute.a64:2733 [F] s_b_4_3: Jump b_5 (const) */
    goto fixed_block_b_5;
  }
  /* b_4, b_13,  */
  fixed_block_b_5: 
  {
    /* execute.a64:1362 [D] s_b_5_0 = sym_109532_1__R_s_b_0_5 uint64_t */
    auto s_b_5_0 = emitter.load_local(DV_sym_109532_1__R_s_b_0_5, emitter.context().types().u64());
    /* execute.a64:1362 [D] s_b_5_1: sym_16258_0_address = s_b_5_0, dominates:  */
    emitter.store_local(DV_sym_16258_0_address, s_b_5_0);
    /* execute.a64:1363 [F] s_b_5_2=sym_16252_3_parameter_inst.imms64 (const) */
    /* ???:4294967295 [F] s_b_5_3 = (u64)s_b_5_2 (const) */
    /* ???:4294967295 [D] s_b_5_4 = s_b_5_0+s_b_5_3 */
    auto s_b_5_4 = emitter.add(s_b_5_0, emitter.const_u64(((uint64_t)insn.imms64)));
    /* execute.a64:1363 [D] s_b_5_5: sym_16258_0_address = s_b_5_4, dominates: s_b_1_0 s_b_3_0  */
    emitter.store_local(DV_sym_16258_0_address, s_b_5_4);
    /* execute.a64:1366 [F] s_b_5_6=sym_16252_3_parameter_inst.size (const) */
    /* execute.a64:1366 [F] s_b_5_7 = (u32)s_b_5_6 (const) */
    /* execute.a64:1366 [F] s_b_5_8 = constant u32 3 (const) */
    /* execute.a64:1366 [F] s_b_5_9 = s_b_5_7==s_b_5_8 (const) */
    uint8_t s_b_5_9 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1366 [F] s_b_5_10: If s_b_5_9: Jump b_1 else b_3 (const) */
    if (s_b_5_9) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_2,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2691 [F] s_b_6_0=sym_16252_3_parameter_inst.rt (const) */
    /* execute.a64:2691 [D] s_b_6_1 = sym_109552_3_parameter_value uint64_t */
    auto s_b_6_1 = emitter.load_local(DV_sym_109552_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2691 [D] s_b_6_2: sym_109654_3_parameter_value = s_b_6_1, dominates: s_b_14_1  */
    emitter.store_local(DV_sym_109654_3_parameter_value, s_b_6_1);
    /* execute.a64:2682 [F] s_b_6_3 = (u32)s_b_6_0 (const) */
    /* execute.a64:2682 [F] s_b_6_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_6_5 = s_b_6_3==s_b_6_4 (const) */
    uint8_t s_b_6_5 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_6_6: If s_b_6_5: Jump b_8 else b_14 (const) */
    if (s_b_6_5) 
    {
      goto fixed_block_b_8;
    }
    else 
    {
      goto fixed_block_b_14;
    }
  }
  /* b_2,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2693 [F] s_b_7_0=sym_16252_3_parameter_inst.rt (const) */
    /* execute.a64:2693 [D] s_b_7_1 = sym_109552_3_parameter_value uint64_t */
    auto s_b_7_1 = emitter.load_local(DV_sym_109552_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_7_2 = (u32)s_b_7_1 */
    auto s_b_7_2 = emitter.truncate(s_b_7_1, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_7_3 = (u64)s_b_7_2 */
    auto s_b_7_3 = emitter.zx(s_b_7_2, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_7_4: sym_109676_3_parameter_value = s_b_7_3, dominates: s_b_15_1  */
    emitter.store_local(DV_sym_109676_3_parameter_value, s_b_7_3);
    /* execute.a64:2682 [F] s_b_7_5 = (u32)s_b_7_0 (const) */
    /* execute.a64:2682 [F] s_b_7_6 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_7_7 = s_b_7_5==s_b_7_6 (const) */
    uint8_t s_b_7_7 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_7_8: If s_b_7_7: Jump b_8 else b_15 (const) */
    if (s_b_7_7) 
    {
      goto fixed_block_b_8;
    }
    else 
    {
      goto fixed_block_b_15;
    }
  }
  /* b_6, b_7, b_14, b_15,  */
  fixed_block_b_8: 
  {
    /* ???:4294967295 [F] s_b_8_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_9: 
  {
    /* execute.a64:2701 [F] s_b_9_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_9_1 = __builtin_get_feature */
    uint32_t s_b_9_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_9_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_9_3 = s_b_9_1==s_b_9_2 (const) */
    uint8_t s_b_9_3 = ((uint8_t)(s_b_9_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_9_4: If s_b_9_3: Jump b_10 else b_16 (const) */
    if (s_b_9_3) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_16;
    }
  }
  /* b_9,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2702 [D] s_b_10_0 = ReadReg 20 (u64) */
    auto s_b_10_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_10_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_10_1: sym_109596_1__R_s_b_7_0 = s_b_10_0, dominates: s_b_13_0  */
    emitter.store_local(DV_sym_109596_1__R_s_b_7_0, s_b_10_0);
    /* execute.a64:2702 [F] s_b_10_2: Jump b_13 (const) */
    goto fixed_block_b_13;
  }
  /* b_16,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2705 [D] s_b_11_0 = ReadReg 20 (u64) */
    auto s_b_11_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_11_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_11_1: sym_109596_1__R_s_b_7_0 = s_b_11_0, dominates: s_b_13_0  */
    emitter.store_local(DV_sym_109596_1__R_s_b_7_0, s_b_11_0);
    /* execute.a64:2705 [F] s_b_11_2: Jump b_13 (const) */
    goto fixed_block_b_13;
  }
  /* b_16,  */
  fixed_block_b_12: 
  {
    /* execute.a64:2707 [D] s_b_12_0 = ReadReg 21 (u64) */
    auto s_b_12_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_12_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_12_1: sym_109596_1__R_s_b_7_0 = s_b_12_0, dominates: s_b_13_0  */
    emitter.store_local(DV_sym_109596_1__R_s_b_7_0, s_b_12_0);
    /* execute.a64:2707 [F] s_b_12_2: Jump b_13 (const) */
    goto fixed_block_b_13;
  }
  /* b_10, b_11, b_12,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2731 [D] s_b_13_0 = sym_109596_1__R_s_b_7_0 uint64_t */
    auto s_b_13_0 = emitter.load_local(DV_sym_109596_1__R_s_b_7_0, emitter.context().types().u64());
    /* execute.a64:2731 [D] s_b_13_1: sym_109532_1__R_s_b_0_5 = s_b_13_0, dominates: s_b_5_0  */
    emitter.store_local(DV_sym_109532_1__R_s_b_0_5, s_b_13_0);
    /* execute.a64:2731 [F] s_b_13_2: Jump b_5 (const) */
    goto fixed_block_b_5;
  }
  /* b_6,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2684 [F] s_b_14_0=sym_16252_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_14_1 = sym_109654_3_parameter_value uint64_t */
    auto s_b_14_1 = emitter.load_local(DV_sym_109654_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_14_2: WriteRegBank 0:s_b_14_0 = s_b_14_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_14_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_14_1);
    /* execute.a64:0 [F] s_b_14_3: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_7,  */
  fixed_block_b_15: 
  {
    /* execute.a64:2684 [F] s_b_15_0=sym_16252_3_parameter_inst.rt (const) */
    /* execute.a64:2684 [D] s_b_15_1 = sym_109676_3_parameter_value uint64_t */
    auto s_b_15_1 = emitter.load_local(DV_sym_109676_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_15_2: WriteRegBank 0:s_b_15_0 = s_b_15_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_15_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_15_1);
    /* execute.a64:0 [F] s_b_15_3: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_9,  */
  fixed_block_b_16: 
  {
    /* execute.a64:3012 [F] s_b_16_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_16_1 = __builtin_get_feature */
    uint32_t s_b_16_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_16_2 = (u8)s_b_16_1 (const) */
    /* execute.a64:2704 [F] s_b_16_3 = (u32)s_b_16_2 (const) */
    /* execute.a64:2704 [F] s_b_16_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_16_5 = s_b_16_3==s_b_16_4 (const) */
    uint8_t s_b_16_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_16_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_16_6: If s_b_16_5: Jump b_11 else b_12 (const) */
    if (s_b_16_5) 
    {
      goto fixed_block_b_11;
    }
    else 
    {
      goto fixed_block_b_12;
    }
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_lslv(const aarch64_decode_a64_DP_2S&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_16630_0_amount = emitter.alloc_local(emitter.context().types().u8(), false);
  auto DV_sym_120396_1__R_s_b_0_4 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_120571_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_120519_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_120549_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_120421_1__R_s_b_2_6 = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2281 [F] s_b_0_0=sym_16625_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_0_1: If s_b_0_0: Jump b_4 else b_5 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_6,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2283 [D] s_b_1_0 = sym_16630_0_amount uint8_t */
    auto s_b_1_0 = emitter.load_local(DV_sym_16630_0_amount, emitter.context().types().u8());
    /* ???:4294967295 [D] s_b_1_1 = (u64)s_b_1_0 */
    auto s_b_1_1 = emitter.zx(s_b_1_0, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_1_2 = constant u64 3f (const) */
    /* ???:4294967295 [D] s_b_1_3 = s_b_1_1&s_b_1_2 */
    auto s_b_1_3 = emitter.bitwise_and(s_b_1_1, emitter.const_u64((uint64_t)63ULL));
    /* execute.a64:2283 [D] s_b_1_4 = (u8)s_b_1_3 */
    auto s_b_1_4 = emitter.truncate(s_b_1_3, emitter.context().types().u8());
    /* execute.a64:2283 [D] s_b_1_5: sym_16630_0_amount = s_b_1_4, dominates: s_b_9_2  */
    emitter.store_local(DV_sym_16630_0_amount, s_b_1_4);
    /* execute.a64:2283 [F] s_b_1_6: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2288 [F] s_b_2_0=sym_16625_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_2_1: If s_b_2_0: Jump b_7 else b_8 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_6,  */
  fixed_block_b_3: 
  {
    /* execute.a64:2285 [D] s_b_3_0 = sym_16630_0_amount uint8_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_16630_0_amount, emitter.context().types().u8());
    /* ???:4294967295 [D] s_b_3_1 = (u64)s_b_3_0 */
    auto s_b_3_1 = emitter.zx(s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_3_2 = constant u64 1f (const) */
    /* ???:4294967295 [D] s_b_3_3 = s_b_3_1&s_b_3_2 */
    auto s_b_3_3 = emitter.bitwise_and(s_b_3_1, emitter.const_u64((uint64_t)31ULL));
    /* execute.a64:2285 [D] s_b_3_4 = (u8)s_b_3_3 */
    auto s_b_3_4 = emitter.truncate(s_b_3_3, emitter.context().types().u8());
    /* execute.a64:2285 [D] s_b_3_5: sym_16630_0_amount = s_b_3_4, dominates: s_b_9_2  */
    emitter.store_local(DV_sym_16630_0_amount, s_b_3_4);
    /* execute.a64:2285 [F] s_b_3_6: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2657 [F] s_b_4_0=sym_16625_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_4_1 = (u32)s_b_4_0 (const) */
    /* execute.a64:2651 [F] s_b_4_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_4_3 = s_b_4_1==s_b_4_2 (const) */
    uint8_t s_b_4_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_4_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_4_5 = ReadRegBank 0:s_b_4_0 (u64) */
    auto s_b_4_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_4_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_4_6: Select s_b_4_3 ? s_b_4_4 : s_b_4_5 */
    dbt::el::Value *s_b_4_6;
    s_b_4_6 = (s_b_4_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_4_5);
    /* execute.a64:2657 [D] s_b_4_7: sym_120396_1__R_s_b_0_4 = s_b_4_6, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_120396_1__R_s_b_0_4, s_b_4_6);
    /* execute.a64:2657 [F] s_b_4_8: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_0,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2659 [F] s_b_5_0=sym_16625_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_5_1 = (u32)s_b_5_0 (const) */
    /* execute.a64:2646 [F] s_b_5_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_5_3 = s_b_5_1==s_b_5_2 (const) */
    uint8_t s_b_5_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_5_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_5_5 = ReadRegBank 1:s_b_5_0 (u32) */
    auto s_b_5_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_5_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_5_6: Select s_b_5_3 ? s_b_5_4 : s_b_5_5 */
    dbt::el::Value *s_b_5_6;
    s_b_5_6 = (s_b_5_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_5_5);
    /* execute.a64:2659 [D] s_b_5_7 = (u64)s_b_5_6 */
    auto s_b_5_7 = emitter.zx(s_b_5_6, emitter.context().types().u64());
    /* execute.a64:2659 [D] s_b_5_8: sym_120396_1__R_s_b_0_4 = s_b_5_7, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_120396_1__R_s_b_0_4, s_b_5_7);
    /* execute.a64:2659 [F] s_b_5_9: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_4, b_5,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2281 [D] s_b_6_0 = sym_120396_1__R_s_b_0_4 uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_120396_1__R_s_b_0_4, emitter.context().types().u64());
    /* execute.a64:2281 [D] s_b_6_1 = (u8)s_b_6_0 */
    auto s_b_6_1 = emitter.truncate(s_b_6_0, emitter.context().types().u8());
    /* execute.a64:2281 [D] s_b_6_2: sym_16630_0_amount = s_b_6_1, dominates: s_b_1_0 s_b_3_0  */
    emitter.store_local(DV_sym_16630_0_amount, s_b_6_1);
    /* execute.a64:2282 [F] s_b_6_3=sym_16625_3_parameter_inst.sf (const) */
    /* execute.a64:2282 [F] s_b_6_4: If s_b_6_3: Jump b_1 else b_3 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_2,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2657 [F] s_b_7_0=sym_16625_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_7_1 = (u32)s_b_7_0 (const) */
    /* execute.a64:2651 [F] s_b_7_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_7_3 = s_b_7_1==s_b_7_2 (const) */
    uint8_t s_b_7_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_7_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_7_5 = ReadRegBank 0:s_b_7_0 (u64) */
    auto s_b_7_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_7_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_7_6: Select s_b_7_3 ? s_b_7_4 : s_b_7_5 */
    dbt::el::Value *s_b_7_6;
    s_b_7_6 = (s_b_7_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_7_5);
    /* execute.a64:2657 [D] s_b_7_7: sym_120421_1__R_s_b_2_6 = s_b_7_6, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_120421_1__R_s_b_2_6, s_b_7_6);
    /* execute.a64:2657 [F] s_b_7_8: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_2,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2659 [F] s_b_8_0=sym_16625_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_8_1 = (u32)s_b_8_0 (const) */
    /* execute.a64:2646 [F] s_b_8_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_8_3 = s_b_8_1==s_b_8_2 (const) */
    uint8_t s_b_8_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_8_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_8_5 = ReadRegBank 1:s_b_8_0 (u32) */
    auto s_b_8_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_8_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_8_6: Select s_b_8_3 ? s_b_8_4 : s_b_8_5 */
    dbt::el::Value *s_b_8_6;
    s_b_8_6 = (s_b_8_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_8_5);
    /* execute.a64:2659 [D] s_b_8_7 = (u64)s_b_8_6 */
    auto s_b_8_7 = emitter.zx(s_b_8_6, emitter.context().types().u64());
    /* execute.a64:2659 [D] s_b_8_8: sym_120421_1__R_s_b_2_6 = s_b_8_7, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_120421_1__R_s_b_2_6, s_b_8_7);
    /* execute.a64:2659 [F] s_b_8_9: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_7, b_8,  */
  fixed_block_b_9: 
  {
    /* ???:4294967295 [F] s_b_9_0=sym_16625_3_parameter_inst.sf (const) */
    /* execute.a64:2288 [D] s_b_9_1 = sym_120421_1__R_s_b_2_6 uint64_t */
    auto s_b_9_1 = emitter.load_local(DV_sym_120421_1__R_s_b_2_6, emitter.context().types().u64());
    /* execute.a64:2288 [D] s_b_9_2 = sym_16630_0_amount uint8_t */
    auto s_b_9_2 = emitter.load_local(DV_sym_16630_0_amount, emitter.context().types().u8());
    /* execute.a64:2288 [D] s_b_9_3 = (u64)s_b_9_2 */
    auto s_b_9_3 = emitter.zx(s_b_9_2, emitter.context().types().u64());
    /* execute.a64:2288 [D] s_b_9_4 = s_b_9_1<<s_b_9_3 */
    auto s_b_9_4 = emitter.shl(s_b_9_1, s_b_9_3);
    /* execute.a64:2288 [D] s_b_9_5: sym_120519_3_parameter_value = s_b_9_4, dominates: s_b_10_1 s_b_11_1  */
    emitter.store_local(DV_sym_120519_3_parameter_value, s_b_9_4);
    /* execute.a64:2690 [F] s_b_9_6: If s_b_9_0: Jump b_10 else b_11 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_11;
    }
  }
  /* b_9,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2691 [F] s_b_10_0=sym_16625_3_parameter_inst.rd (const) */
    /* execute.a64:2691 [D] s_b_10_1 = sym_120519_3_parameter_value uint64_t */
    auto s_b_10_1 = emitter.load_local(DV_sym_120519_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2691 [D] s_b_10_2: sym_120549_3_parameter_value = s_b_10_1, dominates: s_b_13_1  */
    emitter.store_local(DV_sym_120549_3_parameter_value, s_b_10_1);
    /* execute.a64:2682 [F] s_b_10_3 = (u32)s_b_10_0 (const) */
    /* execute.a64:2682 [F] s_b_10_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_10_5 = s_b_10_3==s_b_10_4 (const) */
    uint8_t s_b_10_5 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_10_6: If s_b_10_5: Jump b_12 else b_13 (const) */
    if (s_b_10_5) 
    {
      goto fixed_block_b_12;
    }
    else 
    {
      goto fixed_block_b_13;
    }
  }
  /* b_9,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2693 [F] s_b_11_0=sym_16625_3_parameter_inst.rd (const) */
    /* execute.a64:2693 [D] s_b_11_1 = sym_120519_3_parameter_value uint64_t */
    auto s_b_11_1 = emitter.load_local(DV_sym_120519_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_11_2 = (u32)s_b_11_1 */
    auto s_b_11_2 = emitter.truncate(s_b_11_1, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_11_3 = (u64)s_b_11_2 */
    auto s_b_11_3 = emitter.zx(s_b_11_2, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_11_4: sym_120571_3_parameter_value = s_b_11_3, dominates: s_b_14_1  */
    emitter.store_local(DV_sym_120571_3_parameter_value, s_b_11_3);
    /* execute.a64:2682 [F] s_b_11_5 = (u32)s_b_11_0 (const) */
    /* execute.a64:2682 [F] s_b_11_6 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_11_7 = s_b_11_5==s_b_11_6 (const) */
    uint8_t s_b_11_7 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_11_8: If s_b_11_7: Jump b_12 else b_14 (const) */
    if (s_b_11_7) 
    {
      goto fixed_block_b_12;
    }
    else 
    {
      goto fixed_block_b_14;
    }
  }
  /* b_10, b_11, b_13, b_14,  */
  fixed_block_b_12: 
  {
    /* ???:4294967295 [F] s_b_12_0: Return */
    goto fixed_done;
  }
  /* b_10,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2684 [F] s_b_13_0=sym_16625_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_13_1 = sym_120549_3_parameter_value uint64_t */
    auto s_b_13_1 = emitter.load_local(DV_sym_120549_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_13_2: WriteRegBank 0:s_b_13_0 = s_b_13_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_13_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_13_1);
    /* execute.a64:0 [F] s_b_13_3: Jump b_12 (const) */
    goto fixed_block_b_12;
  }
  /* b_11,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2684 [F] s_b_14_0=sym_16625_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_14_1 = sym_120571_3_parameter_value uint64_t */
    auto s_b_14_1 = emitter.load_local(DV_sym_120571_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_14_2: WriteRegBank 0:s_b_14_0 = s_b_14_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_14_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_14_1);
    /* execute.a64:0 [F] s_b_14_3: Jump b_12 (const) */
    goto fixed_block_b_12;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_movz(const aarch64_decode_a64_MOVE_WIDE_IMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  uint64_t CV_sym_123152_3_parameter_value;
  uint64_t CV_sym_123182_3_parameter_value;
  uint64_t CV_sym_123204_3_parameter_value;
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:250 [F] s_b_0_0=sym_16970_3_parameter_inst.imm16 (const) */
    /* execute.a64:250 [F] s_b_0_1 = (u64)s_b_0_0 (const) */
    /* execute.a64:250 [F] s_b_0_2=sym_16970_3_parameter_inst.shift_amount (const) */
    /* execute.a64:250 [F] s_b_0_3 = (u64)s_b_0_2 (const) */
    /* execute.a64:250 [F] s_b_0_4 = s_b_0_1<<s_b_0_3 (const) */
    uint64_t s_b_0_4 = ((uint64_t)(((uint64_t)insn.imm16) << ((uint64_t)insn.shift_amount)));
    /* execute.a64:251 [F] s_b_0_5=sym_16970_3_parameter_inst.sf (const) */
    /* execute.a64:251 [F] s_b_0_6: sym_123152_3_parameter_value = s_b_0_4 (const), dominates: s_b_1_1 s_b_2_1  */
    CV_sym_123152_3_parameter_value = s_b_0_4;
    /* execute.a64:2690 [F] s_b_0_7: If s_b_0_5: Jump b_1 else b_2 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2691 [F] s_b_1_0=sym_16970_3_parameter_inst.rd (const) */
    /* execute.a64:2691 [F] s_b_1_1 = sym_123152_3_parameter_value (const) uint64_t */
    uint64_t s_b_1_1 = CV_sym_123152_3_parameter_value;
    /* execute.a64:2691 [F] s_b_1_2: sym_123182_3_parameter_value = s_b_1_1 (const), dominates: s_b_4_1  */
    CV_sym_123182_3_parameter_value = s_b_1_1;
    /* execute.a64:2682 [F] s_b_1_3 = (u32)s_b_1_0 (const) */
    /* execute.a64:2682 [F] s_b_1_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_1_5 = s_b_1_3==s_b_1_4 (const) */
    uint8_t s_b_1_5 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_1_6: If s_b_1_5: Jump b_3 else b_4 (const) */
    if (s_b_1_5) 
    {
      goto fixed_block_b_3;
    }
    else 
    {
      goto fixed_block_b_4;
    }
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2693 [F] s_b_2_0=sym_16970_3_parameter_inst.rd (const) */
    /* execute.a64:2693 [F] s_b_2_1 = sym_123152_3_parameter_value (const) uint64_t */
    uint64_t s_b_2_1 = CV_sym_123152_3_parameter_value;
    /* execute.a64:2693 [F] s_b_2_2 = (u32)s_b_2_1 (const) */
    /* execute.a64:2693 [F] s_b_2_3 = (u64)s_b_2_2 (const) */
    /* execute.a64:2693 [F] s_b_2_4: sym_123204_3_parameter_value = s_b_2_3 (const), dominates: s_b_5_1  */
    CV_sym_123204_3_parameter_value = ((uint64_t)((uint32_t)s_b_2_1));
    /* execute.a64:2682 [F] s_b_2_5 = (u32)s_b_2_0 (const) */
    /* execute.a64:2682 [F] s_b_2_6 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_2_7 = s_b_2_5==s_b_2_6 (const) */
    uint8_t s_b_2_7 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_2_8: If s_b_2_7: Jump b_3 else b_5 (const) */
    if (s_b_2_7) 
    {
      goto fixed_block_b_3;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_1, b_2, b_4, b_5,  */
  fixed_block_b_3: 
  {
    /* ???:4294967295 [F] s_b_3_0: Return */
    goto fixed_done;
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2684 [F] s_b_4_0=sym_16970_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [F] s_b_4_1 = sym_123182_3_parameter_value (const) uint64_t */
    uint64_t s_b_4_1 = CV_sym_123182_3_parameter_value;
    /* execute.a64:2684 [F] s_b_4_2: WriteRegBank 0:s_b_4_0 = s_b_4_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64(s_b_4_1),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64(s_b_4_1));
    /* execute.a64:0 [F] s_b_4_3: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_2,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2684 [F] s_b_5_0=sym_16970_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [F] s_b_5_1 = sym_123204_3_parameter_value (const) uint64_t */
    uint64_t s_b_5_1 = CV_sym_123204_3_parameter_value;
    /* execute.a64:2684 [F] s_b_5_2: WriteRegBank 0:s_b_5_0 = s_b_5_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64(s_b_5_1),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),emitter.const_u64(s_b_5_1));
    /* execute.a64:0 [F] s_b_5_3: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_mvni(const aarch64_decode_a64_SIMD_MOD_IMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:4927 [F] s_b_0_0=sym_19182_3_parameter_inst.Q (const) */
    /* execute.simd:4927 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.simd:4927 [F] s_b_0_2 = constant u32 0 (const) */
    /* execute.simd:4927 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.Q) == (uint32_t)0ULL));
    /* execute.simd:4927 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_3 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:4928 [F] s_b_1_0=sym_19182_3_parameter_inst.rd (const) */
    /* execute.simd:4928 [F] s_b_1_1=sym_19182_3_parameter_inst.immu64 (const) */
    /* execute.simd:4928 [F] s_b_1_2 = ~s_b_1_1 (const) */
    uint64_t s_b_1_2 = ~insn.immu64;
    /* execute.simd:6246 [F] s_b_1_3: WriteRegBank 2:s_b_1_0 = s_b_1_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(s_b_1_2),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(s_b_1_2));
    /* execute.simd:6247 [F] s_b_1_4 = constant u64 0 (const) */
    /* execute.simd:6247 [F] s_b_1_5: WriteRegBank 3:s_b_1_0 = s_b_1_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_1_6: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:4930 [F] s_b_3_0=sym_19182_3_parameter_inst.rd (const) */
    /* execute.simd:4930 [F] s_b_3_1=sym_19182_3_parameter_inst.immu64 (const) */
    /* execute.simd:4930 [F] s_b_3_2 = ~s_b_3_1 (const) */
    uint64_t s_b_3_2 = ~insn.immu64;
    /* execute.simd:4930 [F] s_b_3_3=sym_19182_3_parameter_inst.immu64 (const) */
    /* execute.simd:4930 [F] s_b_3_4 = ~s_b_3_3 (const) */
    uint64_t s_b_3_4 = ~insn.immu64;
    /* execute.simd:6253 [F] s_b_3_5: WriteRegBank 2:s_b_3_0 = s_b_3_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(s_b_3_2),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),emitter.const_u64(s_b_3_2));
    /* execute.simd:6254 [F] s_b_3_6: WriteRegBank 3:s_b_3_0 = s_b_3_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64(s_b_3_4),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64(s_b_3_4));
    /* execute.simd:0 [F] s_b_3_7: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_prfm(const aarch64_decode_a64_LS_REG_IMM_POST&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* ???:4294967295 [F] s_b_0_0: Return */
    goto fixed_done;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_rev16(const aarch64_decode_a64_DP_1S&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_126231_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_126139_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_126179_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_126209_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2177 [F] s_b_0_0=sym_20031_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_0_1: If s_b_0_0: Jump b_1 else b_3 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2657 [F] s_b_1_0=sym_20031_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_1_1 = (u32)s_b_1_0 (const) */
    /* execute.a64:2651 [F] s_b_1_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_1_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_1_5 = ReadRegBank 0:s_b_1_0 (u64) */
    auto s_b_1_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_1_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_1_6: Select s_b_1_3 ? s_b_1_4 : s_b_1_5 */
    dbt::el::Value *s_b_1_6;
    s_b_1_6 = (s_b_1_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_1_5);
    /* ???:4294967295 [D] s_b_1_7: sym_126139_0_return_symbol = s_b_1_6, dominates: s_b_2_0  */
    emitter.store_local(DV_sym_126139_0_return_symbol, s_b_1_6);
    /* ???:4294967295 [F] s_b_1_8: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [D] s_b_2_0 = sym_126139_0_return_symbol uint64_t */
    auto s_b_2_0 = emitter.load_local(DV_sym_126139_0_return_symbol, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_2_1 = constant u64 8 (const) */
    /* ???:4294967295 [D] s_b_2_2 = s_b_2_0>>s_b_2_1 */
    auto s_b_2_2 = emitter.shr(s_b_2_0, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [F] s_b_2_3 = constant u64 ff00ff00ff00ff (const) */
    /* ???:4294967295 [D] s_b_2_4 = s_b_2_2&s_b_2_3 */
    auto s_b_2_4 = emitter.bitwise_and(s_b_2_2, emitter.const_u64((uint64_t)71777214294589695ULL));
    /* ???:4294967295 [F] s_b_2_5 = constant u64 8 (const) */
    /* ???:4294967295 [D] s_b_2_6 = s_b_2_0<<s_b_2_5 */
    auto s_b_2_6 = emitter.shl(s_b_2_0, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [F] s_b_2_7 = constant u64 ff00ff00ff00ff00 (const) */
    /* ???:4294967295 [D] s_b_2_8 = s_b_2_6&s_b_2_7 */
    auto s_b_2_8 = emitter.bitwise_and(s_b_2_6, emitter.const_u64((uint64_t)18374966859414961920ULL));
    /* ???:4294967295 [D] s_b_2_9 = s_b_2_4|s_b_2_8 */
    auto s_b_2_9 = emitter.bitwise_or(s_b_2_4, s_b_2_8);
    /* execute.a64:2187 [F] s_b_2_10=sym_20031_3_parameter_inst.sf (const) */
    /* execute.a64:2187 [D] s_b_2_11: sym_126179_3_parameter_value = s_b_2_9, dominates: s_b_4_1 s_b_5_1  */
    emitter.store_local(DV_sym_126179_3_parameter_value, s_b_2_9);
    /* execute.a64:2690 [F] s_b_2_12: If s_b_2_10: Jump b_4 else b_5 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.a64:2659 [F] s_b_3_0=sym_20031_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_3_1 = (u32)s_b_3_0 (const) */
    /* execute.a64:2646 [F] s_b_3_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_3_3 = s_b_3_1==s_b_3_2 (const) */
    uint8_t s_b_3_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_3_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_3_5 = ReadRegBank 1:s_b_3_0 (u32) */
    auto s_b_3_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_3_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_3_6: Select s_b_3_3 ? s_b_3_4 : s_b_3_5 */
    dbt::el::Value *s_b_3_6;
    s_b_3_6 = (s_b_3_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_3_5);
    /* execute.a64:2659 [D] s_b_3_7 = (u64)s_b_3_6 */
    auto s_b_3_7 = emitter.zx(s_b_3_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_3_8: sym_126139_0_return_symbol = s_b_3_7, dominates: s_b_2_0  */
    emitter.store_local(DV_sym_126139_0_return_symbol, s_b_3_7);
    /* ???:4294967295 [F] s_b_3_9: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_2,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2691 [F] s_b_4_0=sym_20031_3_parameter_inst.rd (const) */
    /* execute.a64:2691 [D] s_b_4_1 = sym_126179_3_parameter_value uint64_t */
    auto s_b_4_1 = emitter.load_local(DV_sym_126179_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2691 [D] s_b_4_2: sym_126209_3_parameter_value = s_b_4_1, dominates: s_b_7_1  */
    emitter.store_local(DV_sym_126209_3_parameter_value, s_b_4_1);
    /* execute.a64:2682 [F] s_b_4_3 = (u32)s_b_4_0 (const) */
    /* execute.a64:2682 [F] s_b_4_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_4_5 = s_b_4_3==s_b_4_4 (const) */
    uint8_t s_b_4_5 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_4_6: If s_b_4_5: Jump b_6 else b_7 (const) */
    if (s_b_4_5) 
    {
      goto fixed_block_b_6;
    }
    else 
    {
      goto fixed_block_b_7;
    }
  }
  /* b_2,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2693 [F] s_b_5_0=sym_20031_3_parameter_inst.rd (const) */
    /* execute.a64:2693 [D] s_b_5_1 = sym_126179_3_parameter_value uint64_t */
    auto s_b_5_1 = emitter.load_local(DV_sym_126179_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_5_2 = (u32)s_b_5_1 */
    auto s_b_5_2 = emitter.truncate(s_b_5_1, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_5_3 = (u64)s_b_5_2 */
    auto s_b_5_3 = emitter.zx(s_b_5_2, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_5_4: sym_126231_3_parameter_value = s_b_5_3, dominates: s_b_8_1  */
    emitter.store_local(DV_sym_126231_3_parameter_value, s_b_5_3);
    /* execute.a64:2682 [F] s_b_5_5 = (u32)s_b_5_0 (const) */
    /* execute.a64:2682 [F] s_b_5_6 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_5_7 = s_b_5_5==s_b_5_6 (const) */
    uint8_t s_b_5_7 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_5_8: If s_b_5_7: Jump b_6 else b_8 (const) */
    if (s_b_5_7) 
    {
      goto fixed_block_b_6;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_4, b_5, b_7, b_8,  */
  fixed_block_b_6: 
  {
    /* ???:4294967295 [F] s_b_6_0: Return */
    goto fixed_done;
  }
  /* b_4,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2684 [F] s_b_7_0=sym_20031_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_7_1 = sym_126209_3_parameter_value uint64_t */
    auto s_b_7_1 = emitter.load_local(DV_sym_126209_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_7_2: WriteRegBank 0:s_b_7_0 = s_b_7_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_7_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_7_1);
    /* execute.a64:0 [F] s_b_7_3: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_5,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2684 [F] s_b_8_0=sym_20031_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_8_1 = sym_126231_3_parameter_value uint64_t */
    auto s_b_8_1 = emitter.load_local(DV_sym_126231_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_8_2: WriteRegBank 0:s_b_8_0 = s_b_8_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_8_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_8_1);
    /* execute.a64:0 [F] s_b_8_3: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_sbc(const aarch64_decode_a64_ADD_SUB_CARRY&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_126734_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_126937_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_126827_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_126871_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_22078_0_op1 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_22083_0_op2 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_22100_0_result = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_22128_0_result = emitter.alloc_local(emitter.context().types().u32(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:1989 [F] s_b_0_0=sym_22073_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_0_1: If s_b_0_0: Jump b_10 else b_12 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_12;
    }
  }
  /* b_14,  */
  fixed_block_b_1: 
  {
    /* execute.a64:1995 [F] s_b_1_0=sym_22073_3_parameter_inst.S (const) */
    /* execute.a64:1995 [F] s_b_1_1: If s_b_1_0: Jump b_4 else b_6 (const) */
    if (insn.S) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_5, b_8, b_16, b_17,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_14,  */
  fixed_block_b_3: 
  {
    /* execute.a64:2005 [F] s_b_3_0=sym_22073_3_parameter_inst.S (const) */
    /* execute.a64:2005 [F] s_b_3_1: If s_b_3_0: Jump b_7 else b_9 (const) */
    if (insn.S) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:1996 [D] s_b_4_0 = sym_22078_0_op1 uint64_t */
    auto s_b_4_0 = emitter.load_local(DV_sym_22078_0_op1, emitter.context().types().u64());
    /* execute.a64:1996 [D] s_b_4_1 = sym_22083_0_op2 uint64_t */
    auto s_b_4_1 = emitter.load_local(DV_sym_22083_0_op2, emitter.context().types().u64());
    /* execute.a64:1996 [D] s_b_4_2 = ReadReg 3 (u8) */
    auto s_b_4_2 = emitter.load_register(emitter.const_u32(1298), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1298), s_b_4_2, emitter.const_u8(1));
    }
    /* execute.a64:1996 [D] s_b_4_3 = !s_b_4_2 */
    auto s_b_4_3 = emitter.cmp_eq(s_b_4_2, emitter.const_u8(0));
    /* execute.a64:1996 [D] s_b_4_4 = __builtin_sbc64_flags */
    auto s_b_4_4 = emitter.sbcf(s_b_4_0, s_b_4_1, s_b_4_3);
    /* execute.a64:1996 [D] s_b_4_5: sym_22100_0_result = s_b_4_4, dominates: s_b_5_0  */
    emitter.store_local(DV_sym_22100_0_result, s_b_4_4);
    /* execute.a64:1996 [F] s_b_4_6: Jump b_5 (const) */
    goto fixed_block_b_5;
  }
  /* b_4, b_6,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2001 [D] s_b_5_0 = sym_22100_0_result uint64_t */
    auto s_b_5_0 = emitter.load_local(DV_sym_22100_0_result, emitter.context().types().u64());
    /* execute.a64:2691 [F] s_b_5_1=sym_22073_3_parameter_inst.rd (const) */
    /* execute.a64:2691 [D] s_b_5_2: sym_126871_3_parameter_value = s_b_5_0, dominates: s_b_16_1  */
    emitter.store_local(DV_sym_126871_3_parameter_value, s_b_5_0);
    /* execute.a64:2682 [F] s_b_5_3 = (u32)s_b_5_1 (const) */
    /* execute.a64:2682 [F] s_b_5_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_5_5 = s_b_5_3==s_b_5_4 (const) */
    uint8_t s_b_5_5 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_5_6: If s_b_5_5: Jump b_2 else b_16 (const) */
    if (s_b_5_5) 
    {
      goto fixed_block_b_2;
    }
    else 
    {
      goto fixed_block_b_16;
    }
  }
  /* b_1,  */
  fixed_block_b_6: 
  {
    /* execute.a64:1998 [D] s_b_6_0 = sym_22078_0_op1 uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_22078_0_op1, emitter.context().types().u64());
    /* execute.a64:1998 [D] s_b_6_1 = sym_22083_0_op2 uint64_t */
    auto s_b_6_1 = emitter.load_local(DV_sym_22083_0_op2, emitter.context().types().u64());
    /* execute.a64:1998 [D] s_b_6_2 = ReadReg 3 (u8) */
    auto s_b_6_2 = emitter.load_register(emitter.const_u32(1298), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1298), s_b_6_2, emitter.const_u8(1));
    }
    /* execute.a64:1998 [D] s_b_6_3 = !s_b_6_2 */
    auto s_b_6_3 = emitter.cmp_eq(s_b_6_2, emitter.const_u8(0));
    /* execute.a64:1998 [D] s_b_6_4 = __builtin_sbc64 */
    auto s_b_6_4 = emitter.sbc(s_b_6_0, s_b_6_1, s_b_6_3);
    /* execute.a64:1998 [D] s_b_6_5: sym_22100_0_result = s_b_6_4, dominates: s_b_5_0  */
    emitter.store_local(DV_sym_22100_0_result, s_b_6_4);
    /* execute.a64:1998 [F] s_b_6_6: Jump b_5 (const) */
    goto fixed_block_b_5;
  }
  /* b_3,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2006 [D] s_b_7_0 = sym_22078_0_op1 uint64_t */
    auto s_b_7_0 = emitter.load_local(DV_sym_22078_0_op1, emitter.context().types().u64());
    /* execute.a64:2006 [D] s_b_7_1 = (u32)s_b_7_0 */
    auto s_b_7_1 = emitter.truncate(s_b_7_0, emitter.context().types().u32());
    /* execute.a64:2006 [D] s_b_7_2 = sym_22083_0_op2 uint64_t */
    auto s_b_7_2 = emitter.load_local(DV_sym_22083_0_op2, emitter.context().types().u64());
    /* execute.a64:2006 [D] s_b_7_3 = (u32)s_b_7_2 */
    auto s_b_7_3 = emitter.truncate(s_b_7_2, emitter.context().types().u32());
    /* execute.a64:2006 [D] s_b_7_4 = ReadReg 3 (u8) */
    auto s_b_7_4 = emitter.load_register(emitter.const_u32(1298), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1298), s_b_7_4, emitter.const_u8(1));
    }
    /* execute.a64:2006 [D] s_b_7_5 = !s_b_7_4 */
    auto s_b_7_5 = emitter.cmp_eq(s_b_7_4, emitter.const_u8(0));
    /* execute.a64:2006 [D] s_b_7_6 = __builtin_sbc32_flags */
    auto s_b_7_6 = emitter.sbcf(s_b_7_1, s_b_7_3, s_b_7_5);
    /* execute.a64:2006 [D] s_b_7_7: sym_22128_0_result = s_b_7_6, dominates: s_b_8_0  */
    emitter.store_local(DV_sym_22128_0_result, s_b_7_6);
    /* execute.a64:2006 [F] s_b_7_8: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_7, b_9,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2011 [D] s_b_8_0 = sym_22128_0_result uint32_t */
    auto s_b_8_0 = emitter.load_local(DV_sym_22128_0_result, emitter.context().types().u32());
    /* execute.a64:2011 [D] s_b_8_1 = (u64)s_b_8_0 */
    auto s_b_8_1 = emitter.zx(s_b_8_0, emitter.context().types().u64());
    /* execute.a64:2693 [F] s_b_8_2=sym_22073_3_parameter_inst.rd (const) */
    /* execute.a64:2693 [D] s_b_8_3 = (u32)s_b_8_1 */
    auto s_b_8_3 = emitter.truncate(s_b_8_1, emitter.context().types().u32());
    /* execute.a64:2693 [D] s_b_8_4 = (u64)s_b_8_3 */
    auto s_b_8_4 = emitter.zx(s_b_8_3, emitter.context().types().u64());
    /* execute.a64:2693 [D] s_b_8_5: sym_126937_3_parameter_value = s_b_8_4, dominates: s_b_17_1  */
    emitter.store_local(DV_sym_126937_3_parameter_value, s_b_8_4);
    /* execute.a64:2682 [F] s_b_8_6 = (u32)s_b_8_2 (const) */
    /* execute.a64:2682 [F] s_b_8_7 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_8_8 = s_b_8_6==s_b_8_7 (const) */
    uint8_t s_b_8_8 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_8_9: If s_b_8_8: Jump b_2 else b_17 (const) */
    if (s_b_8_8) 
    {
      goto fixed_block_b_2;
    }
    else 
    {
      goto fixed_block_b_17;
    }
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.a64:2008 [D] s_b_9_0 = sym_22078_0_op1 uint64_t */
    auto s_b_9_0 = emitter.load_local(DV_sym_22078_0_op1, emitter.context().types().u64());
    /* execute.a64:2008 [D] s_b_9_1 = (u32)s_b_9_0 */
    auto s_b_9_1 = emitter.truncate(s_b_9_0, emitter.context().types().u32());
    /* execute.a64:2008 [D] s_b_9_2 = sym_22083_0_op2 uint64_t */
    auto s_b_9_2 = emitter.load_local(DV_sym_22083_0_op2, emitter.context().types().u64());
    /* execute.a64:2008 [D] s_b_9_3 = (u32)s_b_9_2 */
    auto s_b_9_3 = emitter.truncate(s_b_9_2, emitter.context().types().u32());
    /* execute.a64:2008 [D] s_b_9_4 = ReadReg 3 (u8) */
    auto s_b_9_4 = emitter.load_register(emitter.const_u32(1298), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1298), s_b_9_4, emitter.const_u8(1));
    }
    /* execute.a64:2008 [D] s_b_9_5 = !s_b_9_4 */
    auto s_b_9_5 = emitter.cmp_eq(s_b_9_4, emitter.const_u8(0));
    /* execute.a64:2008 [D] s_b_9_6 = __builtin_sbc32 */
    auto s_b_9_6 = emitter.sbc(s_b_9_1, s_b_9_3, s_b_9_5);
    /* execute.a64:2008 [D] s_b_9_7: sym_22128_0_result = s_b_9_6, dominates: s_b_8_0  */
    emitter.store_local(DV_sym_22128_0_result, s_b_9_6);
    /* execute.a64:2008 [F] s_b_9_8: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_0,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2657 [F] s_b_10_0=sym_22073_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_10_1 = (u32)s_b_10_0 (const) */
    /* execute.a64:2651 [F] s_b_10_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_10_3 = s_b_10_1==s_b_10_2 (const) */
    uint8_t s_b_10_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_10_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_10_5 = ReadRegBank 0:s_b_10_0 (u64) */
    auto s_b_10_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_10_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_10_6: Select s_b_10_3 ? s_b_10_4 : s_b_10_5 */
    dbt::el::Value *s_b_10_6;
    s_b_10_6 = (s_b_10_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_10_5);
    /* ???:4294967295 [D] s_b_10_7: sym_126734_0_return_symbol = s_b_10_6, dominates: s_b_11_0  */
    emitter.store_local(DV_sym_126734_0_return_symbol, s_b_10_6);
    /* ???:4294967295 [F] s_b_10_8: Jump b_11 (const) */
    goto fixed_block_b_11;
  }
  /* b_10, b_12,  */
  fixed_block_b_11: 
  {
    /* ???:4294967295 [D] s_b_11_0 = sym_126734_0_return_symbol uint64_t */
    auto s_b_11_0 = emitter.load_local(DV_sym_126734_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:1989 [D] s_b_11_1: sym_22078_0_op1 = s_b_11_0, dominates: s_b_4_0 s_b_6_0 s_b_7_0 s_b_9_0  */
    emitter.store_local(DV_sym_22078_0_op1, s_b_11_0);
    /* execute.a64:1990 [F] s_b_11_2=sym_22073_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_11_3: If s_b_11_2: Jump b_13 else b_15 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_13;
    }
    else 
    {
      goto fixed_block_b_15;
    }
  }
  /* b_0,  */
  fixed_block_b_12: 
  {
    /* execute.a64:2659 [F] s_b_12_0=sym_22073_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_12_1 = (u32)s_b_12_0 (const) */
    /* execute.a64:2646 [F] s_b_12_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_12_3 = s_b_12_1==s_b_12_2 (const) */
    uint8_t s_b_12_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_12_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_12_5 = ReadRegBank 1:s_b_12_0 (u32) */
    auto s_b_12_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_12_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_12_6: Select s_b_12_3 ? s_b_12_4 : s_b_12_5 */
    dbt::el::Value *s_b_12_6;
    s_b_12_6 = (s_b_12_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_12_5);
    /* execute.a64:2659 [D] s_b_12_7 = (u64)s_b_12_6 */
    auto s_b_12_7 = emitter.zx(s_b_12_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_12_8: sym_126734_0_return_symbol = s_b_12_7, dominates: s_b_11_0  */
    emitter.store_local(DV_sym_126734_0_return_symbol, s_b_12_7);
    /* ???:4294967295 [F] s_b_12_9: Jump b_11 (const) */
    goto fixed_block_b_11;
  }
  /* b_11,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2657 [F] s_b_13_0=sym_22073_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_13_1 = (u32)s_b_13_0 (const) */
    /* execute.a64:2651 [F] s_b_13_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_13_3 = s_b_13_1==s_b_13_2 (const) */
    uint8_t s_b_13_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_13_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_13_5 = ReadRegBank 0:s_b_13_0 (u64) */
    auto s_b_13_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_13_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_13_6: Select s_b_13_3 ? s_b_13_4 : s_b_13_5 */
    dbt::el::Value *s_b_13_6;
    s_b_13_6 = (s_b_13_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_13_5);
    /* ???:4294967295 [D] s_b_13_7: sym_126827_0_return_symbol = s_b_13_6, dominates: s_b_14_0  */
    emitter.store_local(DV_sym_126827_0_return_symbol, s_b_13_6);
    /* ???:4294967295 [F] s_b_13_8: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_13, b_15,  */
  fixed_block_b_14: 
  {
    /* ???:4294967295 [D] s_b_14_0 = sym_126827_0_return_symbol uint64_t */
    auto s_b_14_0 = emitter.load_local(DV_sym_126827_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:1990 [D] s_b_14_1: sym_22083_0_op2 = s_b_14_0, dominates: s_b_4_1 s_b_6_1 s_b_7_2 s_b_9_2  */
    emitter.store_local(DV_sym_22083_0_op2, s_b_14_0);
    /* execute.a64:1992 [F] s_b_14_2=sym_22073_3_parameter_inst.sf (const) */
    /* execute.a64:1992 [F] s_b_14_3: If s_b_14_2: Jump b_1 else b_3 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_11,  */
  fixed_block_b_15: 
  {
    /* execute.a64:2659 [F] s_b_15_0=sym_22073_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_15_1 = (u32)s_b_15_0 (const) */
    /* execute.a64:2646 [F] s_b_15_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_15_3 = s_b_15_1==s_b_15_2 (const) */
    uint8_t s_b_15_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_15_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_15_5 = ReadRegBank 1:s_b_15_0 (u32) */
    auto s_b_15_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_15_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_15_6: Select s_b_15_3 ? s_b_15_4 : s_b_15_5 */
    dbt::el::Value *s_b_15_6;
    s_b_15_6 = (s_b_15_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_15_5);
    /* execute.a64:2659 [D] s_b_15_7 = (u64)s_b_15_6 */
    auto s_b_15_7 = emitter.zx(s_b_15_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_15_8: sym_126827_0_return_symbol = s_b_15_7, dominates: s_b_14_0  */
    emitter.store_local(DV_sym_126827_0_return_symbol, s_b_15_7);
    /* ???:4294967295 [F] s_b_15_9: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_5,  */
  fixed_block_b_16: 
  {
    /* execute.a64:2684 [F] s_b_16_0=sym_22073_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_16_1 = sym_126871_3_parameter_value uint64_t */
    auto s_b_16_1 = emitter.load_local(DV_sym_126871_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_16_2: WriteRegBank 0:s_b_16_0 = s_b_16_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_16_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_16_1);
    /* execute.a64:0 [F] s_b_16_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_8,  */
  fixed_block_b_17: 
  {
    /* execute.a64:2684 [F] s_b_17_0=sym_22073_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_17_1 = sym_126937_3_parameter_value uint64_t */
    auto s_b_17_1 = emitter.load_local(DV_sym_126937_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_17_2: WriteRegBank 0:s_b_17_0 = s_b_17_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_17_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_17_1);
    /* execute.a64:0 [F] s_b_17_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_smax(const aarch64_decode_a64_SIMD_THREE_SAME&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:2855 [F] s_b_0_0=sym_22867_3_parameter_inst.arrangement (const) */
    /* execute.simd:2856 [F] s_b_0_1 = constant s32 0 (const) */
    /* execute.simd:2868 [F] s_b_0_2 = constant s32 1 (const) */
    /* execute.simd:2878 [F] s_b_0_3 = constant s32 2 (const) */
    /* execute.simd:2889 [F] s_b_0_4 = constant s32 3 (const) */
    /* execute.simd:2899 [F] s_b_0_5 = constant s32 4 (const) */
    /* execute.simd:2910 [F] s_b_0_6 = constant s32 5 (const) */
    /* execute.simd:2855 [F] s_b_0_7: Switch s_b_0_0: < <todo> > def b_8 (const) -> b_2, b_3, b_4, b_5, b_6, b_7, b_8,  */
    switch (insn.arrangement) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_5;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_7;
      break;
    default:
      goto fixed_block_b_8;
    }
  }
  /* b_2, b_3, b_4, b_5, b_6, b_7, b_8,  */
  fixed_block_b_1: 
  {
    /* ???:4294967295 [F] s_b_1_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.simd:2857 [F] s_b_2_0=sym_22867_3_parameter_inst.rn (const) */
    /* execute.simd:2857 [D] s_b_2_1 = ReadRegBank 15:s_b_2_0 (v8u8) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* execute.simd:2857 [D] s_b_2_2 = (v8s8)s_b_2_1 */
    auto s_b_2_2 = emitter.reinterpret(s_b_2_1, emitter.context().types().v8s8());
    /* execute.simd:2858 [F] s_b_2_3=sym_22867_3_parameter_inst.rm (const) */
    /* execute.simd:2858 [D] s_b_2_4 = ReadRegBank 15:s_b_2_3 (v8u8) */
    auto s_b_2_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_2_4,emitter.const_u8(8));
    }
    /* execute.simd:2858 [D] s_b_2_5 = (v8s8)s_b_2_4 */
    auto s_b_2_5 = emitter.reinterpret(s_b_2_4, emitter.context().types().v8s8());
    /* execute.simd:2860 [D] s_b_2_6 = s_b_2_2>s_b_2_5 */
    auto s_b_2_6 = emitter.cmp_gt(s_b_2_2, s_b_2_5);
    /* execute.simd:2861 [D] s_b_2_7 = s_b_2_2&s_b_2_6 */
    auto s_b_2_7 = emitter.bitwise_and(s_b_2_2, s_b_2_6);
    /* execute.simd:2861 [D] s_b_2_8 = ~s_b_2_6 */
    auto s_b_2_8 = emitter.bitwise_not(s_b_2_6);
    /* execute.simd:2861 [D] s_b_2_9 = s_b_2_5&s_b_2_8 */
    auto s_b_2_9 = emitter.bitwise_and(s_b_2_5, s_b_2_8);
    /* execute.simd:2861 [D] s_b_2_10 = s_b_2_7|s_b_2_9 */
    auto s_b_2_10 = emitter.bitwise_or(s_b_2_7, s_b_2_9);
    /* execute.simd:2863 [F] s_b_2_11=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2863 [D] s_b_2_12 = (v8u8)s_b_2_10 */
    auto s_b_2_12 = emitter.reinterpret(s_b_2_10, emitter.context().types().v8u8());
    /* execute.simd:2863 [D] s_b_2_13: WriteRegBank 15:s_b_2_11 = s_b_2_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_2_12,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_2_12);
    /* execute.simd:2864 [F] s_b_2_14=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2864 [F] s_b_2_15 = constant u64 0 (const) */
    /* execute.simd:2864 [F] s_b_2_16: WriteRegBank 3:s_b_2_14 = s_b_2_15 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_2_17: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:2869 [F] s_b_3_0=sym_22867_3_parameter_inst.rn (const) */
    /* execute.simd:2869 [D] s_b_3_1 = ReadRegBank 16:s_b_3_0 (v16u8) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_3_1,emitter.const_u8(16));
    }
    /* execute.simd:2869 [D] s_b_3_2 = (v16s8)s_b_3_1 */
    auto s_b_3_2 = emitter.reinterpret(s_b_3_1, emitter.context().types().v16s8());
    /* execute.simd:2870 [F] s_b_3_3=sym_22867_3_parameter_inst.rm (const) */
    /* execute.simd:2870 [D] s_b_3_4 = ReadRegBank 16:s_b_3_3 (v16u8) */
    auto s_b_3_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_3_4,emitter.const_u8(16));
    }
    /* execute.simd:2870 [D] s_b_3_5 = (v16s8)s_b_3_4 */
    auto s_b_3_5 = emitter.reinterpret(s_b_3_4, emitter.context().types().v16s8());
    /* execute.simd:2872 [D] s_b_3_6 = s_b_3_2>s_b_3_5 */
    auto s_b_3_6 = emitter.cmp_gt(s_b_3_2, s_b_3_5);
    /* execute.simd:2873 [D] s_b_3_7 = s_b_3_2&s_b_3_6 */
    auto s_b_3_7 = emitter.bitwise_and(s_b_3_2, s_b_3_6);
    /* execute.simd:2873 [D] s_b_3_8 = ~s_b_3_6 */
    auto s_b_3_8 = emitter.bitwise_not(s_b_3_6);
    /* execute.simd:2873 [D] s_b_3_9 = s_b_3_5&s_b_3_8 */
    auto s_b_3_9 = emitter.bitwise_and(s_b_3_5, s_b_3_8);
    /* execute.simd:2873 [D] s_b_3_10 = s_b_3_7|s_b_3_9 */
    auto s_b_3_10 = emitter.bitwise_or(s_b_3_7, s_b_3_9);
    /* execute.simd:2875 [F] s_b_3_11=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2875 [D] s_b_3_12 = (v16u8)s_b_3_10 */
    auto s_b_3_12 = emitter.reinterpret(s_b_3_10, emitter.context().types().v16u8());
    /* execute.simd:2875 [D] s_b_3_13: WriteRegBank 16:s_b_3_11 = s_b_3_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_12,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_12);
    /* execute.simd:0 [F] s_b_3_14: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.simd:2879 [F] s_b_4_0=sym_22867_3_parameter_inst.rn (const) */
    /* execute.simd:2879 [D] s_b_4_1 = ReadRegBank 17:s_b_4_0 (v4u16) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_1,emitter.const_u8(8));
    }
    /* execute.simd:2879 [D] s_b_4_2 = (v4s16)s_b_4_1 */
    auto s_b_4_2 = emitter.reinterpret(s_b_4_1, emitter.context().types().v4s16());
    /* execute.simd:2880 [F] s_b_4_3=sym_22867_3_parameter_inst.rm (const) */
    /* execute.simd:2880 [D] s_b_4_4 = ReadRegBank 17:s_b_4_3 (v4u16) */
    auto s_b_4_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_4_4,emitter.const_u8(8));
    }
    /* execute.simd:2880 [D] s_b_4_5 = (v4s16)s_b_4_4 */
    auto s_b_4_5 = emitter.reinterpret(s_b_4_4, emitter.context().types().v4s16());
    /* execute.simd:2882 [D] s_b_4_6 = s_b_4_2>s_b_4_5 */
    auto s_b_4_6 = emitter.cmp_gt(s_b_4_2, s_b_4_5);
    /* execute.simd:2883 [D] s_b_4_7 = s_b_4_2&s_b_4_6 */
    auto s_b_4_7 = emitter.bitwise_and(s_b_4_2, s_b_4_6);
    /* execute.simd:2883 [D] s_b_4_8 = ~s_b_4_6 */
    auto s_b_4_8 = emitter.bitwise_not(s_b_4_6);
    /* execute.simd:2883 [D] s_b_4_9 = s_b_4_5&s_b_4_8 */
    auto s_b_4_9 = emitter.bitwise_and(s_b_4_5, s_b_4_8);
    /* execute.simd:2883 [D] s_b_4_10 = s_b_4_7|s_b_4_9 */
    auto s_b_4_10 = emitter.bitwise_or(s_b_4_7, s_b_4_9);
    /* execute.simd:2885 [F] s_b_4_11=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2885 [D] s_b_4_12 = (v4u16)s_b_4_10 */
    auto s_b_4_12 = emitter.reinterpret(s_b_4_10, emitter.context().types().v4u16());
    /* execute.simd:2885 [D] s_b_4_13: WriteRegBank 17:s_b_4_11 = s_b_4_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_12,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_12);
    /* execute.simd:2886 [F] s_b_4_14=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2886 [F] s_b_4_15 = constant u64 0 (const) */
    /* execute.simd:2886 [F] s_b_4_16: WriteRegBank 3:s_b_4_14 = s_b_4_15 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_4_17: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_5: 
  {
    /* execute.simd:2890 [F] s_b_5_0=sym_22867_3_parameter_inst.rn (const) */
    /* execute.simd:2890 [D] s_b_5_1 = ReadRegBank 18:s_b_5_0 (v8u16) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_5_1,emitter.const_u8(16));
    }
    /* execute.simd:2890 [D] s_b_5_2 = (v8s16)s_b_5_1 */
    auto s_b_5_2 = emitter.reinterpret(s_b_5_1, emitter.context().types().v8s16());
    /* execute.simd:2891 [F] s_b_5_3=sym_22867_3_parameter_inst.rm (const) */
    /* execute.simd:2891 [D] s_b_5_4 = ReadRegBank 18:s_b_5_3 (v8u16) */
    auto s_b_5_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_5_4,emitter.const_u8(16));
    }
    /* execute.simd:2891 [D] s_b_5_5 = (v8s16)s_b_5_4 */
    auto s_b_5_5 = emitter.reinterpret(s_b_5_4, emitter.context().types().v8s16());
    /* execute.simd:2893 [D] s_b_5_6 = s_b_5_2>s_b_5_5 */
    auto s_b_5_6 = emitter.cmp_gt(s_b_5_2, s_b_5_5);
    /* execute.simd:2894 [D] s_b_5_7 = s_b_5_2&s_b_5_6 */
    auto s_b_5_7 = emitter.bitwise_and(s_b_5_2, s_b_5_6);
    /* execute.simd:2894 [D] s_b_5_8 = ~s_b_5_6 */
    auto s_b_5_8 = emitter.bitwise_not(s_b_5_6);
    /* execute.simd:2894 [D] s_b_5_9 = s_b_5_5&s_b_5_8 */
    auto s_b_5_9 = emitter.bitwise_and(s_b_5_5, s_b_5_8);
    /* execute.simd:2894 [D] s_b_5_10 = s_b_5_7|s_b_5_9 */
    auto s_b_5_10 = emitter.bitwise_or(s_b_5_7, s_b_5_9);
    /* execute.simd:2896 [F] s_b_5_11=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2896 [D] s_b_5_12 = (v8u16)s_b_5_10 */
    auto s_b_5_12 = emitter.reinterpret(s_b_5_10, emitter.context().types().v8u16());
    /* execute.simd:2896 [D] s_b_5_13: WriteRegBank 18:s_b_5_11 = s_b_5_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_12,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_12);
    /* execute.simd:0 [F] s_b_5_14: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_6: 
  {
    /* execute.simd:2900 [F] s_b_6_0=sym_22867_3_parameter_inst.rn (const) */
    /* execute.simd:2900 [D] s_b_6_1 = ReadRegBank 19:s_b_6_0 (v2u32) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* execute.simd:2900 [D] s_b_6_2 = (v2s32)s_b_6_1 */
    auto s_b_6_2 = emitter.reinterpret(s_b_6_1, emitter.context().types().v2s32());
    /* execute.simd:2901 [F] s_b_6_3=sym_22867_3_parameter_inst.rm (const) */
    /* execute.simd:2901 [D] s_b_6_4 = ReadRegBank 19:s_b_6_3 (v2u32) */
    auto s_b_6_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_6_4,emitter.const_u8(8));
    }
    /* execute.simd:2901 [D] s_b_6_5 = (v2s32)s_b_6_4 */
    auto s_b_6_5 = emitter.reinterpret(s_b_6_4, emitter.context().types().v2s32());
    /* execute.simd:2903 [D] s_b_6_6 = s_b_6_2>s_b_6_5 */
    auto s_b_6_6 = emitter.cmp_gt(s_b_6_2, s_b_6_5);
    /* execute.simd:2904 [D] s_b_6_7 = s_b_6_2&s_b_6_6 */
    auto s_b_6_7 = emitter.bitwise_and(s_b_6_2, s_b_6_6);
    /* execute.simd:2904 [D] s_b_6_8 = ~s_b_6_6 */
    auto s_b_6_8 = emitter.bitwise_not(s_b_6_6);
    /* execute.simd:2904 [D] s_b_6_9 = s_b_6_5&s_b_6_8 */
    auto s_b_6_9 = emitter.bitwise_and(s_b_6_5, s_b_6_8);
    /* execute.simd:2904 [D] s_b_6_10 = s_b_6_7|s_b_6_9 */
    auto s_b_6_10 = emitter.bitwise_or(s_b_6_7, s_b_6_9);
    /* execute.simd:2906 [F] s_b_6_11=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2906 [D] s_b_6_12 = (v2u32)s_b_6_10 */
    auto s_b_6_12 = emitter.reinterpret(s_b_6_10, emitter.context().types().v2u32());
    /* execute.simd:2906 [D] s_b_6_13: WriteRegBank 19:s_b_6_11 = s_b_6_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_12,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_12);
    /* execute.simd:2907 [F] s_b_6_14=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2907 [F] s_b_6_15 = constant u64 0 (const) */
    /* execute.simd:2907 [F] s_b_6_16: WriteRegBank 3:s_b_6_14 = s_b_6_15 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
    /* execute.simd:0 [F] s_b_6_17: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_7: 
  {
    /* execute.simd:2911 [F] s_b_7_0=sym_22867_3_parameter_inst.rn (const) */
    /* execute.simd:2911 [D] s_b_7_1 = ReadRegBank 20:s_b_7_0 (v4u32) */
    auto s_b_7_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_7_1,emitter.const_u8(16));
    }
    /* execute.simd:2911 [D] s_b_7_2 = (v4s32)s_b_7_1 */
    auto s_b_7_2 = emitter.reinterpret(s_b_7_1, emitter.context().types().v4s32());
    /* execute.simd:2912 [F] s_b_7_3=sym_22867_3_parameter_inst.rm (const) */
    /* execute.simd:2912 [D] s_b_7_4 = ReadRegBank 20:s_b_7_3 (v4u32) */
    auto s_b_7_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_7_4,emitter.const_u8(16));
    }
    /* execute.simd:2912 [D] s_b_7_5 = (v4s32)s_b_7_4 */
    auto s_b_7_5 = emitter.reinterpret(s_b_7_4, emitter.context().types().v4s32());
    /* execute.simd:2914 [D] s_b_7_6 = s_b_7_2>s_b_7_5 */
    auto s_b_7_6 = emitter.cmp_gt(s_b_7_2, s_b_7_5);
    /* execute.simd:2915 [D] s_b_7_7 = s_b_7_2&s_b_7_6 */
    auto s_b_7_7 = emitter.bitwise_and(s_b_7_2, s_b_7_6);
    /* execute.simd:2915 [D] s_b_7_8 = ~s_b_7_6 */
    auto s_b_7_8 = emitter.bitwise_not(s_b_7_6);
    /* execute.simd:2915 [D] s_b_7_9 = s_b_7_5&s_b_7_8 */
    auto s_b_7_9 = emitter.bitwise_and(s_b_7_5, s_b_7_8);
    /* execute.simd:2915 [D] s_b_7_10 = s_b_7_7|s_b_7_9 */
    auto s_b_7_10 = emitter.bitwise_or(s_b_7_7, s_b_7_9);
    /* execute.simd:2917 [F] s_b_7_11=sym_22867_3_parameter_inst.rd (const) */
    /* execute.simd:2917 [D] s_b_7_12 = (v4u32)s_b_7_10 */
    auto s_b_7_12 = emitter.reinterpret(s_b_7_10, emitter.context().types().v4u32());
    /* execute.simd:2917 [D] s_b_7_13: WriteRegBank 20:s_b_7_11 = s_b_7_12 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_12,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_12);
    /* execute.simd:0 [F] s_b_7_14: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_8: 
  {
    /* execute.simd:2921 [D] s_b_8_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_8_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_sshl(const aarch64_decode_a64_SIMD_THREE_SAME&insn, captive::arch::dbt::el::Emitter& emitter)
{
  std::queue<captive::arch::dbt::el::Block *> dynamic_block_queue;
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto block_b_2 = emitter.context().create_block();
  auto block_b_4 = emitter.context().create_block();
  auto block_b_5 = emitter.context().create_block();
  auto block_b_7 = emitter.context().create_block();
  auto block_b_8 = emitter.context().create_block();
  auto block_b_9 = emitter.context().create_block();
  auto block_b_10 = emitter.context().create_block();
  auto block_b_11 = emitter.context().create_block();
  auto block_b_12 = emitter.context().create_block();
  auto block_b_13 = emitter.context().create_block();
  auto block_b_14 = emitter.context().create_block();
  auto block_b_15 = emitter.context().create_block();
  auto block_b_16 = emitter.context().create_block();
  auto block_b_17 = emitter.context().create_block();
  auto block_b_18 = emitter.context().create_block();
  auto block_b_19 = emitter.context().create_block();
  auto block_b_20 = emitter.context().create_block();
  auto block_b_21 = emitter.context().create_block();
  auto block_b_22 = emitter.context().create_block();
  auto block_b_23 = emitter.context().create_block();
  auto block_b_24 = emitter.context().create_block();
  auto block_b_25 = emitter.context().create_block();
  auto block_b_26 = emitter.context().create_block();
  auto block_b_27 = emitter.context().create_block();
  auto block_b_28 = emitter.context().create_block();
  auto block_b_29 = emitter.context().create_block();
  auto block_b_30 = emitter.context().create_block();
  auto block_b_32 = emitter.context().create_block();
  auto block_b_33 = emitter.context().create_block();
  auto block_b_34 = emitter.context().create_block();
  auto block_b_35 = emitter.context().create_block();
  auto block_b_36 = emitter.context().create_block();
  auto block_b_37 = emitter.context().create_block();
  auto block_b_38 = emitter.context().create_block();
  auto block_b_39 = emitter.context().create_block();
  auto block_b_40 = emitter.context().create_block();
  auto block_b_41 = emitter.context().create_block();
  auto block_b_42 = emitter.context().create_block();
  auto block_b_43 = emitter.context().create_block();
  auto block_b_44 = emitter.context().create_block();
  auto block_b_45 = emitter.context().create_block();
  auto block_b_46 = emitter.context().create_block();
  auto block_b_47 = emitter.context().create_block();
  auto block_b_48 = emitter.context().create_block();
  auto block_b_49 = emitter.context().create_block();
  auto block_b_50 = emitter.context().create_block();
  auto block_b_51 = emitter.context().create_block();
  auto block_b_52 = emitter.context().create_block();
  auto block_b_53 = emitter.context().create_block();
  auto block_b_54 = emitter.context().create_block();
  auto block_b_55 = emitter.context().create_block();
  auto block_b_56 = emitter.context().create_block();
  auto block_b_57 = emitter.context().create_block();
  auto block_b_58 = emitter.context().create_block();
  auto block_b_59 = emitter.context().create_block();
  auto block_b_60 = emitter.context().create_block();
  auto block_b_61 = emitter.context().create_block();
  auto block_b_62 = emitter.context().create_block();
  auto block_b_63 = emitter.context().create_block();
  auto block_b_64 = emitter.context().create_block();
  auto block_b_65 = emitter.context().create_block();
  auto block_b_66 = emitter.context().create_block();
  auto block_b_67 = emitter.context().create_block();
  auto block_b_68 = emitter.context().create_block();
  auto block_b_69 = emitter.context().create_block();
  auto block_b_70 = emitter.context().create_block();
  auto block_b_71 = emitter.context().create_block();
  auto block_b_72 = emitter.context().create_block();
  auto block_b_73 = emitter.context().create_block();
  auto block_b_74 = emitter.context().create_block();
  auto block_b_75 = emitter.context().create_block();
  auto block_b_76 = emitter.context().create_block();
  auto block_b_77 = emitter.context().create_block();
  auto block_b_78 = emitter.context().create_block();
  auto block_b_79 = emitter.context().create_block();
  auto block_b_81 = emitter.context().create_block();
  auto block_b_82 = emitter.context().create_block();
  auto block_b_83 = emitter.context().create_block();
  auto block_b_84 = emitter.context().create_block();
  auto block_b_85 = emitter.context().create_block();
  auto block_b_86 = emitter.context().create_block();
  auto block_b_87 = emitter.context().create_block();
  auto block_b_88 = emitter.context().create_block();
  auto block_b_89 = emitter.context().create_block();
  auto block_b_90 = emitter.context().create_block();
  auto block_b_91 = emitter.context().create_block();
  auto block_b_92 = emitter.context().create_block();
  auto block_b_94 = emitter.context().create_block();
  auto block_b_95 = emitter.context().create_block();
  auto block_b_96 = emitter.context().create_block();
  auto block_b_97 = emitter.context().create_block();
  auto block_b_98 = emitter.context().create_block();
  auto block_b_99 = emitter.context().create_block();
  auto block_b_100 = emitter.context().create_block();
  auto block_b_101 = emitter.context().create_block();
  auto block_b_102 = emitter.context().create_block();
  auto block_b_103 = emitter.context().create_block();
  auto block_b_104 = emitter.context().create_block();
  auto block_b_105 = emitter.context().create_block();
  auto block_b_106 = emitter.context().create_block();
  auto block_b_107 = emitter.context().create_block();
  auto block_b_108 = emitter.context().create_block();
  auto block_b_109 = emitter.context().create_block();
  auto block_b_110 = emitter.context().create_block();
  auto block_b_111 = emitter.context().create_block();
  auto block_b_112 = emitter.context().create_block();
  auto block_b_113 = emitter.context().create_block();
  auto block_b_114 = emitter.context().create_block();
  auto block_b_115 = emitter.context().create_block();
  auto block_b_116 = emitter.context().create_block();
  auto block_b_117 = emitter.context().create_block();
  auto block_b_119 = emitter.context().create_block();
  auto block_b_120 = emitter.context().create_block();
  auto block_b_121 = emitter.context().create_block();
  auto block_b_122 = emitter.context().create_block();
  auto block_b_123 = emitter.context().create_block();
  auto block_b_124 = emitter.context().create_block();
  auto block_b_126 = emitter.context().create_block();
  auto block_b_127 = emitter.context().create_block();
  auto block_b_128 = emitter.context().create_block();
  auto block_b_129 = emitter.context().create_block();
  auto block_b_130 = emitter.context().create_block();
  auto block_b_131 = emitter.context().create_block();
  auto block_b_132 = emitter.context().create_block();
  auto block_b_133 = emitter.context().create_block();
  auto block_b_134 = emitter.context().create_block();
  auto block_b_135 = emitter.context().create_block();
  auto block_b_136 = emitter.context().create_block();
  auto block_b_137 = emitter.context().create_block();
  auto block_b_139 = emitter.context().create_block();
  auto block_b_140 = emitter.context().create_block();
  auto block_b_141 = emitter.context().create_block();
  auto block_b_142 = emitter.context().create_block();
  auto block_b_143 = emitter.context().create_block();
  auto block_b_144 = emitter.context().create_block();
  auto DV_sym_25581_0_rn = emitter.alloc_local(emitter.context().types().s64(), true);
  auto DV_sym_25586_0_rm = emitter.alloc_local(emitter.context().types().s64(), true);
  auto DV_sym_25619_0_rn = emitter.alloc_local(emitter.context().types().v8s8(), true);
  auto DV_sym_25624_0_rm = emitter.alloc_local(emitter.context().types().v8s8(), true);
  wutils::Vector<uint8_t, 16> CV_sym_25629_0_rd;
  auto DV_sym_25629_0_rd = emitter.alloc_local(emitter.context().types().v16u8(), true);
  auto DV_sym_26026_0_rn = emitter.alloc_local(emitter.context().types().v16s8(), true);
  auto DV_sym_26031_0_rm = emitter.alloc_local(emitter.context().types().v16s8(), true);
  wutils::Vector<uint8_t, 16> CV_sym_26036_0_rd;
  auto DV_sym_26036_0_rd = emitter.alloc_local(emitter.context().types().v16u8(), true);
  auto DV_sym_26817_0_rn = emitter.alloc_local(emitter.context().types().v4s16(), true);
  auto DV_sym_26822_0_rm = emitter.alloc_local(emitter.context().types().v4s16(), true);
  wutils::Vector<uint16_t, 8> CV_sym_26827_0_rd;
  auto DV_sym_26827_0_rd = emitter.alloc_local(emitter.context().types().v8u16(), true);
  auto DV_sym_27032_0_rn = emitter.alloc_local(emitter.context().types().v8s16(), true);
  auto DV_sym_27037_0_rm = emitter.alloc_local(emitter.context().types().v8s16(), true);
  wutils::Vector<uint16_t, 8> CV_sym_27042_0_rd;
  auto DV_sym_27042_0_rd = emitter.alloc_local(emitter.context().types().v8u16(), true);
  auto DV_sym_27439_0_rn = emitter.alloc_local(emitter.context().types().v2s32(), true);
  auto DV_sym_27444_0_rm = emitter.alloc_local(emitter.context().types().v2s32(), true);
  wutils::Vector<uint32_t, 4> CV_sym_27449_0_rd;
  auto DV_sym_27449_0_rd = emitter.alloc_local(emitter.context().types().v4u32(), true);
  auto DV_sym_27556_0_rn = emitter.alloc_local(emitter.context().types().v4s32(), true);
  auto DV_sym_27561_0_rm = emitter.alloc_local(emitter.context().types().v4s32(), true);
  wutils::Vector<uint32_t, 4> CV_sym_27566_0_rd;
  auto DV_sym_27566_0_rd = emitter.alloc_local(emitter.context().types().v4u32(), true);
  auto DV_sym_27767_0_rn = emitter.alloc_local(emitter.context().types().v2s64(), true);
  auto DV_sym_27772_0_rm = emitter.alloc_local(emitter.context().types().v2s64(), true);
  wutils::Vector<uint64_t, 2> CV_sym_27777_0_rd;
  auto DV_sym_27777_0_rd = emitter.alloc_local(emitter.context().types().v2u64(), true);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:3140 [F] s_b_0_0=sym_25572_3_parameter_inst.SCALAR (const) */
    /* execute.simd:3140 [F] s_b_0_1: If s_b_0_0: Jump b_1 else b_3 (const) */
    if (insn.SCALAR) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.simd:3141 [F] s_b_1_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:6275 [D] s_b_1_1 = ReadRegBank 7:s_b_1_0 (u64) */
    auto s_b_1_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_1_1,emitter.const_u8(8));
    }
    /* execute.simd:3141 [D] s_b_1_2 = (s64)s_b_1_1 */
    auto s_b_1_2 = emitter.reinterpret(s_b_1_1, emitter.context().types().s64());
    /* execute.simd:3141 [D] s_b_1_3: sym_25581_0_rn = s_b_1_2, dominates: s_b_4_1 s_b_5_1  */
    emitter.store_local(DV_sym_25581_0_rn, s_b_1_2);
    /* execute.simd:3142 [F] s_b_1_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:6275 [D] s_b_1_5 = ReadRegBank 7:s_b_1_4 (u64) */
    auto s_b_1_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_1_5,emitter.const_u8(8));
    }
    /* execute.simd:3142 [D] s_b_1_6 = (s64)s_b_1_5 */
    auto s_b_1_6 = emitter.reinterpret(s_b_1_5, emitter.context().types().s64());
    /* execute.simd:3142 [D] s_b_1_7: sym_25586_0_rm = s_b_1_6, dominates: s_b_4_2 s_b_5_2  */
    emitter.store_local(DV_sym_25586_0_rm, s_b_1_6);
    /* execute.simd:3144 [F] s_b_1_8 = constant s64 0 (const) */
    /* execute.simd:3144 [D] s_b_1_9 = s_b_1_6<s_b_1_8 */
    auto s_b_1_9 = emitter.cmp_lt(s_b_1_6, emitter.const_s64((int64_t)0ULL));
    /* execute.simd:3144 [D] s_b_1_10: If s_b_1_9: Jump b_4 else b_5 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_4;
        dynamic_block_queue.push(block_b_4);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_5;
        dynamic_block_queue.push(block_b_5);
        false_target = block;
      }
      emitter.branch(s_b_1_9, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_2 not fully fixed
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:3150 [F] s_b_3_0=sym_25572_3_parameter_inst.arrangement (const) */
    /* execute.simd:3151 [F] s_b_3_1 = constant s32 0 (const) */
    /* execute.simd:3167 [F] s_b_3_2 = constant s32 1 (const) */
    /* execute.simd:3183 [F] s_b_3_3 = constant s32 2 (const) */
    /* execute.simd:3199 [F] s_b_3_4 = constant s32 3 (const) */
    /* execute.simd:3215 [F] s_b_3_5 = constant s32 4 (const) */
    /* execute.simd:3231 [F] s_b_3_6 = constant s32 5 (const) */
    /* execute.simd:3247 [F] s_b_3_7 = constant s32 6 (const) */
    /* execute.simd:3150 [F] s_b_3_8: Switch s_b_3_0: < <todo> > def b_145 (const) -> b_6, b_31, b_80, b_93, b_118, b_125, b_138, b_145,  */
    switch (insn.arrangement) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_31;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_80;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_93;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_118;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_125;
      break;
    case (int32_t)6ULL:
      goto fixed_block_b_138;
      break;
    default:
      goto fixed_block_b_145;
    }
  }
  // BLOCK b_4 not fully fixed
  // BLOCK b_5 not fully fixed
  /* b_3,  */
  fixed_block_b_6: 
  {
    /* execute.simd:3152 [F] s_b_6_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3152 [D] s_b_6_1 = ReadRegBank 15:s_b_6_0 (v8u8) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* execute.simd:3152 [D] s_b_6_2 = (v8s8)s_b_6_1 */
    auto s_b_6_2 = emitter.reinterpret(s_b_6_1, emitter.context().types().v8s8());
    /* execute.simd:3152 [D] s_b_6_3: sym_25619_0_rn = s_b_6_2, dominates: s_b_7_0 s_b_10_0 s_b_13_0 s_b_16_0 s_b_19_0 s_b_22_0 s_b_25_0 s_b_28_0 s_b_30_0 s_b_27_0 s_b_24_0 s_b_21_0 s_b_18_0 s_b_15_0 s_b_12_0 s_b_9_0  */
    emitter.store_local(DV_sym_25619_0_rn, s_b_6_2);
    /* execute.simd:3153 [F] s_b_6_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3153 [D] s_b_6_5 = ReadRegBank 15:s_b_6_4 (v8u8) */
    auto s_b_6_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_6_5,emitter.const_u8(8));
    }
    /* execute.simd:3153 [D] s_b_6_6 = (v8s8)s_b_6_5 */
    auto s_b_6_6 = emitter.reinterpret(s_b_6_5, emitter.context().types().v8s8());
    /* execute.simd:3153 [D] s_b_6_7: sym_25624_0_rm = s_b_6_6, dominates: s_b_7_3 s_b_8_0 s_b_10_3 s_b_11_0 s_b_13_3 s_b_14_0 s_b_16_3 s_b_17_0 s_b_19_3 s_b_20_0 s_b_22_3 s_b_23_0 s_b_25_3 s_b_26_0 s_b_28_3 s_b_30_3 s_b_27_3 s_b_24_3 s_b_21_3 s_b_18_3 s_b_15_3 s_b_12_3 s_b_9_3  */
    emitter.store_local(DV_sym_25624_0_rm, s_b_6_6);
    /* ???:4294967295 [F] s_b_6_8 = constant v16u8 
    {
    }
    (const) */
    /* execute.simd:3155 [F] s_b_6_9: sym_25629_0_rd = s_b_6_8 (const), dominates: s_b_7_8 s_b_9_7  */
    CV_sym_25629_0_rd = wutils::Vector<uint8_t, 16>(0);
    emitter.store_local(DV_sym_25629_0_rd, emitter.constant_vector_splat(wutils::Vector<uint8_t, 16>(0)[0], emitter.context().types().v16u8()));
    /* ???:4294967295 [F] s_b_6_10 = constant u8 0 (const) */
    /* execute.simd:3157 [D] s_b_6_6[s_b_6_10] */
    auto s_b_6_11 = emitter.vector_extract(s_b_6_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3157 [F] s_b_6_12 = constant s32 0 (const) */
    /* execute.simd:3157 [D] s_b_6_13 = (s32)s_b_6_11 */
    auto s_b_6_13 = emitter.sx(s_b_6_11, emitter.context().types().s32());
    /* execute.simd:3157 [D] s_b_6_14 = s_b_6_13<s_b_6_12 */
    auto s_b_6_14 = emitter.cmp_lt(s_b_6_13, emitter.const_s32((int32_t)0ULL));
    /* execute.simd:3157 [D] s_b_6_15: If s_b_6_14: Jump b_7 else b_9 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_7;
        dynamic_block_queue.push(block_b_7);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_9;
        dynamic_block_queue.push(block_b_9);
        false_target = block;
      }
      emitter.branch(s_b_6_14, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_7 not fully fixed
  // BLOCK b_8 not fully fixed
  // BLOCK b_9 not fully fixed
  // BLOCK b_10 not fully fixed
  // BLOCK b_11 not fully fixed
  // BLOCK b_12 not fully fixed
  // BLOCK b_13 not fully fixed
  // BLOCK b_14 not fully fixed
  // BLOCK b_15 not fully fixed
  // BLOCK b_16 not fully fixed
  // BLOCK b_17 not fully fixed
  // BLOCK b_18 not fully fixed
  // BLOCK b_19 not fully fixed
  // BLOCK b_20 not fully fixed
  // BLOCK b_21 not fully fixed
  // BLOCK b_22 not fully fixed
  // BLOCK b_23 not fully fixed
  // BLOCK b_24 not fully fixed
  // BLOCK b_25 not fully fixed
  // BLOCK b_26 not fully fixed
  // BLOCK b_27 not fully fixed
  // BLOCK b_28 not fully fixed
  // BLOCK b_29 not fully fixed
  // BLOCK b_30 not fully fixed
  /* b_3,  */
  fixed_block_b_31: 
  {
    /* execute.simd:3168 [F] s_b_31_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3168 [D] s_b_31_1 = ReadRegBank 16:s_b_31_0 (v16u8) */
    auto s_b_31_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_31_1,emitter.const_u8(16));
    }
    /* execute.simd:3168 [D] s_b_31_2 = (v16s8)s_b_31_1 */
    auto s_b_31_2 = emitter.reinterpret(s_b_31_1, emitter.context().types().v16s8());
    /* execute.simd:3168 [D] s_b_31_3: sym_26026_0_rn = s_b_31_2, dominates: s_b_32_0 s_b_35_0 s_b_38_0 s_b_41_0 s_b_44_0 s_b_47_0 s_b_50_0 s_b_53_0 s_b_56_0 s_b_59_0 s_b_62_0 s_b_65_0 s_b_68_0 s_b_71_0 s_b_74_0 s_b_77_0 s_b_79_0 s_b_76_0 s_b_73_0 s_b_70_0 s_b_67_0 s_b_64_0 s_b_61_0 s_b_58_0 s_b_55_0 s_b_52_0 s_b_49_0 s_b_46_0 s_b_43_0 s_b_40_0 s_b_37_0 s_b_34_0  */
    emitter.store_local(DV_sym_26026_0_rn, s_b_31_2);
    /* execute.simd:3169 [F] s_b_31_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3169 [D] s_b_31_5 = ReadRegBank 16:s_b_31_4 (v16u8) */
    auto s_b_31_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_31_5,emitter.const_u8(16));
    }
    /* execute.simd:3169 [D] s_b_31_6 = (v16s8)s_b_31_5 */
    auto s_b_31_6 = emitter.reinterpret(s_b_31_5, emitter.context().types().v16s8());
    /* execute.simd:3169 [D] s_b_31_7: sym_26031_0_rm = s_b_31_6, dominates: s_b_32_3 s_b_33_0 s_b_35_3 s_b_36_0 s_b_38_3 s_b_39_0 s_b_41_3 s_b_42_0 s_b_44_3 s_b_45_0 s_b_47_3 s_b_48_0 s_b_50_3 s_b_51_0 s_b_53_3 s_b_54_0 s_b_56_3 s_b_57_0 s_b_59_3 s_b_60_0 s_b_62_3 s_b_63_0 s_b_65_3 s_b_66_0 s_b_68_3 s_b_69_0 s_b_71_3 s_b_72_0 s_b_74_3 s_b_75_0 s_b_77_3 s_b_79_3 s_b_76_3 s_b_73_3 s_b_70_3 s_b_67_3 s_b_64_3 s_b_61_3 s_b_58_3 s_b_55_3 s_b_52_3 s_b_49_3 s_b_46_3 s_b_43_3 s_b_40_3 s_b_37_3 s_b_34_3  */
    emitter.store_local(DV_sym_26031_0_rm, s_b_31_6);
    /* ???:4294967295 [F] s_b_31_8 = constant v16u8 
    {
    }
    (const) */
    /* execute.simd:3171 [F] s_b_31_9: sym_26036_0_rd = s_b_31_8 (const), dominates: s_b_32_8 s_b_34_7  */
    CV_sym_26036_0_rd = wutils::Vector<uint8_t, 16>(0);
    emitter.store_local(DV_sym_26036_0_rd, emitter.constant_vector_splat(wutils::Vector<uint8_t, 16>(0)[0], emitter.context().types().v16u8()));
    /* ???:4294967295 [F] s_b_31_10 = constant u8 0 (const) */
    /* execute.simd:3173 [D] s_b_31_6[s_b_31_10] */
    auto s_b_31_11 = emitter.vector_extract(s_b_31_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3173 [F] s_b_31_12 = constant s32 0 (const) */
    /* execute.simd:3173 [D] s_b_31_13 = (s32)s_b_31_11 */
    auto s_b_31_13 = emitter.sx(s_b_31_11, emitter.context().types().s32());
    /* execute.simd:3173 [D] s_b_31_14 = s_b_31_13<s_b_31_12 */
    auto s_b_31_14 = emitter.cmp_lt(s_b_31_13, emitter.const_s32((int32_t)0ULL));
    /* execute.simd:3173 [D] s_b_31_15: If s_b_31_14: Jump b_32 else b_34 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_32;
        dynamic_block_queue.push(block_b_32);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_34;
        dynamic_block_queue.push(block_b_34);
        false_target = block;
      }
      emitter.branch(s_b_31_14, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_32 not fully fixed
  // BLOCK b_33 not fully fixed
  // BLOCK b_34 not fully fixed
  // BLOCK b_35 not fully fixed
  // BLOCK b_36 not fully fixed
  // BLOCK b_37 not fully fixed
  // BLOCK b_38 not fully fixed
  // BLOCK b_39 not fully fixed
  // BLOCK b_40 not fully fixed
  // BLOCK b_41 not fully fixed
  // BLOCK b_42 not fully fixed
  // BLOCK b_43 not fully fixed
  // BLOCK b_44 not fully fixed
  // BLOCK b_45 not fully fixed
  // BLOCK b_46 not fully fixed
  // BLOCK b_47 not fully fixed
  // BLOCK b_48 not fully fixed
  // BLOCK b_49 not fully fixed
  // BLOCK b_50 not fully fixed
  // BLOCK b_51 not fully fixed
  // BLOCK b_52 not fully fixed
  // BLOCK b_53 not fully fixed
  // BLOCK b_54 not fully fixed
  // BLOCK b_55 not fully fixed
  // BLOCK b_56 not fully fixed
  // BLOCK b_57 not fully fixed
  // BLOCK b_58 not fully fixed
  // BLOCK b_59 not fully fixed
  // BLOCK b_60 not fully fixed
  // BLOCK b_61 not fully fixed
  // BLOCK b_62 not fully fixed
  // BLOCK b_63 not fully fixed
  // BLOCK b_64 not fully fixed
  // BLOCK b_65 not fully fixed
  // BLOCK b_66 not fully fixed
  // BLOCK b_67 not fully fixed
  // BLOCK b_68 not fully fixed
  // BLOCK b_69 not fully fixed
  // BLOCK b_70 not fully fixed
  // BLOCK b_71 not fully fixed
  // BLOCK b_72 not fully fixed
  // BLOCK b_73 not fully fixed
  // BLOCK b_74 not fully fixed
  // BLOCK b_75 not fully fixed
  // BLOCK b_76 not fully fixed
  // BLOCK b_77 not fully fixed
  // BLOCK b_78 not fully fixed
  // BLOCK b_79 not fully fixed
  /* b_3,  */
  fixed_block_b_80: 
  {
    /* execute.simd:3184 [F] s_b_80_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3184 [D] s_b_80_1 = ReadRegBank 17:s_b_80_0 (v4u16) */
    auto s_b_80_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_80_1,emitter.const_u8(8));
    }
    /* execute.simd:3184 [D] s_b_80_2 = (v4s16)s_b_80_1 */
    auto s_b_80_2 = emitter.reinterpret(s_b_80_1, emitter.context().types().v4s16());
    /* execute.simd:3184 [D] s_b_80_3: sym_26817_0_rn = s_b_80_2, dominates: s_b_81_0 s_b_84_0 s_b_87_0 s_b_90_0 s_b_92_0 s_b_89_0 s_b_86_0 s_b_83_0  */
    emitter.store_local(DV_sym_26817_0_rn, s_b_80_2);
    /* execute.simd:3185 [F] s_b_80_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3185 [D] s_b_80_5 = ReadRegBank 17:s_b_80_4 (v4u16) */
    auto s_b_80_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_80_5,emitter.const_u8(8));
    }
    /* execute.simd:3185 [D] s_b_80_6 = (v4s16)s_b_80_5 */
    auto s_b_80_6 = emitter.reinterpret(s_b_80_5, emitter.context().types().v4s16());
    /* execute.simd:3185 [D] s_b_80_7: sym_26822_0_rm = s_b_80_6, dominates: s_b_81_3 s_b_82_0 s_b_84_3 s_b_85_0 s_b_87_3 s_b_88_0 s_b_90_3 s_b_92_3 s_b_89_3 s_b_86_3 s_b_83_3  */
    emitter.store_local(DV_sym_26822_0_rm, s_b_80_6);
    /* ???:4294967295 [F] s_b_80_8 = constant v8u16 
    {
    }
    (const) */
    /* execute.simd:3187 [F] s_b_80_9: sym_26827_0_rd = s_b_80_8 (const), dominates: s_b_81_8 s_b_83_7  */
    CV_sym_26827_0_rd = wutils::Vector<uint16_t, 8>(0);
    emitter.store_local(DV_sym_26827_0_rd, emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()));
    /* ???:4294967295 [F] s_b_80_10 = constant u8 0 (const) */
    /* execute.simd:3189 [D] s_b_80_6[s_b_80_10] */
    auto s_b_80_11 = emitter.vector_extract(s_b_80_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3189 [F] s_b_80_12 = constant s32 0 (const) */
    /* execute.simd:3189 [D] s_b_80_13 = (s32)s_b_80_11 */
    auto s_b_80_13 = emitter.sx(s_b_80_11, emitter.context().types().s32());
    /* execute.simd:3189 [D] s_b_80_14 = s_b_80_13<s_b_80_12 */
    auto s_b_80_14 = emitter.cmp_lt(s_b_80_13, emitter.const_s32((int32_t)0ULL));
    /* execute.simd:3189 [D] s_b_80_15: If s_b_80_14: Jump b_81 else b_83 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_81;
        dynamic_block_queue.push(block_b_81);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_83;
        dynamic_block_queue.push(block_b_83);
        false_target = block;
      }
      emitter.branch(s_b_80_14, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_81 not fully fixed
  // BLOCK b_82 not fully fixed
  // BLOCK b_83 not fully fixed
  // BLOCK b_84 not fully fixed
  // BLOCK b_85 not fully fixed
  // BLOCK b_86 not fully fixed
  // BLOCK b_87 not fully fixed
  // BLOCK b_88 not fully fixed
  // BLOCK b_89 not fully fixed
  // BLOCK b_90 not fully fixed
  // BLOCK b_91 not fully fixed
  // BLOCK b_92 not fully fixed
  /* b_3,  */
  fixed_block_b_93: 
  {
    /* execute.simd:3200 [F] s_b_93_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3200 [D] s_b_93_1 = ReadRegBank 18:s_b_93_0 (v8u16) */
    auto s_b_93_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_93_1,emitter.const_u8(16));
    }
    /* execute.simd:3200 [D] s_b_93_2 = (v8s16)s_b_93_1 */
    auto s_b_93_2 = emitter.reinterpret(s_b_93_1, emitter.context().types().v8s16());
    /* execute.simd:3200 [D] s_b_93_3: sym_27032_0_rn = s_b_93_2, dominates: s_b_94_0 s_b_97_0 s_b_100_0 s_b_103_0 s_b_106_0 s_b_109_0 s_b_112_0 s_b_115_0 s_b_117_0 s_b_114_0 s_b_111_0 s_b_108_0 s_b_105_0 s_b_102_0 s_b_99_0 s_b_96_0  */
    emitter.store_local(DV_sym_27032_0_rn, s_b_93_2);
    /* execute.simd:3201 [F] s_b_93_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3201 [D] s_b_93_5 = ReadRegBank 18:s_b_93_4 (v8u16) */
    auto s_b_93_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_93_5,emitter.const_u8(16));
    }
    /* execute.simd:3201 [D] s_b_93_6 = (v8s16)s_b_93_5 */
    auto s_b_93_6 = emitter.reinterpret(s_b_93_5, emitter.context().types().v8s16());
    /* execute.simd:3201 [D] s_b_93_7: sym_27037_0_rm = s_b_93_6, dominates: s_b_94_3 s_b_95_0 s_b_97_3 s_b_98_0 s_b_100_3 s_b_101_0 s_b_103_3 s_b_104_0 s_b_106_3 s_b_107_0 s_b_109_3 s_b_110_0 s_b_112_3 s_b_113_0 s_b_115_3 s_b_117_3 s_b_114_3 s_b_111_3 s_b_108_3 s_b_105_3 s_b_102_3 s_b_99_3 s_b_96_3  */
    emitter.store_local(DV_sym_27037_0_rm, s_b_93_6);
    /* ???:4294967295 [F] s_b_93_8 = constant v8u16 
    {
    }
    (const) */
    /* execute.simd:3203 [F] s_b_93_9: sym_27042_0_rd = s_b_93_8 (const), dominates: s_b_94_8 s_b_96_7  */
    CV_sym_27042_0_rd = wutils::Vector<uint16_t, 8>(0);
    emitter.store_local(DV_sym_27042_0_rd, emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()));
    /* ???:4294967295 [F] s_b_93_10 = constant u8 0 (const) */
    /* execute.simd:3205 [D] s_b_93_6[s_b_93_10] */
    auto s_b_93_11 = emitter.vector_extract(s_b_93_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3205 [F] s_b_93_12 = constant s32 0 (const) */
    /* execute.simd:3205 [D] s_b_93_13 = (s32)s_b_93_11 */
    auto s_b_93_13 = emitter.sx(s_b_93_11, emitter.context().types().s32());
    /* execute.simd:3205 [D] s_b_93_14 = s_b_93_13<s_b_93_12 */
    auto s_b_93_14 = emitter.cmp_lt(s_b_93_13, emitter.const_s32((int32_t)0ULL));
    /* execute.simd:3205 [D] s_b_93_15: If s_b_93_14: Jump b_94 else b_96 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_94;
        dynamic_block_queue.push(block_b_94);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_96;
        dynamic_block_queue.push(block_b_96);
        false_target = block;
      }
      emitter.branch(s_b_93_14, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_94 not fully fixed
  // BLOCK b_95 not fully fixed
  // BLOCK b_96 not fully fixed
  // BLOCK b_97 not fully fixed
  // BLOCK b_98 not fully fixed
  // BLOCK b_99 not fully fixed
  // BLOCK b_100 not fully fixed
  // BLOCK b_101 not fully fixed
  // BLOCK b_102 not fully fixed
  // BLOCK b_103 not fully fixed
  // BLOCK b_104 not fully fixed
  // BLOCK b_105 not fully fixed
  // BLOCK b_106 not fully fixed
  // BLOCK b_107 not fully fixed
  // BLOCK b_108 not fully fixed
  // BLOCK b_109 not fully fixed
  // BLOCK b_110 not fully fixed
  // BLOCK b_111 not fully fixed
  // BLOCK b_112 not fully fixed
  // BLOCK b_113 not fully fixed
  // BLOCK b_114 not fully fixed
  // BLOCK b_115 not fully fixed
  // BLOCK b_116 not fully fixed
  // BLOCK b_117 not fully fixed
  /* b_3,  */
  fixed_block_b_118: 
  {
    /* execute.simd:3216 [F] s_b_118_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3216 [D] s_b_118_1 = ReadRegBank 19:s_b_118_0 (v2u32) */
    auto s_b_118_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_118_1,emitter.const_u8(8));
    }
    /* execute.simd:3216 [D] s_b_118_2 = (v2s32)s_b_118_1 */
    auto s_b_118_2 = emitter.reinterpret(s_b_118_1, emitter.context().types().v2s32());
    /* execute.simd:3216 [D] s_b_118_3: sym_27439_0_rn = s_b_118_2, dominates: s_b_119_0 s_b_122_0 s_b_124_0 s_b_121_0  */
    emitter.store_local(DV_sym_27439_0_rn, s_b_118_2);
    /* execute.simd:3217 [F] s_b_118_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3217 [D] s_b_118_5 = ReadRegBank 19:s_b_118_4 (v2u32) */
    auto s_b_118_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_118_5,emitter.const_u8(8));
    }
    /* execute.simd:3217 [D] s_b_118_6 = (v2s32)s_b_118_5 */
    auto s_b_118_6 = emitter.reinterpret(s_b_118_5, emitter.context().types().v2s32());
    /* execute.simd:3217 [D] s_b_118_7: sym_27444_0_rm = s_b_118_6, dominates: s_b_119_3 s_b_120_0 s_b_122_3 s_b_124_3 s_b_121_3  */
    emitter.store_local(DV_sym_27444_0_rm, s_b_118_6);
    /* ???:4294967295 [F] s_b_118_8 = constant v4u32 
    {
    }
    (const) */
    /* execute.simd:3219 [F] s_b_118_9: sym_27449_0_rd = s_b_118_8 (const), dominates: s_b_119_8 s_b_121_7  */
    CV_sym_27449_0_rd = wutils::Vector<uint32_t, 4>(0);
    emitter.store_local(DV_sym_27449_0_rd, emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()));
    /* ???:4294967295 [F] s_b_118_10 = constant u8 0 (const) */
    /* execute.simd:3221 [D] s_b_118_6[s_b_118_10] */
    auto s_b_118_11 = emitter.vector_extract(s_b_118_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3221 [F] s_b_118_12 = constant s32 0 (const) */
    /* execute.simd:3221 [D] s_b_118_13 = s_b_118_11<s_b_118_12 */
    auto s_b_118_13 = emitter.cmp_lt(s_b_118_11, emitter.const_s32((int32_t)0ULL));
    /* execute.simd:3221 [D] s_b_118_14: If s_b_118_13: Jump b_119 else b_121 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_119;
        dynamic_block_queue.push(block_b_119);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_121;
        dynamic_block_queue.push(block_b_121);
        false_target = block;
      }
      emitter.branch(s_b_118_13, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_119 not fully fixed
  // BLOCK b_120 not fully fixed
  // BLOCK b_121 not fully fixed
  // BLOCK b_122 not fully fixed
  // BLOCK b_123 not fully fixed
  // BLOCK b_124 not fully fixed
  /* b_3,  */
  fixed_block_b_125: 
  {
    /* execute.simd:3232 [F] s_b_125_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3232 [D] s_b_125_1 = ReadRegBank 20:s_b_125_0 (v4u32) */
    auto s_b_125_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_125_1,emitter.const_u8(16));
    }
    /* execute.simd:3232 [D] s_b_125_2 = (v4s32)s_b_125_1 */
    auto s_b_125_2 = emitter.reinterpret(s_b_125_1, emitter.context().types().v4s32());
    /* execute.simd:3232 [D] s_b_125_3: sym_27556_0_rn = s_b_125_2, dominates: s_b_126_0 s_b_129_0 s_b_132_0 s_b_135_0 s_b_137_0 s_b_134_0 s_b_131_0 s_b_128_0  */
    emitter.store_local(DV_sym_27556_0_rn, s_b_125_2);
    /* execute.simd:3233 [F] s_b_125_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3233 [D] s_b_125_5 = ReadRegBank 20:s_b_125_4 (v4u32) */
    auto s_b_125_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_125_5,emitter.const_u8(16));
    }
    /* execute.simd:3233 [D] s_b_125_6 = (v4s32)s_b_125_5 */
    auto s_b_125_6 = emitter.reinterpret(s_b_125_5, emitter.context().types().v4s32());
    /* execute.simd:3233 [D] s_b_125_7: sym_27561_0_rm = s_b_125_6, dominates: s_b_126_3 s_b_127_0 s_b_129_3 s_b_130_0 s_b_132_3 s_b_133_0 s_b_135_3 s_b_137_3 s_b_134_3 s_b_131_3 s_b_128_3  */
    emitter.store_local(DV_sym_27561_0_rm, s_b_125_6);
    /* ???:4294967295 [F] s_b_125_8 = constant v4u32 
    {
    }
    (const) */
    /* execute.simd:3235 [F] s_b_125_9: sym_27566_0_rd = s_b_125_8 (const), dominates: s_b_126_8 s_b_128_7  */
    CV_sym_27566_0_rd = wutils::Vector<uint32_t, 4>(0);
    emitter.store_local(DV_sym_27566_0_rd, emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()));
    /* ???:4294967295 [F] s_b_125_10 = constant u8 0 (const) */
    /* execute.simd:3237 [D] s_b_125_6[s_b_125_10] */
    auto s_b_125_11 = emitter.vector_extract(s_b_125_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3237 [F] s_b_125_12 = constant s32 0 (const) */
    /* execute.simd:3237 [D] s_b_125_13 = s_b_125_11<s_b_125_12 */
    auto s_b_125_13 = emitter.cmp_lt(s_b_125_11, emitter.const_s32((int32_t)0ULL));
    /* execute.simd:3237 [D] s_b_125_14: If s_b_125_13: Jump b_126 else b_128 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_126;
        dynamic_block_queue.push(block_b_126);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_128;
        dynamic_block_queue.push(block_b_128);
        false_target = block;
      }
      emitter.branch(s_b_125_13, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_126 not fully fixed
  // BLOCK b_127 not fully fixed
  // BLOCK b_128 not fully fixed
  // BLOCK b_129 not fully fixed
  // BLOCK b_130 not fully fixed
  // BLOCK b_131 not fully fixed
  // BLOCK b_132 not fully fixed
  // BLOCK b_133 not fully fixed
  // BLOCK b_134 not fully fixed
  // BLOCK b_135 not fully fixed
  // BLOCK b_136 not fully fixed
  // BLOCK b_137 not fully fixed
  /* b_3,  */
  fixed_block_b_138: 
  {
    /* execute.simd:3248 [F] s_b_138_0=sym_25572_3_parameter_inst.rn (const) */
    /* execute.simd:3248 [D] s_b_138_1 = ReadRegBank 21:s_b_138_0 (v2u64) */
    auto s_b_138_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_138_1,emitter.const_u8(16));
    }
    /* execute.simd:3248 [D] s_b_138_2 = (v2s64)s_b_138_1 */
    auto s_b_138_2 = emitter.reinterpret(s_b_138_1, emitter.context().types().v2s64());
    /* execute.simd:3248 [D] s_b_138_3: sym_27767_0_rn = s_b_138_2, dominates: s_b_139_0 s_b_142_0 s_b_144_0 s_b_141_0  */
    emitter.store_local(DV_sym_27767_0_rn, s_b_138_2);
    /* execute.simd:3249 [F] s_b_138_4=sym_25572_3_parameter_inst.rm (const) */
    /* execute.simd:3249 [D] s_b_138_5 = ReadRegBank 21:s_b_138_4 (v2u64) */
    auto s_b_138_5 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v2u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_138_5,emitter.const_u8(16));
    }
    /* execute.simd:3249 [D] s_b_138_6 = (v2s64)s_b_138_5 */
    auto s_b_138_6 = emitter.reinterpret(s_b_138_5, emitter.context().types().v2s64());
    /* execute.simd:3249 [D] s_b_138_7: sym_27772_0_rm = s_b_138_6, dominates: s_b_139_3 s_b_140_0 s_b_142_3 s_b_144_3 s_b_141_3  */
    emitter.store_local(DV_sym_27772_0_rm, s_b_138_6);
    /* ???:4294967295 [F] s_b_138_8 = constant v2u64 
    {
    }
    (const) */
    /* execute.simd:3251 [F] s_b_138_9: sym_27777_0_rd = s_b_138_8 (const), dominates: s_b_139_8 s_b_141_7  */
    CV_sym_27777_0_rd = wutils::Vector<uint64_t, 2>(0);
    emitter.store_local(DV_sym_27777_0_rd, emitter.constant_vector_splat(wutils::Vector<uint64_t, 2>(0)[0], emitter.context().types().v2u64()));
    /* ???:4294967295 [F] s_b_138_10 = constant u8 0 (const) */
    /* execute.simd:3253 [D] s_b_138_6[s_b_138_10] */
    auto s_b_138_11 = emitter.vector_extract(s_b_138_6, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3253 [F] s_b_138_12 = constant s64 0 (const) */
    /* execute.simd:3253 [D] s_b_138_13 = s_b_138_11<s_b_138_12 */
    auto s_b_138_13 = emitter.cmp_lt(s_b_138_11, emitter.const_s64((int64_t)0ULL));
    /* execute.simd:3253 [D] s_b_138_14: If s_b_138_13: Jump b_139 else b_141 */
    {
      dbt::el::Block *true_target;
      {
        auto block = block_b_139;
        dynamic_block_queue.push(block_b_139);
        true_target = block;
      }
      dbt::el::Block *false_target;
      {
        auto block = block_b_141;
        dynamic_block_queue.push(block_b_141);
        false_target = block;
      }
      emitter.branch(s_b_138_13, true_target, false_target);
    }
    goto fixed_done;
  }
  // BLOCK b_139 not fully fixed
  // BLOCK b_140 not fully fixed
  // BLOCK b_141 not fully fixed
  // BLOCK b_142 not fully fixed
  // BLOCK b_143 not fully fixed
  // BLOCK b_144 not fully fixed
  /* b_3,  */
  fixed_block_b_145: 
  {
    /* execute.simd:3264 [D] s_b_145_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_145_1: Jump b_2 (const) */
    {
      auto block = block_b_2;
      dynamic_block_queue.push(block_b_2);
      emitter.jump(block);
    }
    goto fixed_done;
  }
  fixed_done:
  if (dynamic_block_queue.size() > 0) 
  {
    std::set<captive::arch::dbt::el::Block *> emitted_blocks;
    while (dynamic_block_queue.size() > 0) 
    {
      captive::arch::dbt::el::Block *block_index = dynamic_block_queue.front();
      dynamic_block_queue.pop();
      if (emitted_blocks.count(block_index)) continue;
      emitted_blocks.insert(block_index);
      if (block_index == block_b_2) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_2);
        /* ???:4294967295 [F] s_b_2_0: Return */
        emitter.jump(__exit_block);
      }
      else if (block_index == block_b_4) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_4);
        /* execute.simd:3145 [F] s_b_4_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3145 [D] s_b_4_1 = sym_25581_0_rn int64_t */
        auto s_b_4_1 = emitter.load_local(DV_sym_25581_0_rn, emitter.context().types().s64());
        /* execute.simd:3145 [D] s_b_4_2 = sym_25586_0_rm int64_t */
        auto s_b_4_2 = emitter.load_local(DV_sym_25586_0_rm, emitter.context().types().s64());
        /* execute.simd:3145 [D] s_b_4_3 = -s_b_4_2 */
        auto s_b_4_3 = emitter.neg(s_b_4_2);
        /* execute.simd:3145 [D] s_b_4_4 = s_b_4_1->>s_b_4_3 */
        auto s_b_4_4 = emitter.sar(s_b_4_1, s_b_4_3);
        /* execute.simd:3145 [D] s_b_4_5 = (u64)s_b_4_4 */
        auto s_b_4_5 = emitter.reinterpret(s_b_4_4, emitter.context().types().u64());
        /* execute.simd:6246 [D] s_b_4_6: WriteRegBank 2:s_b_4_0 = s_b_4_5 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_5,emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_5);
        /* execute.simd:6247 [F] s_b_4_7 = constant u64 0 (const) */
        /* execute.simd:6247 [F] s_b_4_8: WriteRegBank 3:s_b_4_0 = s_b_4_7 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
        /* execute.simd:0 [F] s_b_4_9: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_5) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_5);
        /* execute.simd:3147 [F] s_b_5_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3147 [D] s_b_5_1 = sym_25581_0_rn int64_t */
        auto s_b_5_1 = emitter.load_local(DV_sym_25581_0_rn, emitter.context().types().s64());
        /* execute.simd:3147 [D] s_b_5_2 = sym_25586_0_rm int64_t */
        auto s_b_5_2 = emitter.load_local(DV_sym_25586_0_rm, emitter.context().types().s64());
        /* execute.simd:3147 [D] s_b_5_3 = s_b_5_1<<s_b_5_2 */
        auto s_b_5_3 = emitter.shl(s_b_5_1, s_b_5_2);
        /* execute.simd:3147 [D] s_b_5_4 = (u64)s_b_5_3 */
        auto s_b_5_4 = emitter.reinterpret(s_b_5_3, emitter.context().types().u64());
        /* execute.simd:6246 [D] s_b_5_5: WriteRegBank 2:s_b_5_0 = s_b_5_4 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_4,emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_4);
        /* execute.simd:6247 [F] s_b_5_6 = constant u64 0 (const) */
        /* execute.simd:6247 [F] s_b_5_7: WriteRegBank 3:s_b_5_0 = s_b_5_6 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL),emitter.const_u8(8));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rd))),emitter.const_u64((uint64_t)0ULL));
        /* execute.simd:0 [F] s_b_5_8: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_7) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_7);
        /* execute.simd:3158 [D] s_b_7_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_7_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_7_1 = constant u8 0 (const) */
        /* execute.simd:3158 [D] s_b_7_0[s_b_7_1] */
        auto s_b_7_2 = emitter.vector_extract(s_b_7_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3158 [D] s_b_7_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_7_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_7_4 = constant u8 0 (const) */
        /* execute.simd:3158 [D] s_b_7_3[s_b_7_4] */
        auto s_b_7_5 = emitter.vector_extract(s_b_7_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3158 [D] s_b_7_6 = -s_b_7_5 */
        auto s_b_7_6 = emitter.neg(s_b_7_5);
        /* execute.simd:3158 [D] s_b_7_7 = s_b_7_2->>s_b_7_6 */
        auto s_b_7_7 = emitter.sar(s_b_7_2, s_b_7_6);
        /* execute.simd:3158 [F] s_b_7_8 = sym_25629_0_rd (const) wutils::Vector<uint8_t, 16> */
        wutils::Vector<uint8_t, 16> s_b_7_8 = CV_sym_25629_0_rd;
        /* execute.simd:3158 [D] s_b_7_9 = (u8)s_b_7_7 */
        auto s_b_7_9 = emitter.reinterpret(s_b_7_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_7_10 = constant s32 0 (const) */
        /* execute.simd:3158 [D] s_b_7_11 = s_b_7_8[s_b_7_10] <= s_b_7_9 */
        auto s_b_7_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_7_8[0], emitter.context().types().v16u8()), emitter.const_s32((int32_t)0ULL), s_b_7_9);
        /* execute.simd:3158 [D] s_b_7_12: sym_25629_0_rd = s_b_7_11, dominates: s_b_10_8 s_b_12_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_7_11);
        /* execute.simd:3158 [F] s_b_7_13: Jump b_8 (const) */
        {
          auto block = block_b_8;
          dynamic_block_queue.push(block_b_8);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_8) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_8);
        /* execute.simd:3157 [D] s_b_8_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_8_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_8_1 = constant u8 1 (const) */
        /* execute.simd:3157 [D] s_b_8_0[s_b_8_1] */
        auto s_b_8_2 = emitter.vector_extract(s_b_8_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3157 [F] s_b_8_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_8_4 = (s32)s_b_8_2 */
        auto s_b_8_4 = emitter.sx(s_b_8_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_8_5 = s_b_8_4<s_b_8_3 */
        auto s_b_8_5 = emitter.cmp_lt(s_b_8_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_8_6: If s_b_8_5: Jump b_10 else b_12 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_10;
            dynamic_block_queue.push(block_b_10);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_12;
            dynamic_block_queue.push(block_b_12);
            false_target = block;
          }
          emitter.branch(s_b_8_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_9) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_9);
        /* execute.simd:3160 [D] s_b_9_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_9_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_9_1 = constant u8 0 (const) */
        /* execute.simd:3160 [D] s_b_9_0[s_b_9_1] */
        auto s_b_9_2 = emitter.vector_extract(s_b_9_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3160 [D] s_b_9_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_9_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_9_4 = constant u8 0 (const) */
        /* execute.simd:3160 [D] s_b_9_3[s_b_9_4] */
        auto s_b_9_5 = emitter.vector_extract(s_b_9_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3160 [D] s_b_9_6 = s_b_9_2<<s_b_9_5 */
        auto s_b_9_6 = emitter.shl(s_b_9_2, s_b_9_5);
        /* execute.simd:3160 [F] s_b_9_7 = sym_25629_0_rd (const) wutils::Vector<uint8_t, 16> */
        wutils::Vector<uint8_t, 16> s_b_9_7 = CV_sym_25629_0_rd;
        /* execute.simd:3160 [D] s_b_9_8 = (u8)s_b_9_6 */
        auto s_b_9_8 = emitter.reinterpret(s_b_9_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_9_9 = constant s32 0 (const) */
        /* execute.simd:3160 [D] s_b_9_10 = s_b_9_7[s_b_9_9] <= s_b_9_8 */
        auto s_b_9_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_9_7[0], emitter.context().types().v16u8()), emitter.const_s32((int32_t)0ULL), s_b_9_8);
        /* execute.simd:3160 [D] s_b_9_11: sym_25629_0_rd = s_b_9_10, dominates: s_b_10_8 s_b_12_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_9_10);
        /* execute.simd:3160 [F] s_b_9_12: Jump b_8 (const) */
        {
          auto block = block_b_8;
          dynamic_block_queue.push(block_b_8);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_10) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_10);
        /* execute.simd:3158 [D] s_b_10_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_10_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_10_1 = constant u8 1 (const) */
        /* execute.simd:3158 [D] s_b_10_0[s_b_10_1] */
        auto s_b_10_2 = emitter.vector_extract(s_b_10_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3158 [D] s_b_10_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_10_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_10_4 = constant u8 1 (const) */
        /* execute.simd:3158 [D] s_b_10_3[s_b_10_4] */
        auto s_b_10_5 = emitter.vector_extract(s_b_10_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3158 [D] s_b_10_6 = -s_b_10_5 */
        auto s_b_10_6 = emitter.neg(s_b_10_5);
        /* execute.simd:3158 [D] s_b_10_7 = s_b_10_2->>s_b_10_6 */
        auto s_b_10_7 = emitter.sar(s_b_10_2, s_b_10_6);
        /* execute.simd:3158 [D] s_b_10_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_10_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_10_9 = (u8)s_b_10_7 */
        auto s_b_10_9 = emitter.reinterpret(s_b_10_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_10_10 = constant s32 1 (const) */
        /* execute.simd:3158 [D] s_b_10_11 = s_b_10_8[s_b_10_10] <= s_b_10_9 */
        auto s_b_10_11 = emitter.vector_insert(s_b_10_8, emitter.const_s32((int32_t)1ULL), s_b_10_9);
        /* execute.simd:3158 [D] s_b_10_12: sym_25629_0_rd = s_b_10_11, dominates: s_b_13_8 s_b_15_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_10_11);
        /* execute.simd:3158 [F] s_b_10_13: Jump b_11 (const) */
        {
          auto block = block_b_11;
          dynamic_block_queue.push(block_b_11);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_11) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_11);
        /* execute.simd:3157 [D] s_b_11_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_11_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_11_1 = constant u8 2 (const) */
        /* execute.simd:3157 [D] s_b_11_0[s_b_11_1] */
        auto s_b_11_2 = emitter.vector_extract(s_b_11_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3157 [F] s_b_11_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_11_4 = (s32)s_b_11_2 */
        auto s_b_11_4 = emitter.sx(s_b_11_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_11_5 = s_b_11_4<s_b_11_3 */
        auto s_b_11_5 = emitter.cmp_lt(s_b_11_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_11_6: If s_b_11_5: Jump b_13 else b_15 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_13;
            dynamic_block_queue.push(block_b_13);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_15;
            dynamic_block_queue.push(block_b_15);
            false_target = block;
          }
          emitter.branch(s_b_11_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_12) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_12);
        /* execute.simd:3160 [D] s_b_12_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_12_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_12_1 = constant u8 1 (const) */
        /* execute.simd:3160 [D] s_b_12_0[s_b_12_1] */
        auto s_b_12_2 = emitter.vector_extract(s_b_12_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3160 [D] s_b_12_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_12_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_12_4 = constant u8 1 (const) */
        /* execute.simd:3160 [D] s_b_12_3[s_b_12_4] */
        auto s_b_12_5 = emitter.vector_extract(s_b_12_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3160 [D] s_b_12_6 = s_b_12_2<<s_b_12_5 */
        auto s_b_12_6 = emitter.shl(s_b_12_2, s_b_12_5);
        /* execute.simd:3160 [D] s_b_12_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_12_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_12_8 = (u8)s_b_12_6 */
        auto s_b_12_8 = emitter.reinterpret(s_b_12_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_12_9 = constant s32 1 (const) */
        /* execute.simd:3160 [D] s_b_12_10 = s_b_12_7[s_b_12_9] <= s_b_12_8 */
        auto s_b_12_10 = emitter.vector_insert(s_b_12_7, emitter.const_s32((int32_t)1ULL), s_b_12_8);
        /* execute.simd:3160 [D] s_b_12_11: sym_25629_0_rd = s_b_12_10, dominates: s_b_13_8 s_b_15_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_12_10);
        /* execute.simd:3160 [F] s_b_12_12: Jump b_11 (const) */
        {
          auto block = block_b_11;
          dynamic_block_queue.push(block_b_11);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_13) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_13);
        /* execute.simd:3158 [D] s_b_13_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_13_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_13_1 = constant u8 2 (const) */
        /* execute.simd:3158 [D] s_b_13_0[s_b_13_1] */
        auto s_b_13_2 = emitter.vector_extract(s_b_13_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3158 [D] s_b_13_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_13_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_13_4 = constant u8 2 (const) */
        /* execute.simd:3158 [D] s_b_13_3[s_b_13_4] */
        auto s_b_13_5 = emitter.vector_extract(s_b_13_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3158 [D] s_b_13_6 = -s_b_13_5 */
        auto s_b_13_6 = emitter.neg(s_b_13_5);
        /* execute.simd:3158 [D] s_b_13_7 = s_b_13_2->>s_b_13_6 */
        auto s_b_13_7 = emitter.sar(s_b_13_2, s_b_13_6);
        /* execute.simd:3158 [D] s_b_13_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_13_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_13_9 = (u8)s_b_13_7 */
        auto s_b_13_9 = emitter.reinterpret(s_b_13_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_13_10 = constant s32 2 (const) */
        /* execute.simd:3158 [D] s_b_13_11 = s_b_13_8[s_b_13_10] <= s_b_13_9 */
        auto s_b_13_11 = emitter.vector_insert(s_b_13_8, emitter.const_s32((int32_t)2ULL), s_b_13_9);
        /* execute.simd:3158 [D] s_b_13_12: sym_25629_0_rd = s_b_13_11, dominates: s_b_16_8 s_b_18_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_13_11);
        /* execute.simd:3158 [F] s_b_13_13: Jump b_14 (const) */
        {
          auto block = block_b_14;
          dynamic_block_queue.push(block_b_14);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_14) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_14);
        /* execute.simd:3157 [D] s_b_14_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_14_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_14_1 = constant u8 3 (const) */
        /* execute.simd:3157 [D] s_b_14_0[s_b_14_1] */
        auto s_b_14_2 = emitter.vector_extract(s_b_14_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3157 [F] s_b_14_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_14_4 = (s32)s_b_14_2 */
        auto s_b_14_4 = emitter.sx(s_b_14_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_14_5 = s_b_14_4<s_b_14_3 */
        auto s_b_14_5 = emitter.cmp_lt(s_b_14_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_14_6: If s_b_14_5: Jump b_16 else b_18 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_16;
            dynamic_block_queue.push(block_b_16);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_18;
            dynamic_block_queue.push(block_b_18);
            false_target = block;
          }
          emitter.branch(s_b_14_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_15) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_15);
        /* execute.simd:3160 [D] s_b_15_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_15_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_15_1 = constant u8 2 (const) */
        /* execute.simd:3160 [D] s_b_15_0[s_b_15_1] */
        auto s_b_15_2 = emitter.vector_extract(s_b_15_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3160 [D] s_b_15_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_15_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_15_4 = constant u8 2 (const) */
        /* execute.simd:3160 [D] s_b_15_3[s_b_15_4] */
        auto s_b_15_5 = emitter.vector_extract(s_b_15_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3160 [D] s_b_15_6 = s_b_15_2<<s_b_15_5 */
        auto s_b_15_6 = emitter.shl(s_b_15_2, s_b_15_5);
        /* execute.simd:3160 [D] s_b_15_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_15_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_15_8 = (u8)s_b_15_6 */
        auto s_b_15_8 = emitter.reinterpret(s_b_15_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_15_9 = constant s32 2 (const) */
        /* execute.simd:3160 [D] s_b_15_10 = s_b_15_7[s_b_15_9] <= s_b_15_8 */
        auto s_b_15_10 = emitter.vector_insert(s_b_15_7, emitter.const_s32((int32_t)2ULL), s_b_15_8);
        /* execute.simd:3160 [D] s_b_15_11: sym_25629_0_rd = s_b_15_10, dominates: s_b_16_8 s_b_18_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_15_10);
        /* execute.simd:3160 [F] s_b_15_12: Jump b_14 (const) */
        {
          auto block = block_b_14;
          dynamic_block_queue.push(block_b_14);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_16) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_16);
        /* execute.simd:3158 [D] s_b_16_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_16_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_16_1 = constant u8 3 (const) */
        /* execute.simd:3158 [D] s_b_16_0[s_b_16_1] */
        auto s_b_16_2 = emitter.vector_extract(s_b_16_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3158 [D] s_b_16_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_16_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_16_4 = constant u8 3 (const) */
        /* execute.simd:3158 [D] s_b_16_3[s_b_16_4] */
        auto s_b_16_5 = emitter.vector_extract(s_b_16_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3158 [D] s_b_16_6 = -s_b_16_5 */
        auto s_b_16_6 = emitter.neg(s_b_16_5);
        /* execute.simd:3158 [D] s_b_16_7 = s_b_16_2->>s_b_16_6 */
        auto s_b_16_7 = emitter.sar(s_b_16_2, s_b_16_6);
        /* execute.simd:3158 [D] s_b_16_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_16_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_16_9 = (u8)s_b_16_7 */
        auto s_b_16_9 = emitter.reinterpret(s_b_16_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_16_10 = constant s32 3 (const) */
        /* execute.simd:3158 [D] s_b_16_11 = s_b_16_8[s_b_16_10] <= s_b_16_9 */
        auto s_b_16_11 = emitter.vector_insert(s_b_16_8, emitter.const_s32((int32_t)3ULL), s_b_16_9);
        /* execute.simd:3158 [D] s_b_16_12: sym_25629_0_rd = s_b_16_11, dominates: s_b_19_8 s_b_21_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_16_11);
        /* execute.simd:3158 [F] s_b_16_13: Jump b_17 (const) */
        {
          auto block = block_b_17;
          dynamic_block_queue.push(block_b_17);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_17) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_17);
        /* execute.simd:3157 [D] s_b_17_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_17_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_17_1 = constant u8 4 (const) */
        /* execute.simd:3157 [D] s_b_17_0[s_b_17_1] */
        auto s_b_17_2 = emitter.vector_extract(s_b_17_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3157 [F] s_b_17_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_17_4 = (s32)s_b_17_2 */
        auto s_b_17_4 = emitter.sx(s_b_17_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_17_5 = s_b_17_4<s_b_17_3 */
        auto s_b_17_5 = emitter.cmp_lt(s_b_17_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_17_6: If s_b_17_5: Jump b_19 else b_21 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_19;
            dynamic_block_queue.push(block_b_19);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_21;
            dynamic_block_queue.push(block_b_21);
            false_target = block;
          }
          emitter.branch(s_b_17_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_18) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_18);
        /* execute.simd:3160 [D] s_b_18_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_18_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_18_1 = constant u8 3 (const) */
        /* execute.simd:3160 [D] s_b_18_0[s_b_18_1] */
        auto s_b_18_2 = emitter.vector_extract(s_b_18_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3160 [D] s_b_18_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_18_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_18_4 = constant u8 3 (const) */
        /* execute.simd:3160 [D] s_b_18_3[s_b_18_4] */
        auto s_b_18_5 = emitter.vector_extract(s_b_18_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3160 [D] s_b_18_6 = s_b_18_2<<s_b_18_5 */
        auto s_b_18_6 = emitter.shl(s_b_18_2, s_b_18_5);
        /* execute.simd:3160 [D] s_b_18_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_18_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_18_8 = (u8)s_b_18_6 */
        auto s_b_18_8 = emitter.reinterpret(s_b_18_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_18_9 = constant s32 3 (const) */
        /* execute.simd:3160 [D] s_b_18_10 = s_b_18_7[s_b_18_9] <= s_b_18_8 */
        auto s_b_18_10 = emitter.vector_insert(s_b_18_7, emitter.const_s32((int32_t)3ULL), s_b_18_8);
        /* execute.simd:3160 [D] s_b_18_11: sym_25629_0_rd = s_b_18_10, dominates: s_b_19_8 s_b_21_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_18_10);
        /* execute.simd:3160 [F] s_b_18_12: Jump b_17 (const) */
        {
          auto block = block_b_17;
          dynamic_block_queue.push(block_b_17);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_19) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_19);
        /* execute.simd:3158 [D] s_b_19_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_19_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_19_1 = constant u8 4 (const) */
        /* execute.simd:3158 [D] s_b_19_0[s_b_19_1] */
        auto s_b_19_2 = emitter.vector_extract(s_b_19_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3158 [D] s_b_19_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_19_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_19_4 = constant u8 4 (const) */
        /* execute.simd:3158 [D] s_b_19_3[s_b_19_4] */
        auto s_b_19_5 = emitter.vector_extract(s_b_19_3, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3158 [D] s_b_19_6 = -s_b_19_5 */
        auto s_b_19_6 = emitter.neg(s_b_19_5);
        /* execute.simd:3158 [D] s_b_19_7 = s_b_19_2->>s_b_19_6 */
        auto s_b_19_7 = emitter.sar(s_b_19_2, s_b_19_6);
        /* execute.simd:3158 [D] s_b_19_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_19_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_19_9 = (u8)s_b_19_7 */
        auto s_b_19_9 = emitter.reinterpret(s_b_19_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_19_10 = constant s32 4 (const) */
        /* execute.simd:3158 [D] s_b_19_11 = s_b_19_8[s_b_19_10] <= s_b_19_9 */
        auto s_b_19_11 = emitter.vector_insert(s_b_19_8, emitter.const_s32((int32_t)4ULL), s_b_19_9);
        /* execute.simd:3158 [D] s_b_19_12: sym_25629_0_rd = s_b_19_11, dominates: s_b_22_8 s_b_24_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_19_11);
        /* execute.simd:3158 [F] s_b_19_13: Jump b_20 (const) */
        {
          auto block = block_b_20;
          dynamic_block_queue.push(block_b_20);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_20) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_20);
        /* execute.simd:3157 [D] s_b_20_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_20_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_20_1 = constant u8 5 (const) */
        /* execute.simd:3157 [D] s_b_20_0[s_b_20_1] */
        auto s_b_20_2 = emitter.vector_extract(s_b_20_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3157 [F] s_b_20_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_20_4 = (s32)s_b_20_2 */
        auto s_b_20_4 = emitter.sx(s_b_20_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_20_5 = s_b_20_4<s_b_20_3 */
        auto s_b_20_5 = emitter.cmp_lt(s_b_20_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_20_6: If s_b_20_5: Jump b_22 else b_24 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_22;
            dynamic_block_queue.push(block_b_22);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_24;
            dynamic_block_queue.push(block_b_24);
            false_target = block;
          }
          emitter.branch(s_b_20_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_21) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_21);
        /* execute.simd:3160 [D] s_b_21_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_21_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_21_1 = constant u8 4 (const) */
        /* execute.simd:3160 [D] s_b_21_0[s_b_21_1] */
        auto s_b_21_2 = emitter.vector_extract(s_b_21_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3160 [D] s_b_21_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_21_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_21_4 = constant u8 4 (const) */
        /* execute.simd:3160 [D] s_b_21_3[s_b_21_4] */
        auto s_b_21_5 = emitter.vector_extract(s_b_21_3, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3160 [D] s_b_21_6 = s_b_21_2<<s_b_21_5 */
        auto s_b_21_6 = emitter.shl(s_b_21_2, s_b_21_5);
        /* execute.simd:3160 [D] s_b_21_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_21_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_21_8 = (u8)s_b_21_6 */
        auto s_b_21_8 = emitter.reinterpret(s_b_21_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_21_9 = constant s32 4 (const) */
        /* execute.simd:3160 [D] s_b_21_10 = s_b_21_7[s_b_21_9] <= s_b_21_8 */
        auto s_b_21_10 = emitter.vector_insert(s_b_21_7, emitter.const_s32((int32_t)4ULL), s_b_21_8);
        /* execute.simd:3160 [D] s_b_21_11: sym_25629_0_rd = s_b_21_10, dominates: s_b_22_8 s_b_24_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_21_10);
        /* execute.simd:3160 [F] s_b_21_12: Jump b_20 (const) */
        {
          auto block = block_b_20;
          dynamic_block_queue.push(block_b_20);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_22) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_22);
        /* execute.simd:3158 [D] s_b_22_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_22_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_22_1 = constant u8 5 (const) */
        /* execute.simd:3158 [D] s_b_22_0[s_b_22_1] */
        auto s_b_22_2 = emitter.vector_extract(s_b_22_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3158 [D] s_b_22_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_22_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_22_4 = constant u8 5 (const) */
        /* execute.simd:3158 [D] s_b_22_3[s_b_22_4] */
        auto s_b_22_5 = emitter.vector_extract(s_b_22_3, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3158 [D] s_b_22_6 = -s_b_22_5 */
        auto s_b_22_6 = emitter.neg(s_b_22_5);
        /* execute.simd:3158 [D] s_b_22_7 = s_b_22_2->>s_b_22_6 */
        auto s_b_22_7 = emitter.sar(s_b_22_2, s_b_22_6);
        /* execute.simd:3158 [D] s_b_22_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_22_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_22_9 = (u8)s_b_22_7 */
        auto s_b_22_9 = emitter.reinterpret(s_b_22_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_22_10 = constant s32 5 (const) */
        /* execute.simd:3158 [D] s_b_22_11 = s_b_22_8[s_b_22_10] <= s_b_22_9 */
        auto s_b_22_11 = emitter.vector_insert(s_b_22_8, emitter.const_s32((int32_t)5ULL), s_b_22_9);
        /* execute.simd:3158 [D] s_b_22_12: sym_25629_0_rd = s_b_22_11, dominates: s_b_25_8 s_b_27_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_22_11);
        /* execute.simd:3158 [F] s_b_22_13: Jump b_23 (const) */
        {
          auto block = block_b_23;
          dynamic_block_queue.push(block_b_23);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_23) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_23);
        /* execute.simd:3157 [D] s_b_23_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_23_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_23_1 = constant u8 6 (const) */
        /* execute.simd:3157 [D] s_b_23_0[s_b_23_1] */
        auto s_b_23_2 = emitter.vector_extract(s_b_23_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3157 [F] s_b_23_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_23_4 = (s32)s_b_23_2 */
        auto s_b_23_4 = emitter.sx(s_b_23_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_23_5 = s_b_23_4<s_b_23_3 */
        auto s_b_23_5 = emitter.cmp_lt(s_b_23_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_23_6: If s_b_23_5: Jump b_25 else b_27 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_25;
            dynamic_block_queue.push(block_b_25);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_27;
            dynamic_block_queue.push(block_b_27);
            false_target = block;
          }
          emitter.branch(s_b_23_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_24) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_24);
        /* execute.simd:3160 [D] s_b_24_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_24_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_24_1 = constant u8 5 (const) */
        /* execute.simd:3160 [D] s_b_24_0[s_b_24_1] */
        auto s_b_24_2 = emitter.vector_extract(s_b_24_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3160 [D] s_b_24_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_24_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_24_4 = constant u8 5 (const) */
        /* execute.simd:3160 [D] s_b_24_3[s_b_24_4] */
        auto s_b_24_5 = emitter.vector_extract(s_b_24_3, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3160 [D] s_b_24_6 = s_b_24_2<<s_b_24_5 */
        auto s_b_24_6 = emitter.shl(s_b_24_2, s_b_24_5);
        /* execute.simd:3160 [D] s_b_24_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_24_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_24_8 = (u8)s_b_24_6 */
        auto s_b_24_8 = emitter.reinterpret(s_b_24_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_24_9 = constant s32 5 (const) */
        /* execute.simd:3160 [D] s_b_24_10 = s_b_24_7[s_b_24_9] <= s_b_24_8 */
        auto s_b_24_10 = emitter.vector_insert(s_b_24_7, emitter.const_s32((int32_t)5ULL), s_b_24_8);
        /* execute.simd:3160 [D] s_b_24_11: sym_25629_0_rd = s_b_24_10, dominates: s_b_25_8 s_b_27_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_24_10);
        /* execute.simd:3160 [F] s_b_24_12: Jump b_23 (const) */
        {
          auto block = block_b_23;
          dynamic_block_queue.push(block_b_23);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_25) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_25);
        /* execute.simd:3158 [D] s_b_25_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_25_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_25_1 = constant u8 6 (const) */
        /* execute.simd:3158 [D] s_b_25_0[s_b_25_1] */
        auto s_b_25_2 = emitter.vector_extract(s_b_25_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3158 [D] s_b_25_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_25_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_25_4 = constant u8 6 (const) */
        /* execute.simd:3158 [D] s_b_25_3[s_b_25_4] */
        auto s_b_25_5 = emitter.vector_extract(s_b_25_3, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3158 [D] s_b_25_6 = -s_b_25_5 */
        auto s_b_25_6 = emitter.neg(s_b_25_5);
        /* execute.simd:3158 [D] s_b_25_7 = s_b_25_2->>s_b_25_6 */
        auto s_b_25_7 = emitter.sar(s_b_25_2, s_b_25_6);
        /* execute.simd:3158 [D] s_b_25_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_25_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_25_9 = (u8)s_b_25_7 */
        auto s_b_25_9 = emitter.reinterpret(s_b_25_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_25_10 = constant s32 6 (const) */
        /* execute.simd:3158 [D] s_b_25_11 = s_b_25_8[s_b_25_10] <= s_b_25_9 */
        auto s_b_25_11 = emitter.vector_insert(s_b_25_8, emitter.const_s32((int32_t)6ULL), s_b_25_9);
        /* execute.simd:3158 [D] s_b_25_12: sym_25629_0_rd = s_b_25_11, dominates: s_b_28_8 s_b_30_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_25_11);
        /* execute.simd:3158 [F] s_b_25_13: Jump b_26 (const) */
        {
          auto block = block_b_26;
          dynamic_block_queue.push(block_b_26);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_26) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_26);
        /* execute.simd:3157 [D] s_b_26_0 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_26_0 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_26_1 = constant u8 7 (const) */
        /* execute.simd:3157 [D] s_b_26_0[s_b_26_1] */
        auto s_b_26_2 = emitter.vector_extract(s_b_26_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3157 [F] s_b_26_3 = constant s32 0 (const) */
        /* execute.simd:3157 [D] s_b_26_4 = (s32)s_b_26_2 */
        auto s_b_26_4 = emitter.sx(s_b_26_2, emitter.context().types().s32());
        /* execute.simd:3157 [D] s_b_26_5 = s_b_26_4<s_b_26_3 */
        auto s_b_26_5 = emitter.cmp_lt(s_b_26_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3157 [D] s_b_26_6: If s_b_26_5: Jump b_28 else b_30 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_28;
            dynamic_block_queue.push(block_b_28);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_30;
            dynamic_block_queue.push(block_b_30);
            false_target = block;
          }
          emitter.branch(s_b_26_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_27) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_27);
        /* execute.simd:3160 [D] s_b_27_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_27_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_27_1 = constant u8 6 (const) */
        /* execute.simd:3160 [D] s_b_27_0[s_b_27_1] */
        auto s_b_27_2 = emitter.vector_extract(s_b_27_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3160 [D] s_b_27_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_27_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_27_4 = constant u8 6 (const) */
        /* execute.simd:3160 [D] s_b_27_3[s_b_27_4] */
        auto s_b_27_5 = emitter.vector_extract(s_b_27_3, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3160 [D] s_b_27_6 = s_b_27_2<<s_b_27_5 */
        auto s_b_27_6 = emitter.shl(s_b_27_2, s_b_27_5);
        /* execute.simd:3160 [D] s_b_27_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_27_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_27_8 = (u8)s_b_27_6 */
        auto s_b_27_8 = emitter.reinterpret(s_b_27_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_27_9 = constant s32 6 (const) */
        /* execute.simd:3160 [D] s_b_27_10 = s_b_27_7[s_b_27_9] <= s_b_27_8 */
        auto s_b_27_10 = emitter.vector_insert(s_b_27_7, emitter.const_s32((int32_t)6ULL), s_b_27_8);
        /* execute.simd:3160 [D] s_b_27_11: sym_25629_0_rd = s_b_27_10, dominates: s_b_28_8 s_b_30_7  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_27_10);
        /* execute.simd:3160 [F] s_b_27_12: Jump b_26 (const) */
        {
          auto block = block_b_26;
          dynamic_block_queue.push(block_b_26);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_28) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_28);
        /* execute.simd:3158 [D] s_b_28_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_28_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_28_1 = constant u8 7 (const) */
        /* execute.simd:3158 [D] s_b_28_0[s_b_28_1] */
        auto s_b_28_2 = emitter.vector_extract(s_b_28_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3158 [D] s_b_28_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_28_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_28_4 = constant u8 7 (const) */
        /* execute.simd:3158 [D] s_b_28_3[s_b_28_4] */
        auto s_b_28_5 = emitter.vector_extract(s_b_28_3, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3158 [D] s_b_28_6 = -s_b_28_5 */
        auto s_b_28_6 = emitter.neg(s_b_28_5);
        /* execute.simd:3158 [D] s_b_28_7 = s_b_28_2->>s_b_28_6 */
        auto s_b_28_7 = emitter.sar(s_b_28_2, s_b_28_6);
        /* execute.simd:3158 [D] s_b_28_8 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_28_8 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3158 [D] s_b_28_9 = (u8)s_b_28_7 */
        auto s_b_28_9 = emitter.reinterpret(s_b_28_7, emitter.context().types().u8());
        /* execute.simd:3158 [F] s_b_28_10 = constant s32 7 (const) */
        /* execute.simd:3158 [D] s_b_28_11 = s_b_28_8[s_b_28_10] <= s_b_28_9 */
        auto s_b_28_11 = emitter.vector_insert(s_b_28_8, emitter.const_s32((int32_t)7ULL), s_b_28_9);
        /* execute.simd:3158 [D] s_b_28_12: sym_25629_0_rd = s_b_28_11, dominates: s_b_29_1  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_28_11);
        /* execute.simd:3158 [F] s_b_28_13: Jump b_29 (const) */
        {
          auto block = block_b_29;
          dynamic_block_queue.push(block_b_29);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_29) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_29);
        /* execute.simd:3164 [F] s_b_29_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3164 [D] s_b_29_1 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_29_1 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3164 [D] s_b_29_2: WriteRegBank 16:s_b_29_0 = s_b_29_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_29_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_29_1);
        /* execute.simd:0 [F] s_b_29_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_30) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_30);
        /* execute.simd:3160 [D] s_b_30_0 = sym_25619_0_rn wutils::Vector<int8_t, 8> */
        auto s_b_30_0 = emitter.load_local(DV_sym_25619_0_rn, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_30_1 = constant u8 7 (const) */
        /* execute.simd:3160 [D] s_b_30_0[s_b_30_1] */
        auto s_b_30_2 = emitter.vector_extract(s_b_30_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3160 [D] s_b_30_3 = sym_25624_0_rm wutils::Vector<int8_t, 8> */
        auto s_b_30_3 = emitter.load_local(DV_sym_25624_0_rm, emitter.context().types().v8s8());
        /* ???:4294967295 [F] s_b_30_4 = constant u8 7 (const) */
        /* execute.simd:3160 [D] s_b_30_3[s_b_30_4] */
        auto s_b_30_5 = emitter.vector_extract(s_b_30_3, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3160 [D] s_b_30_6 = s_b_30_2<<s_b_30_5 */
        auto s_b_30_6 = emitter.shl(s_b_30_2, s_b_30_5);
        /* execute.simd:3160 [D] s_b_30_7 = sym_25629_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_30_7 = emitter.load_local(DV_sym_25629_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3160 [D] s_b_30_8 = (u8)s_b_30_6 */
        auto s_b_30_8 = emitter.reinterpret(s_b_30_6, emitter.context().types().u8());
        /* execute.simd:3160 [F] s_b_30_9 = constant s32 7 (const) */
        /* execute.simd:3160 [D] s_b_30_10 = s_b_30_7[s_b_30_9] <= s_b_30_8 */
        auto s_b_30_10 = emitter.vector_insert(s_b_30_7, emitter.const_s32((int32_t)7ULL), s_b_30_8);
        /* execute.simd:3160 [D] s_b_30_11: sym_25629_0_rd = s_b_30_10, dominates: s_b_29_1  */
        emitter.store_local(DV_sym_25629_0_rd, s_b_30_10);
        /* execute.simd:3160 [F] s_b_30_12: Jump b_29 (const) */
        {
          auto block = block_b_29;
          dynamic_block_queue.push(block_b_29);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_32) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_32);
        /* execute.simd:3174 [D] s_b_32_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_32_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_32_1 = constant u8 0 (const) */
        /* execute.simd:3174 [D] s_b_32_0[s_b_32_1] */
        auto s_b_32_2 = emitter.vector_extract(s_b_32_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3174 [D] s_b_32_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_32_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_32_4 = constant u8 0 (const) */
        /* execute.simd:3174 [D] s_b_32_3[s_b_32_4] */
        auto s_b_32_5 = emitter.vector_extract(s_b_32_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3174 [D] s_b_32_6 = -s_b_32_5 */
        auto s_b_32_6 = emitter.neg(s_b_32_5);
        /* execute.simd:3174 [D] s_b_32_7 = s_b_32_2->>s_b_32_6 */
        auto s_b_32_7 = emitter.sar(s_b_32_2, s_b_32_6);
        /* execute.simd:3174 [F] s_b_32_8 = sym_26036_0_rd (const) wutils::Vector<uint8_t, 16> */
        wutils::Vector<uint8_t, 16> s_b_32_8 = CV_sym_26036_0_rd;
        /* execute.simd:3174 [D] s_b_32_9 = (u8)s_b_32_7 */
        auto s_b_32_9 = emitter.reinterpret(s_b_32_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_32_10 = constant s32 0 (const) */
        /* execute.simd:3174 [D] s_b_32_11 = s_b_32_8[s_b_32_10] <= s_b_32_9 */
        auto s_b_32_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_32_8[0], emitter.context().types().v16u8()), emitter.const_s32((int32_t)0ULL), s_b_32_9);
        /* execute.simd:3174 [D] s_b_32_12: sym_26036_0_rd = s_b_32_11, dominates: s_b_35_8 s_b_37_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_32_11);
        /* execute.simd:3174 [F] s_b_32_13: Jump b_33 (const) */
        {
          auto block = block_b_33;
          dynamic_block_queue.push(block_b_33);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_33) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_33);
        /* execute.simd:3173 [D] s_b_33_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_33_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_33_1 = constant u8 1 (const) */
        /* execute.simd:3173 [D] s_b_33_0[s_b_33_1] */
        auto s_b_33_2 = emitter.vector_extract(s_b_33_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3173 [F] s_b_33_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_33_4 = (s32)s_b_33_2 */
        auto s_b_33_4 = emitter.sx(s_b_33_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_33_5 = s_b_33_4<s_b_33_3 */
        auto s_b_33_5 = emitter.cmp_lt(s_b_33_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_33_6: If s_b_33_5: Jump b_35 else b_37 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_35;
            dynamic_block_queue.push(block_b_35);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_37;
            dynamic_block_queue.push(block_b_37);
            false_target = block;
          }
          emitter.branch(s_b_33_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_34) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_34);
        /* execute.simd:3176 [D] s_b_34_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_34_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_34_1 = constant u8 0 (const) */
        /* execute.simd:3176 [D] s_b_34_0[s_b_34_1] */
        auto s_b_34_2 = emitter.vector_extract(s_b_34_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3176 [D] s_b_34_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_34_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_34_4 = constant u8 0 (const) */
        /* execute.simd:3176 [D] s_b_34_3[s_b_34_4] */
        auto s_b_34_5 = emitter.vector_extract(s_b_34_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3176 [D] s_b_34_6 = s_b_34_2<<s_b_34_5 */
        auto s_b_34_6 = emitter.shl(s_b_34_2, s_b_34_5);
        /* execute.simd:3176 [F] s_b_34_7 = sym_26036_0_rd (const) wutils::Vector<uint8_t, 16> */
        wutils::Vector<uint8_t, 16> s_b_34_7 = CV_sym_26036_0_rd;
        /* execute.simd:3176 [D] s_b_34_8 = (u8)s_b_34_6 */
        auto s_b_34_8 = emitter.reinterpret(s_b_34_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_34_9 = constant s32 0 (const) */
        /* execute.simd:3176 [D] s_b_34_10 = s_b_34_7[s_b_34_9] <= s_b_34_8 */
        auto s_b_34_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_34_7[0], emitter.context().types().v16u8()), emitter.const_s32((int32_t)0ULL), s_b_34_8);
        /* execute.simd:3176 [D] s_b_34_11: sym_26036_0_rd = s_b_34_10, dominates: s_b_35_8 s_b_37_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_34_10);
        /* execute.simd:3176 [F] s_b_34_12: Jump b_33 (const) */
        {
          auto block = block_b_33;
          dynamic_block_queue.push(block_b_33);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_35) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_35);
        /* execute.simd:3174 [D] s_b_35_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_35_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_35_1 = constant u8 1 (const) */
        /* execute.simd:3174 [D] s_b_35_0[s_b_35_1] */
        auto s_b_35_2 = emitter.vector_extract(s_b_35_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3174 [D] s_b_35_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_35_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_35_4 = constant u8 1 (const) */
        /* execute.simd:3174 [D] s_b_35_3[s_b_35_4] */
        auto s_b_35_5 = emitter.vector_extract(s_b_35_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3174 [D] s_b_35_6 = -s_b_35_5 */
        auto s_b_35_6 = emitter.neg(s_b_35_5);
        /* execute.simd:3174 [D] s_b_35_7 = s_b_35_2->>s_b_35_6 */
        auto s_b_35_7 = emitter.sar(s_b_35_2, s_b_35_6);
        /* execute.simd:3174 [D] s_b_35_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_35_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_35_9 = (u8)s_b_35_7 */
        auto s_b_35_9 = emitter.reinterpret(s_b_35_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_35_10 = constant s32 1 (const) */
        /* execute.simd:3174 [D] s_b_35_11 = s_b_35_8[s_b_35_10] <= s_b_35_9 */
        auto s_b_35_11 = emitter.vector_insert(s_b_35_8, emitter.const_s32((int32_t)1ULL), s_b_35_9);
        /* execute.simd:3174 [D] s_b_35_12: sym_26036_0_rd = s_b_35_11, dominates: s_b_38_8 s_b_40_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_35_11);
        /* execute.simd:3174 [F] s_b_35_13: Jump b_36 (const) */
        {
          auto block = block_b_36;
          dynamic_block_queue.push(block_b_36);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_36) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_36);
        /* execute.simd:3173 [D] s_b_36_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_36_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_36_1 = constant u8 2 (const) */
        /* execute.simd:3173 [D] s_b_36_0[s_b_36_1] */
        auto s_b_36_2 = emitter.vector_extract(s_b_36_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3173 [F] s_b_36_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_36_4 = (s32)s_b_36_2 */
        auto s_b_36_4 = emitter.sx(s_b_36_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_36_5 = s_b_36_4<s_b_36_3 */
        auto s_b_36_5 = emitter.cmp_lt(s_b_36_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_36_6: If s_b_36_5: Jump b_38 else b_40 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_38;
            dynamic_block_queue.push(block_b_38);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_40;
            dynamic_block_queue.push(block_b_40);
            false_target = block;
          }
          emitter.branch(s_b_36_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_37) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_37);
        /* execute.simd:3176 [D] s_b_37_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_37_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_37_1 = constant u8 1 (const) */
        /* execute.simd:3176 [D] s_b_37_0[s_b_37_1] */
        auto s_b_37_2 = emitter.vector_extract(s_b_37_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3176 [D] s_b_37_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_37_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_37_4 = constant u8 1 (const) */
        /* execute.simd:3176 [D] s_b_37_3[s_b_37_4] */
        auto s_b_37_5 = emitter.vector_extract(s_b_37_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3176 [D] s_b_37_6 = s_b_37_2<<s_b_37_5 */
        auto s_b_37_6 = emitter.shl(s_b_37_2, s_b_37_5);
        /* execute.simd:3176 [D] s_b_37_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_37_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_37_8 = (u8)s_b_37_6 */
        auto s_b_37_8 = emitter.reinterpret(s_b_37_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_37_9 = constant s32 1 (const) */
        /* execute.simd:3176 [D] s_b_37_10 = s_b_37_7[s_b_37_9] <= s_b_37_8 */
        auto s_b_37_10 = emitter.vector_insert(s_b_37_7, emitter.const_s32((int32_t)1ULL), s_b_37_8);
        /* execute.simd:3176 [D] s_b_37_11: sym_26036_0_rd = s_b_37_10, dominates: s_b_38_8 s_b_40_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_37_10);
        /* execute.simd:3176 [F] s_b_37_12: Jump b_36 (const) */
        {
          auto block = block_b_36;
          dynamic_block_queue.push(block_b_36);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_38) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_38);
        /* execute.simd:3174 [D] s_b_38_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_38_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_38_1 = constant u8 2 (const) */
        /* execute.simd:3174 [D] s_b_38_0[s_b_38_1] */
        auto s_b_38_2 = emitter.vector_extract(s_b_38_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3174 [D] s_b_38_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_38_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_38_4 = constant u8 2 (const) */
        /* execute.simd:3174 [D] s_b_38_3[s_b_38_4] */
        auto s_b_38_5 = emitter.vector_extract(s_b_38_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3174 [D] s_b_38_6 = -s_b_38_5 */
        auto s_b_38_6 = emitter.neg(s_b_38_5);
        /* execute.simd:3174 [D] s_b_38_7 = s_b_38_2->>s_b_38_6 */
        auto s_b_38_7 = emitter.sar(s_b_38_2, s_b_38_6);
        /* execute.simd:3174 [D] s_b_38_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_38_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_38_9 = (u8)s_b_38_7 */
        auto s_b_38_9 = emitter.reinterpret(s_b_38_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_38_10 = constant s32 2 (const) */
        /* execute.simd:3174 [D] s_b_38_11 = s_b_38_8[s_b_38_10] <= s_b_38_9 */
        auto s_b_38_11 = emitter.vector_insert(s_b_38_8, emitter.const_s32((int32_t)2ULL), s_b_38_9);
        /* execute.simd:3174 [D] s_b_38_12: sym_26036_0_rd = s_b_38_11, dominates: s_b_41_8 s_b_43_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_38_11);
        /* execute.simd:3174 [F] s_b_38_13: Jump b_39 (const) */
        {
          auto block = block_b_39;
          dynamic_block_queue.push(block_b_39);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_39) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_39);
        /* execute.simd:3173 [D] s_b_39_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_39_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_39_1 = constant u8 3 (const) */
        /* execute.simd:3173 [D] s_b_39_0[s_b_39_1] */
        auto s_b_39_2 = emitter.vector_extract(s_b_39_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3173 [F] s_b_39_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_39_4 = (s32)s_b_39_2 */
        auto s_b_39_4 = emitter.sx(s_b_39_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_39_5 = s_b_39_4<s_b_39_3 */
        auto s_b_39_5 = emitter.cmp_lt(s_b_39_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_39_6: If s_b_39_5: Jump b_41 else b_43 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_41;
            dynamic_block_queue.push(block_b_41);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_43;
            dynamic_block_queue.push(block_b_43);
            false_target = block;
          }
          emitter.branch(s_b_39_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_40) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_40);
        /* execute.simd:3176 [D] s_b_40_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_40_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_40_1 = constant u8 2 (const) */
        /* execute.simd:3176 [D] s_b_40_0[s_b_40_1] */
        auto s_b_40_2 = emitter.vector_extract(s_b_40_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3176 [D] s_b_40_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_40_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_40_4 = constant u8 2 (const) */
        /* execute.simd:3176 [D] s_b_40_3[s_b_40_4] */
        auto s_b_40_5 = emitter.vector_extract(s_b_40_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3176 [D] s_b_40_6 = s_b_40_2<<s_b_40_5 */
        auto s_b_40_6 = emitter.shl(s_b_40_2, s_b_40_5);
        /* execute.simd:3176 [D] s_b_40_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_40_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_40_8 = (u8)s_b_40_6 */
        auto s_b_40_8 = emitter.reinterpret(s_b_40_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_40_9 = constant s32 2 (const) */
        /* execute.simd:3176 [D] s_b_40_10 = s_b_40_7[s_b_40_9] <= s_b_40_8 */
        auto s_b_40_10 = emitter.vector_insert(s_b_40_7, emitter.const_s32((int32_t)2ULL), s_b_40_8);
        /* execute.simd:3176 [D] s_b_40_11: sym_26036_0_rd = s_b_40_10, dominates: s_b_41_8 s_b_43_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_40_10);
        /* execute.simd:3176 [F] s_b_40_12: Jump b_39 (const) */
        {
          auto block = block_b_39;
          dynamic_block_queue.push(block_b_39);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_41) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_41);
        /* execute.simd:3174 [D] s_b_41_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_41_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_41_1 = constant u8 3 (const) */
        /* execute.simd:3174 [D] s_b_41_0[s_b_41_1] */
        auto s_b_41_2 = emitter.vector_extract(s_b_41_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3174 [D] s_b_41_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_41_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_41_4 = constant u8 3 (const) */
        /* execute.simd:3174 [D] s_b_41_3[s_b_41_4] */
        auto s_b_41_5 = emitter.vector_extract(s_b_41_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3174 [D] s_b_41_6 = -s_b_41_5 */
        auto s_b_41_6 = emitter.neg(s_b_41_5);
        /* execute.simd:3174 [D] s_b_41_7 = s_b_41_2->>s_b_41_6 */
        auto s_b_41_7 = emitter.sar(s_b_41_2, s_b_41_6);
        /* execute.simd:3174 [D] s_b_41_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_41_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_41_9 = (u8)s_b_41_7 */
        auto s_b_41_9 = emitter.reinterpret(s_b_41_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_41_10 = constant s32 3 (const) */
        /* execute.simd:3174 [D] s_b_41_11 = s_b_41_8[s_b_41_10] <= s_b_41_9 */
        auto s_b_41_11 = emitter.vector_insert(s_b_41_8, emitter.const_s32((int32_t)3ULL), s_b_41_9);
        /* execute.simd:3174 [D] s_b_41_12: sym_26036_0_rd = s_b_41_11, dominates: s_b_44_8 s_b_46_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_41_11);
        /* execute.simd:3174 [F] s_b_41_13: Jump b_42 (const) */
        {
          auto block = block_b_42;
          dynamic_block_queue.push(block_b_42);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_42) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_42);
        /* execute.simd:3173 [D] s_b_42_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_42_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_42_1 = constant u8 4 (const) */
        /* execute.simd:3173 [D] s_b_42_0[s_b_42_1] */
        auto s_b_42_2 = emitter.vector_extract(s_b_42_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3173 [F] s_b_42_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_42_4 = (s32)s_b_42_2 */
        auto s_b_42_4 = emitter.sx(s_b_42_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_42_5 = s_b_42_4<s_b_42_3 */
        auto s_b_42_5 = emitter.cmp_lt(s_b_42_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_42_6: If s_b_42_5: Jump b_44 else b_46 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_44;
            dynamic_block_queue.push(block_b_44);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_46;
            dynamic_block_queue.push(block_b_46);
            false_target = block;
          }
          emitter.branch(s_b_42_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_43) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_43);
        /* execute.simd:3176 [D] s_b_43_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_43_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_43_1 = constant u8 3 (const) */
        /* execute.simd:3176 [D] s_b_43_0[s_b_43_1] */
        auto s_b_43_2 = emitter.vector_extract(s_b_43_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3176 [D] s_b_43_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_43_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_43_4 = constant u8 3 (const) */
        /* execute.simd:3176 [D] s_b_43_3[s_b_43_4] */
        auto s_b_43_5 = emitter.vector_extract(s_b_43_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3176 [D] s_b_43_6 = s_b_43_2<<s_b_43_5 */
        auto s_b_43_6 = emitter.shl(s_b_43_2, s_b_43_5);
        /* execute.simd:3176 [D] s_b_43_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_43_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_43_8 = (u8)s_b_43_6 */
        auto s_b_43_8 = emitter.reinterpret(s_b_43_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_43_9 = constant s32 3 (const) */
        /* execute.simd:3176 [D] s_b_43_10 = s_b_43_7[s_b_43_9] <= s_b_43_8 */
        auto s_b_43_10 = emitter.vector_insert(s_b_43_7, emitter.const_s32((int32_t)3ULL), s_b_43_8);
        /* execute.simd:3176 [D] s_b_43_11: sym_26036_0_rd = s_b_43_10, dominates: s_b_44_8 s_b_46_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_43_10);
        /* execute.simd:3176 [F] s_b_43_12: Jump b_42 (const) */
        {
          auto block = block_b_42;
          dynamic_block_queue.push(block_b_42);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_44) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_44);
        /* execute.simd:3174 [D] s_b_44_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_44_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_44_1 = constant u8 4 (const) */
        /* execute.simd:3174 [D] s_b_44_0[s_b_44_1] */
        auto s_b_44_2 = emitter.vector_extract(s_b_44_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3174 [D] s_b_44_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_44_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_44_4 = constant u8 4 (const) */
        /* execute.simd:3174 [D] s_b_44_3[s_b_44_4] */
        auto s_b_44_5 = emitter.vector_extract(s_b_44_3, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3174 [D] s_b_44_6 = -s_b_44_5 */
        auto s_b_44_6 = emitter.neg(s_b_44_5);
        /* execute.simd:3174 [D] s_b_44_7 = s_b_44_2->>s_b_44_6 */
        auto s_b_44_7 = emitter.sar(s_b_44_2, s_b_44_6);
        /* execute.simd:3174 [D] s_b_44_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_44_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_44_9 = (u8)s_b_44_7 */
        auto s_b_44_9 = emitter.reinterpret(s_b_44_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_44_10 = constant s32 4 (const) */
        /* execute.simd:3174 [D] s_b_44_11 = s_b_44_8[s_b_44_10] <= s_b_44_9 */
        auto s_b_44_11 = emitter.vector_insert(s_b_44_8, emitter.const_s32((int32_t)4ULL), s_b_44_9);
        /* execute.simd:3174 [D] s_b_44_12: sym_26036_0_rd = s_b_44_11, dominates: s_b_47_8 s_b_49_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_44_11);
        /* execute.simd:3174 [F] s_b_44_13: Jump b_45 (const) */
        {
          auto block = block_b_45;
          dynamic_block_queue.push(block_b_45);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_45) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_45);
        /* execute.simd:3173 [D] s_b_45_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_45_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_45_1 = constant u8 5 (const) */
        /* execute.simd:3173 [D] s_b_45_0[s_b_45_1] */
        auto s_b_45_2 = emitter.vector_extract(s_b_45_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3173 [F] s_b_45_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_45_4 = (s32)s_b_45_2 */
        auto s_b_45_4 = emitter.sx(s_b_45_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_45_5 = s_b_45_4<s_b_45_3 */
        auto s_b_45_5 = emitter.cmp_lt(s_b_45_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_45_6: If s_b_45_5: Jump b_47 else b_49 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_47;
            dynamic_block_queue.push(block_b_47);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_49;
            dynamic_block_queue.push(block_b_49);
            false_target = block;
          }
          emitter.branch(s_b_45_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_46) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_46);
        /* execute.simd:3176 [D] s_b_46_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_46_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_46_1 = constant u8 4 (const) */
        /* execute.simd:3176 [D] s_b_46_0[s_b_46_1] */
        auto s_b_46_2 = emitter.vector_extract(s_b_46_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3176 [D] s_b_46_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_46_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_46_4 = constant u8 4 (const) */
        /* execute.simd:3176 [D] s_b_46_3[s_b_46_4] */
        auto s_b_46_5 = emitter.vector_extract(s_b_46_3, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3176 [D] s_b_46_6 = s_b_46_2<<s_b_46_5 */
        auto s_b_46_6 = emitter.shl(s_b_46_2, s_b_46_5);
        /* execute.simd:3176 [D] s_b_46_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_46_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_46_8 = (u8)s_b_46_6 */
        auto s_b_46_8 = emitter.reinterpret(s_b_46_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_46_9 = constant s32 4 (const) */
        /* execute.simd:3176 [D] s_b_46_10 = s_b_46_7[s_b_46_9] <= s_b_46_8 */
        auto s_b_46_10 = emitter.vector_insert(s_b_46_7, emitter.const_s32((int32_t)4ULL), s_b_46_8);
        /* execute.simd:3176 [D] s_b_46_11: sym_26036_0_rd = s_b_46_10, dominates: s_b_47_8 s_b_49_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_46_10);
        /* execute.simd:3176 [F] s_b_46_12: Jump b_45 (const) */
        {
          auto block = block_b_45;
          dynamic_block_queue.push(block_b_45);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_47) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_47);
        /* execute.simd:3174 [D] s_b_47_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_47_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_47_1 = constant u8 5 (const) */
        /* execute.simd:3174 [D] s_b_47_0[s_b_47_1] */
        auto s_b_47_2 = emitter.vector_extract(s_b_47_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3174 [D] s_b_47_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_47_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_47_4 = constant u8 5 (const) */
        /* execute.simd:3174 [D] s_b_47_3[s_b_47_4] */
        auto s_b_47_5 = emitter.vector_extract(s_b_47_3, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3174 [D] s_b_47_6 = -s_b_47_5 */
        auto s_b_47_6 = emitter.neg(s_b_47_5);
        /* execute.simd:3174 [D] s_b_47_7 = s_b_47_2->>s_b_47_6 */
        auto s_b_47_7 = emitter.sar(s_b_47_2, s_b_47_6);
        /* execute.simd:3174 [D] s_b_47_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_47_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_47_9 = (u8)s_b_47_7 */
        auto s_b_47_9 = emitter.reinterpret(s_b_47_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_47_10 = constant s32 5 (const) */
        /* execute.simd:3174 [D] s_b_47_11 = s_b_47_8[s_b_47_10] <= s_b_47_9 */
        auto s_b_47_11 = emitter.vector_insert(s_b_47_8, emitter.const_s32((int32_t)5ULL), s_b_47_9);
        /* execute.simd:3174 [D] s_b_47_12: sym_26036_0_rd = s_b_47_11, dominates: s_b_50_8 s_b_52_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_47_11);
        /* execute.simd:3174 [F] s_b_47_13: Jump b_48 (const) */
        {
          auto block = block_b_48;
          dynamic_block_queue.push(block_b_48);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_48) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_48);
        /* execute.simd:3173 [D] s_b_48_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_48_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_48_1 = constant u8 6 (const) */
        /* execute.simd:3173 [D] s_b_48_0[s_b_48_1] */
        auto s_b_48_2 = emitter.vector_extract(s_b_48_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3173 [F] s_b_48_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_48_4 = (s32)s_b_48_2 */
        auto s_b_48_4 = emitter.sx(s_b_48_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_48_5 = s_b_48_4<s_b_48_3 */
        auto s_b_48_5 = emitter.cmp_lt(s_b_48_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_48_6: If s_b_48_5: Jump b_50 else b_52 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_50;
            dynamic_block_queue.push(block_b_50);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_52;
            dynamic_block_queue.push(block_b_52);
            false_target = block;
          }
          emitter.branch(s_b_48_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_49) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_49);
        /* execute.simd:3176 [D] s_b_49_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_49_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_49_1 = constant u8 5 (const) */
        /* execute.simd:3176 [D] s_b_49_0[s_b_49_1] */
        auto s_b_49_2 = emitter.vector_extract(s_b_49_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3176 [D] s_b_49_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_49_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_49_4 = constant u8 5 (const) */
        /* execute.simd:3176 [D] s_b_49_3[s_b_49_4] */
        auto s_b_49_5 = emitter.vector_extract(s_b_49_3, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3176 [D] s_b_49_6 = s_b_49_2<<s_b_49_5 */
        auto s_b_49_6 = emitter.shl(s_b_49_2, s_b_49_5);
        /* execute.simd:3176 [D] s_b_49_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_49_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_49_8 = (u8)s_b_49_6 */
        auto s_b_49_8 = emitter.reinterpret(s_b_49_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_49_9 = constant s32 5 (const) */
        /* execute.simd:3176 [D] s_b_49_10 = s_b_49_7[s_b_49_9] <= s_b_49_8 */
        auto s_b_49_10 = emitter.vector_insert(s_b_49_7, emitter.const_s32((int32_t)5ULL), s_b_49_8);
        /* execute.simd:3176 [D] s_b_49_11: sym_26036_0_rd = s_b_49_10, dominates: s_b_50_8 s_b_52_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_49_10);
        /* execute.simd:3176 [F] s_b_49_12: Jump b_48 (const) */
        {
          auto block = block_b_48;
          dynamic_block_queue.push(block_b_48);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_50) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_50);
        /* execute.simd:3174 [D] s_b_50_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_50_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_50_1 = constant u8 6 (const) */
        /* execute.simd:3174 [D] s_b_50_0[s_b_50_1] */
        auto s_b_50_2 = emitter.vector_extract(s_b_50_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3174 [D] s_b_50_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_50_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_50_4 = constant u8 6 (const) */
        /* execute.simd:3174 [D] s_b_50_3[s_b_50_4] */
        auto s_b_50_5 = emitter.vector_extract(s_b_50_3, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3174 [D] s_b_50_6 = -s_b_50_5 */
        auto s_b_50_6 = emitter.neg(s_b_50_5);
        /* execute.simd:3174 [D] s_b_50_7 = s_b_50_2->>s_b_50_6 */
        auto s_b_50_7 = emitter.sar(s_b_50_2, s_b_50_6);
        /* execute.simd:3174 [D] s_b_50_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_50_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_50_9 = (u8)s_b_50_7 */
        auto s_b_50_9 = emitter.reinterpret(s_b_50_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_50_10 = constant s32 6 (const) */
        /* execute.simd:3174 [D] s_b_50_11 = s_b_50_8[s_b_50_10] <= s_b_50_9 */
        auto s_b_50_11 = emitter.vector_insert(s_b_50_8, emitter.const_s32((int32_t)6ULL), s_b_50_9);
        /* execute.simd:3174 [D] s_b_50_12: sym_26036_0_rd = s_b_50_11, dominates: s_b_53_8 s_b_55_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_50_11);
        /* execute.simd:3174 [F] s_b_50_13: Jump b_51 (const) */
        {
          auto block = block_b_51;
          dynamic_block_queue.push(block_b_51);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_51) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_51);
        /* execute.simd:3173 [D] s_b_51_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_51_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_51_1 = constant u8 7 (const) */
        /* execute.simd:3173 [D] s_b_51_0[s_b_51_1] */
        auto s_b_51_2 = emitter.vector_extract(s_b_51_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3173 [F] s_b_51_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_51_4 = (s32)s_b_51_2 */
        auto s_b_51_4 = emitter.sx(s_b_51_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_51_5 = s_b_51_4<s_b_51_3 */
        auto s_b_51_5 = emitter.cmp_lt(s_b_51_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_51_6: If s_b_51_5: Jump b_53 else b_55 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_53;
            dynamic_block_queue.push(block_b_53);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_55;
            dynamic_block_queue.push(block_b_55);
            false_target = block;
          }
          emitter.branch(s_b_51_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_52) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_52);
        /* execute.simd:3176 [D] s_b_52_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_52_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_52_1 = constant u8 6 (const) */
        /* execute.simd:3176 [D] s_b_52_0[s_b_52_1] */
        auto s_b_52_2 = emitter.vector_extract(s_b_52_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3176 [D] s_b_52_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_52_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_52_4 = constant u8 6 (const) */
        /* execute.simd:3176 [D] s_b_52_3[s_b_52_4] */
        auto s_b_52_5 = emitter.vector_extract(s_b_52_3, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3176 [D] s_b_52_6 = s_b_52_2<<s_b_52_5 */
        auto s_b_52_6 = emitter.shl(s_b_52_2, s_b_52_5);
        /* execute.simd:3176 [D] s_b_52_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_52_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_52_8 = (u8)s_b_52_6 */
        auto s_b_52_8 = emitter.reinterpret(s_b_52_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_52_9 = constant s32 6 (const) */
        /* execute.simd:3176 [D] s_b_52_10 = s_b_52_7[s_b_52_9] <= s_b_52_8 */
        auto s_b_52_10 = emitter.vector_insert(s_b_52_7, emitter.const_s32((int32_t)6ULL), s_b_52_8);
        /* execute.simd:3176 [D] s_b_52_11: sym_26036_0_rd = s_b_52_10, dominates: s_b_53_8 s_b_55_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_52_10);
        /* execute.simd:3176 [F] s_b_52_12: Jump b_51 (const) */
        {
          auto block = block_b_51;
          dynamic_block_queue.push(block_b_51);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_53) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_53);
        /* execute.simd:3174 [D] s_b_53_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_53_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_53_1 = constant u8 7 (const) */
        /* execute.simd:3174 [D] s_b_53_0[s_b_53_1] */
        auto s_b_53_2 = emitter.vector_extract(s_b_53_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3174 [D] s_b_53_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_53_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_53_4 = constant u8 7 (const) */
        /* execute.simd:3174 [D] s_b_53_3[s_b_53_4] */
        auto s_b_53_5 = emitter.vector_extract(s_b_53_3, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3174 [D] s_b_53_6 = -s_b_53_5 */
        auto s_b_53_6 = emitter.neg(s_b_53_5);
        /* execute.simd:3174 [D] s_b_53_7 = s_b_53_2->>s_b_53_6 */
        auto s_b_53_7 = emitter.sar(s_b_53_2, s_b_53_6);
        /* execute.simd:3174 [D] s_b_53_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_53_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_53_9 = (u8)s_b_53_7 */
        auto s_b_53_9 = emitter.reinterpret(s_b_53_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_53_10 = constant s32 7 (const) */
        /* execute.simd:3174 [D] s_b_53_11 = s_b_53_8[s_b_53_10] <= s_b_53_9 */
        auto s_b_53_11 = emitter.vector_insert(s_b_53_8, emitter.const_s32((int32_t)7ULL), s_b_53_9);
        /* execute.simd:3174 [D] s_b_53_12: sym_26036_0_rd = s_b_53_11, dominates: s_b_56_8 s_b_58_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_53_11);
        /* execute.simd:3174 [F] s_b_53_13: Jump b_54 (const) */
        {
          auto block = block_b_54;
          dynamic_block_queue.push(block_b_54);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_54) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_54);
        /* execute.simd:3173 [D] s_b_54_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_54_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_54_1 = constant u8 8 (const) */
        /* execute.simd:3173 [D] s_b_54_0[s_b_54_1] */
        auto s_b_54_2 = emitter.vector_extract(s_b_54_0, emitter.const_u8((uint8_t)8ULL));
        /* execute.simd:3173 [F] s_b_54_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_54_4 = (s32)s_b_54_2 */
        auto s_b_54_4 = emitter.sx(s_b_54_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_54_5 = s_b_54_4<s_b_54_3 */
        auto s_b_54_5 = emitter.cmp_lt(s_b_54_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_54_6: If s_b_54_5: Jump b_56 else b_58 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_56;
            dynamic_block_queue.push(block_b_56);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_58;
            dynamic_block_queue.push(block_b_58);
            false_target = block;
          }
          emitter.branch(s_b_54_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_55) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_55);
        /* execute.simd:3176 [D] s_b_55_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_55_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_55_1 = constant u8 7 (const) */
        /* execute.simd:3176 [D] s_b_55_0[s_b_55_1] */
        auto s_b_55_2 = emitter.vector_extract(s_b_55_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3176 [D] s_b_55_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_55_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_55_4 = constant u8 7 (const) */
        /* execute.simd:3176 [D] s_b_55_3[s_b_55_4] */
        auto s_b_55_5 = emitter.vector_extract(s_b_55_3, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3176 [D] s_b_55_6 = s_b_55_2<<s_b_55_5 */
        auto s_b_55_6 = emitter.shl(s_b_55_2, s_b_55_5);
        /* execute.simd:3176 [D] s_b_55_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_55_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_55_8 = (u8)s_b_55_6 */
        auto s_b_55_8 = emitter.reinterpret(s_b_55_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_55_9 = constant s32 7 (const) */
        /* execute.simd:3176 [D] s_b_55_10 = s_b_55_7[s_b_55_9] <= s_b_55_8 */
        auto s_b_55_10 = emitter.vector_insert(s_b_55_7, emitter.const_s32((int32_t)7ULL), s_b_55_8);
        /* execute.simd:3176 [D] s_b_55_11: sym_26036_0_rd = s_b_55_10, dominates: s_b_56_8 s_b_58_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_55_10);
        /* execute.simd:3176 [F] s_b_55_12: Jump b_54 (const) */
        {
          auto block = block_b_54;
          dynamic_block_queue.push(block_b_54);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_56) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_56);
        /* execute.simd:3174 [D] s_b_56_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_56_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_56_1 = constant u8 8 (const) */
        /* execute.simd:3174 [D] s_b_56_0[s_b_56_1] */
        auto s_b_56_2 = emitter.vector_extract(s_b_56_0, emitter.const_u8((uint8_t)8ULL));
        /* execute.simd:3174 [D] s_b_56_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_56_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_56_4 = constant u8 8 (const) */
        /* execute.simd:3174 [D] s_b_56_3[s_b_56_4] */
        auto s_b_56_5 = emitter.vector_extract(s_b_56_3, emitter.const_u8((uint8_t)8ULL));
        /* execute.simd:3174 [D] s_b_56_6 = -s_b_56_5 */
        auto s_b_56_6 = emitter.neg(s_b_56_5);
        /* execute.simd:3174 [D] s_b_56_7 = s_b_56_2->>s_b_56_6 */
        auto s_b_56_7 = emitter.sar(s_b_56_2, s_b_56_6);
        /* execute.simd:3174 [D] s_b_56_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_56_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_56_9 = (u8)s_b_56_7 */
        auto s_b_56_9 = emitter.reinterpret(s_b_56_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_56_10 = constant s32 8 (const) */
        /* execute.simd:3174 [D] s_b_56_11 = s_b_56_8[s_b_56_10] <= s_b_56_9 */
        auto s_b_56_11 = emitter.vector_insert(s_b_56_8, emitter.const_s32((int32_t)8ULL), s_b_56_9);
        /* execute.simd:3174 [D] s_b_56_12: sym_26036_0_rd = s_b_56_11, dominates: s_b_59_8 s_b_61_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_56_11);
        /* execute.simd:3174 [F] s_b_56_13: Jump b_57 (const) */
        {
          auto block = block_b_57;
          dynamic_block_queue.push(block_b_57);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_57) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_57);
        /* execute.simd:3173 [D] s_b_57_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_57_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_57_1 = constant u8 9 (const) */
        /* execute.simd:3173 [D] s_b_57_0[s_b_57_1] */
        auto s_b_57_2 = emitter.vector_extract(s_b_57_0, emitter.const_u8((uint8_t)9ULL));
        /* execute.simd:3173 [F] s_b_57_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_57_4 = (s32)s_b_57_2 */
        auto s_b_57_4 = emitter.sx(s_b_57_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_57_5 = s_b_57_4<s_b_57_3 */
        auto s_b_57_5 = emitter.cmp_lt(s_b_57_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_57_6: If s_b_57_5: Jump b_59 else b_61 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_59;
            dynamic_block_queue.push(block_b_59);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_61;
            dynamic_block_queue.push(block_b_61);
            false_target = block;
          }
          emitter.branch(s_b_57_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_58) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_58);
        /* execute.simd:3176 [D] s_b_58_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_58_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_58_1 = constant u8 8 (const) */
        /* execute.simd:3176 [D] s_b_58_0[s_b_58_1] */
        auto s_b_58_2 = emitter.vector_extract(s_b_58_0, emitter.const_u8((uint8_t)8ULL));
        /* execute.simd:3176 [D] s_b_58_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_58_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_58_4 = constant u8 8 (const) */
        /* execute.simd:3176 [D] s_b_58_3[s_b_58_4] */
        auto s_b_58_5 = emitter.vector_extract(s_b_58_3, emitter.const_u8((uint8_t)8ULL));
        /* execute.simd:3176 [D] s_b_58_6 = s_b_58_2<<s_b_58_5 */
        auto s_b_58_6 = emitter.shl(s_b_58_2, s_b_58_5);
        /* execute.simd:3176 [D] s_b_58_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_58_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_58_8 = (u8)s_b_58_6 */
        auto s_b_58_8 = emitter.reinterpret(s_b_58_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_58_9 = constant s32 8 (const) */
        /* execute.simd:3176 [D] s_b_58_10 = s_b_58_7[s_b_58_9] <= s_b_58_8 */
        auto s_b_58_10 = emitter.vector_insert(s_b_58_7, emitter.const_s32((int32_t)8ULL), s_b_58_8);
        /* execute.simd:3176 [D] s_b_58_11: sym_26036_0_rd = s_b_58_10, dominates: s_b_59_8 s_b_61_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_58_10);
        /* execute.simd:3176 [F] s_b_58_12: Jump b_57 (const) */
        {
          auto block = block_b_57;
          dynamic_block_queue.push(block_b_57);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_59) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_59);
        /* execute.simd:3174 [D] s_b_59_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_59_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_59_1 = constant u8 9 (const) */
        /* execute.simd:3174 [D] s_b_59_0[s_b_59_1] */
        auto s_b_59_2 = emitter.vector_extract(s_b_59_0, emitter.const_u8((uint8_t)9ULL));
        /* execute.simd:3174 [D] s_b_59_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_59_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_59_4 = constant u8 9 (const) */
        /* execute.simd:3174 [D] s_b_59_3[s_b_59_4] */
        auto s_b_59_5 = emitter.vector_extract(s_b_59_3, emitter.const_u8((uint8_t)9ULL));
        /* execute.simd:3174 [D] s_b_59_6 = -s_b_59_5 */
        auto s_b_59_6 = emitter.neg(s_b_59_5);
        /* execute.simd:3174 [D] s_b_59_7 = s_b_59_2->>s_b_59_6 */
        auto s_b_59_7 = emitter.sar(s_b_59_2, s_b_59_6);
        /* execute.simd:3174 [D] s_b_59_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_59_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_59_9 = (u8)s_b_59_7 */
        auto s_b_59_9 = emitter.reinterpret(s_b_59_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_59_10 = constant s32 9 (const) */
        /* execute.simd:3174 [D] s_b_59_11 = s_b_59_8[s_b_59_10] <= s_b_59_9 */
        auto s_b_59_11 = emitter.vector_insert(s_b_59_8, emitter.const_s32((int32_t)9ULL), s_b_59_9);
        /* execute.simd:3174 [D] s_b_59_12: sym_26036_0_rd = s_b_59_11, dominates: s_b_62_8 s_b_64_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_59_11);
        /* execute.simd:3174 [F] s_b_59_13: Jump b_60 (const) */
        {
          auto block = block_b_60;
          dynamic_block_queue.push(block_b_60);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_60) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_60);
        /* execute.simd:3173 [D] s_b_60_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_60_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_60_1 = constant u8 a (const) */
        /* execute.simd:3173 [D] s_b_60_0[s_b_60_1] */
        auto s_b_60_2 = emitter.vector_extract(s_b_60_0, emitter.const_u8((uint8_t)10ULL));
        /* execute.simd:3173 [F] s_b_60_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_60_4 = (s32)s_b_60_2 */
        auto s_b_60_4 = emitter.sx(s_b_60_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_60_5 = s_b_60_4<s_b_60_3 */
        auto s_b_60_5 = emitter.cmp_lt(s_b_60_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_60_6: If s_b_60_5: Jump b_62 else b_64 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_62;
            dynamic_block_queue.push(block_b_62);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_64;
            dynamic_block_queue.push(block_b_64);
            false_target = block;
          }
          emitter.branch(s_b_60_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_61) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_61);
        /* execute.simd:3176 [D] s_b_61_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_61_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_61_1 = constant u8 9 (const) */
        /* execute.simd:3176 [D] s_b_61_0[s_b_61_1] */
        auto s_b_61_2 = emitter.vector_extract(s_b_61_0, emitter.const_u8((uint8_t)9ULL));
        /* execute.simd:3176 [D] s_b_61_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_61_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_61_4 = constant u8 9 (const) */
        /* execute.simd:3176 [D] s_b_61_3[s_b_61_4] */
        auto s_b_61_5 = emitter.vector_extract(s_b_61_3, emitter.const_u8((uint8_t)9ULL));
        /* execute.simd:3176 [D] s_b_61_6 = s_b_61_2<<s_b_61_5 */
        auto s_b_61_6 = emitter.shl(s_b_61_2, s_b_61_5);
        /* execute.simd:3176 [D] s_b_61_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_61_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_61_8 = (u8)s_b_61_6 */
        auto s_b_61_8 = emitter.reinterpret(s_b_61_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_61_9 = constant s32 9 (const) */
        /* execute.simd:3176 [D] s_b_61_10 = s_b_61_7[s_b_61_9] <= s_b_61_8 */
        auto s_b_61_10 = emitter.vector_insert(s_b_61_7, emitter.const_s32((int32_t)9ULL), s_b_61_8);
        /* execute.simd:3176 [D] s_b_61_11: sym_26036_0_rd = s_b_61_10, dominates: s_b_62_8 s_b_64_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_61_10);
        /* execute.simd:3176 [F] s_b_61_12: Jump b_60 (const) */
        {
          auto block = block_b_60;
          dynamic_block_queue.push(block_b_60);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_62) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_62);
        /* execute.simd:3174 [D] s_b_62_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_62_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_62_1 = constant u8 a (const) */
        /* execute.simd:3174 [D] s_b_62_0[s_b_62_1] */
        auto s_b_62_2 = emitter.vector_extract(s_b_62_0, emitter.const_u8((uint8_t)10ULL));
        /* execute.simd:3174 [D] s_b_62_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_62_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_62_4 = constant u8 a (const) */
        /* execute.simd:3174 [D] s_b_62_3[s_b_62_4] */
        auto s_b_62_5 = emitter.vector_extract(s_b_62_3, emitter.const_u8((uint8_t)10ULL));
        /* execute.simd:3174 [D] s_b_62_6 = -s_b_62_5 */
        auto s_b_62_6 = emitter.neg(s_b_62_5);
        /* execute.simd:3174 [D] s_b_62_7 = s_b_62_2->>s_b_62_6 */
        auto s_b_62_7 = emitter.sar(s_b_62_2, s_b_62_6);
        /* execute.simd:3174 [D] s_b_62_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_62_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_62_9 = (u8)s_b_62_7 */
        auto s_b_62_9 = emitter.reinterpret(s_b_62_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_62_10 = constant s32 a (const) */
        /* execute.simd:3174 [D] s_b_62_11 = s_b_62_8[s_b_62_10] <= s_b_62_9 */
        auto s_b_62_11 = emitter.vector_insert(s_b_62_8, emitter.const_s32((int32_t)10ULL), s_b_62_9);
        /* execute.simd:3174 [D] s_b_62_12: sym_26036_0_rd = s_b_62_11, dominates: s_b_65_8 s_b_67_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_62_11);
        /* execute.simd:3174 [F] s_b_62_13: Jump b_63 (const) */
        {
          auto block = block_b_63;
          dynamic_block_queue.push(block_b_63);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_63) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_63);
        /* execute.simd:3173 [D] s_b_63_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_63_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_63_1 = constant u8 b (const) */
        /* execute.simd:3173 [D] s_b_63_0[s_b_63_1] */
        auto s_b_63_2 = emitter.vector_extract(s_b_63_0, emitter.const_u8((uint8_t)11ULL));
        /* execute.simd:3173 [F] s_b_63_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_63_4 = (s32)s_b_63_2 */
        auto s_b_63_4 = emitter.sx(s_b_63_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_63_5 = s_b_63_4<s_b_63_3 */
        auto s_b_63_5 = emitter.cmp_lt(s_b_63_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_63_6: If s_b_63_5: Jump b_65 else b_67 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_65;
            dynamic_block_queue.push(block_b_65);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_67;
            dynamic_block_queue.push(block_b_67);
            false_target = block;
          }
          emitter.branch(s_b_63_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_64) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_64);
        /* execute.simd:3176 [D] s_b_64_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_64_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_64_1 = constant u8 a (const) */
        /* execute.simd:3176 [D] s_b_64_0[s_b_64_1] */
        auto s_b_64_2 = emitter.vector_extract(s_b_64_0, emitter.const_u8((uint8_t)10ULL));
        /* execute.simd:3176 [D] s_b_64_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_64_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_64_4 = constant u8 a (const) */
        /* execute.simd:3176 [D] s_b_64_3[s_b_64_4] */
        auto s_b_64_5 = emitter.vector_extract(s_b_64_3, emitter.const_u8((uint8_t)10ULL));
        /* execute.simd:3176 [D] s_b_64_6 = s_b_64_2<<s_b_64_5 */
        auto s_b_64_6 = emitter.shl(s_b_64_2, s_b_64_5);
        /* execute.simd:3176 [D] s_b_64_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_64_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_64_8 = (u8)s_b_64_6 */
        auto s_b_64_8 = emitter.reinterpret(s_b_64_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_64_9 = constant s32 a (const) */
        /* execute.simd:3176 [D] s_b_64_10 = s_b_64_7[s_b_64_9] <= s_b_64_8 */
        auto s_b_64_10 = emitter.vector_insert(s_b_64_7, emitter.const_s32((int32_t)10ULL), s_b_64_8);
        /* execute.simd:3176 [D] s_b_64_11: sym_26036_0_rd = s_b_64_10, dominates: s_b_65_8 s_b_67_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_64_10);
        /* execute.simd:3176 [F] s_b_64_12: Jump b_63 (const) */
        {
          auto block = block_b_63;
          dynamic_block_queue.push(block_b_63);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_65) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_65);
        /* execute.simd:3174 [D] s_b_65_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_65_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_65_1 = constant u8 b (const) */
        /* execute.simd:3174 [D] s_b_65_0[s_b_65_1] */
        auto s_b_65_2 = emitter.vector_extract(s_b_65_0, emitter.const_u8((uint8_t)11ULL));
        /* execute.simd:3174 [D] s_b_65_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_65_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_65_4 = constant u8 b (const) */
        /* execute.simd:3174 [D] s_b_65_3[s_b_65_4] */
        auto s_b_65_5 = emitter.vector_extract(s_b_65_3, emitter.const_u8((uint8_t)11ULL));
        /* execute.simd:3174 [D] s_b_65_6 = -s_b_65_5 */
        auto s_b_65_6 = emitter.neg(s_b_65_5);
        /* execute.simd:3174 [D] s_b_65_7 = s_b_65_2->>s_b_65_6 */
        auto s_b_65_7 = emitter.sar(s_b_65_2, s_b_65_6);
        /* execute.simd:3174 [D] s_b_65_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_65_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_65_9 = (u8)s_b_65_7 */
        auto s_b_65_9 = emitter.reinterpret(s_b_65_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_65_10 = constant s32 b (const) */
        /* execute.simd:3174 [D] s_b_65_11 = s_b_65_8[s_b_65_10] <= s_b_65_9 */
        auto s_b_65_11 = emitter.vector_insert(s_b_65_8, emitter.const_s32((int32_t)11ULL), s_b_65_9);
        /* execute.simd:3174 [D] s_b_65_12: sym_26036_0_rd = s_b_65_11, dominates: s_b_68_8 s_b_70_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_65_11);
        /* execute.simd:3174 [F] s_b_65_13: Jump b_66 (const) */
        {
          auto block = block_b_66;
          dynamic_block_queue.push(block_b_66);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_66) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_66);
        /* execute.simd:3173 [D] s_b_66_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_66_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_66_1 = constant u8 c (const) */
        /* execute.simd:3173 [D] s_b_66_0[s_b_66_1] */
        auto s_b_66_2 = emitter.vector_extract(s_b_66_0, emitter.const_u8((uint8_t)12ULL));
        /* execute.simd:3173 [F] s_b_66_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_66_4 = (s32)s_b_66_2 */
        auto s_b_66_4 = emitter.sx(s_b_66_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_66_5 = s_b_66_4<s_b_66_3 */
        auto s_b_66_5 = emitter.cmp_lt(s_b_66_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_66_6: If s_b_66_5: Jump b_68 else b_70 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_68;
            dynamic_block_queue.push(block_b_68);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_70;
            dynamic_block_queue.push(block_b_70);
            false_target = block;
          }
          emitter.branch(s_b_66_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_67) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_67);
        /* execute.simd:3176 [D] s_b_67_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_67_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_67_1 = constant u8 b (const) */
        /* execute.simd:3176 [D] s_b_67_0[s_b_67_1] */
        auto s_b_67_2 = emitter.vector_extract(s_b_67_0, emitter.const_u8((uint8_t)11ULL));
        /* execute.simd:3176 [D] s_b_67_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_67_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_67_4 = constant u8 b (const) */
        /* execute.simd:3176 [D] s_b_67_3[s_b_67_4] */
        auto s_b_67_5 = emitter.vector_extract(s_b_67_3, emitter.const_u8((uint8_t)11ULL));
        /* execute.simd:3176 [D] s_b_67_6 = s_b_67_2<<s_b_67_5 */
        auto s_b_67_6 = emitter.shl(s_b_67_2, s_b_67_5);
        /* execute.simd:3176 [D] s_b_67_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_67_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_67_8 = (u8)s_b_67_6 */
        auto s_b_67_8 = emitter.reinterpret(s_b_67_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_67_9 = constant s32 b (const) */
        /* execute.simd:3176 [D] s_b_67_10 = s_b_67_7[s_b_67_9] <= s_b_67_8 */
        auto s_b_67_10 = emitter.vector_insert(s_b_67_7, emitter.const_s32((int32_t)11ULL), s_b_67_8);
        /* execute.simd:3176 [D] s_b_67_11: sym_26036_0_rd = s_b_67_10, dominates: s_b_68_8 s_b_70_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_67_10);
        /* execute.simd:3176 [F] s_b_67_12: Jump b_66 (const) */
        {
          auto block = block_b_66;
          dynamic_block_queue.push(block_b_66);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_68) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_68);
        /* execute.simd:3174 [D] s_b_68_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_68_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_68_1 = constant u8 c (const) */
        /* execute.simd:3174 [D] s_b_68_0[s_b_68_1] */
        auto s_b_68_2 = emitter.vector_extract(s_b_68_0, emitter.const_u8((uint8_t)12ULL));
        /* execute.simd:3174 [D] s_b_68_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_68_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_68_4 = constant u8 c (const) */
        /* execute.simd:3174 [D] s_b_68_3[s_b_68_4] */
        auto s_b_68_5 = emitter.vector_extract(s_b_68_3, emitter.const_u8((uint8_t)12ULL));
        /* execute.simd:3174 [D] s_b_68_6 = -s_b_68_5 */
        auto s_b_68_6 = emitter.neg(s_b_68_5);
        /* execute.simd:3174 [D] s_b_68_7 = s_b_68_2->>s_b_68_6 */
        auto s_b_68_7 = emitter.sar(s_b_68_2, s_b_68_6);
        /* execute.simd:3174 [D] s_b_68_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_68_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_68_9 = (u8)s_b_68_7 */
        auto s_b_68_9 = emitter.reinterpret(s_b_68_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_68_10 = constant s32 c (const) */
        /* execute.simd:3174 [D] s_b_68_11 = s_b_68_8[s_b_68_10] <= s_b_68_9 */
        auto s_b_68_11 = emitter.vector_insert(s_b_68_8, emitter.const_s32((int32_t)12ULL), s_b_68_9);
        /* execute.simd:3174 [D] s_b_68_12: sym_26036_0_rd = s_b_68_11, dominates: s_b_71_8 s_b_73_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_68_11);
        /* execute.simd:3174 [F] s_b_68_13: Jump b_69 (const) */
        {
          auto block = block_b_69;
          dynamic_block_queue.push(block_b_69);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_69) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_69);
        /* execute.simd:3173 [D] s_b_69_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_69_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_69_1 = constant u8 d (const) */
        /* execute.simd:3173 [D] s_b_69_0[s_b_69_1] */
        auto s_b_69_2 = emitter.vector_extract(s_b_69_0, emitter.const_u8((uint8_t)13ULL));
        /* execute.simd:3173 [F] s_b_69_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_69_4 = (s32)s_b_69_2 */
        auto s_b_69_4 = emitter.sx(s_b_69_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_69_5 = s_b_69_4<s_b_69_3 */
        auto s_b_69_5 = emitter.cmp_lt(s_b_69_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_69_6: If s_b_69_5: Jump b_71 else b_73 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_71;
            dynamic_block_queue.push(block_b_71);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_73;
            dynamic_block_queue.push(block_b_73);
            false_target = block;
          }
          emitter.branch(s_b_69_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_70) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_70);
        /* execute.simd:3176 [D] s_b_70_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_70_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_70_1 = constant u8 c (const) */
        /* execute.simd:3176 [D] s_b_70_0[s_b_70_1] */
        auto s_b_70_2 = emitter.vector_extract(s_b_70_0, emitter.const_u8((uint8_t)12ULL));
        /* execute.simd:3176 [D] s_b_70_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_70_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_70_4 = constant u8 c (const) */
        /* execute.simd:3176 [D] s_b_70_3[s_b_70_4] */
        auto s_b_70_5 = emitter.vector_extract(s_b_70_3, emitter.const_u8((uint8_t)12ULL));
        /* execute.simd:3176 [D] s_b_70_6 = s_b_70_2<<s_b_70_5 */
        auto s_b_70_6 = emitter.shl(s_b_70_2, s_b_70_5);
        /* execute.simd:3176 [D] s_b_70_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_70_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_70_8 = (u8)s_b_70_6 */
        auto s_b_70_8 = emitter.reinterpret(s_b_70_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_70_9 = constant s32 c (const) */
        /* execute.simd:3176 [D] s_b_70_10 = s_b_70_7[s_b_70_9] <= s_b_70_8 */
        auto s_b_70_10 = emitter.vector_insert(s_b_70_7, emitter.const_s32((int32_t)12ULL), s_b_70_8);
        /* execute.simd:3176 [D] s_b_70_11: sym_26036_0_rd = s_b_70_10, dominates: s_b_71_8 s_b_73_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_70_10);
        /* execute.simd:3176 [F] s_b_70_12: Jump b_69 (const) */
        {
          auto block = block_b_69;
          dynamic_block_queue.push(block_b_69);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_71) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_71);
        /* execute.simd:3174 [D] s_b_71_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_71_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_71_1 = constant u8 d (const) */
        /* execute.simd:3174 [D] s_b_71_0[s_b_71_1] */
        auto s_b_71_2 = emitter.vector_extract(s_b_71_0, emitter.const_u8((uint8_t)13ULL));
        /* execute.simd:3174 [D] s_b_71_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_71_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_71_4 = constant u8 d (const) */
        /* execute.simd:3174 [D] s_b_71_3[s_b_71_4] */
        auto s_b_71_5 = emitter.vector_extract(s_b_71_3, emitter.const_u8((uint8_t)13ULL));
        /* execute.simd:3174 [D] s_b_71_6 = -s_b_71_5 */
        auto s_b_71_6 = emitter.neg(s_b_71_5);
        /* execute.simd:3174 [D] s_b_71_7 = s_b_71_2->>s_b_71_6 */
        auto s_b_71_7 = emitter.sar(s_b_71_2, s_b_71_6);
        /* execute.simd:3174 [D] s_b_71_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_71_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_71_9 = (u8)s_b_71_7 */
        auto s_b_71_9 = emitter.reinterpret(s_b_71_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_71_10 = constant s32 d (const) */
        /* execute.simd:3174 [D] s_b_71_11 = s_b_71_8[s_b_71_10] <= s_b_71_9 */
        auto s_b_71_11 = emitter.vector_insert(s_b_71_8, emitter.const_s32((int32_t)13ULL), s_b_71_9);
        /* execute.simd:3174 [D] s_b_71_12: sym_26036_0_rd = s_b_71_11, dominates: s_b_74_8 s_b_76_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_71_11);
        /* execute.simd:3174 [F] s_b_71_13: Jump b_72 (const) */
        {
          auto block = block_b_72;
          dynamic_block_queue.push(block_b_72);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_72) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_72);
        /* execute.simd:3173 [D] s_b_72_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_72_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_72_1 = constant u8 e (const) */
        /* execute.simd:3173 [D] s_b_72_0[s_b_72_1] */
        auto s_b_72_2 = emitter.vector_extract(s_b_72_0, emitter.const_u8((uint8_t)14ULL));
        /* execute.simd:3173 [F] s_b_72_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_72_4 = (s32)s_b_72_2 */
        auto s_b_72_4 = emitter.sx(s_b_72_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_72_5 = s_b_72_4<s_b_72_3 */
        auto s_b_72_5 = emitter.cmp_lt(s_b_72_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_72_6: If s_b_72_5: Jump b_74 else b_76 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_74;
            dynamic_block_queue.push(block_b_74);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_76;
            dynamic_block_queue.push(block_b_76);
            false_target = block;
          }
          emitter.branch(s_b_72_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_73) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_73);
        /* execute.simd:3176 [D] s_b_73_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_73_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_73_1 = constant u8 d (const) */
        /* execute.simd:3176 [D] s_b_73_0[s_b_73_1] */
        auto s_b_73_2 = emitter.vector_extract(s_b_73_0, emitter.const_u8((uint8_t)13ULL));
        /* execute.simd:3176 [D] s_b_73_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_73_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_73_4 = constant u8 d (const) */
        /* execute.simd:3176 [D] s_b_73_3[s_b_73_4] */
        auto s_b_73_5 = emitter.vector_extract(s_b_73_3, emitter.const_u8((uint8_t)13ULL));
        /* execute.simd:3176 [D] s_b_73_6 = s_b_73_2<<s_b_73_5 */
        auto s_b_73_6 = emitter.shl(s_b_73_2, s_b_73_5);
        /* execute.simd:3176 [D] s_b_73_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_73_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_73_8 = (u8)s_b_73_6 */
        auto s_b_73_8 = emitter.reinterpret(s_b_73_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_73_9 = constant s32 d (const) */
        /* execute.simd:3176 [D] s_b_73_10 = s_b_73_7[s_b_73_9] <= s_b_73_8 */
        auto s_b_73_10 = emitter.vector_insert(s_b_73_7, emitter.const_s32((int32_t)13ULL), s_b_73_8);
        /* execute.simd:3176 [D] s_b_73_11: sym_26036_0_rd = s_b_73_10, dominates: s_b_74_8 s_b_76_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_73_10);
        /* execute.simd:3176 [F] s_b_73_12: Jump b_72 (const) */
        {
          auto block = block_b_72;
          dynamic_block_queue.push(block_b_72);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_74) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_74);
        /* execute.simd:3174 [D] s_b_74_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_74_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_74_1 = constant u8 e (const) */
        /* execute.simd:3174 [D] s_b_74_0[s_b_74_1] */
        auto s_b_74_2 = emitter.vector_extract(s_b_74_0, emitter.const_u8((uint8_t)14ULL));
        /* execute.simd:3174 [D] s_b_74_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_74_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_74_4 = constant u8 e (const) */
        /* execute.simd:3174 [D] s_b_74_3[s_b_74_4] */
        auto s_b_74_5 = emitter.vector_extract(s_b_74_3, emitter.const_u8((uint8_t)14ULL));
        /* execute.simd:3174 [D] s_b_74_6 = -s_b_74_5 */
        auto s_b_74_6 = emitter.neg(s_b_74_5);
        /* execute.simd:3174 [D] s_b_74_7 = s_b_74_2->>s_b_74_6 */
        auto s_b_74_7 = emitter.sar(s_b_74_2, s_b_74_6);
        /* execute.simd:3174 [D] s_b_74_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_74_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_74_9 = (u8)s_b_74_7 */
        auto s_b_74_9 = emitter.reinterpret(s_b_74_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_74_10 = constant s32 e (const) */
        /* execute.simd:3174 [D] s_b_74_11 = s_b_74_8[s_b_74_10] <= s_b_74_9 */
        auto s_b_74_11 = emitter.vector_insert(s_b_74_8, emitter.const_s32((int32_t)14ULL), s_b_74_9);
        /* execute.simd:3174 [D] s_b_74_12: sym_26036_0_rd = s_b_74_11, dominates: s_b_77_8 s_b_79_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_74_11);
        /* execute.simd:3174 [F] s_b_74_13: Jump b_75 (const) */
        {
          auto block = block_b_75;
          dynamic_block_queue.push(block_b_75);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_75) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_75);
        /* execute.simd:3173 [D] s_b_75_0 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_75_0 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_75_1 = constant u8 f (const) */
        /* execute.simd:3173 [D] s_b_75_0[s_b_75_1] */
        auto s_b_75_2 = emitter.vector_extract(s_b_75_0, emitter.const_u8((uint8_t)15ULL));
        /* execute.simd:3173 [F] s_b_75_3 = constant s32 0 (const) */
        /* execute.simd:3173 [D] s_b_75_4 = (s32)s_b_75_2 */
        auto s_b_75_4 = emitter.sx(s_b_75_2, emitter.context().types().s32());
        /* execute.simd:3173 [D] s_b_75_5 = s_b_75_4<s_b_75_3 */
        auto s_b_75_5 = emitter.cmp_lt(s_b_75_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3173 [D] s_b_75_6: If s_b_75_5: Jump b_77 else b_79 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_77;
            dynamic_block_queue.push(block_b_77);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_79;
            dynamic_block_queue.push(block_b_79);
            false_target = block;
          }
          emitter.branch(s_b_75_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_76) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_76);
        /* execute.simd:3176 [D] s_b_76_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_76_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_76_1 = constant u8 e (const) */
        /* execute.simd:3176 [D] s_b_76_0[s_b_76_1] */
        auto s_b_76_2 = emitter.vector_extract(s_b_76_0, emitter.const_u8((uint8_t)14ULL));
        /* execute.simd:3176 [D] s_b_76_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_76_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_76_4 = constant u8 e (const) */
        /* execute.simd:3176 [D] s_b_76_3[s_b_76_4] */
        auto s_b_76_5 = emitter.vector_extract(s_b_76_3, emitter.const_u8((uint8_t)14ULL));
        /* execute.simd:3176 [D] s_b_76_6 = s_b_76_2<<s_b_76_5 */
        auto s_b_76_6 = emitter.shl(s_b_76_2, s_b_76_5);
        /* execute.simd:3176 [D] s_b_76_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_76_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_76_8 = (u8)s_b_76_6 */
        auto s_b_76_8 = emitter.reinterpret(s_b_76_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_76_9 = constant s32 e (const) */
        /* execute.simd:3176 [D] s_b_76_10 = s_b_76_7[s_b_76_9] <= s_b_76_8 */
        auto s_b_76_10 = emitter.vector_insert(s_b_76_7, emitter.const_s32((int32_t)14ULL), s_b_76_8);
        /* execute.simd:3176 [D] s_b_76_11: sym_26036_0_rd = s_b_76_10, dominates: s_b_77_8 s_b_79_7  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_76_10);
        /* execute.simd:3176 [F] s_b_76_12: Jump b_75 (const) */
        {
          auto block = block_b_75;
          dynamic_block_queue.push(block_b_75);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_77) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_77);
        /* execute.simd:3174 [D] s_b_77_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_77_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_77_1 = constant u8 f (const) */
        /* execute.simd:3174 [D] s_b_77_0[s_b_77_1] */
        auto s_b_77_2 = emitter.vector_extract(s_b_77_0, emitter.const_u8((uint8_t)15ULL));
        /* execute.simd:3174 [D] s_b_77_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_77_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_77_4 = constant u8 f (const) */
        /* execute.simd:3174 [D] s_b_77_3[s_b_77_4] */
        auto s_b_77_5 = emitter.vector_extract(s_b_77_3, emitter.const_u8((uint8_t)15ULL));
        /* execute.simd:3174 [D] s_b_77_6 = -s_b_77_5 */
        auto s_b_77_6 = emitter.neg(s_b_77_5);
        /* execute.simd:3174 [D] s_b_77_7 = s_b_77_2->>s_b_77_6 */
        auto s_b_77_7 = emitter.sar(s_b_77_2, s_b_77_6);
        /* execute.simd:3174 [D] s_b_77_8 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_77_8 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3174 [D] s_b_77_9 = (u8)s_b_77_7 */
        auto s_b_77_9 = emitter.reinterpret(s_b_77_7, emitter.context().types().u8());
        /* execute.simd:3174 [F] s_b_77_10 = constant s32 f (const) */
        /* execute.simd:3174 [D] s_b_77_11 = s_b_77_8[s_b_77_10] <= s_b_77_9 */
        auto s_b_77_11 = emitter.vector_insert(s_b_77_8, emitter.const_s32((int32_t)15ULL), s_b_77_9);
        /* execute.simd:3174 [D] s_b_77_12: sym_26036_0_rd = s_b_77_11, dominates: s_b_78_1  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_77_11);
        /* execute.simd:3174 [F] s_b_77_13: Jump b_78 (const) */
        {
          auto block = block_b_78;
          dynamic_block_queue.push(block_b_78);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_78) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_78);
        /* execute.simd:3180 [F] s_b_78_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3180 [D] s_b_78_1 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_78_1 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3180 [D] s_b_78_2: WriteRegBank 16:s_b_78_0 = s_b_78_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_78_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_78_1);
        /* execute.simd:0 [F] s_b_78_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_79) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_79);
        /* execute.simd:3176 [D] s_b_79_0 = sym_26026_0_rn wutils::Vector<int8_t, 16> */
        auto s_b_79_0 = emitter.load_local(DV_sym_26026_0_rn, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_79_1 = constant u8 f (const) */
        /* execute.simd:3176 [D] s_b_79_0[s_b_79_1] */
        auto s_b_79_2 = emitter.vector_extract(s_b_79_0, emitter.const_u8((uint8_t)15ULL));
        /* execute.simd:3176 [D] s_b_79_3 = sym_26031_0_rm wutils::Vector<int8_t, 16> */
        auto s_b_79_3 = emitter.load_local(DV_sym_26031_0_rm, emitter.context().types().v16s8());
        /* ???:4294967295 [F] s_b_79_4 = constant u8 f (const) */
        /* execute.simd:3176 [D] s_b_79_3[s_b_79_4] */
        auto s_b_79_5 = emitter.vector_extract(s_b_79_3, emitter.const_u8((uint8_t)15ULL));
        /* execute.simd:3176 [D] s_b_79_6 = s_b_79_2<<s_b_79_5 */
        auto s_b_79_6 = emitter.shl(s_b_79_2, s_b_79_5);
        /* execute.simd:3176 [D] s_b_79_7 = sym_26036_0_rd wutils::Vector<uint8_t, 16> */
        auto s_b_79_7 = emitter.load_local(DV_sym_26036_0_rd, emitter.context().types().v16u8());
        /* execute.simd:3176 [D] s_b_79_8 = (u8)s_b_79_6 */
        auto s_b_79_8 = emitter.reinterpret(s_b_79_6, emitter.context().types().u8());
        /* execute.simd:3176 [F] s_b_79_9 = constant s32 f (const) */
        /* execute.simd:3176 [D] s_b_79_10 = s_b_79_7[s_b_79_9] <= s_b_79_8 */
        auto s_b_79_10 = emitter.vector_insert(s_b_79_7, emitter.const_s32((int32_t)15ULL), s_b_79_8);
        /* execute.simd:3176 [D] s_b_79_11: sym_26036_0_rd = s_b_79_10, dominates: s_b_78_1  */
        emitter.store_local(DV_sym_26036_0_rd, s_b_79_10);
        /* execute.simd:3176 [F] s_b_79_12: Jump b_78 (const) */
        {
          auto block = block_b_78;
          dynamic_block_queue.push(block_b_78);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_81) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_81);
        /* execute.simd:3190 [D] s_b_81_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_81_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_81_1 = constant u8 0 (const) */
        /* execute.simd:3190 [D] s_b_81_0[s_b_81_1] */
        auto s_b_81_2 = emitter.vector_extract(s_b_81_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3190 [D] s_b_81_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_81_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_81_4 = constant u8 0 (const) */
        /* execute.simd:3190 [D] s_b_81_3[s_b_81_4] */
        auto s_b_81_5 = emitter.vector_extract(s_b_81_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3190 [D] s_b_81_6 = -s_b_81_5 */
        auto s_b_81_6 = emitter.neg(s_b_81_5);
        /* execute.simd:3190 [D] s_b_81_7 = s_b_81_2->>s_b_81_6 */
        auto s_b_81_7 = emitter.sar(s_b_81_2, s_b_81_6);
        /* execute.simd:3190 [F] s_b_81_8 = sym_26827_0_rd (const) wutils::Vector<uint16_t, 8> */
        wutils::Vector<uint16_t, 8> s_b_81_8 = CV_sym_26827_0_rd;
        /* execute.simd:3190 [D] s_b_81_9 = (u16)s_b_81_7 */
        auto s_b_81_9 = emitter.reinterpret(s_b_81_7, emitter.context().types().u16());
        /* execute.simd:3190 [F] s_b_81_10 = constant s32 0 (const) */
        /* execute.simd:3190 [D] s_b_81_11 = s_b_81_8[s_b_81_10] <= s_b_81_9 */
        auto s_b_81_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_81_8[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_81_9);
        /* execute.simd:3190 [D] s_b_81_12: sym_26827_0_rd = s_b_81_11, dominates: s_b_84_8 s_b_86_7  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_81_11);
        /* execute.simd:3190 [F] s_b_81_13: Jump b_82 (const) */
        {
          auto block = block_b_82;
          dynamic_block_queue.push(block_b_82);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_82) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_82);
        /* execute.simd:3189 [D] s_b_82_0 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_82_0 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_82_1 = constant u8 1 (const) */
        /* execute.simd:3189 [D] s_b_82_0[s_b_82_1] */
        auto s_b_82_2 = emitter.vector_extract(s_b_82_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3189 [F] s_b_82_3 = constant s32 0 (const) */
        /* execute.simd:3189 [D] s_b_82_4 = (s32)s_b_82_2 */
        auto s_b_82_4 = emitter.sx(s_b_82_2, emitter.context().types().s32());
        /* execute.simd:3189 [D] s_b_82_5 = s_b_82_4<s_b_82_3 */
        auto s_b_82_5 = emitter.cmp_lt(s_b_82_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3189 [D] s_b_82_6: If s_b_82_5: Jump b_84 else b_86 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_84;
            dynamic_block_queue.push(block_b_84);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_86;
            dynamic_block_queue.push(block_b_86);
            false_target = block;
          }
          emitter.branch(s_b_82_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_83) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_83);
        /* execute.simd:3192 [D] s_b_83_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_83_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_83_1 = constant u8 0 (const) */
        /* execute.simd:3192 [D] s_b_83_0[s_b_83_1] */
        auto s_b_83_2 = emitter.vector_extract(s_b_83_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3192 [D] s_b_83_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_83_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_83_4 = constant u8 0 (const) */
        /* execute.simd:3192 [D] s_b_83_3[s_b_83_4] */
        auto s_b_83_5 = emitter.vector_extract(s_b_83_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3192 [D] s_b_83_6 = s_b_83_2<<s_b_83_5 */
        auto s_b_83_6 = emitter.shl(s_b_83_2, s_b_83_5);
        /* execute.simd:3192 [F] s_b_83_7 = sym_26827_0_rd (const) wutils::Vector<uint16_t, 8> */
        wutils::Vector<uint16_t, 8> s_b_83_7 = CV_sym_26827_0_rd;
        /* execute.simd:3192 [D] s_b_83_8 = (u16)s_b_83_6 */
        auto s_b_83_8 = emitter.reinterpret(s_b_83_6, emitter.context().types().u16());
        /* execute.simd:3192 [F] s_b_83_9 = constant s32 0 (const) */
        /* execute.simd:3192 [D] s_b_83_10 = s_b_83_7[s_b_83_9] <= s_b_83_8 */
        auto s_b_83_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_83_7[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_83_8);
        /* execute.simd:3192 [D] s_b_83_11: sym_26827_0_rd = s_b_83_10, dominates: s_b_84_8 s_b_86_7  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_83_10);
        /* execute.simd:3192 [F] s_b_83_12: Jump b_82 (const) */
        {
          auto block = block_b_82;
          dynamic_block_queue.push(block_b_82);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_84) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_84);
        /* execute.simd:3190 [D] s_b_84_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_84_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_84_1 = constant u8 1 (const) */
        /* execute.simd:3190 [D] s_b_84_0[s_b_84_1] */
        auto s_b_84_2 = emitter.vector_extract(s_b_84_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3190 [D] s_b_84_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_84_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_84_4 = constant u8 1 (const) */
        /* execute.simd:3190 [D] s_b_84_3[s_b_84_4] */
        auto s_b_84_5 = emitter.vector_extract(s_b_84_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3190 [D] s_b_84_6 = -s_b_84_5 */
        auto s_b_84_6 = emitter.neg(s_b_84_5);
        /* execute.simd:3190 [D] s_b_84_7 = s_b_84_2->>s_b_84_6 */
        auto s_b_84_7 = emitter.sar(s_b_84_2, s_b_84_6);
        /* execute.simd:3190 [D] s_b_84_8 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_84_8 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3190 [D] s_b_84_9 = (u16)s_b_84_7 */
        auto s_b_84_9 = emitter.reinterpret(s_b_84_7, emitter.context().types().u16());
        /* execute.simd:3190 [F] s_b_84_10 = constant s32 1 (const) */
        /* execute.simd:3190 [D] s_b_84_11 = s_b_84_8[s_b_84_10] <= s_b_84_9 */
        auto s_b_84_11 = emitter.vector_insert(s_b_84_8, emitter.const_s32((int32_t)1ULL), s_b_84_9);
        /* execute.simd:3190 [D] s_b_84_12: sym_26827_0_rd = s_b_84_11, dominates: s_b_87_8 s_b_89_7  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_84_11);
        /* execute.simd:3190 [F] s_b_84_13: Jump b_85 (const) */
        {
          auto block = block_b_85;
          dynamic_block_queue.push(block_b_85);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_85) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_85);
        /* execute.simd:3189 [D] s_b_85_0 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_85_0 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_85_1 = constant u8 2 (const) */
        /* execute.simd:3189 [D] s_b_85_0[s_b_85_1] */
        auto s_b_85_2 = emitter.vector_extract(s_b_85_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3189 [F] s_b_85_3 = constant s32 0 (const) */
        /* execute.simd:3189 [D] s_b_85_4 = (s32)s_b_85_2 */
        auto s_b_85_4 = emitter.sx(s_b_85_2, emitter.context().types().s32());
        /* execute.simd:3189 [D] s_b_85_5 = s_b_85_4<s_b_85_3 */
        auto s_b_85_5 = emitter.cmp_lt(s_b_85_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3189 [D] s_b_85_6: If s_b_85_5: Jump b_87 else b_89 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_87;
            dynamic_block_queue.push(block_b_87);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_89;
            dynamic_block_queue.push(block_b_89);
            false_target = block;
          }
          emitter.branch(s_b_85_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_86) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_86);
        /* execute.simd:3192 [D] s_b_86_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_86_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_86_1 = constant u8 1 (const) */
        /* execute.simd:3192 [D] s_b_86_0[s_b_86_1] */
        auto s_b_86_2 = emitter.vector_extract(s_b_86_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3192 [D] s_b_86_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_86_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_86_4 = constant u8 1 (const) */
        /* execute.simd:3192 [D] s_b_86_3[s_b_86_4] */
        auto s_b_86_5 = emitter.vector_extract(s_b_86_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3192 [D] s_b_86_6 = s_b_86_2<<s_b_86_5 */
        auto s_b_86_6 = emitter.shl(s_b_86_2, s_b_86_5);
        /* execute.simd:3192 [D] s_b_86_7 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_86_7 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3192 [D] s_b_86_8 = (u16)s_b_86_6 */
        auto s_b_86_8 = emitter.reinterpret(s_b_86_6, emitter.context().types().u16());
        /* execute.simd:3192 [F] s_b_86_9 = constant s32 1 (const) */
        /* execute.simd:3192 [D] s_b_86_10 = s_b_86_7[s_b_86_9] <= s_b_86_8 */
        auto s_b_86_10 = emitter.vector_insert(s_b_86_7, emitter.const_s32((int32_t)1ULL), s_b_86_8);
        /* execute.simd:3192 [D] s_b_86_11: sym_26827_0_rd = s_b_86_10, dominates: s_b_87_8 s_b_89_7  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_86_10);
        /* execute.simd:3192 [F] s_b_86_12: Jump b_85 (const) */
        {
          auto block = block_b_85;
          dynamic_block_queue.push(block_b_85);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_87) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_87);
        /* execute.simd:3190 [D] s_b_87_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_87_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_87_1 = constant u8 2 (const) */
        /* execute.simd:3190 [D] s_b_87_0[s_b_87_1] */
        auto s_b_87_2 = emitter.vector_extract(s_b_87_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3190 [D] s_b_87_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_87_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_87_4 = constant u8 2 (const) */
        /* execute.simd:3190 [D] s_b_87_3[s_b_87_4] */
        auto s_b_87_5 = emitter.vector_extract(s_b_87_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3190 [D] s_b_87_6 = -s_b_87_5 */
        auto s_b_87_6 = emitter.neg(s_b_87_5);
        /* execute.simd:3190 [D] s_b_87_7 = s_b_87_2->>s_b_87_6 */
        auto s_b_87_7 = emitter.sar(s_b_87_2, s_b_87_6);
        /* execute.simd:3190 [D] s_b_87_8 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_87_8 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3190 [D] s_b_87_9 = (u16)s_b_87_7 */
        auto s_b_87_9 = emitter.reinterpret(s_b_87_7, emitter.context().types().u16());
        /* execute.simd:3190 [F] s_b_87_10 = constant s32 2 (const) */
        /* execute.simd:3190 [D] s_b_87_11 = s_b_87_8[s_b_87_10] <= s_b_87_9 */
        auto s_b_87_11 = emitter.vector_insert(s_b_87_8, emitter.const_s32((int32_t)2ULL), s_b_87_9);
        /* execute.simd:3190 [D] s_b_87_12: sym_26827_0_rd = s_b_87_11, dominates: s_b_90_8 s_b_92_7  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_87_11);
        /* execute.simd:3190 [F] s_b_87_13: Jump b_88 (const) */
        {
          auto block = block_b_88;
          dynamic_block_queue.push(block_b_88);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_88) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_88);
        /* execute.simd:3189 [D] s_b_88_0 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_88_0 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_88_1 = constant u8 3 (const) */
        /* execute.simd:3189 [D] s_b_88_0[s_b_88_1] */
        auto s_b_88_2 = emitter.vector_extract(s_b_88_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3189 [F] s_b_88_3 = constant s32 0 (const) */
        /* execute.simd:3189 [D] s_b_88_4 = (s32)s_b_88_2 */
        auto s_b_88_4 = emitter.sx(s_b_88_2, emitter.context().types().s32());
        /* execute.simd:3189 [D] s_b_88_5 = s_b_88_4<s_b_88_3 */
        auto s_b_88_5 = emitter.cmp_lt(s_b_88_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3189 [D] s_b_88_6: If s_b_88_5: Jump b_90 else b_92 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_90;
            dynamic_block_queue.push(block_b_90);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_92;
            dynamic_block_queue.push(block_b_92);
            false_target = block;
          }
          emitter.branch(s_b_88_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_89) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_89);
        /* execute.simd:3192 [D] s_b_89_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_89_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_89_1 = constant u8 2 (const) */
        /* execute.simd:3192 [D] s_b_89_0[s_b_89_1] */
        auto s_b_89_2 = emitter.vector_extract(s_b_89_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3192 [D] s_b_89_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_89_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_89_4 = constant u8 2 (const) */
        /* execute.simd:3192 [D] s_b_89_3[s_b_89_4] */
        auto s_b_89_5 = emitter.vector_extract(s_b_89_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3192 [D] s_b_89_6 = s_b_89_2<<s_b_89_5 */
        auto s_b_89_6 = emitter.shl(s_b_89_2, s_b_89_5);
        /* execute.simd:3192 [D] s_b_89_7 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_89_7 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3192 [D] s_b_89_8 = (u16)s_b_89_6 */
        auto s_b_89_8 = emitter.reinterpret(s_b_89_6, emitter.context().types().u16());
        /* execute.simd:3192 [F] s_b_89_9 = constant s32 2 (const) */
        /* execute.simd:3192 [D] s_b_89_10 = s_b_89_7[s_b_89_9] <= s_b_89_8 */
        auto s_b_89_10 = emitter.vector_insert(s_b_89_7, emitter.const_s32((int32_t)2ULL), s_b_89_8);
        /* execute.simd:3192 [D] s_b_89_11: sym_26827_0_rd = s_b_89_10, dominates: s_b_90_8 s_b_92_7  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_89_10);
        /* execute.simd:3192 [F] s_b_89_12: Jump b_88 (const) */
        {
          auto block = block_b_88;
          dynamic_block_queue.push(block_b_88);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_90) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_90);
        /* execute.simd:3190 [D] s_b_90_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_90_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_90_1 = constant u8 3 (const) */
        /* execute.simd:3190 [D] s_b_90_0[s_b_90_1] */
        auto s_b_90_2 = emitter.vector_extract(s_b_90_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3190 [D] s_b_90_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_90_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_90_4 = constant u8 3 (const) */
        /* execute.simd:3190 [D] s_b_90_3[s_b_90_4] */
        auto s_b_90_5 = emitter.vector_extract(s_b_90_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3190 [D] s_b_90_6 = -s_b_90_5 */
        auto s_b_90_6 = emitter.neg(s_b_90_5);
        /* execute.simd:3190 [D] s_b_90_7 = s_b_90_2->>s_b_90_6 */
        auto s_b_90_7 = emitter.sar(s_b_90_2, s_b_90_6);
        /* execute.simd:3190 [D] s_b_90_8 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_90_8 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3190 [D] s_b_90_9 = (u16)s_b_90_7 */
        auto s_b_90_9 = emitter.reinterpret(s_b_90_7, emitter.context().types().u16());
        /* execute.simd:3190 [F] s_b_90_10 = constant s32 3 (const) */
        /* execute.simd:3190 [D] s_b_90_11 = s_b_90_8[s_b_90_10] <= s_b_90_9 */
        auto s_b_90_11 = emitter.vector_insert(s_b_90_8, emitter.const_s32((int32_t)3ULL), s_b_90_9);
        /* execute.simd:3190 [D] s_b_90_12: sym_26827_0_rd = s_b_90_11, dominates: s_b_91_1  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_90_11);
        /* execute.simd:3190 [F] s_b_90_13: Jump b_91 (const) */
        {
          auto block = block_b_91;
          dynamic_block_queue.push(block_b_91);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_91) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_91);
        /* execute.simd:3196 [F] s_b_91_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3196 [D] s_b_91_1 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_91_1 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3196 [D] s_b_91_2: WriteRegBank 18:s_b_91_0 = s_b_91_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_91_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_91_1);
        /* execute.simd:0 [F] s_b_91_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_92) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_92);
        /* execute.simd:3192 [D] s_b_92_0 = sym_26817_0_rn wutils::Vector<int16_t, 4> */
        auto s_b_92_0 = emitter.load_local(DV_sym_26817_0_rn, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_92_1 = constant u8 3 (const) */
        /* execute.simd:3192 [D] s_b_92_0[s_b_92_1] */
        auto s_b_92_2 = emitter.vector_extract(s_b_92_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3192 [D] s_b_92_3 = sym_26822_0_rm wutils::Vector<int16_t, 4> */
        auto s_b_92_3 = emitter.load_local(DV_sym_26822_0_rm, emitter.context().types().v4s16());
        /* ???:4294967295 [F] s_b_92_4 = constant u8 3 (const) */
        /* execute.simd:3192 [D] s_b_92_3[s_b_92_4] */
        auto s_b_92_5 = emitter.vector_extract(s_b_92_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3192 [D] s_b_92_6 = s_b_92_2<<s_b_92_5 */
        auto s_b_92_6 = emitter.shl(s_b_92_2, s_b_92_5);
        /* execute.simd:3192 [D] s_b_92_7 = sym_26827_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_92_7 = emitter.load_local(DV_sym_26827_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3192 [D] s_b_92_8 = (u16)s_b_92_6 */
        auto s_b_92_8 = emitter.reinterpret(s_b_92_6, emitter.context().types().u16());
        /* execute.simd:3192 [F] s_b_92_9 = constant s32 3 (const) */
        /* execute.simd:3192 [D] s_b_92_10 = s_b_92_7[s_b_92_9] <= s_b_92_8 */
        auto s_b_92_10 = emitter.vector_insert(s_b_92_7, emitter.const_s32((int32_t)3ULL), s_b_92_8);
        /* execute.simd:3192 [D] s_b_92_11: sym_26827_0_rd = s_b_92_10, dominates: s_b_91_1  */
        emitter.store_local(DV_sym_26827_0_rd, s_b_92_10);
        /* execute.simd:3192 [F] s_b_92_12: Jump b_91 (const) */
        {
          auto block = block_b_91;
          dynamic_block_queue.push(block_b_91);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_94) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_94);
        /* execute.simd:3206 [D] s_b_94_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_94_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_94_1 = constant u8 0 (const) */
        /* execute.simd:3206 [D] s_b_94_0[s_b_94_1] */
        auto s_b_94_2 = emitter.vector_extract(s_b_94_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3206 [D] s_b_94_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_94_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_94_4 = constant u8 0 (const) */
        /* execute.simd:3206 [D] s_b_94_3[s_b_94_4] */
        auto s_b_94_5 = emitter.vector_extract(s_b_94_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3206 [D] s_b_94_6 = -s_b_94_5 */
        auto s_b_94_6 = emitter.neg(s_b_94_5);
        /* execute.simd:3206 [D] s_b_94_7 = s_b_94_2->>s_b_94_6 */
        auto s_b_94_7 = emitter.sar(s_b_94_2, s_b_94_6);
        /* execute.simd:3206 [F] s_b_94_8 = sym_27042_0_rd (const) wutils::Vector<uint16_t, 8> */
        wutils::Vector<uint16_t, 8> s_b_94_8 = CV_sym_27042_0_rd;
        /* execute.simd:3206 [D] s_b_94_9 = (u16)s_b_94_7 */
        auto s_b_94_9 = emitter.reinterpret(s_b_94_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_94_10 = constant s32 0 (const) */
        /* execute.simd:3206 [D] s_b_94_11 = s_b_94_8[s_b_94_10] <= s_b_94_9 */
        auto s_b_94_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_94_8[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_94_9);
        /* execute.simd:3206 [D] s_b_94_12: sym_27042_0_rd = s_b_94_11, dominates: s_b_97_8 s_b_99_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_94_11);
        /* execute.simd:3206 [F] s_b_94_13: Jump b_95 (const) */
        {
          auto block = block_b_95;
          dynamic_block_queue.push(block_b_95);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_95) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_95);
        /* execute.simd:3205 [D] s_b_95_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_95_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_95_1 = constant u8 1 (const) */
        /* execute.simd:3205 [D] s_b_95_0[s_b_95_1] */
        auto s_b_95_2 = emitter.vector_extract(s_b_95_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3205 [F] s_b_95_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_95_4 = (s32)s_b_95_2 */
        auto s_b_95_4 = emitter.sx(s_b_95_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_95_5 = s_b_95_4<s_b_95_3 */
        auto s_b_95_5 = emitter.cmp_lt(s_b_95_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_95_6: If s_b_95_5: Jump b_97 else b_99 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_97;
            dynamic_block_queue.push(block_b_97);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_99;
            dynamic_block_queue.push(block_b_99);
            false_target = block;
          }
          emitter.branch(s_b_95_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_96) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_96);
        /* execute.simd:3208 [D] s_b_96_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_96_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_96_1 = constant u8 0 (const) */
        /* execute.simd:3208 [D] s_b_96_0[s_b_96_1] */
        auto s_b_96_2 = emitter.vector_extract(s_b_96_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3208 [D] s_b_96_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_96_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_96_4 = constant u8 0 (const) */
        /* execute.simd:3208 [D] s_b_96_3[s_b_96_4] */
        auto s_b_96_5 = emitter.vector_extract(s_b_96_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3208 [D] s_b_96_6 = s_b_96_2<<s_b_96_5 */
        auto s_b_96_6 = emitter.shl(s_b_96_2, s_b_96_5);
        /* execute.simd:3208 [F] s_b_96_7 = sym_27042_0_rd (const) wutils::Vector<uint16_t, 8> */
        wutils::Vector<uint16_t, 8> s_b_96_7 = CV_sym_27042_0_rd;
        /* execute.simd:3208 [D] s_b_96_8 = (u16)s_b_96_6 */
        auto s_b_96_8 = emitter.reinterpret(s_b_96_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_96_9 = constant s32 0 (const) */
        /* execute.simd:3208 [D] s_b_96_10 = s_b_96_7[s_b_96_9] <= s_b_96_8 */
        auto s_b_96_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_96_7[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_96_8);
        /* execute.simd:3208 [D] s_b_96_11: sym_27042_0_rd = s_b_96_10, dominates: s_b_97_8 s_b_99_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_96_10);
        /* execute.simd:3208 [F] s_b_96_12: Jump b_95 (const) */
        {
          auto block = block_b_95;
          dynamic_block_queue.push(block_b_95);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_97) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_97);
        /* execute.simd:3206 [D] s_b_97_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_97_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_97_1 = constant u8 1 (const) */
        /* execute.simd:3206 [D] s_b_97_0[s_b_97_1] */
        auto s_b_97_2 = emitter.vector_extract(s_b_97_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3206 [D] s_b_97_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_97_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_97_4 = constant u8 1 (const) */
        /* execute.simd:3206 [D] s_b_97_3[s_b_97_4] */
        auto s_b_97_5 = emitter.vector_extract(s_b_97_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3206 [D] s_b_97_6 = -s_b_97_5 */
        auto s_b_97_6 = emitter.neg(s_b_97_5);
        /* execute.simd:3206 [D] s_b_97_7 = s_b_97_2->>s_b_97_6 */
        auto s_b_97_7 = emitter.sar(s_b_97_2, s_b_97_6);
        /* execute.simd:3206 [D] s_b_97_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_97_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_97_9 = (u16)s_b_97_7 */
        auto s_b_97_9 = emitter.reinterpret(s_b_97_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_97_10 = constant s32 1 (const) */
        /* execute.simd:3206 [D] s_b_97_11 = s_b_97_8[s_b_97_10] <= s_b_97_9 */
        auto s_b_97_11 = emitter.vector_insert(s_b_97_8, emitter.const_s32((int32_t)1ULL), s_b_97_9);
        /* execute.simd:3206 [D] s_b_97_12: sym_27042_0_rd = s_b_97_11, dominates: s_b_100_8 s_b_102_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_97_11);
        /* execute.simd:3206 [F] s_b_97_13: Jump b_98 (const) */
        {
          auto block = block_b_98;
          dynamic_block_queue.push(block_b_98);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_98) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_98);
        /* execute.simd:3205 [D] s_b_98_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_98_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_98_1 = constant u8 2 (const) */
        /* execute.simd:3205 [D] s_b_98_0[s_b_98_1] */
        auto s_b_98_2 = emitter.vector_extract(s_b_98_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3205 [F] s_b_98_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_98_4 = (s32)s_b_98_2 */
        auto s_b_98_4 = emitter.sx(s_b_98_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_98_5 = s_b_98_4<s_b_98_3 */
        auto s_b_98_5 = emitter.cmp_lt(s_b_98_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_98_6: If s_b_98_5: Jump b_100 else b_102 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_100;
            dynamic_block_queue.push(block_b_100);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_102;
            dynamic_block_queue.push(block_b_102);
            false_target = block;
          }
          emitter.branch(s_b_98_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_99) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_99);
        /* execute.simd:3208 [D] s_b_99_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_99_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_99_1 = constant u8 1 (const) */
        /* execute.simd:3208 [D] s_b_99_0[s_b_99_1] */
        auto s_b_99_2 = emitter.vector_extract(s_b_99_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3208 [D] s_b_99_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_99_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_99_4 = constant u8 1 (const) */
        /* execute.simd:3208 [D] s_b_99_3[s_b_99_4] */
        auto s_b_99_5 = emitter.vector_extract(s_b_99_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3208 [D] s_b_99_6 = s_b_99_2<<s_b_99_5 */
        auto s_b_99_6 = emitter.shl(s_b_99_2, s_b_99_5);
        /* execute.simd:3208 [D] s_b_99_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_99_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_99_8 = (u16)s_b_99_6 */
        auto s_b_99_8 = emitter.reinterpret(s_b_99_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_99_9 = constant s32 1 (const) */
        /* execute.simd:3208 [D] s_b_99_10 = s_b_99_7[s_b_99_9] <= s_b_99_8 */
        auto s_b_99_10 = emitter.vector_insert(s_b_99_7, emitter.const_s32((int32_t)1ULL), s_b_99_8);
        /* execute.simd:3208 [D] s_b_99_11: sym_27042_0_rd = s_b_99_10, dominates: s_b_100_8 s_b_102_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_99_10);
        /* execute.simd:3208 [F] s_b_99_12: Jump b_98 (const) */
        {
          auto block = block_b_98;
          dynamic_block_queue.push(block_b_98);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_100) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_100);
        /* execute.simd:3206 [D] s_b_100_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_100_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_100_1 = constant u8 2 (const) */
        /* execute.simd:3206 [D] s_b_100_0[s_b_100_1] */
        auto s_b_100_2 = emitter.vector_extract(s_b_100_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3206 [D] s_b_100_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_100_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_100_4 = constant u8 2 (const) */
        /* execute.simd:3206 [D] s_b_100_3[s_b_100_4] */
        auto s_b_100_5 = emitter.vector_extract(s_b_100_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3206 [D] s_b_100_6 = -s_b_100_5 */
        auto s_b_100_6 = emitter.neg(s_b_100_5);
        /* execute.simd:3206 [D] s_b_100_7 = s_b_100_2->>s_b_100_6 */
        auto s_b_100_7 = emitter.sar(s_b_100_2, s_b_100_6);
        /* execute.simd:3206 [D] s_b_100_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_100_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_100_9 = (u16)s_b_100_7 */
        auto s_b_100_9 = emitter.reinterpret(s_b_100_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_100_10 = constant s32 2 (const) */
        /* execute.simd:3206 [D] s_b_100_11 = s_b_100_8[s_b_100_10] <= s_b_100_9 */
        auto s_b_100_11 = emitter.vector_insert(s_b_100_8, emitter.const_s32((int32_t)2ULL), s_b_100_9);
        /* execute.simd:3206 [D] s_b_100_12: sym_27042_0_rd = s_b_100_11, dominates: s_b_103_8 s_b_105_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_100_11);
        /* execute.simd:3206 [F] s_b_100_13: Jump b_101 (const) */
        {
          auto block = block_b_101;
          dynamic_block_queue.push(block_b_101);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_101) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_101);
        /* execute.simd:3205 [D] s_b_101_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_101_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_101_1 = constant u8 3 (const) */
        /* execute.simd:3205 [D] s_b_101_0[s_b_101_1] */
        auto s_b_101_2 = emitter.vector_extract(s_b_101_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3205 [F] s_b_101_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_101_4 = (s32)s_b_101_2 */
        auto s_b_101_4 = emitter.sx(s_b_101_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_101_5 = s_b_101_4<s_b_101_3 */
        auto s_b_101_5 = emitter.cmp_lt(s_b_101_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_101_6: If s_b_101_5: Jump b_103 else b_105 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_103;
            dynamic_block_queue.push(block_b_103);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_105;
            dynamic_block_queue.push(block_b_105);
            false_target = block;
          }
          emitter.branch(s_b_101_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_102) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_102);
        /* execute.simd:3208 [D] s_b_102_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_102_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_102_1 = constant u8 2 (const) */
        /* execute.simd:3208 [D] s_b_102_0[s_b_102_1] */
        auto s_b_102_2 = emitter.vector_extract(s_b_102_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3208 [D] s_b_102_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_102_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_102_4 = constant u8 2 (const) */
        /* execute.simd:3208 [D] s_b_102_3[s_b_102_4] */
        auto s_b_102_5 = emitter.vector_extract(s_b_102_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3208 [D] s_b_102_6 = s_b_102_2<<s_b_102_5 */
        auto s_b_102_6 = emitter.shl(s_b_102_2, s_b_102_5);
        /* execute.simd:3208 [D] s_b_102_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_102_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_102_8 = (u16)s_b_102_6 */
        auto s_b_102_8 = emitter.reinterpret(s_b_102_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_102_9 = constant s32 2 (const) */
        /* execute.simd:3208 [D] s_b_102_10 = s_b_102_7[s_b_102_9] <= s_b_102_8 */
        auto s_b_102_10 = emitter.vector_insert(s_b_102_7, emitter.const_s32((int32_t)2ULL), s_b_102_8);
        /* execute.simd:3208 [D] s_b_102_11: sym_27042_0_rd = s_b_102_10, dominates: s_b_103_8 s_b_105_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_102_10);
        /* execute.simd:3208 [F] s_b_102_12: Jump b_101 (const) */
        {
          auto block = block_b_101;
          dynamic_block_queue.push(block_b_101);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_103) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_103);
        /* execute.simd:3206 [D] s_b_103_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_103_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_103_1 = constant u8 3 (const) */
        /* execute.simd:3206 [D] s_b_103_0[s_b_103_1] */
        auto s_b_103_2 = emitter.vector_extract(s_b_103_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3206 [D] s_b_103_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_103_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_103_4 = constant u8 3 (const) */
        /* execute.simd:3206 [D] s_b_103_3[s_b_103_4] */
        auto s_b_103_5 = emitter.vector_extract(s_b_103_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3206 [D] s_b_103_6 = -s_b_103_5 */
        auto s_b_103_6 = emitter.neg(s_b_103_5);
        /* execute.simd:3206 [D] s_b_103_7 = s_b_103_2->>s_b_103_6 */
        auto s_b_103_7 = emitter.sar(s_b_103_2, s_b_103_6);
        /* execute.simd:3206 [D] s_b_103_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_103_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_103_9 = (u16)s_b_103_7 */
        auto s_b_103_9 = emitter.reinterpret(s_b_103_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_103_10 = constant s32 3 (const) */
        /* execute.simd:3206 [D] s_b_103_11 = s_b_103_8[s_b_103_10] <= s_b_103_9 */
        auto s_b_103_11 = emitter.vector_insert(s_b_103_8, emitter.const_s32((int32_t)3ULL), s_b_103_9);
        /* execute.simd:3206 [D] s_b_103_12: sym_27042_0_rd = s_b_103_11, dominates: s_b_106_8 s_b_108_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_103_11);
        /* execute.simd:3206 [F] s_b_103_13: Jump b_104 (const) */
        {
          auto block = block_b_104;
          dynamic_block_queue.push(block_b_104);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_104) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_104);
        /* execute.simd:3205 [D] s_b_104_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_104_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_104_1 = constant u8 4 (const) */
        /* execute.simd:3205 [D] s_b_104_0[s_b_104_1] */
        auto s_b_104_2 = emitter.vector_extract(s_b_104_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3205 [F] s_b_104_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_104_4 = (s32)s_b_104_2 */
        auto s_b_104_4 = emitter.sx(s_b_104_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_104_5 = s_b_104_4<s_b_104_3 */
        auto s_b_104_5 = emitter.cmp_lt(s_b_104_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_104_6: If s_b_104_5: Jump b_106 else b_108 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_106;
            dynamic_block_queue.push(block_b_106);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_108;
            dynamic_block_queue.push(block_b_108);
            false_target = block;
          }
          emitter.branch(s_b_104_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_105) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_105);
        /* execute.simd:3208 [D] s_b_105_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_105_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_105_1 = constant u8 3 (const) */
        /* execute.simd:3208 [D] s_b_105_0[s_b_105_1] */
        auto s_b_105_2 = emitter.vector_extract(s_b_105_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3208 [D] s_b_105_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_105_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_105_4 = constant u8 3 (const) */
        /* execute.simd:3208 [D] s_b_105_3[s_b_105_4] */
        auto s_b_105_5 = emitter.vector_extract(s_b_105_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3208 [D] s_b_105_6 = s_b_105_2<<s_b_105_5 */
        auto s_b_105_6 = emitter.shl(s_b_105_2, s_b_105_5);
        /* execute.simd:3208 [D] s_b_105_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_105_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_105_8 = (u16)s_b_105_6 */
        auto s_b_105_8 = emitter.reinterpret(s_b_105_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_105_9 = constant s32 3 (const) */
        /* execute.simd:3208 [D] s_b_105_10 = s_b_105_7[s_b_105_9] <= s_b_105_8 */
        auto s_b_105_10 = emitter.vector_insert(s_b_105_7, emitter.const_s32((int32_t)3ULL), s_b_105_8);
        /* execute.simd:3208 [D] s_b_105_11: sym_27042_0_rd = s_b_105_10, dominates: s_b_106_8 s_b_108_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_105_10);
        /* execute.simd:3208 [F] s_b_105_12: Jump b_104 (const) */
        {
          auto block = block_b_104;
          dynamic_block_queue.push(block_b_104);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_106) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_106);
        /* execute.simd:3206 [D] s_b_106_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_106_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_106_1 = constant u8 4 (const) */
        /* execute.simd:3206 [D] s_b_106_0[s_b_106_1] */
        auto s_b_106_2 = emitter.vector_extract(s_b_106_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3206 [D] s_b_106_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_106_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_106_4 = constant u8 4 (const) */
        /* execute.simd:3206 [D] s_b_106_3[s_b_106_4] */
        auto s_b_106_5 = emitter.vector_extract(s_b_106_3, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3206 [D] s_b_106_6 = -s_b_106_5 */
        auto s_b_106_6 = emitter.neg(s_b_106_5);
        /* execute.simd:3206 [D] s_b_106_7 = s_b_106_2->>s_b_106_6 */
        auto s_b_106_7 = emitter.sar(s_b_106_2, s_b_106_6);
        /* execute.simd:3206 [D] s_b_106_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_106_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_106_9 = (u16)s_b_106_7 */
        auto s_b_106_9 = emitter.reinterpret(s_b_106_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_106_10 = constant s32 4 (const) */
        /* execute.simd:3206 [D] s_b_106_11 = s_b_106_8[s_b_106_10] <= s_b_106_9 */
        auto s_b_106_11 = emitter.vector_insert(s_b_106_8, emitter.const_s32((int32_t)4ULL), s_b_106_9);
        /* execute.simd:3206 [D] s_b_106_12: sym_27042_0_rd = s_b_106_11, dominates: s_b_109_8 s_b_111_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_106_11);
        /* execute.simd:3206 [F] s_b_106_13: Jump b_107 (const) */
        {
          auto block = block_b_107;
          dynamic_block_queue.push(block_b_107);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_107) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_107);
        /* execute.simd:3205 [D] s_b_107_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_107_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_107_1 = constant u8 5 (const) */
        /* execute.simd:3205 [D] s_b_107_0[s_b_107_1] */
        auto s_b_107_2 = emitter.vector_extract(s_b_107_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3205 [F] s_b_107_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_107_4 = (s32)s_b_107_2 */
        auto s_b_107_4 = emitter.sx(s_b_107_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_107_5 = s_b_107_4<s_b_107_3 */
        auto s_b_107_5 = emitter.cmp_lt(s_b_107_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_107_6: If s_b_107_5: Jump b_109 else b_111 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_109;
            dynamic_block_queue.push(block_b_109);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_111;
            dynamic_block_queue.push(block_b_111);
            false_target = block;
          }
          emitter.branch(s_b_107_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_108) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_108);
        /* execute.simd:3208 [D] s_b_108_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_108_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_108_1 = constant u8 4 (const) */
        /* execute.simd:3208 [D] s_b_108_0[s_b_108_1] */
        auto s_b_108_2 = emitter.vector_extract(s_b_108_0, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3208 [D] s_b_108_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_108_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_108_4 = constant u8 4 (const) */
        /* execute.simd:3208 [D] s_b_108_3[s_b_108_4] */
        auto s_b_108_5 = emitter.vector_extract(s_b_108_3, emitter.const_u8((uint8_t)4ULL));
        /* execute.simd:3208 [D] s_b_108_6 = s_b_108_2<<s_b_108_5 */
        auto s_b_108_6 = emitter.shl(s_b_108_2, s_b_108_5);
        /* execute.simd:3208 [D] s_b_108_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_108_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_108_8 = (u16)s_b_108_6 */
        auto s_b_108_8 = emitter.reinterpret(s_b_108_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_108_9 = constant s32 4 (const) */
        /* execute.simd:3208 [D] s_b_108_10 = s_b_108_7[s_b_108_9] <= s_b_108_8 */
        auto s_b_108_10 = emitter.vector_insert(s_b_108_7, emitter.const_s32((int32_t)4ULL), s_b_108_8);
        /* execute.simd:3208 [D] s_b_108_11: sym_27042_0_rd = s_b_108_10, dominates: s_b_109_8 s_b_111_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_108_10);
        /* execute.simd:3208 [F] s_b_108_12: Jump b_107 (const) */
        {
          auto block = block_b_107;
          dynamic_block_queue.push(block_b_107);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_109) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_109);
        /* execute.simd:3206 [D] s_b_109_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_109_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_109_1 = constant u8 5 (const) */
        /* execute.simd:3206 [D] s_b_109_0[s_b_109_1] */
        auto s_b_109_2 = emitter.vector_extract(s_b_109_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3206 [D] s_b_109_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_109_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_109_4 = constant u8 5 (const) */
        /* execute.simd:3206 [D] s_b_109_3[s_b_109_4] */
        auto s_b_109_5 = emitter.vector_extract(s_b_109_3, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3206 [D] s_b_109_6 = -s_b_109_5 */
        auto s_b_109_6 = emitter.neg(s_b_109_5);
        /* execute.simd:3206 [D] s_b_109_7 = s_b_109_2->>s_b_109_6 */
        auto s_b_109_7 = emitter.sar(s_b_109_2, s_b_109_6);
        /* execute.simd:3206 [D] s_b_109_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_109_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_109_9 = (u16)s_b_109_7 */
        auto s_b_109_9 = emitter.reinterpret(s_b_109_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_109_10 = constant s32 5 (const) */
        /* execute.simd:3206 [D] s_b_109_11 = s_b_109_8[s_b_109_10] <= s_b_109_9 */
        auto s_b_109_11 = emitter.vector_insert(s_b_109_8, emitter.const_s32((int32_t)5ULL), s_b_109_9);
        /* execute.simd:3206 [D] s_b_109_12: sym_27042_0_rd = s_b_109_11, dominates: s_b_112_8 s_b_114_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_109_11);
        /* execute.simd:3206 [F] s_b_109_13: Jump b_110 (const) */
        {
          auto block = block_b_110;
          dynamic_block_queue.push(block_b_110);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_110) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_110);
        /* execute.simd:3205 [D] s_b_110_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_110_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_110_1 = constant u8 6 (const) */
        /* execute.simd:3205 [D] s_b_110_0[s_b_110_1] */
        auto s_b_110_2 = emitter.vector_extract(s_b_110_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3205 [F] s_b_110_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_110_4 = (s32)s_b_110_2 */
        auto s_b_110_4 = emitter.sx(s_b_110_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_110_5 = s_b_110_4<s_b_110_3 */
        auto s_b_110_5 = emitter.cmp_lt(s_b_110_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_110_6: If s_b_110_5: Jump b_112 else b_114 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_112;
            dynamic_block_queue.push(block_b_112);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_114;
            dynamic_block_queue.push(block_b_114);
            false_target = block;
          }
          emitter.branch(s_b_110_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_111) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_111);
        /* execute.simd:3208 [D] s_b_111_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_111_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_111_1 = constant u8 5 (const) */
        /* execute.simd:3208 [D] s_b_111_0[s_b_111_1] */
        auto s_b_111_2 = emitter.vector_extract(s_b_111_0, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3208 [D] s_b_111_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_111_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_111_4 = constant u8 5 (const) */
        /* execute.simd:3208 [D] s_b_111_3[s_b_111_4] */
        auto s_b_111_5 = emitter.vector_extract(s_b_111_3, emitter.const_u8((uint8_t)5ULL));
        /* execute.simd:3208 [D] s_b_111_6 = s_b_111_2<<s_b_111_5 */
        auto s_b_111_6 = emitter.shl(s_b_111_2, s_b_111_5);
        /* execute.simd:3208 [D] s_b_111_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_111_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_111_8 = (u16)s_b_111_6 */
        auto s_b_111_8 = emitter.reinterpret(s_b_111_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_111_9 = constant s32 5 (const) */
        /* execute.simd:3208 [D] s_b_111_10 = s_b_111_7[s_b_111_9] <= s_b_111_8 */
        auto s_b_111_10 = emitter.vector_insert(s_b_111_7, emitter.const_s32((int32_t)5ULL), s_b_111_8);
        /* execute.simd:3208 [D] s_b_111_11: sym_27042_0_rd = s_b_111_10, dominates: s_b_112_8 s_b_114_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_111_10);
        /* execute.simd:3208 [F] s_b_111_12: Jump b_110 (const) */
        {
          auto block = block_b_110;
          dynamic_block_queue.push(block_b_110);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_112) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_112);
        /* execute.simd:3206 [D] s_b_112_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_112_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_112_1 = constant u8 6 (const) */
        /* execute.simd:3206 [D] s_b_112_0[s_b_112_1] */
        auto s_b_112_2 = emitter.vector_extract(s_b_112_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3206 [D] s_b_112_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_112_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_112_4 = constant u8 6 (const) */
        /* execute.simd:3206 [D] s_b_112_3[s_b_112_4] */
        auto s_b_112_5 = emitter.vector_extract(s_b_112_3, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3206 [D] s_b_112_6 = -s_b_112_5 */
        auto s_b_112_6 = emitter.neg(s_b_112_5);
        /* execute.simd:3206 [D] s_b_112_7 = s_b_112_2->>s_b_112_6 */
        auto s_b_112_7 = emitter.sar(s_b_112_2, s_b_112_6);
        /* execute.simd:3206 [D] s_b_112_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_112_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_112_9 = (u16)s_b_112_7 */
        auto s_b_112_9 = emitter.reinterpret(s_b_112_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_112_10 = constant s32 6 (const) */
        /* execute.simd:3206 [D] s_b_112_11 = s_b_112_8[s_b_112_10] <= s_b_112_9 */
        auto s_b_112_11 = emitter.vector_insert(s_b_112_8, emitter.const_s32((int32_t)6ULL), s_b_112_9);
        /* execute.simd:3206 [D] s_b_112_12: sym_27042_0_rd = s_b_112_11, dominates: s_b_115_8 s_b_117_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_112_11);
        /* execute.simd:3206 [F] s_b_112_13: Jump b_113 (const) */
        {
          auto block = block_b_113;
          dynamic_block_queue.push(block_b_113);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_113) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_113);
        /* execute.simd:3205 [D] s_b_113_0 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_113_0 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_113_1 = constant u8 7 (const) */
        /* execute.simd:3205 [D] s_b_113_0[s_b_113_1] */
        auto s_b_113_2 = emitter.vector_extract(s_b_113_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3205 [F] s_b_113_3 = constant s32 0 (const) */
        /* execute.simd:3205 [D] s_b_113_4 = (s32)s_b_113_2 */
        auto s_b_113_4 = emitter.sx(s_b_113_2, emitter.context().types().s32());
        /* execute.simd:3205 [D] s_b_113_5 = s_b_113_4<s_b_113_3 */
        auto s_b_113_5 = emitter.cmp_lt(s_b_113_4, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3205 [D] s_b_113_6: If s_b_113_5: Jump b_115 else b_117 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_115;
            dynamic_block_queue.push(block_b_115);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_117;
            dynamic_block_queue.push(block_b_117);
            false_target = block;
          }
          emitter.branch(s_b_113_5, true_target, false_target);
        }
      }
      else if (block_index == block_b_114) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_114);
        /* execute.simd:3208 [D] s_b_114_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_114_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_114_1 = constant u8 6 (const) */
        /* execute.simd:3208 [D] s_b_114_0[s_b_114_1] */
        auto s_b_114_2 = emitter.vector_extract(s_b_114_0, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3208 [D] s_b_114_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_114_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_114_4 = constant u8 6 (const) */
        /* execute.simd:3208 [D] s_b_114_3[s_b_114_4] */
        auto s_b_114_5 = emitter.vector_extract(s_b_114_3, emitter.const_u8((uint8_t)6ULL));
        /* execute.simd:3208 [D] s_b_114_6 = s_b_114_2<<s_b_114_5 */
        auto s_b_114_6 = emitter.shl(s_b_114_2, s_b_114_5);
        /* execute.simd:3208 [D] s_b_114_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_114_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_114_8 = (u16)s_b_114_6 */
        auto s_b_114_8 = emitter.reinterpret(s_b_114_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_114_9 = constant s32 6 (const) */
        /* execute.simd:3208 [D] s_b_114_10 = s_b_114_7[s_b_114_9] <= s_b_114_8 */
        auto s_b_114_10 = emitter.vector_insert(s_b_114_7, emitter.const_s32((int32_t)6ULL), s_b_114_8);
        /* execute.simd:3208 [D] s_b_114_11: sym_27042_0_rd = s_b_114_10, dominates: s_b_115_8 s_b_117_7  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_114_10);
        /* execute.simd:3208 [F] s_b_114_12: Jump b_113 (const) */
        {
          auto block = block_b_113;
          dynamic_block_queue.push(block_b_113);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_115) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_115);
        /* execute.simd:3206 [D] s_b_115_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_115_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_115_1 = constant u8 7 (const) */
        /* execute.simd:3206 [D] s_b_115_0[s_b_115_1] */
        auto s_b_115_2 = emitter.vector_extract(s_b_115_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3206 [D] s_b_115_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_115_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_115_4 = constant u8 7 (const) */
        /* execute.simd:3206 [D] s_b_115_3[s_b_115_4] */
        auto s_b_115_5 = emitter.vector_extract(s_b_115_3, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3206 [D] s_b_115_6 = -s_b_115_5 */
        auto s_b_115_6 = emitter.neg(s_b_115_5);
        /* execute.simd:3206 [D] s_b_115_7 = s_b_115_2->>s_b_115_6 */
        auto s_b_115_7 = emitter.sar(s_b_115_2, s_b_115_6);
        /* execute.simd:3206 [D] s_b_115_8 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_115_8 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3206 [D] s_b_115_9 = (u16)s_b_115_7 */
        auto s_b_115_9 = emitter.reinterpret(s_b_115_7, emitter.context().types().u16());
        /* execute.simd:3206 [F] s_b_115_10 = constant s32 7 (const) */
        /* execute.simd:3206 [D] s_b_115_11 = s_b_115_8[s_b_115_10] <= s_b_115_9 */
        auto s_b_115_11 = emitter.vector_insert(s_b_115_8, emitter.const_s32((int32_t)7ULL), s_b_115_9);
        /* execute.simd:3206 [D] s_b_115_12: sym_27042_0_rd = s_b_115_11, dominates: s_b_116_1  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_115_11);
        /* execute.simd:3206 [F] s_b_115_13: Jump b_116 (const) */
        {
          auto block = block_b_116;
          dynamic_block_queue.push(block_b_116);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_116) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_116);
        /* execute.simd:3212 [F] s_b_116_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3212 [D] s_b_116_1 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_116_1 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3212 [D] s_b_116_2: WriteRegBank 18:s_b_116_0 = s_b_116_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_116_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_116_1);
        /* execute.simd:0 [F] s_b_116_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_117) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_117);
        /* execute.simd:3208 [D] s_b_117_0 = sym_27032_0_rn wutils::Vector<int16_t, 8> */
        auto s_b_117_0 = emitter.load_local(DV_sym_27032_0_rn, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_117_1 = constant u8 7 (const) */
        /* execute.simd:3208 [D] s_b_117_0[s_b_117_1] */
        auto s_b_117_2 = emitter.vector_extract(s_b_117_0, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3208 [D] s_b_117_3 = sym_27037_0_rm wutils::Vector<int16_t, 8> */
        auto s_b_117_3 = emitter.load_local(DV_sym_27037_0_rm, emitter.context().types().v8s16());
        /* ???:4294967295 [F] s_b_117_4 = constant u8 7 (const) */
        /* execute.simd:3208 [D] s_b_117_3[s_b_117_4] */
        auto s_b_117_5 = emitter.vector_extract(s_b_117_3, emitter.const_u8((uint8_t)7ULL));
        /* execute.simd:3208 [D] s_b_117_6 = s_b_117_2<<s_b_117_5 */
        auto s_b_117_6 = emitter.shl(s_b_117_2, s_b_117_5);
        /* execute.simd:3208 [D] s_b_117_7 = sym_27042_0_rd wutils::Vector<uint16_t, 8> */
        auto s_b_117_7 = emitter.load_local(DV_sym_27042_0_rd, emitter.context().types().v8u16());
        /* execute.simd:3208 [D] s_b_117_8 = (u16)s_b_117_6 */
        auto s_b_117_8 = emitter.reinterpret(s_b_117_6, emitter.context().types().u16());
        /* execute.simd:3208 [F] s_b_117_9 = constant s32 7 (const) */
        /* execute.simd:3208 [D] s_b_117_10 = s_b_117_7[s_b_117_9] <= s_b_117_8 */
        auto s_b_117_10 = emitter.vector_insert(s_b_117_7, emitter.const_s32((int32_t)7ULL), s_b_117_8);
        /* execute.simd:3208 [D] s_b_117_11: sym_27042_0_rd = s_b_117_10, dominates: s_b_116_1  */
        emitter.store_local(DV_sym_27042_0_rd, s_b_117_10);
        /* execute.simd:3208 [F] s_b_117_12: Jump b_116 (const) */
        {
          auto block = block_b_116;
          dynamic_block_queue.push(block_b_116);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_119) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_119);
        /* execute.simd:3222 [D] s_b_119_0 = sym_27439_0_rn wutils::Vector<int32_t, 2> */
        auto s_b_119_0 = emitter.load_local(DV_sym_27439_0_rn, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_119_1 = constant u8 0 (const) */
        /* execute.simd:3222 [D] s_b_119_0[s_b_119_1] */
        auto s_b_119_2 = emitter.vector_extract(s_b_119_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3222 [D] s_b_119_3 = sym_27444_0_rm wutils::Vector<int32_t, 2> */
        auto s_b_119_3 = emitter.load_local(DV_sym_27444_0_rm, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_119_4 = constant u8 0 (const) */
        /* execute.simd:3222 [D] s_b_119_3[s_b_119_4] */
        auto s_b_119_5 = emitter.vector_extract(s_b_119_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3222 [D] s_b_119_6 = -s_b_119_5 */
        auto s_b_119_6 = emitter.neg(s_b_119_5);
        /* execute.simd:3222 [D] s_b_119_7 = s_b_119_2->>s_b_119_6 */
        auto s_b_119_7 = emitter.sar(s_b_119_2, s_b_119_6);
        /* execute.simd:3222 [F] s_b_119_8 = sym_27449_0_rd (const) wutils::Vector<uint32_t, 4> */
        wutils::Vector<uint32_t, 4> s_b_119_8 = CV_sym_27449_0_rd;
        /* execute.simd:3222 [D] s_b_119_9 = (u32)s_b_119_7 */
        auto s_b_119_9 = emitter.reinterpret(s_b_119_7, emitter.context().types().u32());
        /* execute.simd:3222 [F] s_b_119_10 = constant s32 0 (const) */
        /* execute.simd:3222 [D] s_b_119_11 = s_b_119_8[s_b_119_10] <= s_b_119_9 */
        auto s_b_119_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_119_8[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_119_9);
        /* execute.simd:3222 [D] s_b_119_12: sym_27449_0_rd = s_b_119_11, dominates: s_b_122_8 s_b_124_7  */
        emitter.store_local(DV_sym_27449_0_rd, s_b_119_11);
        /* execute.simd:3222 [F] s_b_119_13: Jump b_120 (const) */
        {
          auto block = block_b_120;
          dynamic_block_queue.push(block_b_120);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_120) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_120);
        /* execute.simd:3221 [D] s_b_120_0 = sym_27444_0_rm wutils::Vector<int32_t, 2> */
        auto s_b_120_0 = emitter.load_local(DV_sym_27444_0_rm, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_120_1 = constant u8 1 (const) */
        /* execute.simd:3221 [D] s_b_120_0[s_b_120_1] */
        auto s_b_120_2 = emitter.vector_extract(s_b_120_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3221 [F] s_b_120_3 = constant s32 0 (const) */
        /* execute.simd:3221 [D] s_b_120_4 = s_b_120_2<s_b_120_3 */
        auto s_b_120_4 = emitter.cmp_lt(s_b_120_2, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3221 [D] s_b_120_5: If s_b_120_4: Jump b_122 else b_124 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_122;
            dynamic_block_queue.push(block_b_122);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_124;
            dynamic_block_queue.push(block_b_124);
            false_target = block;
          }
          emitter.branch(s_b_120_4, true_target, false_target);
        }
      }
      else if (block_index == block_b_121) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_121);
        /* execute.simd:3224 [D] s_b_121_0 = sym_27439_0_rn wutils::Vector<int32_t, 2> */
        auto s_b_121_0 = emitter.load_local(DV_sym_27439_0_rn, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_121_1 = constant u8 0 (const) */
        /* execute.simd:3224 [D] s_b_121_0[s_b_121_1] */
        auto s_b_121_2 = emitter.vector_extract(s_b_121_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3224 [D] s_b_121_3 = sym_27444_0_rm wutils::Vector<int32_t, 2> */
        auto s_b_121_3 = emitter.load_local(DV_sym_27444_0_rm, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_121_4 = constant u8 0 (const) */
        /* execute.simd:3224 [D] s_b_121_3[s_b_121_4] */
        auto s_b_121_5 = emitter.vector_extract(s_b_121_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3224 [D] s_b_121_6 = s_b_121_2<<s_b_121_5 */
        auto s_b_121_6 = emitter.shl(s_b_121_2, s_b_121_5);
        /* execute.simd:3224 [F] s_b_121_7 = sym_27449_0_rd (const) wutils::Vector<uint32_t, 4> */
        wutils::Vector<uint32_t, 4> s_b_121_7 = CV_sym_27449_0_rd;
        /* execute.simd:3224 [D] s_b_121_8 = (u32)s_b_121_6 */
        auto s_b_121_8 = emitter.reinterpret(s_b_121_6, emitter.context().types().u32());
        /* execute.simd:3224 [F] s_b_121_9 = constant s32 0 (const) */
        /* execute.simd:3224 [D] s_b_121_10 = s_b_121_7[s_b_121_9] <= s_b_121_8 */
        auto s_b_121_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_121_7[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_121_8);
        /* execute.simd:3224 [D] s_b_121_11: sym_27449_0_rd = s_b_121_10, dominates: s_b_122_8 s_b_124_7  */
        emitter.store_local(DV_sym_27449_0_rd, s_b_121_10);
        /* execute.simd:3224 [F] s_b_121_12: Jump b_120 (const) */
        {
          auto block = block_b_120;
          dynamic_block_queue.push(block_b_120);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_122) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_122);
        /* execute.simd:3222 [D] s_b_122_0 = sym_27439_0_rn wutils::Vector<int32_t, 2> */
        auto s_b_122_0 = emitter.load_local(DV_sym_27439_0_rn, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_122_1 = constant u8 1 (const) */
        /* execute.simd:3222 [D] s_b_122_0[s_b_122_1] */
        auto s_b_122_2 = emitter.vector_extract(s_b_122_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3222 [D] s_b_122_3 = sym_27444_0_rm wutils::Vector<int32_t, 2> */
        auto s_b_122_3 = emitter.load_local(DV_sym_27444_0_rm, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_122_4 = constant u8 1 (const) */
        /* execute.simd:3222 [D] s_b_122_3[s_b_122_4] */
        auto s_b_122_5 = emitter.vector_extract(s_b_122_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3222 [D] s_b_122_6 = -s_b_122_5 */
        auto s_b_122_6 = emitter.neg(s_b_122_5);
        /* execute.simd:3222 [D] s_b_122_7 = s_b_122_2->>s_b_122_6 */
        auto s_b_122_7 = emitter.sar(s_b_122_2, s_b_122_6);
        /* execute.simd:3222 [D] s_b_122_8 = sym_27449_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_122_8 = emitter.load_local(DV_sym_27449_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3222 [D] s_b_122_9 = (u32)s_b_122_7 */
        auto s_b_122_9 = emitter.reinterpret(s_b_122_7, emitter.context().types().u32());
        /* execute.simd:3222 [F] s_b_122_10 = constant s32 1 (const) */
        /* execute.simd:3222 [D] s_b_122_11 = s_b_122_8[s_b_122_10] <= s_b_122_9 */
        auto s_b_122_11 = emitter.vector_insert(s_b_122_8, emitter.const_s32((int32_t)1ULL), s_b_122_9);
        /* execute.simd:3222 [D] s_b_122_12: sym_27449_0_rd = s_b_122_11, dominates: s_b_123_1  */
        emitter.store_local(DV_sym_27449_0_rd, s_b_122_11);
        /* execute.simd:3222 [F] s_b_122_13: Jump b_123 (const) */
        {
          auto block = block_b_123;
          dynamic_block_queue.push(block_b_123);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_123) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_123);
        /* execute.simd:3228 [F] s_b_123_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3228 [D] s_b_123_1 = sym_27449_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_123_1 = emitter.load_local(DV_sym_27449_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3228 [D] s_b_123_2: WriteRegBank 20:s_b_123_0 = s_b_123_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_123_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_123_1);
        /* execute.simd:0 [F] s_b_123_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_124) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_124);
        /* execute.simd:3224 [D] s_b_124_0 = sym_27439_0_rn wutils::Vector<int32_t, 2> */
        auto s_b_124_0 = emitter.load_local(DV_sym_27439_0_rn, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_124_1 = constant u8 1 (const) */
        /* execute.simd:3224 [D] s_b_124_0[s_b_124_1] */
        auto s_b_124_2 = emitter.vector_extract(s_b_124_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3224 [D] s_b_124_3 = sym_27444_0_rm wutils::Vector<int32_t, 2> */
        auto s_b_124_3 = emitter.load_local(DV_sym_27444_0_rm, emitter.context().types().v2s32());
        /* ???:4294967295 [F] s_b_124_4 = constant u8 1 (const) */
        /* execute.simd:3224 [D] s_b_124_3[s_b_124_4] */
        auto s_b_124_5 = emitter.vector_extract(s_b_124_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3224 [D] s_b_124_6 = s_b_124_2<<s_b_124_5 */
        auto s_b_124_6 = emitter.shl(s_b_124_2, s_b_124_5);
        /* execute.simd:3224 [D] s_b_124_7 = sym_27449_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_124_7 = emitter.load_local(DV_sym_27449_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3224 [D] s_b_124_8 = (u32)s_b_124_6 */
        auto s_b_124_8 = emitter.reinterpret(s_b_124_6, emitter.context().types().u32());
        /* execute.simd:3224 [F] s_b_124_9 = constant s32 1 (const) */
        /* execute.simd:3224 [D] s_b_124_10 = s_b_124_7[s_b_124_9] <= s_b_124_8 */
        auto s_b_124_10 = emitter.vector_insert(s_b_124_7, emitter.const_s32((int32_t)1ULL), s_b_124_8);
        /* execute.simd:3224 [D] s_b_124_11: sym_27449_0_rd = s_b_124_10, dominates: s_b_123_1  */
        emitter.store_local(DV_sym_27449_0_rd, s_b_124_10);
        /* execute.simd:3224 [F] s_b_124_12: Jump b_123 (const) */
        {
          auto block = block_b_123;
          dynamic_block_queue.push(block_b_123);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_126) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_126);
        /* execute.simd:3238 [D] s_b_126_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_126_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_126_1 = constant u8 0 (const) */
        /* execute.simd:3238 [D] s_b_126_0[s_b_126_1] */
        auto s_b_126_2 = emitter.vector_extract(s_b_126_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3238 [D] s_b_126_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_126_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_126_4 = constant u8 0 (const) */
        /* execute.simd:3238 [D] s_b_126_3[s_b_126_4] */
        auto s_b_126_5 = emitter.vector_extract(s_b_126_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3238 [D] s_b_126_6 = -s_b_126_5 */
        auto s_b_126_6 = emitter.neg(s_b_126_5);
        /* execute.simd:3238 [D] s_b_126_7 = s_b_126_2->>s_b_126_6 */
        auto s_b_126_7 = emitter.sar(s_b_126_2, s_b_126_6);
        /* execute.simd:3238 [F] s_b_126_8 = sym_27566_0_rd (const) wutils::Vector<uint32_t, 4> */
        wutils::Vector<uint32_t, 4> s_b_126_8 = CV_sym_27566_0_rd;
        /* execute.simd:3238 [D] s_b_126_9 = (u32)s_b_126_7 */
        auto s_b_126_9 = emitter.reinterpret(s_b_126_7, emitter.context().types().u32());
        /* execute.simd:3238 [F] s_b_126_10 = constant s32 0 (const) */
        /* execute.simd:3238 [D] s_b_126_11 = s_b_126_8[s_b_126_10] <= s_b_126_9 */
        auto s_b_126_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_126_8[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_126_9);
        /* execute.simd:3238 [D] s_b_126_12: sym_27566_0_rd = s_b_126_11, dominates: s_b_129_8 s_b_131_7  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_126_11);
        /* execute.simd:3238 [F] s_b_126_13: Jump b_127 (const) */
        {
          auto block = block_b_127;
          dynamic_block_queue.push(block_b_127);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_127) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_127);
        /* execute.simd:3237 [D] s_b_127_0 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_127_0 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_127_1 = constant u8 1 (const) */
        /* execute.simd:3237 [D] s_b_127_0[s_b_127_1] */
        auto s_b_127_2 = emitter.vector_extract(s_b_127_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3237 [F] s_b_127_3 = constant s32 0 (const) */
        /* execute.simd:3237 [D] s_b_127_4 = s_b_127_2<s_b_127_3 */
        auto s_b_127_4 = emitter.cmp_lt(s_b_127_2, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3237 [D] s_b_127_5: If s_b_127_4: Jump b_129 else b_131 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_129;
            dynamic_block_queue.push(block_b_129);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_131;
            dynamic_block_queue.push(block_b_131);
            false_target = block;
          }
          emitter.branch(s_b_127_4, true_target, false_target);
        }
      }
      else if (block_index == block_b_128) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_128);
        /* execute.simd:3240 [D] s_b_128_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_128_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_128_1 = constant u8 0 (const) */
        /* execute.simd:3240 [D] s_b_128_0[s_b_128_1] */
        auto s_b_128_2 = emitter.vector_extract(s_b_128_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3240 [D] s_b_128_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_128_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_128_4 = constant u8 0 (const) */
        /* execute.simd:3240 [D] s_b_128_3[s_b_128_4] */
        auto s_b_128_5 = emitter.vector_extract(s_b_128_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3240 [D] s_b_128_6 = s_b_128_2<<s_b_128_5 */
        auto s_b_128_6 = emitter.shl(s_b_128_2, s_b_128_5);
        /* execute.simd:3240 [F] s_b_128_7 = sym_27566_0_rd (const) wutils::Vector<uint32_t, 4> */
        wutils::Vector<uint32_t, 4> s_b_128_7 = CV_sym_27566_0_rd;
        /* execute.simd:3240 [D] s_b_128_8 = (u32)s_b_128_6 */
        auto s_b_128_8 = emitter.reinterpret(s_b_128_6, emitter.context().types().u32());
        /* execute.simd:3240 [F] s_b_128_9 = constant s32 0 (const) */
        /* execute.simd:3240 [D] s_b_128_10 = s_b_128_7[s_b_128_9] <= s_b_128_8 */
        auto s_b_128_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_128_7[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_128_8);
        /* execute.simd:3240 [D] s_b_128_11: sym_27566_0_rd = s_b_128_10, dominates: s_b_129_8 s_b_131_7  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_128_10);
        /* execute.simd:3240 [F] s_b_128_12: Jump b_127 (const) */
        {
          auto block = block_b_127;
          dynamic_block_queue.push(block_b_127);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_129) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_129);
        /* execute.simd:3238 [D] s_b_129_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_129_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_129_1 = constant u8 1 (const) */
        /* execute.simd:3238 [D] s_b_129_0[s_b_129_1] */
        auto s_b_129_2 = emitter.vector_extract(s_b_129_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3238 [D] s_b_129_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_129_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_129_4 = constant u8 1 (const) */
        /* execute.simd:3238 [D] s_b_129_3[s_b_129_4] */
        auto s_b_129_5 = emitter.vector_extract(s_b_129_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3238 [D] s_b_129_6 = -s_b_129_5 */
        auto s_b_129_6 = emitter.neg(s_b_129_5);
        /* execute.simd:3238 [D] s_b_129_7 = s_b_129_2->>s_b_129_6 */
        auto s_b_129_7 = emitter.sar(s_b_129_2, s_b_129_6);
        /* execute.simd:3238 [D] s_b_129_8 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_129_8 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3238 [D] s_b_129_9 = (u32)s_b_129_7 */
        auto s_b_129_9 = emitter.reinterpret(s_b_129_7, emitter.context().types().u32());
        /* execute.simd:3238 [F] s_b_129_10 = constant s32 1 (const) */
        /* execute.simd:3238 [D] s_b_129_11 = s_b_129_8[s_b_129_10] <= s_b_129_9 */
        auto s_b_129_11 = emitter.vector_insert(s_b_129_8, emitter.const_s32((int32_t)1ULL), s_b_129_9);
        /* execute.simd:3238 [D] s_b_129_12: sym_27566_0_rd = s_b_129_11, dominates: s_b_132_8 s_b_134_7  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_129_11);
        /* execute.simd:3238 [F] s_b_129_13: Jump b_130 (const) */
        {
          auto block = block_b_130;
          dynamic_block_queue.push(block_b_130);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_130) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_130);
        /* execute.simd:3237 [D] s_b_130_0 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_130_0 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_130_1 = constant u8 2 (const) */
        /* execute.simd:3237 [D] s_b_130_0[s_b_130_1] */
        auto s_b_130_2 = emitter.vector_extract(s_b_130_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3237 [F] s_b_130_3 = constant s32 0 (const) */
        /* execute.simd:3237 [D] s_b_130_4 = s_b_130_2<s_b_130_3 */
        auto s_b_130_4 = emitter.cmp_lt(s_b_130_2, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3237 [D] s_b_130_5: If s_b_130_4: Jump b_132 else b_134 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_132;
            dynamic_block_queue.push(block_b_132);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_134;
            dynamic_block_queue.push(block_b_134);
            false_target = block;
          }
          emitter.branch(s_b_130_4, true_target, false_target);
        }
      }
      else if (block_index == block_b_131) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_131);
        /* execute.simd:3240 [D] s_b_131_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_131_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_131_1 = constant u8 1 (const) */
        /* execute.simd:3240 [D] s_b_131_0[s_b_131_1] */
        auto s_b_131_2 = emitter.vector_extract(s_b_131_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3240 [D] s_b_131_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_131_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_131_4 = constant u8 1 (const) */
        /* execute.simd:3240 [D] s_b_131_3[s_b_131_4] */
        auto s_b_131_5 = emitter.vector_extract(s_b_131_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3240 [D] s_b_131_6 = s_b_131_2<<s_b_131_5 */
        auto s_b_131_6 = emitter.shl(s_b_131_2, s_b_131_5);
        /* execute.simd:3240 [D] s_b_131_7 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_131_7 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3240 [D] s_b_131_8 = (u32)s_b_131_6 */
        auto s_b_131_8 = emitter.reinterpret(s_b_131_6, emitter.context().types().u32());
        /* execute.simd:3240 [F] s_b_131_9 = constant s32 1 (const) */
        /* execute.simd:3240 [D] s_b_131_10 = s_b_131_7[s_b_131_9] <= s_b_131_8 */
        auto s_b_131_10 = emitter.vector_insert(s_b_131_7, emitter.const_s32((int32_t)1ULL), s_b_131_8);
        /* execute.simd:3240 [D] s_b_131_11: sym_27566_0_rd = s_b_131_10, dominates: s_b_132_8 s_b_134_7  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_131_10);
        /* execute.simd:3240 [F] s_b_131_12: Jump b_130 (const) */
        {
          auto block = block_b_130;
          dynamic_block_queue.push(block_b_130);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_132) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_132);
        /* execute.simd:3238 [D] s_b_132_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_132_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_132_1 = constant u8 2 (const) */
        /* execute.simd:3238 [D] s_b_132_0[s_b_132_1] */
        auto s_b_132_2 = emitter.vector_extract(s_b_132_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3238 [D] s_b_132_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_132_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_132_4 = constant u8 2 (const) */
        /* execute.simd:3238 [D] s_b_132_3[s_b_132_4] */
        auto s_b_132_5 = emitter.vector_extract(s_b_132_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3238 [D] s_b_132_6 = -s_b_132_5 */
        auto s_b_132_6 = emitter.neg(s_b_132_5);
        /* execute.simd:3238 [D] s_b_132_7 = s_b_132_2->>s_b_132_6 */
        auto s_b_132_7 = emitter.sar(s_b_132_2, s_b_132_6);
        /* execute.simd:3238 [D] s_b_132_8 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_132_8 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3238 [D] s_b_132_9 = (u32)s_b_132_7 */
        auto s_b_132_9 = emitter.reinterpret(s_b_132_7, emitter.context().types().u32());
        /* execute.simd:3238 [F] s_b_132_10 = constant s32 2 (const) */
        /* execute.simd:3238 [D] s_b_132_11 = s_b_132_8[s_b_132_10] <= s_b_132_9 */
        auto s_b_132_11 = emitter.vector_insert(s_b_132_8, emitter.const_s32((int32_t)2ULL), s_b_132_9);
        /* execute.simd:3238 [D] s_b_132_12: sym_27566_0_rd = s_b_132_11, dominates: s_b_135_8 s_b_137_7  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_132_11);
        /* execute.simd:3238 [F] s_b_132_13: Jump b_133 (const) */
        {
          auto block = block_b_133;
          dynamic_block_queue.push(block_b_133);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_133) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_133);
        /* execute.simd:3237 [D] s_b_133_0 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_133_0 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_133_1 = constant u8 3 (const) */
        /* execute.simd:3237 [D] s_b_133_0[s_b_133_1] */
        auto s_b_133_2 = emitter.vector_extract(s_b_133_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3237 [F] s_b_133_3 = constant s32 0 (const) */
        /* execute.simd:3237 [D] s_b_133_4 = s_b_133_2<s_b_133_3 */
        auto s_b_133_4 = emitter.cmp_lt(s_b_133_2, emitter.const_s32((int32_t)0ULL));
        /* execute.simd:3237 [D] s_b_133_5: If s_b_133_4: Jump b_135 else b_137 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_135;
            dynamic_block_queue.push(block_b_135);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_137;
            dynamic_block_queue.push(block_b_137);
            false_target = block;
          }
          emitter.branch(s_b_133_4, true_target, false_target);
        }
      }
      else if (block_index == block_b_134) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_134);
        /* execute.simd:3240 [D] s_b_134_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_134_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_134_1 = constant u8 2 (const) */
        /* execute.simd:3240 [D] s_b_134_0[s_b_134_1] */
        auto s_b_134_2 = emitter.vector_extract(s_b_134_0, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3240 [D] s_b_134_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_134_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_134_4 = constant u8 2 (const) */
        /* execute.simd:3240 [D] s_b_134_3[s_b_134_4] */
        auto s_b_134_5 = emitter.vector_extract(s_b_134_3, emitter.const_u8((uint8_t)2ULL));
        /* execute.simd:3240 [D] s_b_134_6 = s_b_134_2<<s_b_134_5 */
        auto s_b_134_6 = emitter.shl(s_b_134_2, s_b_134_5);
        /* execute.simd:3240 [D] s_b_134_7 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_134_7 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3240 [D] s_b_134_8 = (u32)s_b_134_6 */
        auto s_b_134_8 = emitter.reinterpret(s_b_134_6, emitter.context().types().u32());
        /* execute.simd:3240 [F] s_b_134_9 = constant s32 2 (const) */
        /* execute.simd:3240 [D] s_b_134_10 = s_b_134_7[s_b_134_9] <= s_b_134_8 */
        auto s_b_134_10 = emitter.vector_insert(s_b_134_7, emitter.const_s32((int32_t)2ULL), s_b_134_8);
        /* execute.simd:3240 [D] s_b_134_11: sym_27566_0_rd = s_b_134_10, dominates: s_b_135_8 s_b_137_7  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_134_10);
        /* execute.simd:3240 [F] s_b_134_12: Jump b_133 (const) */
        {
          auto block = block_b_133;
          dynamic_block_queue.push(block_b_133);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_135) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_135);
        /* execute.simd:3238 [D] s_b_135_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_135_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_135_1 = constant u8 3 (const) */
        /* execute.simd:3238 [D] s_b_135_0[s_b_135_1] */
        auto s_b_135_2 = emitter.vector_extract(s_b_135_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3238 [D] s_b_135_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_135_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_135_4 = constant u8 3 (const) */
        /* execute.simd:3238 [D] s_b_135_3[s_b_135_4] */
        auto s_b_135_5 = emitter.vector_extract(s_b_135_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3238 [D] s_b_135_6 = -s_b_135_5 */
        auto s_b_135_6 = emitter.neg(s_b_135_5);
        /* execute.simd:3238 [D] s_b_135_7 = s_b_135_2->>s_b_135_6 */
        auto s_b_135_7 = emitter.sar(s_b_135_2, s_b_135_6);
        /* execute.simd:3238 [D] s_b_135_8 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_135_8 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3238 [D] s_b_135_9 = (u32)s_b_135_7 */
        auto s_b_135_9 = emitter.reinterpret(s_b_135_7, emitter.context().types().u32());
        /* execute.simd:3238 [F] s_b_135_10 = constant s32 3 (const) */
        /* execute.simd:3238 [D] s_b_135_11 = s_b_135_8[s_b_135_10] <= s_b_135_9 */
        auto s_b_135_11 = emitter.vector_insert(s_b_135_8, emitter.const_s32((int32_t)3ULL), s_b_135_9);
        /* execute.simd:3238 [D] s_b_135_12: sym_27566_0_rd = s_b_135_11, dominates: s_b_136_1  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_135_11);
        /* execute.simd:3238 [F] s_b_135_13: Jump b_136 (const) */
        {
          auto block = block_b_136;
          dynamic_block_queue.push(block_b_136);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_136) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_136);
        /* execute.simd:3244 [F] s_b_136_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3244 [D] s_b_136_1 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_136_1 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3244 [D] s_b_136_2: WriteRegBank 20:s_b_136_0 = s_b_136_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_136_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_136_1);
        /* execute.simd:0 [F] s_b_136_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_137) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_137);
        /* execute.simd:3240 [D] s_b_137_0 = sym_27556_0_rn wutils::Vector<int32_t, 4> */
        auto s_b_137_0 = emitter.load_local(DV_sym_27556_0_rn, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_137_1 = constant u8 3 (const) */
        /* execute.simd:3240 [D] s_b_137_0[s_b_137_1] */
        auto s_b_137_2 = emitter.vector_extract(s_b_137_0, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3240 [D] s_b_137_3 = sym_27561_0_rm wutils::Vector<int32_t, 4> */
        auto s_b_137_3 = emitter.load_local(DV_sym_27561_0_rm, emitter.context().types().v4s32());
        /* ???:4294967295 [F] s_b_137_4 = constant u8 3 (const) */
        /* execute.simd:3240 [D] s_b_137_3[s_b_137_4] */
        auto s_b_137_5 = emitter.vector_extract(s_b_137_3, emitter.const_u8((uint8_t)3ULL));
        /* execute.simd:3240 [D] s_b_137_6 = s_b_137_2<<s_b_137_5 */
        auto s_b_137_6 = emitter.shl(s_b_137_2, s_b_137_5);
        /* execute.simd:3240 [D] s_b_137_7 = sym_27566_0_rd wutils::Vector<uint32_t, 4> */
        auto s_b_137_7 = emitter.load_local(DV_sym_27566_0_rd, emitter.context().types().v4u32());
        /* execute.simd:3240 [D] s_b_137_8 = (u32)s_b_137_6 */
        auto s_b_137_8 = emitter.reinterpret(s_b_137_6, emitter.context().types().u32());
        /* execute.simd:3240 [F] s_b_137_9 = constant s32 3 (const) */
        /* execute.simd:3240 [D] s_b_137_10 = s_b_137_7[s_b_137_9] <= s_b_137_8 */
        auto s_b_137_10 = emitter.vector_insert(s_b_137_7, emitter.const_s32((int32_t)3ULL), s_b_137_8);
        /* execute.simd:3240 [D] s_b_137_11: sym_27566_0_rd = s_b_137_10, dominates: s_b_136_1  */
        emitter.store_local(DV_sym_27566_0_rd, s_b_137_10);
        /* execute.simd:3240 [F] s_b_137_12: Jump b_136 (const) */
        {
          auto block = block_b_136;
          dynamic_block_queue.push(block_b_136);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_139) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_139);
        /* execute.simd:3254 [D] s_b_139_0 = sym_27767_0_rn wutils::Vector<int64_t, 2> */
        auto s_b_139_0 = emitter.load_local(DV_sym_27767_0_rn, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_139_1 = constant u8 0 (const) */
        /* execute.simd:3254 [D] s_b_139_0[s_b_139_1] */
        auto s_b_139_2 = emitter.vector_extract(s_b_139_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3254 [D] s_b_139_3 = sym_27772_0_rm wutils::Vector<int64_t, 2> */
        auto s_b_139_3 = emitter.load_local(DV_sym_27772_0_rm, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_139_4 = constant u8 0 (const) */
        /* execute.simd:3254 [D] s_b_139_3[s_b_139_4] */
        auto s_b_139_5 = emitter.vector_extract(s_b_139_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3254 [D] s_b_139_6 = -s_b_139_5 */
        auto s_b_139_6 = emitter.neg(s_b_139_5);
        /* execute.simd:3254 [D] s_b_139_7 = s_b_139_2->>s_b_139_6 */
        auto s_b_139_7 = emitter.sar(s_b_139_2, s_b_139_6);
        /* execute.simd:3254 [F] s_b_139_8 = sym_27777_0_rd (const) wutils::Vector<uint64_t, 2> */
        wutils::Vector<uint64_t, 2> s_b_139_8 = CV_sym_27777_0_rd;
        /* execute.simd:3254 [D] s_b_139_9 = (u64)s_b_139_7 */
        auto s_b_139_9 = emitter.reinterpret(s_b_139_7, emitter.context().types().u64());
        /* execute.simd:3254 [F] s_b_139_10 = constant s32 0 (const) */
        /* execute.simd:3254 [D] s_b_139_11 = s_b_139_8[s_b_139_10] <= s_b_139_9 */
        auto s_b_139_11 = emitter.vector_insert(emitter.constant_vector_splat(s_b_139_8[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_139_9);
        /* execute.simd:3254 [D] s_b_139_12: sym_27777_0_rd = s_b_139_11, dominates: s_b_142_8 s_b_144_7  */
        emitter.store_local(DV_sym_27777_0_rd, s_b_139_11);
        /* execute.simd:3254 [F] s_b_139_13: Jump b_140 (const) */
        {
          auto block = block_b_140;
          dynamic_block_queue.push(block_b_140);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_140) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_140);
        /* execute.simd:3253 [D] s_b_140_0 = sym_27772_0_rm wutils::Vector<int64_t, 2> */
        auto s_b_140_0 = emitter.load_local(DV_sym_27772_0_rm, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_140_1 = constant u8 1 (const) */
        /* execute.simd:3253 [D] s_b_140_0[s_b_140_1] */
        auto s_b_140_2 = emitter.vector_extract(s_b_140_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3253 [F] s_b_140_3 = constant s64 0 (const) */
        /* execute.simd:3253 [D] s_b_140_4 = s_b_140_2<s_b_140_3 */
        auto s_b_140_4 = emitter.cmp_lt(s_b_140_2, emitter.const_s64((int64_t)0ULL));
        /* execute.simd:3253 [D] s_b_140_5: If s_b_140_4: Jump b_142 else b_144 */
        {
          dbt::el::Block *true_target;
          {
            auto block = block_b_142;
            dynamic_block_queue.push(block_b_142);
            true_target = block;
          }
          dbt::el::Block *false_target;
          {
            auto block = block_b_144;
            dynamic_block_queue.push(block_b_144);
            false_target = block;
          }
          emitter.branch(s_b_140_4, true_target, false_target);
        }
      }
      else if (block_index == block_b_141) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_141);
        /* execute.simd:3256 [D] s_b_141_0 = sym_27767_0_rn wutils::Vector<int64_t, 2> */
        auto s_b_141_0 = emitter.load_local(DV_sym_27767_0_rn, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_141_1 = constant u8 0 (const) */
        /* execute.simd:3256 [D] s_b_141_0[s_b_141_1] */
        auto s_b_141_2 = emitter.vector_extract(s_b_141_0, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3256 [D] s_b_141_3 = sym_27772_0_rm wutils::Vector<int64_t, 2> */
        auto s_b_141_3 = emitter.load_local(DV_sym_27772_0_rm, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_141_4 = constant u8 0 (const) */
        /* execute.simd:3256 [D] s_b_141_3[s_b_141_4] */
        auto s_b_141_5 = emitter.vector_extract(s_b_141_3, emitter.const_u8((uint8_t)0ULL));
        /* execute.simd:3256 [D] s_b_141_6 = s_b_141_2<<s_b_141_5 */
        auto s_b_141_6 = emitter.shl(s_b_141_2, s_b_141_5);
        /* execute.simd:3256 [F] s_b_141_7 = sym_27777_0_rd (const) wutils::Vector<uint64_t, 2> */
        wutils::Vector<uint64_t, 2> s_b_141_7 = CV_sym_27777_0_rd;
        /* execute.simd:3256 [D] s_b_141_8 = (u64)s_b_141_6 */
        auto s_b_141_8 = emitter.reinterpret(s_b_141_6, emitter.context().types().u64());
        /* execute.simd:3256 [F] s_b_141_9 = constant s32 0 (const) */
        /* execute.simd:3256 [D] s_b_141_10 = s_b_141_7[s_b_141_9] <= s_b_141_8 */
        auto s_b_141_10 = emitter.vector_insert(emitter.constant_vector_splat(s_b_141_7[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_141_8);
        /* execute.simd:3256 [D] s_b_141_11: sym_27777_0_rd = s_b_141_10, dominates: s_b_142_8 s_b_144_7  */
        emitter.store_local(DV_sym_27777_0_rd, s_b_141_10);
        /* execute.simd:3256 [F] s_b_141_12: Jump b_140 (const) */
        {
          auto block = block_b_140;
          dynamic_block_queue.push(block_b_140);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_142) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_142);
        /* execute.simd:3254 [D] s_b_142_0 = sym_27767_0_rn wutils::Vector<int64_t, 2> */
        auto s_b_142_0 = emitter.load_local(DV_sym_27767_0_rn, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_142_1 = constant u8 1 (const) */
        /* execute.simd:3254 [D] s_b_142_0[s_b_142_1] */
        auto s_b_142_2 = emitter.vector_extract(s_b_142_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3254 [D] s_b_142_3 = sym_27772_0_rm wutils::Vector<int64_t, 2> */
        auto s_b_142_3 = emitter.load_local(DV_sym_27772_0_rm, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_142_4 = constant u8 1 (const) */
        /* execute.simd:3254 [D] s_b_142_3[s_b_142_4] */
        auto s_b_142_5 = emitter.vector_extract(s_b_142_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3254 [D] s_b_142_6 = -s_b_142_5 */
        auto s_b_142_6 = emitter.neg(s_b_142_5);
        /* execute.simd:3254 [D] s_b_142_7 = s_b_142_2->>s_b_142_6 */
        auto s_b_142_7 = emitter.sar(s_b_142_2, s_b_142_6);
        /* execute.simd:3254 [D] s_b_142_8 = sym_27777_0_rd wutils::Vector<uint64_t, 2> */
        auto s_b_142_8 = emitter.load_local(DV_sym_27777_0_rd, emitter.context().types().v2u64());
        /* execute.simd:3254 [D] s_b_142_9 = (u64)s_b_142_7 */
        auto s_b_142_9 = emitter.reinterpret(s_b_142_7, emitter.context().types().u64());
        /* execute.simd:3254 [F] s_b_142_10 = constant s32 1 (const) */
        /* execute.simd:3254 [D] s_b_142_11 = s_b_142_8[s_b_142_10] <= s_b_142_9 */
        auto s_b_142_11 = emitter.vector_insert(s_b_142_8, emitter.const_s32((int32_t)1ULL), s_b_142_9);
        /* execute.simd:3254 [D] s_b_142_12: sym_27777_0_rd = s_b_142_11, dominates: s_b_143_1  */
        emitter.store_local(DV_sym_27777_0_rd, s_b_142_11);
        /* execute.simd:3254 [F] s_b_142_13: Jump b_143 (const) */
        {
          auto block = block_b_143;
          dynamic_block_queue.push(block_b_143);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_143) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_143);
        /* execute.simd:3260 [F] s_b_143_0=sym_25572_3_parameter_inst.rd (const) */
        /* execute.simd:3260 [D] s_b_143_1 = sym_27777_0_rd wutils::Vector<uint64_t, 2> */
        auto s_b_143_1 = emitter.load_local(DV_sym_27777_0_rd, emitter.context().types().v2u64());
        /* execute.simd:3260 [D] s_b_143_2: WriteRegBank 21:s_b_143_0 = s_b_143_1 */
        if (TRACE) 
        {
          emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_143_1,emitter.const_u8(16));
        }
        emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_143_1);
        /* execute.simd:0 [F] s_b_143_3: Jump b_2 (const) */
        {
          auto block = block_b_2;
          dynamic_block_queue.push(block_b_2);
          emitter.jump(block);
        }
      }
      else if (block_index == block_b_144) // BLOCK START LINE 0, END LINE 0
      {
        emitter.set_current_block(block_b_144);
        /* execute.simd:3256 [D] s_b_144_0 = sym_27767_0_rn wutils::Vector<int64_t, 2> */
        auto s_b_144_0 = emitter.load_local(DV_sym_27767_0_rn, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_144_1 = constant u8 1 (const) */
        /* execute.simd:3256 [D] s_b_144_0[s_b_144_1] */
        auto s_b_144_2 = emitter.vector_extract(s_b_144_0, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3256 [D] s_b_144_3 = sym_27772_0_rm wutils::Vector<int64_t, 2> */
        auto s_b_144_3 = emitter.load_local(DV_sym_27772_0_rm, emitter.context().types().v2s64());
        /* ???:4294967295 [F] s_b_144_4 = constant u8 1 (const) */
        /* execute.simd:3256 [D] s_b_144_3[s_b_144_4] */
        auto s_b_144_5 = emitter.vector_extract(s_b_144_3, emitter.const_u8((uint8_t)1ULL));
        /* execute.simd:3256 [D] s_b_144_6 = s_b_144_2<<s_b_144_5 */
        auto s_b_144_6 = emitter.shl(s_b_144_2, s_b_144_5);
        /* execute.simd:3256 [D] s_b_144_7 = sym_27777_0_rd wutils::Vector<uint64_t, 2> */
        auto s_b_144_7 = emitter.load_local(DV_sym_27777_0_rd, emitter.context().types().v2u64());
        /* execute.simd:3256 [D] s_b_144_8 = (u64)s_b_144_6 */
        auto s_b_144_8 = emitter.reinterpret(s_b_144_6, emitter.context().types().u64());
        /* execute.simd:3256 [F] s_b_144_9 = constant s32 1 (const) */
        /* execute.simd:3256 [D] s_b_144_10 = s_b_144_7[s_b_144_9] <= s_b_144_8 */
        auto s_b_144_10 = emitter.vector_insert(s_b_144_7, emitter.const_s32((int32_t)1ULL), s_b_144_8);
        /* execute.simd:3256 [D] s_b_144_11: sym_27777_0_rd = s_b_144_10, dominates: s_b_143_1  */
        emitter.store_local(DV_sym_27777_0_rd, s_b_144_10);
        /* execute.simd:3256 [F] s_b_144_12: Jump b_143 (const) */
        {
          auto block = block_b_143;
          dynamic_block_queue.push(block_b_143);
          emitter.jump(block);
        }
      }
    }
  }
  else 
  {
    emitter.jump(__exit_block);
  }
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_st1spi(const aarch64_decode_a64_SIMD_LS_SINGLE_PI&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_131546_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_131487_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_131409_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_131392_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_131285_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_131302_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_30555_0_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:2817 [F] s_b_0_0=sym_30549_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_10 else b_11 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_11;
    }
  }
  /* b_2, b_3, b_5, b_6, b_7, b_12,  */
  fixed_block_b_1: 
  {
    /* execute.simd:2846 [F] s_b_1_0=sym_30549_3_parameter_inst.rm (const) */
    /* execute.simd:2846 [F] s_b_1_1 = (u32)s_b_1_0 (const) */
    /* execute.simd:2846 [F] s_b_1_2 = constant u32 1f (const) */
    /* execute.simd:2846 [F] s_b_1_3 = s_b_1_1!=s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(((uint32_t)insn.rm) != (uint32_t)31ULL));
    /* execute.simd:2846 [F] s_b_1_4: If s_b_1_3: Jump b_8 else b_9 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_8;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_12,  */
  fixed_block_b_2: 
  {
    /* execute.simd:2821 [F] s_b_2_0=sym_30549_3_parameter_inst.rt (const) */
    /* execute.simd:2821 [D] s_b_2_1 = ReadRegBank 16:s_b_2_0 (v16u8) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_2_1,emitter.const_u8(16));
    }
    /* execute.simd:2822 [D] s_b_2_2 = sym_30555_0_addr uint64_t */
    auto s_b_2_2 = emitter.load_local(DV_sym_30555_0_addr, emitter.context().types().u64());
    /* execute.simd:2822 [F] s_b_2_3=sym_30549_3_parameter_inst.eindex (const) */
    /* execute.simd:2822 [D] s_b_2_1[s_b_2_3] */
    auto s_b_2_4 = emitter.vector_extract(s_b_2_1, emitter.const_u8(insn.eindex));
    /* ???:4294967295 [D] s_b_2_5: Store 1 s_b_2_2 <= s_b_2_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_2_2, s_b_2_4, emitter.const_u8(1));
    }
    emitter.store_memory(s_b_2_2, s_b_2_4);
    /* ???:4294967295 [F] s_b_2_6 = constant u64 1 (const) */
    /* ???:4294967295 [D] s_b_2_7 = s_b_2_2+s_b_2_6 */
    auto s_b_2_7 = emitter.add(s_b_2_2, emitter.const_u64((uint64_t)1ULL));
    /* execute.simd:2823 [D] s_b_2_8: sym_30555_0_addr = s_b_2_7, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_30555_0_addr, s_b_2_7);
    /* execute.simd:0 [F] s_b_2_9: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_12,  */
  fixed_block_b_3: 
  {
    /* execute.simd:2827 [F] s_b_3_0=sym_30549_3_parameter_inst.rt (const) */
    /* execute.simd:2827 [D] s_b_3_1 = ReadRegBank 18:s_b_3_0 (v8u16) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_3_1,emitter.const_u8(16));
    }
    /* execute.simd:2828 [D] s_b_3_2 = sym_30555_0_addr uint64_t */
    auto s_b_3_2 = emitter.load_local(DV_sym_30555_0_addr, emitter.context().types().u64());
    /* execute.simd:2828 [F] s_b_3_3=sym_30549_3_parameter_inst.eindex (const) */
    /* execute.simd:2828 [D] s_b_3_1[s_b_3_3] */
    auto s_b_3_4 = emitter.vector_extract(s_b_3_1, emitter.const_u8(insn.eindex));
    /* ???:4294967295 [D] s_b_3_5: Store 2 s_b_3_2 <= s_b_3_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_3_2, s_b_3_4, emitter.const_u8(2));
    }
    emitter.store_memory(s_b_3_2, s_b_3_4);
    /* ???:4294967295 [F] s_b_3_6 = constant u64 2 (const) */
    /* ???:4294967295 [D] s_b_3_7 = s_b_3_2+s_b_3_6 */
    auto s_b_3_7 = emitter.add(s_b_3_2, emitter.const_u64((uint64_t)2ULL));
    /* execute.simd:2829 [D] s_b_3_8: sym_30555_0_addr = s_b_3_7, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_30555_0_addr, s_b_3_7);
    /* execute.simd:0 [F] s_b_3_9: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_12,  */
  fixed_block_b_4: 
  {
    /* execute.simd:2833 [F] s_b_4_0=sym_30549_3_parameter_inst.size (const) */
    /* execute.simd:2833 [F] s_b_4_1 = (u32)s_b_4_0 (const) */
    /* execute.simd:2833 [F] s_b_4_2 = constant u32 0 (const) */
    /* execute.simd:2833 [F] s_b_4_3 = s_b_4_1==s_b_4_2 (const) */
    uint8_t s_b_4_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)0ULL));
    /* execute.simd:2833 [F] s_b_4_4: If s_b_4_3: Jump b_5 else b_6 (const) */
    if (s_b_4_3) 
    {
      goto fixed_block_b_5;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_4,  */
  fixed_block_b_5: 
  {
    /* execute.simd:2834 [F] s_b_5_0=sym_30549_3_parameter_inst.rt (const) */
    /* execute.simd:2834 [D] s_b_5_1 = ReadRegBank 20:s_b_5_0 (v4u32) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_5_1,emitter.const_u8(16));
    }
    /* execute.simd:2835 [D] s_b_5_2 = sym_30555_0_addr uint64_t */
    auto s_b_5_2 = emitter.load_local(DV_sym_30555_0_addr, emitter.context().types().u64());
    /* execute.simd:2835 [F] s_b_5_3=sym_30549_3_parameter_inst.eindex (const) */
    /* execute.simd:2835 [D] s_b_5_1[s_b_5_3] */
    auto s_b_5_4 = emitter.vector_extract(s_b_5_1, emitter.const_u8(insn.eindex));
    /* ???:4294967295 [D] s_b_5_5: Store 4 s_b_5_2 <= s_b_5_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_5_2, s_b_5_4, emitter.const_u8(4));
    }
    emitter.store_memory(s_b_5_2, s_b_5_4);
    /* ???:4294967295 [F] s_b_5_6 = constant u64 4 (const) */
    /* ???:4294967295 [D] s_b_5_7 = s_b_5_2+s_b_5_6 */
    auto s_b_5_7 = emitter.add(s_b_5_2, emitter.const_u64((uint64_t)4ULL));
    /* execute.simd:2836 [D] s_b_5_8: sym_30555_0_addr = s_b_5_7, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_30555_0_addr, s_b_5_7);
    /* execute.simd:2834 [F] s_b_5_9: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_4,  */
  fixed_block_b_6: 
  {
    /* execute.simd:2837 [F] s_b_6_0=sym_30549_3_parameter_inst.size (const) */
    /* execute.simd:2837 [F] s_b_6_1 = (u32)s_b_6_0 (const) */
    /* execute.simd:2837 [F] s_b_6_2 = constant u32 1 (const) */
    /* execute.simd:2837 [F] s_b_6_3 = s_b_6_1==s_b_6_2 (const) */
    uint8_t s_b_6_3 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)1ULL));
    /* execute.simd:2837 [F] s_b_6_4: If s_b_6_3: Jump b_7 else b_1 (const) */
    if (s_b_6_3) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_1;
    }
  }
  /* b_6,  */
  fixed_block_b_7: 
  {
    /* execute.simd:2838 [F] s_b_7_0=sym_30549_3_parameter_inst.rt (const) */
    /* execute.simd:2838 [D] s_b_7_1 = ReadRegBank 21:s_b_7_0 (v2u64) */
    auto s_b_7_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().v2u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_7_1,emitter.const_u8(16));
    }
    /* execute.simd:2839 [D] s_b_7_2 = sym_30555_0_addr uint64_t */
    auto s_b_7_2 = emitter.load_local(DV_sym_30555_0_addr, emitter.context().types().u64());
    /* execute.simd:2839 [F] s_b_7_3=sym_30549_3_parameter_inst.eindex (const) */
    /* execute.simd:2839 [D] s_b_7_1[s_b_7_3] */
    auto s_b_7_4 = emitter.vector_extract(s_b_7_1, emitter.const_u8(insn.eindex));
    /* ???:4294967295 [D] s_b_7_5: Store 8 s_b_7_2 <= s_b_7_4 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_7_2, s_b_7_4, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_7_2, s_b_7_4);
    /* ???:4294967295 [F] s_b_7_6 = constant u64 8 (const) */
    /* ???:4294967295 [D] s_b_7_7 = s_b_7_2+s_b_7_6 */
    auto s_b_7_7 = emitter.add(s_b_7_2, emitter.const_u64((uint64_t)8ULL));
    /* execute.simd:2840 [D] s_b_7_8: sym_30555_0_addr = s_b_7_7, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_30555_0_addr, s_b_7_7);
    /* execute.simd:2838 [F] s_b_7_9: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_1,  */
  fixed_block_b_8: 
  {
    /* execute.simd:2847 [F] s_b_8_0=sym_30549_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_8_1 = (u32)s_b_8_0 (const) */
    /* execute.a64:2730 [F] s_b_8_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_8_3 = s_b_8_1==s_b_8_2 (const) */
    uint8_t s_b_8_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_8_4: If s_b_8_3: Jump b_18 else b_19 (const) */
    if (s_b_8_3) 
    {
      goto fixed_block_b_18;
    }
    else 
    {
      goto fixed_block_b_19;
    }
  }
  /* b_1, b_20,  */
  fixed_block_b_9: 
  {
    /* execute.simd:2850 [F] s_b_9_0 = constant u8 1 (const) */
    /* execute.simd:2850 [D] s_b_9_1 = sym_30555_0_addr uint64_t */
    auto s_b_9_1 = emitter.load_local(DV_sym_30555_0_addr, emitter.context().types().u64());
    /* execute.simd:2850 [D] s_b_9_2: sym_131487_3_parameter_value = s_b_9_1, dominates: s_b_26_0 s_b_28_0 s_b_29_1  */
    emitter.store_local(DV_sym_131487_3_parameter_value, s_b_9_1);
    /* execute.a64:2746 [F] s_b_9_3 = !s_b_9_0 (const) */
    uint8_t s_b_9_3 = !(uint8_t)1ULL;
    /* execute.a64:2746 [F] s_b_9_4: If s_b_9_3: Jump b_26 else b_27 (const) */
    if (s_b_9_3) 
    {
      goto fixed_block_b_26;
    }
    else 
    {
      goto fixed_block_b_27;
    }
  }
  /* b_0,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2701 [F] s_b_10_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_10_1 = __builtin_get_feature */
    uint32_t s_b_10_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_10_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_10_3 = s_b_10_1==s_b_10_2 (const) */
    uint8_t s_b_10_3 = ((uint8_t)(s_b_10_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_10_4: If s_b_10_3: Jump b_13 else b_14 (const) */
    if (s_b_10_3) 
    {
      goto fixed_block_b_13;
    }
    else 
    {
      goto fixed_block_b_14;
    }
  }
  /* b_0,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2733 [F] s_b_11_0=sym_30549_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_11_1 = ReadRegBank 0:s_b_11_0 (u64) */
    auto s_b_11_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_11_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_11_2: sym_131285_0_return_symbol = s_b_11_1, dominates: s_b_12_0  */
    emitter.store_local(DV_sym_131285_0_return_symbol, s_b_11_1);
    /* ???:4294967295 [F] s_b_11_3: Jump b_12 (const) */
    goto fixed_block_b_12;
  }
  /* b_11, b_15,  */
  fixed_block_b_12: 
  {
    /* ???:4294967295 [D] s_b_12_0 = sym_131285_0_return_symbol uint64_t */
    auto s_b_12_0 = emitter.load_local(DV_sym_131285_0_return_symbol, emitter.context().types().u64());
    /* execute.simd:2817 [D] s_b_12_1: sym_30555_0_addr = s_b_12_0, dominates: s_b_9_1 s_b_2_2 s_b_3_2 s_b_5_2 s_b_7_2  */
    emitter.store_local(DV_sym_30555_0_addr, s_b_12_0);
    /* execute.simd:2819 [F] s_b_12_2=sym_30549_3_parameter_inst.opcode (const) */
    /* execute.simd:2820 [F] s_b_12_3 = constant s32 0 (const) */
    /* execute.simd:2826 [F] s_b_12_4 = constant s32 2 (const) */
    /* execute.simd:2832 [F] s_b_12_5 = constant s32 4 (const) */
    /* execute.simd:2819 [F] s_b_12_6: Switch s_b_12_2: < <todo> > def b_1 (const) -> b_1, b_2, b_3, b_4,  */
    switch (insn.opcode) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_4;
      break;
    default:
      goto fixed_block_b_1;
    }
  }
  /* b_10,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2702 [D] s_b_13_0 = ReadReg 20 (u64) */
    auto s_b_13_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_13_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_13_1: sym_131302_1__R_s_b_3_0 = s_b_13_0, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_131302_1__R_s_b_3_0, s_b_13_0);
    /* execute.a64:2702 [F] s_b_13_2: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_10,  */
  fixed_block_b_14: 
  {
    /* execute.a64:3012 [F] s_b_14_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_14_1 = __builtin_get_feature */
    uint32_t s_b_14_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_14_2 = (u8)s_b_14_1 (const) */
    /* execute.a64:2704 [F] s_b_14_3 = (u32)s_b_14_2 (const) */
    /* execute.a64:2704 [F] s_b_14_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_14_5 = s_b_14_3==s_b_14_4 (const) */
    uint8_t s_b_14_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_14_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_14_6: If s_b_14_5: Jump b_16 else b_17 (const) */
    if (s_b_14_5) 
    {
      goto fixed_block_b_16;
    }
    else 
    {
      goto fixed_block_b_17;
    }
  }
  /* b_13, b_16, b_17,  */
  fixed_block_b_15: 
  {
    /* execute.a64:2731 [D] s_b_15_0 = sym_131302_1__R_s_b_3_0 uint64_t */
    auto s_b_15_0 = emitter.load_local(DV_sym_131302_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_15_1: sym_131285_0_return_symbol = s_b_15_0, dominates: s_b_12_0  */
    emitter.store_local(DV_sym_131285_0_return_symbol, s_b_15_0);
    /* ???:4294967295 [F] s_b_15_2: Jump b_12 (const) */
    goto fixed_block_b_12;
  }
  /* b_14,  */
  fixed_block_b_16: 
  {
    /* execute.a64:2705 [D] s_b_16_0 = ReadReg 20 (u64) */
    auto s_b_16_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_16_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_16_1: sym_131302_1__R_s_b_3_0 = s_b_16_0, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_131302_1__R_s_b_3_0, s_b_16_0);
    /* execute.a64:2705 [F] s_b_16_2: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_14,  */
  fixed_block_b_17: 
  {
    /* execute.a64:2707 [D] s_b_17_0 = ReadReg 21 (u64) */
    auto s_b_17_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_17_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_17_1: sym_131302_1__R_s_b_3_0 = s_b_17_0, dominates: s_b_15_0  */
    emitter.store_local(DV_sym_131302_1__R_s_b_3_0, s_b_17_0);
    /* execute.a64:2707 [F] s_b_17_2: Jump b_15 (const) */
    goto fixed_block_b_15;
  }
  /* b_8,  */
  fixed_block_b_18: 
  {
    /* execute.a64:2701 [F] s_b_18_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_18_1 = __builtin_get_feature */
    uint32_t s_b_18_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_18_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_18_3 = s_b_18_1==s_b_18_2 (const) */
    uint8_t s_b_18_3 = ((uint8_t)(s_b_18_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_18_4: If s_b_18_3: Jump b_21 else b_22 (const) */
    if (s_b_18_3) 
    {
      goto fixed_block_b_21;
    }
    else 
    {
      goto fixed_block_b_22;
    }
  }
  /* b_8,  */
  fixed_block_b_19: 
  {
    /* execute.a64:2733 [F] s_b_19_0=sym_30549_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_19_1 = ReadRegBank 0:s_b_19_0 (u64) */
    auto s_b_19_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_19_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_19_2: sym_131392_0_return_symbol = s_b_19_1, dominates: s_b_20_0  */
    emitter.store_local(DV_sym_131392_0_return_symbol, s_b_19_1);
    /* ???:4294967295 [F] s_b_19_3: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_19, b_23,  */
  fixed_block_b_20: 
  {
    /* ???:4294967295 [D] s_b_20_0 = sym_131392_0_return_symbol uint64_t */
    auto s_b_20_0 = emitter.load_local(DV_sym_131392_0_return_symbol, emitter.context().types().u64());
    /* execute.simd:2847 [F] s_b_20_1=sym_30549_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_20_2 = (u32)s_b_20_1 (const) */
    /* execute.a64:2651 [F] s_b_20_3 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_20_4 = s_b_20_2==s_b_20_3 (const) */
    uint8_t s_b_20_4 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_20_5 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_20_6 = ReadRegBank 0:s_b_20_1 (u64) */
    auto s_b_20_6 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_20_6,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_20_7: Select s_b_20_4 ? s_b_20_5 : s_b_20_6 */
    dbt::el::Value *s_b_20_7;
    s_b_20_7 = (s_b_20_4) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_20_6);
    /* execute.simd:2847 [D] s_b_20_8 = s_b_20_0+s_b_20_7 */
    auto s_b_20_8 = emitter.add(s_b_20_0, s_b_20_7);
    /* execute.simd:2847 [D] s_b_20_9: sym_30555_0_addr = s_b_20_8, dominates: s_b_9_1  */
    emitter.store_local(DV_sym_30555_0_addr, s_b_20_8);
    /* execute.simd:2847 [F] s_b_20_10: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_18,  */
  fixed_block_b_21: 
  {
    /* execute.a64:2702 [D] s_b_21_0 = ReadReg 20 (u64) */
    auto s_b_21_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_21_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_21_1: sym_131409_1__R_s_b_3_0 = s_b_21_0, dominates: s_b_23_0  */
    emitter.store_local(DV_sym_131409_1__R_s_b_3_0, s_b_21_0);
    /* execute.a64:2702 [F] s_b_21_2: Jump b_23 (const) */
    goto fixed_block_b_23;
  }
  /* b_18,  */
  fixed_block_b_22: 
  {
    /* execute.a64:3012 [F] s_b_22_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_22_1 = __builtin_get_feature */
    uint32_t s_b_22_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_22_2 = (u8)s_b_22_1 (const) */
    /* execute.a64:2704 [F] s_b_22_3 = (u32)s_b_22_2 (const) */
    /* execute.a64:2704 [F] s_b_22_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_22_5 = s_b_22_3==s_b_22_4 (const) */
    uint8_t s_b_22_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_22_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_22_6: If s_b_22_5: Jump b_24 else b_25 (const) */
    if (s_b_22_5) 
    {
      goto fixed_block_b_24;
    }
    else 
    {
      goto fixed_block_b_25;
    }
  }
  /* b_21, b_24, b_25,  */
  fixed_block_b_23: 
  {
    /* execute.a64:2731 [D] s_b_23_0 = sym_131409_1__R_s_b_3_0 uint64_t */
    auto s_b_23_0 = emitter.load_local(DV_sym_131409_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_23_1: sym_131392_0_return_symbol = s_b_23_0, dominates: s_b_20_0  */
    emitter.store_local(DV_sym_131392_0_return_symbol, s_b_23_0);
    /* ???:4294967295 [F] s_b_23_2: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_22,  */
  fixed_block_b_24: 
  {
    /* execute.a64:2705 [D] s_b_24_0 = ReadReg 20 (u64) */
    auto s_b_24_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_24_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_24_1: sym_131409_1__R_s_b_3_0 = s_b_24_0, dominates: s_b_23_0  */
    emitter.store_local(DV_sym_131409_1__R_s_b_3_0, s_b_24_0);
    /* execute.a64:2705 [F] s_b_24_2: Jump b_23 (const) */
    goto fixed_block_b_23;
  }
  /* b_22,  */
  fixed_block_b_25: 
  {
    /* execute.a64:2707 [D] s_b_25_0 = ReadReg 21 (u64) */
    auto s_b_25_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_25_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_25_1: sym_131409_1__R_s_b_3_0 = s_b_25_0, dominates: s_b_23_0  */
    emitter.store_local(DV_sym_131409_1__R_s_b_3_0, s_b_25_0);
    /* execute.a64:2707 [F] s_b_25_2: Jump b_23 (const) */
    goto fixed_block_b_23;
  }
  /* b_9,  */
  fixed_block_b_26: 
  {
    /* execute.a64:2747 [D] s_b_26_0 = sym_131487_3_parameter_value uint64_t */
    auto s_b_26_0 = emitter.load_local(DV_sym_131487_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2747 [F] s_b_26_1 = constant u64 ffffffff (const) */
    /* ???:4294967295 [D] s_b_26_2 = s_b_26_0&s_b_26_1 */
    auto s_b_26_2 = emitter.bitwise_and(s_b_26_0, emitter.const_u64((uint64_t)4294967295ULL));
    /* execute.a64:2747 [D] s_b_26_3: sym_131487_3_parameter_value = s_b_26_2, dominates: s_b_28_0 s_b_29_1  */
    emitter.store_local(DV_sym_131487_3_parameter_value, s_b_26_2);
    /* execute.a64:2747 [F] s_b_26_4: Jump b_27 (const) */
    goto fixed_block_b_27;
  }
  /* b_9, b_26,  */
  fixed_block_b_27: 
  {
    /* execute.a64:2750 [F] s_b_27_0=sym_30549_3_parameter_inst.rn (const) */
    /* execute.a64:2750 [F] s_b_27_1 = (u32)s_b_27_0 (const) */
    /* execute.a64:2750 [F] s_b_27_2 = constant u32 1f (const) */
    /* execute.a64:2750 [F] s_b_27_3 = s_b_27_1==s_b_27_2 (const) */
    uint8_t s_b_27_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2750 [F] s_b_27_4: If s_b_27_3: Jump b_28 else b_29 (const) */
    if (s_b_27_3) 
    {
      goto fixed_block_b_28;
    }
    else 
    {
      goto fixed_block_b_29;
    }
  }
  /* b_27,  */
  fixed_block_b_28: 
  {
    /* execute.a64:2751 [D] s_b_28_0 = sym_131487_3_parameter_value uint64_t */
    auto s_b_28_0 = emitter.load_local(DV_sym_131487_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2751 [D] s_b_28_1: sym_131546_3_parameter_value = s_b_28_0, dominates: s_b_31_0 s_b_32_0 s_b_33_0  */
    emitter.store_local(DV_sym_131546_3_parameter_value, s_b_28_0);
    /* execute.a64:2714 [F] s_b_28_2 = constant u32 1 (const) */
    /* execute.a64:2714 [F] s_b_28_3 = __builtin_get_feature */
    uint32_t s_b_28_3 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2714 [F] s_b_28_4 = constant u32 0 (const) */
    /* execute.a64:2714 [F] s_b_28_5 = s_b_28_3==s_b_28_4 (const) */
    uint8_t s_b_28_5 = ((uint8_t)(s_b_28_3 == (uint32_t)0ULL));
    /* execute.a64:2714 [F] s_b_28_6: If s_b_28_5: Jump b_31 else b_34 (const) */
    if (s_b_28_5) 
    {
      goto fixed_block_b_31;
    }
    else 
    {
      goto fixed_block_b_34;
    }
  }
  /* b_27,  */
  fixed_block_b_29: 
  {
    /* execute.a64:2753 [F] s_b_29_0=sym_30549_3_parameter_inst.rn (const) */
    /* execute.a64:2753 [D] s_b_29_1 = sym_131487_3_parameter_value uint64_t */
    auto s_b_29_1 = emitter.load_local(DV_sym_131487_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2753 [D] s_b_29_2: WriteRegBank 0:s_b_29_0 = s_b_29_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_29_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_29_1);
    /* execute.a64:2753 [F] s_b_29_3: Jump b_30 (const) */
    goto fixed_block_b_30;
  }
  /* b_29, b_31, b_32, b_33,  */
  fixed_block_b_30: 
  {
    /* ???:4294967295 [F] s_b_30_0: Return */
    goto fixed_done;
  }
  /* b_28,  */
  fixed_block_b_31: 
  {
    /* execute.a64:2715 [D] s_b_31_0 = sym_131546_3_parameter_value uint64_t */
    auto s_b_31_0 = emitter.load_local(DV_sym_131546_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2715 [D] s_b_31_1: WriteReg 20 = s_b_31_0 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER, emitter.const_u32(1408), s_b_31_0, emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32(1408), s_b_31_0);
    /* execute.a64:2715 [F] s_b_31_2: Jump b_30 (const) */
    goto fixed_block_b_30;
  }
  /* b_34,  */
  fixed_block_b_32: 
  {
    /* execute.a64:2718 [D] s_b_32_0 = sym_131546_3_parameter_value uint64_t */
    auto s_b_32_0 = emitter.load_local(DV_sym_131546_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2718 [D] s_b_32_1: WriteReg 20 = s_b_32_0 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER, emitter.const_u32(1408), s_b_32_0, emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32(1408), s_b_32_0);
    /* execute.a64:2718 [F] s_b_32_2: Jump b_30 (const) */
    goto fixed_block_b_30;
  }
  /* b_34,  */
  fixed_block_b_33: 
  {
    /* execute.a64:2720 [D] s_b_33_0 = sym_131546_3_parameter_value uint64_t */
    auto s_b_33_0 = emitter.load_local(DV_sym_131546_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2720 [D] s_b_33_1: WriteReg 21 = s_b_33_0 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER, emitter.const_u32(1416), s_b_33_0, emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32(1416), s_b_33_0);
    /* execute.a64:2720 [F] s_b_33_2: Jump b_30 (const) */
    goto fixed_block_b_30;
  }
  /* b_28,  */
  fixed_block_b_34: 
  {
    /* execute.a64:3012 [F] s_b_34_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_34_1 = __builtin_get_feature */
    uint32_t s_b_34_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_34_2 = (u8)s_b_34_1 (const) */
    /* execute.a64:2717 [F] s_b_34_3 = (u32)s_b_34_2 (const) */
    /* execute.a64:2717 [F] s_b_34_4 = constant u32 0 (const) */
    /* execute.a64:2717 [F] s_b_34_5 = s_b_34_3==s_b_34_4 (const) */
    uint8_t s_b_34_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_34_1)) == (uint32_t)0ULL));
    /* execute.a64:2717 [F] s_b_34_6: If s_b_34_5: Jump b_32 else b_33 (const) */
    if (s_b_34_5) 
    {
      goto fixed_block_b_32;
    }
    else 
    {
      goto fixed_block_b_33;
    }
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_stlrb(const aarch64_decode_a64_LS_EX&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_133932_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_133949_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:645 [F] s_b_0_0=sym_31110_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_2 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2701 [F] s_b_1_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_1_1 = __builtin_get_feature */
    uint32_t s_b_1_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_1_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(s_b_1_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_1_4: If s_b_1_3: Jump b_4 else b_5 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2733 [F] s_b_2_0=sym_31110_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_2_1 = ReadRegBank 0:s_b_2_0 (u64) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_2_2: sym_133932_0_return_symbol = s_b_2_1, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_133932_0_return_symbol, s_b_2_1);
    /* ???:4294967295 [F] s_b_2_3: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_2, b_6,  */
  fixed_block_b_3: 
  {
    /* ???:4294967295 [D] s_b_3_0 = sym_133932_0_return_symbol uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_133932_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:646 [F] s_b_3_1=sym_31110_3_parameter_inst.rt (const) */
    /* execute.a64:2646 [F] s_b_3_2 = (u32)s_b_3_1 (const) */
    /* execute.a64:2646 [F] s_b_3_3 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_3_4 = s_b_3_2==s_b_3_3 (const) */
    uint8_t s_b_3_4 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_3_5 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_3_6 = ReadRegBank 1:s_b_3_1 (u32) */
    auto s_b_3_6 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_3_6,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_3_7: Select s_b_3_4 ? s_b_3_5 : s_b_3_6 */
    dbt::el::Value *s_b_3_7;
    s_b_3_7 = (s_b_3_4) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_3_6);
    /* execute.a64:2659 [D] s_b_3_8 = (u64)s_b_3_7 */
    auto s_b_3_8 = emitter.zx(s_b_3_7, emitter.context().types().u64());
    /* execute.a64:1782 [D] s_b_3_9 = (u8)s_b_3_8 */
    auto s_b_3_9 = emitter.truncate(s_b_3_8, emitter.context().types().u8());
    /* ???:4294967295 [D] s_b_3_10: Store 1 s_b_3_0 <= s_b_3_9 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_3_0, s_b_3_9, emitter.const_u8(1));
    }
    emitter.store_memory(s_b_3_0, s_b_3_9);
    /* ???:4294967295 [F] s_b_3_11: Return */
    goto fixed_done;
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2702 [D] s_b_4_0 = ReadReg 20 (u64) */
    auto s_b_4_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_4_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_4_1: sym_133949_1__R_s_b_3_0 = s_b_4_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_133949_1__R_s_b_3_0, s_b_4_0);
    /* execute.a64:2702 [F] s_b_4_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_1,  */
  fixed_block_b_5: 
  {
    /* execute.a64:3012 [F] s_b_5_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_5_1 = __builtin_get_feature */
    uint32_t s_b_5_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_5_2 = (u8)s_b_5_1 (const) */
    /* execute.a64:2704 [F] s_b_5_3 = (u32)s_b_5_2 (const) */
    /* execute.a64:2704 [F] s_b_5_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_5_5 = s_b_5_3==s_b_5_4 (const) */
    uint8_t s_b_5_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_5_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_5_6: If s_b_5_5: Jump b_7 else b_8 (const) */
    if (s_b_5_5) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_4, b_7, b_8,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2731 [D] s_b_6_0 = sym_133949_1__R_s_b_3_0 uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_133949_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_6_1: sym_133932_0_return_symbol = s_b_6_0, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_133932_0_return_symbol, s_b_6_0);
    /* ???:4294967295 [F] s_b_6_2: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_5,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2705 [D] s_b_7_0 = ReadReg 20 (u64) */
    auto s_b_7_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_7_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_7_1: sym_133949_1__R_s_b_3_0 = s_b_7_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_133949_1__R_s_b_3_0, s_b_7_0);
    /* execute.a64:2705 [F] s_b_7_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_5,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2707 [D] s_b_8_0 = ReadReg 21 (u64) */
    auto s_b_8_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_8_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_8_1: sym_133949_1__R_s_b_3_0 = s_b_8_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_133949_1__R_s_b_3_0, s_b_8_0);
    /* execute.a64:2707 [F] s_b_8_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_stp_simd(const aarch64_decode_a64_LS_REG_PAIR_OFF&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_137242_0_replaced_parameter_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_137150_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_137167_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_137275_1_tmp_s_b_0_7 = emitter.alloc_local(emitter.context().types().u64(), false);
  uint8_t CV_sym_137277_1_tmp_s_b_0_5;
  uint8_t CV_sym_137279_1_tmp_s_b_0_1;
  auto DV_sym_137285_0_replaced_parameter_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:740 [F] s_b_0_0=sym_31546_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_2 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2701 [F] s_b_1_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_1_1 = __builtin_get_feature */
    uint32_t s_b_1_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_1_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(s_b_1_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_1_4: If s_b_1_3: Jump b_4 else b_5 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2733 [F] s_b_2_0=sym_31546_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_2_1 = ReadRegBank 0:s_b_2_0 (u64) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_2_2: sym_137150_0_return_symbol = s_b_2_1, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_137150_0_return_symbol, s_b_2_1);
    /* ???:4294967295 [F] s_b_2_3: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_2, b_6,  */
  fixed_block_b_3: 
  {
    /* ???:4294967295 [D] s_b_3_0 = sym_137150_0_return_symbol uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_137150_0_return_symbol, emitter.context().types().u64());
    /* execute.simd:741 [F] s_b_3_1=sym_31546_3_parameter_inst.imms64 (const) */
    /* ???:4294967295 [F] s_b_3_2 = (u64)s_b_3_1 (const) */
    /* ???:4294967295 [D] s_b_3_3 = s_b_3_0+s_b_3_2 */
    auto s_b_3_3 = emitter.add(s_b_3_0, emitter.const_u64(((uint64_t)insn.imms64)));
    /* execute.simd:743 [F] s_b_3_4=sym_31546_3_parameter_inst.opc (const) */
    /* execute.simd:743 [F] s_b_3_5 = (u32)s_b_3_4 (const) */
    /* execute.simd:743 [F] s_b_3_6 = constant u32 2 (const) */
    /* execute.simd:743 [F] s_b_3_7 = s_b_3_5+s_b_3_6 (const) */
    uint32_t s_b_3_7 = ((uint32_t)(((uint32_t)insn.opc) + (uint32_t)2ULL));
    /* execute.simd:743 [F] s_b_3_8 = (u8)s_b_3_7 (const) */
    /* execute.simd:724 [F] s_b_3_9 = constant u32 1 (const) */
    /* execute.simd:724 [F] s_b_3_10 = (u32)s_b_3_8 (const) */
    /* execute.simd:724 [F] s_b_3_11 = s_b_3_9<<s_b_3_10 (const) */
    uint32_t s_b_3_11 = ((uint32_t)((uint32_t)1ULL << ((uint32_t)((uint8_t)s_b_3_7))));
    /* execute.simd:724 [F] s_b_3_12 = (u8)s_b_3_11 (const) */
    /* ???:4294967295 [F] s_b_3_13: sym_137279_1_tmp_s_b_0_1 = s_b_3_8 (const), dominates: s_b_10_2  */
    CV_sym_137279_1_tmp_s_b_0_1 = ((uint8_t)s_b_3_7);
    /* ???:4294967295 [F] s_b_3_14: sym_137277_1_tmp_s_b_0_5 = s_b_3_12 (const), dominates: s_b_10_1  */
    CV_sym_137277_1_tmp_s_b_0_5 = ((uint8_t)s_b_3_11);
    /* ???:4294967295 [D] s_b_3_15: sym_137275_1_tmp_s_b_0_7 = s_b_3_3, dominates: s_b_10_0  */
    emitter.store_local(DV_sym_137275_1_tmp_s_b_0_7, s_b_3_3);
    /* ???:4294967295 [D] s_b_3_16: sym_137242_0_replaced_parameter_addr = s_b_3_3, dominates: s_b_14_3 s_b_9_2 s_b_13_2 s_b_12_2 s_b_11_2  */
    emitter.store_local(DV_sym_137242_0_replaced_parameter_addr, s_b_3_3);
    /* execute.simd:3674 [F] s_b_3_17 = constant s32 0 (const) */
    /* execute.simd:3680 [F] s_b_3_18 = constant s32 1 (const) */
    /* execute.simd:3686 [F] s_b_3_19 = constant s32 2 (const) */
    /* execute.simd:3692 [F] s_b_3_20 = constant s32 3 (const) */
    /* execute.simd:3698 [F] s_b_3_21 = constant s32 4 (const) */
    /* execute.simd:3673 [F] s_b_3_22: Switch s_b_3_8: < <todo> > def b_10 (const) -> b_14, b_9, b_13, b_10, b_12, b_11,  */
    switch (((uint8_t)s_b_3_7)) 
    {
    case (int32_t)3ULL:
      goto fixed_block_b_13;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_11;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_12;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_14;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_9;
      break;
    default:
      goto fixed_block_b_10;
    }
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2702 [D] s_b_4_0 = ReadReg 20 (u64) */
    auto s_b_4_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_4_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_4_1: sym_137167_1__R_s_b_3_0 = s_b_4_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_137167_1__R_s_b_3_0, s_b_4_0);
    /* execute.a64:2702 [F] s_b_4_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_1,  */
  fixed_block_b_5: 
  {
    /* execute.a64:3012 [F] s_b_5_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_5_1 = __builtin_get_feature */
    uint32_t s_b_5_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_5_2 = (u8)s_b_5_1 (const) */
    /* execute.a64:2704 [F] s_b_5_3 = (u32)s_b_5_2 (const) */
    /* execute.a64:2704 [F] s_b_5_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_5_5 = s_b_5_3==s_b_5_4 (const) */
    uint8_t s_b_5_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_5_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_5_6: If s_b_5_5: Jump b_7 else b_8 (const) */
    if (s_b_5_5) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_4, b_7, b_8,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2731 [D] s_b_6_0 = sym_137167_1__R_s_b_3_0 uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_137167_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_6_1: sym_137150_0_return_symbol = s_b_6_0, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_137150_0_return_symbol, s_b_6_0);
    /* ???:4294967295 [F] s_b_6_2: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_5,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2705 [D] s_b_7_0 = ReadReg 20 (u64) */
    auto s_b_7_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_7_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_7_1: sym_137167_1__R_s_b_3_0 = s_b_7_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_137167_1__R_s_b_3_0, s_b_7_0);
    /* execute.a64:2705 [F] s_b_7_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_5,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2707 [D] s_b_8_0 = ReadReg 21 (u64) */
    auto s_b_8_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_8_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_8_1: sym_137167_1__R_s_b_3_0 = s_b_8_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_137167_1__R_s_b_3_0, s_b_8_0);
    /* execute.a64:2707 [F] s_b_8_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.simd:3676 [F] s_b_9_0=sym_31546_3_parameter_inst.rt (const) */
    /* execute.simd:6260 [D] s_b_9_1 = ReadRegBank 4:s_b_9_0 (u8) */
    auto s_b_9_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_9_1,emitter.const_u8(1));
    }
    /* execute.simd:3677 [D] s_b_9_2 = sym_137242_0_replaced_parameter_addr uint64_t */
    auto s_b_9_2 = emitter.load_local(DV_sym_137242_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_9_3: Store 1 s_b_9_2 <= s_b_9_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_9_2, s_b_9_1, emitter.const_u8(1));
    }
    emitter.store_memory(s_b_9_2, s_b_9_1);
    /* execute.simd:0 [F] s_b_9_4: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_3, b_9, b_11, b_12, b_13, b_14,  */
  fixed_block_b_10: 
  {
    /* ???:4294967295 [D] s_b_10_0 = sym_137275_1_tmp_s_b_0_7 uint64_t */
    auto s_b_10_0 = emitter.load_local(DV_sym_137275_1_tmp_s_b_0_7, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_10_1 = sym_137277_1_tmp_s_b_0_5 (const) uint8_t */
    uint8_t s_b_10_1 = CV_sym_137277_1_tmp_s_b_0_5;
    /* ???:4294967295 [F] s_b_10_2 = sym_137279_1_tmp_s_b_0_1 (const) uint8_t */
    uint8_t s_b_10_2 = CV_sym_137279_1_tmp_s_b_0_1;
    /* execute.simd:726 [F] s_b_10_3 = (u64)s_b_10_1 (const) */
    /* execute.simd:726 [D] s_b_10_4 = s_b_10_0+s_b_10_3 */
    auto s_b_10_4 = emitter.add(s_b_10_0, emitter.const_u64(((uint64_t)s_b_10_1)));
    /* ???:4294967295 [D] s_b_10_5: sym_137285_0_replaced_parameter_addr = s_b_10_4, dominates: s_b_15_2 s_b_18_2 s_b_19_2 s_b_17_3 s_b_16_2  */
    emitter.store_local(DV_sym_137285_0_replaced_parameter_addr, s_b_10_4);
    /* execute.simd:3674 [F] s_b_10_6 = constant s32 0 (const) */
    /* execute.simd:3680 [F] s_b_10_7 = constant s32 1 (const) */
    /* execute.simd:3686 [F] s_b_10_8 = constant s32 2 (const) */
    /* execute.simd:3692 [F] s_b_10_9 = constant s32 3 (const) */
    /* execute.simd:3698 [F] s_b_10_10 = constant s32 4 (const) */
    /* execute.simd:3673 [F] s_b_10_11: Switch s_b_10_2: < <todo> > def b_20 (const) -> b_15, b_18, b_19, b_17, b_16, b_20,  */
    switch (s_b_10_2) 
    {
    case (int32_t)4ULL:
      goto fixed_block_b_17;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_18;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_19;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_15;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_16;
      break;
    default:
      goto fixed_block_b_20;
    }
  }
  /* b_3,  */
  fixed_block_b_11: 
  {
    /* execute.simd:3682 [F] s_b_11_0=sym_31546_3_parameter_inst.rt (const) */
    /* execute.simd:6265 [D] s_b_11_1 = ReadRegBank 5:s_b_11_0 (u16) */
    auto s_b_11_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_11_1,emitter.const_u8(2));
    }
    /* execute.simd:3683 [D] s_b_11_2 = sym_137242_0_replaced_parameter_addr uint64_t */
    auto s_b_11_2 = emitter.load_local(DV_sym_137242_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_11_3: Store 2 s_b_11_2 <= s_b_11_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_11_2, s_b_11_1, emitter.const_u8(2));
    }
    emitter.store_memory(s_b_11_2, s_b_11_1);
    /* execute.simd:0 [F] s_b_11_4: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_3,  */
  fixed_block_b_12: 
  {
    /* execute.simd:3688 [F] s_b_12_0=sym_31546_3_parameter_inst.rt (const) */
    /* execute.simd:6270 [D] s_b_12_1 = ReadRegBank 6:s_b_12_0 (u32) */
    auto s_b_12_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_12_1,emitter.const_u8(4));
    }
    /* execute.simd:3689 [D] s_b_12_2 = sym_137242_0_replaced_parameter_addr uint64_t */
    auto s_b_12_2 = emitter.load_local(DV_sym_137242_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_12_3: Store 4 s_b_12_2 <= s_b_12_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_12_2, s_b_12_1, emitter.const_u8(4));
    }
    emitter.store_memory(s_b_12_2, s_b_12_1);
    /* execute.simd:0 [F] s_b_12_4: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_3,  */
  fixed_block_b_13: 
  {
    /* execute.simd:3694 [F] s_b_13_0=sym_31546_3_parameter_inst.rt (const) */
    /* execute.simd:6275 [D] s_b_13_1 = ReadRegBank 7:s_b_13_0 (u64) */
    auto s_b_13_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_13_1,emitter.const_u8(8));
    }
    /* execute.simd:3695 [D] s_b_13_2 = sym_137242_0_replaced_parameter_addr uint64_t */
    auto s_b_13_2 = emitter.load_local(DV_sym_137242_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_13_3: Store 8 s_b_13_2 <= s_b_13_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_13_2, s_b_13_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_13_2, s_b_13_1);
    /* execute.simd:0 [F] s_b_13_4: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_3,  */
  fixed_block_b_14: 
  {
    /* execute.simd:3702 [F] s_b_14_0=sym_31546_3_parameter_inst.rt (const) */
    /* execute.simd:6280 [D] s_b_14_1 = ReadRegBank 2:s_b_14_0 (u64) */
    auto s_b_14_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_14_1,emitter.const_u8(8));
    }
    /* execute.simd:6281 [D] s_b_14_2 = ReadRegBank 3:s_b_14_0 (u64) */
    auto s_b_14_2 = emitter.load_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),s_b_14_2,emitter.const_u8(8));
    }
    /* execute.simd:3703 [D] s_b_14_3 = sym_137242_0_replaced_parameter_addr uint64_t */
    auto s_b_14_3 = emitter.load_local(DV_sym_137242_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_14_4: Store 8 s_b_14_3 <= s_b_14_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_14_3, s_b_14_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_14_3, s_b_14_1);
    /* execute.simd:3704 [F] s_b_14_5 = constant u64 8 (const) */
    /* execute.simd:3704 [D] s_b_14_6 = s_b_14_3+s_b_14_5 */
    auto s_b_14_6 = emitter.add(s_b_14_3, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [D] s_b_14_7: Store 8 s_b_14_6 <= s_b_14_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_14_6, s_b_14_2, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_14_6, s_b_14_2);
    /* execute.simd:0 [F] s_b_14_8: Jump b_10 (const) */
    goto fixed_block_b_10;
  }
  /* b_10,  */
  fixed_block_b_15: 
  {
    /* execute.simd:3676 [F] s_b_15_0=sym_31546_3_parameter_inst.rt2 (const) */
    /* execute.simd:6260 [D] s_b_15_1 = ReadRegBank 4:s_b_15_0 (u8) */
    auto s_b_15_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_15_1,emitter.const_u8(1));
    }
    /* execute.simd:3677 [D] s_b_15_2 = sym_137285_0_replaced_parameter_addr uint64_t */
    auto s_b_15_2 = emitter.load_local(DV_sym_137285_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_15_3: Store 1 s_b_15_2 <= s_b_15_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_15_2, s_b_15_1, emitter.const_u8(1));
    }
    emitter.store_memory(s_b_15_2, s_b_15_1);
    /* execute.simd:0 [F] s_b_15_4: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_10,  */
  fixed_block_b_16: 
  {
    /* execute.simd:3682 [F] s_b_16_0=sym_31546_3_parameter_inst.rt2 (const) */
    /* execute.simd:6265 [D] s_b_16_1 = ReadRegBank 5:s_b_16_0 (u16) */
    auto s_b_16_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))), emitter.context().types().u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_16_1,emitter.const_u8(2));
    }
    /* execute.simd:3683 [D] s_b_16_2 = sym_137285_0_replaced_parameter_addr uint64_t */
    auto s_b_16_2 = emitter.load_local(DV_sym_137285_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_16_3: Store 2 s_b_16_2 <= s_b_16_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_16_2, s_b_16_1, emitter.const_u8(2));
    }
    emitter.store_memory(s_b_16_2, s_b_16_1);
    /* execute.simd:0 [F] s_b_16_4: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_10,  */
  fixed_block_b_17: 
  {
    /* execute.simd:3702 [F] s_b_17_0=sym_31546_3_parameter_inst.rt2 (const) */
    /* execute.simd:6280 [D] s_b_17_1 = ReadRegBank 2:s_b_17_0 (u64) */
    auto s_b_17_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_17_1,emitter.const_u8(8));
    }
    /* execute.simd:6281 [D] s_b_17_2 = ReadRegBank 3:s_b_17_0 (u64) */
    auto s_b_17_2 = emitter.load_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(264 + (16 * insn.rt2))),s_b_17_2,emitter.const_u8(8));
    }
    /* execute.simd:3703 [D] s_b_17_3 = sym_137285_0_replaced_parameter_addr uint64_t */
    auto s_b_17_3 = emitter.load_local(DV_sym_137285_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_17_4: Store 8 s_b_17_3 <= s_b_17_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_17_3, s_b_17_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_17_3, s_b_17_1);
    /* execute.simd:3704 [F] s_b_17_5 = constant u64 8 (const) */
    /* execute.simd:3704 [D] s_b_17_6 = s_b_17_3+s_b_17_5 */
    auto s_b_17_6 = emitter.add(s_b_17_3, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [D] s_b_17_7: Store 8 s_b_17_6 <= s_b_17_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_17_6, s_b_17_2, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_17_6, s_b_17_2);
    /* execute.simd:0 [F] s_b_17_8: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_10,  */
  fixed_block_b_18: 
  {
    /* execute.simd:3694 [F] s_b_18_0=sym_31546_3_parameter_inst.rt2 (const) */
    /* execute.simd:6275 [D] s_b_18_1 = ReadRegBank 7:s_b_18_0 (u64) */
    auto s_b_18_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_18_1,emitter.const_u8(8));
    }
    /* execute.simd:3695 [D] s_b_18_2 = sym_137285_0_replaced_parameter_addr uint64_t */
    auto s_b_18_2 = emitter.load_local(DV_sym_137285_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_18_3: Store 8 s_b_18_2 <= s_b_18_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_18_2, s_b_18_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_18_2, s_b_18_1);
    /* execute.simd:0 [F] s_b_18_4: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_10,  */
  fixed_block_b_19: 
  {
    /* execute.simd:3688 [F] s_b_19_0=sym_31546_3_parameter_inst.rt2 (const) */
    /* execute.simd:6270 [D] s_b_19_1 = ReadRegBank 6:s_b_19_0 (u32) */
    auto s_b_19_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt2))),s_b_19_1,emitter.const_u8(4));
    }
    /* execute.simd:3689 [D] s_b_19_2 = sym_137285_0_replaced_parameter_addr uint64_t */
    auto s_b_19_2 = emitter.load_local(DV_sym_137285_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_19_3: Store 4 s_b_19_2 <= s_b_19_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_19_2, s_b_19_1, emitter.const_u8(4));
    }
    emitter.store_memory(s_b_19_2, s_b_19_1);
    /* execute.simd:0 [F] s_b_19_4: Jump b_20 (const) */
    goto fixed_block_b_20;
  }
  /* b_10, b_15, b_16, b_17, b_18, b_19,  */
  fixed_block_b_20: 
  {
    /* ???:4294967295 [F] s_b_20_0: Return */
    goto fixed_done;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_strbi(const aarch64_decode_a64_LS_REG_UIMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_141571_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_141588_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:1394 [F] s_b_0_0=sym_32453_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_2 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2701 [F] s_b_1_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_1_1 = __builtin_get_feature */
    uint32_t s_b_1_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_1_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(s_b_1_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_1_4: If s_b_1_3: Jump b_4 else b_5 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2733 [F] s_b_2_0=sym_32453_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_2_1 = ReadRegBank 0:s_b_2_0 (u64) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_2_2: sym_141571_0_return_symbol = s_b_2_1, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_141571_0_return_symbol, s_b_2_1);
    /* ???:4294967295 [F] s_b_2_3: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_2, b_6,  */
  fixed_block_b_3: 
  {
    /* ???:4294967295 [D] s_b_3_0 = sym_141571_0_return_symbol uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_141571_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:1394 [F] s_b_3_1=sym_32453_3_parameter_inst.immu64 (const) */
    /* execute.a64:1394 [D] s_b_3_2 = s_b_3_0+s_b_3_1 */
    auto s_b_3_2 = emitter.add(s_b_3_0, emitter.const_u64(insn.immu64));
    /* execute.a64:1396 [F] s_b_3_3=sym_32453_3_parameter_inst.rt (const) */
    /* execute.a64:2646 [F] s_b_3_4 = (u32)s_b_3_3 (const) */
    /* execute.a64:2646 [F] s_b_3_5 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_3_6 = s_b_3_4==s_b_3_5 (const) */
    uint8_t s_b_3_6 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_3_7 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_3_8 = ReadRegBank 1:s_b_3_3 (u32) */
    auto s_b_3_8 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_3_8,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_3_9: Select s_b_3_6 ? s_b_3_7 : s_b_3_8 */
    dbt::el::Value *s_b_3_9;
    s_b_3_9 = (s_b_3_6) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_3_8);
    /* execute.a64:2659 [D] s_b_3_10 = (u64)s_b_3_9 */
    auto s_b_3_10 = emitter.zx(s_b_3_9, emitter.context().types().u64());
    /* execute.a64:1397 [D] s_b_3_11 = (u8)s_b_3_10 */
    auto s_b_3_11 = emitter.truncate(s_b_3_10, emitter.context().types().u8());
    /* ???:4294967295 [D] s_b_3_12: Store 1 s_b_3_2 <= s_b_3_11 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_3_2, s_b_3_11, emitter.const_u8(1));
    }
    emitter.store_memory(s_b_3_2, s_b_3_11);
    /* ???:4294967295 [F] s_b_3_13: Return */
    goto fixed_done;
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2702 [D] s_b_4_0 = ReadReg 20 (u64) */
    auto s_b_4_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_4_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_4_1: sym_141588_1__R_s_b_3_0 = s_b_4_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_141588_1__R_s_b_3_0, s_b_4_0);
    /* execute.a64:2702 [F] s_b_4_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_1,  */
  fixed_block_b_5: 
  {
    /* execute.a64:3012 [F] s_b_5_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_5_1 = __builtin_get_feature */
    uint32_t s_b_5_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_5_2 = (u8)s_b_5_1 (const) */
    /* execute.a64:2704 [F] s_b_5_3 = (u32)s_b_5_2 (const) */
    /* execute.a64:2704 [F] s_b_5_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_5_5 = s_b_5_3==s_b_5_4 (const) */
    uint8_t s_b_5_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_5_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_5_6: If s_b_5_5: Jump b_7 else b_8 (const) */
    if (s_b_5_5) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_4, b_7, b_8,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2731 [D] s_b_6_0 = sym_141588_1__R_s_b_3_0 uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_141588_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_6_1: sym_141571_0_return_symbol = s_b_6_0, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_141571_0_return_symbol, s_b_6_0);
    /* ???:4294967295 [F] s_b_6_2: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_5,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2705 [D] s_b_7_0 = ReadReg 20 (u64) */
    auto s_b_7_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_7_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_7_1: sym_141588_1__R_s_b_3_0 = s_b_7_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_141588_1__R_s_b_3_0, s_b_7_0);
    /* execute.a64:2705 [F] s_b_7_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_5,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2707 [D] s_b_8_0 = ReadReg 21 (u64) */
    auto s_b_8_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_8_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_8_1: sym_141588_1__R_s_b_3_0 = s_b_8_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_141588_1__R_s_b_3_0, s_b_8_0);
    /* execute.a64:2707 [F] s_b_8_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_stur(const aarch64_decode_a64_LS_REG_USIMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_32748_0_address = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_32762_0_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_143182_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_143085_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_143102_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:1348 [F] s_b_0_0=sym_32742_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_4 else b_5 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_13,  */
  fixed_block_b_1: 
  {
    /* execute.a64:1354 [D] s_b_1_0 = sym_32748_0_address uint64_t */
    auto s_b_1_0 = emitter.load_local(DV_sym_32748_0_address, emitter.context().types().u64());
    /* execute.a64:1354 [D] s_b_1_1 = sym_32762_0_value uint64_t */
    auto s_b_1_1 = emitter.load_local(DV_sym_32762_0_value, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_1_2: Store 8 s_b_1_0 <= s_b_1_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_1_0, s_b_1_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_1_0, s_b_1_1);
    /* execute.a64:1354 [F] s_b_1_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_1, b_3,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_13,  */
  fixed_block_b_3: 
  {
    /* execute.a64:1356 [D] s_b_3_0 = sym_32748_0_address uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_32748_0_address, emitter.context().types().u64());
    /* execute.a64:1356 [D] s_b_3_1 = sym_32762_0_value uint64_t */
    auto s_b_3_1 = emitter.load_local(DV_sym_32762_0_value, emitter.context().types().u64());
    /* execute.a64:1356 [D] s_b_3_2 = (u32)s_b_3_1 */
    auto s_b_3_2 = emitter.truncate(s_b_3_1, emitter.context().types().u32());
    /* ???:4294967295 [D] s_b_3_3: Store 4 s_b_3_0 <= s_b_3_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_3_0, s_b_3_2, emitter.const_u8(4));
    }
    emitter.store_memory(s_b_3_0, s_b_3_2);
    /* execute.a64:1356 [F] s_b_3_4: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2701 [F] s_b_4_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_4_1 = __builtin_get_feature */
    uint32_t s_b_4_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_4_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_4_3 = s_b_4_1==s_b_4_2 (const) */
    uint8_t s_b_4_3 = ((uint8_t)(s_b_4_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_4_4: If s_b_4_3: Jump b_7 else b_8 (const) */
    if (s_b_4_3) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_0,  */
  fixed_block_b_5: 
  {
    /* execute.a64:2733 [F] s_b_5_0=sym_32742_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_5_1 = ReadRegBank 0:s_b_5_0 (u64) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_5_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_5_2: sym_143085_0_return_symbol = s_b_5_1, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_143085_0_return_symbol, s_b_5_1);
    /* ???:4294967295 [F] s_b_5_3: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_5, b_9,  */
  fixed_block_b_6: 
  {
    /* ???:4294967295 [D] s_b_6_0 = sym_143085_0_return_symbol uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_143085_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:1348 [D] s_b_6_1: sym_32748_0_address = s_b_6_0, dominates:  */
    emitter.store_local(DV_sym_32748_0_address, s_b_6_0);
    /* execute.a64:1349 [F] s_b_6_2=sym_32742_3_parameter_inst.imms64 (const) */
    /* ???:4294967295 [F] s_b_6_3 = (u64)s_b_6_2 (const) */
    /* ???:4294967295 [D] s_b_6_4 = s_b_6_0+s_b_6_3 */
    auto s_b_6_4 = emitter.add(s_b_6_0, emitter.const_u64(((uint64_t)insn.imms64)));
    /* execute.a64:1349 [D] s_b_6_5: sym_32748_0_address = s_b_6_4, dominates: s_b_1_0 s_b_3_0  */
    emitter.store_local(DV_sym_32748_0_address, s_b_6_4);
    /* execute.a64:1351 [F] s_b_6_6=sym_32742_3_parameter_inst.size (const) */
    /* execute.a64:1351 [F] s_b_6_7 = (u32)s_b_6_6 (const) */
    /* execute.a64:1351 [F] s_b_6_8 = constant u32 3 (const) */
    /* execute.a64:1351 [F] s_b_6_9 = s_b_6_7==s_b_6_8 (const) */
    uint8_t s_b_6_9 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:2656 [F] s_b_6_10: If s_b_6_9: Jump b_12 else b_14 (const) */
    if (s_b_6_9) 
    {
      goto fixed_block_b_12;
    }
    else 
    {
      goto fixed_block_b_14;
    }
  }
  /* b_4,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2702 [D] s_b_7_0 = ReadReg 20 (u64) */
    auto s_b_7_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_7_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_7_1: sym_143102_1__R_s_b_3_0 = s_b_7_0, dominates: s_b_9_0  */
    emitter.store_local(DV_sym_143102_1__R_s_b_3_0, s_b_7_0);
    /* execute.a64:2702 [F] s_b_7_2: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_4,  */
  fixed_block_b_8: 
  {
    /* execute.a64:3012 [F] s_b_8_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_8_1 = __builtin_get_feature */
    uint32_t s_b_8_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_8_2 = (u8)s_b_8_1 (const) */
    /* execute.a64:2704 [F] s_b_8_3 = (u32)s_b_8_2 (const) */
    /* execute.a64:2704 [F] s_b_8_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_8_5 = s_b_8_3==s_b_8_4 (const) */
    uint8_t s_b_8_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_8_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_8_6: If s_b_8_5: Jump b_10 else b_11 (const) */
    if (s_b_8_5) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_11;
    }
  }
  /* b_7, b_10, b_11,  */
  fixed_block_b_9: 
  {
    /* execute.a64:2731 [D] s_b_9_0 = sym_143102_1__R_s_b_3_0 uint64_t */
    auto s_b_9_0 = emitter.load_local(DV_sym_143102_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_9_1: sym_143085_0_return_symbol = s_b_9_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_143085_0_return_symbol, s_b_9_0);
    /* ???:4294967295 [F] s_b_9_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_8,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2705 [D] s_b_10_0 = ReadReg 20 (u64) */
    auto s_b_10_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_10_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_10_1: sym_143102_1__R_s_b_3_0 = s_b_10_0, dominates: s_b_9_0  */
    emitter.store_local(DV_sym_143102_1__R_s_b_3_0, s_b_10_0);
    /* execute.a64:2705 [F] s_b_10_2: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_8,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2707 [D] s_b_11_0 = ReadReg 21 (u64) */
    auto s_b_11_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_11_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_11_1: sym_143102_1__R_s_b_3_0 = s_b_11_0, dominates: s_b_9_0  */
    emitter.store_local(DV_sym_143102_1__R_s_b_3_0, s_b_11_0);
    /* execute.a64:2707 [F] s_b_11_2: Jump b_9 (const) */
    goto fixed_block_b_9;
  }
  /* b_6,  */
  fixed_block_b_12: 
  {
    /* execute.a64:2657 [F] s_b_12_0=sym_32742_3_parameter_inst.rt (const) */
    /* execute.a64:2651 [F] s_b_12_1 = (u32)s_b_12_0 (const) */
    /* execute.a64:2651 [F] s_b_12_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_12_3 = s_b_12_1==s_b_12_2 (const) */
    uint8_t s_b_12_3 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_12_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_12_5 = ReadRegBank 0:s_b_12_0 (u64) */
    auto s_b_12_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_12_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_12_6: Select s_b_12_3 ? s_b_12_4 : s_b_12_5 */
    dbt::el::Value *s_b_12_6;
    s_b_12_6 = (s_b_12_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_12_5);
    /* ???:4294967295 [D] s_b_12_7: sym_143182_0_return_symbol = s_b_12_6, dominates: s_b_13_0  */
    emitter.store_local(DV_sym_143182_0_return_symbol, s_b_12_6);
    /* ???:4294967295 [F] s_b_12_8: Jump b_13 (const) */
    goto fixed_block_b_13;
  }
  /* b_12, b_14,  */
  fixed_block_b_13: 
  {
    /* ???:4294967295 [D] s_b_13_0 = sym_143182_0_return_symbol uint64_t */
    auto s_b_13_0 = emitter.load_local(DV_sym_143182_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:1351 [D] s_b_13_1: sym_32762_0_value = s_b_13_0, dominates: s_b_1_1 s_b_3_1  */
    emitter.store_local(DV_sym_32762_0_value, s_b_13_0);
    /* execute.a64:1353 [F] s_b_13_2=sym_32742_3_parameter_inst.size (const) */
    /* execute.a64:1353 [F] s_b_13_3 = (u32)s_b_13_2 (const) */
    /* execute.a64:1353 [F] s_b_13_4 = constant u32 3 (const) */
    /* execute.a64:1353 [F] s_b_13_5 = s_b_13_3==s_b_13_4 (const) */
    uint8_t s_b_13_5 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)3ULL));
    /* execute.a64:1353 [F] s_b_13_6: If s_b_13_5: Jump b_1 else b_3 (const) */
    if (s_b_13_5) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_6,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2659 [F] s_b_14_0=sym_32742_3_parameter_inst.rt (const) */
    /* execute.a64:2646 [F] s_b_14_1 = (u32)s_b_14_0 (const) */
    /* execute.a64:2646 [F] s_b_14_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_14_3 = s_b_14_1==s_b_14_2 (const) */
    uint8_t s_b_14_3 = ((uint8_t)(((uint32_t)insn.rt) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_14_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_14_5 = ReadRegBank 1:s_b_14_0 (u32) */
    auto s_b_14_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rt))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rt))),s_b_14_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_14_6: Select s_b_14_3 ? s_b_14_4 : s_b_14_5 */
    dbt::el::Value *s_b_14_6;
    s_b_14_6 = (s_b_14_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_14_5);
    /* execute.a64:2659 [D] s_b_14_7 = (u64)s_b_14_6 */
    auto s_b_14_7 = emitter.zx(s_b_14_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_14_8: sym_143182_0_return_symbol = s_b_14_7, dominates: s_b_13_0  */
    emitter.store_local(DV_sym_143182_0_return_symbol, s_b_14_7);
    /* ???:4294967295 [F] s_b_14_9: Jump b_13 (const) */
    goto fixed_block_b_13;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_sub_sreg(const aarch64_decode_a64_ADD_SUB_SREG&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_146015_3_parameter_value = emitter.alloc_local(emitter.context().types().u32(), false);
  uint64_t CV_sym_145735_0_return_symbol;
  auto DV_sym_145735_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_33141_0_op2 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_33159_0_result = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_33184_0_result = emitter.alloc_local(emitter.context().types().u32(), false);
  auto DV_sym_145878_0_return_symbol = emitter.alloc_local(emitter.context().types().s64(), false);
  auto DV_sym_145959_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_145823_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_145850_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_145799_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:1931 [F] s_b_0_0=sym_33134_3_parameter_inst.imm6 (const) */
    /* execute.a64:2572 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2572 [F] s_b_0_2 = constant u32 0 (const) */
    /* execute.a64:2572 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.imm6) == (uint32_t)0ULL));
    /* execute.a64:2572 [F] s_b_0_4: If s_b_0_3: Jump b_10 else b_13 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_10;
    }
    else 
    {
      goto fixed_block_b_13;
    }
  }
  /* b_19,  */
  fixed_block_b_1: 
  {
    /* execute.a64:1936 [F] s_b_1_0=sym_33134_3_parameter_inst.S (const) */
    /* execute.a64:1936 [F] s_b_1_1: If s_b_1_0: Jump b_4 else b_6 (const) */
    if (insn.S) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_6;
    }
  }
  /* b_5, b_8, b_32, b_33,  */
  fixed_block_b_2: 
  {
    /* ???:4294967295 [F] s_b_2_0: Return */
    goto fixed_done;
  }
  /* b_19,  */
  fixed_block_b_3: 
  {
    /* execute.a64:1946 [F] s_b_3_0=sym_33134_3_parameter_inst.S (const) */
    /* execute.a64:1946 [F] s_b_3_1: If s_b_3_0: Jump b_7 else b_9 (const) */
    if (insn.S) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_9;
    }
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:1937 [F] s_b_4_0=sym_33134_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_4_1 = (u32)s_b_4_0 (const) */
    /* execute.a64:2651 [F] s_b_4_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_4_3 = s_b_4_1==s_b_4_2 (const) */
    uint8_t s_b_4_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_4_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_4_5 = ReadRegBank 0:s_b_4_0 (u64) */
    auto s_b_4_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_4_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_4_6: Select s_b_4_3 ? s_b_4_4 : s_b_4_5 */
    dbt::el::Value *s_b_4_6;
    s_b_4_6 = (s_b_4_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_4_5);
    /* execute.a64:1937 [D] s_b_4_7 = sym_33141_0_op2 uint64_t */
    auto s_b_4_7 = emitter.load_local(DV_sym_33141_0_op2, emitter.context().types().u64());
    /* execute.a64:1937 [F] s_b_4_8 = constant u8 0 (const) */
    /* execute.a64:1937 [D] s_b_4_9 = __builtin_sbc64_flags */
    auto s_b_4_9 = emitter.sbcf(s_b_4_6, s_b_4_7, emitter.const_u8((uint8_t)0ULL));
    /* execute.a64:1937 [D] s_b_4_10: sym_33159_0_result = s_b_4_9, dominates: s_b_5_1  */
    emitter.store_local(DV_sym_33159_0_result, s_b_4_9);
    /* execute.a64:1937 [F] s_b_4_11: Jump b_5 (const) */
    goto fixed_block_b_5;
  }
  /* b_4, b_6,  */
  fixed_block_b_5: 
  {
    /* execute.a64:1942 [F] s_b_5_0=sym_33134_3_parameter_inst.rd (const) */
    /* execute.a64:1942 [D] s_b_5_1 = sym_33159_0_result uint64_t */
    auto s_b_5_1 = emitter.load_local(DV_sym_33159_0_result, emitter.context().types().u64());
    /* execute.a64:1942 [D] s_b_5_2: sym_145959_3_parameter_value = s_b_5_1, dominates: s_b_32_1  */
    emitter.store_local(DV_sym_145959_3_parameter_value, s_b_5_1);
    /* execute.a64:2682 [F] s_b_5_3 = (u32)s_b_5_0 (const) */
    /* execute.a64:2682 [F] s_b_5_4 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_5_5 = s_b_5_3==s_b_5_4 (const) */
    uint8_t s_b_5_5 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_5_6: If s_b_5_5: Jump b_2 else b_32 (const) */
    if (s_b_5_5) 
    {
      goto fixed_block_b_2;
    }
    else 
    {
      goto fixed_block_b_32;
    }
  }
  /* b_1,  */
  fixed_block_b_6: 
  {
    /* execute.a64:1939 [F] s_b_6_0=sym_33134_3_parameter_inst.rn (const) */
    /* execute.a64:2651 [F] s_b_6_1 = (u32)s_b_6_0 (const) */
    /* execute.a64:2651 [F] s_b_6_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_6_3 = s_b_6_1==s_b_6_2 (const) */
    uint8_t s_b_6_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_6_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_6_5 = ReadRegBank 0:s_b_6_0 (u64) */
    auto s_b_6_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_6_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_6_6: Select s_b_6_3 ? s_b_6_4 : s_b_6_5 */
    dbt::el::Value *s_b_6_6;
    s_b_6_6 = (s_b_6_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_6_5);
    /* execute.a64:1939 [D] s_b_6_7 = sym_33141_0_op2 uint64_t */
    auto s_b_6_7 = emitter.load_local(DV_sym_33141_0_op2, emitter.context().types().u64());
    /* execute.a64:1939 [D] s_b_6_8 = s_b_6_6-s_b_6_7 */
    auto s_b_6_8 = emitter.sub(s_b_6_6, s_b_6_7);
    /* execute.a64:1939 [D] s_b_6_9: sym_33159_0_result = s_b_6_8, dominates: s_b_5_1  */
    emitter.store_local(DV_sym_33159_0_result, s_b_6_8);
    /* execute.a64:1939 [F] s_b_6_10: Jump b_5 (const) */
    goto fixed_block_b_5;
  }
  /* b_3,  */
  fixed_block_b_7: 
  {
    /* execute.a64:1947 [F] s_b_7_0=sym_33134_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_7_1 = (u32)s_b_7_0 (const) */
    /* execute.a64:2646 [F] s_b_7_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_7_3 = s_b_7_1==s_b_7_2 (const) */
    uint8_t s_b_7_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_7_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_7_5 = ReadRegBank 1:s_b_7_0 (u32) */
    auto s_b_7_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_7_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_7_6: Select s_b_7_3 ? s_b_7_4 : s_b_7_5 */
    dbt::el::Value *s_b_7_6;
    s_b_7_6 = (s_b_7_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_7_5);
    /* execute.a64:1947 [D] s_b_7_7 = sym_33141_0_op2 uint64_t */
    auto s_b_7_7 = emitter.load_local(DV_sym_33141_0_op2, emitter.context().types().u64());
    /* execute.a64:1947 [D] s_b_7_8 = (u32)s_b_7_7 */
    auto s_b_7_8 = emitter.truncate(s_b_7_7, emitter.context().types().u32());
    /* execute.a64:1947 [F] s_b_7_9 = constant u8 0 (const) */
    /* execute.a64:1947 [D] s_b_7_10 = __builtin_sbc32_flags */
    auto s_b_7_10 = emitter.sbcf(s_b_7_6, s_b_7_8, emitter.const_u8((uint8_t)0ULL));
    /* execute.a64:1947 [D] s_b_7_11: sym_33184_0_result = s_b_7_10, dominates: s_b_8_1  */
    emitter.store_local(DV_sym_33184_0_result, s_b_7_10);
    /* execute.a64:1947 [F] s_b_7_12: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_7, b_9,  */
  fixed_block_b_8: 
  {
    /* execute.a64:1952 [F] s_b_8_0=sym_33134_3_parameter_inst.rd (const) */
    /* execute.a64:1952 [D] s_b_8_1 = sym_33184_0_result uint32_t */
    auto s_b_8_1 = emitter.load_local(DV_sym_33184_0_result, emitter.context().types().u32());
    /* execute.a64:1952 [D] s_b_8_2: sym_146015_3_parameter_value = s_b_8_1, dominates: s_b_33_1  */
    emitter.store_local(DV_sym_146015_3_parameter_value, s_b_8_1);
    /* execute.a64:2674 [F] s_b_8_3 = (u32)s_b_8_0 (const) */
    /* execute.a64:2674 [F] s_b_8_4 = constant u32 1f (const) */
    /* execute.a64:2674 [F] s_b_8_5 = s_b_8_3==s_b_8_4 (const) */
    uint8_t s_b_8_5 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2674 [F] s_b_8_6: If s_b_8_5: Jump b_2 else b_33 (const) */
    if (s_b_8_5) 
    {
      goto fixed_block_b_2;
    }
    else 
    {
      goto fixed_block_b_33;
    }
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.a64:1949 [F] s_b_9_0=sym_33134_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_9_1 = (u32)s_b_9_0 (const) */
    /* execute.a64:2646 [F] s_b_9_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_9_3 = s_b_9_1==s_b_9_2 (const) */
    uint8_t s_b_9_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_9_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_9_5 = ReadRegBank 1:s_b_9_0 (u32) */
    auto s_b_9_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_9_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_9_6: Select s_b_9_3 ? s_b_9_4 : s_b_9_5 */
    dbt::el::Value *s_b_9_6;
    s_b_9_6 = (s_b_9_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_9_5);
    /* execute.a64:1949 [D] s_b_9_7 = sym_33141_0_op2 uint64_t */
    auto s_b_9_7 = emitter.load_local(DV_sym_33141_0_op2, emitter.context().types().u64());
    /* execute.a64:1949 [D] s_b_9_8 = (u32)s_b_9_7 */
    auto s_b_9_8 = emitter.truncate(s_b_9_7, emitter.context().types().u32());
    /* execute.a64:1949 [D] s_b_9_9 = s_b_9_6-s_b_9_8 */
    auto s_b_9_9 = emitter.sub(s_b_9_6, s_b_9_8);
    /* execute.a64:1949 [D] s_b_9_10: sym_33184_0_result = s_b_9_9, dominates: s_b_8_1  */
    emitter.store_local(DV_sym_33184_0_result, s_b_9_9);
    /* execute.a64:1949 [F] s_b_9_11: Jump b_8 (const) */
    goto fixed_block_b_8;
  }
  /* b_0,  */
  fixed_block_b_10: 
  {
    /* execute.a64:2572 [F] s_b_10_0=sym_33134_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_10_1: If s_b_10_0: Jump b_11 else b_12 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_11;
    }
    else 
    {
      goto fixed_block_b_12;
    }
  }
  /* b_10,  */
  fixed_block_b_11: 
  {
    /* execute.a64:2657 [F] s_b_11_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_11_1 = (u32)s_b_11_0 (const) */
    /* execute.a64:2651 [F] s_b_11_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_11_3 = s_b_11_1==s_b_11_2 (const) */
    uint8_t s_b_11_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_11_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_11_5 = ReadRegBank 0:s_b_11_0 (u64) */
    auto s_b_11_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_11_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_11_6: Select s_b_11_3 ? s_b_11_4 : s_b_11_5 */
    dbt::el::Value *s_b_11_6;
    s_b_11_6 = (s_b_11_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_11_5);
    /* ???:4294967295 [D] s_b_11_7: sym_145799_0_return_symbol = s_b_11_6, dominates: s_b_28_0  */
    emitter.store_local(DV_sym_145799_0_return_symbol, s_b_11_6);
    /* ???:4294967295 [F] s_b_11_8: Jump b_28 (const) */
    goto fixed_block_b_28;
  }
  /* b_10,  */
  fixed_block_b_12: 
  {
    /* execute.a64:2659 [F] s_b_12_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_12_1 = (u32)s_b_12_0 (const) */
    /* execute.a64:2646 [F] s_b_12_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_12_3 = s_b_12_1==s_b_12_2 (const) */
    uint8_t s_b_12_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_12_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_12_5 = ReadRegBank 1:s_b_12_0 (u32) */
    auto s_b_12_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_12_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_12_6: Select s_b_12_3 ? s_b_12_4 : s_b_12_5 */
    dbt::el::Value *s_b_12_6;
    s_b_12_6 = (s_b_12_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_12_5);
    /* execute.a64:2659 [D] s_b_12_7 = (u64)s_b_12_6 */
    auto s_b_12_7 = emitter.zx(s_b_12_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_12_8: sym_145799_0_return_symbol = s_b_12_7, dominates: s_b_28_0  */
    emitter.store_local(DV_sym_145799_0_return_symbol, s_b_12_7);
    /* ???:4294967295 [F] s_b_12_9: Jump b_28 (const) */
    goto fixed_block_b_28;
  }
  /* b_0,  */
  fixed_block_b_13: 
  {
    /* execute.a64:2574 [F] s_b_13_0=sym_33134_3_parameter_inst.shift (const) */
    /* execute.a64:2575 [F] s_b_13_1 = constant s32 0 (const) */
    /* execute.a64:2579 [F] s_b_13_2 = constant s32 1 (const) */
    /* execute.a64:2583 [F] s_b_13_3 = constant s32 2 (const) */
    /* execute.a64:2587 [F] s_b_13_4 = constant s32 3 (const) */
    /* execute.a64:2574 [F] s_b_13_5: Switch s_b_13_0: < <todo> > def b_14 (const) -> b_18, b_17, b_16, b_15, b_14,  */
    switch (insn.shift) 
    {
    case (int32_t)1ULL:
      goto fixed_block_b_16;
      break;
    case (int32_t)0ULL:
      goto fixed_block_b_15;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_18;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_17;
      break;
    default:
      goto fixed_block_b_14;
    }
  }
  /* b_13,  */
  fixed_block_b_14: 
  {
    /* execute.a64:2597 [D] s_b_14_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.a64:2598 [F] s_b_14_1 = constant u64 0 (const) */
    /* ???:4294967295 [F] s_b_14_2: sym_145735_0_return_symbol = s_b_14_1 (const), dominates: s_b_19_0  */
    CV_sym_145735_0_return_symbol = (uint64_t)0ULL;
    emitter.store_local(DV_sym_145735_0_return_symbol, emitter.const_u64((uint64_t)0ULL));
    /* ???:4294967295 [F] s_b_14_3: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_13,  */
  fixed_block_b_15: 
  {
    /* execute.a64:2577 [F] s_b_15_0=sym_33134_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_15_1: If s_b_15_0: Jump b_20 else b_21 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_20;
    }
    else 
    {
      goto fixed_block_b_21;
    }
  }
  /* b_13,  */
  fixed_block_b_16: 
  {
    /* execute.a64:2581 [F] s_b_16_0=sym_33134_3_parameter_inst.sf (const) */
    /* execute.a64:2656 [F] s_b_16_1: If s_b_16_0: Jump b_22 else b_23 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_22;
    }
    else 
    {
      goto fixed_block_b_23;
    }
  }
  /* b_13,  */
  fixed_block_b_17: 
  {
    /* execute.a64:2585 [F] s_b_17_0=sym_33134_3_parameter_inst.sf (const) */
    /* execute.a64:2665 [F] s_b_17_1: If s_b_17_0: Jump b_24 else b_25 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_24;
    }
    else 
    {
      goto fixed_block_b_25;
    }
  }
  /* b_13,  */
  fixed_block_b_18: 
  {
    /* execute.a64:2589 [F] s_b_18_0=sym_33134_3_parameter_inst.sf (const) */
    /* execute.a64:2589 [F] s_b_18_1: If s_b_18_0: Jump b_26 else b_27 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_26;
    }
    else 
    {
      goto fixed_block_b_27;
    }
  }
  /* b_14, b_26, b_27, b_28, b_29, b_30, b_31,  */
  fixed_block_b_19: 
  {
    /* ???:4294967295 [D] s_b_19_0 = sym_145735_0_return_symbol uint64_t */
    auto s_b_19_0 = emitter.load_local(DV_sym_145735_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:1931 [D] s_b_19_1: sym_33141_0_op2 = s_b_19_0, dominates: s_b_4_7 s_b_6_7 s_b_7_7 s_b_9_7  */
    emitter.store_local(DV_sym_33141_0_op2, s_b_19_0);
    /* execute.a64:1933 [F] s_b_19_2=sym_33134_3_parameter_inst.sf (const) */
    /* execute.a64:1933 [F] s_b_19_3: If s_b_19_2: Jump b_1 else b_3 (const) */
    if (insn.sf) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_3;
    }
  }
  /* b_15,  */
  fixed_block_b_20: 
  {
    /* execute.a64:2657 [F] s_b_20_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_20_1 = (u32)s_b_20_0 (const) */
    /* execute.a64:2651 [F] s_b_20_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_20_3 = s_b_20_1==s_b_20_2 (const) */
    uint8_t s_b_20_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_20_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_20_5 = ReadRegBank 0:s_b_20_0 (u64) */
    auto s_b_20_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_20_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_20_6: Select s_b_20_3 ? s_b_20_4 : s_b_20_5 */
    dbt::el::Value *s_b_20_6;
    s_b_20_6 = (s_b_20_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_20_5);
    /* ???:4294967295 [D] s_b_20_7: sym_145823_0_return_symbol = s_b_20_6, dominates: s_b_29_0  */
    emitter.store_local(DV_sym_145823_0_return_symbol, s_b_20_6);
    /* ???:4294967295 [F] s_b_20_8: Jump b_29 (const) */
    goto fixed_block_b_29;
  }
  /* b_15,  */
  fixed_block_b_21: 
  {
    /* execute.a64:2659 [F] s_b_21_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_21_1 = (u32)s_b_21_0 (const) */
    /* execute.a64:2646 [F] s_b_21_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_21_3 = s_b_21_1==s_b_21_2 (const) */
    uint8_t s_b_21_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_21_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_21_5 = ReadRegBank 1:s_b_21_0 (u32) */
    auto s_b_21_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_21_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_21_6: Select s_b_21_3 ? s_b_21_4 : s_b_21_5 */
    dbt::el::Value *s_b_21_6;
    s_b_21_6 = (s_b_21_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_21_5);
    /* execute.a64:2659 [D] s_b_21_7 = (u64)s_b_21_6 */
    auto s_b_21_7 = emitter.zx(s_b_21_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_21_8: sym_145823_0_return_symbol = s_b_21_7, dominates: s_b_29_0  */
    emitter.store_local(DV_sym_145823_0_return_symbol, s_b_21_7);
    /* ???:4294967295 [F] s_b_21_9: Jump b_29 (const) */
    goto fixed_block_b_29;
  }
  /* b_16,  */
  fixed_block_b_22: 
  {
    /* execute.a64:2657 [F] s_b_22_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_22_1 = (u32)s_b_22_0 (const) */
    /* execute.a64:2651 [F] s_b_22_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_22_3 = s_b_22_1==s_b_22_2 (const) */
    uint8_t s_b_22_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_22_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_22_5 = ReadRegBank 0:s_b_22_0 (u64) */
    auto s_b_22_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_22_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_22_6: Select s_b_22_3 ? s_b_22_4 : s_b_22_5 */
    dbt::el::Value *s_b_22_6;
    s_b_22_6 = (s_b_22_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_22_5);
    /* ???:4294967295 [D] s_b_22_7: sym_145850_0_return_symbol = s_b_22_6, dominates: s_b_30_0  */
    emitter.store_local(DV_sym_145850_0_return_symbol, s_b_22_6);
    /* ???:4294967295 [F] s_b_22_8: Jump b_30 (const) */
    goto fixed_block_b_30;
  }
  /* b_16,  */
  fixed_block_b_23: 
  {
    /* execute.a64:2659 [F] s_b_23_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_23_1 = (u32)s_b_23_0 (const) */
    /* execute.a64:2646 [F] s_b_23_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_23_3 = s_b_23_1==s_b_23_2 (const) */
    uint8_t s_b_23_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_23_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_23_5 = ReadRegBank 1:s_b_23_0 (u32) */
    auto s_b_23_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_23_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_23_6: Select s_b_23_3 ? s_b_23_4 : s_b_23_5 */
    dbt::el::Value *s_b_23_6;
    s_b_23_6 = (s_b_23_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_23_5);
    /* execute.a64:2659 [D] s_b_23_7 = (u64)s_b_23_6 */
    auto s_b_23_7 = emitter.zx(s_b_23_6, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_23_8: sym_145850_0_return_symbol = s_b_23_7, dominates: s_b_30_0  */
    emitter.store_local(DV_sym_145850_0_return_symbol, s_b_23_7);
    /* ???:4294967295 [F] s_b_23_9: Jump b_30 (const) */
    goto fixed_block_b_30;
  }
  /* b_17,  */
  fixed_block_b_24: 
  {
    /* execute.a64:2666 [F] s_b_24_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2666 [F] s_b_24_1 = (u32)s_b_24_0 (const) */
    /* execute.a64:2666 [F] s_b_24_2 = constant u32 1f (const) */
    /* execute.a64:2666 [F] s_b_24_3 = s_b_24_1==s_b_24_2 (const) */
    uint8_t s_b_24_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2666 [F] s_b_24_4 = constant s64 0 (const) */
    /* execute.a64:2666 [D] s_b_24_5 = ReadRegBank 0:s_b_24_0 (u64) */
    auto s_b_24_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_24_5,emitter.const_u8(8));
    }
    /* execute.a64:2666 [D] s_b_24_6 = (s64)s_b_24_5 */
    auto s_b_24_6 = emitter.reinterpret(s_b_24_5, emitter.context().types().s64());
    /* execute.a64:2666 [D] s_b_24_7: Select s_b_24_3 ? s_b_24_4 : s_b_24_6 */
    dbt::el::Value *s_b_24_7;
    s_b_24_7 = (s_b_24_3) ? (emitter.const_s64((int64_t)0ULL)) : (s_b_24_6);
    /* ???:4294967295 [D] s_b_24_8: sym_145878_0_return_symbol = s_b_24_7, dominates: s_b_31_0  */
    emitter.store_local(DV_sym_145878_0_return_symbol, s_b_24_7);
    /* ???:4294967295 [F] s_b_24_9: Jump b_31 (const) */
    goto fixed_block_b_31;
  }
  /* b_17,  */
  fixed_block_b_25: 
  {
    /* execute.a64:2668 [F] s_b_25_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2668 [F] s_b_25_1 = (u32)s_b_25_0 (const) */
    /* execute.a64:2668 [F] s_b_25_2 = constant u32 1f (const) */
    /* execute.a64:2668 [F] s_b_25_3 = s_b_25_1==s_b_25_2 (const) */
    uint8_t s_b_25_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2668 [F] s_b_25_4 = constant s64 0 (const) */
    /* execute.a64:2668 [D] s_b_25_5 = ReadRegBank 1:s_b_25_0 (u32) */
    auto s_b_25_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_25_5,emitter.const_u8(4));
    }
    /* execute.a64:2668 [D] s_b_25_6 = (s32)s_b_25_5 */
    auto s_b_25_6 = emitter.reinterpret(s_b_25_5, emitter.context().types().s32());
    /* execute.a64:2668 [D] s_b_25_7 = (s64)s_b_25_6 */
    auto s_b_25_7 = emitter.sx(s_b_25_6, emitter.context().types().s64());
    /* execute.a64:2668 [D] s_b_25_8: Select s_b_25_3 ? s_b_25_4 : s_b_25_7 */
    dbt::el::Value *s_b_25_8;
    s_b_25_8 = (s_b_25_3) ? (emitter.const_s64((int64_t)0ULL)) : (s_b_25_7);
    /* ???:4294967295 [D] s_b_25_9: sym_145878_0_return_symbol = s_b_25_8, dominates: s_b_31_0  */
    emitter.store_local(DV_sym_145878_0_return_symbol, s_b_25_8);
    /* ???:4294967295 [F] s_b_25_10: Jump b_31 (const) */
    goto fixed_block_b_31;
  }
  /* b_18,  */
  fixed_block_b_26: 
  {
    /* execute.a64:2590 [F] s_b_26_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2651 [F] s_b_26_1 = (u32)s_b_26_0 (const) */
    /* execute.a64:2651 [F] s_b_26_2 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_26_3 = s_b_26_1==s_b_26_2 (const) */
    uint8_t s_b_26_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_26_4 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_26_5 = ReadRegBank 0:s_b_26_0 (u64) */
    auto s_b_26_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_26_5,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_26_6: Select s_b_26_3 ? s_b_26_4 : s_b_26_5 */
    dbt::el::Value *s_b_26_6;
    s_b_26_6 = (s_b_26_3) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_26_5);
    /* execute.a64:2590 [F] s_b_26_7=sym_33134_3_parameter_inst.imm6 (const) */
    /* execute.a64:2590 [F] s_b_26_8 = (u64)s_b_26_7 (const) */
    /* execute.a64:2590 [D] s_b_26_9 = s_b_26_6>>>s_b_26_8 */
    auto s_b_26_9 = emitter.ror(s_b_26_6, emitter.const_u64(((uint64_t)insn.imm6)));
    /* ???:4294967295 [D] s_b_26_10: sym_145735_0_return_symbol = s_b_26_9, dominates: s_b_19_0  */
    emitter.store_local(DV_sym_145735_0_return_symbol, s_b_26_9);
    /* ???:4294967295 [F] s_b_26_11: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_18,  */
  fixed_block_b_27: 
  {
    /* execute.a64:2592 [F] s_b_27_0=sym_33134_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_27_1 = (u32)s_b_27_0 (const) */
    /* execute.a64:2646 [F] s_b_27_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_27_3 = s_b_27_1==s_b_27_2 (const) */
    uint8_t s_b_27_3 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_27_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_27_5 = ReadRegBank 1:s_b_27_0 (u32) */
    auto s_b_27_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_27_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_27_6: Select s_b_27_3 ? s_b_27_4 : s_b_27_5 */
    dbt::el::Value *s_b_27_6;
    s_b_27_6 = (s_b_27_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_27_5);
    /* execute.a64:2659 [D] s_b_27_7 = (u64)s_b_27_6 */
    auto s_b_27_7 = emitter.zx(s_b_27_6, emitter.context().types().u64());
    /* execute.a64:2592 [D] s_b_27_8 = (u32)s_b_27_7 */
    auto s_b_27_8 = emitter.truncate(s_b_27_7, emitter.context().types().u32());
    /* execute.a64:2592 [F] s_b_27_9=sym_33134_3_parameter_inst.imm6 (const) */
    /* execute.a64:2592 [F] s_b_27_10 = (u32)s_b_27_9 (const) */
    /* execute.a64:2592 [D] s_b_27_11 = s_b_27_8>>>s_b_27_10 */
    auto s_b_27_11 = emitter.ror(s_b_27_8, emitter.const_u32(((uint32_t)insn.imm6)));
    /* execute.a64:2592 [D] s_b_27_12 = (u64)s_b_27_11 */
    auto s_b_27_12 = emitter.zx(s_b_27_11, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_27_13: sym_145735_0_return_symbol = s_b_27_12, dominates: s_b_19_0  */
    emitter.store_local(DV_sym_145735_0_return_symbol, s_b_27_12);
    /* ???:4294967295 [F] s_b_27_14: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_11, b_12,  */
  fixed_block_b_28: 
  {
    /* ???:4294967295 [D] s_b_28_0 = sym_145799_0_return_symbol uint64_t */
    auto s_b_28_0 = emitter.load_local(DV_sym_145799_0_return_symbol, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_28_1: sym_145735_0_return_symbol = s_b_28_0, dominates: s_b_19_0  */
    emitter.store_local(DV_sym_145735_0_return_symbol, s_b_28_0);
    /* ???:4294967295 [F] s_b_28_2: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_20, b_21,  */
  fixed_block_b_29: 
  {
    /* ???:4294967295 [D] s_b_29_0 = sym_145823_0_return_symbol uint64_t */
    auto s_b_29_0 = emitter.load_local(DV_sym_145823_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:2577 [F] s_b_29_1=sym_33134_3_parameter_inst.imm6 (const) */
    /* execute.a64:2577 [F] s_b_29_2 = (u64)s_b_29_1 (const) */
    /* execute.a64:2577 [D] s_b_29_3 = s_b_29_0<<s_b_29_2 */
    auto s_b_29_3 = emitter.shl(s_b_29_0, emitter.const_u64(((uint64_t)insn.imm6)));
    /* ???:4294967295 [D] s_b_29_4: sym_145735_0_return_symbol = s_b_29_3, dominates: s_b_19_0  */
    emitter.store_local(DV_sym_145735_0_return_symbol, s_b_29_3);
    /* ???:4294967295 [F] s_b_29_5: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_22, b_23,  */
  fixed_block_b_30: 
  {
    /* ???:4294967295 [D] s_b_30_0 = sym_145850_0_return_symbol uint64_t */
    auto s_b_30_0 = emitter.load_local(DV_sym_145850_0_return_symbol, emitter.context().types().u64());
    /* execute.a64:2581 [F] s_b_30_1=sym_33134_3_parameter_inst.imm6 (const) */
    /* execute.a64:2581 [F] s_b_30_2 = (u64)s_b_30_1 (const) */
    /* execute.a64:2581 [D] s_b_30_3 = s_b_30_0>>s_b_30_2 */
    auto s_b_30_3 = emitter.shr(s_b_30_0, emitter.const_u64(((uint64_t)insn.imm6)));
    /* ???:4294967295 [D] s_b_30_4: sym_145735_0_return_symbol = s_b_30_3, dominates: s_b_19_0  */
    emitter.store_local(DV_sym_145735_0_return_symbol, s_b_30_3);
    /* ???:4294967295 [F] s_b_30_5: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_24, b_25,  */
  fixed_block_b_31: 
  {
    /* ???:4294967295 [D] s_b_31_0 = sym_145878_0_return_symbol int64_t */
    auto s_b_31_0 = emitter.load_local(DV_sym_145878_0_return_symbol, emitter.context().types().s64());
    /* execute.a64:2585 [F] s_b_31_1=sym_33134_3_parameter_inst.imm6 (const) */
    /* execute.a64:2585 [D] s_b_31_2 = (u64)s_b_31_0 */
    auto s_b_31_2 = emitter.reinterpret(s_b_31_0, emitter.context().types().u64());
    /* execute.a64:2585 [F] s_b_31_3 = (u64)s_b_31_1 (const) */
    /* execute.a64:2585 [D] s_b_31_4 = s_b_31_2->>s_b_31_3 */
    auto s_b_31_4 = emitter.sar(s_b_31_2, emitter.const_u64(((uint64_t)insn.imm6)));
    /* execute.a64:2585 [D] s_b_31_5 = (u64)s_b_31_4 */
    auto s_b_31_5 = (dbt::el::Value *)s_b_31_4;
    /* ???:4294967295 [D] s_b_31_6: sym_145735_0_return_symbol = s_b_31_5, dominates: s_b_19_0  */
    emitter.store_local(DV_sym_145735_0_return_symbol, s_b_31_5);
    /* ???:4294967295 [F] s_b_31_7: Jump b_19 (const) */
    goto fixed_block_b_19;
  }
  /* b_5,  */
  fixed_block_b_32: 
  {
    /* execute.a64:2684 [F] s_b_32_0=sym_33134_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_32_1 = sym_145959_3_parameter_value uint64_t */
    auto s_b_32_1 = emitter.load_local(DV_sym_145959_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_32_2: WriteRegBank 0:s_b_32_0 = s_b_32_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_32_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_32_1);
    /* execute.a64:0 [F] s_b_32_3: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  /* b_8,  */
  fixed_block_b_33: 
  {
    /* execute.a64:2676 [F] s_b_33_0=sym_33134_3_parameter_inst.rd (const) */
    /* execute.a64:2676 [D] s_b_33_1 = sym_146015_3_parameter_value uint32_t */
    auto s_b_33_1 = emitter.load_local(DV_sym_146015_3_parameter_value, emitter.context().types().u32());
    /* execute.a64:2676 [D] s_b_33_2 = (u64)s_b_33_1 */
    auto s_b_33_2 = emitter.zx(s_b_33_1, emitter.context().types().u64());
    /* execute.a64:2676 [D] s_b_33_3: WriteRegBank 0:s_b_33_0 = s_b_33_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_33_2,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_33_2);
    /* execute.a64:0 [F] s_b_33_4: Jump b_2 (const) */
    goto fixed_block_b_2;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_uaddl(const aarch64_decode_a64_SIMD_THREE_DIFF&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:5526 [F] s_b_0_0=sym_37067_3_parameter_inst.tb (const) */
    /* execute.simd:5527 [F] s_b_0_1 = constant s32 0 (const) */
    /* execute.simd:5539 [F] s_b_0_2 = constant s32 1 (const) */
    /* execute.simd:5551 [F] s_b_0_3 = constant s32 2 (const) */
    /* execute.simd:5563 [F] s_b_0_4 = constant s32 3 (const) */
    /* execute.simd:5575 [F] s_b_0_5 = constant s32 4 (const) */
    /* execute.simd:5587 [F] s_b_0_6 = constant s32 5 (const) */
    /* execute.simd:5526 [F] s_b_0_7: Switch s_b_0_0: < <todo> > def b_8 (const) -> b_2, b_3, b_4, b_5, b_6, b_7, b_8,  */
    switch (insn.tb) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_5;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_7;
      break;
    default:
      goto fixed_block_b_8;
    }
  }
  /* b_2, b_3, b_4, b_5, b_6, b_7, b_8,  */
  fixed_block_b_1: 
  {
    /* ???:4294967295 [F] s_b_1_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.simd:5528 [F] s_b_2_0=sym_37067_3_parameter_inst.rn (const) */
    /* execute.simd:5528 [D] s_b_2_1 = ReadRegBank 15:s_b_2_0 (v8u8) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* execute.simd:5528 [D] s_b_2_2 = (v8u8)s_b_2_1 */
    auto s_b_2_2 = (dbt::el::Value *)s_b_2_1;
    /* execute.simd:5529 [F] s_b_2_3=sym_37067_3_parameter_inst.rm (const) */
    /* execute.simd:5529 [D] s_b_2_4 = ReadRegBank 15:s_b_2_3 (v8u8) */
    auto s_b_2_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_2_4,emitter.const_u8(8));
    }
    /* execute.simd:5529 [D] s_b_2_5 = (v8u8)s_b_2_4 */
    auto s_b_2_5 = (dbt::el::Value *)s_b_2_4;
    /* ???:4294967295 [F] s_b_2_6 = constant v8u16 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_2_7 = constant u8 0 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_7] */
    auto s_b_2_8 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:5533 [D] s_b_2_9 = (u16)s_b_2_8 */
    auto s_b_2_9 = emitter.zx(s_b_2_8, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_10 = constant u8 0 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_10] */
    auto s_b_2_11 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:5533 [D] s_b_2_12 = (u16)s_b_2_11 */
    auto s_b_2_12 = emitter.zx(s_b_2_11, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_13 = s_b_2_9+s_b_2_12 */
    auto s_b_2_13 = emitter.add(s_b_2_9, s_b_2_12);
    /* execute.simd:5533 [F] s_b_2_14 = constant s32 0 (const) */
    /* execute.simd:5533 [D] s_b_2_15 = s_b_2_6[s_b_2_14] <= s_b_2_13 */
    auto s_b_2_15 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_2_13);
    /* ???:4294967295 [F] s_b_2_16 = constant u8 1 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_16] */
    auto s_b_2_17 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:5533 [D] s_b_2_18 = (u16)s_b_2_17 */
    auto s_b_2_18 = emitter.zx(s_b_2_17, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_19 = constant u8 1 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_19] */
    auto s_b_2_20 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:5533 [D] s_b_2_21 = (u16)s_b_2_20 */
    auto s_b_2_21 = emitter.zx(s_b_2_20, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_22 = s_b_2_18+s_b_2_21 */
    auto s_b_2_22 = emitter.add(s_b_2_18, s_b_2_21);
    /* execute.simd:5533 [F] s_b_2_23 = constant s32 1 (const) */
    /* execute.simd:5533 [D] s_b_2_24 = s_b_2_15[s_b_2_23] <= s_b_2_22 */
    auto s_b_2_24 = emitter.vector_insert(s_b_2_15, emitter.const_s32((int32_t)1ULL), s_b_2_22);
    /* ???:4294967295 [F] s_b_2_25 = constant u8 2 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_25] */
    auto s_b_2_26 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:5533 [D] s_b_2_27 = (u16)s_b_2_26 */
    auto s_b_2_27 = emitter.zx(s_b_2_26, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_28 = constant u8 2 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_28] */
    auto s_b_2_29 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:5533 [D] s_b_2_30 = (u16)s_b_2_29 */
    auto s_b_2_30 = emitter.zx(s_b_2_29, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_31 = s_b_2_27+s_b_2_30 */
    auto s_b_2_31 = emitter.add(s_b_2_27, s_b_2_30);
    /* execute.simd:5533 [F] s_b_2_32 = constant s32 2 (const) */
    /* execute.simd:5533 [D] s_b_2_33 = s_b_2_24[s_b_2_32] <= s_b_2_31 */
    auto s_b_2_33 = emitter.vector_insert(s_b_2_24, emitter.const_s32((int32_t)2ULL), s_b_2_31);
    /* ???:4294967295 [F] s_b_2_34 = constant u8 3 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_34] */
    auto s_b_2_35 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:5533 [D] s_b_2_36 = (u16)s_b_2_35 */
    auto s_b_2_36 = emitter.zx(s_b_2_35, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_37 = constant u8 3 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_37] */
    auto s_b_2_38 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:5533 [D] s_b_2_39 = (u16)s_b_2_38 */
    auto s_b_2_39 = emitter.zx(s_b_2_38, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_40 = s_b_2_36+s_b_2_39 */
    auto s_b_2_40 = emitter.add(s_b_2_36, s_b_2_39);
    /* execute.simd:5533 [F] s_b_2_41 = constant s32 3 (const) */
    /* execute.simd:5533 [D] s_b_2_42 = s_b_2_33[s_b_2_41] <= s_b_2_40 */
    auto s_b_2_42 = emitter.vector_insert(s_b_2_33, emitter.const_s32((int32_t)3ULL), s_b_2_40);
    /* ???:4294967295 [F] s_b_2_43 = constant u8 4 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_43] */
    auto s_b_2_44 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:5533 [D] s_b_2_45 = (u16)s_b_2_44 */
    auto s_b_2_45 = emitter.zx(s_b_2_44, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_46 = constant u8 4 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_46] */
    auto s_b_2_47 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:5533 [D] s_b_2_48 = (u16)s_b_2_47 */
    auto s_b_2_48 = emitter.zx(s_b_2_47, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_49 = s_b_2_45+s_b_2_48 */
    auto s_b_2_49 = emitter.add(s_b_2_45, s_b_2_48);
    /* execute.simd:5533 [F] s_b_2_50 = constant s32 4 (const) */
    /* execute.simd:5533 [D] s_b_2_51 = s_b_2_42[s_b_2_50] <= s_b_2_49 */
    auto s_b_2_51 = emitter.vector_insert(s_b_2_42, emitter.const_s32((int32_t)4ULL), s_b_2_49);
    /* ???:4294967295 [F] s_b_2_52 = constant u8 5 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_52] */
    auto s_b_2_53 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:5533 [D] s_b_2_54 = (u16)s_b_2_53 */
    auto s_b_2_54 = emitter.zx(s_b_2_53, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_55 = constant u8 5 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_55] */
    auto s_b_2_56 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:5533 [D] s_b_2_57 = (u16)s_b_2_56 */
    auto s_b_2_57 = emitter.zx(s_b_2_56, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_58 = s_b_2_54+s_b_2_57 */
    auto s_b_2_58 = emitter.add(s_b_2_54, s_b_2_57);
    /* execute.simd:5533 [F] s_b_2_59 = constant s32 5 (const) */
    /* execute.simd:5533 [D] s_b_2_60 = s_b_2_51[s_b_2_59] <= s_b_2_58 */
    auto s_b_2_60 = emitter.vector_insert(s_b_2_51, emitter.const_s32((int32_t)5ULL), s_b_2_58);
    /* ???:4294967295 [F] s_b_2_61 = constant u8 6 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_61] */
    auto s_b_2_62 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:5533 [D] s_b_2_63 = (u16)s_b_2_62 */
    auto s_b_2_63 = emitter.zx(s_b_2_62, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_64 = constant u8 6 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_64] */
    auto s_b_2_65 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:5533 [D] s_b_2_66 = (u16)s_b_2_65 */
    auto s_b_2_66 = emitter.zx(s_b_2_65, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_67 = s_b_2_63+s_b_2_66 */
    auto s_b_2_67 = emitter.add(s_b_2_63, s_b_2_66);
    /* execute.simd:5533 [F] s_b_2_68 = constant s32 6 (const) */
    /* execute.simd:5533 [D] s_b_2_69 = s_b_2_60[s_b_2_68] <= s_b_2_67 */
    auto s_b_2_69 = emitter.vector_insert(s_b_2_60, emitter.const_s32((int32_t)6ULL), s_b_2_67);
    /* ???:4294967295 [F] s_b_2_70 = constant u8 7 (const) */
    /* execute.simd:5533 [D] s_b_2_2[s_b_2_70] */
    auto s_b_2_71 = emitter.vector_extract(s_b_2_2, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:5533 [D] s_b_2_72 = (u16)s_b_2_71 */
    auto s_b_2_72 = emitter.zx(s_b_2_71, emitter.context().types().u16());
    /* ???:4294967295 [F] s_b_2_73 = constant u8 7 (const) */
    /* execute.simd:5533 [D] s_b_2_5[s_b_2_73] */
    auto s_b_2_74 = emitter.vector_extract(s_b_2_5, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:5533 [D] s_b_2_75 = (u16)s_b_2_74 */
    auto s_b_2_75 = emitter.zx(s_b_2_74, emitter.context().types().u16());
    /* execute.simd:5533 [D] s_b_2_76 = s_b_2_72+s_b_2_75 */
    auto s_b_2_76 = emitter.add(s_b_2_72, s_b_2_75);
    /* execute.simd:5533 [F] s_b_2_77 = constant s32 7 (const) */
    /* execute.simd:5533 [D] s_b_2_78 = s_b_2_69[s_b_2_77] <= s_b_2_76 */
    auto s_b_2_78 = emitter.vector_insert(s_b_2_69, emitter.const_s32((int32_t)7ULL), s_b_2_76);
    /* execute.simd:5536 [F] s_b_2_79=sym_37067_3_parameter_inst.rd (const) */
    /* execute.simd:5536 [D] s_b_2_80: WriteRegBank 18:s_b_2_79 = s_b_2_78 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_2_78,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_2_78);
    /* execute.simd:0 [F] s_b_2_81: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:5540 [F] s_b_3_0=sym_37067_3_parameter_inst.rn (const) */
    /* execute.simd:5540 [D] s_b_3_1 = ReadRegBank 16:s_b_3_0 (v16u8) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_3_1,emitter.const_u8(16));
    }
    /* execute.simd:5540 [D] s_b_3_2 = (v16u8)s_b_3_1 */
    auto s_b_3_2 = (dbt::el::Value *)s_b_3_1;
    /* execute.simd:5541 [F] s_b_3_3=sym_37067_3_parameter_inst.rm (const) */
    /* execute.simd:5541 [D] s_b_3_4 = ReadRegBank 16:s_b_3_3 (v16u8) */
    auto s_b_3_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_3_4,emitter.const_u8(16));
    }
    /* execute.simd:5541 [D] s_b_3_5 = (v16u8)s_b_3_4 */
    auto s_b_3_5 = (dbt::el::Value *)s_b_3_4;
    /* ???:4294967295 [F] s_b_3_6 = constant v8u16 
    {
    }
    (const) */
    /* execute.simd:5545 [F] s_b_3_7 = constant u32 8 (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_7] */
    auto s_b_3_8 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)8ULL));
    /* execute.simd:5545 [D] s_b_3_9 = (u16)s_b_3_8 */
    auto s_b_3_9 = emitter.zx(s_b_3_8, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_10 = constant u32 8 (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_10] */
    auto s_b_3_11 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)8ULL));
    /* execute.simd:5545 [D] s_b_3_12 = (u16)s_b_3_11 */
    auto s_b_3_12 = emitter.zx(s_b_3_11, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_13 = s_b_3_9+s_b_3_12 */
    auto s_b_3_13 = emitter.add(s_b_3_9, s_b_3_12);
    /* execute.simd:5545 [F] s_b_3_14 = constant s32 0 (const) */
    /* execute.simd:5545 [D] s_b_3_15 = s_b_3_6[s_b_3_14] <= s_b_3_13 */
    auto s_b_3_15 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_3_13);
    /* execute.simd:5545 [F] s_b_3_16 = constant u32 9 (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_16] */
    auto s_b_3_17 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)9ULL));
    /* execute.simd:5545 [D] s_b_3_18 = (u16)s_b_3_17 */
    auto s_b_3_18 = emitter.zx(s_b_3_17, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_19 = constant u32 9 (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_19] */
    auto s_b_3_20 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)9ULL));
    /* execute.simd:5545 [D] s_b_3_21 = (u16)s_b_3_20 */
    auto s_b_3_21 = emitter.zx(s_b_3_20, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_22 = s_b_3_18+s_b_3_21 */
    auto s_b_3_22 = emitter.add(s_b_3_18, s_b_3_21);
    /* execute.simd:5545 [F] s_b_3_23 = constant s32 1 (const) */
    /* execute.simd:5545 [D] s_b_3_24 = s_b_3_15[s_b_3_23] <= s_b_3_22 */
    auto s_b_3_24 = emitter.vector_insert(s_b_3_15, emitter.const_s32((int32_t)1ULL), s_b_3_22);
    /* execute.simd:5545 [F] s_b_3_25 = constant u32 a (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_25] */
    auto s_b_3_26 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)10ULL));
    /* execute.simd:5545 [D] s_b_3_27 = (u16)s_b_3_26 */
    auto s_b_3_27 = emitter.zx(s_b_3_26, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_28 = constant u32 a (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_28] */
    auto s_b_3_29 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)10ULL));
    /* execute.simd:5545 [D] s_b_3_30 = (u16)s_b_3_29 */
    auto s_b_3_30 = emitter.zx(s_b_3_29, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_31 = s_b_3_27+s_b_3_30 */
    auto s_b_3_31 = emitter.add(s_b_3_27, s_b_3_30);
    /* execute.simd:5545 [F] s_b_3_32 = constant s32 2 (const) */
    /* execute.simd:5545 [D] s_b_3_33 = s_b_3_24[s_b_3_32] <= s_b_3_31 */
    auto s_b_3_33 = emitter.vector_insert(s_b_3_24, emitter.const_s32((int32_t)2ULL), s_b_3_31);
    /* execute.simd:5545 [F] s_b_3_34 = constant u32 b (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_34] */
    auto s_b_3_35 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)11ULL));
    /* execute.simd:5545 [D] s_b_3_36 = (u16)s_b_3_35 */
    auto s_b_3_36 = emitter.zx(s_b_3_35, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_37 = constant u32 b (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_37] */
    auto s_b_3_38 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)11ULL));
    /* execute.simd:5545 [D] s_b_3_39 = (u16)s_b_3_38 */
    auto s_b_3_39 = emitter.zx(s_b_3_38, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_40 = s_b_3_36+s_b_3_39 */
    auto s_b_3_40 = emitter.add(s_b_3_36, s_b_3_39);
    /* execute.simd:5545 [F] s_b_3_41 = constant s32 3 (const) */
    /* execute.simd:5545 [D] s_b_3_42 = s_b_3_33[s_b_3_41] <= s_b_3_40 */
    auto s_b_3_42 = emitter.vector_insert(s_b_3_33, emitter.const_s32((int32_t)3ULL), s_b_3_40);
    /* execute.simd:5545 [F] s_b_3_43 = constant u32 c (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_43] */
    auto s_b_3_44 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)12ULL));
    /* execute.simd:5545 [D] s_b_3_45 = (u16)s_b_3_44 */
    auto s_b_3_45 = emitter.zx(s_b_3_44, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_46 = constant u32 c (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_46] */
    auto s_b_3_47 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)12ULL));
    /* execute.simd:5545 [D] s_b_3_48 = (u16)s_b_3_47 */
    auto s_b_3_48 = emitter.zx(s_b_3_47, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_49 = s_b_3_45+s_b_3_48 */
    auto s_b_3_49 = emitter.add(s_b_3_45, s_b_3_48);
    /* execute.simd:5545 [F] s_b_3_50 = constant s32 4 (const) */
    /* execute.simd:5545 [D] s_b_3_51 = s_b_3_42[s_b_3_50] <= s_b_3_49 */
    auto s_b_3_51 = emitter.vector_insert(s_b_3_42, emitter.const_s32((int32_t)4ULL), s_b_3_49);
    /* execute.simd:5545 [F] s_b_3_52 = constant u32 d (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_52] */
    auto s_b_3_53 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)13ULL));
    /* execute.simd:5545 [D] s_b_3_54 = (u16)s_b_3_53 */
    auto s_b_3_54 = emitter.zx(s_b_3_53, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_55 = constant u32 d (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_55] */
    auto s_b_3_56 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)13ULL));
    /* execute.simd:5545 [D] s_b_3_57 = (u16)s_b_3_56 */
    auto s_b_3_57 = emitter.zx(s_b_3_56, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_58 = s_b_3_54+s_b_3_57 */
    auto s_b_3_58 = emitter.add(s_b_3_54, s_b_3_57);
    /* execute.simd:5545 [F] s_b_3_59 = constant s32 5 (const) */
    /* execute.simd:5545 [D] s_b_3_60 = s_b_3_51[s_b_3_59] <= s_b_3_58 */
    auto s_b_3_60 = emitter.vector_insert(s_b_3_51, emitter.const_s32((int32_t)5ULL), s_b_3_58);
    /* execute.simd:5545 [F] s_b_3_61 = constant u32 e (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_61] */
    auto s_b_3_62 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)14ULL));
    /* execute.simd:5545 [D] s_b_3_63 = (u16)s_b_3_62 */
    auto s_b_3_63 = emitter.zx(s_b_3_62, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_64 = constant u32 e (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_64] */
    auto s_b_3_65 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)14ULL));
    /* execute.simd:5545 [D] s_b_3_66 = (u16)s_b_3_65 */
    auto s_b_3_66 = emitter.zx(s_b_3_65, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_67 = s_b_3_63+s_b_3_66 */
    auto s_b_3_67 = emitter.add(s_b_3_63, s_b_3_66);
    /* execute.simd:5545 [F] s_b_3_68 = constant s32 6 (const) */
    /* execute.simd:5545 [D] s_b_3_69 = s_b_3_60[s_b_3_68] <= s_b_3_67 */
    auto s_b_3_69 = emitter.vector_insert(s_b_3_60, emitter.const_s32((int32_t)6ULL), s_b_3_67);
    /* execute.simd:5545 [F] s_b_3_70 = constant u32 f (const) */
    /* execute.simd:5545 [D] s_b_3_2[s_b_3_70] */
    auto s_b_3_71 = emitter.vector_extract(s_b_3_2, emitter.const_u32((uint32_t)15ULL));
    /* execute.simd:5545 [D] s_b_3_72 = (u16)s_b_3_71 */
    auto s_b_3_72 = emitter.zx(s_b_3_71, emitter.context().types().u16());
    /* execute.simd:5545 [F] s_b_3_73 = constant u32 f (const) */
    /* execute.simd:5545 [D] s_b_3_5[s_b_3_73] */
    auto s_b_3_74 = emitter.vector_extract(s_b_3_5, emitter.const_u32((uint32_t)15ULL));
    /* execute.simd:5545 [D] s_b_3_75 = (u16)s_b_3_74 */
    auto s_b_3_75 = emitter.zx(s_b_3_74, emitter.context().types().u16());
    /* execute.simd:5545 [D] s_b_3_76 = s_b_3_72+s_b_3_75 */
    auto s_b_3_76 = emitter.add(s_b_3_72, s_b_3_75);
    /* execute.simd:5545 [F] s_b_3_77 = constant s32 7 (const) */
    /* execute.simd:5545 [D] s_b_3_78 = s_b_3_69[s_b_3_77] <= s_b_3_76 */
    auto s_b_3_78 = emitter.vector_insert(s_b_3_69, emitter.const_s32((int32_t)7ULL), s_b_3_76);
    /* execute.simd:5548 [F] s_b_3_79=sym_37067_3_parameter_inst.rd (const) */
    /* execute.simd:5548 [D] s_b_3_80: WriteRegBank 18:s_b_3_79 = s_b_3_78 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_78,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_78);
    /* execute.simd:0 [F] s_b_3_81: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.simd:5552 [F] s_b_4_0=sym_37067_3_parameter_inst.rn (const) */
    /* execute.simd:5552 [D] s_b_4_1 = ReadRegBank 17:s_b_4_0 (v4u16) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_1,emitter.const_u8(8));
    }
    /* execute.simd:5552 [D] s_b_4_2 = (v4u16)s_b_4_1 */
    auto s_b_4_2 = (dbt::el::Value *)s_b_4_1;
    /* execute.simd:5553 [F] s_b_4_3=sym_37067_3_parameter_inst.rm (const) */
    /* execute.simd:5553 [D] s_b_4_4 = ReadRegBank 17:s_b_4_3 (v4u16) */
    auto s_b_4_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_4_4,emitter.const_u8(8));
    }
    /* execute.simd:5553 [D] s_b_4_5 = (v4u16)s_b_4_4 */
    auto s_b_4_5 = (dbt::el::Value *)s_b_4_4;
    /* ???:4294967295 [F] s_b_4_6 = constant v4u32 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_4_7 = constant u8 0 (const) */
    /* execute.simd:5557 [D] s_b_4_2[s_b_4_7] */
    auto s_b_4_8 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:5557 [D] s_b_4_9 = (u32)s_b_4_8 */
    auto s_b_4_9 = emitter.zx(s_b_4_8, emitter.context().types().u32());
    /* ???:4294967295 [F] s_b_4_10 = constant u8 0 (const) */
    /* execute.simd:5557 [D] s_b_4_5[s_b_4_10] */
    auto s_b_4_11 = emitter.vector_extract(s_b_4_5, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:5557 [D] s_b_4_12 = (u32)s_b_4_11 */
    auto s_b_4_12 = emitter.zx(s_b_4_11, emitter.context().types().u32());
    /* execute.simd:5557 [D] s_b_4_13 = s_b_4_9+s_b_4_12 */
    auto s_b_4_13 = emitter.add(s_b_4_9, s_b_4_12);
    /* execute.simd:5557 [F] s_b_4_14 = constant s32 0 (const) */
    /* execute.simd:5557 [D] s_b_4_15 = s_b_4_6[s_b_4_14] <= s_b_4_13 */
    auto s_b_4_15 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_4_13);
    /* ???:4294967295 [F] s_b_4_16 = constant u8 1 (const) */
    /* execute.simd:5557 [D] s_b_4_2[s_b_4_16] */
    auto s_b_4_17 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:5557 [D] s_b_4_18 = (u32)s_b_4_17 */
    auto s_b_4_18 = emitter.zx(s_b_4_17, emitter.context().types().u32());
    /* ???:4294967295 [F] s_b_4_19 = constant u8 1 (const) */
    /* execute.simd:5557 [D] s_b_4_5[s_b_4_19] */
    auto s_b_4_20 = emitter.vector_extract(s_b_4_5, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:5557 [D] s_b_4_21 = (u32)s_b_4_20 */
    auto s_b_4_21 = emitter.zx(s_b_4_20, emitter.context().types().u32());
    /* execute.simd:5557 [D] s_b_4_22 = s_b_4_18+s_b_4_21 */
    auto s_b_4_22 = emitter.add(s_b_4_18, s_b_4_21);
    /* execute.simd:5557 [F] s_b_4_23 = constant s32 1 (const) */
    /* execute.simd:5557 [D] s_b_4_24 = s_b_4_15[s_b_4_23] <= s_b_4_22 */
    auto s_b_4_24 = emitter.vector_insert(s_b_4_15, emitter.const_s32((int32_t)1ULL), s_b_4_22);
    /* ???:4294967295 [F] s_b_4_25 = constant u8 2 (const) */
    /* execute.simd:5557 [D] s_b_4_2[s_b_4_25] */
    auto s_b_4_26 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:5557 [D] s_b_4_27 = (u32)s_b_4_26 */
    auto s_b_4_27 = emitter.zx(s_b_4_26, emitter.context().types().u32());
    /* ???:4294967295 [F] s_b_4_28 = constant u8 2 (const) */
    /* execute.simd:5557 [D] s_b_4_5[s_b_4_28] */
    auto s_b_4_29 = emitter.vector_extract(s_b_4_5, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:5557 [D] s_b_4_30 = (u32)s_b_4_29 */
    auto s_b_4_30 = emitter.zx(s_b_4_29, emitter.context().types().u32());
    /* execute.simd:5557 [D] s_b_4_31 = s_b_4_27+s_b_4_30 */
    auto s_b_4_31 = emitter.add(s_b_4_27, s_b_4_30);
    /* execute.simd:5557 [F] s_b_4_32 = constant s32 2 (const) */
    /* execute.simd:5557 [D] s_b_4_33 = s_b_4_24[s_b_4_32] <= s_b_4_31 */
    auto s_b_4_33 = emitter.vector_insert(s_b_4_24, emitter.const_s32((int32_t)2ULL), s_b_4_31);
    /* ???:4294967295 [F] s_b_4_34 = constant u8 3 (const) */
    /* execute.simd:5557 [D] s_b_4_2[s_b_4_34] */
    auto s_b_4_35 = emitter.vector_extract(s_b_4_2, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:5557 [D] s_b_4_36 = (u32)s_b_4_35 */
    auto s_b_4_36 = emitter.zx(s_b_4_35, emitter.context().types().u32());
    /* ???:4294967295 [F] s_b_4_37 = constant u8 3 (const) */
    /* execute.simd:5557 [D] s_b_4_5[s_b_4_37] */
    auto s_b_4_38 = emitter.vector_extract(s_b_4_5, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:5557 [D] s_b_4_39 = (u32)s_b_4_38 */
    auto s_b_4_39 = emitter.zx(s_b_4_38, emitter.context().types().u32());
    /* execute.simd:5557 [D] s_b_4_40 = s_b_4_36+s_b_4_39 */
    auto s_b_4_40 = emitter.add(s_b_4_36, s_b_4_39);
    /* execute.simd:5557 [F] s_b_4_41 = constant s32 3 (const) */
    /* execute.simd:5557 [D] s_b_4_42 = s_b_4_33[s_b_4_41] <= s_b_4_40 */
    auto s_b_4_42 = emitter.vector_insert(s_b_4_33, emitter.const_s32((int32_t)3ULL), s_b_4_40);
    /* execute.simd:5560 [F] s_b_4_43=sym_37067_3_parameter_inst.rd (const) */
    /* execute.simd:5560 [D] s_b_4_44: WriteRegBank 20:s_b_4_43 = s_b_4_42 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_42,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_42);
    /* execute.simd:0 [F] s_b_4_45: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_5: 
  {
    /* execute.simd:5564 [F] s_b_5_0=sym_37067_3_parameter_inst.rn (const) */
    /* execute.simd:5564 [D] s_b_5_1 = ReadRegBank 18:s_b_5_0 (v8u16) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_5_1,emitter.const_u8(16));
    }
    /* execute.simd:5564 [D] s_b_5_2 = (v8u16)s_b_5_1 */
    auto s_b_5_2 = (dbt::el::Value *)s_b_5_1;
    /* execute.simd:5565 [F] s_b_5_3=sym_37067_3_parameter_inst.rm (const) */
    /* execute.simd:5565 [D] s_b_5_4 = ReadRegBank 18:s_b_5_3 (v8u16) */
    auto s_b_5_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_5_4,emitter.const_u8(16));
    }
    /* execute.simd:5565 [D] s_b_5_5 = (v8u16)s_b_5_4 */
    auto s_b_5_5 = (dbt::el::Value *)s_b_5_4;
    /* ???:4294967295 [F] s_b_5_6 = constant v4u32 
    {
    }
    (const) */
    /* execute.simd:5569 [F] s_b_5_7 = constant u32 4 (const) */
    /* execute.simd:5569 [D] s_b_5_2[s_b_5_7] */
    auto s_b_5_8 = emitter.vector_extract(s_b_5_2, emitter.const_u32((uint32_t)4ULL));
    /* execute.simd:5569 [D] s_b_5_9 = (u32)s_b_5_8 */
    auto s_b_5_9 = emitter.zx(s_b_5_8, emitter.context().types().u32());
    /* execute.simd:5569 [F] s_b_5_10 = constant u32 4 (const) */
    /* execute.simd:5569 [D] s_b_5_5[s_b_5_10] */
    auto s_b_5_11 = emitter.vector_extract(s_b_5_5, emitter.const_u32((uint32_t)4ULL));
    /* execute.simd:5569 [D] s_b_5_12 = (u32)s_b_5_11 */
    auto s_b_5_12 = emitter.zx(s_b_5_11, emitter.context().types().u32());
    /* execute.simd:5569 [D] s_b_5_13 = s_b_5_9+s_b_5_12 */
    auto s_b_5_13 = emitter.add(s_b_5_9, s_b_5_12);
    /* execute.simd:5569 [F] s_b_5_14 = constant s32 0 (const) */
    /* execute.simd:5569 [D] s_b_5_15 = s_b_5_6[s_b_5_14] <= s_b_5_13 */
    auto s_b_5_15 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_5_13);
    /* execute.simd:5569 [F] s_b_5_16 = constant u32 5 (const) */
    /* execute.simd:5569 [D] s_b_5_2[s_b_5_16] */
    auto s_b_5_17 = emitter.vector_extract(s_b_5_2, emitter.const_u32((uint32_t)5ULL));
    /* execute.simd:5569 [D] s_b_5_18 = (u32)s_b_5_17 */
    auto s_b_5_18 = emitter.zx(s_b_5_17, emitter.context().types().u32());
    /* execute.simd:5569 [F] s_b_5_19 = constant u32 5 (const) */
    /* execute.simd:5569 [D] s_b_5_5[s_b_5_19] */
    auto s_b_5_20 = emitter.vector_extract(s_b_5_5, emitter.const_u32((uint32_t)5ULL));
    /* execute.simd:5569 [D] s_b_5_21 = (u32)s_b_5_20 */
    auto s_b_5_21 = emitter.zx(s_b_5_20, emitter.context().types().u32());
    /* execute.simd:5569 [D] s_b_5_22 = s_b_5_18+s_b_5_21 */
    auto s_b_5_22 = emitter.add(s_b_5_18, s_b_5_21);
    /* execute.simd:5569 [F] s_b_5_23 = constant s32 1 (const) */
    /* execute.simd:5569 [D] s_b_5_24 = s_b_5_15[s_b_5_23] <= s_b_5_22 */
    auto s_b_5_24 = emitter.vector_insert(s_b_5_15, emitter.const_s32((int32_t)1ULL), s_b_5_22);
    /* execute.simd:5569 [F] s_b_5_25 = constant u32 6 (const) */
    /* execute.simd:5569 [D] s_b_5_2[s_b_5_25] */
    auto s_b_5_26 = emitter.vector_extract(s_b_5_2, emitter.const_u32((uint32_t)6ULL));
    /* execute.simd:5569 [D] s_b_5_27 = (u32)s_b_5_26 */
    auto s_b_5_27 = emitter.zx(s_b_5_26, emitter.context().types().u32());
    /* execute.simd:5569 [F] s_b_5_28 = constant u32 6 (const) */
    /* execute.simd:5569 [D] s_b_5_5[s_b_5_28] */
    auto s_b_5_29 = emitter.vector_extract(s_b_5_5, emitter.const_u32((uint32_t)6ULL));
    /* execute.simd:5569 [D] s_b_5_30 = (u32)s_b_5_29 */
    auto s_b_5_30 = emitter.zx(s_b_5_29, emitter.context().types().u32());
    /* execute.simd:5569 [D] s_b_5_31 = s_b_5_27+s_b_5_30 */
    auto s_b_5_31 = emitter.add(s_b_5_27, s_b_5_30);
    /* execute.simd:5569 [F] s_b_5_32 = constant s32 2 (const) */
    /* execute.simd:5569 [D] s_b_5_33 = s_b_5_24[s_b_5_32] <= s_b_5_31 */
    auto s_b_5_33 = emitter.vector_insert(s_b_5_24, emitter.const_s32((int32_t)2ULL), s_b_5_31);
    /* execute.simd:5569 [F] s_b_5_34 = constant u32 7 (const) */
    /* execute.simd:5569 [D] s_b_5_2[s_b_5_34] */
    auto s_b_5_35 = emitter.vector_extract(s_b_5_2, emitter.const_u32((uint32_t)7ULL));
    /* execute.simd:5569 [D] s_b_5_36 = (u32)s_b_5_35 */
    auto s_b_5_36 = emitter.zx(s_b_5_35, emitter.context().types().u32());
    /* execute.simd:5569 [F] s_b_5_37 = constant u32 7 (const) */
    /* execute.simd:5569 [D] s_b_5_5[s_b_5_37] */
    auto s_b_5_38 = emitter.vector_extract(s_b_5_5, emitter.const_u32((uint32_t)7ULL));
    /* execute.simd:5569 [D] s_b_5_39 = (u32)s_b_5_38 */
    auto s_b_5_39 = emitter.zx(s_b_5_38, emitter.context().types().u32());
    /* execute.simd:5569 [D] s_b_5_40 = s_b_5_36+s_b_5_39 */
    auto s_b_5_40 = emitter.add(s_b_5_36, s_b_5_39);
    /* execute.simd:5569 [F] s_b_5_41 = constant s32 3 (const) */
    /* execute.simd:5569 [D] s_b_5_42 = s_b_5_33[s_b_5_41] <= s_b_5_40 */
    auto s_b_5_42 = emitter.vector_insert(s_b_5_33, emitter.const_s32((int32_t)3ULL), s_b_5_40);
    /* execute.simd:5572 [F] s_b_5_43=sym_37067_3_parameter_inst.rd (const) */
    /* execute.simd:5572 [D] s_b_5_44: WriteRegBank 20:s_b_5_43 = s_b_5_42 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_42,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_42);
    /* execute.simd:0 [F] s_b_5_45: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_6: 
  {
    /* execute.simd:5576 [F] s_b_6_0=sym_37067_3_parameter_inst.rn (const) */
    /* execute.simd:5576 [D] s_b_6_1 = ReadRegBank 19:s_b_6_0 (v2u32) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* execute.simd:5576 [D] s_b_6_2 = (v2u32)s_b_6_1 */
    auto s_b_6_2 = (dbt::el::Value *)s_b_6_1;
    /* execute.simd:5577 [F] s_b_6_3=sym_37067_3_parameter_inst.rm (const) */
    /* execute.simd:5577 [D] s_b_6_4 = ReadRegBank 19:s_b_6_3 (v2u32) */
    auto s_b_6_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_6_4,emitter.const_u8(8));
    }
    /* execute.simd:5577 [D] s_b_6_5 = (v2u32)s_b_6_4 */
    auto s_b_6_5 = (dbt::el::Value *)s_b_6_4;
    /* ???:4294967295 [F] s_b_6_6 = constant v2u64 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_6_7 = constant u8 0 (const) */
    /* execute.simd:5581 [D] s_b_6_2[s_b_6_7] */
    auto s_b_6_8 = emitter.vector_extract(s_b_6_2, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:5581 [D] s_b_6_9 = (u64)s_b_6_8 */
    auto s_b_6_9 = emitter.zx(s_b_6_8, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_6_10 = constant u8 0 (const) */
    /* execute.simd:5581 [D] s_b_6_5[s_b_6_10] */
    auto s_b_6_11 = emitter.vector_extract(s_b_6_5, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:5581 [D] s_b_6_12 = (u64)s_b_6_11 */
    auto s_b_6_12 = emitter.zx(s_b_6_11, emitter.context().types().u64());
    /* execute.simd:5581 [D] s_b_6_13 = s_b_6_9+s_b_6_12 */
    auto s_b_6_13 = emitter.add(s_b_6_9, s_b_6_12);
    /* execute.simd:5581 [F] s_b_6_14 = constant s32 0 (const) */
    /* execute.simd:5581 [D] s_b_6_15 = s_b_6_6[s_b_6_14] <= s_b_6_13 */
    auto s_b_6_15 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint64_t, 2>(0)[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_6_13);
    /* ???:4294967295 [F] s_b_6_16 = constant u8 1 (const) */
    /* execute.simd:5581 [D] s_b_6_2[s_b_6_16] */
    auto s_b_6_17 = emitter.vector_extract(s_b_6_2, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:5581 [D] s_b_6_18 = (u64)s_b_6_17 */
    auto s_b_6_18 = emitter.zx(s_b_6_17, emitter.context().types().u64());
    /* ???:4294967295 [F] s_b_6_19 = constant u8 1 (const) */
    /* execute.simd:5581 [D] s_b_6_5[s_b_6_19] */
    auto s_b_6_20 = emitter.vector_extract(s_b_6_5, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:5581 [D] s_b_6_21 = (u64)s_b_6_20 */
    auto s_b_6_21 = emitter.zx(s_b_6_20, emitter.context().types().u64());
    /* execute.simd:5581 [D] s_b_6_22 = s_b_6_18+s_b_6_21 */
    auto s_b_6_22 = emitter.add(s_b_6_18, s_b_6_21);
    /* execute.simd:5581 [F] s_b_6_23 = constant s32 1 (const) */
    /* execute.simd:5581 [D] s_b_6_24 = s_b_6_15[s_b_6_23] <= s_b_6_22 */
    auto s_b_6_24 = emitter.vector_insert(s_b_6_15, emitter.const_s32((int32_t)1ULL), s_b_6_22);
    /* execute.simd:5584 [F] s_b_6_25=sym_37067_3_parameter_inst.rd (const) */
    /* execute.simd:5584 [D] s_b_6_26: WriteRegBank 21:s_b_6_25 = s_b_6_24 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_24,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_24);
    /* execute.simd:0 [F] s_b_6_27: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_7: 
  {
    /* execute.simd:5588 [F] s_b_7_0=sym_37067_3_parameter_inst.rn (const) */
    /* execute.simd:5588 [D] s_b_7_1 = ReadRegBank 20:s_b_7_0 (v4u32) */
    auto s_b_7_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_7_1,emitter.const_u8(16));
    }
    /* execute.simd:5588 [D] s_b_7_2 = (v4u32)s_b_7_1 */
    auto s_b_7_2 = (dbt::el::Value *)s_b_7_1;
    /* execute.simd:5589 [F] s_b_7_3=sym_37067_3_parameter_inst.rm (const) */
    /* execute.simd:5589 [D] s_b_7_4 = ReadRegBank 20:s_b_7_3 (v4u32) */
    auto s_b_7_4 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rm))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rm))),s_b_7_4,emitter.const_u8(16));
    }
    /* execute.simd:5589 [D] s_b_7_5 = (v4u32)s_b_7_4 */
    auto s_b_7_5 = (dbt::el::Value *)s_b_7_4;
    /* ???:4294967295 [F] s_b_7_6 = constant v2u64 
    {
    }
    (const) */
    /* execute.simd:5593 [F] s_b_7_7 = constant u32 2 (const) */
    /* execute.simd:5593 [D] s_b_7_2[s_b_7_7] */
    auto s_b_7_8 = emitter.vector_extract(s_b_7_2, emitter.const_u32((uint32_t)2ULL));
    /* execute.simd:5593 [D] s_b_7_9 = (u64)s_b_7_8 */
    auto s_b_7_9 = emitter.zx(s_b_7_8, emitter.context().types().u64());
    /* execute.simd:5593 [F] s_b_7_10 = constant u32 2 (const) */
    /* execute.simd:5593 [D] s_b_7_5[s_b_7_10] */
    auto s_b_7_11 = emitter.vector_extract(s_b_7_5, emitter.const_u32((uint32_t)2ULL));
    /* execute.simd:5593 [D] s_b_7_12 = (u64)s_b_7_11 */
    auto s_b_7_12 = emitter.zx(s_b_7_11, emitter.context().types().u64());
    /* execute.simd:5593 [D] s_b_7_13 = s_b_7_9+s_b_7_12 */
    auto s_b_7_13 = emitter.add(s_b_7_9, s_b_7_12);
    /* execute.simd:5593 [F] s_b_7_14 = constant s32 0 (const) */
    /* execute.simd:5593 [D] s_b_7_15 = s_b_7_6[s_b_7_14] <= s_b_7_13 */
    auto s_b_7_15 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint64_t, 2>(0)[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_7_13);
    /* execute.simd:5593 [F] s_b_7_16 = constant u32 3 (const) */
    /* execute.simd:5593 [D] s_b_7_2[s_b_7_16] */
    auto s_b_7_17 = emitter.vector_extract(s_b_7_2, emitter.const_u32((uint32_t)3ULL));
    /* execute.simd:5593 [D] s_b_7_18 = (u64)s_b_7_17 */
    auto s_b_7_18 = emitter.zx(s_b_7_17, emitter.context().types().u64());
    /* execute.simd:5593 [F] s_b_7_19 = constant u32 3 (const) */
    /* execute.simd:5593 [D] s_b_7_5[s_b_7_19] */
    auto s_b_7_20 = emitter.vector_extract(s_b_7_5, emitter.const_u32((uint32_t)3ULL));
    /* execute.simd:5593 [D] s_b_7_21 = (u64)s_b_7_20 */
    auto s_b_7_21 = emitter.zx(s_b_7_20, emitter.context().types().u64());
    /* execute.simd:5593 [D] s_b_7_22 = s_b_7_18+s_b_7_21 */
    auto s_b_7_22 = emitter.add(s_b_7_18, s_b_7_21);
    /* execute.simd:5593 [F] s_b_7_23 = constant s32 1 (const) */
    /* execute.simd:5593 [D] s_b_7_24 = s_b_7_15[s_b_7_23] <= s_b_7_22 */
    auto s_b_7_24 = emitter.vector_insert(s_b_7_15, emitter.const_s32((int32_t)1ULL), s_b_7_22);
    /* execute.simd:5596 [F] s_b_7_25=sym_37067_3_parameter_inst.rd (const) */
    /* execute.simd:5596 [D] s_b_7_26: WriteRegBank 21:s_b_7_25 = s_b_7_24 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_24,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_24);
    /* execute.simd:0 [F] s_b_7_27: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_8: 
  {
    /* execute.simd:5600 [D] s_b_8_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:5526 [F] s_b_8_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_umaddl(const aarch64_decode_a64_DP_3S&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_149151_3_parameter_value = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.a64:2404 [F] s_b_0_0=sym_39873_3_parameter_inst.rn (const) */
    /* execute.a64:2646 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2646 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_0_4 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_0_5 = ReadRegBank 1:s_b_0_0 (u32) */
    auto s_b_0_5 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_0_5,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_0_6: Select s_b_0_3 ? s_b_0_4 : s_b_0_5 */
    dbt::el::Value *s_b_0_6;
    s_b_0_6 = (s_b_0_3) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_0_5);
    /* execute.a64:2659 [D] s_b_0_7 = (u64)s_b_0_6 */
    auto s_b_0_7 = emitter.zx(s_b_0_6, emitter.context().types().u64());
    /* execute.a64:2405 [F] s_b_0_8=sym_39873_3_parameter_inst.rm (const) */
    /* execute.a64:2646 [F] s_b_0_9 = (u32)s_b_0_8 (const) */
    /* execute.a64:2646 [F] s_b_0_10 = constant u32 1f (const) */
    /* execute.a64:2646 [F] s_b_0_11 = s_b_0_9==s_b_0_10 (const) */
    uint8_t s_b_0_11 = ((uint8_t)(((uint32_t)insn.rm) == (uint32_t)31ULL));
    /* execute.a64:2646 [F] s_b_0_12 = constant u32 0 (const) */
    /* execute.a64:2646 [D] s_b_0_13 = ReadRegBank 1:s_b_0_8 (u32) */
    auto s_b_0_13 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rm))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rm))),s_b_0_13,emitter.const_u8(4));
    }
    /* execute.a64:2646 [D] s_b_0_14: Select s_b_0_11 ? s_b_0_12 : s_b_0_13 */
    dbt::el::Value *s_b_0_14;
    s_b_0_14 = (s_b_0_11) ? (emitter.const_u32((uint32_t)0ULL)) : (s_b_0_13);
    /* execute.a64:2659 [D] s_b_0_15 = (u64)s_b_0_14 */
    auto s_b_0_15 = emitter.zx(s_b_0_14, emitter.context().types().u64());
    /* execute.a64:2406 [F] s_b_0_16=sym_39873_3_parameter_inst.ra (const) */
    /* execute.a64:2651 [F] s_b_0_17 = (u32)s_b_0_16 (const) */
    /* execute.a64:2651 [F] s_b_0_18 = constant u32 1f (const) */
    /* execute.a64:2651 [F] s_b_0_19 = s_b_0_17==s_b_0_18 (const) */
    uint8_t s_b_0_19 = ((uint8_t)(((uint32_t)insn.ra) == (uint32_t)31ULL));
    /* execute.a64:2651 [F] s_b_0_20 = constant u64 0 (const) */
    /* execute.a64:2651 [D] s_b_0_21 = ReadRegBank 0:s_b_0_16 (u64) */
    auto s_b_0_21 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.ra))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.ra))),s_b_0_21,emitter.const_u8(8));
    }
    /* execute.a64:2651 [D] s_b_0_22: Select s_b_0_19 ? s_b_0_20 : s_b_0_21 */
    dbt::el::Value *s_b_0_22;
    s_b_0_22 = (s_b_0_19) ? (emitter.const_u64((uint64_t)0ULL)) : (s_b_0_21);
    /* execute.a64:2408 [D] s_b_0_23 = (u64)s_b_0_22 */
    auto s_b_0_23 = (dbt::el::Value *)s_b_0_22;
    /* execute.a64:2408 [D] s_b_0_24 = (u64)s_b_0_7 */
    auto s_b_0_24 = (dbt::el::Value *)s_b_0_7;
    /* execute.a64:2408 [D] s_b_0_25 = (u64)s_b_0_15 */
    auto s_b_0_25 = (dbt::el::Value *)s_b_0_15;
    /* execute.a64:2408 [D] s_b_0_26 = s_b_0_24*s_b_0_25 */
    auto s_b_0_26 = emitter.mul(s_b_0_24, s_b_0_25);
    /* execute.a64:2408 [D] s_b_0_27 = s_b_0_23+s_b_0_26 */
    auto s_b_0_27 = emitter.add(s_b_0_23, s_b_0_26);
    /* execute.a64:2691 [F] s_b_0_28=sym_39873_3_parameter_inst.rd (const) */
    /* execute.a64:2691 [D] s_b_0_29: sym_149151_3_parameter_value = s_b_0_27, dominates: s_b_2_1  */
    emitter.store_local(DV_sym_149151_3_parameter_value, s_b_0_27);
    /* execute.a64:2682 [F] s_b_0_30 = (u32)s_b_0_28 (const) */
    /* execute.a64:2682 [F] s_b_0_31 = constant u32 1f (const) */
    /* execute.a64:2682 [F] s_b_0_32 = s_b_0_30==s_b_0_31 (const) */
    uint8_t s_b_0_32 = ((uint8_t)(((uint32_t)insn.rd) == (uint32_t)31ULL));
    /* execute.a64:2682 [F] s_b_0_33: If s_b_0_32: Jump b_1 else b_2 (const) */
    if (s_b_0_32) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_0, b_2,  */
  fixed_block_b_1: 
  {
    /* ???:4294967295 [F] s_b_1_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2684 [F] s_b_2_0=sym_39873_3_parameter_inst.rd (const) */
    /* execute.a64:2684 [D] s_b_2_1 = sym_149151_3_parameter_value uint64_t */
    auto s_b_2_1 = emitter.load_local(DV_sym_149151_3_parameter_value, emitter.context().types().u64());
    /* execute.a64:2684 [D] s_b_2_2: WriteRegBank 0:s_b_2_0 = s_b_2_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_2_1,emitter.const_u8(8));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rd))),s_b_2_1);
    /* execute.a64:0 [F] s_b_2_3: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_ushll(const aarch64_decode_a64_SIMD_SHIFT_IMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:3354 [F] s_b_0_0=sym_43273_3_parameter_inst.arrangement (const) */
    /* execute.simd:3355 [F] s_b_0_1 = constant s32 0 (const) */
    /* execute.simd:3366 [F] s_b_0_2 = constant s32 1 (const) */
    /* execute.simd:3377 [F] s_b_0_3 = constant s32 2 (const) */
    /* execute.simd:3388 [F] s_b_0_4 = constant s32 3 (const) */
    /* execute.simd:3399 [F] s_b_0_5 = constant s32 4 (const) */
    /* execute.simd:3410 [F] s_b_0_6 = constant s32 5 (const) */
    /* execute.simd:3354 [F] s_b_0_7: Switch s_b_0_0: < <todo> > def b_8 (const) -> b_2, b_3, b_4, b_5, b_6, b_7, b_8,  */
    switch (insn.arrangement) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_2;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_3;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_4;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_5;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_6;
      break;
    case (int32_t)5ULL:
      goto fixed_block_b_7;
      break;
    default:
      goto fixed_block_b_8;
    }
  }
  /* b_2, b_3, b_4, b_5, b_6, b_7, b_8,  */
  fixed_block_b_1: 
  {
    /* ???:4294967295 [F] s_b_1_0: Return */
    goto fixed_done;
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.simd:3356 [F] s_b_2_0=sym_43273_3_parameter_inst.rn (const) */
    /* execute.simd:3356 [D] s_b_2_1 = ReadRegBank 15:s_b_2_0 (v8u8) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [F] s_b_2_2 = constant v8u16 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_2_3 = constant u8 0 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_3] */
    auto s_b_2_4 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3360 [D] s_b_2_5 = (u16)s_b_2_4 */
    auto s_b_2_5 = emitter.zx(s_b_2_4, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_6=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_7 = (u16)s_b_2_6 (const) */
    /* execute.simd:3360 [D] s_b_2_8 = s_b_2_5<<s_b_2_7 */
    auto s_b_2_8 = emitter.shl(s_b_2_5, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_9 = constant s32 0 (const) */
    /* execute.simd:3360 [D] s_b_2_10 = s_b_2_2[s_b_2_9] <= s_b_2_8 */
    auto s_b_2_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_2_8);
    /* ???:4294967295 [F] s_b_2_11 = constant u8 1 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_11] */
    auto s_b_2_12 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3360 [D] s_b_2_13 = (u16)s_b_2_12 */
    auto s_b_2_13 = emitter.zx(s_b_2_12, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_14=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_15 = (u16)s_b_2_14 (const) */
    /* execute.simd:3360 [D] s_b_2_16 = s_b_2_13<<s_b_2_15 */
    auto s_b_2_16 = emitter.shl(s_b_2_13, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_17 = constant s32 1 (const) */
    /* execute.simd:3360 [D] s_b_2_18 = s_b_2_10[s_b_2_17] <= s_b_2_16 */
    auto s_b_2_18 = emitter.vector_insert(s_b_2_10, emitter.const_s32((int32_t)1ULL), s_b_2_16);
    /* ???:4294967295 [F] s_b_2_19 = constant u8 2 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_19] */
    auto s_b_2_20 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3360 [D] s_b_2_21 = (u16)s_b_2_20 */
    auto s_b_2_21 = emitter.zx(s_b_2_20, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_22=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_23 = (u16)s_b_2_22 (const) */
    /* execute.simd:3360 [D] s_b_2_24 = s_b_2_21<<s_b_2_23 */
    auto s_b_2_24 = emitter.shl(s_b_2_21, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_25 = constant s32 2 (const) */
    /* execute.simd:3360 [D] s_b_2_26 = s_b_2_18[s_b_2_25] <= s_b_2_24 */
    auto s_b_2_26 = emitter.vector_insert(s_b_2_18, emitter.const_s32((int32_t)2ULL), s_b_2_24);
    /* ???:4294967295 [F] s_b_2_27 = constant u8 3 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_27] */
    auto s_b_2_28 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3360 [D] s_b_2_29 = (u16)s_b_2_28 */
    auto s_b_2_29 = emitter.zx(s_b_2_28, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_30=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_31 = (u16)s_b_2_30 (const) */
    /* execute.simd:3360 [D] s_b_2_32 = s_b_2_29<<s_b_2_31 */
    auto s_b_2_32 = emitter.shl(s_b_2_29, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_33 = constant s32 3 (const) */
    /* execute.simd:3360 [D] s_b_2_34 = s_b_2_26[s_b_2_33] <= s_b_2_32 */
    auto s_b_2_34 = emitter.vector_insert(s_b_2_26, emitter.const_s32((int32_t)3ULL), s_b_2_32);
    /* ???:4294967295 [F] s_b_2_35 = constant u8 4 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_35] */
    auto s_b_2_36 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:3360 [D] s_b_2_37 = (u16)s_b_2_36 */
    auto s_b_2_37 = emitter.zx(s_b_2_36, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_38=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_39 = (u16)s_b_2_38 (const) */
    /* execute.simd:3360 [D] s_b_2_40 = s_b_2_37<<s_b_2_39 */
    auto s_b_2_40 = emitter.shl(s_b_2_37, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_41 = constant s32 4 (const) */
    /* execute.simd:3360 [D] s_b_2_42 = s_b_2_34[s_b_2_41] <= s_b_2_40 */
    auto s_b_2_42 = emitter.vector_insert(s_b_2_34, emitter.const_s32((int32_t)4ULL), s_b_2_40);
    /* ???:4294967295 [F] s_b_2_43 = constant u8 5 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_43] */
    auto s_b_2_44 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:3360 [D] s_b_2_45 = (u16)s_b_2_44 */
    auto s_b_2_45 = emitter.zx(s_b_2_44, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_46=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_47 = (u16)s_b_2_46 (const) */
    /* execute.simd:3360 [D] s_b_2_48 = s_b_2_45<<s_b_2_47 */
    auto s_b_2_48 = emitter.shl(s_b_2_45, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_49 = constant s32 5 (const) */
    /* execute.simd:3360 [D] s_b_2_50 = s_b_2_42[s_b_2_49] <= s_b_2_48 */
    auto s_b_2_50 = emitter.vector_insert(s_b_2_42, emitter.const_s32((int32_t)5ULL), s_b_2_48);
    /* ???:4294967295 [F] s_b_2_51 = constant u8 6 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_51] */
    auto s_b_2_52 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:3360 [D] s_b_2_53 = (u16)s_b_2_52 */
    auto s_b_2_53 = emitter.zx(s_b_2_52, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_54=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_55 = (u16)s_b_2_54 (const) */
    /* execute.simd:3360 [D] s_b_2_56 = s_b_2_53<<s_b_2_55 */
    auto s_b_2_56 = emitter.shl(s_b_2_53, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_57 = constant s32 6 (const) */
    /* execute.simd:3360 [D] s_b_2_58 = s_b_2_50[s_b_2_57] <= s_b_2_56 */
    auto s_b_2_58 = emitter.vector_insert(s_b_2_50, emitter.const_s32((int32_t)6ULL), s_b_2_56);
    /* ???:4294967295 [F] s_b_2_59 = constant u8 7 (const) */
    /* execute.simd:3360 [D] s_b_2_1[s_b_2_59] */
    auto s_b_2_60 = emitter.vector_extract(s_b_2_1, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:3360 [D] s_b_2_61 = (u16)s_b_2_60 */
    auto s_b_2_61 = emitter.zx(s_b_2_60, emitter.context().types().u16());
    /* execute.simd:3360 [F] s_b_2_62=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3360 [F] s_b_2_63 = (u16)s_b_2_62 (const) */
    /* execute.simd:3360 [D] s_b_2_64 = s_b_2_61<<s_b_2_63 */
    auto s_b_2_64 = emitter.shl(s_b_2_61, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3360 [F] s_b_2_65 = constant s32 7 (const) */
    /* execute.simd:3360 [D] s_b_2_66 = s_b_2_58[s_b_2_65] <= s_b_2_64 */
    auto s_b_2_66 = emitter.vector_insert(s_b_2_58, emitter.const_s32((int32_t)7ULL), s_b_2_64);
    /* execute.simd:3363 [F] s_b_2_67=sym_43273_3_parameter_inst.rd (const) */
    /* execute.simd:3363 [D] s_b_2_68: WriteRegBank 18:s_b_2_67 = s_b_2_66 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_2_66,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_2_66);
    /* execute.simd:0 [F] s_b_2_69: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_3: 
  {
    /* execute.simd:3367 [F] s_b_3_0=sym_43273_3_parameter_inst.rn (const) */
    /* execute.simd:3367 [D] s_b_3_1 = ReadRegBank 16:s_b_3_0 (v16u8) */
    auto s_b_3_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v16u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_3_1,emitter.const_u8(16));
    }
    /* ???:4294967295 [F] s_b_3_2 = constant v8u16 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_3_3 = constant u8 8 (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_3] */
    auto s_b_3_4 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)8ULL));
    /* execute.simd:3371 [D] s_b_3_5 = (u16)s_b_3_4 */
    auto s_b_3_5 = emitter.zx(s_b_3_4, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_6=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_7 = (u16)s_b_3_6 (const) */
    /* execute.simd:3371 [D] s_b_3_8 = s_b_3_5<<s_b_3_7 */
    auto s_b_3_8 = emitter.shl(s_b_3_5, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_9 = constant s32 0 (const) */
    /* execute.simd:3371 [D] s_b_3_10 = s_b_3_2[s_b_3_9] <= s_b_3_8 */
    auto s_b_3_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint16_t, 8>(0)[0], emitter.context().types().v8u16()), emitter.const_s32((int32_t)0ULL), s_b_3_8);
    /* ???:4294967295 [F] s_b_3_11 = constant u8 9 (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_11] */
    auto s_b_3_12 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)9ULL));
    /* execute.simd:3371 [D] s_b_3_13 = (u16)s_b_3_12 */
    auto s_b_3_13 = emitter.zx(s_b_3_12, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_14=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_15 = (u16)s_b_3_14 (const) */
    /* execute.simd:3371 [D] s_b_3_16 = s_b_3_13<<s_b_3_15 */
    auto s_b_3_16 = emitter.shl(s_b_3_13, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_17 = constant s32 1 (const) */
    /* execute.simd:3371 [D] s_b_3_18 = s_b_3_10[s_b_3_17] <= s_b_3_16 */
    auto s_b_3_18 = emitter.vector_insert(s_b_3_10, emitter.const_s32((int32_t)1ULL), s_b_3_16);
    /* ???:4294967295 [F] s_b_3_19 = constant u8 a (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_19] */
    auto s_b_3_20 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)10ULL));
    /* execute.simd:3371 [D] s_b_3_21 = (u16)s_b_3_20 */
    auto s_b_3_21 = emitter.zx(s_b_3_20, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_22=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_23 = (u16)s_b_3_22 (const) */
    /* execute.simd:3371 [D] s_b_3_24 = s_b_3_21<<s_b_3_23 */
    auto s_b_3_24 = emitter.shl(s_b_3_21, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_25 = constant s32 2 (const) */
    /* execute.simd:3371 [D] s_b_3_26 = s_b_3_18[s_b_3_25] <= s_b_3_24 */
    auto s_b_3_26 = emitter.vector_insert(s_b_3_18, emitter.const_s32((int32_t)2ULL), s_b_3_24);
    /* ???:4294967295 [F] s_b_3_27 = constant u8 b (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_27] */
    auto s_b_3_28 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)11ULL));
    /* execute.simd:3371 [D] s_b_3_29 = (u16)s_b_3_28 */
    auto s_b_3_29 = emitter.zx(s_b_3_28, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_30=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_31 = (u16)s_b_3_30 (const) */
    /* execute.simd:3371 [D] s_b_3_32 = s_b_3_29<<s_b_3_31 */
    auto s_b_3_32 = emitter.shl(s_b_3_29, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_33 = constant s32 3 (const) */
    /* execute.simd:3371 [D] s_b_3_34 = s_b_3_26[s_b_3_33] <= s_b_3_32 */
    auto s_b_3_34 = emitter.vector_insert(s_b_3_26, emitter.const_s32((int32_t)3ULL), s_b_3_32);
    /* ???:4294967295 [F] s_b_3_35 = constant u8 c (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_35] */
    auto s_b_3_36 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)12ULL));
    /* execute.simd:3371 [D] s_b_3_37 = (u16)s_b_3_36 */
    auto s_b_3_37 = emitter.zx(s_b_3_36, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_38=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_39 = (u16)s_b_3_38 (const) */
    /* execute.simd:3371 [D] s_b_3_40 = s_b_3_37<<s_b_3_39 */
    auto s_b_3_40 = emitter.shl(s_b_3_37, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_41 = constant s32 4 (const) */
    /* execute.simd:3371 [D] s_b_3_42 = s_b_3_34[s_b_3_41] <= s_b_3_40 */
    auto s_b_3_42 = emitter.vector_insert(s_b_3_34, emitter.const_s32((int32_t)4ULL), s_b_3_40);
    /* ???:4294967295 [F] s_b_3_43 = constant u8 d (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_43] */
    auto s_b_3_44 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)13ULL));
    /* execute.simd:3371 [D] s_b_3_45 = (u16)s_b_3_44 */
    auto s_b_3_45 = emitter.zx(s_b_3_44, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_46=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_47 = (u16)s_b_3_46 (const) */
    /* execute.simd:3371 [D] s_b_3_48 = s_b_3_45<<s_b_3_47 */
    auto s_b_3_48 = emitter.shl(s_b_3_45, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_49 = constant s32 5 (const) */
    /* execute.simd:3371 [D] s_b_3_50 = s_b_3_42[s_b_3_49] <= s_b_3_48 */
    auto s_b_3_50 = emitter.vector_insert(s_b_3_42, emitter.const_s32((int32_t)5ULL), s_b_3_48);
    /* ???:4294967295 [F] s_b_3_51 = constant u8 e (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_51] */
    auto s_b_3_52 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)14ULL));
    /* execute.simd:3371 [D] s_b_3_53 = (u16)s_b_3_52 */
    auto s_b_3_53 = emitter.zx(s_b_3_52, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_54=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_55 = (u16)s_b_3_54 (const) */
    /* execute.simd:3371 [D] s_b_3_56 = s_b_3_53<<s_b_3_55 */
    auto s_b_3_56 = emitter.shl(s_b_3_53, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_57 = constant s32 6 (const) */
    /* execute.simd:3371 [D] s_b_3_58 = s_b_3_50[s_b_3_57] <= s_b_3_56 */
    auto s_b_3_58 = emitter.vector_insert(s_b_3_50, emitter.const_s32((int32_t)6ULL), s_b_3_56);
    /* ???:4294967295 [F] s_b_3_59 = constant u8 f (const) */
    /* execute.simd:3371 [D] s_b_3_1[s_b_3_59] */
    auto s_b_3_60 = emitter.vector_extract(s_b_3_1, emitter.const_u8((uint8_t)15ULL));
    /* execute.simd:3371 [D] s_b_3_61 = (u16)s_b_3_60 */
    auto s_b_3_61 = emitter.zx(s_b_3_60, emitter.context().types().u16());
    /* execute.simd:3371 [F] s_b_3_62=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3371 [F] s_b_3_63 = (u16)s_b_3_62 (const) */
    /* execute.simd:3371 [D] s_b_3_64 = s_b_3_61<<s_b_3_63 */
    auto s_b_3_64 = emitter.shl(s_b_3_61, emitter.const_u16(((uint16_t)insn.shift_amount)));
    /* execute.simd:3371 [F] s_b_3_65 = constant s32 7 (const) */
    /* execute.simd:3371 [D] s_b_3_66 = s_b_3_58[s_b_3_65] <= s_b_3_64 */
    auto s_b_3_66 = emitter.vector_insert(s_b_3_58, emitter.const_s32((int32_t)7ULL), s_b_3_64);
    /* execute.simd:3374 [F] s_b_3_67=sym_43273_3_parameter_inst.rd (const) */
    /* execute.simd:3374 [D] s_b_3_68: WriteRegBank 18:s_b_3_67 = s_b_3_66 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_66,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_3_66);
    /* execute.simd:0 [F] s_b_3_69: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_4: 
  {
    /* execute.simd:3378 [F] s_b_4_0=sym_43273_3_parameter_inst.rn (const) */
    /* execute.simd:3378 [D] s_b_4_1 = ReadRegBank 17:s_b_4_0 (v4u16) */
    auto s_b_4_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_4_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [F] s_b_4_2 = constant v4u32 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_4_3 = constant u8 0 (const) */
    /* execute.simd:3382 [D] s_b_4_1[s_b_4_3] */
    auto s_b_4_4 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3382 [D] s_b_4_5 = (u32)s_b_4_4 */
    auto s_b_4_5 = emitter.zx(s_b_4_4, emitter.context().types().u32());
    /* execute.simd:3382 [F] s_b_4_6=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3382 [F] s_b_4_7 = (u32)s_b_4_6 (const) */
    /* execute.simd:3382 [D] s_b_4_8 = s_b_4_5<<s_b_4_7 */
    auto s_b_4_8 = emitter.shl(s_b_4_5, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3382 [F] s_b_4_9 = constant s32 0 (const) */
    /* execute.simd:3382 [D] s_b_4_10 = s_b_4_2[s_b_4_9] <= s_b_4_8 */
    auto s_b_4_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_4_8);
    /* ???:4294967295 [F] s_b_4_11 = constant u8 1 (const) */
    /* execute.simd:3382 [D] s_b_4_1[s_b_4_11] */
    auto s_b_4_12 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3382 [D] s_b_4_13 = (u32)s_b_4_12 */
    auto s_b_4_13 = emitter.zx(s_b_4_12, emitter.context().types().u32());
    /* execute.simd:3382 [F] s_b_4_14=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3382 [F] s_b_4_15 = (u32)s_b_4_14 (const) */
    /* execute.simd:3382 [D] s_b_4_16 = s_b_4_13<<s_b_4_15 */
    auto s_b_4_16 = emitter.shl(s_b_4_13, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3382 [F] s_b_4_17 = constant s32 1 (const) */
    /* execute.simd:3382 [D] s_b_4_18 = s_b_4_10[s_b_4_17] <= s_b_4_16 */
    auto s_b_4_18 = emitter.vector_insert(s_b_4_10, emitter.const_s32((int32_t)1ULL), s_b_4_16);
    /* ???:4294967295 [F] s_b_4_19 = constant u8 2 (const) */
    /* execute.simd:3382 [D] s_b_4_1[s_b_4_19] */
    auto s_b_4_20 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3382 [D] s_b_4_21 = (u32)s_b_4_20 */
    auto s_b_4_21 = emitter.zx(s_b_4_20, emitter.context().types().u32());
    /* execute.simd:3382 [F] s_b_4_22=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3382 [F] s_b_4_23 = (u32)s_b_4_22 (const) */
    /* execute.simd:3382 [D] s_b_4_24 = s_b_4_21<<s_b_4_23 */
    auto s_b_4_24 = emitter.shl(s_b_4_21, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3382 [F] s_b_4_25 = constant s32 2 (const) */
    /* execute.simd:3382 [D] s_b_4_26 = s_b_4_18[s_b_4_25] <= s_b_4_24 */
    auto s_b_4_26 = emitter.vector_insert(s_b_4_18, emitter.const_s32((int32_t)2ULL), s_b_4_24);
    /* ???:4294967295 [F] s_b_4_27 = constant u8 3 (const) */
    /* execute.simd:3382 [D] s_b_4_1[s_b_4_27] */
    auto s_b_4_28 = emitter.vector_extract(s_b_4_1, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3382 [D] s_b_4_29 = (u32)s_b_4_28 */
    auto s_b_4_29 = emitter.zx(s_b_4_28, emitter.context().types().u32());
    /* execute.simd:3382 [F] s_b_4_30=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3382 [F] s_b_4_31 = (u32)s_b_4_30 (const) */
    /* execute.simd:3382 [D] s_b_4_32 = s_b_4_29<<s_b_4_31 */
    auto s_b_4_32 = emitter.shl(s_b_4_29, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3382 [F] s_b_4_33 = constant s32 3 (const) */
    /* execute.simd:3382 [D] s_b_4_34 = s_b_4_26[s_b_4_33] <= s_b_4_32 */
    auto s_b_4_34 = emitter.vector_insert(s_b_4_26, emitter.const_s32((int32_t)3ULL), s_b_4_32);
    /* execute.simd:3385 [F] s_b_4_35=sym_43273_3_parameter_inst.rd (const) */
    /* execute.simd:3385 [D] s_b_4_36: WriteRegBank 20:s_b_4_35 = s_b_4_34 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_34,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_4_34);
    /* execute.simd:0 [F] s_b_4_37: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_5: 
  {
    /* execute.simd:3389 [F] s_b_5_0=sym_43273_3_parameter_inst.rn (const) */
    /* execute.simd:3389 [D] s_b_5_1 = ReadRegBank 18:s_b_5_0 (v8u16) */
    auto s_b_5_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v8u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_5_1,emitter.const_u8(16));
    }
    /* ???:4294967295 [F] s_b_5_2 = constant v4u32 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_5_3 = constant u8 4 (const) */
    /* execute.simd:3393 [D] s_b_5_1[s_b_5_3] */
    auto s_b_5_4 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)4ULL));
    /* execute.simd:3393 [D] s_b_5_5 = (u32)s_b_5_4 */
    auto s_b_5_5 = emitter.zx(s_b_5_4, emitter.context().types().u32());
    /* execute.simd:3393 [F] s_b_5_6=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3393 [F] s_b_5_7 = (u32)s_b_5_6 (const) */
    /* execute.simd:3393 [D] s_b_5_8 = s_b_5_5<<s_b_5_7 */
    auto s_b_5_8 = emitter.shl(s_b_5_5, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3393 [F] s_b_5_9 = constant s32 0 (const) */
    /* execute.simd:3393 [D] s_b_5_10 = s_b_5_2[s_b_5_9] <= s_b_5_8 */
    auto s_b_5_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint32_t, 4>(0)[0], emitter.context().types().v4u32()), emitter.const_s32((int32_t)0ULL), s_b_5_8);
    /* ???:4294967295 [F] s_b_5_11 = constant u8 5 (const) */
    /* execute.simd:3393 [D] s_b_5_1[s_b_5_11] */
    auto s_b_5_12 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)5ULL));
    /* execute.simd:3393 [D] s_b_5_13 = (u32)s_b_5_12 */
    auto s_b_5_13 = emitter.zx(s_b_5_12, emitter.context().types().u32());
    /* execute.simd:3393 [F] s_b_5_14=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3393 [F] s_b_5_15 = (u32)s_b_5_14 (const) */
    /* execute.simd:3393 [D] s_b_5_16 = s_b_5_13<<s_b_5_15 */
    auto s_b_5_16 = emitter.shl(s_b_5_13, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3393 [F] s_b_5_17 = constant s32 1 (const) */
    /* execute.simd:3393 [D] s_b_5_18 = s_b_5_10[s_b_5_17] <= s_b_5_16 */
    auto s_b_5_18 = emitter.vector_insert(s_b_5_10, emitter.const_s32((int32_t)1ULL), s_b_5_16);
    /* ???:4294967295 [F] s_b_5_19 = constant u8 6 (const) */
    /* execute.simd:3393 [D] s_b_5_1[s_b_5_19] */
    auto s_b_5_20 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)6ULL));
    /* execute.simd:3393 [D] s_b_5_21 = (u32)s_b_5_20 */
    auto s_b_5_21 = emitter.zx(s_b_5_20, emitter.context().types().u32());
    /* execute.simd:3393 [F] s_b_5_22=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3393 [F] s_b_5_23 = (u32)s_b_5_22 (const) */
    /* execute.simd:3393 [D] s_b_5_24 = s_b_5_21<<s_b_5_23 */
    auto s_b_5_24 = emitter.shl(s_b_5_21, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3393 [F] s_b_5_25 = constant s32 2 (const) */
    /* execute.simd:3393 [D] s_b_5_26 = s_b_5_18[s_b_5_25] <= s_b_5_24 */
    auto s_b_5_26 = emitter.vector_insert(s_b_5_18, emitter.const_s32((int32_t)2ULL), s_b_5_24);
    /* ???:4294967295 [F] s_b_5_27 = constant u8 7 (const) */
    /* execute.simd:3393 [D] s_b_5_1[s_b_5_27] */
    auto s_b_5_28 = emitter.vector_extract(s_b_5_1, emitter.const_u8((uint8_t)7ULL));
    /* execute.simd:3393 [D] s_b_5_29 = (u32)s_b_5_28 */
    auto s_b_5_29 = emitter.zx(s_b_5_28, emitter.context().types().u32());
    /* execute.simd:3393 [F] s_b_5_30=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3393 [F] s_b_5_31 = (u32)s_b_5_30 (const) */
    /* execute.simd:3393 [D] s_b_5_32 = s_b_5_29<<s_b_5_31 */
    auto s_b_5_32 = emitter.shl(s_b_5_29, emitter.const_u32(((uint32_t)insn.shift_amount)));
    /* execute.simd:3393 [F] s_b_5_33 = constant s32 3 (const) */
    /* execute.simd:3393 [D] s_b_5_34 = s_b_5_26[s_b_5_33] <= s_b_5_32 */
    auto s_b_5_34 = emitter.vector_insert(s_b_5_26, emitter.const_s32((int32_t)3ULL), s_b_5_32);
    /* execute.simd:3396 [F] s_b_5_35=sym_43273_3_parameter_inst.rd (const) */
    /* execute.simd:3396 [D] s_b_5_36: WriteRegBank 20:s_b_5_35 = s_b_5_34 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_34,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_5_34);
    /* execute.simd:0 [F] s_b_5_37: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_6: 
  {
    /* execute.simd:3400 [F] s_b_6_0=sym_43273_3_parameter_inst.rn (const) */
    /* execute.simd:3400 [D] s_b_6_1 = ReadRegBank 19:s_b_6_0 (v2u32) */
    auto s_b_6_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v2u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_6_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [F] s_b_6_2 = constant v2u64 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_6_3 = constant u8 0 (const) */
    /* execute.simd:3404 [D] s_b_6_1[s_b_6_3] */
    auto s_b_6_4 = emitter.vector_extract(s_b_6_1, emitter.const_u8((uint8_t)0ULL));
    /* execute.simd:3404 [D] s_b_6_5 = (u64)s_b_6_4 */
    auto s_b_6_5 = emitter.zx(s_b_6_4, emitter.context().types().u64());
    /* execute.simd:3404 [F] s_b_6_6=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3404 [F] s_b_6_7 = (u64)s_b_6_6 (const) */
    /* execute.simd:3404 [D] s_b_6_8 = s_b_6_5<<s_b_6_7 */
    auto s_b_6_8 = emitter.shl(s_b_6_5, emitter.const_u64(((uint64_t)insn.shift_amount)));
    /* execute.simd:3404 [F] s_b_6_9 = constant s32 0 (const) */
    /* execute.simd:3404 [D] s_b_6_10 = s_b_6_2[s_b_6_9] <= s_b_6_8 */
    auto s_b_6_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint64_t, 2>(0)[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_6_8);
    /* ???:4294967295 [F] s_b_6_11 = constant u8 1 (const) */
    /* execute.simd:3404 [D] s_b_6_1[s_b_6_11] */
    auto s_b_6_12 = emitter.vector_extract(s_b_6_1, emitter.const_u8((uint8_t)1ULL));
    /* execute.simd:3404 [D] s_b_6_13 = (u64)s_b_6_12 */
    auto s_b_6_13 = emitter.zx(s_b_6_12, emitter.context().types().u64());
    /* execute.simd:3404 [F] s_b_6_14=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3404 [F] s_b_6_15 = (u64)s_b_6_14 (const) */
    /* execute.simd:3404 [D] s_b_6_16 = s_b_6_13<<s_b_6_15 */
    auto s_b_6_16 = emitter.shl(s_b_6_13, emitter.const_u64(((uint64_t)insn.shift_amount)));
    /* execute.simd:3404 [F] s_b_6_17 = constant s32 1 (const) */
    /* execute.simd:3404 [D] s_b_6_18 = s_b_6_10[s_b_6_17] <= s_b_6_16 */
    auto s_b_6_18 = emitter.vector_insert(s_b_6_10, emitter.const_s32((int32_t)1ULL), s_b_6_16);
    /* execute.simd:3407 [F] s_b_6_19=sym_43273_3_parameter_inst.rd (const) */
    /* execute.simd:3407 [D] s_b_6_20: WriteRegBank 21:s_b_6_19 = s_b_6_18 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_18,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_6_18);
    /* execute.simd:0 [F] s_b_6_21: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_7: 
  {
    /* execute.simd:3411 [F] s_b_7_0=sym_43273_3_parameter_inst.rn (const) */
    /* execute.simd:3411 [D] s_b_7_1 = ReadRegBank 20:s_b_7_0 (v4u32) */
    auto s_b_7_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rn))), emitter.context().types().v4u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rn))),s_b_7_1,emitter.const_u8(16));
    }
    /* ???:4294967295 [F] s_b_7_2 = constant v2u64 
    {
    }
    (const) */
    /* ???:4294967295 [F] s_b_7_3 = constant u8 2 (const) */
    /* execute.simd:3415 [D] s_b_7_1[s_b_7_3] */
    auto s_b_7_4 = emitter.vector_extract(s_b_7_1, emitter.const_u8((uint8_t)2ULL));
    /* execute.simd:3415 [D] s_b_7_5 = (u64)s_b_7_4 */
    auto s_b_7_5 = emitter.zx(s_b_7_4, emitter.context().types().u64());
    /* execute.simd:3415 [F] s_b_7_6=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3415 [F] s_b_7_7 = (u64)s_b_7_6 (const) */
    /* execute.simd:3415 [D] s_b_7_8 = s_b_7_5<<s_b_7_7 */
    auto s_b_7_8 = emitter.shl(s_b_7_5, emitter.const_u64(((uint64_t)insn.shift_amount)));
    /* execute.simd:3415 [F] s_b_7_9 = constant s32 0 (const) */
    /* execute.simd:3415 [D] s_b_7_10 = s_b_7_2[s_b_7_9] <= s_b_7_8 */
    auto s_b_7_10 = emitter.vector_insert(emitter.constant_vector_splat(wutils::Vector<uint64_t, 2>(0)[0], emitter.context().types().v2u64()), emitter.const_s32((int32_t)0ULL), s_b_7_8);
    /* ???:4294967295 [F] s_b_7_11 = constant u8 3 (const) */
    /* execute.simd:3415 [D] s_b_7_1[s_b_7_11] */
    auto s_b_7_12 = emitter.vector_extract(s_b_7_1, emitter.const_u8((uint8_t)3ULL));
    /* execute.simd:3415 [D] s_b_7_13 = (u64)s_b_7_12 */
    auto s_b_7_13 = emitter.zx(s_b_7_12, emitter.context().types().u64());
    /* execute.simd:3415 [F] s_b_7_14=sym_43273_3_parameter_inst.shift_amount (const) */
    /* execute.simd:3415 [F] s_b_7_15 = (u64)s_b_7_14 (const) */
    /* execute.simd:3415 [D] s_b_7_16 = s_b_7_13<<s_b_7_15 */
    auto s_b_7_16 = emitter.shl(s_b_7_13, emitter.const_u64(((uint64_t)insn.shift_amount)));
    /* execute.simd:3415 [F] s_b_7_17 = constant s32 1 (const) */
    /* execute.simd:3415 [D] s_b_7_18 = s_b_7_10[s_b_7_17] <= s_b_7_16 */
    auto s_b_7_18 = emitter.vector_insert(s_b_7_10, emitter.const_s32((int32_t)1ULL), s_b_7_16);
    /* execute.simd:3418 [F] s_b_7_19=sym_43273_3_parameter_inst.rd (const) */
    /* execute.simd:3418 [D] s_b_7_20: WriteRegBank 21:s_b_7_19 = s_b_7_18 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_REGISTER,emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_18,emitter.const_u8(16));
    }
    emitter.store_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rd))),s_b_7_18);
    /* execute.simd:0 [F] s_b_7_21: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  /* b_0,  */
  fixed_block_b_8: 
  {
    /* execute.simd:3422 [D] s_b_8_0 = trap */
    emitter.raise(emitter.const_u8(0));
    /* execute.simd:0 [F] s_b_8_1: Jump b_1 (const) */
    goto fixed_block_b_1;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template<bool TRACE>bool aarch64_jit2<TRACE>::translate_a64_vstr(const aarch64_decode_a64_LS_REG_UIMM&insn, captive::arch::dbt::el::Emitter& emitter)
{
  emitter.mark_used_feature(0);
  emitter.mark_used_feature(1);
  captive::arch::dbt::el::Block *__exit_block = emitter.context().create_block();
  auto DV_sym_151126_1__R_s_b_3_0 = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_151109_0_return_symbol = emitter.alloc_local(emitter.context().types().u64(), false);
  auto DV_sym_151203_0_replaced_parameter_addr = emitter.alloc_local(emitter.context().types().u64(), false);
  goto fixed_block_b_0;
  /*  */
  fixed_block_b_0: 
  {
    /* execute.simd:3927 [F] s_b_0_0=sym_46571_3_parameter_inst.rn (const) */
    /* execute.a64:2730 [F] s_b_0_1 = (u32)s_b_0_0 (const) */
    /* execute.a64:2730 [F] s_b_0_2 = constant u32 1f (const) */
    /* execute.a64:2730 [F] s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8_t s_b_0_3 = ((uint8_t)(((uint32_t)insn.rn) == (uint32_t)31ULL));
    /* execute.a64:2730 [F] s_b_0_4: If s_b_0_3: Jump b_1 else b_2 (const) */
    if (s_b_0_3) 
    {
      goto fixed_block_b_1;
    }
    else 
    {
      goto fixed_block_b_2;
    }
  }
  /* b_0,  */
  fixed_block_b_1: 
  {
    /* execute.a64:2701 [F] s_b_1_0 = constant u32 1 (const) */
    /* execute.a64:2701 [F] s_b_1_1 = __builtin_get_feature */
    uint32_t s_b_1_1 = __get_feature((uint32_t)1ULL);
    /* execute.a64:2701 [F] s_b_1_2 = constant u32 0 (const) */
    /* execute.a64:2701 [F] s_b_1_3 = s_b_1_1==s_b_1_2 (const) */
    uint8_t s_b_1_3 = ((uint8_t)(s_b_1_1 == (uint32_t)0ULL));
    /* execute.a64:2701 [F] s_b_1_4: If s_b_1_3: Jump b_4 else b_5 (const) */
    if (s_b_1_3) 
    {
      goto fixed_block_b_4;
    }
    else 
    {
      goto fixed_block_b_5;
    }
  }
  /* b_0,  */
  fixed_block_b_2: 
  {
    /* execute.a64:2733 [F] s_b_2_0=sym_46571_3_parameter_inst.rn (const) */
    /* execute.a64:2733 [D] s_b_2_1 = ReadRegBank 0:s_b_2_0 (u64) */
    auto s_b_2_1 = emitter.load_register(emitter.const_u32((uint32_t)(0 + (8 * insn.rn))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(0 + (8 * insn.rn))),s_b_2_1,emitter.const_u8(8));
    }
    /* ???:4294967295 [D] s_b_2_2: sym_151109_0_return_symbol = s_b_2_1, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_151109_0_return_symbol, s_b_2_1);
    /* ???:4294967295 [F] s_b_2_3: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_2, b_6,  */
  fixed_block_b_3: 
  {
    /* ???:4294967295 [D] s_b_3_0 = sym_151109_0_return_symbol uint64_t */
    auto s_b_3_0 = emitter.load_local(DV_sym_151109_0_return_symbol, emitter.context().types().u64());
    /* execute.simd:3927 [F] s_b_3_1=sym_46571_3_parameter_inst.immu64 (const) */
    /* execute.simd:3927 [D] s_b_3_2 = s_b_3_0+s_b_3_1 */
    auto s_b_3_2 = emitter.add(s_b_3_0, emitter.const_u64(insn.immu64));
    /* execute.simd:3928 [F] s_b_3_3=sym_46571_3_parameter_inst.size (const) */
    /* execute.simd:3928 [F] s_b_3_4 = (u32)s_b_3_3 (const) */
    /* execute.simd:3928 [F] s_b_3_5 = constant u32 0 (const) */
    /* execute.simd:3928 [F] s_b_3_6 = s_b_3_4==s_b_3_5 (const) */
    uint8_t s_b_3_6 = ((uint8_t)(((uint32_t)insn.size) == (uint32_t)0ULL));
    /* execute.simd:3928 [F] s_b_3_7=sym_46571_3_parameter_inst.opc (const) */
    /* execute.simd:3928 [F] s_b_3_8 = (u32)s_b_3_7 (const) */
    /* execute.simd:3928 [F] s_b_3_9 = constant u32 0 (const) */
    /* execute.simd:3928 [F] s_b_3_10 = s_b_3_8==s_b_3_9 (const) */
    uint8_t s_b_3_10 = ((uint8_t)(((uint32_t)insn.opc) == (uint32_t)0ULL));
    /* execute.simd:3928 [F] s_b_3_11 = constant u8 0 (const) */
    /* execute.simd:3928 [F] s_b_3_12 = constant u8 4 (const) */
    /* execute.simd:3928 [F] s_b_3_13: Select s_b_3_10 ? s_b_3_11 : s_b_3_12 (const) */
    uint8_t s_b_3_13 = ((uint8_t)(s_b_3_10 ? ((uint8_t)0ULL) : ((uint8_t)4ULL)));
    /* execute.simd:3928 [F] s_b_3_14=sym_46571_3_parameter_inst.size (const) */
    /* execute.simd:3928 [F] s_b_3_15 = (u8)s_b_3_14 (const) */
    /* execute.simd:3928 [F] s_b_3_16: Select s_b_3_6 ? s_b_3_13 : s_b_3_15 (const) */
    uint8_t s_b_3_16 = ((uint8_t)(s_b_3_6 ? (s_b_3_13) : (((uint8_t)insn.size))));
    /* ???:4294967295 [D] s_b_3_17: sym_151203_0_replaced_parameter_addr = s_b_3_2, dominates: s_b_9_2 s_b_10_2 s_b_11_2 s_b_13_3 s_b_12_2  */
    emitter.store_local(DV_sym_151203_0_replaced_parameter_addr, s_b_3_2);
    /* execute.simd:3674 [F] s_b_3_18 = constant s32 0 (const) */
    /* execute.simd:3680 [F] s_b_3_19 = constant s32 1 (const) */
    /* execute.simd:3686 [F] s_b_3_20 = constant s32 2 (const) */
    /* execute.simd:3692 [F] s_b_3_21 = constant s32 3 (const) */
    /* execute.simd:3698 [F] s_b_3_22 = constant s32 4 (const) */
    /* execute.simd:3673 [F] s_b_3_23: Switch s_b_3_16: < <todo> > def b_14 (const) -> b_9, b_10, b_11, b_14, b_13, b_12,  */
    switch (s_b_3_16) 
    {
    case (int32_t)0ULL:
      goto fixed_block_b_9;
      break;
    case (int32_t)3ULL:
      goto fixed_block_b_12;
      break;
    case (int32_t)4ULL:
      goto fixed_block_b_13;
      break;
    case (int32_t)1ULL:
      goto fixed_block_b_10;
      break;
    case (int32_t)2ULL:
      goto fixed_block_b_11;
      break;
    default:
      goto fixed_block_b_14;
    }
  }
  /* b_1,  */
  fixed_block_b_4: 
  {
    /* execute.a64:2702 [D] s_b_4_0 = ReadReg 20 (u64) */
    auto s_b_4_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_4_0, emitter.const_u8(8));
    }
    /* execute.a64:2702 [D] s_b_4_1: sym_151126_1__R_s_b_3_0 = s_b_4_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_151126_1__R_s_b_3_0, s_b_4_0);
    /* execute.a64:2702 [F] s_b_4_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_1,  */
  fixed_block_b_5: 
  {
    /* execute.a64:3012 [F] s_b_5_0 = constant u32 0 (const) */
    /* execute.a64:3012 [F] s_b_5_1 = __builtin_get_feature */
    uint32_t s_b_5_1 = __get_feature((uint32_t)0ULL);
    /* execute.a64:3012 [F] s_b_5_2 = (u8)s_b_5_1 (const) */
    /* execute.a64:2704 [F] s_b_5_3 = (u32)s_b_5_2 (const) */
    /* execute.a64:2704 [F] s_b_5_4 = constant u32 0 (const) */
    /* execute.a64:2704 [F] s_b_5_5 = s_b_5_3==s_b_5_4 (const) */
    uint8_t s_b_5_5 = ((uint8_t)(((uint32_t)((uint8_t)s_b_5_1)) == (uint32_t)0ULL));
    /* execute.a64:2704 [F] s_b_5_6: If s_b_5_5: Jump b_7 else b_8 (const) */
    if (s_b_5_5) 
    {
      goto fixed_block_b_7;
    }
    else 
    {
      goto fixed_block_b_8;
    }
  }
  /* b_4, b_7, b_8,  */
  fixed_block_b_6: 
  {
    /* execute.a64:2731 [D] s_b_6_0 = sym_151126_1__R_s_b_3_0 uint64_t */
    auto s_b_6_0 = emitter.load_local(DV_sym_151126_1__R_s_b_3_0, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_6_1: sym_151109_0_return_symbol = s_b_6_0, dominates: s_b_3_0  */
    emitter.store_local(DV_sym_151109_0_return_symbol, s_b_6_0);
    /* ???:4294967295 [F] s_b_6_2: Jump b_3 (const) */
    goto fixed_block_b_3;
  }
  /* b_5,  */
  fixed_block_b_7: 
  {
    /* execute.a64:2705 [D] s_b_7_0 = ReadReg 20 (u64) */
    auto s_b_7_0 = emitter.load_register(emitter.const_u32(1408), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1408), s_b_7_0, emitter.const_u8(8));
    }
    /* execute.a64:2705 [D] s_b_7_1: sym_151126_1__R_s_b_3_0 = s_b_7_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_151126_1__R_s_b_3_0, s_b_7_0);
    /* execute.a64:2705 [F] s_b_7_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_5,  */
  fixed_block_b_8: 
  {
    /* execute.a64:2707 [D] s_b_8_0 = ReadReg 21 (u64) */
    auto s_b_8_0 = emitter.load_register(emitter.const_u32(1416), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32(1416), s_b_8_0, emitter.const_u8(8));
    }
    /* execute.a64:2707 [D] s_b_8_1: sym_151126_1__R_s_b_3_0 = s_b_8_0, dominates: s_b_6_0  */
    emitter.store_local(DV_sym_151126_1__R_s_b_3_0, s_b_8_0);
    /* execute.a64:2707 [F] s_b_8_2: Jump b_6 (const) */
    goto fixed_block_b_6;
  }
  /* b_3,  */
  fixed_block_b_9: 
  {
    /* execute.simd:3676 [F] s_b_9_0=sym_46571_3_parameter_inst.rt (const) */
    /* execute.simd:6260 [D] s_b_9_1 = ReadRegBank 4:s_b_9_0 (u8) */
    auto s_b_9_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u8());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_9_1,emitter.const_u8(1));
    }
    /* execute.simd:3677 [D] s_b_9_2 = sym_151203_0_replaced_parameter_addr uint64_t */
    auto s_b_9_2 = emitter.load_local(DV_sym_151203_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_9_3: Store 1 s_b_9_2 <= s_b_9_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_9_2, s_b_9_1, emitter.const_u8(1));
    }
    emitter.store_memory(s_b_9_2, s_b_9_1);
    /* execute.simd:0 [F] s_b_9_4: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_3,  */
  fixed_block_b_10: 
  {
    /* execute.simd:3682 [F] s_b_10_0=sym_46571_3_parameter_inst.rt (const) */
    /* execute.simd:6265 [D] s_b_10_1 = ReadRegBank 5:s_b_10_0 (u16) */
    auto s_b_10_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u16());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_10_1,emitter.const_u8(2));
    }
    /* execute.simd:3683 [D] s_b_10_2 = sym_151203_0_replaced_parameter_addr uint64_t */
    auto s_b_10_2 = emitter.load_local(DV_sym_151203_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_10_3: Store 2 s_b_10_2 <= s_b_10_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_10_2, s_b_10_1, emitter.const_u8(2));
    }
    emitter.store_memory(s_b_10_2, s_b_10_1);
    /* execute.simd:0 [F] s_b_10_4: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_3,  */
  fixed_block_b_11: 
  {
    /* execute.simd:3688 [F] s_b_11_0=sym_46571_3_parameter_inst.rt (const) */
    /* execute.simd:6270 [D] s_b_11_1 = ReadRegBank 6:s_b_11_0 (u32) */
    auto s_b_11_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u32());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_11_1,emitter.const_u8(4));
    }
    /* execute.simd:3689 [D] s_b_11_2 = sym_151203_0_replaced_parameter_addr uint64_t */
    auto s_b_11_2 = emitter.load_local(DV_sym_151203_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_11_3: Store 4 s_b_11_2 <= s_b_11_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_11_2, s_b_11_1, emitter.const_u8(4));
    }
    emitter.store_memory(s_b_11_2, s_b_11_1);
    /* execute.simd:0 [F] s_b_11_4: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_3,  */
  fixed_block_b_12: 
  {
    /* execute.simd:3694 [F] s_b_12_0=sym_46571_3_parameter_inst.rt (const) */
    /* execute.simd:6275 [D] s_b_12_1 = ReadRegBank 7:s_b_12_0 (u64) */
    auto s_b_12_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_12_1,emitter.const_u8(8));
    }
    /* execute.simd:3695 [D] s_b_12_2 = sym_151203_0_replaced_parameter_addr uint64_t */
    auto s_b_12_2 = emitter.load_local(DV_sym_151203_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_12_3: Store 8 s_b_12_2 <= s_b_12_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_12_2, s_b_12_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_12_2, s_b_12_1);
    /* execute.simd:0 [F] s_b_12_4: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_3,  */
  fixed_block_b_13: 
  {
    /* execute.simd:3702 [F] s_b_13_0=sym_46571_3_parameter_inst.rt (const) */
    /* execute.simd:6280 [D] s_b_13_1 = ReadRegBank 2:s_b_13_0 (u64) */
    auto s_b_13_1 = emitter.load_register(emitter.const_u32((uint32_t)(256 + (16 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(256 + (16 * insn.rt))),s_b_13_1,emitter.const_u8(8));
    }
    /* execute.simd:6281 [D] s_b_13_2 = ReadRegBank 3:s_b_13_0 (u64) */
    auto s_b_13_2 = emitter.load_register(emitter.const_u32((uint32_t)(264 + (16 * insn.rt))), emitter.context().types().u64());
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::LOAD_REGISTER, emitter.const_u32((uint32_t)(264 + (16 * insn.rt))),s_b_13_2,emitter.const_u8(8));
    }
    /* execute.simd:3703 [D] s_b_13_3 = sym_151203_0_replaced_parameter_addr uint64_t */
    auto s_b_13_3 = emitter.load_local(DV_sym_151203_0_replaced_parameter_addr, emitter.context().types().u64());
    /* ???:4294967295 [D] s_b_13_4: Store 8 s_b_13_3 <= s_b_13_1 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_13_3, s_b_13_1, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_13_3, s_b_13_1);
    /* execute.simd:3704 [F] s_b_13_5 = constant u64 8 (const) */
    /* execute.simd:3704 [D] s_b_13_6 = s_b_13_3+s_b_13_5 */
    auto s_b_13_6 = emitter.add(s_b_13_3, emitter.const_u64((uint64_t)8ULL));
    /* ???:4294967295 [D] s_b_13_7: Store 8 s_b_13_6 <= s_b_13_2 */
    if (TRACE) 
    {
      emitter.trace(dbt::el::TraceEvent::STORE_MEMORY, s_b_13_6, s_b_13_2, emitter.const_u8(8));
    }
    emitter.store_memory(s_b_13_6, s_b_13_2);
    /* execute.simd:0 [F] s_b_13_8: Jump b_14 (const) */
    goto fixed_block_b_14;
  }
  /* b_3, b_9, b_10, b_11, b_12, b_13,  */
  fixed_block_b_14: 
  {
    /* ???:4294967295 [F] s_b_14_0: Return */
    goto fixed_done;
  }
  fixed_done:
  emitter.jump(__exit_block);
  emitter.set_current_block(__exit_block);
  if (!insn.end_of_block) 
  {
    emitter.inc_pc(emitter.const_u8(4));
  }
  return true;
}
template class aarch64_jit2<true>;
template class aarch64_jit2<false>;
