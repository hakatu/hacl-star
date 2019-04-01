/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: /Users/jonathan/Code/kremlin/krml -bundle Hacl.Spec.*,Spec.*[rename=Hacl_Spec] -bundle Hacl.Poly1305.Field32xN.Lemmas[rename=Hacl_Lemmas] -bundle Lib.*[rename=Hacl_Lib] -drop Lib.IntVector.Intrinsics -add-include "libintvector.h" -add-include "evercrypt_targetconfig.h" -drop EverCrypt.TargetConfig -bundle Test,Test.*,Hacl.Test.* -bundle EverCrypt.BCrypt -bundle EverCrypt.OpenSSL -bundle MerkleTree.Spec,MerkleTree.Spec.*,MerkleTree.New.High,MerkleTree.New.High.* -bundle Vale.Stdcalls.*,Interop,Interop.*,Fadd_stdcalls,Cpuid_stdcalls,Fswap_stdcalls,Fmul_stdcalls,Fsqr_stdcalls,Fsub_stdcalls,Poly_stdcalls,Sha_stdcalls,GCMencrypt_stdcalls,GCMencryptOpt_stdcalls,AES_stdcalls[rename=Vale] -bundle Fadd_inline,Fmul_inline,Fsqr_inline,Fswap_inline[rename=Vale_Inline] -bundle FStar.Tactics.CanonCommMonoid,FStar.Tactics.CanonCommSemiring,FStar.Tactics.CanonCommSwaps[rename=Unused] -bundle FastUtil_helpers,FastHybrid_helpers,FastSqr_helpers,FastMul_helpers[rename=Unused2] -bundle Opaque_s,Map16,Test.Vale_memcpy,Fast_defs,Interop_Printer,Memcpy[rename=Unused3] -bundle X64.*,Arch.*,Words.*,Vale.*,Collections.*,Collections,SHA_helpers[rename=Unused4] -bundle Prop_s,Types_s,Words_s,Views,AES_s,Workarounds,Math.*,Interop,TypesNative_s[rename=Unused5] -bundle GF128_s,GF128,Poly1305.*,GCTR,GCTR_s,GHash_s,GCM_helpers,GHash[rename=Unused6] -bundle AES_helpers,AES256_helpers,GCM_s,GCM,Interop_assumptions[rename=Unused7] -library Vale.Stdcalls.* -static-header Vale_Inline -library Fadd_inline -library Fmul_inline -library Fswap_inline -library Fsqr_inline -no-prefix Vale.Stdcalls.* -no-prefix Fadd_inline -no-prefix Fmul_inline -no-prefix Fswap_inline -no-prefix Fsqr_inline -no-prefix EverCrypt.Vale -add-include "curve25519-inline.h" -no-prefix MerkleTree.New.Low -no-prefix MerkleTree.New.Low.Serialization -fparentheses -fno-shadow -fcurly-braces -bundle EverCrypt -tmpdir dist/generic/ -skip-compilation obj/prims.krml obj/FStar_Pervasives_Native.krml obj/FStar_Pervasives.krml obj/Prop_s.krml obj/FStar_Exn.krml obj/FStar_Squash.krml obj/FStar_Classical.krml obj/FStar_FunctionalExtensionality.krml obj/FStar_Set.krml obj/FStar_Preorder.krml obj/FStar_Monotonic_Witnessed.krml obj/FStar_Ghost.krml obj/FStar_ErasedLogic.krml obj/FStar_StrongExcludedMiddle.krml obj/FStar_PropositionalExtensionality.krml obj/FStar_PredicateExtensionality.krml obj/FStar_TSet.krml obj/FStar_Monotonic_Heap.krml obj/FStar_Heap.krml obj/FStar_ST.krml obj/FStar_All.krml obj/FStar_Map.krml obj/FStar_List_Tot_Base.krml obj/FStar_List_Tot_Properties.krml obj/FStar_List_Tot.krml obj/FStar_Seq_Base.krml obj/FStar_Mul.krml obj/FStar_Calc.krml obj/FStar_Seq_Properties.krml obj/FStar_Seq.krml obj/FStar_Math_Lib.krml obj/FStar_Math_Lemmas.krml obj/FStar_BitVector.krml obj/FStar_UInt.krml obj/FStar_UInt32.krml obj/FStar_UInt8.krml obj/FStar_Monotonic_HyperHeap.krml obj/FStar_Monotonic_HyperStack.krml obj/FStar_HyperStack.krml obj/FStar_HyperStack_ST.krml obj/FStar_Universe.krml obj/FStar_GSet.krml obj/FStar_ModifiesGen.krml obj/FStar_Range.krml obj/FStar_Reflection_Types.krml obj/FStar_Tactics_Types.krml obj/FStar_Tactics_Result.krml obj/FStar_Tactics_Effect.krml obj/FStar_Tactics_Util.krml obj/FStar_Reflection_Data.krml obj/FStar_Reflection_Const.krml obj/FStar_Char.krml obj/FStar_List.krml obj/FStar_String.krml obj/FStar_Order.krml obj/FStar_Reflection_Basic.krml obj/FStar_Reflection_Derived.krml obj/FStar_Tactics_Builtins.krml obj/FStar_Reflection_Formula.krml obj/FStar_Reflection_Derived_Lemmas.krml obj/FStar_Reflection.krml obj/FStar_Tactics_Derived.krml obj/FStar_Tactics_Logic.krml obj/FStar_Tactics.krml obj/FStar_BigOps.krml obj/LowStar_Monotonic_Buffer.krml obj/LowStar_Buffer.krml obj/LowStar_Modifies.krml obj/LowStar_ModifiesPat.krml obj/LowStar_BufferView_Down.krml obj/LowStar_BufferView_Up.krml obj/LowStar_BufferView.krml obj/BufferViewHelpers.krml obj/FStar_UInt64.krml obj/FStar_UInt16.krml obj/Words_s.krml obj/Collections_Seqs_s.krml obj/Words_Four_s.krml obj/Words_Two_s.krml obj/Words_Seq_s.krml obj/Opaque_s.krml obj/Types_s.krml obj/X64_Machine_s.krml obj/AES_s.krml obj/Math_Poly2_Defs_s.krml obj/Math_Poly2_s.krml obj/Math_Poly2_Bits_s.krml obj/Vale_Set.krml obj/FStar_HyperStack_All.krml obj/FStar_Kremlin_Endianness.krml obj/FStar_Int.krml obj/FStar_Int64.krml obj/FStar_Int63.krml obj/FStar_Int32.krml obj/FStar_Int16.krml obj/FStar_Int8.krml obj/FStar_UInt63.krml obj/FStar_Int_Cast.krml obj/FStar_UInt128.krml obj/Spec_Hash_Definitions.krml obj/Spec_Hash_Lemmas0.krml obj/Spec_Hash_PadFinish.krml obj/Spec_Loops.krml obj/Spec_SHA2_Constants.krml obj/Spec_SHA2.krml obj/X64_CryptoInstructions_s.krml obj/X64_CPU_Features_s.krml obj/X64_Bytes_Semantics_s.krml obj/FStar_Float.krml obj/FStar_BaseTypes.krml obj/X64_Taint_Semantics_s.krml obj/LowStar_ImmutableBuffer.krml obj/Util_Meta.krml obj/Words_Two.krml obj/Collections_Seqs.krml obj/TypesNative_s.krml obj/Arch_TypesNative.krml obj/Words_Seq.krml obj/Arch_Types.krml obj/Views.krml obj/Interop_Types.krml obj/Interop_Base.krml obj/X64_Bytes_Semantics.krml obj/Interop.krml obj/Fast_lemmas_internal.krml obj/Fast_defs.krml obj/FStar_Tactics_CanonCommSwaps.krml obj/FStar_Algebra_CommMonoid.krml obj/FStar_Tactics_CanonCommMonoid.krml obj/FStar_Tactics_CanonCommSemiring.krml obj/FastUtil_helpers.krml obj/FastHybrid_helpers.krml obj/Fast_lemmas_external.krml obj/Map16.krml obj/X64_Vale_Xmms.krml obj/X64_Vale_Regs.krml obj/FStar_IO.krml obj/X64_Stack_i.krml obj/X64_Stack_Sems.krml obj/X64_Memory.krml obj/X64_BufferViewStore.krml obj/X64_Memory_Sems.krml obj/X64_Vale_State.krml obj/X64_Vale_StateLemmas.krml obj/X64_Vale_Lemmas.krml obj/X64_Print_s.krml obj/X64_Vale_Decls.krml obj/X64_Vale_QuickCode.krml obj/X64_Vale_QuickCodes.krml obj/X64_Taint_Semantics.krml obj/X64_Vale_InsLemmas.krml obj/X64_Vale_InsBasic.krml obj/X64_Vale_InsMem.krml obj/X64_Vale_InsVector.krml obj/X64_Vale_InsStack.krml obj/X64_FastHybrid.krml obj/FastSqr_helpers.krml obj/X64_FastSqr.krml obj/FastMul_helpers.krml obj/X64_FastMul.krml obj/X64_FastWide.krml obj/X64_FastUtil.krml obj/Interop_Assumptions.krml obj/Interop_X64.krml obj/X64_Print_Inline_s.krml obj/X64_MemoryAdapters.krml obj/Vale_AsLowStar_ValeSig.krml obj/Vale_AsLowStar_LowStarSig.krml obj/Vale_AsLowStar_MemoryHelpers.krml obj/Vale_AsLowStar_Wrapper.krml obj/Vale_Stdcalls_Fadd.krml obj/Fadd_stdcalls.krml obj/Fsqr_inline.krml obj/X64_Vale_InsAes.krml obj/Test_Vale_memcpy.krml obj/X64_Stack.krml obj/Math_Poly2_Defs.krml obj/Math_Poly2.krml obj/Math_Poly2_Lemmas.krml obj/Math_Poly2_Bits.krml obj/Math_Poly2_Words.krml obj/GF128_s.krml obj/GF128.krml obj/X64_GF128_Mul.krml obj/FStar_BV.krml obj/FStar_Reflection_Arith.krml obj/FStar_Tactics_BV.krml obj/Vale_Bv_s.krml obj/Math_Bits.krml obj/Vale_Tactics.krml obj/X64_Poly1305_Bitvectors.krml obj/Math_Lemmas_Int.krml obj/FStar_Tactics_Canon.krml obj/Poly1305_Spec_s.krml obj/X64_Poly1305_Math.krml obj/Workarounds.krml obj/GCTR_s.krml obj/GCM_helpers.krml obj/GHash_s.krml obj/GHash.krml obj/X64_GHash.krml obj/GCTR.krml obj/AES_helpers.krml obj/X64_AESCTR.krml obj/X64_AESCTRplain.krml obj/AES256_helpers.krml obj/X64_AES256.krml obj/X64_AES128.krml obj/X64_AES.krml obj/X64_GCTR.krml obj/GCM_s.krml obj/GCM.krml obj/X64_GCMencrypt.krml obj/Lib_LoopCombinators.krml obj/FStar_Int_Cast_Full.krml obj/Lib_IntTypes.krml obj/Lib_Sequence.krml obj/Spec_SHA3_Constants.krml obj/Spec_SHA1.krml obj/Spec_MD5.krml obj/Spec_Hash.krml obj/Spec_Hash_Incremental.krml obj/Spec_Hash_Lemmas.krml obj/LowStar_BufferOps.krml obj/C_Loops.krml obj/C_Endianness.krml obj/Hacl_Hash_Lemmas.krml obj/Hacl_Hash_Definitions.krml obj/Hacl_Hash_PadFinish.krml obj/Hacl_Hash_MD.krml obj/SHA_helpers.krml obj/X64_Vale_InsSha.krml obj/X64_SHA.krml obj/Vale_Stdcalls_Sha.krml obj/Simplify_Sha.krml obj/Sha_stdcalls.krml obj/Hacl_Hash_Core_SHA2_Constants.krml obj/Hacl_Hash_Core_SHA2.krml obj/Hacl_Hash_SHA2.krml obj/Hacl_Hash_Core_SHA1.krml obj/Hacl_Hash_SHA1.krml obj/Hacl_Hash_Core_MD5.krml obj/Hacl_Hash_MD5.krml obj/C.krml obj/C_String.krml obj/C_Failure.krml obj/FStar_Int128.krml obj/FStar_Int31.krml obj/FStar_UInt31.krml obj/FStar_Integers.krml obj/EverCrypt_StaticConfig.krml obj/X64_Cpuid.krml obj/X64_Cpuidstdcall.krml obj/Vale_Stdcalls_Cpuid.krml obj/Cpuid_stdcalls.krml obj/EverCrypt_TargetConfig.krml obj/EverCrypt_AutoConfig2.krml obj/EverCrypt_Helpers.krml obj/EverCrypt_Hash.krml obj/Lib_RawIntTypes.krml obj/Lib_Loops.krml obj/Lib_ByteSequence.krml obj/Hacl_Impl_Curve25519_Lemmas.krml obj/Spec_Curve25519_Lemmas.krml obj/Spec_Curve25519.krml obj/Hacl_Spec_Curve25519_Field51_Definition.krml obj/Hacl_Spec_Curve25519_Field51_Lemmas.krml obj/Hacl_Spec_Curve25519_Field51.krml obj/Lib_Buffer.krml obj/Hacl_Impl_Curve25519_Field51.krml obj/LowStar_Vector.krml obj/LowStar_Regional.krml obj/LowStar_RVector.krml obj/X64_PolyOps.krml obj/Lib_ByteBuffer.krml obj/Lib_IntVector_Intrinsics.krml obj/Lib_IntVector.krml obj/Hacl_Spec_Curve25519_AddAndDouble.krml obj/Hacl_Spec_Curve25519_Field64_Definition.krml obj/Hacl_Spec_Curve25519_Field64_Lemmas.krml obj/Hacl_Spec_Curve25519_Field64_Core.krml obj/Hacl_Spec_Curve25519_Field64.krml obj/Vale_Stdcalls_Fswap.krml obj/Fswap_stdcalls.krml obj/Fswap_inline.krml obj/Vale_Stdcalls_Fsqr.krml obj/Fsqr_stdcalls.krml obj/Vale_Stdcalls_Fmul.krml obj/Fmul_stdcalls.krml obj/Fmul_inline.krml obj/Vale_Stdcalls_Fsub.krml obj/Fsub_stdcalls.krml obj/Fadd_inline.krml obj/Hacl_Impl_Curve25519_Field64_Core.krml obj/Hacl_Impl_Curve25519_Field64.krml obj/Hacl_Impl_Curve25519_Fields.krml obj/Hacl_Impl_Curve25519_AddAndDouble.krml obj/Vale_Stdcalls_Aes.krml obj/Spec_Chacha20.krml obj/Hacl_Impl_Chacha20_Core32.krml obj/Hacl_Impl_Chacha20.krml obj/Spec_Poly1305.krml obj/Hacl_Spec_Poly1305_Vec.krml obj/Hacl_Impl_Poly1305_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN.krml obj/Hacl_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Impl_Poly1305_Field32xN.krml obj/Hacl_Impl_Poly1305_Fields.krml obj/Hacl_Spec_Poly1305_Equiv.krml obj/Hacl_Impl_Poly1305.krml obj/Spec_Chacha20Poly1305.krml obj/Hacl_Impl_Chacha20Poly1305_PolyCore.krml obj/Hacl_Impl_Chacha20Poly1305_Poly.krml obj/Hacl_Impl_Chacha20Poly1305.krml obj/FStar_Dyn.krml obj/EverCrypt_Vale.krml obj/EverCrypt_Specs.krml obj/EverCrypt_OpenSSL.krml obj/EverCrypt_Hacl.krml obj/EverCrypt_BCrypt.krml obj/EverCrypt_Cipher.krml obj/Hacl_Spec_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Generic.krml obj/Hacl_Curve25519_51.krml obj/Hacl_Curve25519_64.krml obj/EverCrypt_Curve25519.krml obj/Hacl_Poly1305_32.krml obj/FStar_Endianness.krml obj/Poly1305_Equiv.krml obj/X64_Poly1305_Util.krml obj/X64_Poly1305.krml obj/Vale_Stdcalls_Poly.krml obj/Poly_stdcalls.krml obj/Arch_BufferFriend.krml obj/X64_Poly1305_CallingFromLowStar.krml obj/Hacl_Poly1305_128.krml obj/Hacl_Poly1305_256.krml obj/Lib_Unlib.krml obj/EverCrypt_Poly1305.krml obj/EverCrypt_HMAC.krml obj/EverCrypt_HKDF.krml obj/EverCrypt.krml obj/MerkleTree_Spec.krml obj/Gcm_simplify.krml obj/Vale_Stdcalls_GCMencrypt.krml obj/GCMencrypt_stdcalls.krml obj/MerkleTree_New_High.krml obj/LowStar_Regional_Instances.krml obj/MerkleTree_New_Low.krml obj/MerkleTree_New_Low_Serialization.krml obj/X64_Leakage_s.krml obj/X64_Leakage_Helpers.krml obj/X64_AESGCM.krml obj/X64_GCMencryptOpt.krml obj/Vale_Stdcalls_GCMencryptOpt.krml obj/GCMencryptOpt256_stdcalls.krml obj/GCMencryptOpt_stdcalls.krml obj/X64_GF128_Init.krml obj/Vale_Stdcalls_AesHash.krml obj/AEShash_stdcalls.krml obj/AES_stdcalls.krml obj/Spec_AEAD.krml obj/EverCrypt_AEAD.krml obj/MerkleTree_New_High_Correct_Base.krml obj/MerkleTree_New_High_Correct_Rhs.krml obj/MerkleTree_New_High_Correct_Path.krml obj/MerkleTree_New_High_Correct_Flushing.krml obj/MerkleTree_New_High_Correct_Insertion.krml obj/MerkleTree_New_High_Correct.krml obj/EverCrypt_Hash_Incremental.krml obj/Test_Hash.krml obj/Operator.krml obj/Spec_SHA3.krml obj/Hacl_Impl_SHA3.krml obj/X64_AESopt2.krml obj/TestLib.krml obj/EverCrypt_Chacha20Poly1305.krml obj/Hacl_SHA3.krml obj/Lib_PrintBuffer.krml obj/Hacl_Test_CSHAKE.krml obj/Spec_Hash_Test.krml obj/X64_Leakage_Ins_Xmm.krml obj/X64_Leakage_Ins.krml obj/X64_Leakage.krml obj/Test_Vectors_Chacha20Poly1305.krml obj/Test_Memcpy.krml obj/Lib_RandomBuffer.krml obj/Test_Vectors_Aes128.krml obj/Collections_Lists.krml obj/Hacl_Hash_Agile.krml obj/Hacl_Test_SHA3.krml obj/Test_Vectors_Curve25519.krml obj/Spec_Chacha20Poly1305_Test.krml obj/X64_GCMdecrypt.krml obj/Test_Vectors_Poly1305.krml obj/Test_Args.krml obj/Vale_AsLowStar_Test.krml obj/Spec_SHA3_Test.krml obj/Test_Lowstarize.krml obj/Test_Vectors.krml obj/Test_Vectors_Aes128Gcm.krml obj/Spec_Curve25519_Test.krml obj/Test.krml obj/Spec_Chacha20_Test.krml obj/X64_AESopt.krml -silent -ccopt -Wno-unused -warn-error @4-6 -fparentheses Hacl_AES.c Hacl_Ed25519.c Lib_PrintBuffer.c Lib_RandomBuffer.c evercrypt_vale_stubs.c -o libevercrypt.a
  F* version: 28a5baa2
  KreMLin version: f534ac02
 */

