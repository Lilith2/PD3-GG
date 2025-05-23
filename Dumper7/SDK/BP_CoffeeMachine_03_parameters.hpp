#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoffeeMachine_03

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_CoffeeMachine_03.BP_CoffeeMachine_03_C.ExecuteUbergraph_BP_CoffeeMachine_03
// 0x00E8 (0x00E8 - 0x0000)
struct BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	ESBZCosmeticDestructionType                   K2Node_ComponentBoundEvent_Type;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZCosmeticDestructionContext         K2Node_ComponentBoundEvent_HitContext;             // 0x0030(0x0030)(ConstParm, NoDestructor)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03) == 0x000008, "Wrong alignment on BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03");
static_assert(sizeof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03) == 0x0000E8, "Wrong size on BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, EntryPoint) == 0x000000, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, Temp_struct_Variable) == 0x000008, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, Temp_delegate_Variable) == 0x000018, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, K2Node_ComponentBoundEvent_Type) == 0x00002C, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, K2Node_ComponentBoundEvent_HitContext) == 0x000030, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::K2Node_ComponentBoundEvent_HitContext' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_PostEvent_ReturnValue) == 0x000060, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000064, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000070, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakRotator_Roll) == 0x00007C, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakRotator_Pitch) == 0x000080, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakRotator_Yaw) == 0x000084, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakVector_X) == 0x000088, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakVector_Y) == 0x00008C, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakVector_Z) == 0x000090, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_MakeRotator_ReturnValue) == 0x000094, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A0, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000A8, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000B0, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_MakeVector_ReturnValue) == 0x0000B4, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000C0, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakRotator_Roll_1) == 0x0000C4, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakRotator_Pitch_1) == 0x0000C8, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_BreakRotator_Yaw_1) == 0x0000CC, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0000D0, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_MakeRotator_ReturnValue_1) == 0x0000D4, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x0000E0, "Member 'BP_CoffeeMachine_03_C_ExecuteUbergraph_BP_CoffeeMachine_03::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");

// Function BP_CoffeeMachine_03.BP_CoffeeMachine_03_C.BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature
// 0x0034 (0x0034 - 0x0000)
struct BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature final
{
public:
	ESBZCosmeticDestructionType                   Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZCosmeticDestructionContext         HitContext;                                        // 0x0004(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature) == 0x000004, "Wrong alignment on BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature");
static_assert(sizeof(BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature) == 0x000034, "Wrong size on BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature");
static_assert(offsetof(BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature, Type) == 0x000000, "Member 'BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature::Type' has a wrong offset!");
static_assert(offsetof(BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature, HitContext) == 0x000004, "Member 'BP_CoffeeMachine_03_C_BndEvt__BP_CoffeeMachine_03_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature::HitContext' has a wrong offset!");

}

