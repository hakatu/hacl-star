/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: /Users/jonathan/Code/kremlin/krml -bundle Hacl.Spec.*,Spec.*[rename=Hacl_Spec] -bundle Hacl.Poly1305.Field32xN.Lemmas[rename=Hacl_Lemmas] -bundle Lib.*[rename=Hacl_Lib] -drop Lib.IntVector.Intrinsics -add-include "libintvector.h" -add-include "evercrypt_targetconfig.h" -drop EverCrypt.TargetConfig -bundle Test,Test.*,Hacl.Test.* -bundle EverCrypt.BCrypt -bundle EverCrypt.OpenSSL -bundle MerkleTree.Spec,MerkleTree.Spec.*,MerkleTree.New.High,MerkleTree.New.High.* -bundle Vale.Stdcalls.*,Interop,Interop.*,Fadd_stdcalls,Cpuid_stdcalls,Fswap_stdcalls,Fmul_stdcalls,Fsqr_stdcalls,Fsub_stdcalls,Poly_stdcalls,Sha_stdcalls,GCMencrypt_stdcalls,GCMencryptOpt_stdcalls,AES_stdcalls[rename=Vale] -bundle Fadd_inline,Fmul_inline,Fsqr_inline,Fswap_inline[rename=Vale_Inline] -bundle FStar.Tactics.CanonCommMonoid,FStar.Tactics.CanonCommSemiring,FStar.Tactics.CanonCommSwaps[rename=Unused] -bundle FastUtil_helpers,FastHybrid_helpers,FastSqr_helpers,FastMul_helpers[rename=Unused2] -bundle Opaque_s,Map16,Test.Vale_memcpy,Fast_defs,Interop_Printer,Memcpy[rename=Unused3] -bundle X64.*,Arch.*,Words.*,Vale.*,Collections.*,Collections,SHA_helpers[rename=Unused4] -bundle Prop_s,Types_s,Words_s,Views,AES_s,Workarounds,Math.*,Interop,TypesNative_s[rename=Unused5] -bundle GF128_s,GF128,Poly1305.*,GCTR,GCTR_s,GHash_s,GCM_helpers,GHash[rename=Unused6] -bundle AES_helpers,AES256_helpers,GCM_s,GCM,Interop_assumptions[rename=Unused7] -library Vale.Stdcalls.* -static-header Vale_Inline -library Fadd_inline -library Fmul_inline -library Fswap_inline -library Fsqr_inline -no-prefix Vale.Stdcalls.* -no-prefix Fadd_inline -no-prefix Fmul_inline -no-prefix Fswap_inline -no-prefix Fsqr_inline -no-prefix EverCrypt.Vale -add-include "curve25519-inline.h" -no-prefix MerkleTree.New.Low -no-prefix MerkleTree.New.Low.Serialization -fparentheses -fno-shadow -fcurly-braces -bundle EverCrypt -bundle Hacl.Hash.MD5+Hacl.Hash.Core.MD5+Hacl.Hash.SHA1+Hacl.Hash.Core.SHA1+Hacl.Hash.SHA2+Hacl.Hash.Core.SHA2+Hacl.Hash.Core.SHA2.Constants=Hacl.Hash.*[rename=Hacl_Hash] -bundle Hacl.Impl.SHA3+Hacl.SHA3=[rename=Hacl_SHA3] -bundle Hacl.Poly1305_32+Hacl.Poly1305_128+Hacl.Poly1305_256=Hacl.Poly1305.*,Hacl.Impl.Poly1305,Hacl.Impl.Poly1305.*[rename=Hacl_Poly1305] -bundle Hacl.Impl.Chacha20=Hacl.Impl.Chacha20.*[rename=Hacl_Chacha20] -bundle Hacl.Curve25519_51+Hacl.Curve25519_64=Hacl.Impl.Curve25519.*[rename=Hacl_Curve25519] -bundle Hacl.Impl.Chacha20Poly1305=Hacl.Impl.Chacha20Poly1305.*[rename=Hacl_Chacha20Poly1305] -bundle LowStar.* -bundle Prims,C.Failure,C,C.String,C.Loops,Spec.Loops,C.Endianness,FStar.*[rename=Hacl_Kremlib] -bundle EverCrypt.Spec.* -bundle MerkleTree.New.Low+MerkleTree.New.Low.Serialization=[rename=MerkleTree] -bundle Test,Test.*,WindowsHack -bundle EverCrypt.Hash+EverCrypt.Hash.Incremental=[rename=EverCrypt_Hash] -library EverCrypt.AutoConfig,EverCrypt.OpenSSL,EverCrypt.BCrypt -minimal -add-include "kremlin/internal/types.h" -add-include "kremlin/internal/target.h" -add-include "kremlin/lowstar_endianness.h" -add-include <string.h> -falloca -ftail-calls -tmpdir dist/compact-msvc/ -skip-compilation obj/prims.krml obj/FStar_Pervasives_Native.krml obj/FStar_Pervasives.krml obj/Prop_s.krml obj/FStar_Exn.krml obj/FStar_Squash.krml obj/FStar_Classical.krml obj/FStar_FunctionalExtensionality.krml obj/FStar_Set.krml obj/FStar_Preorder.krml obj/FStar_Monotonic_Witnessed.krml obj/FStar_Ghost.krml obj/FStar_ErasedLogic.krml obj/FStar_StrongExcludedMiddle.krml obj/FStar_PropositionalExtensionality.krml obj/FStar_PredicateExtensionality.krml obj/FStar_TSet.krml obj/FStar_Monotonic_Heap.krml obj/FStar_Heap.krml obj/FStar_ST.krml obj/FStar_All.krml obj/FStar_Map.krml obj/FStar_List_Tot_Base.krml obj/FStar_List_Tot_Properties.krml obj/FStar_List_Tot.krml obj/FStar_Seq_Base.krml obj/FStar_Mul.krml obj/FStar_Calc.krml obj/FStar_Seq_Properties.krml obj/FStar_Seq.krml obj/FStar_Math_Lib.krml obj/FStar_Math_Lemmas.krml obj/FStar_BitVector.krml obj/FStar_UInt.krml obj/FStar_UInt32.krml obj/FStar_UInt8.krml obj/FStar_Monotonic_HyperHeap.krml obj/FStar_Monotonic_HyperStack.krml obj/FStar_HyperStack.krml obj/FStar_HyperStack_ST.krml obj/FStar_Universe.krml obj/FStar_GSet.krml obj/FStar_ModifiesGen.krml obj/FStar_Range.krml obj/FStar_Reflection_Types.krml obj/FStar_Tactics_Types.krml obj/FStar_Tactics_Result.krml obj/FStar_Tactics_Effect.krml obj/FStar_Tactics_Util.krml obj/FStar_Reflection_Data.krml obj/FStar_Reflection_Const.krml obj/FStar_Char.krml obj/FStar_List.krml obj/FStar_String.krml obj/FStar_Order.krml obj/FStar_Reflection_Basic.krml obj/FStar_Reflection_Derived.krml obj/FStar_Tactics_Builtins.krml obj/FStar_Reflection_Formula.krml obj/FStar_Reflection_Derived_Lemmas.krml obj/FStar_Reflection.krml obj/FStar_Tactics_Derived.krml obj/FStar_Tactics_Logic.krml obj/FStar_Tactics.krml obj/FStar_BigOps.krml obj/LowStar_Monotonic_Buffer.krml obj/LowStar_Buffer.krml obj/LowStar_Modifies.krml obj/LowStar_ModifiesPat.krml obj/LowStar_BufferView_Down.krml obj/LowStar_BufferView_Up.krml obj/LowStar_BufferView.krml obj/BufferViewHelpers.krml obj/FStar_UInt64.krml obj/FStar_UInt16.krml obj/Words_s.krml obj/Collections_Seqs_s.krml obj/Words_Four_s.krml obj/Words_Two_s.krml obj/Words_Seq_s.krml obj/Opaque_s.krml obj/Types_s.krml obj/X64_Machine_s.krml obj/AES_s.krml obj/Math_Poly2_Defs_s.krml obj/Math_Poly2_s.krml obj/Math_Poly2_Bits_s.krml obj/Vale_Set.krml obj/FStar_HyperStack_All.krml obj/FStar_Kremlin_Endianness.krml obj/FStar_Int.krml obj/FStar_Int64.krml obj/FStar_Int63.krml obj/FStar_Int32.krml obj/FStar_Int16.krml obj/FStar_Int8.krml obj/FStar_UInt63.krml obj/FStar_Int_Cast.krml obj/FStar_UInt128.krml obj/Spec_Hash_Definitions.krml obj/Spec_Hash_Lemmas0.krml obj/Spec_Hash_PadFinish.krml obj/Spec_Loops.krml obj/Spec_SHA2_Constants.krml obj/Spec_SHA2.krml obj/X64_CryptoInstructions_s.krml obj/X64_CPU_Features_s.krml obj/X64_Bytes_Semantics_s.krml obj/FStar_Float.krml obj/FStar_BaseTypes.krml obj/X64_Taint_Semantics_s.krml obj/LowStar_ImmutableBuffer.krml obj/Util_Meta.krml obj/Words_Two.krml obj/Collections_Seqs.krml obj/TypesNative_s.krml obj/Arch_TypesNative.krml obj/Words_Seq.krml obj/Arch_Types.krml obj/Views.krml obj/Interop_Types.krml obj/Interop_Base.krml obj/X64_Bytes_Semantics.krml obj/Interop.krml obj/Fast_lemmas_internal.krml obj/Fast_defs.krml obj/FStar_Tactics_CanonCommSwaps.krml obj/FStar_Algebra_CommMonoid.krml obj/FStar_Tactics_CanonCommMonoid.krml obj/FStar_Tactics_CanonCommSemiring.krml obj/FastUtil_helpers.krml obj/FastHybrid_helpers.krml obj/Fast_lemmas_external.krml obj/Map16.krml obj/X64_Vale_Xmms.krml obj/X64_Vale_Regs.krml obj/FStar_IO.krml obj/X64_Stack_i.krml obj/X64_Stack_Sems.krml obj/X64_Memory.krml obj/X64_BufferViewStore.krml obj/X64_Memory_Sems.krml obj/X64_Vale_State.krml obj/X64_Vale_StateLemmas.krml obj/X64_Vale_Lemmas.krml obj/X64_Print_s.krml obj/X64_Vale_Decls.krml obj/X64_Vale_QuickCode.krml obj/X64_Vale_QuickCodes.krml obj/X64_Taint_Semantics.krml obj/X64_Vale_InsLemmas.krml obj/X64_Vale_InsBasic.krml obj/X64_Vale_InsMem.krml obj/X64_Vale_InsVector.krml obj/X64_Vale_InsStack.krml obj/X64_FastHybrid.krml obj/FastSqr_helpers.krml obj/X64_FastSqr.krml obj/FastMul_helpers.krml obj/X64_FastMul.krml obj/X64_FastWide.krml obj/X64_FastUtil.krml obj/Interop_Assumptions.krml obj/Interop_X64.krml obj/X64_Print_Inline_s.krml obj/X64_MemoryAdapters.krml obj/Vale_AsLowStar_ValeSig.krml obj/Vale_AsLowStar_LowStarSig.krml obj/Vale_AsLowStar_MemoryHelpers.krml obj/Vale_AsLowStar_Wrapper.krml obj/Vale_Stdcalls_Fadd.krml obj/Fadd_stdcalls.krml obj/Fsqr_inline.krml obj/X64_Vale_InsAes.krml obj/Test_Vale_memcpy.krml obj/X64_Stack.krml obj/Math_Poly2_Defs.krml obj/Math_Poly2.krml obj/Math_Poly2_Lemmas.krml obj/Math_Poly2_Bits.krml obj/Math_Poly2_Words.krml obj/GF128_s.krml obj/GF128.krml obj/X64_GF128_Mul.krml obj/FStar_BV.krml obj/FStar_Reflection_Arith.krml obj/FStar_Tactics_BV.krml obj/Vale_Bv_s.krml obj/Math_Bits.krml obj/Vale_Tactics.krml obj/X64_Poly1305_Bitvectors.krml obj/Math_Lemmas_Int.krml obj/FStar_Tactics_Canon.krml obj/Poly1305_Spec_s.krml obj/X64_Poly1305_Math.krml obj/Workarounds.krml obj/GCTR_s.krml obj/GCM_helpers.krml obj/GHash_s.krml obj/GHash.krml obj/X64_GHash.krml obj/GCTR.krml obj/AES_helpers.krml obj/X64_AESCTR.krml obj/X64_AESCTRplain.krml obj/AES256_helpers.krml obj/X64_AES256.krml obj/X64_AES128.krml obj/X64_AES.krml obj/X64_GCTR.krml obj/GCM_s.krml obj/GCM.krml obj/X64_GCMencrypt.krml obj/Lib_LoopCombinators.krml obj/FStar_Int_Cast_Full.krml obj/Lib_IntTypes.krml obj/Lib_Sequence.krml obj/Spec_SHA3_Constants.krml obj/Spec_SHA1.krml obj/Spec_MD5.krml obj/Spec_Hash.krml obj/Spec_Hash_Incremental.krml obj/Spec_Hash_Lemmas.krml obj/LowStar_BufferOps.krml obj/C_Loops.krml obj/C_Endianness.krml obj/Hacl_Hash_Lemmas.krml obj/Hacl_Hash_Definitions.krml obj/Hacl_Hash_PadFinish.krml obj/Hacl_Hash_MD.krml obj/SHA_helpers.krml obj/X64_Vale_InsSha.krml obj/X64_SHA.krml obj/Vale_Stdcalls_Sha.krml obj/Simplify_Sha.krml obj/Sha_stdcalls.krml obj/Hacl_Hash_Core_SHA2_Constants.krml obj/Hacl_Hash_Core_SHA2.krml obj/Hacl_Hash_SHA2.krml obj/Hacl_Hash_Core_SHA1.krml obj/Hacl_Hash_SHA1.krml obj/Hacl_Hash_Core_MD5.krml obj/Hacl_Hash_MD5.krml obj/C.krml obj/C_String.krml obj/C_Failure.krml obj/FStar_Int128.krml obj/FStar_Int31.krml obj/FStar_UInt31.krml obj/FStar_Integers.krml obj/EverCrypt_StaticConfig.krml obj/X64_Cpuid.krml obj/X64_Cpuidstdcall.krml obj/Vale_Stdcalls_Cpuid.krml obj/Cpuid_stdcalls.krml obj/EverCrypt_TargetConfig.krml obj/EverCrypt_AutoConfig2.krml obj/EverCrypt_Helpers.krml obj/EverCrypt_Hash.krml obj/Lib_RawIntTypes.krml obj/Lib_Loops.krml obj/Lib_ByteSequence.krml obj/Hacl_Impl_Curve25519_Lemmas.krml obj/Spec_Curve25519_Lemmas.krml obj/Spec_Curve25519.krml obj/Hacl_Spec_Curve25519_Field51_Definition.krml obj/Hacl_Spec_Curve25519_Field51_Lemmas.krml obj/Hacl_Spec_Curve25519_Field51.krml obj/Lib_Buffer.krml obj/Hacl_Impl_Curve25519_Field51.krml obj/LowStar_Vector.krml obj/LowStar_Regional.krml obj/LowStar_RVector.krml obj/X64_PolyOps.krml obj/Lib_ByteBuffer.krml obj/Lib_IntVector_Intrinsics.krml obj/Lib_IntVector.krml obj/Hacl_Spec_Curve25519_AddAndDouble.krml obj/Hacl_Spec_Curve25519_Field64_Definition.krml obj/Hacl_Spec_Curve25519_Field64_Lemmas.krml obj/Hacl_Spec_Curve25519_Field64_Core.krml obj/Hacl_Spec_Curve25519_Field64.krml obj/Vale_Stdcalls_Fswap.krml obj/Fswap_stdcalls.krml obj/Fswap_inline.krml obj/Vale_Stdcalls_Fsqr.krml obj/Fsqr_stdcalls.krml obj/Vale_Stdcalls_Fmul.krml obj/Fmul_stdcalls.krml obj/Fmul_inline.krml obj/Vale_Stdcalls_Fsub.krml obj/Fsub_stdcalls.krml obj/Fadd_inline.krml obj/Hacl_Impl_Curve25519_Field64_Core.krml obj/Hacl_Impl_Curve25519_Field64.krml obj/Hacl_Impl_Curve25519_Fields.krml obj/Hacl_Impl_Curve25519_AddAndDouble.krml obj/Vale_Stdcalls_Aes.krml obj/Spec_Chacha20.krml obj/Hacl_Impl_Chacha20_Core32.krml obj/Hacl_Impl_Chacha20.krml obj/Spec_Poly1305.krml obj/Hacl_Spec_Poly1305_Vec.krml obj/Hacl_Impl_Poly1305_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN.krml obj/Hacl_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml obj/Hacl_Impl_Poly1305_Field32xN.krml obj/Hacl_Impl_Poly1305_Fields.krml obj/Hacl_Spec_Poly1305_Equiv.krml obj/Hacl_Impl_Poly1305.krml obj/Spec_Chacha20Poly1305.krml obj/Hacl_Impl_Chacha20Poly1305_PolyCore.krml obj/Hacl_Impl_Chacha20Poly1305_Poly.krml obj/Hacl_Impl_Chacha20Poly1305.krml obj/FStar_Dyn.krml obj/EverCrypt_Vale.krml obj/EverCrypt_Specs.krml obj/EverCrypt_OpenSSL.krml obj/EverCrypt_Hacl.krml obj/EverCrypt_BCrypt.krml obj/EverCrypt_Cipher.krml obj/Hacl_Spec_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Finv.krml obj/Hacl_Impl_Curve25519_Generic.krml obj/Hacl_Curve25519_51.krml obj/Hacl_Curve25519_64.krml obj/EverCrypt_Curve25519.krml obj/Hacl_Poly1305_32.krml obj/FStar_Endianness.krml obj/Poly1305_Equiv.krml obj/X64_Poly1305_Util.krml obj/X64_Poly1305.krml obj/Vale_Stdcalls_Poly.krml obj/Poly_stdcalls.krml obj/Arch_BufferFriend.krml obj/X64_Poly1305_CallingFromLowStar.krml obj/Hacl_Poly1305_128.krml obj/Hacl_Poly1305_256.krml obj/Lib_Unlib.krml obj/EverCrypt_Poly1305.krml obj/EverCrypt_HMAC.krml obj/EverCrypt_HKDF.krml obj/EverCrypt.krml obj/MerkleTree_Spec.krml obj/Gcm_simplify.krml obj/Vale_Stdcalls_GCMencrypt.krml obj/GCMencrypt_stdcalls.krml obj/MerkleTree_New_High.krml obj/LowStar_Regional_Instances.krml obj/MerkleTree_New_Low.krml obj/MerkleTree_New_Low_Serialization.krml obj/X64_Leakage_s.krml obj/X64_Leakage_Helpers.krml obj/X64_AESGCM.krml obj/X64_GCMencryptOpt.krml obj/Vale_Stdcalls_GCMencryptOpt.krml obj/GCMencryptOpt256_stdcalls.krml obj/GCMencryptOpt_stdcalls.krml obj/X64_GF128_Init.krml obj/Vale_Stdcalls_AesHash.krml obj/AEShash_stdcalls.krml obj/AES_stdcalls.krml obj/Spec_AEAD.krml obj/EverCrypt_AEAD.krml obj/MerkleTree_New_High_Correct_Base.krml obj/MerkleTree_New_High_Correct_Rhs.krml obj/MerkleTree_New_High_Correct_Path.krml obj/MerkleTree_New_High_Correct_Flushing.krml obj/MerkleTree_New_High_Correct_Insertion.krml obj/MerkleTree_New_High_Correct.krml obj/EverCrypt_Hash_Incremental.krml obj/Test_Hash.krml obj/Operator.krml obj/Spec_SHA3.krml obj/Hacl_Impl_SHA3.krml obj/X64_AESopt2.krml obj/TestLib.krml obj/EverCrypt_Chacha20Poly1305.krml obj/Hacl_SHA3.krml obj/Lib_PrintBuffer.krml obj/Hacl_Test_CSHAKE.krml obj/Spec_Hash_Test.krml obj/X64_Leakage_Ins_Xmm.krml obj/X64_Leakage_Ins.krml obj/X64_Leakage.krml obj/Test_Vectors_Chacha20Poly1305.krml obj/Test_Memcpy.krml obj/Lib_RandomBuffer.krml obj/Test_Vectors_Aes128.krml obj/Collections_Lists.krml obj/Hacl_Hash_Agile.krml obj/Hacl_Test_SHA3.krml obj/Test_Vectors_Curve25519.krml obj/Spec_Chacha20Poly1305_Test.krml obj/X64_GCMdecrypt.krml obj/Test_Vectors_Poly1305.krml obj/Test_Args.krml obj/Vale_AsLowStar_Test.krml obj/Spec_SHA3_Test.krml obj/Test_Lowstarize.krml obj/Test_Vectors.krml obj/Test_Vectors_Aes128Gcm.krml obj/Spec_Curve25519_Test.krml obj/Test.krml obj/Spec_Chacha20_Test.krml obj/X64_AESopt.krml -silent -ccopt -Wno-unused -warn-error @4-6 -fparentheses Hacl_AES.c Hacl_Ed25519.c Lib_PrintBuffer.c Lib_RandomBuffer.c evercrypt_vale_stubs.c -o libevercrypt.a
  F* version: 28a5baa2
  KreMLin version: f534ac02
 */