#include "Hacl_Hash_SHA2.h"

void Hacl_Hash_SHA2_update_multi_224(uint32_t *s, uint8_t *blocks, uint32_t n_blocks)
{
  for (uint32_t i = (uint32_t)0U; i < n_blocks; i = i + (uint32_t)1U)
  {
    uint32_t sz = (uint32_t)64U;
    uint8_t *block = blocks + sz * i;
    Hacl_Hash_Core_SHA2_update_224(s, block);
  }
}

void Hacl_Hash_SHA2_update_multi_256(uint32_t *s, uint8_t *blocks, uint32_t n_blocks)
{
  for (uint32_t i = (uint32_t)0U; i < n_blocks; i = i + (uint32_t)1U)
  {
    uint32_t sz = (uint32_t)64U;
    uint8_t *block = blocks + sz * i;
    Hacl_Hash_Core_SHA2_update_256(s, block);
  }
}

void Hacl_Hash_SHA2_update_multi_384(uint64_t *s, uint8_t *blocks, uint32_t n_blocks)
{
  for (uint32_t i = (uint32_t)0U; i < n_blocks; i = i + (uint32_t)1U)
  {
    uint32_t sz = (uint32_t)128U;
    uint8_t *block = blocks + sz * i;
    Hacl_Hash_Core_SHA2_update_384(s, block);
  }
}

