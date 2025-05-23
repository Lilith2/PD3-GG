#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WindowCleaningCradle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK::Params
{

// Function BP_WindowCleaningCradle.BP_WindowCleaningCradle_C.ExecuteUbergraph_BP_WindowCleaningCradle
// 0x0098 (0x0098 - 0x0000)
struct BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBZBagType*                      K2Node_ComponentBoundEvent_BagType;                // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0020(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_1;                            // 0x0038(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0048(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZTimerState                                K2Node_Event_NewState;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZTimerState                                K2Node_Event_OldState;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoCosmetics;                         // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x006C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_2;                            // 0x0080(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue_2;                // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle) == 0x000008, "Wrong alignment on BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle");
static_assert(sizeof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle) == 0x000098, "Wrong size on BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, EntryPoint) == 0x000000, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, K2Node_ComponentBoundEvent_BagType) == 0x000008, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::K2Node_ComponentBoundEvent_BagType' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, Temp_struct_Variable) == 0x000010, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, Temp_delegate_Variable) == 0x000020, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, Temp_struct_Variable_1) == 0x000038, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, Temp_delegate_Variable_1) == 0x000048, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, K2Node_Event_DeltaSeconds) == 0x00005C, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, K2Node_Event_NewState) == 0x000060, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, K2Node_Event_OldState) == 0x000061, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::K2Node_Event_OldState' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, K2Node_Event_bDoCosmetics) == 0x000062, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::K2Node_Event_bDoCosmetics' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, K2Node_SwitchEnum_CmpSuccess) == 0x000063, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, CallFunc_PostAkEvent_ReturnValue) == 0x000064, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, CallFunc_PostAkEvent_ReturnValue_1) == 0x000068, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, Temp_delegate_Variable_2) == 0x00006C, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, Temp_struct_Variable_2) == 0x000080, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle, CallFunc_PostAkEvent_ReturnValue_2) == 0x000090, "Member 'BP_WindowCleaningCradle_C_ExecuteUbergraph_BP_WindowCleaningCradle::CallFunc_PostAkEvent_ReturnValue_2' has a wrong offset!");

// Function BP_WindowCleaningCradle.BP_WindowCleaningCradle_C.BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature final
{
public:
	const class USBZBagType*                      BagType;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature");
static_assert(sizeof(BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature) == 0x000008, "Wrong size on BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature");
static_assert(offsetof(BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature, BagType) == 0x000000, "Member 'BP_WindowCleaningCradle_C_BndEvt__BP_EscapeVan_SBZSecuredBagVisualize_K2Node_ComponentBoundEvent_0_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature::BagType' has a wrong offset!");

// Function BP_WindowCleaningCradle.BP_WindowCleaningCradle_C.BP_OnStateChanged
// 0x0003 (0x0003 - 0x0000)
struct BP_WindowCleaningCradle_C_BP_OnStateChanged final
{
public:
	ESBZTimerState                                NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZTimerState                                OldState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoCosmetics;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WindowCleaningCradle_C_BP_OnStateChanged) == 0x000001, "Wrong alignment on BP_WindowCleaningCradle_C_BP_OnStateChanged");
static_assert(sizeof(BP_WindowCleaningCradle_C_BP_OnStateChanged) == 0x000003, "Wrong size on BP_WindowCleaningCradle_C_BP_OnStateChanged");
static_assert(offsetof(BP_WindowCleaningCradle_C_BP_OnStateChanged, NewState) == 0x000000, "Member 'BP_WindowCleaningCradle_C_BP_OnStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_BP_OnStateChanged, OldState) == 0x000001, "Member 'BP_WindowCleaningCradle_C_BP_OnStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_BP_OnStateChanged, bDoCosmetics) == 0x000002, "Member 'BP_WindowCleaningCradle_C_BP_OnStateChanged::bDoCosmetics' has a wrong offset!");

// Function BP_WindowCleaningCradle.BP_WindowCleaningCradle_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_WindowCleaningCradle_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WindowCleaningCradle_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_WindowCleaningCradle_C_ReceiveTick");
static_assert(sizeof(BP_WindowCleaningCradle_C_ReceiveTick) == 0x000004, "Wrong size on BP_WindowCleaningCradle_C_ReceiveTick");
static_assert(offsetof(BP_WindowCleaningCradle_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_WindowCleaningCradle_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_WindowCleaningCradle.BP_WindowCleaningCradle_C.SetPlatformLocation
// 0x00A0 (0x00A0 - 0x0000)
struct BP_WindowCleaningCradle_C_SetPlatformLocation final
{
public:
	float                                         CallFunc_GetProgressMade_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0010(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_WindowCleaningCradle_C_SetPlatformLocation) == 0x000004, "Wrong alignment on BP_WindowCleaningCradle_C_SetPlatformLocation");
static_assert(sizeof(BP_WindowCleaningCradle_C_SetPlatformLocation) == 0x0000A0, "Wrong size on BP_WindowCleaningCradle_C_SetPlatformLocation");
static_assert(offsetof(BP_WindowCleaningCradle_C_SetPlatformLocation, CallFunc_GetProgressMade_ReturnValue) == 0x000000, "Member 'BP_WindowCleaningCradle_C_SetPlatformLocation::CallFunc_GetProgressMade_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_SetPlatformLocation, CallFunc_VLerp_ReturnValue) == 0x000004, "Member 'BP_WindowCleaningCradle_C_SetPlatformLocation::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_SetPlatformLocation, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000010, "Member 'BP_WindowCleaningCradle_C_SetPlatformLocation::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_WindowCleaningCradle.BP_WindowCleaningCradle_C.ShowMarker
// 0x0008 (0x0008 - 0x0000)
struct BP_WindowCleaningCradle_C_ShowMarker final
{
public:
	int32                                         CallFunc_AddLocalMarker_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WindowCleaningCradle_C_ShowMarker) == 0x000004, "Wrong alignment on BP_WindowCleaningCradle_C_ShowMarker");
static_assert(sizeof(BP_WindowCleaningCradle_C_ShowMarker) == 0x000008, "Wrong size on BP_WindowCleaningCradle_C_ShowMarker");
static_assert(offsetof(BP_WindowCleaningCradle_C_ShowMarker, CallFunc_AddLocalMarker_ReturnValue) == 0x000000, "Member 'BP_WindowCleaningCradle_C_ShowMarker::CallFunc_AddLocalMarker_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WindowCleaningCradle_C_ShowMarker, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_WindowCleaningCradle_C_ShowMarker::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