#include "EverCrypt_AEAD.h"

#define EverCrypt_AEAD_EK 0

typedef uint8_t EverCrypt_AEAD_expanded_key_tags;

bool EverCrypt_AEAD_uu___is_EK(Spec_AEAD_alg a, uint8_t *projectee)
{
  return true;
}

uint8_t *EverCrypt_AEAD___proj__EK__item__ek(Spec_AEAD_alg a, uint8_t *projectee)
{
  return projectee;
}

static uint32_t EverCrypt_AEAD_ekv_len(Spec_AEAD_alg a)
{
  switch (a)
  {
    case Spec_AEAD_CHACHA20_POLY1305:
      {
        return (uint32_t)32U;
      }
    case Spec_AEAD_AES128_GCM:
      {
        return (uint32_t)336U;
      }
    case Spec_AEAD_AES256_GCM:
      {
        return (uint32_t)400U;
      }
    default:
      {
        KRML_HOST_PRINTF("KreMLin incomplete match at %s:%d\n", __FILE__, __LINE__);
        KRML_HOST_EXIT(253U);
      }
  }
}

/*

  val expand_in :
    #a: alg ->
    r: HS.rid ->
    k: B.buffer UInt8.t {B.length k = key_length a}
  -> ST (expanded_key a)
      (requires fun h0 -> ST.is_eternal_region r /\ B.live h0 k)
      (ensures
        fun h0 ek h1 ->
          let l = B.loc_buffer (EK?.ek ek) in
          Hash.fresh_loc l h0 h1 /\ B.(modifies loc_none h0 h1) /\
          B.(loc_includes (loc_region_only true r) l) /\
          (not (MB.g_is_null (EK?.ek ek)) ==>
            (S.equal (G.reveal (EK?.kv ek)) (B.as_seq h0 k) /\
              is_supported_alg a)))
*/
uint8_t *EverCrypt_AEAD_expand_in(Spec_AEAD_alg a, uint8_t *k1)
{
  switch (a)
  {
    case Spec_AEAD_AES128_GCM:
      {
        bool has_aesni1 = EverCrypt_AutoConfig2_has_aesni();
        bool has_pclmulqdq1 = EverCrypt_AutoConfig2_has_pclmulqdq();
        #if EVERCRYPT_TARGETCONFIG_X64
        if (has_aesni1 && has_pclmulqdq1)
        {
          KRML_CHECK_SIZE(sizeof (uint8_t), EverCrypt_AEAD_ekv_len(a));
          uint8_t *ek = KRML_HOST_CALLOC(EverCrypt_AEAD_ekv_len(a), sizeof (uint8_t));
          uint8_t ek_[336U] = { 0U };
          uint8_t *keys_b = ek_;
          uint8_t *hkeys_b = ek_ + (uint32_t)176U;
          uint64_t scrut = aes128_key_expansion(k1, keys_b);
          uint8_t *b_sub = hkeys_b + (uint32_t)32U;
          uint64_t scrut0 = aes128_keyhash_init(keys_b, b_sub);
          memcpy(ek, ek_, (uint32_t)336U * sizeof ek_[0U]);
          return ek;
        }
        #endif
        return NULL;
      }
    case Spec_AEAD_AES256_GCM:
      {
        bool has_aesni1 = EverCrypt_AutoConfig2_has_aesni();
        bool has_pclmulqdq1 = EverCrypt_AutoConfig2_has_pclmulqdq();
        #if EVERCRYPT_TARGETCONFIG_X64
        if (has_aesni1 && has_pclmulqdq1)
        {
          KRML_CHECK_SIZE(sizeof (uint8_t), EverCrypt_AEAD_ekv_len(a));
          uint8_t *ek = KRML_HOST_CALLOC(EverCrypt_AEAD_ekv_len(a), sizeof (uint8_t));
          uint8_t ek_[400U] = { 0U };
          uint8_t *keys_b = ek_;
          uint8_t *hkeys_b = ek_ + (uint32_t)240U;
          uint64_t scrut = aes256_key_expansion(k1, keys_b);
          uint8_t *b_sub = hkeys_b + (uint32_t)32U;
          uint64_t scrut0 = aes256_keyhash_init(keys_b, b_sub);
          memcpy(ek, ek_, (uint32_t)400U * sizeof ek_[0U]);
          return ek;
        }
        #endif
        return NULL;
      }
    case Spec_AEAD_CHACHA20_POLY1305:
      {
        uint8_t *ek = KRML_HOST_CALLOC((uint32_t)32U, sizeof (uint8_t));
        memcpy(ek, k1, (uint32_t)32U * sizeof k1[0U]);
        return ek;
      }
    default:
      {
        return NULL;
      }
  }
}

