---
title: "Oggetti intrinseci ARM | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "arm_neon/vsetq_lane_p8"
  - "armintr/_arm_uxtb"
  - "arm_neon/vld4_lane_p8"
  - "arm_neon/vrshrn_n_s64"
  - "arm_neon/vsli_n_u32"
  - "arm_neon/vsraq_n_u16"
  - "arm_neon/vcgt_f32"
  - "armintr/__iso_volatile_store32"
  - "arm_neon/vceqq_f32"
  - "armintr/_arm_smlal"
  - "arm_neon/vmull_n_s32"
  - "arm_neon/vmax_s8"
  - "arm_neon/vmvn_u32"
  - "arm_neon/vrshl_u32"
  - "arm_neon/int32x2_t"
  - "arm_neon/vdupq_n_p8"
  - "arm_neon/vpmax_u16"
  - "arm_neon/vtrnq_s32"
  - "arm_neon/vset_lane_f32"
  - "arm_neon/vrev64_s8"
  - "arm_neon/vtrnq_p8"
  - "arm_neon/vqshlq_u64"
  - "arm_neon/vld1q_dup_s64"
  - "arm_neon/vmovq_n_u64"
  - "arm_neon/vqshrn_n_u16"
  - "arm_neon/vhadd_s32"
  - "arm_neon/vrhaddq_u32"
  - "arm_neon/vst1q_p8"
  - "arm_neon/vshrn_n_s16"
  - "arm_neon/vget_high_f32"
  - "arm_neon/vuzpq_s16"
  - "arm_neon/vand_u16"
  - "arm_neon/vmulq_s32"
  - "arm_neon/vrsraq_n_s64"
  - "arm_neon/vceqq_s8"
  - "arm_neon/uint64x1x3_t"
  - "arm_neon/veor_u32"
  - "armintr/_arm_pkhtb"
  - "arm_neon/vorrq_u16"
  - "arm_neon/vpaddl_s8"
  - "arm_neon/vmla_n_s16"
  - "arm_neon/vqdmlal_lane_s32"
  - "arm_neon/vshlq_n_u8"
  - "arm_neon/vst2_lane_p8"
  - "arm_neon/vld3q_u16"
  - "arm_neon/vandq_u8"
  - "arm_neon/vst1_u64"
  - "arm_neon/vaddq_s64"
  - "arm_neon/vuzpq_u32"
  - "arm_neon/vld3_lane_p8"
  - "arm_neon/vminq_s32"
  - "arm_neon/vabd_u16"
  - "arm_neon/vdup_n_u32"
  - "arm_neon/vmul_p8"
  - "arm_neon/vsra_n_u16"
  - "arm_neon/vst3q_u16"
  - "arm_neon/int32x2x3_t"
  - "arm_neon/vld2_dup_u16"
  - "arm_neon/vrhaddq_u8"
  - "arm_neon/vhadd_u8"
  - "arm_neon/vgetq_lane_s32"
  - "arm_neon/vcleq_u16"
  - "arm_neon/vabdq_s8"
  - "arm_neon/vrev16q_u8"
  - "arm_neon/vqshlu_n_s64"
  - "arm_neon/vcvt_n_s32_f32"
  - "arm_neon/vqrshrn_n_s64"
  - "arm_neon/vst1q_p16"
  - "arm_neon/vgetq_lane_s16"
  - "arm_neon/vtstq_u32"
  - "arm_neon/vmlsl_n_s16"
  - "arm_neon/vcge_s8"
  - "arm_neon/vshr_n_s16"
  - "armintr/_arm_rbit"
  - "arm_neon/vmls_u32"
  - "arm_neon/vmls_lane_u32"
  - "arm_neon/vcvtq_n_s32_f32"
  - "arm_neon/vqshl_n_s8"
  - "arm_neon/vst1q_s16"
  - "armintr/__emit"
  - "arm_neon/vshlq_s64"
  - "arm_neon/vuzp_s8"
  - "arm_neon/vld1q_lane_s64"
  - "arm_neon/veorq_s32"
  - "arm_neon/vaddq_u64"
  - "arm_neon/vceq_s32"
  - "arm_neon/vmovn_u16"
  - "arm_neon/vabal_s8"
  - "arm_neon/vabsq_f32"
  - "armintr/_arm_smuad"
  - "arm_neon/veor_u8"
  - "arm_neon/int16x4_t"
  - "arm_neon/vsraq_n_s16"
  - "arm_neon/vshlq_s8"
  - "arm_neon/vcreate_u32"
  - "arm_neon/vzipq_s8"
  - "arm_neon/vst3q_u8"
  - "arm_neon/int64x1x4_t"
  - "armintr/__iso_volatile_store16"
  - "arm_neon/vst4_lane_p16"
  - "arm_neon/vld1_dup_p16"
  - "arm_neon/vhadd_s16"
  - "arm_neon/vtbl2_s8"
  - "arm_neon/veorq_u32"
  - "arm_neon/vqdmlal_lane_s16"
  - "arm_neon/vrsra_n_u8"
  - "arm_neon/vbslq_u16"
  - "arm_neon/vget_low_s64"
  - "arm_neon/vceq_u16"
  - "arm_neon/vdupq_lane_u32"
  - "arm_neon/vabdl_u32"
  - "arm_neon/vmlal_s32"
  - "arm_neon/vst1_lane_u8"
  - "arm_neon/vld4q_f16"
  - "arm_neon/vqdmlsl_s32"
  - "arm_neon/vqrdmulh_s32"
  - "arm_neon/vqrshl_u8"
  - "arm_neon/uint32x4x4_t"
  - "arm_neon/vabaq_u16"
  - "arm_neon/vcnt_p8"
  - "arm_neon/vld3q_s16"
  - "arm_neon/vshl_n_u32"
  - "arm_neon/vrev64q_u16"
  - "arm_neon/vextq_s64"
  - "arm_neon/vhsubq_s8"
  - "arm_neon/vld2_dup_u8"
  - "arm_neon/vst3_s16"
  - "arm_neon/vorn_u16"
  - "arm_neon/vst4_f16"
  - "arm_neon/vpadalq_u8"
  - "armintr/__iso_volatile_load8"
  - "arm_neon/vmovl_u16"
  - "arm_neon/vld4q_u32"
  - "arm_neon/vcgt_u32"
  - "arm_neon/vmlaq_n_u32"
  - "arm_neon/vrsra_n_u64"
  - "arm_neon/vst4_s8"
  - "arm_neon/vcvtq_n_f32_u32"
  - "arm_neon/vst2q_u16"
  - "arm_neon/vqshrn_n_s16"
  - "arm_neon/vld4_s16"
  - "arm_neon/uint16x8x4_t"
  - "arm_neon/vrsqrte_u32"
  - "arm_neon/vcltq_s8"
  - "arm_neon/vst3_u16"
  - "arm_neon/vst2_f32"
  - "arm_neon/vld2_u64"
  - "arm_neon/vst1_u16"
  - "arm_neon/vmls_s16"
  - "arm_neon/vqrshlq_s32"
  - "arm_neon/vqdmull_s16"
  - "arm_neon/vld2_lane_p16"
  - "arm_neon/vpaddlq_u8"
  - "arm_neon/vcvt_n_f32_u32"
  - "arm_neon/vcgtq_u8"
  - "arm_neon/vshl_s32"
  - "arm_neon/vtbx3_p8"
  - "arm_neon/vld3_dup_s32"
  - "arm_neon/int16x4x3_t"
  - "arm_neon/vcale_f32"
  - "arm_neon/vqabsq_s32"
  - "arm_neon/vmulq_u16"
  - "arm_neon/vst1_s8"
  - "arm_neon/vclt_u8"
  - "armintr/_arm_sxtb16"
  - "arm_neon/vshr_n_s8"
  - "arm_neon/vst1_lane_f16"
  - "arm_neon/vorn_s64"
  - "armintr/_arm_usub8"
  - "arm_neon/vst4_lane_f32"
  - "arm_neon/vmls_lane_u16"
  - "arm_neon/vpaddl_u32"
  - "arm_neon/vdup_lane_u64"
  - "arm_neon/vsri_n_p16"
  - "arm_neon/vqrshlq_u64"
  - "arm_neon/vclz_s16"
  - "arm_neon/vsra_n_u32"
  - "arm_neon/vabaq_s8"
  - "arm_neon/vst2_lane_s8"
  - "arm_neon/vcvt_n_u32_f32"
  - "arm_neon/vst3_u32"
  - "arm_neon/vcvtq_f32_u32"
  - "arm_neon/vraddhn_s64"
  - "armintr/_arm_uqsax"
  - "arm_neon/vshl_u8"
  - "armintr/_arm_uqadd16"
  - "arm_neon/vrsra_n_u16"
  - "arm_neon/vrshl_u64"
  - "arm_neon/int32x4x3_t"
  - "arm_neon/vmull_u8"
  - "arm_neon/vcombine_u64"
  - "arm_neon/vmull_u16"
  - "arm_neon/vld1_dup_s8"
  - "armintr/_CountLeadingSigns64"
  - "arm_neon/vqshlq_n_s32"
  - "arm_neon/vrecpe_f32"
  - "arm_neon/vsri_n_u32"
  - "arm_neon/vrsraq_n_s8"
  - "arm_neon/vsetq_lane_s16"
  - "arm_neon/vget_high_u32"
  - "arm_neon/vmlal_u32"
  - "arm_neon/vdupq_lane_s16"
  - "arm_neon/vsubq_u64"
  - "arm_neon/vext_p8"
  - "arm_neon/vshl_u16"
  - "arm_neon/vmls_n_u16"
  - "arm_neon/vmull_s16"
  - "arm_neon/vmovq_n_s64"
  - "arm_neon/vaddq_f32"
  - "arm_neon/vshl_n_s16"
  - "arm_neon/vext_p16"
  - "arm_neon/vextq_u32"
  - "arm_neon/vld1_p8"
  - "arm_neon/veor_s32"
  - "arm_neon/int16x8x4_t"
  - "arm_neon/vst1q_u16"
  - "arm_neon/vzipq_p8"
  - "arm_neon/int32x4x4_t"
  - "arm_neon/vqdmulhq_lane_s32"
  - "arm_neon/vst3_lane_u32"
  - "arm_neon/vhsubq_s32"
  - "armintr/__static_assert"
  - "arm_neon/vst3q_lane_u16"
  - "arm_neon/vpmin_u32"
  - "arm_neon/vrev64q_p16"
  - "arm_neon/vcleq_f32"
  - "arm_neon/vhsub_u16"
  - "arm_neon/vld2_lane_s32"
  - "arm_neon/vmlsl_s32"
  - "armintr/_arm_rev"
  - "arm_neon/vcgeq_s16"
  - "arm_neon/vmulq_s8"
  - "arm_neon/vsri_n_s8"
  - "arm_neon/vpadd_f32"
  - "arm_neon/vld1q_lane_f16"
  - "arm_neon/vmls_u16"
  - "arm_neon/vld1_lane_f32"
  - "arm_neon/vmlaq_lane_s16"
  - "arm_neon/vqadd_u32"
  - "arm_neon/vmul_n_s32"
  - "arm_neon/vld1q_dup_p8"
  - "arm_neon/vtrnq_s8"
  - "arm_neon/vbslq_p8"
  - "arm_neon/vget_lane_s8"
  - "arm_neon/vext_u16"
  - "arm_neon/vsubq_s16"
  - "arm_neon/vld4_lane_s8"
  - "arm_neon/uint32x2x2_t"
  - "arm_neon/vdup_n_s8"
  - "arm_neon/vld4_lane_u16"
  - "arm_neon/vmovq_n_s16"
  - "arm_neon/vst4q_s32"
  - "arm_neon/vst2q_f16"
  - "arm_neon/vbslq_s16"
  - "arm_neon/vand_u64"
  - "arm_neon/poly16_t"
  - "arm_neon/vaba_u16"
  - "arm_neon/vqshlq_s64"
  - "armintr/_arm_uxth"
  - "arm_neon/vst2_lane_s16"
  - "arm_neon/vand_u8"
  - "arm_neon/int8x16x3_t"
  - "arm_neon/vrev64_u16"
  - "arm_neon/vld2_lane_s16"
  - "arm_neon/vabaq_s16"
  - "arm_neon/vsli_n_u8"
  - "arm_neon/vsraq_n_u64"
  - "arm_neon/vmlsl_s16"
  - "arm_neon/vmovn_u64"
  - "arm_neon/vld4_f32"
  - "arm_neon/vst2q_f32"
  - "arm_neon/vtbx3_u8"
  - "arm_neon/vcombine_s8"
  - "arm_neon/vqdmulhq_s32"
  - "arm_neon/vgetq_lane_p8"
  - "armintr/_arm_smusd"
  - "arm_neon/vpmax_u32"
  - "arm_neon/vceq_f32"
  - "arm_neon/vsri_n_p8"
  - "arm_neon/vhsubq_u8"
  - "arm_neon/vuzp_s16"
  - "arm_neon/uint32x2x4_t"
  - "arm_neon/vst4_lane_s32"
  - "arm_neon/vsli_n_p8"
  - "arm_neon/vld3_lane_f16"
  - "arm_neon/vbic_u64"
  - "arm_neon/vmlal_u16"
  - "arm_neon/vmvn_s8"
  - "arm_neon/vtstq_s8"
  - "arm_neon/vmaxq_s32"
  - "arm_neon/vqmovn_u64"
  - "armintr/_arm_ssax"
  - "arm_neon/vext_u32"
  - "arm_neon/vld1_dup_u64"
  - "arm_neon/vmlal_n_s16"
  - "armintr/_arm_smulbb"
  - "arm_neon/vqrdmulhq_lane_s16"
  - "arm_neon/vdup_n_p8"
  - "arm_neon/vaba_s8"
  - "arm_neon/vrshrq_n_s32"
  - "arm_neon/vmvnq_s32"
  - "arm_neon/vpadal_s32"
  - "arm_neon/vqshl_s16"
  - "arm_neon/vtrn_p8"
  - "arm_neon/vzip_s16"
  - "arm_neon/vcge_f32"
  - "armintr/_arm_sxtab16"
  - "arm_neon/vst1q_lane_u64"
  - "arm_neon/vqrshlq_u16"
  - "arm_neon/int8x8_t"
  - "arm_neon/vorr_u8"
  - "arm_neon/vrev64_f32"
  - "arm_neon/vpaddlq_s16"
  - "arm_neon/vdupq_lane_u64"
  - "arm_neon/vcltq_u16"
  - "arm_neon/vst3_lane_f32"
  - "arm_neon/vld2_dup_f32"
  - "armintr/_arm_smmul"
  - "arm_neon/vbsl_s16"
  - "arm_neon/vld1_lane_u8"
  - "arm_neon/vld2q_lane_u16"
  - "arm_neon/vqshlu_n_s32"
  - "armintr/_arm_smlalbt"
  - "arm_neon/vmla_s8"
  - "arm_neon/vsli_n_p16"
  - "arm_neon/vmla_u8"
  - "arm_neon/vqaddq_s16"
  - "arm_neon/vld3_p16"
  - "arm_neon/uint64x2x4_t"
  - "arm_neon/vcnt_u8"
  - "arm_neon/vcltq_u8"
  - "arm_neon/vtbx1_p8"
  - "arm_neon/vrev32q_u16"
  - "arm_neon/vld1_lane_u16"
  - "arm_neon/vqadd_s16"
  - "arm_neon/vcnt_s8"
  - "armintr/_MulUnsignedHigh"
  - "arm_neon/vsliq_n_u8"
  - "arm_neon/vpmin_s16"
  - "armintr/__iso_volatile_load16"
  - "arm_neon/vst2_lane_f32"
  - "arm_neon/vqsubq_s32"
  - "arm_neon/vqshl_s32"
  - "arm_neon/vsraq_n_u32"
  - "arm_neon/vcreate_s32"
  - "arm_neon/vld3q_lane_u32"
  - "arm_neon/vaddq_u16"
  - "arm_neon/vand_s32"
  - "arm_neon/vbicq_s32"
  - "armintr/_arm_smulbt"
  - "arm_neon/vrsra_n_s8"
  - "arm_neon/vshrq_n_u32"
  - "arm_neon/vld4_f16"
  - "arm_neon/vcagtq_f32"
  - "arm_neon/vaddw_u32"
  - "armintr/_arm_uxtah"
  - "arm_neon/vtstq_u8"
  - "arm_neon/vld1_dup_u16"
  - "arm_neon/int16x4x4_t"
  - "arm_neon/vqshluq_n_s8"
  - "arm_neon/vqdmulhq_n_s32"
  - "arm_neon/vst1_s64"
  - "arm_neon/vrsubhn_u16"
  - "arm_neon/vld4_dup_p16"
  - "arm_neon/vmlaq_s32"
  - "arm_neon/vnegq_s32"
  - "arm_neon/vst2q_u8"
  - "arm_neon/vget_low_s32"
  - "arm_neon/vorn_u32"
  - "arm_neon/vld1q_s8"
  - "arm_neon/vandq_s64"
  - "arm_neon/vmvn_p8"
  - "arm_neon/vabdl_s16"
  - "arm_neon/vqshl_u32"
  - "arm_neon/vld3_dup_u16"
  - "arm_neon/vmov_n_f32"
  - "arm_neon/vcvt_f32_u32"
  - "arm_neon/vrhadd_s8"
  - "arm_neon/vpadal_u32"
  - "armintr/_arm_ubfx"
  - "arm_neon/vcgt_s8"
  - "arm_neon/vget_lane_f32"
  - "arm_neon/vcge_s16"
  - "arm_neon/vmov_n_s64"
  - "arm_neon/vmulq_n_f32"
  - "arm_neon/vpadalq_u32"
  - "armintr/_arm_smlaldx"
  - "arm_neon/vtst_u16"
  - "arm_neon/vmls_n_s16"
  - "arm_neon/vcombine_f32"
  - "arm_neon/vld1q_p16"
  - "armintr/_arm_ssat"
  - "arm_neon/vextq_s8"
  - "arm_neon/vmax_u32"
  - "arm_neon/vqsubq_s64"
  - "arm_neon/vcltq_s16"
  - "arm_neon/vst2q_s8"
  - "arm_neon/vpmax_u8"
  - "arm_neon/vld4_dup_p8"
  - "arm_neon/vrshr_n_u64"
  - "arm_neon/vqrshrun_n_s16"
  - "arm_neon/vget_low_u64"
  - "arm_neon/vst2q_s32"
  - "arm_neon/vst4_s32"
  - "arm_neon/vrshrq_n_u8"
  - "arm_neon/vdupq_n_u64"
  - "arm_neon/vsriq_n_u8"
  - "arm_neon/vdupq_lane_u8"
  - "arm_neon/vsriq_n_s64"
  - "arm_neon/vget_low_u8"
  - "arm_neon/vst1_lane_p16"
  - "arm_neon/vld1q_lane_u8"
  - "arm_neon/vcgt_s32"
  - "arm_neon/vst1_lane_u32"
  - "arm_neon/vzipq_p16"
  - "arm_neon/vmvn_u16"
  - "arm_neon/vld1q_lane_u16"
  - "armintr/_MoveToCoprocessor64"
  - "arm_neon/vdup_n_u16"
  - "arm_neon/vzipq_f32"
  - "arm_neon/vshl_s16"
  - "arm_neon/vmlaq_n_s16"
  - "arm_neon/vget_lane_s64"
  - "arm_neon/vld1q_lane_f32"
  - "arm_neon/vnegq_s16"
  - "armintr/_arm_usax"
  - "arm_neon/vabd_s16"
  - "arm_neon/vmovq_n_u32"
  - "arm_neon/vshlq_n_u16"
  - "armintr/_CountLeadingSigns"
  - "arm_neon/vld3q_f16"
  - "arm_neon/vceqq_u32"
  - "arm_neon/int8x8x2_t"
  - "arm_neon/vst2_s64"
  - "arm_neon/vst4q_lane_s16"
  - "arm_neon/vorn_s32"
  - "arm_neon/vcle_f32"
  - "arm_neon/vld1_p16"
  - "arm_neon/vtrn_u32"
  - "arm_neon/vbsl_s32"
  - "arm_neon/float32x2_t"
  - "arm_neon/vmvn_s32"
  - "arm_neon/vqdmlsl_lane_s16"
  - "arm_neon/vtbl3_s8"
  - "arm_neon/vsra_n_u8"
  - "arm_neon/vcvtq_u32_f32"
  - "arm_neon/vst1_p8"
  - "arm_neon/vrev64_p16"
  - "armintr/__ldrexd"
  - "arm_neon/vcgeq_u8"
  - "arm_neon/vmlal_n_s32"
  - "arm_neon/vst1q_lane_p8"
  - "arm_neon/vpadalq_s32"
  - "arm_neon/vtstq_p8"
  - "arm_neon/vld4_lane_u8"
  - "armintr/_arm_ssub16"
  - "arm_neon/vpaddlq_u16"
  - "armintr/_arm_udiv"
  - "arm_neon/vld1_lane_p8"
  - "arm_neon/vst1q_u32"
  - "arm_neon/vld1_f32"
  - "arm_neon/uint64x2x2_t"
  - "arm_neon/vqsubq_u64"
  - "arm_neon/vld4q_s32"
  - "arm_neon/vceq_s16"
  - "arm_neon/vst3_s64"
  - "arm_neon/vext_s8"
  - "armintr/_arm_smlsd"
  - "arm_neon/vpadal_s16"
  - "arm_neon/vbic_s32"
  - "arm_neon/vld1_dup_u8"
  - "arm_neon/vclt_f32"
  - "arm_neon/vrev64_s16"
  - "arm_neon/vrshlq_s64"
  - "arm_neon/vdupq_n_s64"
  - "arm_neon/vuzp_p16"
  - "arm_neon/vld3_dup_p16"
  - "arm_neon/vcreate_s8"
  - "armintr/_arm_smlatt"
  - "arm_neon/vtst_s32"
  - "arm_neon/vshrq_n_s64"
  - "arm_neon/vqshlq_n_s64"
  - "arm_neon/vqshlu_n_s16"
  - "arm_neon/vcleq_s16"
  - "arm_neon/vmull_lane_s16"
  - "arm_neon/int32x4_t"
  - "arm_neon/vqadd_s8"
  - "arm_neon/vld2q_f16"
  - "arm_neon/vld2q_lane_p16"
  - "arm_neon/vadd_u32"
  - "arm_neon/vcntq_u8"
  - "arm_neon/vst1_f32"
  - "arm_neon/vmaxq_u32"
  - "arm_neon/vsub_u64"
  - "arm_neon/vsubl_s32"
  - "arm_neon/poly16x4_t"
  - "arm_neon/vgetq_lane_u16"
  - "arm_neon/vdup_lane_s32"
  - "arm_neon/vrhadd_s32"
  - "arm_neon/veorq_u8"
  - "arm_neon/vclzq_s8"
  - "arm_neon/vsliq_n_s64"
  - "arm_neon/vpadalq_s16"
  - "arm_neon/vmla_n_f32"
  - "arm_neon/vcgt_u16"
  - "armintr/_arm_usada8"
  - "arm_neon/vabd_u32"
  - "arm_neon/vgetq_lane_s8"
  - "arm_neon/vqshlq_n_u64"
  - "arm_neon/vabaq_u32"
  - "armintr/_arm_uhsax"
  - "arm_neon/vmulq_f32"
  - "arm_neon/vld3_dup_s16"
  - "arm_neon/vst3_f16"
  - "arm_neon/vrshrq_n_s64"
  - "armintr/__rdpmccntr64"
  - "arm_neon/vclsq_s32"
  - "arm_neon/vmax_u16"
  - "arm_neon/vmvnq_p8"
  - "arm_neon/veor_u16"
  - "arm_neon/vqshrn_n_u32"
  - "arm_neon/vextq_u64"
  - "arm_neon/vld1q_f32"
  - "arm_neon/vget_low_u32"
  - "arm_neon/vhaddq_s32"
  - "arm_neon/vminq_u16"
  - "arm_neon/vqrdmulhq_lane_s32"
  - "arm_neon/vmla_s16"
  - "arm_neon/vadd_s16"
  - "arm_neon/vbsl_u16"
  - "arm_neon/vhsub_s8"
  - "arm_neon/vld4q_lane_p16"
  - "arm_neon/vld1_s16"
  - "arm_neon/vst2q_lane_p16"
  - "arm_neon/vld2_dup_s8"
  - "arm_neon/vst3q_s16"
  - "arm_neon/vcgeq_u32"
  - "arm_neon/vabdq_s16"
  - "arm_neon/vrhadd_u16"
  - "arm_neon/vqshlq_n_u32"
  - "arm_neon/vst4q_lane_u32"
  - "arm_neon/vrsraq_n_u64"
  - "arm_neon/vmlsq_n_s32"
  - "arm_neon/vld4_u8"
  - "arm_neon/vld2_f16"
  - "arm_neon/vqshlq_u8"
  - "arm_neon/vorrq_u64"
  - "arm_neon/vmin_u16"
  - "arm_neon/vext_u8"
  - "arm_neon/vpaddl_s32"
  - "arm_neon/vshlq_u64"
  - "arm_neon/vst2q_lane_f16"
  - "armintr/_arm_sbfx"
  - "arm_neon/vld3_dup_f16"
  - "armintr/_arm_uhasx"
  - "arm_neon/vst2_lane_u8"
  - "armintr/_arm_smultb"
  - "arm_neon/vdup_n_p16"
  - "arm_neon/vtrnq_u32"
  - "arm_neon/vrshlq_u8"
  - "arm_neon/vld4_lane_p16"
  - "arm_neon/vsraq_n_s32"
  - "arm_neon/vclt_s16"
  - "arm_neon/vzip_u8"
  - "arm_neon/vld3_lane_s16"
  - "arm_neon/vceqq_s32"
  - "arm_neon/vld3_dup_f32"
  - "arm_neon/vld4q_lane_s32"
  - "arm_neon/poly8x16x4_t"
  - "arm_neon/uint64x1x2_t"
  - "arm_neon/vqdmlal_n_s16"
  - "arm_neon/vld2_dup_f16"
  - "arm_neon/vshrq_n_s32"
  - "arm_neon/vcleq_s8"
  - "arm_neon/vld3_s32"
  - "arm_neon/vqrshlq_s64"
  - "arm_neon/vbsl_f32"
  - "arm_neon/vext_s64"
  - "arm_neon/vabaq_s32"
  - "arm_neon/vmulq_s16"
  - "arm_neon/vld3_lane_u16"
  - "arm_neon/vld3q_lane_u16"
  - "armintr/_arm_smlaltt"
  - "arm_neon/poly8x8x2_t"
  - "arm_neon/vst3q_u32"
  - "armintr/_arm_smlsdx"
  - "arm_neon/vqrshl_s64"
  - "arm_neon/vextq_p8"
  - "armintr/_arm_uhsub16"
  - "arm_neon/vld3q_p8"
  - "armintr/_arm_smlawt"
  - "armintr/_arm_smlawb"
  - "arm_neon/vdupq_lane_s8"
  - "arm_neon/vaddl_s16"
  - "arm_neon/vcombine_p16"
  - "arm_neon/vzipq_u32"
  - "arm_neon/poly16x8_t"
  - "arm_neon/vshlq_n_s32"
  - "arm_neon/vrshl_s8"
  - "arm_neon/vst2_u64"
  - "arm_neon/vrev64q_s8"
  - "arm_neon/vst2q_lane_s32"
  - "arm_neon/vld2_dup_s16"
  - "arm_neon/vclt_u16"
  - "arm_neon/vuzp_p8"
  - "arm_neon/vshrq_n_s16"
  - "arm_neon/vst3_u64"
  - "arm_neon/vpmin_u16"
  - "arm_neon/vld3q_lane_s32"
  - "arm_neon/vmlal_s16"
  - "arm_neon/poly16x4x4_t"
  - "arm_neon/vorr_u16"
  - "arm_neon/vsliq_n_s16"
  - "arm_neon/vaddl_u8"
  - "arm_neon/vld4_dup_s32"
  - "arm_neon/vld2_f32"
  - "arm_neon/vclt_u32"
  - "arm_neon/vmull_lane_u16"
  - "arm_neon/vsubw_u32"
  - "arm_neon/vld2_dup_s32"
  - "arm_neon/vuzp_s32"
  - "arm_neon/vcge_s32"
  - "arm_neon/vdup_lane_p16"
  - "arm_neon/vpmin_s8"
  - "arm_neon/vpaddlq_u32"
  - "arm_neon/vmlaq_n_s32"
  - "arm_neon/vshrn_n_u64"
  - "arm_neon/vrshr_n_u16"
  - "arm_neon/vld1_s64"
  - "arm_neon/vbsl_u64"
  - "armintr/_arm_smlad"
  - "arm_neon/vqsub_s16"
  - "arm_neon/vld4_p8"
  - "arm_neon/vqdmulh_lane_s32"
  - "arm_neon/vld3_dup_s64"
  - "arm_neon/vornq_s32"
  - "arm_neon/vpadd_u8"
  - "arm_neon/vld3_lane_p16"
  - "arm_neon/uint64x1x4_t"
  - "arm_neon/vld3_u16"
  - "armintr/_arm_shsax"
  - "arm_neon/vabdq_u16"
  - "arm_neon/vcgtq_f32"
  - "arm_neon/vsubq_s8"
  - "arm_neon/vget_low_f16"
  - "arm_neon/vld4_dup_u64"
  - "arm_neon/vst3_lane_s8"
  - "armintr/_arm_ssat16"
  - "arm_neon/vmlaq_f32"
  - "arm_neon/vsri_n_s32"
  - "arm_neon/vmax_u8"
  - "arm_neon/vqadd_u8"
  - "armintr/_arm_uqsub8"
  - "armintr/_arm_clz"
  - "arm_neon/vcgtq_s32"
  - "arm_neon/vraddhn_s32"
  - "arm_neon/vzip_s8"
  - "arm_neon/veorq_s16"
  - "arm_neon/vsetq_lane_s32"
  - "arm_neon/vmul_n_u16"
  - "armintr/_ReadBankedReg"
  - "arm_neon/vld1q_u8"
  - "arm_neon/vld4_p16"
  - "arm_neon/int64x2x2_t"
  - "arm_neon/vmaxq_s8"
  - "arm_neon/vpmax_s16"
  - "arm_neon/vshlq_u16"
  - "arm_neon/vtrnq_p16"
  - "arm_neon/vabal_u16"
  - "arm_neon/vld2_lane_u16"
  - "arm_neon/vrev32_u8"
  - "arm_neon/vrshl_s32"
  - "arm_neon/vget_low_f32"
  - "arm_neon/vld2_s8"
  - "arm_neon/vclzq_s16"
  - "arm_neon/vqdmulhq_n_s16"
  - "arm_neon/vset_lane_u64"
  - "arm_neon/vld2_dup_p16"
  - "arm_neon/vpaddlq_s32"
  - "arm_neon/vld2q_p8"
  - "arm_neon/vst3_lane_u8"
  - "arm_neon/vld4_dup_f32"
  - "arm_neon/vld2_s64"
  - "arm_neon/vmls_u8"
  - "arm_neon/vtbx4_u8"
  - "arm_neon/vsetq_lane_f32"
  - "arm_neon/vcvt_s32_f32"
  - "arm_neon/vst3q_s32"
  - "arm_neon/vmlsq_s8"
  - "arm_neon/vmlaq_n_u16"
  - "armintr/__iso_volatile_load64"
  - "arm_neon/vcgt_u8"
  - "arm_neon/vld2_dup_p8"
  - "arm_neon/vmov_n_u8"
  - "armintr/_arm_sasx"
  - "arm_neon/vmovq_n_p16"
  - "arm_neon/vmlaq_u32"
  - "arm_neon/vst3_f32"
  - "arm_neon/int32x2x4_t"
  - "arm_neon/vld1q_lane_u64"
  - "arm_neon/vclz_u16"
  - "arm_neon/uint8x8_t"
  - "arm_neon/vsub_u32"
  - "arm_neon/vorn_u8"
  - "armintr/__wfe"
  - "arm_neon/vget_high_s16"
  - "arm_neon/vzip_p8"
  - "arm_neon/vmlal_lane_s16"
  - "arm_neon/vmulq_u8"
  - "armintr/_isunordered"
  - "arm_neon/vld1_dup_f32"
  - "arm_neon/vld4_lane_s16"
  - "arm_neon/vdupq_n_s16"
  - "arm_neon/vst3q_p16"
  - "arm_neon/vst1_lane_f32"
  - "arm_neon/float32x4x3_t"
  - "arm_neon/vand_s8"
  - "arm_neon/float32x2x4_t"
  - "arm_neon/vld3_p8"
  - "arm_neon/vmlaq_lane_u16"
  - "armintr/_arm_uqsub16"
  - "arm_neon/vget_high_s32"
  - "arm_neon/vshl_n_s32"
  - "arm_neon/vornq_s8"
  - "arm_neon/vmlsl_n_u32"
  - "arm_neon/vqshlq_n_s8"
  - "arm_neon/int32x2x2_t"
  - "arm_neon/int16x4x2_t"
  - "arm_neon/vceqq_u8"
  - "arm_neon/vcreate_f16"
  - "arm_neon/vorn_s16"
  - "arm_neon/vqmovn_s32"
  - "arm_neon/vextq_u8"
  - "arm_neon/vld4_s32"
  - "armintr/_WriteStatusReg"
  - "arm_neon/uint8x16_t"
  - "arm_neon/vshrn_n_s64"
  - "arm_neon/vmul_n_u32"
  - "arm_neon/vabdl_u8"
  - "arm_neon/vtbx3_s8"
  - "arm_neon/vaddhn_s16"
  - "arm_neon/vld3q_s8"
  - "arm_neon/vmlsl_n_u16"
  - "arm_neon/vrev64q_s32"
  - "arm_neon/int16x8_t"
  - "arm_neon/vext_s32"
  - "arm_neon/vdupq_n_f32"
  - "arm_neon/vld1q_lane_s32"
  - "arm_neon/vqrshlq_u32"
  - "arm_neon/vtbl2_u8"
  - "arm_neon/vgetq_lane_u8"
  - "arm_neon/veorq_u64"
  - "arm_neon/vcntq_s8"
  - "arm_neon/vbslq_p16"
  - "arm_neon/vqnegq_s32"
  - "arm_neon/vaddw_s32"
  - "arm_neon/vmov_n_p8"
  - "arm_neon/vmull_p8"
  - "arm_neon/vld1_lane_u32"
  - "arm_neon/vcombine_s16"
  - "arm_neon/vqshrn_n_s64"
  - "arm_neon/vceqq_s16"
  - "arm_neon/vld4q_p16"
  - "armintr/_ReadStatusReg"
  - "armintr/_arm_qdadd"
  - "arm_neon/uint32x4x2_t"
  - "arm_neon/vcleq_u8"
  - "armintr/_arm_sxtah"
  - "arm_neon/vrhaddq_s32"
  - "arm_neon/vset_lane_s64"
  - "arm_neon/vld4_s64"
  - "armintr/_DAddSatInt"
  - "arm_neon/vorr_s8"
  - "arm_neon/vst2_u32"
  - "arm_neon/vshll_n_u16"
  - "arm_neon/vld2_dup_u32"
  - "arm_neon/vst3q_lane_s32"
  - "arm_neon/vst3q_p8"
  - "armintr/_MoveFromCoprocessor"
  - "arm_neon/uint32x4_t"
  - "arm_neon/vuzpq_s8"
  - "arm_neon/vrecps_f32"
  - "arm_neon/vst1_lane_s8"
  - "arm_neon/vtbx1_s8"
  - "arm_neon/uint16x8x3_t"
  - "arm_neon/vpaddl_s16"
  - "arm_neon/vsubq_s64"
  - "arm_neon/vrsraq_n_u8"
  - "arm_neon/vqadd_s64"
  - "arm_neon/vst4_lane_s16"
  - "arm_neon/vqadd_u16"
  - "arm_neon/vset_lane_u32"
  - "arm_neon/vand_u32"
  - "arm_neon/vrsqrtsq_f32"
  - "arm_neon/vqaddq_u32"
  - "arm_neon/vsra_n_s64"
  - "armintr/_arm_umlal"
  - "arm_neon/vcvt_f32_f16"
  - "arm_neon/vget_lane_u32"
  - "arm_neon/vbsl_s8"
  - "arm_neon/vrshlq_u32"
  - "arm_neon/vqdmull_lane_s16"
  - "arm_neon/vabsq_s32"
  - "arm_neon/vld3_s8"
  - "arm_neon/vst3q_lane_s16"
  - "arm_neon/vld2q_lane_s16"
  - "arm_neon/vst1_lane_s64"
  - "arm_neon/vmov_n_u16"
  - "arm_neon/vst4_lane_u8"
  - "arm_neon/vshll_n_u32"
  - "arm_neon/vqabs_s8"
  - "arm_neon/vmvnq_u8"
  - "arm_neon/vpadalq_u16"
  - "arm_neon/vbsl_p16"
  - "arm_neon/vqrshrn_n_u16"
  - "arm_neon/vld3q_u32"
  - "arm_neon/vcgeq_f32"
  - "armintr/__iso_volatile_load32"
  - "arm_neon/vrecpe_u32"
  - "arm_neon/vld2_dup_u64"
  - "arm_neon/vld3q_f32"
  - "armintr/_arm_shsub8"
  - "arm_neon/vdup_lane_s64"
  - "arm_neon/vqrshl_s8"
  - "arm_neon/vsliq_n_u16"
  - "arm_neon/vld1q_u16"
  - "arm_neon/vorr_u32"
  - "arm_neon/vqrshl_s32"
  - "armintr/__dmb"
  - "arm_neon/veorq_s8"
  - "arm_neon/vld1_u16"
  - "arm_neon/vmov_n_u32"
  - "arm_neon/vhsub_s16"
  - "arm_neon/vst4q_lane_u16"
  - "arm_neon/vbsl_u8"
  - "armintr/_arm_uxtab"
  - "arm_neon/vld2q_lane_f32"
  - "arm_neon/vst2_p8"
  - "armintr/_arm_smmla"
  - "arm_neon/vaddw_u16"
  - "arm_neon/vmlal_s8"
  - "arm_neon/vtst_u32"
  - "arm_neon/vtbl4_u8"
  - "arm_neon/vcvt_n_f32_s32"
  - "arm_neon/vcageq_f32"
  - "arm_neon/vget_low_s16"
  - "arm_neon/vdupq_n_u8"
  - "arm_neon/vorn_s8"
  - "arm_neon/uint8x16x3_t"
  - "arm_neon/vabdq_u32"
  - "arm_neon/vrev64_p8"
  - "arm_neon/vqsubq_s8"
  - "armintr/_arm_smlabb"
  - "arm_neon/vbicq_s64"
  - "arm_neon/vmaxq_u16"
  - "arm_neon/vdup_n_u8"
  - "arm_neon/veor_s8"
  - "arm_neon/int16x8x2_t"
  - "arm_neon/vcvtq_s32_f32"
  - "arm_neon/vtrn_u16"
  - "arm_neon/vbslq_s32"
  - "arm_neon/vld1q_dup_u32"
  - "arm_neon/vmul_n_f32"
  - "arm_neon/vqrshl_u32"
  - "arm_neon/vqsubq_s16"
  - "arm_neon/vst2_lane_f16"
  - "armintr/_arm_smulwt"
  - "arm_neon/vrshrn_n_u32"
  - "arm_neon/vget_high_p16"
  - "arm_neon/vqadd_u64"
  - "arm_neon/vsli_n_s32"
  - "arm_neon/vhadd_u32"
  - "arm_neon/vmlsl_lane_u16"
  - "arm_neon/vclzq_u32"
  - "arm_neon/vqshrun_n_s64"
  - "arm_neon/vrev64q_u32"
  - "arm_neon/vqshrun_n_s16"
  - "arm_neon/vrev32q_s8"
  - "armintr/_arm_shasx"
  - "arm_neon/vaddl_s8"
  - "armintr/_arm_smull"
  - "arm_neon/vabaq_u8"
  - "armintr/_arm_revsh"
  - "arm_neon/vsubq_f32"
  - "arm_neon/poly16x4x2_t"
  - "arm_neon/poly8x8x3_t"
  - "arm_neon/vsubhn_s64"
  - "arm_neon/vcle_u16"
  - "arm_neon/poly8x16x3_t"
  - "arm_neon/vqdmlsl_n_s16"
  - "arm_neon/vqshl_u64"
  - "arm_neon/vcge_u16"
  - "armintr/_arm_uasx"
  - "arm_neon/vmovl_s32"
  - "arm_neon/vst1q_lane_u16"
  - "arm_neon/vbic_u32"
  - "arm_neon/vld2_s16"
  - "armintr/_arm_qasx"
  - "arm_neon/vorrq_u8"
  - "arm_neon/vst2_s32"
  - "armintr/_WriteBankedReg"
  - "arm_neon/veorq_s64"
  - "arm_neon/vld4_lane_f32"
  - "arm_neon/vcreate_u8"
  - "arm_neon/vset_lane_u8"
  - "arm_neon/vandq_u16"
  - "arm_neon/vrsubhn_s64"
  - "arm_neon/vst1q_lane_p16"
  - "arm_neon/uint8x8x2_t"
  - "arm_neon/vmlsl_s8"
  - "arm_neon/vmax_s32"
  - "arm_neon/uint32x4x3_t"
  - "arm_neon/vld4_dup_u16"
  - "arm_neon/vabs_s32"
  - "arm_neon/vld3_dup_u32"
  - "arm_neon/vrshl_u16"
  - "arm_neon/vcle_u8"
  - "arm_neon/vqshl_n_u16"
  - "arm_neon/vbic_s8"
  - "arm_neon/float32x4x2_t"
  - "arm_neon/vmls_f32"
  - "arm_neon/vshll_n_u8"
  - "arm_neon/vminq_s8"
  - "arm_neon/vmlsq_lane_f32"
  - "arm_neon/vst1q_f16"
  - "arm_neon/vst1_lane_u64"
  - "arm_neon/vrhadd_u8"
  - "arm_neon/vclt_s32"
  - "arm_neon/vst2_p16"
  - "arm_neon/vrshrq_n_u16"
  - "arm_neon/vneg_s32"
  - "arm_neon/vmovl_s16"
  - "arm_neon/vqshlq_s8"
  - "arm_neon/vld1_s8"
  - "arm_neon/vqdmulh_s32"
  - "arm_neon/vcls_s8"
  - "armintr/__trap"
  - "arm_neon/vuzp_u32"
  - "armintr/_CopyInt64FromDouble"
  - "arm_neon/int8x16x2_t"
  - "arm_neon/vmovn_s32"
  - "arm_neon/vget_high_s8"
  - "arm_neon/veor_s64"
  - "armintr/_arm_uadd8"
  - "arm_neon/vrev16_u8"
  - "arm_neon/vbicq_u64"
  - "arm_neon/vst4_lane_f16"
  - "arm_neon/vst3_s32"
  - "arm_neon/poly8x8_t"
  - "arm_neon/vtstq_u16"
  - "arm_neon/vld1_lane_s8"
  - "arm_neon/float32x4x4_t"
  - "arm_neon/vst2_s16"
  - "arm_neon/vqrdmulhq_s32"
  - "arm_neon/vqdmulhq_s16"
  - "arm_neon/vrshrq_n_s8"
  - "arm_neon/vcle_s32"
  - "arm_neon/vtbl3_p8"
  - "arm_neon/vbslq_u8"
  - "arm_neon/vst4_u64"
  - "armintr/_arm_umaal"
  - "arm_neon/vshll_n_s8"
  - "arm_neon/vcvt_u32_f32"
  - "arm_neon/vld4q_p8"
  - "arm_neon/vsetq_lane_u16"
  - "arm_neon/vabd_u8"
  - "arm_neon/vclz_u8"
  - "arm_neon/vsubq_u32"
  - "arm_neon/vld1q_lane_p16"
  - "arm_neon/vcgtq_s16"
  - "arm_neon/vmla_lane_s32"
  - "arm_neon/vshlq_n_s64"
  - "arm_neon/vbsl_u32"
  - "arm_neon/vqshlq_s16"
  - "armintr/_arm_qadd8"
  - "arm_neon/vrshr_n_s32"
  - "armintr/_CountOneBits64"
  - "arm_neon/vceq_u32"
  - "arm_neon/vbsl_p8"
  - "arm_neon/uint16x8x2_t"
  - "arm_neon/vsli_n_s16"
  - "arm_neon/vmla_n_s32"
  - "arm_neon/vld4_dup_u32"
  - "arm_neon/vshrq_n_s8"
  - "arm_neon/vqaddq_s8"
  - "arm_neon/vshl_n_u64"
  - "arm_neon/vtbl2_p8"
  - "arm_neon/vcleq_u32"
  - "arm_neon/vqsub_u32"
  - "arm_neon/vmovl_u8"
  - "arm_neon/vmlal_u8"
  - "arm_neon/vmul_s8"
  - "armintr/_MoveFromCoprocessor64"
  - "arm_neon/vrsraq_n_s16"
  - "arm_neon/vdupq_n_u32"
  - "arm_neon/vmov_n_s16"
  - "arm_neon/vst4_lane_p8"
  - "arm_neon/vld1_s32"
  - "arm_neon/vst4_p8"
  - "arm_neon/vsriq_n_u32"
  - "arm_neon/vqdmull_n_s16"
  - "arm_neon/vshlq_u32"
  - "arm_neon/vld3_u8"
  - "armintr/_arm_usub16"
  - "arm_neon/vmlsq_lane_s16"
  - "arm_neon/vmovq_n_s8"
  - "arm_neon/int32x4x2_t"
  - "arm_neon/vld4q_u8"
  - "arm_neon/poly16x8x2_t"
  - "arm_neon/vld1q_u64"
  - "arm_neon/vld3q_lane_s16"
  - "arm_neon/int64x1x2_t"
  - "arm_neon/vshlq_n_s8"
  - "arm_neon/vrshl_s64"
  - "arm_neon/vqshl_n_u8"
  - "armintr/_arm_qadd"
  - "armintr/_DSubSatInt"
  - "armintr/_arm_usat16"
  - "arm_neon/vmull_s8"
  - "arm_neon/vsub_s8"
  - "arm_neon/vmovq_n_u16"
  - "arm_neon/vst4_u16"
  - "arm_neon/vmlsl_lane_u32"
  - "arm_neon/vsliq_n_p16"
  - "arm_neon/vmovn_u32"
  - "arm_neon/vbic_u16"
  - "arm_neon/vtbx2_p8"
  - "arm_neon/vrsubhn_s32"
  - "armintr/_SubSatInt"
  - "arm_neon/vst3_u8"
  - "arm_neon/vdupq_n_s32"
  - "arm_neon/vcntq_p8"
  - "arm_neon/vst4_f32"
  - "arm_neon/vbic_s64"
  - "arm_neon/vld3_s64"
  - "arm_neon/vrsra_n_s64"
  - "arm_neon/vqabsq_s16"
  - "arm_neon/vsriq_n_p8"
  - "arm_neon/vst2_lane_p16"
  - "arm_neon/vabsq_s16"
  - "arm_neon/vcombine_u8"
  - "arm_neon/vld2q_p16"
  - "armintr/_CountOneBits"
  - "armintr/__prefetch"
  - "arm_neon/vld3_dup_u64"
  - "arm_neon/vld2q_s16"
  - "arm_neon/vget_low_p16"
  - "arm_neon/vuzpq_u8"
  - "arm_neon/vrev32q_s16"
  - "armintr/_AddSatInt"
  - "arm_neon/uint16x4x2_t"
  - "arm_neon/vmov_n_s32"
  - "arm_neon/vaddl_u16"
  - "arm_neon/vqaddq_s64"
  - "arm_neon/vmlaq_u16"
  - "arm_neon/vsli_n_s8"
  - "armintr/_arm_sxth"
  - "arm_neon/vorr_s32"
  - "arm_neon/vsra_n_u64"
  - "arm_neon/vst2_f16"
  - "arm_neon/vcombine_u16"
  - "arm_neon/vabs_s16"
  - "arm_neon/vsubhn_s32"
  - "arm_neon/vst1q_lane_u32"
  - "arm_neon/vst3_p8"
  - "arm_neon/vqshrun_n_s32"
  - "arm_neon/vcreate_s64"
  - "arm_neon/vld4q_lane_s16"
  - "arm_neon/vzipq_u16"
  - "arm_neon/vmin_s32"
  - "armintr/_CopyInt32FromFloat"
  - "arm_neon/vcgtq_u32"
  - "arm_neon/vabdl_s32"
  - "arm_neon/vqshlq_n_u16"
  - "arm_neon/int8x16x4_t"
  - "arm_neon/vqrdmulh_n_s32"
  - "arm_neon/vqaddq_u64"
  - "arm_neon/vhaddq_s8"
  - "arm_neon/vshll_n_s16"
  - "arm_neon/vuzp_u8"
  - "arm_neon/vaddl_u32"
  - "arm_neon/vld4q_s16"
  - "arm_neon/vqmovun_s16"
  - "arm_neon/vld1q_lane_s8"
  - "arm_neon/vld2_lane_u32"
  - "arm_neon/vrshr_n_s8"
  - "arm_neon/vmlaq_s16"
  - "armintr/_CopyFloatFromInt32"
  - "arm_neon/vmul_f32"
  - "arm_neon/vmlaq_n_f32"
  - "arm_neon/vst4_s16"
  - "arm_neon/vld1_dup_s32"
  - "arm_neon/vmul_u16"
  - "arm_neon/vhaddq_s16"
  - "arm_neon/vst1q_lane_f32"
  - "arm_neon/vrhaddq_u16"
  - "arm_neon/vbicq_u32"
  - "arm_neon/vrev32_s8"
  - "arm_neon/vmlaq_s8"
  - "arm_neon/vmin_s16"
  - "arm_neon/vst3_lane_p16"
  - "arm_neon/vst2q_lane_f32"
  - "arm_neon/vld4q_lane_f32"
  - "arm_neon/vget_low_u16"
  - "arm_neon/vqsub_s32"
  - "arm_neon/vtbl1_s8"
  - "arm_neon/vmovn_s64"
  - "arm_neon/vpmax_s8"
  - "arm_neon/int8x16_t"
  - "arm_neon/vpmin_u8"
  - "arm_neon/vdup_lane_p8"
  - "arm_neon/vsetq_lane_u64"
  - "arm_neon/vuzpq_u16"
  - "arm_neon/vcgeq_u16"
  - "arm_neon/uint8x16x2_t"
  - "armintr/_arm_rev16"
  - "armintr/_arm_sxtb"
  - "arm_neon/vsliq_n_u64"
  - "arm_neon/vmovq_n_u8"
  - "arm_neon/vshlq_n_u32"
  - "arm_neon/vcombine_s64"
  - "armintr/_arm_qsax"
  - "arm_neon/vmin_f32"
  - "armintr/_arm_sadd16"
  - "arm_neon/vmlsq_n_s16"
  - "arm_neon/vorr_u64"
  - "arm_neon/vqrshrun_n_s64"
  - "arm_neon/vld2q_lane_s32"
  - "arm_neon/vgetq_lane_p16"
  - "arm_neon/vrev32_s16"
  - "arm_neon/vqshl_u16"
  - "arm_neon/vtrn_s8"
  - "arm_neon/vst1q_lane_s64"
  - "arm_neon/vtbl4_p8"
  - "arm_neon/vst1_p16"
  - "arm_neon/vmvn_u8"
  - "arm_neon/vld2_lane_u8"
  - "arm_neon/vld2q_u16"
  - "arm_neon/vmovl_s8"
  - "arm_neon/vbslq_u64"
  - "arm_neon/vmls_s8"
  - "arm_neon/vld3q_p16"
  - "arm_neon/vtbl3_u8"
  - "arm_neon/vabs_f32"
  - "arm_neon/vsraq_n_s8"
  - "arm_neon/vqadd_s32"
  - "arm_neon/vmulq_n_s16"
  - "arm_neon/vst3q_s8"
  - "arm_neon/vaddhn_s64"
  - "arm_neon/vmul_n_s16"
  - "arm_neon/vtbl1_p8"
  - "arm_neon/uint64x2x3_t"
  - "arm_neon/vmlsq_s32"
  - "arm_neon/vld2q_lane_u32"
  - "arm_neon/vaddq_u8"
  - "arm_neon/vcombine_f16"
  - "arm_neon/vandq_s16"
  - "arm_neon/vst4q_lane_p16"
  - "arm_neon/vsri_n_u8"
  - "arm_neon/vst3_lane_p8"
  - "arm_neon/vst3_lane_s16"
  - "arm_neon/vdup_n_s16"
  - "arm_neon/vbicq_s8"
  - "arm_neon/vdup_lane_u8"
  - "arm_neon/vst4q_lane_s32"
  - "arm_neon/vqrshl_u16"
  - "arm_neon/vrsra_n_u32"
  - "arm_neon/vdupq_lane_p8"
  - "arm_neon/vld3_lane_u8"
  - "arm_neon/vqrdmulh_n_s16"
  - "arm_neon/vpmin_s32"
  - "armintr/__cps"
  - "arm_neon/vshl_u32"
  - "armintr/_arm_uadd16"
  - "arm_neon/vld3_s16"
  - "arm_neon/vcvt_f32_s32"
  - "arm_neon/vshlq_n_u64"
  - "arm_neon/vrev64q_u8"
  - "arm_neon/vextq_u16"
  - "arm_neon/vsubl_s16"
  - "arm_neon/vget_lane_p8"
  - "arm_neon/vabal_s16"
  - "arm_neon/vrecpeq_u32"
  - "arm_neon/vminq_u8"
  - "arm_neon/veor_s16"
  - "arm_neon/vmull_n_u16"
  - "arm_neon/vshl_n_u8"
  - "arm_neon/vrev32q_u8"
  - "arm_neon/vandq_s8"
  - "arm_neon/vrshlq_s16"
  - "arm_neon/vst4q_p16"
  - "arm_neon/vandq_s32"
  - "armintr/_MoveToCoprocessor2"
  - "arm_neon/vqdmlsl_lane_s32"
  - "arm_neon/vld1q_s64"
  - "arm_neon/vmull_n_s16"
  - "arm_neon/vneg_s16"
  - "arm_neon/vqshluq_n_s64"
  - "arm_neon/vst2_lane_s32"
  - "arm_neon/vmvnq_u16"
  - "arm_neon/vshll_n_s32"
  - "arm_neon/vld3_dup_s8"
  - "arm_neon/vtstq_s32"
  - "arm_neon/vmlsl_u32"
  - "arm_neon/vqdmulhq_lane_s16"
  - "arm_neon/vaddl_s32"
  - "armintr/_CountLeadingZeros"
  - "arm_neon/vqrshrn_n_s16"
  - "arm_neon/vmla_lane_u32"
  - "arm_neon/vst1_u8"
  - "arm_neon/vshl_u64"
  - "arm_neon/vshr_n_u8"
  - "arm_neon/vmull_lane_s32"
  - "arm_neon/vmlal_lane_u32"
  - "arm_neon/vsubl_s8"
  - "arm_neon/float32x2x2_t"
  - "armintr/_arm_bfc"
  - "arm_neon/vaddq_s16"
  - "arm_neon/vmlal_lane_s32"
  - "arm_neon/vpadd_u16"
  - "arm_neon/vst2q_lane_u16"
  - "arm_neon/vld4_s8"
  - "arm_neon/vst1q_s8"
  - "arm_neon/vshrq_n_u64"
  - "arm_neon/vsli_n_u16"
  - "arm_neon/vqrdmulh_lane_s32"
  - "arm_neon/vst4_lane_u16"
  - "arm_neon/vabdq_f32"
  - "arm_neon/vld2_lane_f16"
  - "arm_neon/vqsub_u64"
  - "arm_neon/vsub_f32"
  - "arm_neon/vld1q_s16"
  - "arm_neon/vmaxq_s16"
  - "arm_neon/vcombine_u32"
  - "arm_neon/vrsraq_n_u32"
  - "armintr/_arm_smusdx"
  - "arm_neon/vrev16_s8"
  - "arm_neon/vqdmulh_n_s32"
  - "arm_neon/vmul_s32"
  - "arm_neon/vabdq_s32"
  - "arm_neon/veor_u64"
  - "arm_neon/vmlsl_n_s32"
  - "arm_neon/vsub_s16"
  - "arm_neon/vadd_u16"
  - "arm_neon/vsriq_n_u16"
  - "arm_neon/vmla_u32"
  - "arm_neon/vuzpq_s32"
  - "arm_neon/vst4q_s8"
  - "arm_neon/vaddhn_u32"
  - "arm_neon/vmlaq_lane_f32"
  - "arm_neon/vld3_lane_s8"
  - "arm_neon/vsliq_n_u32"
  - "arm_neon/vqrshlq_s8"
  - "arm_neon/vqdmlal_n_s32"
  - "arm_neon/uint8x16x4_t"
  - "arm_neon/vcgtq_u16"
  - "arm_neon/vandq_u32"
  - "arm_neon/vld4q_lane_u32"
  - "arm_neon/vzip_p16"
  - "arm_neon/vget_low_p8"
  - "armintr/_arm_shadd8"
  - "arm_neon/vmovn_s16"
  - "arm_neon/vcge_u8"
  - "arm_neon/vld2q_f32"
  - "arm_neon/vaba_u32"
  - "armintr/__iso_volatile_store8"
  - "arm_neon/vst2q_p16"
  - "arm_neon/vmul_s16"
  - "arm_neon/vand_s16"
  - "arm_neon/vtbx4_p8"
  - "arm_neon/vceq_u8"
  - "arm_neon/vrhaddq_s16"
  - "arm_neon/vgetq_lane_f32"
  - "arm_neon/vqshl_s8"
  - "arm_neon/vbslq_f32"
  - "arm_neon/vrsqrts_f32"
  - "arm_neon/vld2q_s8"
  - "arm_neon/vtbl1_u8"
  - "arm_neon/vtst_u8"
  - "arm_neon/vrev64q_f32"
  - "arm_neon/vcle_s8"
  - "arm_neon/vsetq_lane_p16"
  - "arm_neon/vcreate_p16"
  - "arm_neon/vabal_s32"
  - "armintr/_arm_smlald"
  - "arm_neon/vmla_f32"
  - "arm_neon/vtbx2_s8"
  - "arm_neon/int64x1x3_t"
  - "arm_neon/vclz_s8"
  - "arm_neon/vorr_s16"
  - "arm_neon/vornq_s64"
  - "arm_neon/vst1q_u64"
  - "arm_neon/vdupq_n_s8"
  - "armintr/_arm_sadd8"
  - "arm_neon/vextq_s32"
  - "armintr/_arm_smuadx"
  - "armintr/_arm_qsub"
  - "arm_neon/vadd_f32"
  - "arm_neon/vrshrq_n_s16"
  - "arm_neon/vqsub_s8"
  - "arm_neon/vld3_f32"
  - "arm_neon/vhadd_s8"
  - "arm_neon/vmull_n_u32"
  - "arm_neon/vdup_n_u64"
  - "arm_neon/vsubw_s32"
  - "armintr/_arm_sxtab"
  - "armintr/_arm_uxtb16"
  - "arm_neon/vmvn_s16"
  - "arm_neon/vst1_lane_s16"
  - "arm_neon/vqrdmulhq_n_s32"
  - "arm_neon/vsriq_n_s32"
  - "arm_neon/poly8x16x2_t"
  - "arm_neon/vadd_u8"
  - "arm_neon/vuzpq_p8"
  - "arm_neon/vst2q_p8"
  - "armintr/__wfi"
  - "arm_neon/vget_high_u16"
  - "arm_neon/vqrshl_u64"
  - "arm_neon/vld1_dup_s64"
  - "arm_neon/vqrshrn_n_s32"
  - "arm_neon/vrshr_n_s64"
  - "arm_neon/vst3_s8"
  - "arm_neon/poly16x4x3_t"
  - "arm_neon/vqrdmulh_lane_s16"
  - "arm_neon/vmvnq_u32"
  - "arm_neon/vqsubq_u32"
  - "arm_neon/vmovq_n_p8"
  - "arm_neon/vtrn_s16"
  - "arm_neon/vld2q_u32"
  - "arm_neon/vqsubq_u16"
  - "arm_neon/vrsqrteq_u32"
  - "arm_neon/vadd_u64"
  - "armintr/_arm_usat"
  - "arm_neon/vcvtq_n_u32_f32"
  - "arm_neon/vaddq_s8"
  - "arm_neon/vrsraq_n_u16"
  - "arm_neon/vqabs_s16"
  - "arm_neon/vsra_n_s8"
  - "arm_neon/vsra_n_s16"
  - "arm_neon/vqshlq_n_u8"
  - "arm_neon/vpadal_s8"
  - "arm_neon/vmlal_n_u16"
  - "armintr/_CopyDoubleFromInt64"
  - "arm_neon/vaddw_u8"
  - "arm_neon/vmulq_n_s32"
  - "arm_neon/vqaddq_s32"
  - "arm_neon/vmla_lane_f32"
  - "arm_neon/vmlaq_lane_s32"
  - "arm_neon/vld1q_dup_u64"
  - "arm_neon/uint16x8_t"
  - "arm_neon/vld2_s32"
  - "arm_neon/vcltq_f32"
  - "arm_neon/vst4q_f32"
  - "arm_neon/vsri_n_u16"
  - "arm_neon/vshlq_s32"
  - "arm_neon/vgetq_lane_u32"
  - "arm_neon/vld1q_dup_f16"
  - "arm_neon/vrev64q_s16"
  - "arm_neon/vrshrq_n_u32"
  - "arm_neon/vld2q_s32"
  - "arm_neon/vcgtq_s8"
  - "arm_neon/vsubhn_u64"
  - "arm_neon/vmls_n_s32"
  - "armintr/_arm_smmlar"
  - "arm_neon/vld3_dup_u8"
  - "arm_neon/vld3q_lane_p16"
  - "arm_neon/vld2_dup_s64"
  - "arm_neon/vqabs_s32"
  - "arm_neon/vqaddq_u8"
  - "arm_neon/vminq_u32"
  - "arm_neon/vpaddl_u16"
  - "arm_neon/vaba_s16"
  - "arm_neon/vmul_u32"
  - "arm_neon/vst1_lane_u16"
  - "arm_neon/vcreate_f32"
  - "arm_neon/vcvt_f16_f32"
  - "arm_neon/vset_lane_s32"
  - "arm_neon/vshl_s8"
  - "arm_neon/vcgt_s16"
  - "arm_neon/vtrn_f32"
  - "arm_neon/vget_high_s64"
  - "arm_neon/vld3_dup_p8"
  - "arm_neon/vcreate_u64"
  - "arm_neon/vext_u64"
  - "arm_neon/vld1q_dup_s16"
  - "arm_neon/vget_lane_s16"
  - "arm_neon/vqdmlal_s16"
  - "arm_neon/vld2_p16"
  - "arm_neon/vld4_u16"
  - "armintr/_arm_smlalbb"
  - "arm_neon/vrev64_u8"
  - "arm_neon/vbslq_s64"
  - "arm_neon/vsubw_u16"
  - "arm_neon/vrsubhn_u32"
  - "arm_neon/vabdq_u8"
  - "arm_neon/vmls_n_u32"
  - "arm_neon/vshr_n_s32"
  - "arm_neon/vmulq_n_u32"
  - "arm_neon/vst3_p16"
  - "arm_neon/vrev32_u16"
  - "arm_neon/int8x8x3_t"
  - "arm_neon/vst2q_lane_u32"
  - "arm_neon/vextq_p16"
  - "arm_neon/vtrnq_f32"
  - "armintr/_arm_smultt"
  - "arm_neon/vqneg_s8"
  - "arm_neon/vmlsq_lane_s32"
  - "arm_neon/vmov_n_p16"
  - "arm_neon/vraddhn_u64"
  - "arm_neon/vrhadd_u32"
  - "arm_neon/vrev64_u32"
  - "arm_neon/vrshrn_n_s32"
  - "arm_neon/vld4q_f32"
  - "arm_neon/vst2_s8"
  - "arm_neon/vrsqrteq_f32"
  - "arm_neon/uint16x4_t"
  - "arm_neon/vget_low_s8"
  - "arm_neon/vst2_lane_u32"
  - "arm_neon/vhsub_s32"
  - "arm_neon/vqdmull_lane_s32"
  - "armintr/_arm_smulwb"
  - "arm_neon/vmlsl_u8"
  - "arm_neon/vdup_lane_s16"
  - "arm_neon/vtbx4_s8"
  - "arm_neon/vld4q_lane_u16"
  - "arm_neon/vget_high_u8"
  - "arm_neon/vclzq_s32"
  - "arm_neon/vld1q_dup_f32"
  - "arm_neon/vtrn_u8"
  - "arm_neon/vqabsq_s8"
  - "arm_neon/vdup_lane_f32"
  - "arm_neon/vqrdmulh_s16"
  - "arm_neon/vst4_u32"
  - "arm_neon/vdup_lane_u32"
  - "arm_neon/vst4_u8"
  - "arm_neon/vmovq_n_s32"
  - "arm_neon/vld2_lane_s8"
  - "arm_neon/vld3_u32"
  - "arm_neon/vsubl_u16"
  - "arm_neon/vqshlu_n_s8"
  - "arm_neon/float32x4_t"
  - "arm_neon/vqshl_n_s32"
  - "arm_neon/float32x2x3_t"
  - "armintr/__hvc"
  - "arm_neon/vst1q_lane_f16"
  - "arm_neon/vmvnq_s16"
  - "arm_neon/vst3q_lane_f32"
  - "arm_neon/vld1q_dup_u8"
  - "arm_neon/vmlsq_s16"
  - "arm_neon/vget_lane_u8"
  - "arm_neon/vld1_lane_s32"
  - "arm_neon/vst4q_s16"
  - "armintr/_arm_qsub8"
  - "arm_neon/vorrq_s32"
  - "arm_neon/vsriq_n_s8"
  - "arm_neon/vqshrn_n_u64"
  - "arm_neon/vdup_n_s32"
  - "armintr/_arm_uhsub8"
  - "arm_neon/vld3_lane_s32"
  - "arm_neon/vbsl_s64"
  - "arm_neon/vld1_dup_f16"
  - "arm_neon/vsli_n_u64"
  - "arm_neon/vraddhn_u32"
  - "arm_neon/vsub_u16"
  - "arm_neon/vcltq_u32"
  - "arm_neon/vminq_f32"
  - "arm_neon/vshl_n_s64"
  - "arm_neon/vld4_u32"
  - "arm_neon/vld1_u32"
  - "arm_neon/vaddhn_u16"
  - "arm_neon/vcvtq_n_f32_s32"
  - "arm_neon/vorn_u64"
  - "arm_neon/vsubhn_u16"
  - "arm_neon/int64x1_t"
  - "arm_neon/vst1q_lane_s8"
  - "arm_neon/vld1q_dup_s32"
  - "arm_neon/vrev32_p8"
  - "arm_neon/vst3q_lane_p16"
  - "arm_neon/vrecpeq_f32"
  - "arm_neon/int8x8x4_t"
  - "arm_neon/vshr_n_u32"
  - "arm_neon/vdupq_lane_s64"
  - "arm_neon/vpaddlq_s8"
  - "arm_neon/vqshl_n_u32"
  - "arm_neon/vmul_u8"
  - "arm_neon/vtbx2_u8"
  - "arm_neon/vshr_n_u64"
  - "arm_neon/vqrshlq_s16"
  - "arm_neon/vst3_lane_u16"
  - "arm_neon/vqsub_u8"
  - "arm_neon/vrsra_n_s16"
  - "arm_neon/vaba_s32"
  - "arm_neon/vsri_n_u64"
  - "arm_neon/vst3q_lane_u32"
  - "arm_neon/vmlsq_n_u32"
  - "arm_neon/poly8x16_t"
  - "arm_neon/vld2_u8"
  - "armintr/_arm_smmulr"
  - "arm_neon/vtst_s16"
  - "armintr/_arm_smmls"
  - "arm_neon/vqdmulh_s16"
  - "arm_neon/vtrnq_u8"
  - "arm_neon/vset_lane_p8"
  - "arm_neon/vmlsl_u16"
  - "arm_neon/vshrn_n_u16"
  - "arm_neon/vld1_dup_p8"
  - "arm_neon/vrev16q_s8"
  - "arm_neon/vmov_n_s8"
  - "arm_neon/vld1_u64"
  - "arm_neon/vpmin_f32"
  - "arm_neon/vmla_n_u16"
  - "arm_neon/vst1_f16"
  - "arm_neon/vqdmlsl_s16"
  - "arm_neon/vmin_u32"
  - "armintr/_arm_qsub16"
  - "arm_neon/vcage_f32"
  - "arm_neon/vornq_u32"
  - "arm_neon/vpadd_s16"
  - "arm_neon/vld1_u8"
  - "arm_neon/vhsubq_s16"
  - "arm_neon/vld1_dup_u32"
  - "arm_neon/vld4_u64"
  - "armintr/_MulHigh"
  - "arm_neon/vmaxq_u8"
  - "arm_neon/vget_lane_u16"
  - "arm_neon/vld2q_u8"
  - "arm_neon/vld1q_dup_p16"
  - "arm_neon/vsraq_n_u8"
  - "arm_neon/vqdmlsl_n_s32"
  - "arm_neon/vst1_s16"
  - "arm_neon/vst1q_s32"
  - "arm_neon/vmaxq_f32"
  - "arm_neon/vqdmulh_lane_s16"
  - "armintr/__isb"
  - "arm_neon/vuzpq_p16"
  - "arm_neon/vmls_lane_s16"
  - "arm_neon/vtbl4_s8"
  - "arm_neon/vst1_lane_p8"
  - "arm_neon/vsubw_s8"
  - "arm_neon/vmin_u8"
  - "arm_neon/vzip_u16"
  - "arm_neon/vld4q_u16"
  - "arm_neon/vshrn_n_s32"
  - "arm_neon/vpadal_u16"
  - "arm_neon/vorrq_s8"
  - "arm_neon/vrshlq_u64"
  - "arm_neon/vst3_lane_s32"
  - "arm_neon/vqshluq_n_s32"
  - "armintr/_arm_shsub16"
  - "arm_neon/vst1_u32"
  - "arm_neon/vrhadd_s16"
  - "arm_neon/vzipq_s32"
  - "arm_neon/vshrq_n_u16"
  - "arm_neon/vcls_s32"
  - "arm_neon/vceq_s8"
  - "arm_neon/vld2q_lane_f16"
  - "arm_neon/vst4q_u8"
  - "arm_neon/vraddhn_u16"
  - "arm_neon/vget_lane_u64"
  - "armintr/_arm_smlsld"
  - "arm_neon/vld3_u64"
  - "arm_neon/vld1_lane_s16"
  - "arm_neon/vabd_f32"
  - "arm_neon/vdupq_n_u16"
  - "armintr/__iso_volatile_store64"
  - "arm_neon/vqsubq_u8"
  - "arm_neon/poly16x8x3_t"
  - "arm_neon/vcltq_s32"
  - "arm_neon/vqnegq_s16"
  - "arm_neon/vqsub_u16"
  - "arm_neon/vaddq_s32"
  - "arm_neon/vqshl_n_s64"
  - "arm_neon/vabdl_s8"
  - "arm_neon/vclsq_s16"
  - "arm_neon/vpaddl_u8"
  - "arm_neon/vmlsq_n_u16"
  - "armintr/_arm_uqadd8"
  - "arm_neon/vhsub_u32"
  - "arm_neon/vset_lane_s16"
  - "arm_neon/vsubl_u32"
  - "arm_neon/vld3_lane_f32"
  - "arm_neon/vcle_s16"
  - "arm_neon/vmovl_u32"
  - "arm_neon/vst3_lane_f16"
  - "arm_neon/vcaltq_f32"
  - "arm_neon/vsubq_s32"
  - "arm_neon/vand_s64"
  - "arm_neon/vst2_u8"
  - "arm_neon/vcombine_p8"
  - "arm_neon/vqdmlal_s32"
  - "arm_neon/vsub_s32"
  - "armintr/_arm_uxtab16"
  - "arm_neon/vmlsq_n_f32"
  - "armintr/_arm_qdsub"
  - "arm_neon/vhaddq_u32"
  - "arm_neon/vhsubq_u16"
  - "arm_neon/vmlsq_lane_u16"
  - "arm_neon/vst4_s64"
  - "armintr/_CountLeadingOnes"
  - "armintr/_arm_smlabt"
  - "arm_neon/vcombine_s32"
  - "arm_neon/vld4_lane_f16"
  - "arm_neon/vadd_s64"
  - "arm_neon/vorrq_u32"
  - "armintr/__sev"
  - "arm_neon/vdupq_lane_s32"
  - "arm_neon/vrecpsq_f32"
  - "arm_neon/vbicq_u16"
  - "arm_neon/vld1_lane_p16"
  - "arm_neon/vrshr_n_u32"
  - "arm_neon/vcgeq_s32"
  - "arm_neon/vld4_dup_s16"
  - "arm_neon/vld1q_p8"
  - "arm_neon/vrshlq_u16"
  - "arm_neon/vmlaq_lane_u32"
  - "arm_neon/vsub_s64"
  - "arm_neon/vcreate_u16"
  - "arm_neon/vget_lane_s32"
  - "arm_neon/vuzp_f32"
  - "arm_neon/vld2_lane_p8"
  - "arm_neon/vuzp_u16"
  - "arm_neon/vorrq_s16"
  - "armintr/_arm_smlaltb"
  - "arm_neon/vrshrn_n_s16"
  - "arm_neon/vabd_s8"
  - "arm_neon/vnegq_s8"
  - "arm_neon/vst4q_u16"
  - "arm_neon/vst1q_lane_s32"
  - "arm_neon/vst1_lane_s32"
  - "arm_neon/vmla_u16"
  - "arm_neon/vmls_lane_s32"
  - "arm_neon/vtst_s8"
  - "arm_neon/vcgeq_s8"
  - "arm_neon/poly8x8x4_t"
  - "arm_neon/vqsub_s64"
  - "armintr/_arm_uqasx"
  - "arm_neon/vld1_lane_u64"
  - "arm_neon/vminq_s16"
  - "arm_neon/vmulq_u32"
  - "arm_neon/vqrshlq_u8"
  - "arm_neon/vdupq_n_p16"
  - "arm_neon/vld4_dup_f16"
  - "arm_neon/vcls_s16"
  - "arm_neon/vmov_n_u64"
  - "arm_neon/vmla_s32"
  - "arm_neon/vrshl_s16"
  - "arm_neon/vcalt_f32"
  - "arm_neon/int64x2x3_t"
  - "arm_neon/vsub_u8"
  - "arm_neon/vzipq_u8"
  - "arm_neon/vrshrn_n_u64"
  - "arm_neon/vrshlq_s32"
  - "arm_neon/vorr_s64"
  - "arm_neon/vqrshl_s16"
  - "arm_neon/vceqq_u16"
  - "arm_neon/vmulq_n_u16"
  - "arm_neon/vmlaq_u8"
  - "arm_neon/vsri_n_s64"
  - "arm_neon/vld3q_u8"
  - "arm_neon/vld1_dup_s16"
  - "arm_neon/vld1q_s32"
  - "arm_neon/vsri_n_s16"
  - "arm_neon/vshlq_u8"
  - "arm_neon/vsli_n_s64"
  - "arm_neon/vmull_lane_u32"
  - "arm_neon/vshl_s64"
  - "arm_neon/vcreate_s16"
  - "arm_neon/uint8x8x4_t"
  - "arm_neon/vqshrn_n_s32"
  - "arm_neon/vqshlq_u32"
  - "arm_neon/vmlal_n_u32"
  - "arm_neon/vtrnq_s16"
  - "arm_neon/vshr_n_s64"
  - "arm_neon/vst2_u16"
  - "arm_neon/vtrn_s32"
  - "arm_neon/vsubhn_u32"
  - "arm_neon/vbicq_s16"
  - "arm_neon/vsetq_lane_s8"
  - "arm_neon/vrsubhn_s16"
  - "arm_neon/vhsub_u8"
  - "arm_neon/vcleq_s32"
  - "arm_neon/vld4_dup_s8"
  - "arm_neon/vmull_u32"
  - "arm_neon/vrshr_n_s16"
  - "arm_neon/vst1q_lane_s16"
  - "arm_neon/vmlsq_lane_u32"
  - "arm_neon/vnegq_f32"
  - "arm_neon/vmin_s8"
  - "arm_neon/vrev16_p8"
  - "arm_neon/vbic_u8"
  - "arm_neon/vclzq_u16"
  - "arm_neon/vcge_u32"
  - "arm_neon/vget_high_u64"
  - "arm_neon/vabsq_s8"
  - "arm_neon/vhaddq_u16"
  - "arm_neon/vsraq_n_s64"
  - "arm_neon/vld2_u32"
  - "arm_neon/vld2_lane_f32"
  - "arm_neon/vqrshrn_n_u32"
  - "arm_neon/vbslq_s8"
  - "armintr/_CountLeadingZeros64"
  - "arm_neon/vbicq_u8"
  - "arm_neon/vdup_lane_s8"
  - "arm_neon/vpadd_s32"
  - "arm_neon/vld3q_lane_f16"
  - "arm_neon/vaba_u8"
  - "arm_neon/vqshlq_u16"
  - "arm_neon/vst1q_u8"
  - "arm_neon/vst4q_lane_f16"
  - "arm_neon/vshl_n_u16"
  - "armintr/_arm_smladx"
  - "arm_neon/vmla_lane_s16"
  - "arm_neon/vornq_u8"
  - "arm_neon/vqneg_s32"
  - "arm_neon/vadd_s8"
  - "arm_neon/vcle_u32"
  - "arm_neon/vclzq_u8"
  - "arm_neon/vtbx1_u8"
  - "armintr/_CountLeadingOnes64"
  - "armintr/__dsb"
  - "arm_neon/vaddq_u32"
  - "arm_neon/vclsq_s8"
  - "arm_neon/vdup_n_s64"
  - "arm_neon/vmax_s16"
  - "arm_neon/vst2q_u32"
  - "arm_neon/vsetq_lane_s64"
  - "arm_neon/vtst_p8"
  - "arm_neon/vabs_s8"
  - "arm_neon/vqshl_n_s16"
  - "arm_neon/vqrshrn_n_u64"
  - "arm_neon/vaddw_s8"
  - "armintr/_arm_uhadd16"
  - "arm_neon/vsriq_n_p16"
  - "arm_neon/vld4_lane_u32"
  - "arm_neon/vneg_f32"
  - "armintr/_MoveToCoprocessor"
  - "arm_neon/vmvnq_s8"
  - "arm_neon/vld1q_lane_p8"
  - "arm_neon/uint32x2x3_t"
  - "arm_neon/vrshrn_n_u16"
  - "arm_neon/vld3_f16"
  - "arm_neon/vsriq_n_s16"
  - "arm_neon/vshlq_n_s16"
  - "arm_neon/vabal_u8"
  - "arm_neon/vqshluq_n_s16"
  - "arm_neon/vst2_lane_u16"
  - "arm_neon/vbic_s16"
  - "arm_neon/vqshl_n_u64"
  - "arm_neon/vcagt_f32"
  - "arm_neon/vpadalq_s8"
  - "arm_neon/vclz_s32"
  - "arm_neon/vld1_lane_s64"
  - "arm_neon/vget_high_p8"
  - "arm_neon/uint64x1_t"
  - "arm_neon/vextq_s16"
  - "arm_neon/vpadd_s8"
  - "arm_neon/vrsubhn_u64"
  - "arm_neon/vst3q_f16"
  - "arm_neon/vdupq_lane_u16"
  - "arm_neon/vrshrq_n_u64"
  - "arm_neon/vmovq_n_f32"
  - "arm_neon/vld1q_dup_u16"
  - "arm_neon/vshr_n_u16"
  - "arm_neon/uint32x2_t"
  - "armintr/_arm_umull"
  - "arm_neon/vtrnq_u16"
  - "arm_neon/vsetq_lane_u32"
  - "arm_neon/vneg_s8"
  - "arm_neon/vsetq_lane_u8"
  - "arm_neon/vst2q_lane_s16"
  - "arm_neon/vqmovun_s32"
  - "armintr/_arm_usad8"
  - "armintr/_arm_pkhbt"
  - "arm_neon/uint16x4x3_t"
  - "arm_neon/vsra_n_s32"
  - "arm_neon/vqmovun_s64"
  - "arm_neon/vld1q_dup_s8"
  - "arm_neon/vaddhn_s32"
  - "arm_neon/vpmax_f32"
  - "arm_neon/vpadd_u32"
  - "arm_neon/vhsubq_u32"
  - "arm_neon/vqrshrun_n_s32"
  - "arm_neon/vadd_s32"
  - "arm_neon/vclt_s8"
  - "arm_neon/vorrq_s64"
  - "arm_neon/vst4q_f16"
  - "arm_neon/vst1_s32"
  - "arm_neon/vceq_p8"
  - "arm_neon/vsubw_s16"
  - "arm_neon/vgetq_lane_u64"
  - "arm_neon/vmla_n_u32"
  - "arm_neon/vcvtq_f32_s32"
  - "arm_neon/vld1q_u32"
  - "arm_neon/vmax_f32"
  - "armintr/_isunorderedf"
  - "arm_neon/vrshl_u8"
  - "arm_neon/vld4_dup_s64"
  - "arm_neon/vqaddq_u16"
  - "arm_neon/vld4q_lane_f16"
  - "arm_neon/vceqq_p8"
  - "arm_neon/vsubw_u8"
  - "arm_neon/vqmovn_u16"
  - "armintr/_arm_smlsldx"
  - "arm_neon/vcreate_p8"
  - "arm_neon/vqdmull_n_s32"
  - "arm_neon/uint64x2_t"
  - "arm_neon/vmls_s32"
  - "arm_neon/vst3q_f32"
  - "armintr/_arm_bfi"
  - "armintr/_arm_qadd16"
  - "arm_neon/vrshlq_s8"
  - "arm_neon/vget_lane_p16"
  - "arm_neon/vld2_p8"
  - "arm_neon/vld3_lane_u32"
  - "armintr/_MoveFromCoprocessor2"
  - "arm_neon/vqshl_u8"
  - "arm_neon/poly8_t"
  - "arm_neon/vhadd_u16"
  - "arm_neon/vmla_lane_u16"
  - "arm_neon/vshrq_n_u8"
  - "arm_neon/vuzpq_f32"
  - "arm_neon/vmls_lane_f32"
  - "arm_neon/vqneg_s16"
  - "arm_neon/vtrn_p16"
  - "arm_neon/vshrn_n_u32"
  - "arm_neon/vaddhn_u64"
  - "arm_neon/vabal_u32"
  - "arm_neon/vld1q_lane_u32"
  - "arm_neon/vrsraq_n_s32"
  - "arm_neon/vandq_u64"
  - "arm_neon/vqdmull_s32"
  - "arm_neon/vext_s16"
  - "arm_neon/vaddw_s16"
  - "arm_neon/vrev64q_p8"
  - "arm_neon/uint8x8x3_t"
  - "arm_neon/vzip_f32"
  - "armintr/_arm_ssub8"
  - "arm_neon/uint16x4x4_t"
  - "armintr/__swi"
  - "armintr/_arm_smlatb"
  - "arm_neon/vrhaddq_s8"
  - "arm_neon/vpmax_s32"
  - "arm_neon/vqshl_s64"
  - "arm_neon/vrev16q_p8"
  - "arm_neon/vqmovn_u32"
  - "arm_neon/vld1q_f16"
  - "arm_neon/vornq_u64"
  - "arm_neon/vqshlq_n_s16"
  - "arm_neon/vld1_f16"
  - "armintr/_arm_smmlsr"
  - "arm_neon/vshlq_s16"
  - "arm_neon/vsubhn_s16"
  - "arm_neon/vmulq_p8"
  - "arm_neon/vdupq_lane_f32"
  - "armintr/_arm_shadd16"
  - "arm_neon/vornq_s16"
  - "arm_neon/vst1q_lane_u8"
  - "arm_neon/vcaleq_f32"
  - "arm_neon/vst3q_lane_f16"
  - "armintr/_arm_sdiv"
  - "arm_neon/vld2_u16"
  - "arm_neon/vdup_lane_u16"
  - "arm_neon/vst4q_lane_f32"
  - "arm_neon/vdup_n_f32"
  - "arm_neon/vsubq_u8"
  - "arm_neon/vset_lane_p16"
  - "arm_neon/vrsqrte_f32"
  - "arm_neon/vsubl_u8"
  - "arm_neon/vld3q_lane_f32"
  - "arm_neon/vqnegq_s8"
  - "arm_neon/vqmovn_s16"
  - "arm_neon/int16x8x3_t"
  - "arm_neon/veorq_u16"
  - "arm_neon/vqdmulh_n_s16"
  - "arm_neon/vhaddq_u8"
  - "arm_neon/vpadal_u8"
  - "arm_neon/vst2q_s16"
  - "arm_neon/poly16x8x4_t"
  - "arm_neon/int64x2_t"
  - "arm_neon/vmull_s32"
  - "arm_neon/vld4_lane_s32"
  - "arm_neon/vst4q_p8"
  - "arm_neon/vmlal_lane_u16"
  - "arm_neon/vclz_u32"
  - "arm_neon/vsliq_n_s8"
  - "arm_neon/vmls_n_f32"
  - "arm_neon/vmlsl_lane_s16"
  - "arm_neon/vst4q_u32"
  - "arm_neon/vld1q_lane_s16"
  - "arm_neon/vst1q_f32"
  - "arm_neon/vrshr_n_u8"
  - "arm_neon/vst1q_s64"
  - "arm_neon/vbslq_u32"
  - "arm_neon/vset_lane_s8"
  - "arm_neon/vdupq_lane_p16"
  - "arm_neon/vtstq_s16"
  - "arm_neon/vshl_n_s8"
  - "arm_neon/vqrdmulhq_n_s16"
  - "arm_neon/vget_high_f16"
  - "arm_neon/vst4_lane_u32"
  - "arm_neon/vraddhn_s16"
  - "arm_neon/vmlsl_lane_s32"
  - "arm_neon/vld3q_s32"
  - "arm_neon/vsriq_n_u64"
  - "arm_neon/vld4_dup_u8"
  - "arm_neon/vld4q_s8"
  - "arm_neon/vqmovn_s64"
  - "arm_neon/vrev32q_p8"
  - "arm_neon/vsliq_n_p8"
  - "arm_neon/vzipq_s16"
  - "arm_neon/vgetq_lane_s64"
  - "arm_neon/vst4_p16"
  - "arm_neon/vsubq_u16"
  - "arm_neon/vrev64_s32"
  - "armintr/_arm_uhadd8"
  - "arm_neon/vornq_u16"
  - "arm_neon/vst4_lane_s8"
  - "arm_neon/vabd_s32"
  - "arm_neon/vqrdmulhq_s16"
  - "arm_neon/vqshlq_s32"
  - "arm_neon/int64x2x4_t"
  - "arm_neon/vset_lane_u16"
  - "arm_neon/vrsra_n_s32"
  - "arm_neon/vabdl_u16"
  - "arm_neon/vsliq_n_s32"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, intrinseci"
  - "intrinseci, ARM"
