#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FirstAidPack

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FirstAidPack.BP_FirstAidPack_C.ExecuteUbergraph_BP_FirstAidPack
// 0x08E0 (0x08E0 - 0x0000)
struct BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ChargesChangeTo;                      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoCosmetics;                         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0034(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x00C4(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x0154(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_3;  // 0x01E4(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_4;  // 0x0274(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_5;  // 0x0304(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_6;  // 0x0394(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_7;  // 0x0424(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_8;  // 0x04B4(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_9;  // 0x0544(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_10; // 0x05D4(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_11; // 0x0664(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_12; // 0x06F4(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_13; // 0x0784(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Temp_int_Variable_1;                               // 0x0814(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_819[0x7];                                      // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   K2Node_Select_Default;                             // 0x0820(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x0828(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x0829(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_3;      // 0x082A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_4;      // 0x082B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x082C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x082D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E[0x2];                                      // 0x082E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0830(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_834[0x4];                                      // 0x0834(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0838(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0848(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_14; // 0x084C(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack) == 0x000008, "Wrong alignment on BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack");
static_assert(sizeof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack) == 0x0008E0, "Wrong size on BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, EntryPoint) == 0x000000, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, Temp_delegate_Variable) == 0x000004, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, Temp_int_Variable) == 0x000018, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, Temp_object_Variable) == 0x000020, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, K2Node_Event_ChargesChangeTo) == 0x000028, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::K2Node_Event_ChargesChangeTo' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, K2Node_Event_bDoCosmetics) == 0x00002C, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::K2Node_Event_bDoCosmetics' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_FTrunc_ReturnValue) == 0x000030, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000034, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0000C4, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x000154, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_3) == 0x0001E4, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_3' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_4) == 0x000274, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_4' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_5) == 0x000304, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_5' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_6) == 0x000394, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_6' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_7) == 0x000424, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_7' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_8) == 0x0004B4, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_8' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_9) == 0x000544, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_9' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_10) == 0x0005D4, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_10' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_11) == 0x000664, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_11' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_12) == 0x0006F4, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_12' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_13) == 0x000784, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_13' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, Temp_int_Variable_1) == 0x000814, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000818, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, K2Node_Select_Default) == 0x000820, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_EqualEqual_FloatFloat_ReturnValue_1) == 0x000828, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_EqualEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_EqualEqual_FloatFloat_ReturnValue_2) == 0x000829, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_EqualEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_EqualEqual_FloatFloat_ReturnValue_3) == 0x00082A, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_EqualEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_EqualEqual_FloatFloat_ReturnValue_4) == 0x00082B, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_EqualEqual_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00082C, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00082D, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_Add_IntInt_ReturnValue) == 0x000830, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, Temp_struct_Variable) == 0x000838, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_PostEvent_ReturnValue) == 0x000848, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack, CallFunc_K2_SetRelativeLocation_SweepHitResult_14) == 0x00084C, "Member 'BP_FirstAidPack_C_ExecuteUbergraph_BP_FirstAidPack::CallFunc_K2_SetRelativeLocation_SweepHitResult_14' has a wrong offset!");

// Function BP_FirstAidPack.BP_FirstAidPack_C.OnChargesChanged
// 0x0008 (0x0008 - 0x0000)
struct BP_FirstAidPack_C_OnChargesChanged final
{
public:
	float                                         ChargesChangeTo;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoCosmetics;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FirstAidPack_C_OnChargesChanged) == 0x000004, "Wrong alignment on BP_FirstAidPack_C_OnChargesChanged");
static_assert(sizeof(BP_FirstAidPack_C_OnChargesChanged) == 0x000008, "Wrong size on BP_FirstAidPack_C_OnChargesChanged");
static_assert(offsetof(BP_FirstAidPack_C_OnChargesChanged, ChargesChangeTo) == 0x000000, "Member 'BP_FirstAidPack_C_OnChargesChanged::ChargesChangeTo' has a wrong offset!");
static_assert(offsetof(BP_FirstAidPack_C_OnChargesChanged, bDoCosmetics) == 0x000004, "Member 'BP_FirstAidPack_C_OnChargesChanged::bDoCosmetics' has a wrong offset!");

}