void Hacl_Hash_SHA2_update_multi_512(uint64_t *s, uint8_t *blocks, uint32_t n_blocks)
{
  for (uint32_t i = (uint32_t)0U; i < n_blocks; i = i + (uint32_t)1U)
  {
    uint32_t sz = (uint32_t)128U;
    uint8_t *block = blocks + sz * i;
    Hacl_Hash_Core_SHA2_update_512(s, block);
  }
}

void
Hacl_Hash_SHA2_update_last_224(
  uint32_t *s,
  uint64_t prev_len,
  uint8_t *input,
  uint32_t input_len
)
{
  uint32_t blocks_n = input_len / (uint32_t)64U;
  uint32_t blocks_len = blocks_n * (uint32_t)64U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_224(s, blocks, blocks_n);
  uint64_t total_input_len = prev_len + (uint64_t)input_len;
  uint32_t
  pad_len1 =
    (uint32_t)1U
    +
      ((uint32_t)128U - ((uint32_t)9U + (uint32_t)(total_input_len % (uint64_t)(uint32_t)64U)))
      % (uint32_t)64U
    + (uint32_t)8U;
  uint32_t tmp_len = rest_len + pad_len1;
  uint8_t tmp_twoblocks[128U] = { 0U };
  uint8_t *tmp = tmp_twoblocks;
  uint8_t *tmp_rest = tmp;
  uint8_t *tmp_pad = tmp + rest_len;
  memcpy(tmp_rest, rest, rest_len * sizeof rest[0U]);
  Hacl_Hash_Core_SHA2_pad_224(total_input_len, tmp_pad);
  Hacl_Hash_SHA2_update_multi_224(s, tmp, tmp_len / (uint32_t)64U);
}

