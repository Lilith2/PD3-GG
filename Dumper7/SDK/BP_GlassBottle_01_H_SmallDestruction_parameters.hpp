#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlassBottle_01_H_SmallDestruction

#include "Basic.hpp"

#include "Starbreeze_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_GlassBottle_01_H_SmallDestruction.BP_GlassBottle_01_H_SmallDestruction_C.ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction
// 0x0050 (0x0050 - 0x0000)
struct BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZCosmeticDestructionType                   K2Node_ComponentBoundEvent_Type;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZCosmeticDestructionContext         K2Node_ComponentBoundEvent_HitContext;             // 0x0008(0x0030)(ConstParm, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction) == 0x000008, "Wrong alignment on BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction");
static_assert(sizeof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction) == 0x000050, "Wrong size on BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction, EntryPoint) == 0x000000, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction, K2Node_ComponentBoundEvent_Type) == 0x000005, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction, K2Node_ComponentBoundEvent_HitContext) == 0x000008, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction::K2Node_ComponentBoundEvent_HitContext' has a wrong offset!");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000048, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_ExecuteUbergraph_BP_GlassBottle_01_H_SmallDestruction::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_GlassBottle_01_H_SmallDestruction.BP_GlassBottle_01_H_SmallDestruction_C.BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature
// 0x0034 (0x0034 - 0x0000)
struct BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature final
{
public:
	ESBZCosmeticDestructionType                   Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZCosmeticDestructionContext         HitContext;                                        // 0x0004(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature) == 0x000004, "Wrong alignment on BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature");
static_assert(sizeof(BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature) == 0x000034, "Wrong size on BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature, Type) == 0x000000, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature::Type' has a wrong offset!");
static_assert(offsetof(BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature, HitContext) == 0x000004, "Member 'BP_GlassBottle_01_H_SmallDestruction_C_BndEvt__BP_SmallDestruction_GlassBottle_01_H_SBZCosmeticDestruction_K2Node_ComponentBoundEvent_0_SBZCosmeticDestructionComponenteSignature__DelegateSignature::HitContext' has a wrong offset!");

}

