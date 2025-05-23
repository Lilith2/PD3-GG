#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VaultDoor_Small

#include "Basic.hpp"

#include "Starbreeze_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VaultDoor_Small.BP_VaultDoor_Small_C.ExecuteUbergraph_BP_VaultDoor_Small
// 0x00E0 (0x00E0 - 0x0000)
struct BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBZBaseInteractableComponent*          K2Node_ComponentBoundEvent_Interactable_1;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZInteractorComponent*                K2Node_ComponentBoundEvent_Interactor_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsLocallyControlledInteractor_1; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZBaseInteractableComponent*          K2Node_ComponentBoundEvent_Interactable;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZInteractorComponent*                K2Node_ComponentBoundEvent_Interactor;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsLocallyControlledInteractor; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZGateState                                 K2Node_Event_OldState;                             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZGateState                                 K2Node_Event_NewState;                             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsInitialStateChange;                // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x004C(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small) == 0x000008, "Wrong alignment on BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small");
static_assert(sizeof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small) == 0x0000E0, "Wrong size on BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, EntryPoint) == 0x000000, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, Temp_byte_Variable) == 0x000008, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x00000C, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_Select_Default) == 0x000010, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, CallFunc_MakeRotator_ReturnValue) == 0x000014, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_ComponentBoundEvent_Interactable_1) == 0x000020, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_ComponentBoundEvent_Interactable_1' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_ComponentBoundEvent_Interactor_1) == 0x000028, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_ComponentBoundEvent_Interactor_1' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_ComponentBoundEvent_bIsLocallyControlledInteractor_1) == 0x000030, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_ComponentBoundEvent_bIsLocallyControlledInteractor_1' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_ComponentBoundEvent_Interactable) == 0x000038, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_ComponentBoundEvent_Interactable' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_ComponentBoundEvent_Interactor) == 0x000040, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_ComponentBoundEvent_Interactor' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_ComponentBoundEvent_bIsLocallyControlledInteractor) == 0x000048, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_ComponentBoundEvent_bIsLocallyControlledInteractor' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_Event_OldState) == 0x000049, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_Event_OldState' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_Event_NewState) == 0x00004A, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, K2Node_Event_bIsInitialStateChange) == 0x00004B, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::K2Node_Event_bIsInitialStateChange' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x00004C, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000DC, "Member 'BP_VaultDoor_Small_C_ExecuteUbergraph_BP_VaultDoor_Small::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_VaultDoor_Small.BP_VaultDoor_Small_C.OnStateChanged
// 0x0003 (0x0003 - 0x0000)
struct BP_VaultDoor_Small_C_OnStateChanged final
{
public:
	ESBZGateState                                 OldState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZGateState                                 NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInitialStateChange;                             // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VaultDoor_Small_C_OnStateChanged) == 0x000001, "Wrong alignment on BP_VaultDoor_Small_C_OnStateChanged");
static_assert(sizeof(BP_VaultDoor_Small_C_OnStateChanged) == 0x000003, "Wrong size on BP_VaultDoor_Small_C_OnStateChanged");
static_assert(offsetof(BP_VaultDoor_Small_C_OnStateChanged, OldState) == 0x000000, "Member 'BP_VaultDoor_Small_C_OnStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_OnStateChanged, NewState) == 0x000001, "Member 'BP_VaultDoor_Small_C_OnStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_OnStateChanged, bIsInitialStateChange) == 0x000002, "Member 'BP_VaultDoor_Small_C_OnStateChanged::bIsInitialStateChange' has a wrong offset!");

// Function BP_VaultDoor_Small.BP_VaultDoor_Small_C.BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature final
{
public:
	class USBZBaseInteractableComponent*          Interactable_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZInteractorComponent*                Interactor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLocallyControlledInteractor;                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature) == 0x000008, "Wrong alignment on BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature");
static_assert(sizeof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature) == 0x000018, "Wrong size on BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature");
static_assert(offsetof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature, Interactable_0) == 0x000000, "Member 'BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature::Interactable_0' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature, Interactor) == 0x000008, "Member 'BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature::Interactor' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature, bIsLocallyControlledInteractor) == 0x000010, "Member 'BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature::bIsLocallyControlledInteractor' has a wrong offset!");

// Function BP_VaultDoor_Small.BP_VaultDoor_Small_C.BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature final
{
public:
	class USBZBaseInteractableComponent*          Interactable_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZInteractorComponent*                Interactor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLocallyControlledInteractor;                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature) == 0x000008, "Wrong alignment on BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature");
static_assert(sizeof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature) == 0x000018, "Wrong size on BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature");
static_assert(offsetof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature, Interactable_0) == 0x000000, "Member 'BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature::Interactable_0' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature, Interactor) == 0x000008, "Member 'BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature::Interactor' has a wrong offset!");
static_assert(offsetof(BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature, bIsLocallyControlledInteractor) == 0x000010, "Member 'BP_VaultDoor_Small_C_BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature::bIsLocallyControlledInteractor' has a wrong offset!");

}

