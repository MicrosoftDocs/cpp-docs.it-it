---
title: Funzioni intrinseche ARM | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- arm_neon/vsetq_lane_p8
- armintr/_arm_uxtb
- arm_neon/vld4_lane_p8
- arm_neon/vrshrn_n_s64
- arm_neon/vsli_n_u32
- arm_neon/vsraq_n_u16
- arm_neon/vcgt_f32
- armintr/__iso_volatile_store32
- arm_neon/vceqq_f32
- armintr/_arm_smlal
- arm_neon/vmull_n_s32
- arm_neon/vmax_s8
- arm_neon/vmvn_u32
- arm_neon/vrshl_u32
- arm_neon/int32x2_t
- arm_neon/vdupq_n_p8
- arm_neon/vpmax_u16
- arm_neon/vtrnq_s32
- arm_neon/vset_lane_f32
- arm_neon/vrev64_s8
- arm_neon/vtrnq_p8
- arm_neon/vqshlq_u64
- arm_neon/vld1q_dup_s64
- arm_neon/vmovq_n_u64
- arm_neon/vqshrn_n_u16
- arm_neon/vhadd_s32
- arm_neon/vrhaddq_u32
- arm_neon/vst1q_p8
- arm_neon/vshrn_n_s16
- arm_neon/vget_high_f32
- arm_neon/vuzpq_s16
- arm_neon/vand_u16
- arm_neon/vmulq_s32
- arm_neon/vrsraq_n_s64
- arm_neon/vceqq_s8
- arm_neon/uint64x1x3_t
- arm_neon/veor_u32
- armintr/_arm_pkhtb
- arm_neon/vorrq_u16
- arm_neon/vpaddl_s8
- arm_neon/vmla_n_s16
- arm_neon/vqdmlal_lane_s32
- arm_neon/vshlq_n_u8
- arm_neon/vst2_lane_p8
- arm_neon/vld3q_u16
- arm_neon/vandq_u8
- arm_neon/vst1_u64
- arm_neon/vaddq_s64
- arm_neon/vuzpq_u32
- arm_neon/vld3_lane_p8
- arm_neon/vminq_s32
- arm_neon/vabd_u16
- arm_neon/vdup_n_u32
- arm_neon/vmul_p8
- arm_neon/vsra_n_u16
- arm_neon/vst3q_u16
- arm_neon/int32x2x3_t
- arm_neon/vld2_dup_u16
- arm_neon/vrhaddq_u8
- arm_neon/vhadd_u8
- arm_neon/vgetq_lane_s32
- arm_neon/vcleq_u16
- arm_neon/vabdq_s8
- arm_neon/vrev16q_u8
- arm_neon/vqshlu_n_s64
- arm_neon/vcvt_n_s32_f32
- arm_neon/vqrshrn_n_s64
- arm_neon/vst1q_p16
- arm_neon/vgetq_lane_s16
- arm_neon/vtstq_u32
- arm_neon/vmlsl_n_s16
- arm_neon/vcge_s8
- arm_neon/vshr_n_s16
- armintr/_arm_rbit
- arm_neon/vmls_u32
- arm_neon/vmls_lane_u32
- arm_neon/vcvtq_n_s32_f32
- arm_neon/vqshl_n_s8
- arm_neon/vst1q_s16
- armintr/__emit
- arm_neon/vshlq_s64
- arm_neon/vuzp_s8
- arm_neon/vld1q_lane_s64
- arm_neon/veorq_s32
- arm_neon/vaddq_u64
- arm_neon/vceq_s32
- arm_neon/vmovn_u16
- arm_neon/vabal_s8
- arm_neon/vabsq_f32
- armintr/_arm_smuad
- arm_neon/veor_u8
- arm_neon/int16x4_t
- arm_neon/vsraq_n_s16
- arm_neon/vshlq_s8
- arm_neon/vcreate_u32
- arm_neon/vzipq_s8
- arm_neon/vst3q_u8
- arm_neon/int64x1x4_t
- armintr/__iso_volatile_store16
- arm_neon/vst4_lane_p16
- arm_neon/vld1_dup_p16
- arm_neon/vhadd_s16
- arm_neon/vtbl2_s8
- arm_neon/veorq_u32
- arm_neon/vqdmlal_lane_s16
- arm_neon/vrsra_n_u8
- arm_neon/vbslq_u16
- arm_neon/vget_low_s64
- arm_neon/vceq_u16
- arm_neon/vdupq_lane_u32
- arm_neon/vabdl_u32
- arm_neon/vmlal_s32
- arm_neon/vst1_lane_u8
- arm_neon/vld4q_f16
- arm_neon/vqdmlsl_s32
- arm_neon/vqrdmulh_s32
- arm_neon/vqrshl_u8
- arm_neon/uint32x4x4_t
- arm_neon/vabaq_u16
- arm_neon/vcnt_p8
- arm_neon/vld3q_s16
- arm_neon/vshl_n_u32
- arm_neon/vrev64q_u16
- arm_neon/vextq_s64
- arm_neon/vhsubq_s8
- arm_neon/vld2_dup_u8
- arm_neon/vst3_s16
- arm_neon/vorn_u16
- arm_neon/vst4_f16
- arm_neon/vpadalq_u8
- armintr/__iso_volatile_load8
- arm_neon/vmovl_u16
- arm_neon/vld4q_u32
- arm_neon/vcgt_u32
- arm_neon/vmlaq_n_u32
- arm_neon/vrsra_n_u64
- arm_neon/vst4_s8
- arm_neon/vcvtq_n_f32_u32
- arm_neon/vst2q_u16
- arm_neon/vqshrn_n_s16
- arm_neon/vld4_s16
- arm_neon/uint16x8x4_t
- arm_neon/vrsqrte_u32
- arm_neon/vcltq_s8
- arm_neon/vst3_u16
- arm_neon/vst2_f32
- arm_neon/vld2_u64
- arm_neon/vst1_u16
- arm_neon/vmls_s16
- arm_neon/vqrshlq_s32
- arm_neon/vqdmull_s16
- arm_neon/vld2_lane_p16
- arm_neon/vpaddlq_u8
- arm_neon/vcvt_n_f32_u32
- arm_neon/vcgtq_u8
- arm_neon/vshl_s32
- arm_neon/vtbx3_p8
- arm_neon/vld3_dup_s32
- arm_neon/int16x4x3_t
- arm_neon/vcale_f32
- arm_neon/vqabsq_s32
- arm_neon/vmulq_u16
- arm_neon/vst1_s8
- arm_neon/vclt_u8
- armintr/_arm_sxtb16
- arm_neon/vshr_n_s8
- arm_neon/vst1_lane_f16
- arm_neon/vorn_s64
- armintr/_arm_usub8
- arm_neon/vst4_lane_f32
- arm_neon/vmls_lane_u16
- arm_neon/vpaddl_u32
- arm_neon/vdup_lane_u64
- arm_neon/vsri_n_p16
- arm_neon/vqrshlq_u64
- arm_neon/vclz_s16
- arm_neon/vsra_n_u32
- arm_neon/vabaq_s8
- arm_neon/vst2_lane_s8
- arm_neon/vcvt_n_u32_f32
- arm_neon/vst3_u32
- arm_neon/vcvtq_f32_u32
- arm_neon/vraddhn_s64
- armintr/_arm_uqsax
- arm_neon/vshl_u8
- armintr/_arm_uqadd16
- arm_neon/vrsra_n_u16
- arm_neon/vrshl_u64
- arm_neon/int32x4x3_t
- arm_neon/vmull_u8
- arm_neon/vcombine_u64
- arm_neon/vmull_u16
- arm_neon/vld1_dup_s8
- armintr/_CountLeadingSigns64
- arm_neon/vqshlq_n_s32
- arm_neon/vrecpe_f32
- arm_neon/vsri_n_u32
- arm_neon/vrsraq_n_s8
- arm_neon/vsetq_lane_s16
- arm_neon/vget_high_u32
- arm_neon/vmlal_u32
- arm_neon/vdupq_lane_s16
- arm_neon/vsubq_u64
- arm_neon/vext_p8
- arm_neon/vshl_u16
- arm_neon/vmls_n_u16
- arm_neon/vmull_s16
- arm_neon/vmovq_n_s64
- arm_neon/vaddq_f32
- arm_neon/vshl_n_s16
- arm_neon/vext_p16
- arm_neon/vextq_u32
- arm_neon/vld1_p8
- arm_neon/veor_s32
- arm_neon/int16x8x4_t
- arm_neon/vst1q_u16
- arm_neon/vzipq_p8
- arm_neon/int32x4x4_t
- arm_neon/vqdmulhq_lane_s32
- arm_neon/vst3_lane_u32
- arm_neon/vhsubq_s32
- armintr/__static_assert
- arm_neon/vst3q_lane_u16
- arm_neon/vpmin_u32
- arm_neon/vrev64q_p16
- arm_neon/vcleq_f32
- arm_neon/vhsub_u16
- arm_neon/vld2_lane_s32
- arm_neon/vmlsl_s32
- armintr/_arm_rev
- arm_neon/vcgeq_s16
- arm_neon/vmulq_s8
- arm_neon/vsri_n_s8
- arm_neon/vpadd_f32
- arm_neon/vld1q_lane_f16
- arm_neon/vmls_u16
- arm_neon/vld1_lane_f32
- arm_neon/vmlaq_lane_s16
- arm_neon/vqadd_u32
- arm_neon/vmul_n_s32
- arm_neon/vld1q_dup_p8
- arm_neon/vtrnq_s8
- arm_neon/vbslq_p8
- arm_neon/vget_lane_s8
- arm_neon/vext_u16
- arm_neon/vsubq_s16
- arm_neon/vld4_lane_s8
- arm_neon/uint32x2x2_t
- arm_neon/vdup_n_s8
- arm_neon/vld4_lane_u16
- arm_neon/vmovq_n_s16
- arm_neon/vst4q_s32
- arm_neon/vst2q_f16
- arm_neon/vbslq_s16
- arm_neon/vand_u64
- arm_neon/poly16_t
- arm_neon/vaba_u16
- arm_neon/vqshlq_s64
- armintr/_arm_uxth
- arm_neon/vst2_lane_s16
- arm_neon/vand_u8
- arm_neon/int8x16x3_t
- arm_neon/vrev64_u16
- arm_neon/vld2_lane_s16
- arm_neon/vabaq_s16
- arm_neon/vsli_n_u8
- arm_neon/vsraq_n_u64
- arm_neon/vmlsl_s16
- arm_neon/vmovn_u64
- arm_neon/vld4_f32
- arm_neon/vst2q_f32
- arm_neon/vtbx3_u8
- arm_neon/vcombine_s8
- arm_neon/vqdmulhq_s32
- arm_neon/vgetq_lane_p8
- armintr/_arm_smusd
- arm_neon/vpmax_u32
- arm_neon/vceq_f32
- arm_neon/vsri_n_p8
- arm_neon/vhsubq_u8
- arm_neon/vuzp_s16
- arm_neon/uint32x2x4_t
- arm_neon/vst4_lane_s32
- arm_neon/vsli_n_p8
- arm_neon/vld3_lane_f16
- arm_neon/vbic_u64
- arm_neon/vmlal_u16
- arm_neon/vmvn_s8
- arm_neon/vtstq_s8
- arm_neon/vmaxq_s32
- arm_neon/vqmovn_u64
- armintr/_arm_ssax
- arm_neon/vext_u32
- arm_neon/vld1_dup_u64
- arm_neon/vmlal_n_s16
- armintr/_arm_smulbb
- arm_neon/vqrdmulhq_lane_s16
- arm_neon/vdup_n_p8
- arm_neon/vaba_s8
- arm_neon/vrshrq_n_s32
- arm_neon/vmvnq_s32
- arm_neon/vpadal_s32
- arm_neon/vqshl_s16
- arm_neon/vtrn_p8
- arm_neon/vzip_s16
- arm_neon/vcge_f32
- armintr/_arm_sxtab16
- arm_neon/vst1q_lane_u64
- arm_neon/vqrshlq_u16
- arm_neon/int8x8_t
- arm_neon/vorr_u8
- arm_neon/vrev64_f32
- arm_neon/vpaddlq_s16
- arm_neon/vdupq_lane_u64
- arm_neon/vcltq_u16
- arm_neon/vst3_lane_f32
- arm_neon/vld2_dup_f32
- armintr/_arm_smmul
- arm_neon/vbsl_s16
- arm_neon/vld1_lane_u8
- arm_neon/vld2q_lane_u16
- arm_neon/vqshlu_n_s32
- armintr/_arm_smlalbt
- arm_neon/vmla_s8
- arm_neon/vsli_n_p16
- arm_neon/vmla_u8
- arm_neon/vqaddq_s16
- arm_neon/vld3_p16
- arm_neon/uint64x2x4_t
- arm_neon/vcnt_u8
- arm_neon/vcltq_u8
- arm_neon/vtbx1_p8
- arm_neon/vrev32q_u16
- arm_neon/vld1_lane_u16
- arm_neon/vqadd_s16
- arm_neon/vcnt_s8
- armintr/_MulUnsignedHigh
- arm_neon/vsliq_n_u8
- arm_neon/vpmin_s16
- armintr/__iso_volatile_load16
- arm_neon/vst2_lane_f32
- arm_neon/vqsubq_s32
- arm_neon/vqshl_s32
- arm_neon/vsraq_n_u32
- arm_neon/vcreate_s32
- arm_neon/vld3q_lane_u32
- arm_neon/vaddq_u16
- arm_neon/vand_s32
- arm_neon/vbicq_s32
- armintr/_arm_smulbt
- arm_neon/vrsra_n_s8
- arm_neon/vshrq_n_u32
- arm_neon/vld4_f16
- arm_neon/vcagtq_f32
- arm_neon/vaddw_u32
- armintr/_arm_uxtah
- arm_neon/vtstq_u8
- arm_neon/vld1_dup_u16
- arm_neon/int16x4x4_t
- arm_neon/vqshluq_n_s8
- arm_neon/vqdmulhq_n_s32
- arm_neon/vst1_s64
- arm_neon/vrsubhn_u16
- arm_neon/vld4_dup_p16
- arm_neon/vmlaq_s32
- arm_neon/vnegq_s32
- arm_neon/vst2q_u8
- arm_neon/vget_low_s32
- arm_neon/vorn_u32
- arm_neon/vld1q_s8
- arm_neon/vandq_s64
- arm_neon/vmvn_p8
- arm_neon/vabdl_s16
- arm_neon/vqshl_u32
- arm_neon/vld3_dup_u16
- arm_neon/vmov_n_f32
- arm_neon/vcvt_f32_u32
- arm_neon/vrhadd_s8
- arm_neon/vpadal_u32
- armintr/_arm_ubfx
- arm_neon/vcgt_s8
- arm_neon/vget_lane_f32
- arm_neon/vcge_s16
- arm_neon/vmov_n_s64
- arm_neon/vmulq_n_f32
- arm_neon/vpadalq_u32
- armintr/_arm_smlaldx
- arm_neon/vtst_u16
- arm_neon/vmls_n_s16
- arm_neon/vcombine_f32
- arm_neon/vld1q_p16
- armintr/_arm_ssat
- arm_neon/vextq_s8
- arm_neon/vmax_u32
- arm_neon/vqsubq_s64
- arm_neon/vcltq_s16
- arm_neon/vst2q_s8
- arm_neon/vpmax_u8
- arm_neon/vld4_dup_p8
- arm_neon/vrshr_n_u64
- arm_neon/vqrshrun_n_s16
- arm_neon/vget_low_u64
- arm_neon/vst2q_s32
- arm_neon/vst4_s32
- arm_neon/vrshrq_n_u8
- arm_neon/vdupq_n_u64
- arm_neon/vsriq_n_u8
- arm_neon/vdupq_lane_u8
- arm_neon/vsriq_n_s64
- arm_neon/vget_low_u8
- arm_neon/vst1_lane_p16
- arm_neon/vld1q_lane_u8
- arm_neon/vcgt_s32
- arm_neon/vst1_lane_u32
- arm_neon/vzipq_p16
- arm_neon/vmvn_u16
- arm_neon/vld1q_lane_u16
- armintr/_MoveToCoprocessor64
- arm_neon/vdup_n_u16
- arm_neon/vzipq_f32
- arm_neon/vshl_s16
- arm_neon/vmlaq_n_s16
- arm_neon/vget_lane_s64
- arm_neon/vld1q_lane_f32
- arm_neon/vnegq_s16
- armintr/_arm_usax
- arm_neon/vabd_s16
- arm_neon/vmovq_n_u32
- arm_neon/vshlq_n_u16
- armintr/_CountLeadingSigns
- arm_neon/vld3q_f16
- arm_neon/vceqq_u32
- arm_neon/int8x8x2_t
- arm_neon/vst2_s64
- arm_neon/vst4q_lane_s16
- arm_neon/vorn_s32
- arm_neon/vcle_f32
- arm_neon/vld1_p16
- arm_neon/vtrn_u32
- arm_neon/vbsl_s32
- arm_neon/float32x2_t
- arm_neon/vmvn_s32
- arm_neon/vqdmlsl_lane_s16
- arm_neon/vtbl3_s8
- arm_neon/vsra_n_u8
- arm_neon/vcvtq_u32_f32
- arm_neon/vst1_p8
- arm_neon/vrev64_p16
- armintr/__ldrexd
- arm_neon/vcgeq_u8
- arm_neon/vmlal_n_s32
- arm_neon/vst1q_lane_p8
- arm_neon/vpadalq_s32
- arm_neon/vtstq_p8
- arm_neon/vld4_lane_u8
- armintr/_arm_ssub16
- arm_neon/vpaddlq_u16
- armintr/_arm_udiv
- arm_neon/vld1_lane_p8
- arm_neon/vst1q_u32
- arm_neon/vld1_f32
- arm_neon/uint64x2x2_t
- arm_neon/vqsubq_u64
- arm_neon/vld4q_s32
- arm_neon/vceq_s16
- arm_neon/vst3_s64
- arm_neon/vext_s8
- armintr/_arm_smlsd
- arm_neon/vpadal_s16
- arm_neon/vbic_s32
- arm_neon/vld1_dup_u8
- arm_neon/vclt_f32
- arm_neon/vrev64_s16
- arm_neon/vrshlq_s64
- arm_neon/vdupq_n_s64
- arm_neon/vuzp_p16
- arm_neon/vld3_dup_p16
- arm_neon/vcreate_s8
- armintr/_arm_smlatt
- arm_neon/vtst_s32
- arm_neon/vshrq_n_s64
- arm_neon/vqshlq_n_s64
- arm_neon/vqshlu_n_s16
- arm_neon/vcleq_s16
- arm_neon/vmull_lane_s16
- arm_neon/int32x4_t
- arm_neon/vqadd_s8
- arm_neon/vld2q_f16
- arm_neon/vld2q_lane_p16
- arm_neon/vadd_u32
- arm_neon/vcntq_u8
- arm_neon/vst1_f32
- arm_neon/vmaxq_u32
- arm_neon/vsub_u64
- arm_neon/vsubl_s32
- arm_neon/poly16x4_t
- arm_neon/vgetq_lane_u16
- arm_neon/vdup_lane_s32
- arm_neon/vrhadd_s32
- arm_neon/veorq_u8
- arm_neon/vclzq_s8
- arm_neon/vsliq_n_s64
- arm_neon/vpadalq_s16
- arm_neon/vmla_n_f32
- arm_neon/vcgt_u16
- armintr/_arm_usada8
- arm_neon/vabd_u32
- arm_neon/vgetq_lane_s8
- arm_neon/vqshlq_n_u64
- arm_neon/vabaq_u32
- armintr/_arm_uhsax
- arm_neon/vmulq_f32
- arm_neon/vld3_dup_s16
- arm_neon/vst3_f16
- arm_neon/vrshrq_n_s64
- armintr/__rdpmccntr64
- arm_neon/vclsq_s32
- arm_neon/vmax_u16
- arm_neon/vmvnq_p8
- arm_neon/veor_u16
- arm_neon/vqshrn_n_u32
- arm_neon/vextq_u64
- arm_neon/vld1q_f32
- arm_neon/vget_low_u32
- arm_neon/vhaddq_s32
- arm_neon/vminq_u16
- arm_neon/vqrdmulhq_lane_s32
- arm_neon/vmla_s16
- arm_neon/vadd_s16
- arm_neon/vbsl_u16
- arm_neon/vhsub_s8
- arm_neon/vld4q_lane_p16
- arm_neon/vld1_s16
- arm_neon/vst2q_lane_p16
- arm_neon/vld2_dup_s8
- arm_neon/vst3q_s16
- arm_neon/vcgeq_u32
- arm_neon/vabdq_s16
- arm_neon/vrhadd_u16
- arm_neon/vqshlq_n_u32
- arm_neon/vst4q_lane_u32
- arm_neon/vrsraq_n_u64
- arm_neon/vmlsq_n_s32
- arm_neon/vld4_u8
- arm_neon/vld2_f16
- arm_neon/vqshlq_u8
- arm_neon/vorrq_u64
- arm_neon/vmin_u16
- arm_neon/vext_u8
- arm_neon/vpaddl_s32
- arm_neon/vshlq_u64
- arm_neon/vst2q_lane_f16
- armintr/_arm_sbfx
- arm_neon/vld3_dup_f16
- armintr/_arm_uhasx
- arm_neon/vst2_lane_u8
- armintr/_arm_smultb
- arm_neon/vdup_n_p16
- arm_neon/vtrnq_u32
- arm_neon/vrshlq_u8
- arm_neon/vld4_lane_p16
- arm_neon/vsraq_n_s32
- arm_neon/vclt_s16
- arm_neon/vzip_u8
- arm_neon/vld3_lane_s16
- arm_neon/vceqq_s32
- arm_neon/vld3_dup_f32
- arm_neon/vld4q_lane_s32
- arm_neon/poly8x16x4_t
- arm_neon/uint64x1x2_t
- arm_neon/vqdmlal_n_s16
- arm_neon/vld2_dup_f16
- arm_neon/vshrq_n_s32
- arm_neon/vcleq_s8
- arm_neon/vld3_s32
- arm_neon/vqrshlq_s64
- arm_neon/vbsl_f32
- arm_neon/vext_s64
- arm_neon/vabaq_s32
- arm_neon/vmulq_s16
- arm_neon/vld3_lane_u16
- arm_neon/vld3q_lane_u16
- armintr/_arm_smlaltt
- arm_neon/poly8x8x2_t
- arm_neon/vst3q_u32
- armintr/_arm_smlsdx
- arm_neon/vqrshl_s64
- arm_neon/vextq_p8
- armintr/_arm_uhsub16
- arm_neon/vld3q_p8
- armintr/_arm_smlawt
- armintr/_arm_smlawb
- arm_neon/vdupq_lane_s8
- arm_neon/vaddl_s16
- arm_neon/vcombine_p16
- arm_neon/vzipq_u32
- arm_neon/poly16x8_t
- arm_neon/vshlq_n_s32
- arm_neon/vrshl_s8
- arm_neon/vst2_u64
- arm_neon/vrev64q_s8
- arm_neon/vst2q_lane_s32
- arm_neon/vld2_dup_s16
- arm_neon/vclt_u16
- arm_neon/vuzp_p8
- arm_neon/vshrq_n_s16
- arm_neon/vst3_u64
- arm_neon/vpmin_u16
- arm_neon/vld3q_lane_s32
- arm_neon/vmlal_s16
- arm_neon/poly16x4x4_t
- arm_neon/vorr_u16
- arm_neon/vsliq_n_s16
- arm_neon/vaddl_u8
- arm_neon/vld4_dup_s32
- arm_neon/vld2_f32
- arm_neon/vclt_u32
- arm_neon/vmull_lane_u16
- arm_neon/vsubw_u32
- arm_neon/vld2_dup_s32
- arm_neon/vuzp_s32
- arm_neon/vcge_s32
- arm_neon/vdup_lane_p16
- arm_neon/vpmin_s8
- arm_neon/vpaddlq_u32
- arm_neon/vmlaq_n_s32
- arm_neon/vshrn_n_u64
- arm_neon/vrshr_n_u16
- arm_neon/vld1_s64
- arm_neon/vbsl_u64
- armintr/_arm_smlad
- arm_neon/vqsub_s16
- arm_neon/vld4_p8
- arm_neon/vqdmulh_lane_s32
- arm_neon/vld3_dup_s64
- arm_neon/vornq_s32
- arm_neon/vpadd_u8
- arm_neon/vld3_lane_p16
- arm_neon/uint64x1x4_t
- arm_neon/vld3_u16
- armintr/_arm_shsax
- arm_neon/vabdq_u16
- arm_neon/vcgtq_f32
- arm_neon/vsubq_s8
- arm_neon/vget_low_f16
- arm_neon/vld4_dup_u64
- arm_neon/vst3_lane_s8
- armintr/_arm_ssat16
- arm_neon/vmlaq_f32
- arm_neon/vsri_n_s32
- arm_neon/vmax_u8
- arm_neon/vqadd_u8
- armintr/_arm_uqsub8
- armintr/_arm_clz
- arm_neon/vcgtq_s32
- arm_neon/vraddhn_s32
- arm_neon/vzip_s8
- arm_neon/veorq_s16
- arm_neon/vsetq_lane_s32
- arm_neon/vmul_n_u16
- armintr/_ReadBankedReg
- arm_neon/vld1q_u8
- arm_neon/vld4_p16
- arm_neon/int64x2x2_t
- arm_neon/vmaxq_s8
- arm_neon/vpmax_s16
- arm_neon/vshlq_u16
- arm_neon/vtrnq_p16
- arm_neon/vabal_u16
- arm_neon/vld2_lane_u16
- arm_neon/vrev32_u8
- arm_neon/vrshl_s32
- arm_neon/vget_low_f32
- arm_neon/vld2_s8
- arm_neon/vclzq_s16
- arm_neon/vqdmulhq_n_s16
- arm_neon/vset_lane_u64
- arm_neon/vld2_dup_p16
- arm_neon/vpaddlq_s32
- arm_neon/vld2q_p8
- arm_neon/vst3_lane_u8
- arm_neon/vld4_dup_f32
- arm_neon/vld2_s64
- arm_neon/vmls_u8
- arm_neon/vtbx4_u8
- arm_neon/vsetq_lane_f32
- arm_neon/vcvt_s32_f32
- arm_neon/vst3q_s32
- arm_neon/vmlsq_s8
- arm_neon/vmlaq_n_u16
- armintr/__iso_volatile_load64
- arm_neon/vcgt_u8
- arm_neon/vld2_dup_p8
- arm_neon/vmov_n_u8
- armintr/_arm_sasx
- arm_neon/vmovq_n_p16
- arm_neon/vmlaq_u32
- arm_neon/vst3_f32
- arm_neon/int32x2x4_t
- arm_neon/vld1q_lane_u64
- arm_neon/vclz_u16
- arm_neon/uint8x8_t
- arm_neon/vsub_u32
- arm_neon/vorn_u8
- armintr/__wfe
- arm_neon/vget_high_s16
- arm_neon/vzip_p8
- arm_neon/vmlal_lane_s16
- arm_neon/vmulq_u8
- armintr/_isunordered
- arm_neon/vld1_dup_f32
- arm_neon/vld4_lane_s16
- arm_neon/vdupq_n_s16
- arm_neon/vst3q_p16
- arm_neon/vst1_lane_f32
- arm_neon/float32x4x3_t
- arm_neon/vand_s8
- arm_neon/float32x2x4_t
- arm_neon/vld3_p8
- arm_neon/vmlaq_lane_u16
- armintr/_arm_uqsub16
- arm_neon/vget_high_s32
- arm_neon/vshl_n_s32
- arm_neon/vornq_s8
- arm_neon/vmlsl_n_u32
- arm_neon/vqshlq_n_s8
- arm_neon/int32x2x2_t
- arm_neon/int16x4x2_t
- arm_neon/vceqq_u8
- arm_neon/vcreate_f16
- arm_neon/vorn_s16
- arm_neon/vqmovn_s32
- arm_neon/vextq_u8
- arm_neon/vld4_s32
- armintr/_WriteStatusReg
- arm_neon/uint8x16_t
- arm_neon/vshrn_n_s64
- arm_neon/vmul_n_u32
- arm_neon/vabdl_u8
- arm_neon/vtbx3_s8
- arm_neon/vaddhn_s16
- arm_neon/vld3q_s8
- arm_neon/vmlsl_n_u16
- arm_neon/vrev64q_s32
- arm_neon/int16x8_t
- arm_neon/vext_s32
- arm_neon/vdupq_n_f32
- arm_neon/vld1q_lane_s32
- arm_neon/vqrshlq_u32
- arm_neon/vtbl2_u8
- arm_neon/vgetq_lane_u8
- arm_neon/veorq_u64
- arm_neon/vcntq_s8
- arm_neon/vbslq_p16
- arm_neon/vqnegq_s32
- arm_neon/vaddw_s32
- arm_neon/vmov_n_p8
- arm_neon/vmull_p8
- arm_neon/vld1_lane_u32
- arm_neon/vcombine_s16
- arm_neon/vqshrn_n_s64
- arm_neon/vceqq_s16
- arm_neon/vld4q_p16
- armintr/_ReadStatusReg
- armintr/_arm_qdadd
- arm_neon/uint32x4x2_t
- arm_neon/vcleq_u8
- armintr/_arm_sxtah
- arm_neon/vrhaddq_s32
- arm_neon/vset_lane_s64
- arm_neon/vld4_s64
- armintr/_DAddSatInt
- arm_neon/vorr_s8
- arm_neon/vst2_u32
- arm_neon/vshll_n_u16
- arm_neon/vld2_dup_u32
- arm_neon/vst3q_lane_s32
- arm_neon/vst3q_p8
- armintr/_MoveFromCoprocessor
- arm_neon/uint32x4_t
- arm_neon/vuzpq_s8
- arm_neon/vrecps_f32
- arm_neon/vst1_lane_s8
- arm_neon/vtbx1_s8
- arm_neon/uint16x8x3_t
- arm_neon/vpaddl_s16
- arm_neon/vsubq_s64
- arm_neon/vrsraq_n_u8
- arm_neon/vqadd_s64
- arm_neon/vst4_lane_s16
- arm_neon/vqadd_u16
- arm_neon/vset_lane_u32
- arm_neon/vand_u32
- arm_neon/vrsqrtsq_f32
- arm_neon/vqaddq_u32
- arm_neon/vsra_n_s64
- armintr/_arm_umlal
- arm_neon/vcvt_f32_f16
- arm_neon/vget_lane_u32
- arm_neon/vbsl_s8
- arm_neon/vrshlq_u32
- arm_neon/vqdmull_lane_s16
- arm_neon/vabsq_s32
- arm_neon/vld3_s8
- arm_neon/vst3q_lane_s16
- arm_neon/vld2q_lane_s16
- arm_neon/vst1_lane_s64
- arm_neon/vmov_n_u16
- arm_neon/vst4_lane_u8
- arm_neon/vshll_n_u32
- arm_neon/vqabs_s8
- arm_neon/vmvnq_u8
- arm_neon/vpadalq_u16
- arm_neon/vbsl_p16
- arm_neon/vqrshrn_n_u16
- arm_neon/vld3q_u32
- arm_neon/vcgeq_f32
- armintr/__iso_volatile_load32
- arm_neon/vrecpe_u32
- arm_neon/vld2_dup_u64
- arm_neon/vld3q_f32
- armintr/_arm_shsub8
- arm_neon/vdup_lane_s64
- arm_neon/vqrshl_s8
- arm_neon/vsliq_n_u16
- arm_neon/vld1q_u16
- arm_neon/vorr_u32
- arm_neon/vqrshl_s32
- armintr/__dmb
- arm_neon/veorq_s8
- arm_neon/vld1_u16
- arm_neon/vmov_n_u32
- arm_neon/vhsub_s16
- arm_neon/vst4q_lane_u16
- arm_neon/vbsl_u8
- armintr/_arm_uxtab
- arm_neon/vld2q_lane_f32
- arm_neon/vst2_p8
- armintr/_arm_smmla
- arm_neon/vaddw_u16
- arm_neon/vmlal_s8
- arm_neon/vtst_u32
- arm_neon/vtbl4_u8
- arm_neon/vcvt_n_f32_s32
- arm_neon/vcageq_f32
- arm_neon/vget_low_s16
- arm_neon/vdupq_n_u8
- arm_neon/vorn_s8
- arm_neon/uint8x16x3_t
- arm_neon/vabdq_u32
- arm_neon/vrev64_p8
- arm_neon/vqsubq_s8
- armintr/_arm_smlabb
- arm_neon/vbicq_s64
- arm_neon/vmaxq_u16
- arm_neon/vdup_n_u8
- arm_neon/veor_s8
- arm_neon/int16x8x2_t
- arm_neon/vcvtq_s32_f32
- arm_neon/vtrn_u16
- arm_neon/vbslq_s32
- arm_neon/vld1q_dup_u32
- arm_neon/vmul_n_f32
- arm_neon/vqrshl_u32
- arm_neon/vqsubq_s16
- arm_neon/vst2_lane_f16
- armintr/_arm_smulwt
- arm_neon/vrshrn_n_u32
- arm_neon/vget_high_p16
- arm_neon/vqadd_u64
- arm_neon/vsli_n_s32
- arm_neon/vhadd_u32
- arm_neon/vmlsl_lane_u16
- arm_neon/vclzq_u32
- arm_neon/vqshrun_n_s64
- arm_neon/vrev64q_u32
- arm_neon/vqshrun_n_s16
- arm_neon/vrev32q_s8
- armintr/_arm_shasx
- arm_neon/vaddl_s8
- armintr/_arm_smull
- arm_neon/vabaq_u8
- armintr/_arm_revsh
- arm_neon/vsubq_f32
- arm_neon/poly16x4x2_t
- arm_neon/poly8x8x3_t
- arm_neon/vsubhn_s64
- arm_neon/vcle_u16
- arm_neon/poly8x16x3_t
- arm_neon/vqdmlsl_n_s16
- arm_neon/vqshl_u64
- arm_neon/vcge_u16
- armintr/_arm_uasx
- arm_neon/vmovl_s32
- arm_neon/vst1q_lane_u16
- arm_neon/vbic_u32
- arm_neon/vld2_s16
- armintr/_arm_qasx
- arm_neon/vorrq_u8
- arm_neon/vst2_s32
- armintr/_WriteBankedReg
- arm_neon/veorq_s64
- arm_neon/vld4_lane_f32
- arm_neon/vcreate_u8
- arm_neon/vset_lane_u8
- arm_neon/vandq_u16
- arm_neon/vrsubhn_s64
- arm_neon/vst1q_lane_p16
- arm_neon/uint8x8x2_t
- arm_neon/vmlsl_s8
- arm_neon/vmax_s32
- arm_neon/uint32x4x3_t
- arm_neon/vld4_dup_u16
- arm_neon/vabs_s32
- arm_neon/vld3_dup_u32
- arm_neon/vrshl_u16
- arm_neon/vcle_u8
- arm_neon/vqshl_n_u16
- arm_neon/vbic_s8
- arm_neon/float32x4x2_t
- arm_neon/vmls_f32
- arm_neon/vshll_n_u8
- arm_neon/vminq_s8
- arm_neon/vmlsq_lane_f32
- arm_neon/vst1q_f16
- arm_neon/vst1_lane_u64
- arm_neon/vrhadd_u8
- arm_neon/vclt_s32
- arm_neon/vst2_p16
- arm_neon/vrshrq_n_u16
- arm_neon/vneg_s32
- arm_neon/vmovl_s16
- arm_neon/vqshlq_s8
- arm_neon/vld1_s8
- arm_neon/vqdmulh_s32
- arm_neon/vcls_s8
- armintr/__trap
- arm_neon/vuzp_u32
- armintr/_CopyInt64FromDouble
- arm_neon/int8x16x2_t
- arm_neon/vmovn_s32
- arm_neon/vget_high_s8
- arm_neon/veor_s64
- armintr/_arm_uadd8
- arm_neon/vrev16_u8
- arm_neon/vbicq_u64
- arm_neon/vst4_lane_f16
- arm_neon/vst3_s32
- arm_neon/poly8x8_t
- arm_neon/vtstq_u16
- arm_neon/vld1_lane_s8
- arm_neon/float32x4x4_t
- arm_neon/vst2_s16
- arm_neon/vqrdmulhq_s32
- arm_neon/vqdmulhq_s16
- arm_neon/vrshrq_n_s8
- arm_neon/vcle_s32
- arm_neon/vtbl3_p8
- arm_neon/vbslq_u8
- arm_neon/vst4_u64
- armintr/_arm_umaal
- arm_neon/vshll_n_s8
- arm_neon/vcvt_u32_f32
- arm_neon/vld4q_p8
- arm_neon/vsetq_lane_u16
- arm_neon/vabd_u8
- arm_neon/vclz_u8
- arm_neon/vsubq_u32
- arm_neon/vld1q_lane_p16
- arm_neon/vcgtq_s16
- arm_neon/vmla_lane_s32
- arm_neon/vshlq_n_s64
- arm_neon/vbsl_u32
- arm_neon/vqshlq_s16
- armintr/_arm_qadd8
- arm_neon/vrshr_n_s32
- armintr/_CountOneBits64
- arm_neon/vceq_u32
- arm_neon/vbsl_p8
- arm_neon/uint16x8x2_t
- arm_neon/vsli_n_s16
- arm_neon/vmla_n_s32
- arm_neon/vld4_dup_u32
- arm_neon/vshrq_n_s8
- arm_neon/vqaddq_s8
- arm_neon/vshl_n_u64
- arm_neon/vtbl2_p8
- arm_neon/vcleq_u32
- arm_neon/vqsub_u32
- arm_neon/vmovl_u8
- arm_neon/vmlal_u8
- arm_neon/vmul_s8
- armintr/_MoveFromCoprocessor64
- arm_neon/vrsraq_n_s16
- arm_neon/vdupq_n_u32
- arm_neon/vmov_n_s16
- arm_neon/vst4_lane_p8
- arm_neon/vld1_s32
- arm_neon/vst4_p8
- arm_neon/vsriq_n_u32
- arm_neon/vqdmull_n_s16
- arm_neon/vshlq_u32
- arm_neon/vld3_u8
- armintr/_arm_usub16
- arm_neon/vmlsq_lane_s16
- arm_neon/vmovq_n_s8
- arm_neon/int32x4x2_t
- arm_neon/vld4q_u8
- arm_neon/poly16x8x2_t
- arm_neon/vld1q_u64
- arm_neon/vld3q_lane_s16
- arm_neon/int64x1x2_t
- arm_neon/vshlq_n_s8
- arm_neon/vrshl_s64
- arm_neon/vqshl_n_u8
- armintr/_arm_qadd
- armintr/_DSubSatInt
- armintr/_arm_usat16
- arm_neon/vmull_s8
- arm_neon/vsub_s8
- arm_neon/vmovq_n_u16
- arm_neon/vst4_u16
- arm_neon/vmlsl_lane_u32
- arm_neon/vsliq_n_p16
- arm_neon/vmovn_u32
- arm_neon/vbic_u16
- arm_neon/vtbx2_p8
- arm_neon/vrsubhn_s32
- armintr/_SubSatInt
- arm_neon/vst3_u8
- arm_neon/vdupq_n_s32
- arm_neon/vcntq_p8
- arm_neon/vst4_f32
- arm_neon/vbic_s64
- arm_neon/vld3_s64
- arm_neon/vrsra_n_s64
- arm_neon/vqabsq_s16
- arm_neon/vsriq_n_p8
- arm_neon/vst2_lane_p16
- arm_neon/vabsq_s16
- arm_neon/vcombine_u8
- arm_neon/vld2q_p16
- armintr/_CountOneBits
- armintr/__prefetch
- arm_neon/vld3_dup_u64
- arm_neon/vld2q_s16
- arm_neon/vget_low_p16
- arm_neon/vuzpq_u8
- arm_neon/vrev32q_s16
- armintr/_AddSatInt
- arm_neon/uint16x4x2_t
- arm_neon/vmov_n_s32
- arm_neon/vaddl_u16
- arm_neon/vqaddq_s64
- arm_neon/vmlaq_u16
- arm_neon/vsli_n_s8
- armintr/_arm_sxth
- arm_neon/vorr_s32
- arm_neon/vsra_n_u64
- arm_neon/vst2_f16
- arm_neon/vcombine_u16
- arm_neon/vabs_s16
- arm_neon/vsubhn_s32
- arm_neon/vst1q_lane_u32
- arm_neon/vst3_p8
- arm_neon/vqshrun_n_s32
- arm_neon/vcreate_s64
- arm_neon/vld4q_lane_s16
- arm_neon/vzipq_u16
- arm_neon/vmin_s32
- armintr/_CopyInt32FromFloat
- arm_neon/vcgtq_u32
- arm_neon/vabdl_s32
- arm_neon/vqshlq_n_u16
- arm_neon/int8x16x4_t
- arm_neon/vqrdmulh_n_s32
- arm_neon/vqaddq_u64
- arm_neon/vhaddq_s8
- arm_neon/vshll_n_s16
- arm_neon/vuzp_u8
- arm_neon/vaddl_u32
- arm_neon/vld4q_s16
- arm_neon/vqmovun_s16
- arm_neon/vld1q_lane_s8
- arm_neon/vld2_lane_u32
- arm_neon/vrshr_n_s8
- arm_neon/vmlaq_s16
- armintr/_CopyFloatFromInt32
- arm_neon/vmul_f32
- arm_neon/vmlaq_n_f32
- arm_neon/vst4_s16
- arm_neon/vld1_dup_s32
- arm_neon/vmul_u16
- arm_neon/vhaddq_s16
- arm_neon/vst1q_lane_f32
- arm_neon/vrhaddq_u16
- arm_neon/vbicq_u32
- arm_neon/vrev32_s8
- arm_neon/vmlaq_s8
- arm_neon/vmin_s16
- arm_neon/vst3_lane_p16
- arm_neon/vst2q_lane_f32
- arm_neon/vld4q_lane_f32
- arm_neon/vget_low_u16
- arm_neon/vqsub_s32
- arm_neon/vtbl1_s8
- arm_neon/vmovn_s64
- arm_neon/vpmax_s8
- arm_neon/int8x16_t
- arm_neon/vpmin_u8
- arm_neon/vdup_lane_p8
- arm_neon/vsetq_lane_u64
- arm_neon/vuzpq_u16
- arm_neon/vcgeq_u16
- arm_neon/uint8x16x2_t
- armintr/_arm_rev16
- armintr/_arm_sxtb
- arm_neon/vsliq_n_u64
- arm_neon/vmovq_n_u8
- arm_neon/vshlq_n_u32
- arm_neon/vcombine_s64
- armintr/_arm_qsax
- arm_neon/vmin_f32
- armintr/_arm_sadd16
- arm_neon/vmlsq_n_s16
- arm_neon/vorr_u64
- arm_neon/vqrshrun_n_s64
- arm_neon/vld2q_lane_s32
- arm_neon/vgetq_lane_p16
- arm_neon/vrev32_s16
- arm_neon/vqshl_u16
- arm_neon/vtrn_s8
- arm_neon/vst1q_lane_s64
- arm_neon/vtbl4_p8
- arm_neon/vst1_p16
- arm_neon/vmvn_u8
- arm_neon/vld2_lane_u8
- arm_neon/vld2q_u16
- arm_neon/vmovl_s8
- arm_neon/vbslq_u64
- arm_neon/vmls_s8
- arm_neon/vld3q_p16
- arm_neon/vtbl3_u8
- arm_neon/vabs_f32
- arm_neon/vsraq_n_s8
- arm_neon/vqadd_s32
- arm_neon/vmulq_n_s16
- arm_neon/vst3q_s8
- arm_neon/vaddhn_s64
- arm_neon/vmul_n_s16
- arm_neon/vtbl1_p8
- arm_neon/uint64x2x3_t
- arm_neon/vmlsq_s32
- arm_neon/vld2q_lane_u32
- arm_neon/vaddq_u8
- arm_neon/vcombine_f16
- arm_neon/vandq_s16
- arm_neon/vst4q_lane_p16
- arm_neon/vsri_n_u8
- arm_neon/vst3_lane_p8
- arm_neon/vst3_lane_s16
- arm_neon/vdup_n_s16
- arm_neon/vbicq_s8
- arm_neon/vdup_lane_u8
- arm_neon/vst4q_lane_s32
- arm_neon/vqrshl_u16
- arm_neon/vrsra_n_u32
- arm_neon/vdupq_lane_p8
- arm_neon/vld3_lane_u8
- arm_neon/vqrdmulh_n_s16
- arm_neon/vpmin_s32
- armintr/__cps
- arm_neon/vshl_u32
- armintr/_arm_uadd16
- arm_neon/vld3_s16
- arm_neon/vcvt_f32_s32
- arm_neon/vshlq_n_u64
- arm_neon/vrev64q_u8
- arm_neon/vextq_u16
- arm_neon/vsubl_s16
- arm_neon/vget_lane_p8
- arm_neon/vabal_s16
- arm_neon/vrecpeq_u32
- arm_neon/vminq_u8
- arm_neon/veor_s16
- arm_neon/vmull_n_u16
- arm_neon/vshl_n_u8
- arm_neon/vrev32q_u8
- arm_neon/vandq_s8
- arm_neon/vrshlq_s16
- arm_neon/vst4q_p16
- arm_neon/vandq_s32
- armintr/_MoveToCoprocessor2
- arm_neon/vqdmlsl_lane_s32
- arm_neon/vld1q_s64
- arm_neon/vmull_n_s16
- arm_neon/vneg_s16
- arm_neon/vqshluq_n_s64
- arm_neon/vst2_lane_s32
- arm_neon/vmvnq_u16
- arm_neon/vshll_n_s32
- arm_neon/vld3_dup_s8
- arm_neon/vtstq_s32
- arm_neon/vmlsl_u32
- arm_neon/vqdmulhq_lane_s16
- arm_neon/vaddl_s32
- armintr/_CountLeadingZeros
- arm_neon/vqrshrn_n_s16
- arm_neon/vmla_lane_u32
- arm_neon/vst1_u8
- arm_neon/vshl_u64
- arm_neon/vshr_n_u8
- arm_neon/vmull_lane_s32
- arm_neon/vmlal_lane_u32
- arm_neon/vsubl_s8
- arm_neon/float32x2x2_t
- armintr/_arm_bfc
- arm_neon/vaddq_s16
- arm_neon/vmlal_lane_s32
- arm_neon/vpadd_u16
- arm_neon/vst2q_lane_u16
- arm_neon/vld4_s8
- arm_neon/vst1q_s8
- arm_neon/vshrq_n_u64
- arm_neon/vsli_n_u16
- arm_neon/vqrdmulh_lane_s32
- arm_neon/vst4_lane_u16
- arm_neon/vabdq_f32
- arm_neon/vld2_lane_f16
- arm_neon/vqsub_u64
- arm_neon/vsub_f32
- arm_neon/vld1q_s16
- arm_neon/vmaxq_s16
- arm_neon/vcombine_u32
- arm_neon/vrsraq_n_u32
- armintr/_arm_smusdx
- arm_neon/vrev16_s8
- arm_neon/vqdmulh_n_s32
- arm_neon/vmul_s32
- arm_neon/vabdq_s32
- arm_neon/veor_u64
- arm_neon/vmlsl_n_s32
- arm_neon/vsub_s16
- arm_neon/vadd_u16
- arm_neon/vsriq_n_u16
- arm_neon/vmla_u32
- arm_neon/vuzpq_s32
- arm_neon/vst4q_s8
- arm_neon/vaddhn_u32
- arm_neon/vmlaq_lane_f32
- arm_neon/vld3_lane_s8
- arm_neon/vsliq_n_u32
- arm_neon/vqrshlq_s8
- arm_neon/vqdmlal_n_s32
- arm_neon/uint8x16x4_t
- arm_neon/vcgtq_u16
- arm_neon/vandq_u32
- arm_neon/vld4q_lane_u32
- arm_neon/vzip_p16
- arm_neon/vget_low_p8
- armintr/_arm_shadd8
- arm_neon/vmovn_s16
- arm_neon/vcge_u8
- arm_neon/vld2q_f32
- arm_neon/vaba_u32
- armintr/__iso_volatile_store8
- arm_neon/vst2q_p16
- arm_neon/vmul_s16
- arm_neon/vand_s16
- arm_neon/vtbx4_p8
- arm_neon/vceq_u8
- arm_neon/vrhaddq_s16
- arm_neon/vgetq_lane_f32
- arm_neon/vqshl_s8
- arm_neon/vbslq_f32
- arm_neon/vrsqrts_f32
- arm_neon/vld2q_s8
- arm_neon/vtbl1_u8
- arm_neon/vtst_u8
- arm_neon/vrev64q_f32
- arm_neon/vcle_s8
- arm_neon/vsetq_lane_p16
- arm_neon/vcreate_p16
- arm_neon/vabal_s32
- armintr/_arm_smlald
- arm_neon/vmla_f32
- arm_neon/vtbx2_s8
- arm_neon/int64x1x3_t
- arm_neon/vclz_s8
- arm_neon/vorr_s16
- arm_neon/vornq_s64
- arm_neon/vst1q_u64
- arm_neon/vdupq_n_s8
- armintr/_arm_sadd8
- arm_neon/vextq_s32
- armintr/_arm_smuadx
- armintr/_arm_qsub
- arm_neon/vadd_f32
- arm_neon/vrshrq_n_s16
- arm_neon/vqsub_s8
- arm_neon/vld3_f32
- arm_neon/vhadd_s8
- arm_neon/vmull_n_u32
- arm_neon/vdup_n_u64
- arm_neon/vsubw_s32
- armintr/_arm_sxtab
- armintr/_arm_uxtb16
- arm_neon/vmvn_s16
- arm_neon/vst1_lane_s16
- arm_neon/vqrdmulhq_n_s32
- arm_neon/vsriq_n_s32
- arm_neon/poly8x16x2_t
- arm_neon/vadd_u8
- arm_neon/vuzpq_p8
- arm_neon/vst2q_p8
- armintr/__wfi
- arm_neon/vget_high_u16
- arm_neon/vqrshl_u64
- arm_neon/vld1_dup_s64
- arm_neon/vqrshrn_n_s32
- arm_neon/vrshr_n_s64
- arm_neon/vst3_s8
- arm_neon/poly16x4x3_t
- arm_neon/vqrdmulh_lane_s16
- arm_neon/vmvnq_u32
- arm_neon/vqsubq_u32
- arm_neon/vmovq_n_p8
- arm_neon/vtrn_s16
- arm_neon/vld2q_u32
- arm_neon/vqsubq_u16
- arm_neon/vrsqrteq_u32
- arm_neon/vadd_u64
- armintr/_arm_usat
- arm_neon/vcvtq_n_u32_f32
- arm_neon/vaddq_s8
- arm_neon/vrsraq_n_u16
- arm_neon/vqabs_s16
- arm_neon/vsra_n_s8
- arm_neon/vsra_n_s16
- arm_neon/vqshlq_n_u8
- arm_neon/vpadal_s8
- arm_neon/vmlal_n_u16
- armintr/_CopyDoubleFromInt64
- arm_neon/vaddw_u8
- arm_neon/vmulq_n_s32
- arm_neon/vqaddq_s32
- arm_neon/vmla_lane_f32
- arm_neon/vmlaq_lane_s32
- arm_neon/vld1q_dup_u64
- arm_neon/uint16x8_t
- arm_neon/vld2_s32
- arm_neon/vcltq_f32
- arm_neon/vst4q_f32
- arm_neon/vsri_n_u16
- arm_neon/vshlq_s32
- arm_neon/vgetq_lane_u32
- arm_neon/vld1q_dup_f16
- arm_neon/vrev64q_s16
- arm_neon/vrshrq_n_u32
- arm_neon/vld2q_s32
- arm_neon/vcgtq_s8
- arm_neon/vsubhn_u64
- arm_neon/vmls_n_s32
- armintr/_arm_smmlar
- arm_neon/vld3_dup_u8
- arm_neon/vld3q_lane_p16
- arm_neon/vld2_dup_s64
- arm_neon/vqabs_s32
- arm_neon/vqaddq_u8
- arm_neon/vminq_u32
- arm_neon/vpaddl_u16
- arm_neon/vaba_s16
- arm_neon/vmul_u32
- arm_neon/vst1_lane_u16
- arm_neon/vcreate_f32
- arm_neon/vcvt_f16_f32
- arm_neon/vset_lane_s32
- arm_neon/vshl_s8
- arm_neon/vcgt_s16
- arm_neon/vtrn_f32
- arm_neon/vget_high_s64
- arm_neon/vld3_dup_p8
- arm_neon/vcreate_u64
- arm_neon/vext_u64
- arm_neon/vld1q_dup_s16
- arm_neon/vget_lane_s16
- arm_neon/vqdmlal_s16
- arm_neon/vld2_p16
- arm_neon/vld4_u16
- armintr/_arm_smlalbb
- arm_neon/vrev64_u8
- arm_neon/vbslq_s64
- arm_neon/vsubw_u16
- arm_neon/vrsubhn_u32
- arm_neon/vabdq_u8
- arm_neon/vmls_n_u32
- arm_neon/vshr_n_s32
- arm_neon/vmulq_n_u32
- arm_neon/vst3_p16
- arm_neon/vrev32_u16
- arm_neon/int8x8x3_t
- arm_neon/vst2q_lane_u32
- arm_neon/vextq_p16
- arm_neon/vtrnq_f32
- armintr/_arm_smultt
- arm_neon/vqneg_s8
- arm_neon/vmlsq_lane_s32
- arm_neon/vmov_n_p16
- arm_neon/vraddhn_u64
- arm_neon/vrhadd_u32
- arm_neon/vrev64_u32
- arm_neon/vrshrn_n_s32
- arm_neon/vld4q_f32
- arm_neon/vst2_s8
- arm_neon/vrsqrteq_f32
- arm_neon/uint16x4_t
- arm_neon/vget_low_s8
- arm_neon/vst2_lane_u32
- arm_neon/vhsub_s32
- arm_neon/vqdmull_lane_s32
- armintr/_arm_smulwb
- arm_neon/vmlsl_u8
- arm_neon/vdup_lane_s16
- arm_neon/vtbx4_s8
- arm_neon/vld4q_lane_u16
- arm_neon/vget_high_u8
- arm_neon/vclzq_s32
- arm_neon/vld1q_dup_f32
- arm_neon/vtrn_u8
- arm_neon/vqabsq_s8
- arm_neon/vdup_lane_f32
- arm_neon/vqrdmulh_s16
- arm_neon/vst4_u32
- arm_neon/vdup_lane_u32
- arm_neon/vst4_u8
- arm_neon/vmovq_n_s32
- arm_neon/vld2_lane_s8
- arm_neon/vld3_u32
- arm_neon/vsubl_u16
- arm_neon/vqshlu_n_s8
- arm_neon/float32x4_t
- arm_neon/vqshl_n_s32
- arm_neon/float32x2x3_t
- armintr/__hvc
- arm_neon/vst1q_lane_f16
- arm_neon/vmvnq_s16
- arm_neon/vst3q_lane_f32
- arm_neon/vld1q_dup_u8
- arm_neon/vmlsq_s16
- arm_neon/vget_lane_u8
- arm_neon/vld1_lane_s32
- arm_neon/vst4q_s16
- armintr/_arm_qsub8
- arm_neon/vorrq_s32
- arm_neon/vsriq_n_s8
- arm_neon/vqshrn_n_u64
- arm_neon/vdup_n_s32
- armintr/_arm_uhsub8
- arm_neon/vld3_lane_s32
- arm_neon/vbsl_s64
- arm_neon/vld1_dup_f16
- arm_neon/vsli_n_u64
- arm_neon/vraddhn_u32
- arm_neon/vsub_u16
- arm_neon/vcltq_u32
- arm_neon/vminq_f32
- arm_neon/vshl_n_s64
- arm_neon/vld4_u32
- arm_neon/vld1_u32
- arm_neon/vaddhn_u16
- arm_neon/vcvtq_n_f32_s32
- arm_neon/vorn_u64
- arm_neon/vsubhn_u16
- arm_neon/int64x1_t
- arm_neon/vst1q_lane_s8
- arm_neon/vld1q_dup_s32
- arm_neon/vrev32_p8
- arm_neon/vst3q_lane_p16
- arm_neon/vrecpeq_f32
- arm_neon/int8x8x4_t
- arm_neon/vshr_n_u32
- arm_neon/vdupq_lane_s64
- arm_neon/vpaddlq_s8
- arm_neon/vqshl_n_u32
- arm_neon/vmul_u8
- arm_neon/vtbx2_u8
- arm_neon/vshr_n_u64
- arm_neon/vqrshlq_s16
- arm_neon/vst3_lane_u16
- arm_neon/vqsub_u8
- arm_neon/vrsra_n_s16
- arm_neon/vaba_s32
- arm_neon/vsri_n_u64
- arm_neon/vst3q_lane_u32
- arm_neon/vmlsq_n_u32
- arm_neon/poly8x16_t
- arm_neon/vld2_u8
- armintr/_arm_smmulr
- arm_neon/vtst_s16
- armintr/_arm_smmls
- arm_neon/vqdmulh_s16
- arm_neon/vtrnq_u8
- arm_neon/vset_lane_p8
- arm_neon/vmlsl_u16
- arm_neon/vshrn_n_u16
- arm_neon/vld1_dup_p8
- arm_neon/vrev16q_s8
- arm_neon/vmov_n_s8
- arm_neon/vld1_u64
- arm_neon/vpmin_f32
- arm_neon/vmla_n_u16
- arm_neon/vst1_f16
- arm_neon/vqdmlsl_s16
- arm_neon/vmin_u32
- armintr/_arm_qsub16
- arm_neon/vcage_f32
- arm_neon/vornq_u32
- arm_neon/vpadd_s16
- arm_neon/vld1_u8
- arm_neon/vhsubq_s16
- arm_neon/vld1_dup_u32
- arm_neon/vld4_u64
- armintr/_MulHigh
- arm_neon/vmaxq_u8
- arm_neon/vget_lane_u16
- arm_neon/vld2q_u8
- arm_neon/vld1q_dup_p16
- arm_neon/vsraq_n_u8
- arm_neon/vqdmlsl_n_s32
- arm_neon/vst1_s16
- arm_neon/vst1q_s32
- arm_neon/vmaxq_f32
- arm_neon/vqdmulh_lane_s16
- armintr/__isb
- arm_neon/vuzpq_p16
- arm_neon/vmls_lane_s16
- arm_neon/vtbl4_s8
- arm_neon/vst1_lane_p8
- arm_neon/vsubw_s8
- arm_neon/vmin_u8
- arm_neon/vzip_u16
- arm_neon/vld4q_u16
- arm_neon/vshrn_n_s32
- arm_neon/vpadal_u16
- arm_neon/vorrq_s8
- arm_neon/vrshlq_u64
- arm_neon/vst3_lane_s32
- arm_neon/vqshluq_n_s32
- armintr/_arm_shsub16
- arm_neon/vst1_u32
- arm_neon/vrhadd_s16
- arm_neon/vzipq_s32
- arm_neon/vshrq_n_u16
- arm_neon/vcls_s32
- arm_neon/vceq_s8
- arm_neon/vld2q_lane_f16
- arm_neon/vst4q_u8
- arm_neon/vraddhn_u16
- arm_neon/vget_lane_u64
- armintr/_arm_smlsld
- arm_neon/vld3_u64
- arm_neon/vld1_lane_s16
- arm_neon/vabd_f32
- arm_neon/vdupq_n_u16
- armintr/__iso_volatile_store64
- arm_neon/vqsubq_u8
- arm_neon/poly16x8x3_t
- arm_neon/vcltq_s32
- arm_neon/vqnegq_s16
- arm_neon/vqsub_u16
- arm_neon/vaddq_s32
- arm_neon/vqshl_n_s64
- arm_neon/vabdl_s8
- arm_neon/vclsq_s16
- arm_neon/vpaddl_u8
- arm_neon/vmlsq_n_u16
- armintr/_arm_uqadd8
- arm_neon/vhsub_u32
- arm_neon/vset_lane_s16
- arm_neon/vsubl_u32
- arm_neon/vld3_lane_f32
- arm_neon/vcle_s16
- arm_neon/vmovl_u32
- arm_neon/vst3_lane_f16
- arm_neon/vcaltq_f32
- arm_neon/vsubq_s32
- arm_neon/vand_s64
- arm_neon/vst2_u8
- arm_neon/vcombine_p8
- arm_neon/vqdmlal_s32
- arm_neon/vsub_s32
- armintr/_arm_uxtab16
- arm_neon/vmlsq_n_f32
- armintr/_arm_qdsub
- arm_neon/vhaddq_u32
- arm_neon/vhsubq_u16
- arm_neon/vmlsq_lane_u16
- arm_neon/vst4_s64
- armintr/_CountLeadingOnes
- armintr/_arm_smlabt
- arm_neon/vcombine_s32
- arm_neon/vld4_lane_f16
- arm_neon/vadd_s64
- arm_neon/vorrq_u32
- armintr/__sev
- arm_neon/vdupq_lane_s32
- arm_neon/vrecpsq_f32
- arm_neon/vbicq_u16
- arm_neon/vld1_lane_p16
- arm_neon/vrshr_n_u32
- arm_neon/vcgeq_s32
- arm_neon/vld4_dup_s16
- arm_neon/vld1q_p8
- arm_neon/vrshlq_u16
- arm_neon/vmlaq_lane_u32
- arm_neon/vsub_s64
- arm_neon/vcreate_u16
- arm_neon/vget_lane_s32
- arm_neon/vuzp_f32
- arm_neon/vld2_lane_p8
- arm_neon/vuzp_u16
- arm_neon/vorrq_s16
- armintr/_arm_smlaltb
- arm_neon/vrshrn_n_s16
- arm_neon/vabd_s8
- arm_neon/vnegq_s8
- arm_neon/vst4q_u16
- arm_neon/vst1q_lane_s32
- arm_neon/vst1_lane_s32
- arm_neon/vmla_u16
- arm_neon/vmls_lane_s32
- arm_neon/vtst_s8
- arm_neon/vcgeq_s8
- arm_neon/poly8x8x4_t
- arm_neon/vqsub_s64
- armintr/_arm_uqasx
- arm_neon/vld1_lane_u64
- arm_neon/vminq_s16
- arm_neon/vmulq_u32
- arm_neon/vqrshlq_u8
- arm_neon/vdupq_n_p16
- arm_neon/vld4_dup_f16
- arm_neon/vcls_s16
- arm_neon/vmov_n_u64
- arm_neon/vmla_s32
- arm_neon/vrshl_s16
- arm_neon/vcalt_f32
- arm_neon/int64x2x3_t
- arm_neon/vsub_u8
- arm_neon/vzipq_u8
- arm_neon/vrshrn_n_u64
- arm_neon/vrshlq_s32
- arm_neon/vorr_s64
- arm_neon/vqrshl_s16
- arm_neon/vceqq_u16
- arm_neon/vmulq_n_u16
- arm_neon/vmlaq_u8
- arm_neon/vsri_n_s64
- arm_neon/vld3q_u8
- arm_neon/vld1_dup_s16
- arm_neon/vld1q_s32
- arm_neon/vsri_n_s16
- arm_neon/vshlq_u8
- arm_neon/vsli_n_s64
- arm_neon/vmull_lane_u32
- arm_neon/vshl_s64
- arm_neon/vcreate_s16
- arm_neon/uint8x8x4_t
- arm_neon/vqshrn_n_s32
- arm_neon/vqshlq_u32
- arm_neon/vmlal_n_u32
- arm_neon/vtrnq_s16
- arm_neon/vshr_n_s64
- arm_neon/vst2_u16
- arm_neon/vtrn_s32
- arm_neon/vsubhn_u32
- arm_neon/vbicq_s16
- arm_neon/vsetq_lane_s8
- arm_neon/vrsubhn_s16
- arm_neon/vhsub_u8
- arm_neon/vcleq_s32
- arm_neon/vld4_dup_s8
- arm_neon/vmull_u32
- arm_neon/vrshr_n_s16
- arm_neon/vst1q_lane_s16
- arm_neon/vmlsq_lane_u32
- arm_neon/vnegq_f32
- arm_neon/vmin_s8
- arm_neon/vrev16_p8
- arm_neon/vbic_u8
- arm_neon/vclzq_u16
- arm_neon/vcge_u32
- arm_neon/vget_high_u64
- arm_neon/vabsq_s8
- arm_neon/vhaddq_u16
- arm_neon/vsraq_n_s64
- arm_neon/vld2_u32
- arm_neon/vld2_lane_f32
- arm_neon/vqrshrn_n_u32
- arm_neon/vbslq_s8
- armintr/_CountLeadingZeros64
- arm_neon/vbicq_u8
- arm_neon/vdup_lane_s8
- arm_neon/vpadd_s32
- arm_neon/vld3q_lane_f16
- arm_neon/vaba_u8
- arm_neon/vqshlq_u16
- arm_neon/vst1q_u8
- arm_neon/vst4q_lane_f16
- arm_neon/vshl_n_u16
- armintr/_arm_smladx
- arm_neon/vmla_lane_s16
- arm_neon/vornq_u8
- arm_neon/vqneg_s32
- arm_neon/vadd_s8
- arm_neon/vcle_u32
- arm_neon/vclzq_u8
- arm_neon/vtbx1_u8
- armintr/_CountLeadingOnes64
- armintr/__dsb
- arm_neon/vaddq_u32
- arm_neon/vclsq_s8
- arm_neon/vdup_n_s64
- arm_neon/vmax_s16
- arm_neon/vst2q_u32
- arm_neon/vsetq_lane_s64
- arm_neon/vtst_p8
- arm_neon/vabs_s8
- arm_neon/vqshl_n_s16
- arm_neon/vqrshrn_n_u64
- arm_neon/vaddw_s8
- armintr/_arm_uhadd16
- arm_neon/vsriq_n_p16
- arm_neon/vld4_lane_u32
- arm_neon/vneg_f32
- armintr/_MoveToCoprocessor
- arm_neon/vmvnq_s8
- arm_neon/vld1q_lane_p8
- arm_neon/uint32x2x3_t
- arm_neon/vrshrn_n_u16
- arm_neon/vld3_f16
- arm_neon/vsriq_n_s16
- arm_neon/vshlq_n_s16
- arm_neon/vabal_u8
- arm_neon/vqshluq_n_s16
- arm_neon/vst2_lane_u16
- arm_neon/vbic_s16
- arm_neon/vqshl_n_u64
- arm_neon/vcagt_f32
- arm_neon/vpadalq_s8
- arm_neon/vclz_s32
- arm_neon/vld1_lane_s64
- arm_neon/vget_high_p8
- arm_neon/uint64x1_t
- arm_neon/vextq_s16
- arm_neon/vpadd_s8
- arm_neon/vrsubhn_u64
- arm_neon/vst3q_f16
- arm_neon/vdupq_lane_u16
- arm_neon/vrshrq_n_u64
- arm_neon/vmovq_n_f32
- arm_neon/vld1q_dup_u16
- arm_neon/vshr_n_u16
- arm_neon/uint32x2_t
- armintr/_arm_umull
- arm_neon/vtrnq_u16
- arm_neon/vsetq_lane_u32
- arm_neon/vneg_s8
- arm_neon/vsetq_lane_u8
- arm_neon/vst2q_lane_s16
- arm_neon/vqmovun_s32
- armintr/_arm_usad8
- armintr/_arm_pkhbt
- arm_neon/uint16x4x3_t
- arm_neon/vsra_n_s32
- arm_neon/vqmovun_s64
- arm_neon/vld1q_dup_s8
- arm_neon/vaddhn_s32
- arm_neon/vpmax_f32
- arm_neon/vpadd_u32
- arm_neon/vhsubq_u32
- arm_neon/vqrshrun_n_s32
- arm_neon/vadd_s32
- arm_neon/vclt_s8
- arm_neon/vorrq_s64
- arm_neon/vst4q_f16
- arm_neon/vst1_s32
- arm_neon/vceq_p8
- arm_neon/vsubw_s16
- arm_neon/vgetq_lane_u64
- arm_neon/vmla_n_u32
- arm_neon/vcvtq_f32_s32
- arm_neon/vld1q_u32
- arm_neon/vmax_f32
- armintr/_isunorderedf
- arm_neon/vrshl_u8
- arm_neon/vld4_dup_s64
- arm_neon/vqaddq_u16
- arm_neon/vld4q_lane_f16
- arm_neon/vceqq_p8
- arm_neon/vsubw_u8
- arm_neon/vqmovn_u16
- armintr/_arm_smlsldx
- arm_neon/vcreate_p8
- arm_neon/vqdmull_n_s32
- arm_neon/uint64x2_t
- arm_neon/vmls_s32
- arm_neon/vst3q_f32
- armintr/_arm_bfi
- armintr/_arm_qadd16
- arm_neon/vrshlq_s8
- arm_neon/vget_lane_p16
- arm_neon/vld2_p8
- arm_neon/vld3_lane_u32
- armintr/_MoveFromCoprocessor2
- arm_neon/vqshl_u8
- arm_neon/poly8_t
- arm_neon/vhadd_u16
- arm_neon/vmla_lane_u16
- arm_neon/vshrq_n_u8
- arm_neon/vuzpq_f32
- arm_neon/vmls_lane_f32
- arm_neon/vqneg_s16
- arm_neon/vtrn_p16
- arm_neon/vshrn_n_u32
- arm_neon/vaddhn_u64
- arm_neon/vabal_u32
- arm_neon/vld1q_lane_u32
- arm_neon/vrsraq_n_s32
- arm_neon/vandq_u64
- arm_neon/vqdmull_s32
- arm_neon/vext_s16
- arm_neon/vaddw_s16
- arm_neon/vrev64q_p8
- arm_neon/uint8x8x3_t
- arm_neon/vzip_f32
- armintr/_arm_ssub8
- arm_neon/uint16x4x4_t
- armintr/__swi
- armintr/_arm_smlatb
- arm_neon/vrhaddq_s8
- arm_neon/vpmax_s32
- arm_neon/vqshl_s64
- arm_neon/vrev16q_p8
- arm_neon/vqmovn_u32
- arm_neon/vld1q_f16
- arm_neon/vornq_u64
- arm_neon/vqshlq_n_s16
- arm_neon/vld1_f16
- armintr/_arm_smmlsr
- arm_neon/vshlq_s16
- arm_neon/vsubhn_s16
- arm_neon/vmulq_p8
- arm_neon/vdupq_lane_f32
- armintr/_arm_shadd16
- arm_neon/vornq_s16
- arm_neon/vst1q_lane_u8
- arm_neon/vcaleq_f32
- arm_neon/vst3q_lane_f16
- armintr/_arm_sdiv
- arm_neon/vld2_u16
- arm_neon/vdup_lane_u16
- arm_neon/vst4q_lane_f32
- arm_neon/vdup_n_f32
- arm_neon/vsubq_u8
- arm_neon/vset_lane_p16
- arm_neon/vrsqrte_f32
- arm_neon/vsubl_u8
- arm_neon/vld3q_lane_f32
- arm_neon/vqnegq_s8
- arm_neon/vqmovn_s16
- arm_neon/int16x8x3_t
- arm_neon/veorq_u16
- arm_neon/vqdmulh_n_s16
- arm_neon/vhaddq_u8
- arm_neon/vpadal_u8
- arm_neon/vst2q_s16
- arm_neon/poly16x8x4_t
- arm_neon/int64x2_t
- arm_neon/vmull_s32
- arm_neon/vld4_lane_s32
- arm_neon/vst4q_p8
- arm_neon/vmlal_lane_u16
- arm_neon/vclz_u32
- arm_neon/vsliq_n_s8
- arm_neon/vmls_n_f32
- arm_neon/vmlsl_lane_s16
- arm_neon/vst4q_u32
- arm_neon/vld1q_lane_s16
- arm_neon/vst1q_f32
- arm_neon/vrshr_n_u8
- arm_neon/vst1q_s64
- arm_neon/vbslq_u32
- arm_neon/vset_lane_s8
- arm_neon/vdupq_lane_p16
- arm_neon/vtstq_s16
- arm_neon/vshl_n_s8
- arm_neon/vqrdmulhq_n_s16
- arm_neon/vget_high_f16
- arm_neon/vst4_lane_u32
- arm_neon/vraddhn_s16
- arm_neon/vmlsl_lane_s32
- arm_neon/vld3q_s32
- arm_neon/vsriq_n_u64
- arm_neon/vld4_dup_u8
- arm_neon/vld4q_s8
- arm_neon/vqmovn_s64
- arm_neon/vrev32q_p8
- arm_neon/vsliq_n_p8
- arm_neon/vzipq_s16
- arm_neon/vgetq_lane_s64
- arm_neon/vst4_p16
- arm_neon/vsubq_u16
- arm_neon/vrev64_s32
- armintr/_arm_uhadd8
- arm_neon/vornq_u16
- arm_neon/vst4_lane_s8
- arm_neon/vabd_s32
- arm_neon/vqrdmulhq_s16
- arm_neon/vqshlq_s32
- arm_neon/int64x2x4_t
- arm_neon/vset_lane_u16
- arm_neon/vrsra_n_s32
- arm_neon/vabdl_u16
- arm_neon/vsliq_n_s32
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, intrinsics
- intrinsics, ARM
ms.assetid: d3d7dadd-7bd5-4508-8bff-371a66913e20
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 030ac6bb2e6fb7acd9745d4fa818e89d29ee1832
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39208975"
---
# <a name="arm-intrinsics"></a>Oggetti intrinseci ARM
Il compilatore Visual C++ rende disponibili le seguenti funzioni intrinseche per l'architettura ARM. Per altre informazioni su ARM, vedere la [manuali di riferimento di architettura ARM](http://go.microsoft.com/fwlink/p/?LinkId=522049) e [Guida degli strumenti dell'Assembler ARM](http://go.microsoft.com/fwlink/p/?LinkId=246102) nel sito Web del centro informazioni ARM.  
  
##  <a name="top"></a> NEON  
 Le estensioni dei set di istruzioni vettoriali NEON per ARM forniscono funzionalità SIMD (Single Instruction Multiple Data) simili a quelle dei set di istruzioni vettoriali MMX e SSE comuni ai processori delle architetture x86 e x64.  
  
 Le funzioni intrinseche NEON sono supportate, come previsto nel file di intestazione `arm_neon.h`. Il supporto del compilatore Visual C++ per le funzioni intrinseche NEON è simile a quello del compilatore ARM, documentato nell'appendice G del [riferimenti al compilatore di versione 4.1, toolchain del compilatore di ARM](http://go.microsoft.com/fwlink/p/?LinkId=251083) nel sito Web del centro informazioni ARM.  
  
 La differenza principale tra il compilatore Visual C++ e il compilatore ARM consiste nel fatto che il compilatore Visual C++ aggiunge le varianti `_ex` delle istruzioni vettoriali di caricamento e archiviazione `vldX` e `vstX`. Le varianti `_ex` accettano un parametro aggiuntivo che specifica l'allineamento dell'argomento del puntatore ma a parte ciò sono identiche alle relative controparti non `_ex`.  
  
##  <a name="A"></a> Elenco delle funzioni intrinseche specifiche di ARM  
  
|Nome funzione|Istruzione|Prototipo di funzione|  
|-------------------|-----------------|------------------------|  
|_arm_smlal|SMLAL|__int64 _arm_smlal (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_umlal|UMLAL|Unsigned __int64 _arm_umlal (unsigned \__int64 _RdHiLo, _Rn unsigned int, unsigned int _Rm)|  
|_arm_clz|CLZ|unsigned int _arm_clz(unsigned int _Rm)|  
|_arm_qadd|QADD|int _arm_qadd(int _Rm, int _Rn)|  
|_arm_qdadd|QDADD|int _arm_qdadd(int _Rm, int _Rn)|  
|_arm_qdsub|QDSUB|int _arm_qdsub(int _Rm, int _Rn)|  
|_arm_qsub|QSUB|int _arm_qsub(int _Rm, int _Rn)|  
|_arm_smlabb|SMLABB|int _arm_smlabb(int _Rn, int _Rm, int _Ra)|  
|_arm_smlabt|SMLABT|int _arm_smlabt(int _Rn, int _Rm, int _Ra)|  
|_arm_smlatb|SMLATB|int _arm_smlatb(int _Rn, int _Rm, int _Ra)|  
|_arm_smlatt|SMLATT|int _arm_smlatt(int _Rn, int _Rm, int _Ra)|  
|_arm_smlalbb|SMLALBB|__int64 _arm_smlalbb (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlalbt|SMLALBT|__int64 _arm_smlalbt (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlaltb|SMLALTB|__int64 _arm_smlaltb (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlaltt|SMLALTT|__int64 _arm_smlaltt (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlawb|SMLAWB|int _arm_smlawb(int _Rn, int _Rm, int _Ra)|  
|_arm_smlawt|SMLAWT|int _arm_smlawt(int _Rn, int _Rm, int _Ra)|  
|_arm_smulbb|SMULBB|int _arm_smulbb(int _Rn, int _Rm)|  
|_arm_smulbt|SMULBT|int _arm_smulbt(int _Rn, int _Rm)|  
|_arm_smultb|SMULTB|int _arm_smultb(int _Rn, int _Rm)|  
|_arm_smultt|SMULTT|int _arm_smultt(int _Rn, int _Rm)|  
|_arm_smulwb|SMULWB|int _arm_smulwb(int _Rn, int _Rm)|  
|_arm_smulwt|SMULWT|int _arm_smulwt(int _Rn, int _Rm)|  
|_arm_sadd16|SADD16|int _arm_sadd16(int _Rn, int _Rm)|  
|_arm_sadd8|SADD8|int _arm_sadd8(int _Rn, int _Rm)|  
|_arm_sasx|SASX|int _arm_sasx(int _Rn, int _Rm)|  
|_arm_ssax|SSAX|int _arm_ssax(int _Rn, int _Rm)|  
|_arm_ssub16|SSUB16|int _arm_ssub16(int _Rn, int _Rm)|  
|_arm_ssub8|SSUB8|int _arm_ssub8(int _Rn, int _Rm)|  
|_arm_shadd16|SHADD16|int _arm_shadd16(int _Rn, int _Rm)|  
|_arm_shadd8|SHADD8|int _arm_shadd8(int _Rn, int _Rm)|  
|_arm_shasx|SHASX|int _arm_shasx(int _Rn, int _Rm)|  
|_arm_shsax|SHSAX|int _arm_shsax(int _Rn, int _Rm)|  
|_arm_shsub16|SHSUB16|int _arm_shsub16(int _Rn, int _Rm)|  
|_arm_shsub8|SHSUB8|int _arm_shsub8(int _Rn, int _Rm)|  
|_arm_qadd16|QADD16|int _arm_qadd16(int _Rn, int _Rm)|  
|_arm_qadd8|QADD8|int _arm_qadd8(int _Rn, int _Rm)|  
|_arm_qasx|QASX|int _arm_qasx(int _Rn, int _Rm)|  
|_arm_qsax|QSAX|int _arm_qsax(int _Rn, int _Rm)|  
|_arm_qsub16|QSUB16|int _arm_qsub16(int _Rn, int _Rm)|  
|_arm_qsub8|QSUB8|int _arm_qsub8(int _Rn, int _Rm)|  
|_arm_uadd16|UADD16|unsigned int _arm_uadd16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uadd8|UADD8|unsigned int _arm_uadd8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uasx|UASX|unsigned int _arm_uasx(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usax|USAX|unsigned int _arm_usax(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usub16|USUB16|unsigned int _arm_usub16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usub8|USUB8|unsigned int _arm_usub8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhadd16|UHADD16|unsigned int _arm_uhadd16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhadd8|UHADD8|unsigned int _arm_uhadd8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhasx|UHASX|unsigned int _arm_uhasx(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhsax|UHSAX|unsigned int _arm_uhsax(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhsub16|UHSUB16|unsigned int _arm_uhsub16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uhsub8|UHSUB8|unsigned int _arm_uhsub8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqadd16|UQADD16|unsigned int _arm_uqadd16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqadd8|UQADD8|unsigned int _arm_uqadd8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqasx|UQASX|unsigned int _arm_uqasx(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqsax|UQSAX|unsigned int _arm_uqsax(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqsub16|UQSUB16|unsigned int _arm_uqsub16(unsigned int _Rn, unsigned int _Rm)|  
|_arm_uqsub8|UQSUB8|unsigned int _arm_uqsub8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_sxtab|SXTAB|int _arm_sxtab(int _Rn, int _Rm, unsigned int _Rotation)|  
|_arm_sxtab16|SXTAB16|int _arm_sxtab16(int _Rn, int _Rm, unsigned int _Rotation)|  
|_arm_sxtah|SXTAH|int _arm_sxtah(int _Rn, int _Rm, unsigned int _Rotation)|  
|_arm_uxtab|UXTAB|unsigned int _arm_uxtab(unsigned int _Rn, unsigned int _Rm, unsigned int _Rotation)|  
|_arm_uxtab16|UXTAB16|unsigned int _arm_uxta16b(unsigned int _Rn, unsigned int _Rm, unsigned int _Rotation)|  
|_arm_uxtah|UXTAH|unsigned int _arm_uxtah(unsigned int _Rn, unsigned int _Rm, unsigned int _Rotation)|  
|_arm_sxtb|SXTB|int _arm_sxtb(int _Rn, unsigned int _Rotation)|  
|_arm_sxtb16|SXTB16|int _arm_sxtb16(int _Rn, unsigned int _Rotation)|  
|_arm_sxth|SXTH|int _arm_sxth(int _Rn, unsigned int _Rotation)|  
|_arm_uxtb|UXTB|unsigned int _arm_uxtb(unsigned int _Rn, unsigned int _Rotation)|  
|_arm_uxtb16|UXTB16|unsigned int _arm_uxtb16(unsigned int _Rn, unsigned int _Rotation)|  
|_arm_uxth|UXTH|unsigned int _arm_uxth(unsigned int _Rn, unsigned int _Rotation)|  
|_arm_pkhbt|PKHBT|int _arm_pkhbt(int _Rn, int _Rm, unsigned int _Lsl_imm)|  
|_arm_pkhtb|PKHTB|int _arm_pkhtb(int _Rn, int _Rm, unsigned int _Asr_imm)|  
|_arm_usad8|USAD8|unsigned int _arm_usad8(unsigned int _Rn, unsigned int _Rm)|  
|_arm_usada8|USADA8|unsigned int _arm_usada8(unsigned int _Rn, unsigned int _Rm, unsigned int _Ra)|  
|_arm_ssat|SSAT|int _arm_ssat(unsigned int _Sat_imm, _int _Rn, _ARMINTR_SHIFT_T _Shift_type, unsigned int _Shift_imm)|  
|_arm_usat|USAT|int _arm_usat(unsigned int _Sat_imm, _int _Rn, _ARMINTR_SHIFT_T _Shift_type, unsigned int _Shift_imm)|  
|_arm_ssat16|SSAT16|int _arm_ssat16(unsigned int _Sat_imm, _int _Rn)|  
|_arm_usat16|USAT16|int _arm_usat16(unsigned int _Sat_imm, _int _Rn)|  
|_arm_rev|REV|unsigned int _arm_rev(unsigned int _Rm)|  
|_arm_rev16|REV16|unsigned int _arm_rev16(unsigned int _Rm)|  
|_arm_revsh|REVSH|unsigned int _arm_revsh(unsigned int _Rm)|  
|_arm_smlad|SMLAD|int _arm_smlad(int _Rn, int _Rm, int _Ra)|  
|_arm_smladx|SMLADX|int _arm_smladx(int _Rn, int _Rm, int _Ra)|  
|_arm_smlsd|SMLSD|int _arm_smlsd(int _Rn, int _Rm, int _Ra)|  
|_arm_smlsdx|SMLSDX|int _arm_smlsdx(int _Rn, int _Rm, int _Ra)|  
|_arm_smmla|SMMLA|int _arm_smmla(int _Rn, int _Rm, int _Ra)|  
|_arm_smmlar|SMMLAR|int _arm_smmlar(int _Rn, int _Rm, int _Ra)|  
|_arm_smmls|SMMLS|int _arm_smmls(int _Rn, int _Rm, int _Ra)|  
|_arm_smmlsr|SMMLSR|int _arm_smmlsr(int _Rn, int _Rm, int _Ra)|  
|_arm_smmul|SMMUL|int _arm_smmul(int _Rn, int _Rm)|  
|_arm_smmulr|SMMULR|int _arm_smmulr(int _Rn, int _Rm)|  
|_arm_smlald|SMLALD|__int64 _arm_smlald (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlaldx|SMLALDX|__int64 _arm_smlaldx (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlsld|SMLSLD|__int64 _arm_smlsld (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smlsldx|SMLSLDX|__int64 _arm_smlsldx (\__int64 _RdHiLo, _Rn int, int _Rm)|  
|_arm_smuad|SMUAD|int _arm_smuad(int _Rn, int _Rm)|  
|_arm_smuadx|SMUADX|int _arm_muadxs(int _Rn, int _Rm)|  
|_arm_smusd|SMUSD|int _arm_smusd(int _Rn, int _Rm)|  
|_arm_smusdx|SMUSDX|int _arm_smusdx(int _Rn, int _Rm)|  
|_arm_smull|SMULL|__int64 _arm_smull(int _Rn, int _Rm)|  
|_arm_umull|UMULL|unsigned __int64 _arm_umull(unsigned int _Rn, unsigned int _Rm)|  
|_arm_umaal|UMAAL|unsigned __int64 _arm_umaal(unsigned int _RdLo, unsigned int _RdHi, unsigned int _Rn, unsigned int _Rm)|  
|_arm_bfc|BFC|unsigned int _arm_bfc(unsigned int _Rd, unsigned int _Lsb, unsigned int _Width)|  
|_arm_bfi|BFI|unsigned int _arm_bfi(unsigned int _Rd, unsigned int _Rn, unsigned int _Lsb, unsigned int _Width)|  
|_arm_rbit|RBIT|unsigned int _arm_rbit(unsigned int _Rm)|  
|_arm_sbfx|SBFX|int _arm_sbfx(int _Rn, unsigned int _Lsb, unsigned int _Width)|  
|_arm_ubfx|UBFX|unsigned int _arm_ubfx(unsigned int _Rn, unsigned int _Lsb, unsigned int _Width)|  
|_arm_sdiv|SDIV|int _arm_sdiv(int _Rn, int _Rm)|  
|_arm_udiv|UDIV|unsigned int _arm_udiv(unsigned int _Rn, unsigned int _Rm)|  
|__cps|CPS|void __cps(unsigned int _Ops, unsigned int _Flags, unsigned int _Mode)|  
|__dmb|DMB|void __dmb(unsigned int `_Type`)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [restrizioni della barriera di memoria](#BarrierRestrictions).|  
|__dsb|DSB|void __dsb(unsigned int _Type)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [restrizioni della barriera di memoria](#BarrierRestrictions).|  
|__isb|ISB|void __isb(unsigned int _Type)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [restrizioni della barriera di memoria](#BarrierRestrictions).|  
|__emit||__emit void (unsigned \__int32 opcode)<br /><br /> Inserisce un'istruzione specificata nel flusso di istruzioni restituito dal compilatore.<br /><br /> Il valore di `opcode` deve essere un'espressione costante nota al momento della compilazione. La dimensione di una parola dell'istruzione è 16 bit e i 16 bit più significativi di `opcode` vengono ignorati.<br /><br /> Il compilatore non esegue alcun tentativo di interpretare il contenuto di `opcode` e non garantisce uno stato della CPU o della memoria prima dell'esecuzione dell'istruzione inserita.<br /><br /> Il compilatore presuppone che gli stati della CPU e della memoria rimangano invariati dopo l'esecuzione dell'istruzione inserita. Pertanto, le istruzioni che modificano lo stato possono avere un impatto negativo sul codice normale generato dal compilatore.<br /><br /> Per questo motivo, usare `emit` solo per inserire le istruzioni che influiscono su uno stato della CPU generalmente non elaborato dal compilatore, ad esempio lo stato del coprocessore, o per implementare le funzioni dichiarate con `declspec(naked)`.|  
|__hvc|HVC|unsigned int __hvc(unsigned int, ...)|  
|__iso_volatile_load16||__int16 \__iso_volatile_load16 (const volatile \__int16 \*)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_load32||__int32 \__iso_volatile_load32 (const volatile \__int32 \*)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_load64||__int64 \__iso_volatile_load64 (const volatile \__int64 \*)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_load8||__int8 \__iso_volatile_load8 (const volatile \__int8 \*)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_store16||__iso_volatile_store16 void (volatile \__int16 \*, \__int16)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_store32||__iso_volatile_store32 void (volatile \__int32 \*, \__int32)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_store64||__iso_volatile_store64 void (volatile \__int64 \*, \__int64)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__iso_volatile_store8||__iso_volatile_store8 void (volatile \__int8 \*, \__int8)<br /><br /> Per altre informazioni, vedere [funzioni intrinseche _ iso_volatile_load/store](#IsoVolatileLoadStore) .|  
|__ldrexd|LDREXD|__int64 \__ldrexd (const volatile \__int64 \*)|  
|__prefetch|PLD|cdecl void \__prefetch (const void \*)<br /><br /> Fornisce un hint di memoria `PLD` al sistema per l'accesso alla memoria in corrispondenza o in prossimità dell'indirizzo specificato. Alcuni sistemi possono scegliere di ottimizzare tale criterio di accesso alla memoria per migliorare le prestazioni di runtime. Tuttavia, dal punto di vista del linguaggio C++, la funzione non ha alcun effetto osservabile e potrebbe non eseguire alcuna operazione.|  
|__rdpmccntr64||Unsigned __int64 \__rdpmccntr64(void)|  
|__sev|SEV|void __sev(void)|  
|__static_assert||__static_assert void (int, char const \*)|  
|__swi|SVC|unsigned int __swi(unsigned int, ...)|  
|__trap|BKPT|int __trap(int, ...)|  
|__wfe|WFE|void __wfe(void)|  
|__wfi|WFI|void __wfi(void)|  
|_AddSatInt|QADD|int _AddSatInt(int, int)|  
|_CopyDoubleFromInt64||double _CopyDoubleFromInt64(\__int64)|  
|_CopyFloatFromInt32||float _CopyFloatFromInt32(\__int32)|  
|_CopyInt32FromFloat||__int32 _CopyInt32FromFloat(float)|  
|_CopyInt64FromDouble||__int64 _CopyInt64FromDouble(double)|  
|_CountLeadingOnes||unsigned int _CountLeadingOnes(unsigned long)|  
|_CountLeadingOnes64||unsigned int _CountLeadingOnes64 (unsigned \__int64)|  
|_CountLeadingSigns||unsigned int _CountLeadingSigns(long)|  
|_CountLeadingSigns64||_CountLeadingSigns64 int senza segno (\__int64)|  
|_CountLeadingZeros||unsigned int _CountLeadingZeros(unsigned long)|  
|_CountLeadingZeros64||unsigned int _CountLeadingZeros64 (unsigned \__int64)|  
|_CountOneBits||unsigned int _CountOneBits(unsigned long)|  
|_CountOneBits64||unsigned int _CountOneBits64 (unsigned \__int64)|  
|_DAddSatInt|QDADD|int _DAddSatInt(int, int)|  
|_DSubSatInt|QDSUB|int _DSubSatInt(int, int)|  
|_isunordered||int _isunordered(double, double)|  
|_isunorderedf||int _isunorderedf(float, float)|  
|_MoveFromCoprocessor|MRC|unsigned int _MoveFromCoprocessor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore. Per altre informazioni, vedere [movefromcoprocessor, _MoveFromCoprocessor2](#MoveFromCo).|  
|_MoveFromCoprocessor2|MRC2|unsigned int _MoveFromCoprocessor2(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore. Per altre informazioni, vedere [movefromcoprocessor, _MoveFromCoprocessor2](#MoveFromCo).|  
|_MoveFromCoprocessor64|MRRC|unsigned __int64 _MoveFromCoprocessor64(unsigned int, unsigned int, unsigned int)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore. Per altre informazioni, vedere [_MoveFromCoprocessor64](#MoveFromCo64).|  
|_MoveToCoprocessor|MCR|void _MoveToCoprocessor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore. Per altre informazioni, vedere [movetocoprocessor, _MoveToCoprocessor2](#MoveToCo).|  
|_MoveToCoprocessor2|MCR2|void _MoveToCoprocessor2(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore. Per altre informazioni, vedere [movetocoprocessor, _MoveToCoprocessor2](#MoveToCo).|  
|_MoveToCoprocessor64|MCRR|_MoveToCoprocessor64 void (unsigned \__int64, unsigned int e unsigned int e unsigned int)<br /><br /> Legge i dati da un coprocessore ARM tramite le istruzioni di trasferimento dei dati del coprocessore. Per altre informazioni, vedere [_MoveToCoprocessor64](#MoveToCo64).|  
|_MulHigh||long _MulHigh(long, long)|  
|_MulUnsignedHigh||unsigned long _MulUnsignedHigh(unsigned long, unsigned long)|  
|_ReadBankedReg|MRS|int _ReadBankedReg(int _Reg)|  
|_ReadStatusReg|MRS|int _ReadStatusReg(int)|  
|_SubSatInt|QSUB|int _SubSatInt(int, int)|  
|_WriteBankedReg|MSR|void _WriteBankedReg(int _Value, int _Reg)|  
|_WriteStatusReg|MSR|void _WriteStatusReg(int, int, int)|  
  
 [[NEON](#top)]  
  
###  <a name="BarrierRestrictions"></a> Restrizioni della barriera di memoria  
 Le funzioni intrinseche `__dmb` (barriera di memoria dati), `__dsb` (barriera di sincronizzazione dei dati) e `__isb` (barriera di sincronizzazione istruzioni) usano i seguenti valori predefiniti per specificare la restrizione di barriera di memoria in termini di condivisione del dominio e tipo di accesso interessati dall'operazione.  
  
|Valore di restrizione|Descrizione|  
|-----------------------|-----------------|  
|_ARM_BARRIER_SY|Sistema completo, operazioni di lettura e scrittura.|  
|_ARM_BARRIER_ST|Sistema completo, solo operazioni di scrittura.|  
|_ARM_BARRIER_ISH|Condivisibile all'interno, operazioni di lettura e scrittura.|  
|_ARM_BARRIER_ISHST|Condivisibile all'interno, solo operazioni di scrittura.|  
|_ARM_BARRIER_NSH|Non condivisibile, operazioni di lettura e scrittura.|  
|_ARM_BARRIER_NSHST|Non condivisibile, solo operazioni di scrittura.|  
|_ARM_BARRIER_OSH|Condivisibile all'esterno, operazioni di lettura e scrittura.|  
|_ARM_BARRIER_OSHST|Condivisibile all'esterno, solo operazioni di scrittura.|  
  
 Per la funzione intrinseca `__isb`, l'unica restrizione attualmente valida è _ARM_BARRIER_SY. Tutti gli altri valori sono riservati dall'architettura.  
  
###  <a name="IsoVolatileLoadStore"></a> funzioni intrinseche _ iso_volatile_load/store  
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
  
 `Value` (solo funzioni intrinseche di archiviazione)  
 Valore da scrivere nella posizione di memoria specificata.  
  
 **Valore restituito (solo funzioni intrinseche di caricamento)**  
  
 Valore della posizione di memoria specificata da `Location`.  
  
 **Note**  
  
 È possibile usare le funzioni intrinseche `__iso_volatile_load8/16/32/64` e `__iso_volatile_store8/16/32/64` per eseguire in modo esplicito gli accessi alla memoria non soggetti alle ottimizzazioni del compilatore. Il compilatore non può rimuovere, sintetizzare o modificare l'ordine relativo di queste operazioni, ma non genera barriere di memoria hardware implicite. Di conseguenza, l'hardware potrebbe comunque riordinare gli accessi alla memoria osservabili tra più thread. Più precisamente, queste funzioni intrinseche equivalgono alle seguenti espressioni compilate in **/volatile:iso**.  
  
```  
  
      int a = __iso_volatile_load32(p);    // equivalent to: int a = *(const volatile __int32*)p;   
__iso_volatile_store32(p, a);        // equivalent to: *(volatile __int32*)p = a;  
```  
  
 Si noti che le funzioni intrinseche accettano puntatori volatili per poter usare variabili volatili. Tuttavia, non esistono requisiti o raccomandazioni per usare i puntatori volatili come argomenti. La semantica di queste operazioni è esattamente uguale a quella usata per i tipi non volatili.  
  
 Per altre informazioni sul **/volatile:iso** argomento della riga di comando, vedere [/volatile (interpretazione della parole chiave volatile)](../build/reference/volatile-volatile-keyword-interpretation.md).  
  
###  <a name="MoveFromCo"></a> _MoveFromCoprocessor, _MoveFromCoprocessor2  
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
 Codice operativo aggiuntivo specifico del coprocessore compreso tra 0 e 7.  
  
 **Valore restituito**  
  
 Valore letto dal coprocessore.  
  
 **Note**  
  
 I valori di tutti e cinque i parametri di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveFromCoprocessor` usa l'istruzione MRC; `_MoveFromCoprocessor2` usa MRC2. I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione. L'interpretazione dei parametri è dipendente dal coprocessore. Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
###  <a name="MoveFromCo64"></a> _MoveFromCoprocessor64  
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
  
 **Restituisce il valore**  
  
 Valore letto dal coprocessore.  
  
 **Note**  
  
 I valori di tutti e tre i parametri di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveFromCoprocessor64` usa l'istruzione MRRC. I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione. L'interpretazione dei parametri è dipendente dal coprocessore. Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
###  <a name="MoveToCo"></a> _MoveToCoprocessor, _MoveToCoprocessor2  
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
 Codice operativo aggiuntivo specifico del coprocessore compreso tra 0 e 7.  
  
 **Valore restituito**  
  
 Nessuno.  
  
 **Note**  
  
 I valori dei parametri `coproc`, `opcode1`, `crn`, `crm` e `opcode2` di questa funzione intrinseca devono essere espressioni costanti note al momento della compilazione.  
  
 `_MoveToCoprocessor` usa l'istruzione MCR; `_MoveToCoprocessor2` usa MCR2. I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione. L'interpretazione dei parametri è dipendente dal coprocessore. Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
###  <a name="MoveToCo64"></a> _MoveToCoprocessor64  
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
  
 `_MoveFromCoprocessor64` usa l'istruzione MCRR. I parametri corrispondono ai campi di bit che sono codificati direttamente nella parola dell'istruzione. L'interpretazione dei parametri è dipendente dal coprocessore. Per altre informazioni, vedere il manuale del coprocessore in questione.  
  
##  <a name="I"></a> Supporto ARM per le funzioni intrinseche di altre architetture  
 La tabella seguente elenca le funzioni intrinseche di altre architetture supportate sulle piattaforme ARM. Dove il comportamento di una funzione intrinseca in ARM differisce dal comportamento in altre architetture hardware, vengono indicati dettagli aggiuntivi.  
  
|Nome funzione|Prototipo di funzione|  
|-------------------|------------------------|  
|__assume|void __assume(int)|  
|__code_seg|code_seg void (char const \*)|  
|__debugbreak|cdecl void \__debugbreak(void)|  
|__fastfail|void __declspec(noreturn) \__fastfail (unsigned int)|  
|__nop|void __nop(void) **Nota:** piattaforme su ARM, questa funzione genera un'istruzione NOP se implementata nell'architettura di destinazione; in caso contrario, è un'istruzione alternativa che non modifica lo stato del programma o della CPU generato, ad esempio, `MOV r8, r8`. Questa funzionalità equivale al \__nop intrinseco per le altre architetture hardware. Poiché un'istruzione che non ha alcun effetto sullo stato del programma o della CPU potrebbe essere ignorata dall'architettura di destinazione come ottimizzazione, l'istruzione non usa necessariamente i cicli della CPU. Pertanto, non usare il \__nop intrinseco per modificare il tempo di esecuzione di una sequenza di codice a meno che non si è certi del comportamento della CPU. In alternativa, è possibile usare il \__nop intrinseco per allineare l'istruzione successiva a un indirizzo specifico limite di 32 bit.|  
|__yield|void __yield(void) **Nota:** piattaforme su ARM, questa funzione genera l'istruzione YIELD, che indica che il thread sta eseguendo un'attività che può essere temporaneamente sospesi in seguito all'esecuzione, ad esempio, uno spinlock, senza influire negativamente sul programma. In questo modo la CPU può eseguire altre attività durante i cicli di esecuzione che altrimenti sarebbero sprecati.|  
|_AddressOfReturnAddress|void \* _AddressOfReturnAddress(void)|  
|_BitScanForward|unsigned char _BitScanForward (long senza segno \* index, mask long senza segno)|  
|_BitScanReverse|unsigned char _BitScanReverse (long senza segno \* index, mask long senza segno)|  
|_bittest|unsigned char _bittest (long const \*, long)|  
|_bittestandcomplement|unsigned char _bittestandcomplement (prolungata \*, long)|  
|_bittestandreset|unsigned char _bittestandreset (prolungata \*, long)|  
|_bittestandset|unsigned char _bittestandset (prolungata \*, long)|  
|_byteswap_uint64|Unsigned __int64 \_cdecl _byteswap_uint64 (unsigned \__int64)|  
|_byteswap_ulong|unsigned long __cdecl _byteswap_ulong(unsigned long)|  
|_byteswap_ushort|unsigned short __cdecl _byteswap_ushort(unsigned short)|  
|_disable|void _disable(void) cdecl **Nota:** sulle piattaforme ARM, questa funzione genera l'istruzione CPSID; è disponibile solo come funzione intrinseca.|  
|_enable|void _enable(void) cdecl **Nota:** sulle piattaforme ARM, questa funzione genera l'istruzione CPSIE; è disponibile solo come funzione intrinseca.|  
|_lrotl|unsigned long __cdecl _lrotl(unsigned long, int)|  
|_lrotr|unsigned long __cdecl _lrotr(unsigned long, int)|  
|_ReadBarrier|void _ReadBarrier(void)|  
|_ReadWriteBarrier|void _ReadWriteBarrier(void)|  
|_ReturnAddress|void \* _ReturnAddress(void)|  
|_rotl|unsigned int __cdecl _rotl(unsigned int _Value, int _Shift)|  
|_rotl16|unsigned short _rotl16(unsigned short _Value, unsigned char _Shift)|  
|_rotl64|Unsigned __int64 \_cdecl _rotl64 (unsigned \__int64 Value, _Shift int)|  
|_rotl8|unsigned char _rotl8(unsigned char _Value, unsigned char _Shift)|  
|_rotr|unsigned int __cdecl _rotr(unsigned int _Value, int _Shift)|  
|_rotr16|unsigned short _rotr16(unsigned short _Value, unsigned char _Shift)|  
|_rotr64|Unsigned __int64 \_cdecl _rotr64 (unsigned \__int64 Value, _Shift int)|  
|_rotr8|unsigned char _rotr8(unsigned char _Value, unsigned char _Shift)|  
|_setjmpex|int __cdecl _setjmpex(jmp_buf)|  
|_WriteBarrier|void _WriteBarrier(void)|  
  
 [[NEON](#top)]  
  
## <a name="interlocked-intrinsics"></a>Funzioni intrinseche interlocked  
 Le funzioni intrinseche interlocked sono un set di funzioni intrinseche che consentono di eseguire operazioni atomiche di lettura, modifica e scrittura. Alcune di esse sono comuni a tutte le piattaforme. Vengono elencate separatamente in questa sezione non perché ne siano tante ma perché le relative definizioni sono per lo più ridondanti, ed è più semplice considerale in termini generali. Dai nomi se ne evince l'esatto comportamento.  
  
 La tabella seguente elenca il supporto ARM delle funzioni intrinseche interlocked non-bittest. Ogni cella della tabella corrisponde a un nome derivato aggiungendo il nome dell'operazione nella cella più a sinistra della riga e il nome del tipo nella cella più in alto della colonna in `_Interlocked`. Ad esempio, la cella all'intersezione tra il `Xor` riga e il **8** colonna corrisponde a `_InterlockedXor8` ed è pienamente supportato. La maggior parte delle funzioni supportate fornisce i seguenti suffissi facoltativi: `_acq`, `_rel` e `_nf`. Il suffisso `_acq` indica una semantica di acquisizione e il suffisso `_rel` indica una semantica di rilascio. Il suffisso `_nf` o "nessun limite" è univoco in ARM e viene illustrato nella sezione successiva.  
  
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
  
-   **Completa**: supporta formati comuni, `_acq`, `_rel`, e `_nf` form.  
  
-   **Parziale**: supporta formati comuni, `_acq`, e `_nf` form.  
  
-   **Nessuno**: non supportato  
  
###  <a name="nf_suffix"></a> Suffisso NF (nessun limite)  
 Il suffisso `_nf` o "nessun limite" indica che l'operazione non si comporta come qualsiasi tipo di barriera di memoria. Si differenzia dagli altri tre formati (normale, `_acq` e `_rel`), che si comportano tutti come un tipo di barriera. Un possibile uso dei formati `_nf` è quello di gestire un contatore di statistiche aggiornato da più thread contemporaneamente ma il cui valore non viene però usato durante l'esecuzione di più thread.  
  
### <a name="list-of-interlocked-intrinsics"></a>Elenco delle funzioni intrinseche interlocked  
  
|Nome funzione|Prototipo di funzione|  
|-------------------|------------------------|  
|_InterlockedAdd|Long interlockedadd (long _volatile \*, long)|  
|_InterlockedAdd64|_InterlockedAdd64 __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedAdd64_acq|_InterlockedAdd64_acq __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedAdd64_nf|_InterlockedAdd64_nf __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedAdd64_rel|_InterlockedAdd64_rel __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedAdd_acq|Long interlockedadd_acq (long volatile \*, long)|  
|_InterlockedAdd_nf|Long interlockedadd_nf (long volatile \*, long)|  
|_InterlockedAdd_rel|Long interlockedadd_rel (long volatile \*, long)|  
|_InterlockedAnd|Long interlockedand (long volatile \*, long)|  
|_InterlockedAnd16|_InterlockedAnd16 short (brevi volatile \*, short)|  
|_InterlockedAnd16_acq|_InterlockedAnd16_acq short (brevi volatile \*, short)|  
|_InterlockedAnd16_nf|_InterlockedAnd16_nf short (brevi volatile \*, short)|  
|_InterlockedAnd16_rel|_InterlockedAnd16_rel short (brevi volatile \*, short)|  
|_InterlockedAnd64|__int64 _InterlockedAnd64 (\__int64 volatili \*, \__int64)|  
|_InterlockedAnd64_acq|__int64 _InterlockedAnd64_acq (\__int64 volatili \*, \__int64)|  
|_InterlockedAnd64_nf|__int64 _InterlockedAnd64_nf (\__int64 volatili \*, \__int64)|  
|_InterlockedAnd64_rel|__int64 _InterlockedAnd64_rel (\__int64 volatili \*, \__int64)|  
|_InterlockedAnd8|Char _InterlockedAnd8 (volatile char \*, char)|  
|_InterlockedAnd8_acq|Char _InterlockedAnd8_acq (volatile char \*, char)|  
|_InterlockedAnd8_nf|Char _InterlockedAnd8_nf (volatile char \*, char)|  
|_InterlockedAnd8_rel|Char _InterlockedAnd8_rel (volatile char \*, char)|  
|_InterlockedAnd_acq|_InterlockedAnd_acq Long (long volatile \*, long)|  
|_InterlockedAnd_nf|_InterlockedAnd_nf Long (long volatile \*, long)|  
|_InterlockedAnd_rel|_InterlockedAnd_rel Long (long volatile \*, long)|  
|_InterlockedCompareExchange|InterlockedCompareExchange lunga cdecl (long volatile \*, long, long)|  
|_InterlockedCompareExchange16|_InterlockedCompareExchange16 short (brevi volatile \*, short, short)|  
|_InterlockedCompareExchange16_acq|_InterlockedCompareExchange16_acq short (brevi volatile \*, short, short)|  
|_InterlockedCompareExchange16_nf|_InterlockedCompareExchange16_nf short (brevi volatile \*, short, short)|  
|_InterlockedCompareExchange16_rel|_InterlockedCompareExchange16_rel short (brevi volatile \*, short, short)|  
|_InterlockedCompareExchange64|__int64 _InterlockedCompareExchange64 (\__int64 volatili \*, \__int64, \__int64)|  
|_InterlockedCompareExchange64_acq|__int64 _InterlockedCompareExchange64_acq (\__int64 volatili \*, \__int64, \__int64)|  
|_InterlockedCompareExchange64_nf|__int64 _InterlockedCompareExchange64_nf (\__int64 volatili \*, \__int64, \__int64)|  
|_InterlockedCompareExchange64_rel|__int64 _InterlockedCompareExchange64_rel (\__int64 volatili \*, \__int64, \__int64)|  
|_InterlockedCompareExchange8|Char _InterlockedCompareExchange8 (volatile char \*, char, char)|  
|_InterlockedCompareExchange8_acq|Char _InterlockedCompareExchange8_acq (volatile char \*, char, char)|  
|_InterlockedCompareExchange8_nf|Char _InterlockedCompareExchange8_nf (volatile char \*, char, char)|  
|_InterlockedCompareExchange8_rel|Char _InterlockedCompareExchange8_rel (volatile char \*, char, char)|  
|_InterlockedCompareExchangePointer|void \* interlockedcompareexchangepointer (void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchangePointer_acq|void \* _InterlockedCompareExchangePointer_acq (void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchangePointer_nf|void \* _InterlockedCompareExchangePointer_nf (void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchangePointer_rel|void \* _InterlockedCompareExchangePointer_rel (void \* volatile \*, void \*, void \*)|  
|_InterlockedCompareExchange_acq|_InterlockedCompareExchange_acq Long (long volatile \*, long, long)|  
|_InterlockedCompareExchange_nf|_InterlockedCompareExchange_nf Long (long volatile \*, long, long)|  
|_InterlockedCompareExchange_rel|_InterlockedCompareExchange_rel Long (long volatile \*, long, long)|  
|_InterlockedDecrement|InterlockedDecrement lunga cdecl (long volatile \*)|  
|_InterlockedDecrement16|_InterlockedDecrement16 short (breve volatile \*)|  
|_InterlockedDecrement16_acq|_InterlockedDecrement16_acq short (breve volatile \*)|  
|_InterlockedDecrement16_nf|_InterlockedDecrement16_nf short (breve volatile \*)|  
|_InterlockedDecrement16_rel|_InterlockedDecrement16_rel short (breve volatile \*)|  
|_InterlockedDecrement64|_InterlockedDecrement64 __int64 (\__int64 volatile \*)|  
|_InterlockedDecrement64_acq|_InterlockedDecrement64_acq __int64 (\__int64 volatile \*)|  
|_InterlockedDecrement64_nf|_InterlockedDecrement64_nf __int64 (\__int64 volatile \*)|  
|_InterlockedDecrement64_rel|_InterlockedDecrement64_rel __int64 (\__int64 volatile \*)|  
|_InterlockedDecrement_acq|Long interlockeddecrement_acq (long volatile \*)|  
|_InterlockedDecrement_nf|Long interlockeddecrement_nf (long volatile \*)|  
|_InterlockedDecrement_rel|Long interlockeddecrement_rel (long volatile \*)|  
|_InterlockedExchange|Long cdecl InterlockedExchange (long volatile \* des_tinazione, long)|  
|_InterlockedExchange16|_InterlockedExchange16 short (brevi volatile \* des_tinazione, short)|  
|_InterlockedExchange16_acq|_InterlockedExchange16_acq short (brevi volatile \* des_tinazione, short)|  
|_InterlockedExchange16_nf|_InterlockedExchange16_nf short (brevi volatile \* des_tinazione, short)|  
|_InterlockedExchange64|__int64 _InterlockedExchange64 (\__int64 volatili \* des_tinazione, \__int64)|  
|_InterlockedExchange64_acq|__int64 _InterlockedExchange64_acq (\__int64 volatili \* des_tinazione, \__int64)|  
|_InterlockedExchange64_nf|__int64 _InterlockedExchange64_nf (\__int64 volatili \* des_tinazione, \__int64)|  
|_InterlockedExchange8|Char _InterlockedExchange8 (volatile char \* des_tinazione, char)|  
|_InterlockedExchange8_acq|Char _InterlockedExchange8_acq (volatile char \* des_tinazione, char)|  
|_InterlockedExchange8_nf|Char _InterlockedExchange8_nf (volatile char \* des_tinazione, char)|  
|_InterlockedExchangeAdd|InterlockedExchangeAdd lunga cdecl (long volatile \*, long)|  
|_InterlockedExchangeAdd16|_InterlockedExchangeAdd16 short (brevi volatile \*, short)|  
|_InterlockedExchangeAdd16_acq|_InterlockedExchangeAdd16_acq short (brevi volatile \*, short)|  
|_InterlockedExchangeAdd16_nf|_InterlockedExchangeAdd16_nf short (brevi volatile \*, short)|  
|_InterlockedExchangeAdd16_rel|_InterlockedExchangeAdd16_rel short (brevi volatile \*, short)|  
|_InterlockedExchangeAdd64|_InterlockedExchangeAdd64 __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedExchangeAdd64_acq|_InterlockedExchangeAdd64_acq __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedExchangeAdd64_nf|_InterlockedExchangeAdd64_nf __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedExchangeAdd64_rel|_InterlockedExchangeAdd64_rel __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedExchangeAdd8|Char _InterlockedExchangeAdd8 (volatile char \*, char)|  
|_InterlockedExchangeAdd8_acq|Char _InterlockedExchangeAdd8_acq (volatile char \*, char)|  
|_InterlockedExchangeAdd8_nf|Char _InterlockedExchangeAdd8_nf (volatile char \*, char)|  
|_InterlockedExchangeAdd8_rel|Char _InterlockedExchangeAdd8_rel (volatile char \*, char)|  
|_InterlockedExchangeAdd_acq|Long interlockedexchangeadd_acq (long volatile \*, long)|  
|_InterlockedExchangeAdd_nf|Long interlockedexchangeadd_nf (long volatile \*, long)|  
|_InterlockedExchangeAdd_rel|Long interlockedexchangeadd_rel (long volatile \*, long)|  
|_InterlockedExchangePointer|void \* interlockedexchangepointer (void \* volatile \* des_tinazione, void \*)|  
|_InterlockedExchangePointer_acq|void \* interlockedexchangepointer_acq (void \* volatile \* des_tinazione, void \*)|  
|_InterlockedExchangePointer_nf|void \* interlockedexchangepointer_nf (void \* volatile \* des_tinazione, void \*)|  
|_InterlockedExchange_acq|_InterlockedExchange_acq Long (long volatile \* des_tinazione, long)|  
|_InterlockedExchange_nf|_InterlockedExchange_nf Long (long volatile \* des_tinazione, long)|  
|_InterlockedIncrement|InterlockedIncrement lunga cdecl (long volatile \*)|  
|_InterlockedIncrement16|_InterlockedIncrement16 short (breve volatile \*)|  
|_InterlockedIncrement16_acq|_InterlockedIncrement16_acq short (breve volatile \*)|  
|_InterlockedIncrement16_nf|_InterlockedIncrement16_nf short (breve volatile \*)|  
|_InterlockedIncrement16_rel|_InterlockedIncrement16_rel short (breve volatile \*)|  
|_InterlockedIncrement64|_InterlockedIncrement64 __int64 (\__int64 volatile \*)|  
|_InterlockedIncrement64_acq|_InterlockedIncrement64_acq __int64 (\__int64 volatile \*)|  
|_InterlockedIncrement64_nf|_InterlockedIncrement64_nf __int64 (\__int64 volatile \*)|  
|_InterlockedIncrement64_rel|_InterlockedIncrement64_rel __int64 (\__int64 volatile \*)|  
|_InterlockedIncrement_acq|Long interlockedincrement_acq (long volatile \*)|  
|_InterlockedIncrement_nf|Long interlockedincrement_nf (long volatile \*)|  
|_InterlockedIncrement_rel|Long interlockedincrement_rel (long volatile \*)|  
|_InterlockedOr|Long interlockedor (long volatile \*, long)|  
|_InterlockedOr16|_InterlockedOr16 short (brevi volatile \*, short)|  
|_InterlockedOr16_acq|_InterlockedOr16_acq short (brevi volatile \*, short)|  
|_InterlockedOr16_nf|_InterlockedOr16_nf short (brevi volatile \*, short)|  
|_InterlockedOr16_rel|_InterlockedOr16_rel short (brevi volatile \*, short)|  
|_InterlockedOr64|_InterlockedOr64 __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedOr64_acq|_InterlockedOr64_acq __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedOr64_nf|_InterlockedOr64_nf __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedOr64_rel|_InterlockedOr64_rel __int64 (\__int64 volatili \*, \__int64)|  
|_InterlockedOr8|Char _InterlockedOr8 (volatile char \*, char)|  
|_InterlockedOr8_acq|Char _InterlockedOr8_acq (volatile char \*, char)|  
|_InterlockedOr8_nf|Char _InterlockedOr8_nf (volatile char \*, char)|  
|_InterlockedOr8_rel|Char _InterlockedOr8_rel (volatile char \*, char)|  
|_InterlockedOr_acq|Long interlockedor_acq (long volatile \*, long)|  
|_InterlockedOr_nf|Long interlockedor_nf (long volatile \*, long)|  
|_InterlockedOr_rel|Long interlockedor_rel (long volatile \*, long)|  
|_InterlockedXor|Long interlockedxor (long volatile \*, long)|  
|_InterlockedXor16|_InterlockedXor16 short (brevi volatile \*, short)|  
|_InterlockedXor16_acq|_InterlockedXor16_acq short (brevi volatile \*, short)|  
|_InterlockedXor16_nf|_InterlockedXor16_nf short (brevi volatile \*, short)|  
|_InterlockedXor16_rel|_InterlockedXor16_rel short (brevi volatile \*, short)|  
|_InterlockedXor64|__int64 _InterlockedXor64 (\__int64 volatili \*, \__int64)|  
|_InterlockedXor64_acq|__int64 _InterlockedXor64_acq (\__int64 volatili \*, \__int64)|  
|_InterlockedXor64_nf|__int64 _InterlockedXor64_nf (\__int64 volatili \*, \__int64)|  
|_InterlockedXor64_rel|__int64 _InterlockedXor64_rel (\__int64 volatili \*, \__int64)|  
|_InterlockedXor8|Char _InterlockedXor8 (volatile char \*, char)|  
|_InterlockedXor8_acq|Char _InterlockedXor8_acq (volatile char \*, char)|  
|_InterlockedXor8_nf|Char _InterlockedXor8_nf (volatile char \*, char)|  
|_InterlockedXor8_rel|Char _InterlockedXor8_rel (volatile char \*, char)|  
|_InterlockedXor_acq|_InterlockedXor_acq Long (long volatile \*, long)|  
|_InterlockedXor_nf|_InterlockedXor_nf Long (long volatile \*, long)|  
|_InterlockedXor_rel|_InterlockedXor_rel Long (long volatile \*, long)|  
  
 [[NEON](#top)]  
  
### <a name="interlockedbittest-intrinsics"></a>Funzioni intrinseche _interlockedbittest  
 Le funzioni intrinseche bittest interlocked normali sono comuni a tutte le piattaforme. ARM aggiunge `_acq`, `_rel`, e `_nf` varianti, che modificano solo la semantica di barriera di un'operazione, come descritto in [suffisso NF (nessun limite)](#nf_suffix) più indietro in questo articolo.  
  
|Nome funzione|Prototipo di funzione|  
|-------------------|------------------------|  
|_interlockedbittestandreset|unsigned char interlockedbittestandreset (long volatile \*, long)|  
|_interlockedbittestandreset_acq|unsigned char _interlockedbittestandreset_acq (long volatile \*, long)|  
|_interlockedbittestandreset_nf|unsigned char _interlockedbittestandreset_nf (long volatile \*, long)|  
|_interlockedbittestandreset_rel|unsigned char _interlockedbittestandreset_rel (long volatile \*, long)|  
|_interlockedbittestandset|unsigned char interlockedbittestandset (long volatile \*, long)|  
|_interlockedbittestandset_acq|unsigned char _interlockedbittestandset_acq (long volatile \*, long)|  
|_interlockedbittestandset_nf|unsigned char _interlockedbittestandset_nf (long volatile \*, long)|  
|_interlockedbittestandset_rel|unsigned char _interlockedbittestandset_rel (long volatile \*, long)|  
  
 [[NEON](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Riferimento all'Assembler ARM](../assembler/arm/arm-assembler-reference.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)