void
Hacl_Hash_SHA2_update_last_256(
  uint32_t *s,
  uint64_t prev_len,
  uint8_t *input,
  uint32_t input_len
)
{
  uint32_t blocks_n = input_len / (uint32_t)64U;
  uint32_t blocks_len = blocks_n * (uint32_t)64U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_256(s, blocks, blocks_n);
  uint64_t total_input_len = prev_len + (uint64_t)input_len;
  uint32_t
  pad_len1 =
    (uint32_t)1U
    +
      ((uint32_t)128U - ((uint32_t)9U + (uint32_t)(total_input_len % (uint64_t)(uint32_t)64U)))
      % (uint32_t)64U
    + (uint32_t)8U;
  uint32_t tmp_len = rest_len + pad_len1;
  uint8_t tmp_twoblocks[128U] = { 0U };
  uint8_t *tmp = tmp_twoblocks;
  uint8_t *tmp_rest = tmp;
  uint8_t *tmp_pad = tmp + rest_len;
  memcpy(tmp_rest, rest, rest_len * sizeof rest[0U]);
  Hacl_Hash_Core_SHA2_pad_256(total_input_len, tmp_pad);
  Hacl_Hash_SHA2_update_multi_256(s, tmp, tmp_len / (uint32_t)64U);
}