bool EverCrypt_AEAD_uu___is_Success(EverCrypt_AEAD_error_code projectee)
{
  switch (projectee)
  {
    case EverCrypt_AEAD_Success:
      {
        return true;
      }
    default:
      {
        return false;
      }
  }
}

bool EverCrypt_AEAD_uu___is_InvalidKey(EverCrypt_AEAD_error_code projectee)
{
  switch (projectee)
  {
    case EverCrypt_AEAD_InvalidKey:
      {
        return true;
      }
    default:
      {
        return false;
      }
  }
}

bool EverCrypt_AEAD_uu___is_Failure(EverCrypt_AEAD_error_code projectee)
{
  switch (projectee)
  {
    case EverCrypt_AEAD_Failure:
      {
        return true;
      }
    default:
      {
        return false;
      }
  }
}

/*

  val encrypt :
    #a: supported_alg ->
    ek: expanded_key a ->
    iv: iv_p a ->
    ad: ad_p a ->
    ad_len: UInt32.t{v ad_len = B.length ad /\ v ad_len <= pow2 31} ->
    plain: plain_p a ->
    plain_len:
      UInt32.t{v plain_len = B.length plain /\ v plain_len <= max_length a} ->
    cipher: B.buffer UInt8.t {B.length cipher = B.length plain} ->
    tag: B.buffer UInt8.t {B.length tag = tag_length a}
  -> Stack error_code
      (requires
        fun h0 ->
          MB.(all_live h0
              [buf (EK?.ek ek); buf iv; buf ad; buf plain; buf cipher; buf tag]) /\
          (B.disjoint plain cipher \/ plain == cipher) /\ B.disjoint cipher tag /\
          B.disjoint iv cipher /\ B.disjoint iv tag /\ B.disjoint plain tag /\
          B.disjoint plain ad /\ B.disjoint ad cipher /\ B.disjoint ad tag)
      (ensures
        fun h0 r h1 ->
          match r with
          | Success ->
            B.(modifies (loc_union (loc_buffer cipher) (loc_buffer tag)) h0 h1) /\
            S.equal (S.append (B.as_seq h1 cipher) (B.as_seq h1 tag))
              (encrypt #a
                  (G.reveal (EK?.kv ek))
                  (B.as_seq h0 iv)
                  (B.as_seq h0 ad)
                  (B.as_seq h0 plain))
          | InvalidKey -> let open B in modifies loc_none h0 h1
          | Failure -> False)
*/
EverCrypt_AEAD_error_code
EverCrypt_AEAD_encrypt(
  Spec_AEAD_alg a,
  uint8_t *ek,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t ad_len,
  uint8_t *plain,
  uint32_t plain_len,
  uint8_t *cipher1,
  uint8_t *tag
)
{
  if (ek == NULL)
  {
    return EverCrypt_AEAD_InvalidKey;
  }
  else
  {
    switch (a)
    {
      case Spec_AEAD_AES128_GCM:
        {
          uint8_t tmp_keys[176U] = { 0U };
          memcpy(tmp_keys, ek, (uint32_t)176U * sizeof ek[0U]);
          uint8_t hkeys_b[160U] = { 0U };
          memcpy(hkeys_b, ek + (uint32_t)176U, (uint32_t)160U * sizeof ek[0U]);
          uint8_t tmp_iv[16U] = { 0U };
          memcpy(tmp_iv, iv, (uint32_t)12U * sizeof iv[0U]);
          uint8_t scratch_b[128U] = { 0U };
          uint8_t inout_b[16U] = { 0U };
          uint8_t abytes_b[16U] = { 0U };
          uint32_t plain_len_ = (uint32_t)(uint64_t)plain_len / (uint32_t)16U * (uint32_t)16U;
          uint32_t auth_len_ = (uint32_t)(uint64_t)ad_len / (uint32_t)16U * (uint32_t)16U;
          uint8_t *plain_b_ = plain;
          uint8_t *out_b_ = cipher1;
          uint8_t *auth_b_ = ad;
          memcpy(inout_b,
            plain + plain_len_,
            (uint32_t)(uint64_t)plain_len % (uint32_t)16U * sizeof plain[0U]);
          memcpy(abytes_b,
            ad + auth_len_,
            (uint32_t)(uint64_t)ad_len % (uint32_t)16U * sizeof ad[0U]);
          uint64_t len128x6 = (uint64_t)plain_len / (uint64_t)96U * (uint64_t)96U;
          if (len128x6 / (uint64_t)16U >= (uint64_t)18U)
          {
            uint64_t len128_num = (uint64_t)plain_len / (uint64_t)16U * (uint64_t)16U - len128x6;
            uint8_t *in128x6_b = plain_b_;
            uint8_t *out128x6_b = out_b_;
            uint8_t *in128_b = plain_b_ + (uint32_t)len128x6;
            uint8_t *out128_b = out_b_ + (uint32_t)len128x6;
            uint64_t auth_num = (uint64_t)ad_len / (uint64_t)16U;
            uint64_t len128x6_ = len128x6 / (uint64_t)16U;
            uint64_t len128_num_ = len128_num / (uint64_t)16U;
            uint64_t
            scrut =
              gcm128_encrypt_opt(auth_b_,
                (uint64_t)ad_len,
                auth_num,
                tmp_keys,
                tmp_iv,
                hkeys_b,
                abytes_b,
                in128x6_b,
                out128x6_b,
                len128x6_,
                in128_b,
                out128_b,
                len128_num_,
                inout_b,
                (uint64_t)plain_len,
                scratch_b,
                tag);
          }
          else
          {
            uint32_t len128x61 = (uint32_t)0U;
            uint64_t len128_num = (uint64_t)plain_len / (uint64_t)16U * (uint64_t)16U;
            uint8_t *in128x6_b = plain_b_;
            uint8_t *out128x6_b = out_b_;
            uint8_t *in128_b = plain_b_ + len128x61;
            uint8_t *out128_b = out_b_ + len128x61;
            uint64_t auth_num = (uint64_t)ad_len / (uint64_t)16U;
            uint64_t len128_num_ = len128_num / (uint64_t)16U;
            uint64_t len128x6_ = (uint64_t)0U;
            uint64_t
            scrut =
              gcm128_encrypt_opt(auth_b_,
                (uint64_t)ad_len,
                auth_num,
                tmp_keys,
                tmp_iv,
                hkeys_b,
                abytes_b,
                in128x6_b,
                out128x6_b,
                len128x6_,
                in128_b,
                out128_b,
                len128_num_,
                inout_b,
                (uint64_t)plain_len,
                scratch_b,
                tag);
          }
          memcpy(cipher1 + (uint32_t)(uint64_t)plain_len / (uint32_t)16U * (uint32_t)16U,
            inout_b,
            (uint32_t)(uint64_t)plain_len % (uint32_t)16U * sizeof inout_b[0U]);
          return EverCrypt_AEAD_Success;
        }
      case Spec_AEAD_AES256_GCM:
        {
          uint8_t tmp_keys[240U] = { 0U };
          memcpy(tmp_keys, ek, (uint32_t)240U * sizeof ek[0U]);
          uint8_t hkeys_b[160U] = { 0U };
          memcpy(hkeys_b, ek + (uint32_t)240U, (uint32_t)160U * sizeof ek[0U]);
          uint8_t tmp_iv[16U] = { 0U };
          memcpy(tmp_iv, iv, (uint32_t)12U * sizeof iv[0U]);
          uint8_t scratch_b[128U] = { 0U };
          uint8_t inout_b[16U] = { 0U };
          uint8_t abytes_b[16U] = { 0U };
          uint32_t plain_len_ = (uint32_t)(uint64_t)plain_len / (uint32_t)16U * (uint32_t)16U;
          uint32_t auth_len_ = (uint32_t)(uint64_t)ad_len / (uint32_t)16U * (uint32_t)16U;
          uint8_t *plain_b_ = plain;
          uint8_t *out_b_ = cipher1;
          uint8_t *auth_b_ = ad;
          memcpy(inout_b,
            plain + plain_len_,
            (uint32_t)(uint64_t)plain_len % (uint32_t)16U * sizeof plain[0U]);
          memcpy(abytes_b,
            ad + auth_len_,
            (uint32_t)(uint64_t)ad_len % (uint32_t)16U * sizeof ad[0U]);
          uint64_t len128x6 = (uint64_t)plain_len / (uint64_t)96U * (uint64_t)96U;
          if (len128x6 / (uint64_t)16U >= (uint64_t)18U)
          {
            uint64_t len128_num = (uint64_t)plain_len / (uint64_t)16U * (uint64_t)16U - len128x6;
            uint8_t *in128x6_b = plain_b_;
            uint8_t *out128x6_b = out_b_;
            uint8_t *in128_b = plain_b_ + (uint32_t)len128x6;
            uint8_t *out128_b = out_b_ + (uint32_t)len128x6;
            uint64_t auth_num = (uint64_t)ad_len / (uint64_t)16U;
            uint64_t len128x6_ = len128x6 / (uint64_t)16U;
            uint64_t len128_num_ = len128_num / (uint64_t)16U;
            uint64_t
            scrut =
              gcm256_encrypt_opt(auth_b_,
                (uint64_t)ad_len,
                auth_num,
                tmp_keys,
                tmp_iv,
                hkeys_b,
                abytes_b,
                in128x6_b,
                out128x6_b,
                len128x6_,
                in128_b,
                out128_b,
                len128_num_,
                inout_b,
                (uint64_t)plain_len,
                scratch_b,
                tag);
          }
          else
          {
            uint32_t len128x61 = (uint32_t)0U;
            uint64_t len128_num = (uint64_t)plain_len / (uint64_t)16U * (uint64_t)16U;
            uint8_t *in128x6_b = plain_b_;
            uint8_t *out128x6_b = out_b_;
            uint8_t *in128_b = plain_b_ + len128x61;
            uint8_t *out128_b = out_b_ + len128x61;
            uint64_t auth_num = (uint64_t)ad_len / (uint64_t)16U;
            uint64_t len128_num_ = len128_num / (uint64_t)16U;
            uint64_t len128x6_ = (uint64_t)0U;
            uint64_t
            scrut =
              gcm256_encrypt_opt(auth_b_,
                (uint64_t)ad_len,
                auth_num,
                tmp_keys,
                tmp_iv,
                hkeys_b,
                abytes_b,
                in128x6_b,
                out128x6_b,
                len128x6_,
                in128_b,
                out128_b,
                len128_num_,
                inout_b,
                (uint64_t)plain_len,
                scratch_b,
                tag);
          }
          memcpy(cipher1 + (uint32_t)(uint64_t)plain_len / (uint32_t)16U * (uint32_t)16U,
            inout_b,
            (uint32_t)(uint64_t)plain_len % (uint32_t)16U * sizeof inout_b[0U]);
          return EverCrypt_AEAD_Success;
        }
      case Spec_AEAD_CHACHA20_POLY1305:
        {
          uint8_t tmp[32U] = { 0U };
          memcpy(tmp, ek, (uint32_t)32U * sizeof ek[0U]);
          Hacl_Impl_Chacha20Poly1305_aead_encrypt_chacha_poly(tmp,
            iv,
            ad_len,
            ad,
            plain_len,
            plain,
            cipher1,
            tag);
          return EverCrypt_AEAD_Success;
        }
      default:
        {
          KRML_HOST_PRINTF("KreMLin incomplete match at %s:%d\n", __FILE__, __LINE__);
          KRML_HOST_EXIT(253U);
        }
    }
  }
}