ms.assetid: d3d7dadd-7bd5-4508-8bff-371a66913e20
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Oggetti intrinseci ARM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore Visual C\+\+ rende disponibili le seguenti funzioni intrinseche per l'architettura ARM.  Per altre informazioni su ARM, vedere i [manuali di riferimento dell'architettura ARM](http://go.microsoft.com/fwlink/p/?LinkId=522049) e la [guida degli strumenti dell'assembler ARM](http://go.microsoft.com/fwlink/p/?LinkId=246102) nel sito Web del centro informazioni ARM.  
  
##  <a name="top"></a> NEON  
 Le estensioni dei set di istruzioni vettoriali NEON per ARM forniscono funzionalità SIMD \(Single Instruction Multiple Data\) simili a quelle dei set di istruzioni vettoriali MMX e SSE comuni ai processori delle architetture x86 e x64.  
  
 Le funzioni intrinseche NEON sono supportate, come previsto nel file di intestazione `arm_neon.h`.  Il supporto del compilatore Visual C\+\+ per le funzioni intrinseche NEON è simile a quello del compilatore ARM, documentato nell'appendice G del [manuale di riferimento del compilatore versione 4.1, toolchain del compilatore ARM](http://go.microsoft.com/fwlink/p/?LinkId=251083) nel sito Web del centro informazioni ARM.  
  
 La differenza principale tra il compilatore Visual C\+\+ e il compilatore ARM consiste nel fatto che il compilatore Visual C\+\+ aggiunge le varianti `_ex` delle istruzioni vettoriali di caricamento e archiviazione `vldX` e `vstX`.  Le varianti `_ex` accettano un parametro aggiuntivo che specifica l'allineamento dell'argomento del puntatore ma a parte ciò sono identiche alle relative controparti non `_ex`.  
  
##  <a name="A"></a> Elenco delle funzioni intrinseche specifiche di ARM  
  
|Nome funzione|Istruzione|Prototipo di funzione|  
|-------------------|----------------|---------------------------|  
|\_arm\_smlal|SMLAL|\_\_int64 \_arm\_smlal\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_umlal|UMLAL|unsigned \_\_int64 \_arm\_umlal\(unsigned \_\_int64 \_RdHiLo, unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_clz|CLZ|unsigned int \_arm\_clz\(unsigned int \_Rm\)|  
|\_arm\_qadd|QADD|int \_arm\_qadd\(int \_Rm, int \_Rn\)|  
|\_arm\_qdadd|QDADD|int \_arm\_qdadd\(int \_Rm, int \_Rn\)|  
|\_arm\_qdsub|QDSUB|int \_arm\_qdsub\(int \_Rm, int \_Rn\)|  
|\_arm\_qsub|QSUB|int \_arm\_qsub\(int \_Rm, int \_Rn\)|  
|\_arm\_smlabb|SMLABB|int \_arm\_smlabb\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlabt|SMLABT|int \_arm\_smlabt\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlatb|SMLATB|int \_arm\_smlatb\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlatt|SMLATT|int \_arm\_smlatt\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlalbb|SMLALBB|\_\_int64 \_arm\_smlalbb\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlalbt|SMLALBT|\_\_int64 \_arm\_smlalbt\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlaltb|SMLALTB|\_\_int64 \_arm\_smlaltb\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlaltt|SMLALTT|\_\_int64 \_arm\_smlaltt\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlawb|SMLAWB|int \_arm\_smlawb\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlawt|SMLAWT|int \_arm\_smlawt\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smulbb|SMULBB|int \_arm\_smulbb\(int \_Rn, int \_Rm\)|  
|\_arm\_smulbt|SMULBT|int \_arm\_smulbt\(int \_Rn, int \_Rm\)|  
|\_arm\_smultb|SMULTB|int \_arm\_smultb\(int \_Rn, int \_Rm\)|  
|\_arm\_smultt|SMULTT|int \_arm\_smultt\(int \_Rn, int \_Rm\)|  
|\_arm\_smulwb|SMULWB|int \_arm\_smulwb\(int \_Rn, int \_Rm\)|  
|\_arm\_smulwt|SMULWT|int \_arm\_smulwt\(int \_Rn, int \_Rm\)|  
|\_arm\_sadd16|SADD16|int \_arm\_sadd16\(int \_Rn, int \_Rm\)|  
|\_arm\_sadd8|SADD8|int \_arm\_sadd8\(int \_Rn, int \_Rm\)|  
|\_arm\_sasx|SASX|int \_arm\_sasx\(int \_Rn, int \_Rm\)|  
|\_arm\_ssax|SSAX|int \_arm\_ssax\(int \_Rn, int \_Rm\)|  
|\_arm\_ssub16|SSUB16|int \_arm\_ssub16\(int \_Rn, int \_Rm\)|  
|\_arm\_ssub8|SSUB8|int \_arm\_ssub8\(int \_Rn, int \_Rm\)|  
|\_arm\_shadd16|SHADD16|int \_arm\_shadd16\(int \_Rn, int \_Rm\)|  
|\_arm\_shadd8|SHADD8|int \_arm\_shadd8\(int \_Rn, int \_Rm\)|  
|\_arm\_shasx|SHASX|int \_arm\_shasx\(int \_Rn, int \_Rm\)|  
|\_arm\_shsax|SHSAX|int \_arm\_shsax\(int \_Rn, int \_Rm\)|  
|\_arm\_shsub16|SHSUB16|int \_arm\_shsub16\(int \_Rn, int \_Rm\)|  
|\_arm\_shsub8|SHSUB8|int \_arm\_shsub8\(int \_Rn, int \_Rm\)|  
|\_arm\_qadd16|QADD16|int \_arm\_qadd16\(int \_Rn, int \_Rm\)|  
|\_arm\_qadd8|QADD8|int \_arm\_qadd8\(int \_Rn, int \_Rm\)|  
|\_arm\_qasx|QASX|int \_arm\_qasx\(int \_Rn, int \_Rm\)|  
|\_arm\_qsax|QSAX|int \_arm\_qsax\(int \_Rn, int \_Rm\)|  
|\_arm\_qsub16|QSUB16|int \_arm\_qsub16\(int \_Rn, int \_Rm\)|  
|\_arm\_qsub8|QSUB8|int \_arm\_qsub8\(int \_Rn, int \_Rm\)|  
|\_arm\_uadd16|UADD16|unsigned int \_arm\_uadd16\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uadd8|UADD8|unsigned int \_arm\_uadd8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uasx|UASX|unsigned int \_arm\_uasx\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_usax|USAX|unsigned int \_arm\_usax\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_usub16|USUB16|unsigned int \_arm\_usub16\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_usub8|USUB8|unsigned int \_arm\_usub8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uhadd16|UHADD16|unsigned int \_arm\_uhadd16\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uhadd8|UHADD8|unsigned int \_arm\_uhadd8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uhasx|UHASX|unsigned int \_arm\_uhasx\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uhsax|UHSAX|unsigned int \_arm\_uhsax\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uhsub16|UHSUB16|unsigned int \_arm\_uhsub16\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uhsub8|UHSUB8|unsigned int \_arm\_uhsub8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uqadd16|UQADD16|unsigned int \_arm\_uqadd16\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uqadd8|UQADD8|unsigned int \_arm\_uqadd8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uqasx|UQASX|unsigned int \_arm\_uqasx\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uqsax|UQSAX|unsigned int \_arm\_uqsax\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uqsub16|UQSUB16|unsigned int \_arm\_uqsub16\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_uqsub8|UQSUB8|unsigned int \_arm\_uqsub8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_sxtab|SXTAB|int \_arm\_sxtab\(int \_Rn, int \_Rm, unsigned int \_Rotation\)|  
|\_arm\_sxtab16|SXTAB16|int \_arm\_sxtab16\(int \_Rn, int \_Rm, unsigned int \_Rotation\)|  
|\_arm\_sxtah|SXTAH|int \_arm\_sxtah\(int \_Rn, int \_Rm, unsigned int \_Rotation\)|  
|\_arm\_uxtab|UXTAB|unsigned int \_arm\_uxtab\(unsigned int \_Rn, unsigned int \_Rm, unsigned int \_Rotation\)|  
|\_arm\_uxtab16|UXTAB16|unsigned int \_arm\_uxta16b\(unsigned int \_Rn, unsigned int \_Rm, unsigned int \_Rotation\)|  
|\_arm\_uxtah|UXTAH|unsigned int \_arm\_uxtah\(unsigned int \_Rn, unsigned int \_Rm, unsigned int \_Rotation\)|  
|\_arm\_sxtb|SXTB|int \_arm\_sxtb\(int \_Rn, unsigned int \_Rotation\)|  
|\_arm\_sxtb16|SXTB16|int \_arm\_sxtb16\(int \_Rn, unsigned int \_Rotation\)|  
|\_arm\_sxth|SXTH|int \_arm\_sxth\(int \_Rn, unsigned int \_Rotation\)|  
|\_arm\_uxtb|UXTB|unsigned int \_arm\_uxtb\(unsigned int \_Rn, unsigned int \_Rotation\)|  
|\_arm\_uxtb16|UXTB16|unsigned int \_arm\_uxtb16\(unsigned int \_Rn, unsigned int \_Rotation\)|  
|\_arm\_uxth|UXTH|unsigned int \_arm\_uxth\(unsigned int \_Rn, unsigned int \_Rotation\)|  
|\_arm\_pkhbt|PKHBT|int \_arm\_pkhbt\(int \_Rn, int \_Rm, unsigned int \_Lsl\_imm\)|  
|\_arm\_pkhtb|PKHTB|int \_arm\_pkhtb\(int \_Rn, int \_Rm, unsigned int \_Asr\_imm\)|  
|\_arm\_usad8|USAD8|unsigned int \_arm\_usad8\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_usada8|USADA8|unsigned int \_arm\_usada8\(unsigned int \_Rn, unsigned int \_Rm, unsigned int \_Ra\)|  
|\_arm\_ssat|SSAT|int \_arm\_ssat\(unsigned int \_Sat\_imm, \_int \_Rn, \_ARMINTR\_SHIFT\_T \_Shift\_type, unsigned int \_Shift\_imm\)|  
|\_arm\_usat|USAT|int \_arm\_usat\(unsigned int \_Sat\_imm, \_int \_Rn, \_ARMINTR\_SHIFT\_T \_Shift\_type, unsigned int \_Shift\_imm\)|  
|\_arm\_ssat16|SSAT16|int \_arm\_ssat16\(unsigned int \_Sat\_imm, \_int \_Rn\)|  
|\_arm\_usat16|USAT16|int \_arm\_usat16\(unsigned int \_Sat\_imm, \_int \_Rn\)|  
|\_arm\_rev|REV|unsigned int \_arm\_rev\(unsigned int \_Rm\)|  
|\_arm\_rev16|REV16|unsigned int \_arm\_rev16\(unsigned int \_Rm\)|  
|\_arm\_revsh|REVSH|unsigned int \_arm\_revsh\(unsigned int \_Rm\)|  
|\_arm\_smlad|SMLAD|int \_arm\_smlad\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smladx|SMLADX|int \_arm\_smladx\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlsd|SMLSD|int \_arm\_smlsd\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smlsdx|SMLSDX|int \_arm\_smlsdx\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smmla|SMMLA|int \_arm\_smmla\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smmlar|SMMLAR|int \_arm\_smmlar\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smmls|SMMLS|int \_arm\_smmls\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smmlsr|SMMLSR|int \_arm\_smmlsr\(int \_Rn, int \_Rm, int \_Ra\)|  
|\_arm\_smmul|SMMUL|int \_arm\_smmul\(int \_Rn, int \_Rm\)|  
|\_arm\_smmulr|SMMULR|int \_arm\_smmulr\(int \_Rn, int \_Rm\)|  
|\_arm\_smlald|SMLALD|\_\_int64 \_arm\_smlald\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlaldx|SMLALDX|\_\_int64 \_arm\_smlaldx\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlsld|SMLSLD|\_\_int64 \_arm\_smlsld\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smlsldx|SMLSLDX|\_\_int64 \_arm\_smlsldx\(\_\_int64 \_RdHiLo, int \_Rn, int \_Rm\)|  
|\_arm\_smuad|SMUAD|int \_arm\_smuad\(int \_Rn, int \_Rm\)|  
|\_arm\_smuadx|SMUADX|int \_arm\_muadxs\(int \_Rn, int \_Rm\)|  
|\_arm\_smusd|SMUSD|int \_arm\_smusd\(int \_Rn, int \_Rm\)|  
|\_arm\_smusdx|SMUSDX|int \_arm\_smusdx\(int \_Rn, int \_Rm\)|  
|\_arm\_smull|SMULL|\_\_int64 \_arm\_smull\(int \_Rn, int \_Rm\)|  
|\_arm\_umull|UMULL|unsigned \_\_int64 \_arm\_umull\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_umaal|UMAAL|unsigned \_\_int64 \_arm\_umaal\(unsigned int \_RdLo, unsigned int \_RdHi, unsigned int \_Rn, unsigned int \_Rm\)|  
|\_arm\_bfc|BFC|unsigned int \_arm\_bfc\(unsigned int \_Rd, unsigned int \_Lsb, unsigned int \_Width\)|  
|\_arm\_bfi|BFI|unsigned int \_arm\_bfi\(unsigned int \_Rd, unsigned int \_Rn, unsigned int \_Lsb, unsigned int \_Width\)|  
|\_arm\_rbit|RBIT|unsigned int \_arm\_rbit\(unsigned int \_Rm\)|  
|\_arm\_sbfx|SBFX|int \_arm\_sbfx\(int \_Rn, unsigned int \_Lsb, unsigned int \_Width\)|  
|\_arm\_ubfx|UBFX|unsigned int \_arm\_ubfx\(unsigned int \_Rn, unsigned int \_Lsb, unsigned int \_Width\)|  
|\_arm\_sdiv|SDIV|int \_arm\_sdiv\(int \_Rn, int \_Rm\)|  
|\_arm\_udiv|UDIV|unsigned int \_arm\_udiv\(unsigned int \_Rn, unsigned int \_Rm\)|  
|\_\_cps|CPS|void \_\_cps\(unsigned int \_Ops, unsigned int \_Flags, unsigned int \_Mode\)|  
|\_\_dmb|DMB|void \_\_dmb\(unsigned int `_Type`\)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni.  Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [Restrizioni della barriera di memoria](#BarrierRestrictions).|  
|\_\_dsb|DSB|void \_\_dsb\(unsigned int \_Type\)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni.  Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [Restrizioni della barriera di memoria](#BarrierRestrictions).|  
|\_\_isb|ISB|void \_\_isb\(unsigned int \_Type\)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni.  Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [Restrizioni della barriera di memoria](#BarrierRestrictions).|  
|\_\_emit||void \_\_emit\(unsigned \_\_int32 opcode\)<br /><br /> Inserisce un'istruzione specificata nel flusso di istruzioni restituito dal compilatore.<br /><br /> Il valore di `opcode` deve essere un'espressione costante nota al momento della compilazione.  La dimensione di una parola dell'istruzione è 16 bit e i 16 bit più significativi di `opcode` vengono ignorati.<br /><br /> Il compilatore non esegue alcun tentativo di interpretare il contenuto di `opcode` e non garantisce uno stato della CPU o della memoria prima dell'esecuzione dell'istruzione inserita.<br /><br /> Il compilatore presuppone che gli stati della CPU e della memoria rimangano invariati dopo l'esecuzione dell'istruzione inserita.  Pertanto, le istruzioni che modificano lo stato possono avere un impatto negativo sul codice normale generato dal compilatore.<br /><br /> Per questo motivo, usare `emit` solo per inserire le istruzioni che influiscono su uno stato della CPU generalmente non elaborato dal compilatore, ad esempio lo stato del coprocessore, o per implementare le funzioni dichiarate con `declspec(naked)`.|  
|\_\_hvc|HVC|unsigned int \_\_hvc\(unsigned int, ...\)|  
|\_\_iso\_volatile\_load16||\_\_int16 \_\_iso\_volatile\_load16\(const volatile \_\_int16 \*\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_load32||\_\_int32 \_\_iso\_volatile\_load32\(const volatile \_\_int32 \*\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_load64||\_\_int64 \_\_iso\_volatile\_load64\(const volatile \_\_int64 \*\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_load8||\_\_int8 \_\_iso\_volatile\_load8\(const volatile \_\_int8 \*\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_store16||void \_\_iso\_volatile\_store16\(volatile \_\_int16 \*, \_\_int16\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_store32||void \_\_iso\_volatile\_store32\(volatile \_\_int32 \*, \_\_int32\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_store64||void \_\_iso\_volatile\_store64\(volatile \_\_int64 \*, \_\_int64\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_iso\_volatile\_store8||void \_\_iso\_volatile\_store8\(volatile \_\_int8 \*, \_\_int8\)<br /><br /> Per altre informazioni, vedere [Funzioni intrinseche __iso_volatile_load/store](#IsoVolatileLoadStore).|  
|\_\_ldrexd|LDREXD|\_\_int64 \_\_ldrexd\(const volatile \_\_int64 \*\)|  
|\_\_prefetch|PLD|void \_\_cdecl \_\_prefetch\(const void \*\)<br /><br /> Fornisce un hint di memoria `PLD` al sistema per l'accesso alla memoria in corrispondenza o in prossimità dell'indirizzo specificato.  Alcuni sistemi possono scegliere di ottimizzare tale criterio di accesso alla memoria per migliorare le prestazioni di runtime.  Tuttavia, dal punto di vista del linguaggio C\+\+, la funzione non ha alcun effetto osservabile e potrebbe non eseguire alcuna operazione.|  
|\_\_rdpmccntr64||unsigned \_\_int64 \_\_rdpmccntr64\(void\)|  
|\_\_sev|SEV|void \_\_sev\(void\)|  
|\_\_static\_assert||void \_\_static\_assert\(int, const char \*\)|  
|\_\_swi|SVC|unsigned int \_\_swi\(unsigned int, ...\)|  
|\_\_trap|BKPT|int \_\_trap\(int, ...\)|  
|\_\_wfe|WFE|void \_\_wfe\(void\)|  
|\_\_wfi|WFI|void \_\_wfi\(void\)|  
|\_AddSatInt|QADD|int \_AddSatInt\(int, int\)|  
|\_CopyDoubleFromInt64||double \_CopyDoubleFromInt64\(\_\_int64\)|  
|\_CopyFloatFromInt32||float \_CopyFloatFromInt32\(\_\_int32\)|  
|\_CopyInt32FromFloat||\_\_int32 \_CopyInt32FromFloat\(float\)|  
|\_CopyInt64FromDouble||\_\_int64 \_CopyInt64FromDouble\(double\)|  
|\_CountLeadingOnes||unsigned int \_CountLeadingOnes\(unsigned long\)|  
|\_CountLeadingOnes64||unsigned int \_CountLeadingOnes64\(unsigned \_\_int64\)|  
|\_CountLeadingSigns||unsigned int \_CountLeadingSigns\(long\)|  
|\_CountLeadingSigns64||unsigned int \_CountLeadingSigns64\(\_\_int64\)|  
|\_CountLeadingZeros||unsigned int \_CountLeadingZeros\(unsigned long\)|  
|\_CountLeadingZeros64||unsigned int \_CountLeadingZeros64\(unsigned \_\_int64\)|  
|\_CountOneBits||unsigned int \_CountOneBits\(unsigned long\)|  
|\_CountOneBits64||unsigned int \_CountOneBits64\(unsigned \_\_int64\)|  
|\_DAddSatInt|QDADD|int \_DAddSatInt\(int, int\)|  
|\_DSubSatInt|QDSUB|int \_DSubSatInt\(int, int\)|  
|\_isunordered||int \_isunordered\(double, double\)|  
|\_isunorderedf||int \_isunorderedf\(float, float\)|  
|\_MoveFromCoprocessor|MRC|unsigned int \_MoveFromCoprocessor\(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  Per altre informazioni, vedere [_MoveFromCoprocessor, _MoveFromCoprocessor2](#MoveFromCo).|  
|\_MoveFromCoprocessor2|MRC2|unsigned int \_MoveFromCoprocessor2\(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  Per altre informazioni, vedere [_MoveFromCoprocessor, _MoveFromCoprocessor2](#MoveFromCo).|  
|\_MoveFromCoprocessor64|MRRC|unsigned \_\_int64 \_MoveFromCoprocessor64\(unsigned int, unsigned int, unsigned int\)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  Per altre informazioni, vedere [_MoveFromCoprocessor64](#MoveFromCo64).|  
|\_MoveToCoprocessor|MCR|void \_MoveToCoprocessor\(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  Per altre informazioni, vedere [_MoveToCoprocessor, _MoveToCoprocessor2](#MoveToCo).|  
|\_MoveToCoprocessor2|MCR2|void \_MoveToCoprocessor2\(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int\)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  Per altre informazioni, vedere [_MoveToCoprocessor, _MoveToCoprocessor2](#MoveToCo).|  
|\_MoveToCoprocessor64|MCRR|void \_MoveToCoprocessor64\(unsigned \_\_int64, unsigned int, unsigned int, unsigned int\)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  Per altre informazioni, vedere [_MoveToCoprocessor64](#MoveToCo64).|  
|\_MulHigh||long \_MulHigh\(long, long\)|  
|\_MulUnsignedHigh||unsigned long \_MulUnsignedHigh\(unsigned long, unsigned long\)|  
|\_ReadBankedReg|MRS|int \_ReadBankedReg\(int \_Reg\)|  
|\_ReadStatusReg|MRS|int \_ReadStatusReg\(int\)|  
|\_SubSatInt|QSUB|int \_SubSatInt\(int, int\)|  
|\_WriteBankedReg|MSR|void \_WriteBankedReg\(int \_Value, int \_Reg\)|  
|\_WriteStatusReg|MSR|void \_WriteStatusReg\(int, int, int\)|  
  
 \[[NEON](#top)\]  
  
###  <a name="BarrierRestrictions"></a> Restrizioni della barriera di memoria  
 Le funzioni intrinseche `__dmb` \(barriera di memoria dati\), `__dsb` \(barriera di sincronizzazione dei dati\) e `__isb` \(barriera di sincronizzazione istruzioni\) usano i seguenti valori predefiniti per specificare la restrizione di barriera di memoria in termini di condivisione del dominio e tipo di accesso interessati dall'operazione.  
  
|Valore di restrizione|Descrizione|  
|---------------------------|-----------------|  
|\_ARM\_BARRIER\_SY|Sistema completo, operazioni di lettura e scrittura.|  
|\_ARM\_BARRIER\_ST|Sistema completo, solo operazioni di scrittura.|  
|\_ARM\_BARRIER\_ISH|Condivisibile all'interno, operazioni di lettura e scrittura.|  
|\_ARM\_BARRIER\_ISHST|Condivisibile all'interno, solo operazioni di scrittura.|  
|\_ARM\_BARRIER\_NSH|Non condivisibile, operazioni di lettura e scrittura.|  
|\_ARM\_BARRIER\_NSHST|Non condivisibile, solo operazioni di scrittura.|  
|\_ARM\_BARRIER\_OSH|Condivisibile all'esterno, operazioni di lettura e scrittura.|  
|\_ARM\_BARRIER\_OSHST|Condivisibile all'esterno, solo operazioni di scrittura.|  
  
 Per la funzione intrinseca `__isb`, l'unica restrizione attualmente valida è \_ARM\_BARRIER\_SY. Tutti gli altri valori sono riservati dall'architettura.  
  
###  <a name="IsoVolatileLoadStore"></a> Funzioni intrinseche \_\_iso\_volatile\_load\/store  
 Queste funzioni intrinseche eseguono in modo esplicito le operazioni di caricamento e archiviazione non soggette alle ottimizzazioni del compilatore.  
  
```  
__int16 __iso_volatile_load16(const volatile __int16 * Location)  
__int32 __iso_volatile_load32(const volatile __int32 * Location)  
__int64 __iso_volatile_load64(const volatile __int64 * Location)  
__int8 __iso_volatile_load8(const volatile __int8 * Location)  
  
void __iso_volatile_store16(volatile __int16 * Location, __int16 Value)  
void __iso_volatile_store32(volatile __int32 * Location, __int32 Value)  
void __iso_volatile_store64(volatile __int64 * Location, __int64 Value)  
void __iso_volatile_store8(volatile __int8 * Location, __int8 Value)  
  
```  
  
 **Parametri**  
  
 `Location`  
 Indirizzo di una posizione di memoria da cui leggere o in cui scrivere.  
  
 `Value` \(solo funzioni intrinseche di archiviazione\)  
 Valore da scrivere nella posizione di memoria specificata.  
  
 **Valore restituito \(solo funzioni intrinseche di caricamento\)**  
  
 Valore della posizione di memoria specificata da `Location`.  
  
 **Note**  
  
 È possibile usare le funzioni intrinseche `__iso_volatile_load8/16/32/64` e `__iso_volatile_store8/16/32/64` per eseguire in modo esplicito gli accessi alla memoria non soggetti alle ottimizzazioni del compilatore.  Il compilatore non può rimuovere, sintetizzare o modificare l'ordine relativo di queste operazioni, ma non genera barriere di memoria hardware implicite.  Di conseguenza, l'hardware potrebbe comunque riordinare gli accessi alla memoria osservabili tra più thread.  Più precisamente, queste funzioni intrinseche equivalgono alle seguenti espressioni compilate in **\/volatile:iso**.  
  
```  
int a = __iso_volatile_load32(p);    // equivalent to: int a = *(const volatile __int32*)p;   
__iso_volatile_store32(p, a);        // equivalent to: *(volatile __int32*)p = a;  
  
```  
  
 Si noti che le funzioni intrinseche accettano puntatori volatili per poter usare variabili volatili.  Tuttavia, non esistono requisiti o raccomandazioni per usare i puntatori volatili come argomenti. La semantica di queste operazioni è esattamente uguale a quella usata per i tipi non volatili.  
  
 Per altre informazioni sull'argomento della riga di comando **\/volatile:iso**, vedere [\/volatile \(interpretazione della parole chiave volatile\)](../build/reference/volatile-volatile-keyword-interpretation.md).  
  
###  <a name="MoveFromCo"></a> \_MoveFromCoprocessor, \_MoveFromCoprocessor2  
 Queste funzioni intrinseche leggono i dati dai coprocessori ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  
  
```  
int _MoveFromCoprocessor(  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
int _MoveFromCoprocessor2(  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
```  
  
 **Parametri**  
  
 `coproc`  
 Numero del coprocessore compreso tra 0 e 15.  
  
 `opcode1`  
 Opcode specifico del coprocessore compreso tra 0 e 7.  
  
 `crn`  
 Numero del registro del coprocessore, compreso tra 0 e 15, che specifica il primo operando nell'istruzione.  
  
 `crm`  
 Numero del registro del coprocessore, compreso tra 0 e 15, che specifica un operando di destinazione o di origine aggiuntivo.  
  
 `opcode2`  
 Opcode aggiuntivo specifico del coprocessore compreso tra 0 e 7.  
  
 **Valore restituito**  
  
 Valore letto dal coprocessore.  
  
 **Note**  
  
 I valori di tutti e cinque i parametri di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveFromCoprocessor` usa l'istruzione MRC; `_MoveFromCoprocessor2` usa MRC2.  I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione.  L'interpretazione dei parametri è dipendente dal coprocessore.  Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
###  <a name="MoveFromCo64"></a> \_MoveFromCoprocessor64  
 Legge i dati dai coprocessori ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  
  
```  
unsigned __int64 _MoveFromCoprocessor64(  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crm,  
);  
  
```  
  
 **Parametri**  
  
 `coproc`  
 Numero del coprocessore compreso tra 0 e 15.  
  
 `opcode1`  
 Opcode specifico del coprocessore compreso tra 0 e 15.  
  
 `crm`  
 Numero del registro del coprocessore, compreso tra 0 e 15, che specifica un operando di destinazione o di origine aggiuntivo.  
  
 **Valore restituito**  
  
 Valore letto dal coprocessore.  
  
 **Note**  
  
 I valori di tutti e tre i parametri di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveFromCoprocessor64` usa l'istruzione MRRC.  I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione.  L'interpretazione dei parametri è dipendente dal coprocessore.  Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
###  <a name="MoveToCo"></a> \_MoveToCoprocessor, \_MoveToCoprocessor2  
 Queste funzioni intrinseche scrivono i dati nei coprocessori ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  
  
```  
void _MoveToCoprocessor(  
      unsigned int value,  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
void _MoveToCoprocessor2(  
      unsigned int value,  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crn,  
      unsigned int crm,  
      unsigned int opcode2  
);  
  
```  
  
 **Parametri**  
  
 `value`  
 Valore da scrivere nel coprocessore.  
  
 `coproc`  
 Numero del coprocessore compreso tra 0 e 15.  
  
 `opcode1`  
 Opcode specifico del coprocessore compreso tra 0 e 7.  
  
 `crn`  
 Numero del registro del coprocessore, compreso tra 0 e 15, che specifica il primo operando nell'istruzione.  
  
 `crm`  
 Numero del registro del coprocessore, compreso tra 0 e 15, che specifica un operando di destinazione o di origine aggiuntivo.  
  
 `opcode2`  
 Opcode aggiuntivo specifico del coprocessore compreso tra 0 e 7.  
  
 **Valore restituito**  
  
 Nessuno.  
  
 **Note**  
  
 I valori dei parametri `coproc`, `opcode1`, `crn`, `crm` e `opcode2` di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveToCoprocessor` usa l'istruzione MCR; `_MoveToCoprocessor2` usa MCR2.  I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione.  L'interpretazione dei parametri è dipendente dal coprocessore.  Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
###  <a name="MoveToCo64"></a> \_MoveToCoprocessor64  
 Queste funzioni intrinseche scrivono i dati nei coprocessori ARM tramite le istruzioni di trasferimento dei dati del coprocessore.  
  
```  
void _MoveFromCoprocessor64(  
      unsigned __int64 value,  
      unsigned int coproc,  
      unsigned int opcode1,  
      unsigned int crm,  
);  
  
```  
  
 **Parametri**  
  
 `coproc`  
 Numero del coprocessore compreso tra 0 e 15.  
  
 `opcode1`  
 Opcode specifico del coprocessore compreso tra 0 e 15.  
  
 `crm`  
 Numero del registro del coprocessore, compreso tra 0 e 15, che specifica un operando di destinazione o di origine aggiuntivo.  
  
 **Valore restituito**  
  
 Nessuno.  
  
 **Note**  
  
 I valori dei parametri `coproc`, `opcode1` e `crm` di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveFromCoprocessor64` usa l'istruzione MCRR.  I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione.  L'interpretazione dei parametri è dipendente dal coprocessore.  Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
##  <a name="I"></a> Supporto ARM per le funzioni intrinseche di altre architetture  
 La tabella seguente elenca le funzioni intrinseche di altre architetture supportate sulle piattaforme ARM.  Dove il comportamento di una funzione intrinseca in ARM differisce dal comportamento in altre architetture hardware, vengono indicati dettagli aggiuntivi.  
  
|Nome funzione|Prototipo di funzione|  
|-------------------|---------------------------|  
|\_\_assume|void \_\_assume\(int\)|  
|\_\_code\_seg|void \_\_code\_seg\(const char \*\)|  
|\_\_debugbreak|void \_\_cdecl \_\_debugbreak\(void\)|  
|\_\_fastfail|\_\_declspec\(noreturn\) void \_\_fastfail\(unsigned int\)|  
|\_\_nop|void \_\_nop\(void\) **Note:**  Sulle piattaforme ARM, questa funzione genera un'istruzione NOP se implementata nell'architettura di destinazione; in caso contrario, viene generata un'istruzione alternativa che non modifica lo stato del programma o della CPU, ad esempio `MOV r8, r8`.  Questo comportamento è equivalente dal punto di vista funzionale alla funzione intrinseca \_\_nop per le altre architetture hardware. Poiché un'istruzione che non ha alcun effetto sullo stato del programma o della CPU potrebbe essere ignorata dall'architettura di destinazione come ottimizzazione, l'istruzione non usa necessariamente i cicli della CPU.  Pertanto, non usare la funzione intrinseca \_\_nop per modificare il tempo di esecuzione di una sequenza di codice, a meno che non si è certi del comportamento della CPU.  Al contrario, è possibile usare la funzione intrinseca \_\_nop per allineare l'istruzione successiva a un indirizzo limite specifico a 32 bit.|  
|\_\_yield|void \_\_yield\(void\) **Note:**  Sulle piattaforme ARM, questa funzione genera l'istruzione YIELD, che indica che il thread sta eseguendo un'attività di cui è possibile sospenderne temporaneamente l'esecuzione, ad esempio uno spinlock, senza influire negativamente sul programma.  In questo modo la CPU può eseguire altre attività durante i cicli di esecuzione che altrimenti sarebbero sprecati.|  
|\_AddressOfReturnAddress|void \* \_AddressOfReturnAddress\(void\)|  
|\_BitScanForward|unsigned char \_BitScanForward\(unsigned long \* \_Index, unsigned long \_Mask\)|  
|\_BitScanReverse|unsigned char \_BitScanReverse\(unsigned long \* \_Index, unsigned long \_Mask\)|  
|\_bittest|unsigned char \_bittest\(long const \*, long\)|  
|\_bittestandcomplement|unsigned char \_bittestandcomplement\(long \*, long\)|  
|\_bittestandreset|unsigned char \_bittestandreset\(long \*, long\)|  
|\_bittestandset|unsigned char \_bittestandset\(long \*, long\)|  
|\_byteswap\_uint64|unsigned \_\_int64 \_\_cdecl \_byteswap\_uint64\(unsigned \_\_int64\)|  
|\_byteswap\_ulong|unsigned long \_\_cdecl \_byteswap\_ulong\(unsigned long\)|  
|\_byteswap\_ushort|unsigned short \_\_cdecl \_byteswap\_ushort\(unsigned short\)|  
|\_disable|void \_\_cdecl \_disable\(void\) **Note:**  Sulle piattaforme ARM, questa funzione genera l'istruzione CPSID. È disponibile solo come funzione intrinseca.|  
|\_enable|void \_\_cdecl \_enable\(void\) **Note:**  Sulle piattaforme ARM, questa funzione genera l'istruzione CPSIE. È disponibile solo come funzione intrinseca.|  
|\_lrotl|unsigned long \_\_cdecl \_lrotl\(unsigned long, int\)|  
|\_lrotr|unsigned long \_\_cdecl \_lrotr\(unsigned long, int\)|  
|\_ReadBarrier|void \_ReadBarrier\(void\)|  
|\_ReadWriteBarrier|void \_ReadWriteBarrier\(void\)|  
|\_ReturnAddress|void \* \_ReturnAddress\(void\)|  
|\_rotl|unsigned int \_\_cdecl \_rotl\(unsigned int \_Value, int \_Shift\)|  
|\_rotl16|unsigned short \_rotl16\(unsigned short \_Value, unsigned char \_Shift\)|  
|\_rotl64|unsigned \_\_int64 \_\_cdecl \_rotl64\(unsigned \_\_int64 \_Value, int \_Shift\)|  
|\_rotl8|unsigned char \_rotl8\(unsigned char \_Value, unsigned char \_Shift\)|  
|\_rotr|unsigned int \_\_cdecl \_rotr\(unsigned int \_Value, int \_Shift\)|  
|\_rotr16|unsigned short \_rotr16\(unsigned short \_Value, unsigned char \_Shift\)|  
|\_rotr64|unsigned \_\_int64 \_\_cdecl \_rotr64\(unsigned \_\_int64 \_Value, int \_Shift\)|  
|\_rotr8|unsigned char \_rotr8\(unsigned char \_Value, unsigned char \_Shift\)|  
|\_setjmpex|int \_\_cdecl \_setjmpex\(jmp\_buf\)|  
|\_WriteBarrier|void \_WriteBarrier\(void\)|  
  
 \[[NEON](#top)\]  
  
## Funzioni intrinseche interlocked  
 Le funzioni intrinseche interlocked sono un set di funzioni intrinseche che consentono di eseguire operazioni atomiche di lettura, modifica e scrittura.  Alcune di esse sono comuni a tutte le piattaforme.  Vengono elencate separatamente in questa sezione non perché ne siano tante ma perché le relative definizioni sono per lo più ridondanti, ed è più semplice considerale in termini generali.  Dai nomi se ne evince l'esatto comportamento.  
  
 La tabella seguente elenca il supporto ARM delle funzioni intrinseche interlocked non\-bittest.  Ogni cella della tabella corrisponde a un nome derivato aggiungendo il nome dell'operazione nella cella più a sinistra della riga e il nome del tipo nella cella più in alto della colonna in `_Interlocked`.  Ad esempio, la cella in corrispondenza dell'intersezione della riga `Xor` con la colonna **8** corrisponde a `_InterlockedXor8` ed è completamente supportata.  La maggior parte delle funzioni supportate fornisce i seguenti suffissi facoltativi: `_acq`, `_rel` e `_nf`.  Il suffisso `_acq` indica una semantica di acquisizione e il suffisso `_rel` indica una semantica di rilascio.  Il suffisso `_nf` o "nessun limite" è univoco in ARM e viene illustrato nella sezione successiva.  
  
||8|16|32|64|P|  
|-|-------|--------|--------|--------|-------|  
|Add|None|None|Completo|Completo|None|  
|And|Completo|Completo|Completo|Completo|None|  
|CompareExchange|Completo|Completo|Completo|Completo|Completo|  
|Operatore di conversione|None|Completo|Completo|Completo|None|  
|Exchange|Partial|Partial|Partial|Partial|Partial|  
|ExchangeAdd|Completo|Completo|Completo|Completo|None|  
|Operatore di incremento|None|Completo|Completo|Completo|None|  
|Oppure|Completo|Completo|Completo|Completo|None|  
|Xor|Completo|Completo|Completo|Completo|None|  
  
 Legenda:  
  
-   **Completo**: supporta formati comuni, `_acq`, `_rel` e `_nf`.  
  
-   **Parziale**: supporta formati comuni, `_acq` e `_nf`.  
  
-   **Nessuno**: non supportato  
  
###  <a name="nf_suffix"></a> Suffisso \_nf \(nessun limite\)  
 Il suffisso `_nf` o "nessun limite" indica che l'operazione non si comporta come qualsiasi tipo di barriera di memoria.  Si differenzia dagli altri tre formati \(normale, `_acq` e `_rel`\), che si comportano tutti come un tipo di barriera.  Un possibile uso dei formati `_nf` è quello di gestire un contatore di statistiche aggiornato da più thread contemporaneamente ma il cui valore non viene però usato durante l'esecuzione di più thread.  
  
### Elenco delle funzioni intrinseche interlocked  
  
|Nome funzione|Prototipo di funzione|  
|-------------------|---------------------------|  
|\_InterlockedAdd|long \_InterlockedAdd\(long \_volatile \*, long\)|  
|\_InterlockedAdd64|\_\_int64 \_InterlockedAdd64\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAdd64\_acq|\_\_int64 \_InterlockedAdd64\_acq\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAdd64\_nf|\_\_int64 \_InterlockedAdd64\_nf\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAdd64\_rel|\_\_int64 \_InterlockedAdd64\_rel\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAdd\_acq|long \_InterlockedAdd\_acq\(long volatile \*, long\)|  
|\_InterlockedAdd\_nf|long \_InterlockedAdd\_nf\(long volatile \*, long\)|  
|\_InterlockedAdd\_rel|long \_InterlockedAdd\_rel\(long volatile \*, long\)|  
|\_InterlockedAnd|long \_InterlockedAnd\(long volatile \*, long\)|  
|\_InterlockedAnd16|short \_InterlockedAnd16\(short volatile \*, short\)|  
|\_InterlockedAnd16\_acq|short \_InterlockedAnd16\_acq\(short volatile \*, short\)|  
|\_InterlockedAnd16\_nf|short \_InterlockedAnd16\_nf\(short volatile \*, short\)|  
|\_InterlockedAnd16\_rel|short \_InterlockedAnd16\_rel\(short volatile \*, short\)|  
|\_InterlockedAnd64|\_\_int64 \_InterlockedAnd64\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAnd64\_acq|\_\_int64 \_InterlockedAnd64\_acq\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAnd64\_nf|\_\_int64 \_InterlockedAnd64\_nf\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAnd64\_rel|\_\_int64 \_InterlockedAnd64\_rel\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedAnd8|char \_InterlockedAnd8\(char volatile \*, char\)|  
|\_InterlockedAnd8\_acq|char \_InterlockedAnd8\_acq\(char volatile \*, char\)|  
|\_InterlockedAnd8\_nf|char \_InterlockedAnd8\_nf\(char volatile \*, char\)|  
|\_InterlockedAnd8\_rel|char \_InterlockedAnd8\_rel\(char volatile \*, char\)|  
|\_InterlockedAnd\_acq|long \_InterlockedAnd\_acq\(long volatile \*, long\)|  
|\_InterlockedAnd\_nf|long \_InterlockedAnd\_nf\(long volatile \*, long\)|  
|\_InterlockedAnd\_rel|long \_InterlockedAnd\_rel\(long volatile \*, long\)|  
|\_InterlockedCompareExchange|long \_\_cdecl \_InterlockedCompareExchange\(long volatile \*, long, long\)|  
|\_InterlockedCompareExchange16|short \_InterlockedCompareExchange16\(short volatile \*, short, short\)|  
|\_InterlockedCompareExchange16\_acq|short \_InterlockedCompareExchange16\_acq\(short volatile \*, short, short\)|  
|\_InterlockedCompareExchange16\_nf|short \_InterlockedCompareExchange16\_nf\(short volatile \*, short, short\)|  
|\_InterlockedCompareExchange16\_rel|short \_InterlockedCompareExchange16\_rel\(short volatile \*, short, short\)|  
|\_InterlockedCompareExchange64|\_\_int64 \_InterlockedCompareExchange64\(\_\_int64 volatile \*, \_\_int64, \_\_int64\)|  
|\_InterlockedCompareExchange64\_acq|\_\_int64 \_InterlockedCompareExchange64\_acq\(\_\_int64 volatile \*, \_\_int64, \_\_int64\)|  
|\_InterlockedCompareExchange64\_nf|\_\_int64 \_InterlockedCompareExchange64\_nf\(\_\_int64 volatile \*, \_\_int64, \_\_int64\)|  
|\_InterlockedCompareExchange64\_rel|\_\_int64 \_InterlockedCompareExchange64\_rel\(\_\_int64 volatile \*, \_\_int64, \_\_int64\)|  
|\_InterlockedCompareExchange8|char \_InterlockedCompareExchange8\(char volatile \*, char, char\)|  
|\_InterlockedCompareExchange8\_acq|char \_InterlockedCompareExchange8\_acq\(char volatile \*, char, char\)|  
|\_InterlockedCompareExchange8\_nf|char \_InterlockedCompareExchange8\_nf\(char volatile \*, char, char\)|  
|\_InterlockedCompareExchange8\_rel|char \_InterlockedCompareExchange8\_rel\(char volatile \*, char, char\)|  
|\_InterlockedCompareExchangePointer|void \* \_InterlockedCompareExchangePointer\(void \* volatile \*, void \*, void \*\)|  
|\_InterlockedCompareExchangePointer\_acq|void \* \_InterlockedCompareExchangePointer\_acq\(void \* volatile \*, void \*, void \*\)|  
|\_InterlockedCompareExchangePointer\_nf|void \* \_InterlockedCompareExchangePointer\_nf\(void \* volatile \*, void \*, void \*\)|  
|\_InterlockedCompareExchangePointer\_rel|void \* \_InterlockedCompareExchangePointer\_rel\(void \* volatile \*, void \*, void \*\)|  
|\_InterlockedCompareExchange\_acq|long \_InterlockedCompareExchange\_acq\(long volatile \*, long, long\)|  
|\_InterlockedCompareExchange\_nf|long \_InterlockedCompareExchange\_nf\(long volatile \*, long, long\)|  
|\_InterlockedCompareExchange\_rel|long \_InterlockedCompareExchange\_rel\(long volatile \*, long, long\)|  
|\_InterlockedDecrement|long \_\_cdecl \_InterlockedDecrement\(long volatile \*\)|  
|\_InterlockedDecrement16|short \_InterlockedDecrement16\(short volatile \*\)|  
|\_InterlockedDecrement16\_acq|short \_InterlockedDecrement16\_acq\(short volatile \*\)|  
|\_InterlockedDecrement16\_nf|short \_InterlockedDecrement16\_nf\(short volatile \*\)|  
|\_InterlockedDecrement16\_rel|short \_InterlockedDecrement16\_rel\(short volatile \*\)|  
|\_InterlockedDecrement64|\_\_int64 \_InterlockedDecrement64\(\_\_int64 volatile \*\)|  
|\_InterlockedDecrement64\_acq|\_\_int64 \_InterlockedDecrement64\_acq\(\_\_int64 volatile \*\)|  
|\_InterlockedDecrement64\_nf|\_\_int64 \_InterlockedDecrement64\_nf\(\_\_int64 volatile \*\)|  
|\_InterlockedDecrement64\_rel|\_\_int64 \_InterlockedDecrement64\_rel\(\_\_int64 volatile \*\)|  
|\_InterlockedDecrement\_acq|long \_InterlockedDecrement\_acq\(long volatile \*\)|  
|\_InterlockedDecrement\_nf|long \_InterlockedDecrement\_nf\(long volatile \*\)|  
|\_InterlockedDecrement\_rel|long \_InterlockedDecrement\_rel\(long volatile \*\)|  
|\_InterlockedExchange|long \_\_cdecl \_InterlockedExchange\(long volatile \* \_Target, long\)|  
|\_InterlockedExchange16|short \_InterlockedExchange16\(short volatile \* \_Target, short\)|  
|\_InterlockedExchange16\_acq|short \_InterlockedExchange16\_acq\(short volatile \* \_Target, short\)|  
|\_InterlockedExchange16\_nf|short \_InterlockedExchange16\_nf\(short volatile \* \_Target, short\)|  
|\_InterlockedExchange64|\_\_int64 \_InterlockedExchange64\(\_\_int64 volatile \* \_Target, \_\_int64\)|  
|\_InterlockedExchange64\_acq|\_\_int64 \_InterlockedExchange64\_acq\(\_\_int64 volatile \* \_Target, \_\_int64\)|  
|\_InterlockedExchange64\_nf|\_\_int64 \_InterlockedExchange64\_nf\(\_\_int64 volatile \* \_Target, \_\_int64\)|  
|\_InterlockedExchange8|char \_InterlockedExchange8\(char volatile \* \_Target, char\)|  
|\_InterlockedExchange8\_acq|char \_InterlockedExchange8\_acq\(char volatile \* \_Target, char\)|  
|\_InterlockedExchange8\_nf|char \_InterlockedExchange8\_nf\(char volatile \* \_Target, char\)|  
|\_InterlockedExchangeAdd|long \_\_cdecl \_InterlockedExchangeAdd\(long volatile \*, long\)|  
|\_InterlockedExchangeAdd16|short \_InterlockedExchangeAdd16\(short volatile \*, short\)|  
|\_InterlockedExchangeAdd16\_acq|short \_InterlockedExchangeAdd16\_acq\(short volatile \*, short\)|  
|\_InterlockedExchangeAdd16\_nf|short \_InterlockedExchangeAdd16\_nf\(short volatile \*, short\)|  
|\_InterlockedExchangeAdd16\_rel|short \_InterlockedExchangeAdd16\_rel\(short volatile \*, short\)|  
|\_InterlockedExchangeAdd64|\_\_int64 \_InterlockedExchangeAdd64\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedExchangeAdd64\_acq|\_\_int64 \_InterlockedExchangeAdd64\_acq\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedExchangeAdd64\_nf|\_\_int64 \_InterlockedExchangeAdd64\_nf\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedExchangeAdd64\_rel|\_\_int64 \_InterlockedExchangeAdd64\_rel\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedExchangeAdd8|char \_InterlockedExchangeAdd8\(char volatile \*, char\)|  
|\_InterlockedExchangeAdd8\_acq|char \_InterlockedExchangeAdd8\_acq\(char volatile \*, char\)|  
|\_InterlockedExchangeAdd8\_nf|char \_InterlockedExchangeAdd8\_nf\(char volatile \*, char\)|  
|\_InterlockedExchangeAdd8\_rel|char \_InterlockedExchangeAdd8\_rel\(char volatile \*, char\)|  
|\_InterlockedExchangeAdd\_acq|long \_InterlockedExchangeAdd\_acq\(long volatile \*, long\)|  
|\_InterlockedExchangeAdd\_nf|long \_InterlockedExchangeAdd\_nf\(long volatile \*, long\)|  
|\_InterlockedExchangeAdd\_rel|long \_InterlockedExchangeAdd\_rel\(long volatile \*, long\)|  
|\_InterlockedExchangePointer|void \* \_InterlockedExchangePointer\(void \* volatile \* \_Target, void \*\)|  
|\_InterlockedExchangePointer\_acq|void \* \_InterlockedExchangePointer\_acq\(void \* volatile \* \_Target, void \*\)|  
|\_InterlockedExchangePointer\_nf|void \* \_InterlockedExchangePointer\_nf\(void \* volatile \* \_Target, void \*\)|  
|\_InterlockedExchange\_acq|long \_InterlockedExchange\_acq\(long volatile \* \_Target, long\)|  
|\_InterlockedExchange\_nf|long \_InterlockedExchange\_nf\(long volatile \* \_Target, long\)|  
|\_InterlockedIncrement|long \_\_cdecl \_InterlockedIncrement\(long volatile \*\)|  
|\_InterlockedIncrement16|short \_InterlockedIncrement16\(short volatile \*\)|  
|\_InterlockedIncrement16\_acq|short \_InterlockedIncrement16\_acq\(short volatile \*\)|  
|\_InterlockedIncrement16\_nf|short \_InterlockedIncrement16\_nf\(short volatile \*\)|  
|\_InterlockedIncrement16\_rel|short \_InterlockedIncrement16\_rel\(short volatile \*\)|  
|\_InterlockedIncrement64|\_\_int64 \_InterlockedIncrement64\(\_\_int64 volatile \*\)|  
|\_InterlockedIncrement64\_acq|\_\_int64 \_InterlockedIncrement64\_acq\(\_\_int64 volatile \*\)|  
|\_InterlockedIncrement64\_nf|\_\_int64 \_InterlockedIncrement64\_nf\(\_\_int64 volatile \*\)|  
|\_InterlockedIncrement64\_rel|\_\_int64 \_InterlockedIncrement64\_rel\(\_\_int64 volatile \*\)|  
|\_InterlockedIncrement\_acq|long \_InterlockedIncrement\_acq\(long volatile \*\)|  
|\_InterlockedIncrement\_nf|long \_InterlockedIncrement\_nf\(long volatile \*\)|  
|\_InterlockedIncrement\_rel|long \_InterlockedIncrement\_rel\(long volatile \*\)|  
|\_InterlockedOr|long \_InterlockedOr\(long volatile \*, long\)|  
|\_InterlockedOr16|short \_InterlockedOr16\(short volatile \*, short\)|  
|\_InterlockedOr16\_acq|short \_InterlockedOr16\_acq\(short volatile \*, short\)|  
|\_InterlockedOr16\_nf|short \_InterlockedOr16\_nf\(short volatile \*, short\)|  
|\_InterlockedOr16\_rel|short \_InterlockedOr16\_rel\(short volatile \*, short\)|  
|\_InterlockedOr64|\_\_int64 \_InterlockedOr64\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedOr64\_acq|\_\_int64 \_InterlockedOr64\_acq\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedOr64\_nf|\_\_int64 \_InterlockedOr64\_nf\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedOr64\_rel|\_\_int64 \_InterlockedOr64\_rel\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedOr8|char \_InterlockedOr8\(char volatile \*, char\)|  
|\_InterlockedOr8\_acq|char \_InterlockedOr8\_acq\(char volatile \*, char\)|  
|\_InterlockedOr8\_nf|char \_InterlockedOr8\_nf\(char volatile \*, char\)|  
|\_InterlockedOr8\_rel|char \_InterlockedOr8\_rel\(char volatile \*, char\)|  
|\_InterlockedOr\_acq|long \_InterlockedOr\_acq\(long volatile \*, long\)|  
|\_InterlockedOr\_nf|long \_InterlockedOr\_nf\(long volatile \*, long\)|  
|\_InterlockedOr\_rel|long \_InterlockedOr\_rel\(long volatile \*, long\)|  
|\_InterlockedXor|long \_InterlockedXor\(long volatile \*, long\)|  
|\_InterlockedXor16|short \_InterlockedXor16\(short volatile \*, short\)|  
|\_InterlockedXor16\_acq|short \_InterlockedXor16\_acq\(short volatile \*, short\)|  
|\_InterlockedXor16\_nf|short \_InterlockedXor16\_nf\(short volatile \*, short\)|  
|\_InterlockedXor16\_rel|short \_InterlockedXor16\_rel\(short volatile \*, short\)|  
|\_InterlockedXor64|\_\_int64 \_InterlockedXor64\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedXor64\_acq|\_\_int64 \_InterlockedXor64\_acq\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedXor64\_nf|\_\_int64 \_InterlockedXor64\_nf\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedXor64\_rel|\_\_int64 \_InterlockedXor64\_rel\(\_\_int64 volatile \*, \_\_int64\)|  
|\_InterlockedXor8|char \_InterlockedXor8\(char volatile \*, char\)|  
|\_InterlockedXor8\_acq|char \_InterlockedXor8\_acq\(char volatile \*, char\)|  
|\_InterlockedXor8\_nf|char \_InterlockedXor8\_nf\(char volatile \*, char\)|  
|\_InterlockedXor8\_rel|char \_InterlockedXor8\_rel\(char volatile \*, char\)|  
|\_InterlockedXor\_acq|long \_InterlockedXor\_acq\(long volatile \*, long\)|  
|\_InterlockedXor\_nf|long \_InterlockedXor\_nf\(long volatile \*, long\)|  
|\_InterlockedXor\_rel|long \_InterlockedXor\_rel\(long volatile \*, long\)|  
  
 \[[NEON](#top)\]  
  
### Funzioni intrinseche \_interlockedbittest  
 Le funzioni intrinseche bittest interlocked normali sono comuni a tutte le piattaforme.  ARM aggiunge le varianti `_acq`, `_rel` e `_nf` che modificano solo la semantica di barriera di un'operazione, come descritto in [Suffisso _nf (nessun limite)](#nf_suffix) in questo articolo.  
  
|Nome funzione|Prototipo di funzione|  
|-------------------|---------------------------|  
|\_interlockedbittestandreset|unsigned char \_interlockedbittestandreset\(long volatile \*, long\)|  
|\_interlockedbittestandreset\_acq|unsigned char \_interlockedbittestandreset\_acq\(long volatile \*, long\)|  
|\_interlockedbittestandreset\_nf|unsigned char \_interlockedbittestandreset\_nf\(long volatile \*, long\)|  
|\_interlockedbittestandreset\_rel|unsigned char \_interlockedbittestandreset\_rel\(long volatile \*, long\)|  
|\_interlockedbittestandset|unsigned char \_interlockedbittestandset\(long volatile \*, long\)|  
|\_interlockedbittestandset\_acq|unsigned char \_interlockedbittestandset\_acq\(long volatile \*, long\)|  
|\_interlockedbittestandset\_nf|unsigned char \_interlockedbittestandset\_nf\(long volatile \*, long\)|  
|\_interlockedbittestandset\_rel|unsigned char \_interlockedbittestandset\_rel\(long volatile \*, long\)|  
  
 \[[NEON](#top)\]  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [ARM Assembler Reference](../assembler/arm/arm-assembler-reference.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)