void
Hacl_Hash_SHA2_update_last_384(
  uint64_t *s,
  FStar_UInt128_uint128 prev_len,
  uint8_t *input,
  uint32_t input_len
)
{
  uint32_t blocks_n = input_len / (uint32_t)128U;
  uint32_t blocks_len = blocks_n * (uint32_t)128U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_384(s, blocks, blocks_n);
  FStar_UInt128_uint128
  total_input_len =
    FStar_UInt128_add(prev_len,
      FStar_UInt128_uint64_to_uint128((uint64_t)input_len));
  uint32_t
  pad_len1 =
    (uint32_t)1U
    +
      ((uint32_t)256U
      -
        ((uint32_t)17U
        +
          (uint32_t)(FStar_Int_Cast_Full_uint128_to_uint64(total_input_len)
          % (uint64_t)(uint32_t)128U)))
      % (uint32_t)128U
    + (uint32_t)16U;
  uint32_t tmp_len = rest_len + pad_len1;
  uint8_t tmp_twoblocks[256U] = { 0U };
  uint8_t *tmp = tmp_twoblocks;
  uint8_t *tmp_rest = tmp;
  uint8_t *tmp_pad = tmp + rest_len;
  memcpy(tmp_rest, rest, rest_len * sizeof rest[0U]);
  Hacl_Hash_Core_SHA2_pad_384(total_input_len, tmp_pad);
  Hacl_Hash_SHA2_update_multi_384(s, tmp, tmp_len / (uint32_t)128U);
}