/*

  val decrypt :
    #a: supported_alg ->
    ek: expanded_key a ->
    iv: iv_p a ->
    ad: ad_p a ->
    ad_len: UInt32.t{v ad_len = B.length ad /\ v ad_len <= pow2 31} ->
    cipher: cipher_p a ->
    cipher_len: UInt32.t{v cipher_len = B.length cipher} ->
    tag: B.buffer UInt8.t {B.length tag = tag_length a} ->
    dst: B.buffer UInt8.t {B.length dst = B.length cipher}
  -> Stack error_code
      (requires
        fun h0 ->
          MB.(all_live h0
              [buf (EK?.ek ek); buf iv; buf ad; buf cipher; buf tag; buf dst]) /\
          (B.disjoint cipher dst \/ cipher == dst))
      (ensures
        fun h0 err h1 ->
          let kv = G.reveal (EK?.kv ek) in
          let cipher_tag = (B.as_seq h0 cipher) `S.append` (B.as_seq h0 tag) in
          let plain =
            decrypt #a kv (B.as_seq h0 iv) (B.as_seq h0 ad) cipher_tag
          in
          match err with
          | InvalidKey -> let open B in modifies loc_none h0 h1
          | Success ->
            B.(modifies (loc_buffer dst) h0 h1) /\ Some? plain /\
            S.equal (Some?.v plain) (B.as_seq h1 dst)
          | Failure -> B.(modifies (loc_buffer dst) h0 h1) /\ None? plain)
*/
EverCrypt_AEAD_error_code
EverCrypt_AEAD_decrypt(
  Spec_AEAD_alg a,
  uint8_t *ek,
  uint8_t *iv,
  uint8_t *ad,
  uint32_t ad_len,
  uint8_t *cipher1,
  uint32_t cipher_len,
  uint8_t *tag,
  uint8_t *dst
)
{
  if (ek == NULL)
  {
    return EverCrypt_AEAD_InvalidKey;
  }
  else
  {
    switch (a)
    {
      case Spec_AEAD_AES128_GCM:
        {
          KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n", __FILE__, __LINE__, "");
          KRML_HOST_EXIT(255U);
          break;
        }
      case Spec_AEAD_AES256_GCM:
        {
          KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n", __FILE__, __LINE__, "");
          KRML_HOST_EXIT(255U);
          break;
        }
      case Spec_AEAD_CHACHA20_POLY1305:
        {
          uint8_t tmp[32U] = { 0U };
          memcpy(tmp, ek, (uint32_t)32U * sizeof ek[0U]);
          uint32_t
          r =
            Hacl_Impl_Chacha20Poly1305_aead_decrypt_chacha_poly(tmp,
              iv,
              ad_len,
              ad,
              cipher_len,
              dst,
              cipher1,
              tag);
          if (r == (uint32_t)0U)
          {
            return EverCrypt_AEAD_Success;
          }
          else
          {
            return EverCrypt_AEAD_Failure;
          }
          break;
        }
      default:
        {
          KRML_HOST_PRINTF("KreMLin incomplete match at %s:%d\n", __FILE__, __LINE__);
          KRML_HOST_EXIT(253U);
        }
    }
  }
}