void
Hacl_Hash_SHA2_update_last_512(
  uint64_t *s,
  FStar_UInt128_uint128 prev_len,
  uint8_t *input,
  uint32_t input_len
)
{
  uint32_t blocks_n = input_len / (uint32_t)128U;
  uint32_t blocks_len = blocks_n * (uint32_t)128U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_512(s, blocks, blocks_n);
  FStar_UInt128_uint128
  total_input_len =
    FStar_UInt128_add(prev_len,
      FStar_UInt128_uint64_to_uint128((uint64_t)input_len));
  uint32_t
  pad_len1 =
    (uint32_t)1U
    +
      ((uint32_t)256U
      -
        ((uint32_t)17U
        +
          (uint32_t)(FStar_Int_Cast_Full_uint128_to_uint64(total_input_len)
          % (uint64_t)(uint32_t)128U)))
      % (uint32_t)128U
    + (uint32_t)16U;
  uint32_t tmp_len = rest_len + pad_len1;
  uint8_t tmp_twoblocks[256U] = { 0U };
  uint8_t *tmp = tmp_twoblocks;
  uint8_t *tmp_rest = tmp;
  uint8_t *tmp_pad = tmp + rest_len;
  memcpy(tmp_rest, rest, rest_len * sizeof rest[0U]);
  Hacl_Hash_Core_SHA2_pad_512(total_input_len, tmp_pad);
  Hacl_Hash_SHA2_update_multi_512(s, tmp, tmp_len / (uint32_t)128U);
}

void Hacl_Hash_SHA2_hash_224(uint8_t *input, uint32_t input_len, uint8_t *dst)
{
  uint32_t
  s[8U] =
    {
      (uint32_t)0xc1059ed8U, (uint32_t)0x367cd507U, (uint32_t)0x3070dd17U, (uint32_t)0xf70e5939U,
      (uint32_t)0xffc00b31U, (uint32_t)0x68581511U, (uint32_t)0x64f98fa7U, (uint32_t)0xbefa4fa4U
    };
  uint32_t blocks_n = input_len / (uint32_t)64U;
  uint32_t blocks_len = blocks_n * (uint32_t)64U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_224(s, blocks, blocks_n);
  Hacl_Hash_SHA2_update_last_224(s, (uint64_t)blocks_len, rest, rest_len);
  Hacl_Hash_Core_SHA2_finish_224(s, dst);
}

void Hacl_Hash_SHA2_hash_256(uint8_t *input, uint32_t input_len, uint8_t *dst)
{
  uint32_t
  s[8U] =
    {
      (uint32_t)0x6a09e667U, (uint32_t)0xbb67ae85U, (uint32_t)0x3c6ef372U, (uint32_t)0xa54ff53aU,
      (uint32_t)0x510e527fU, (uint32_t)0x9b05688cU, (uint32_t)0x1f83d9abU, (uint32_t)0x5be0cd19U
    };
  uint32_t blocks_n = input_len / (uint32_t)64U;
  uint32_t blocks_len = blocks_n * (uint32_t)64U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_256(s, blocks, blocks_n);
  Hacl_Hash_SHA2_update_last_256(s, (uint64_t)blocks_len, rest, rest_len);
  Hacl_Hash_Core_SHA2_finish_256(s, dst);
}

void Hacl_Hash_SHA2_hash_384(uint8_t *input, uint32_t input_len, uint8_t *dst)
{
  uint64_t
  s[8U] =
    {
      (uint64_t)0xcbbb9d5dc1059ed8U, (uint64_t)0x629a292a367cd507U, (uint64_t)0x9159015a3070dd17U,
      (uint64_t)0x152fecd8f70e5939U, (uint64_t)0x67332667ffc00b31U, (uint64_t)0x8eb44a8768581511U,
      (uint64_t)0xdb0c2e0d64f98fa7U, (uint64_t)0x47b5481dbefa4fa4U
    };
  uint32_t blocks_n = input_len / (uint32_t)128U;
  uint32_t blocks_len = blocks_n * (uint32_t)128U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_384(s, blocks, blocks_n);
  Hacl_Hash_SHA2_update_last_384(s,
    FStar_Int_Cast_Full_uint64_to_uint128((uint64_t)blocks_len),
    rest,
    rest_len);
  Hacl_Hash_Core_SHA2_finish_384(s, dst);
}

void Hacl_Hash_SHA2_hash_512(uint8_t *input, uint32_t input_len, uint8_t *dst)
{
  uint64_t
  s[8U] =
    {
      (uint64_t)0x6a09e667f3bcc908U, (uint64_t)0xbb67ae8584caa73bU, (uint64_t)0x3c6ef372fe94f82bU,
      (uint64_t)0xa54ff53a5f1d36f1U, (uint64_t)0x510e527fade682d1U, (uint64_t)0x9b05688c2b3e6c1fU,
      (uint64_t)0x1f83d9abfb41bd6bU, (uint64_t)0x5be0cd19137e2179U
    };
  uint32_t blocks_n = input_len / (uint32_t)128U;
  uint32_t blocks_len = blocks_n * (uint32_t)128U;
  uint8_t *blocks = input;
  uint32_t rest_len = input_len - blocks_len;
  uint8_t *rest = input + blocks_len;
  Hacl_Hash_SHA2_update_multi_512(s, blocks, blocks_n);
  Hacl_Hash_SHA2_update_last_512(s,
    FStar_Int_Cast_Full_uint64_to_uint128((uint64_t)blocks_len),
    rest,
    rest_len);
  Hacl_Hash_Core_SHA2_finish_512(s, dst);
}

