#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SM_ActionPhaseTransition

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_UI_SM_ActionPhaseTransition.WBP_UI_SM_ActionPhaseTransition_C.ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition
// 0x0068 (0x0068 - 0x0000)
struct WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapName_ReturnValue;                   // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPD3HeistDataAsset*                     CallFunc_GetHeistDataFromLevelShortName_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetHeistTimeShort_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0014)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition) == 0x000008, "Wrong alignment on WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition");
static_assert(sizeof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition) == 0x000068, "Wrong size on WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, EntryPoint) == 0x000000, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, CallFunc_GetMapName_ReturnValue) == 0x000008, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::CallFunc_GetMapName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, CallFunc_GetHeistDataFromLevelShortName_ReturnValue) == 0x000018, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::CallFunc_GetHeistDataFromLevelShortName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, CallFunc_GetHeistTimeShort_ReturnValue) == 0x000020, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::CallFunc_GetHeistTimeShort_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, CallFunc_PlayAnimationForward_ReturnValue) == 0x000050, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, K2Node_Event_IsDesignTime) == 0x000058, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000060, "Member 'WBP_UI_SM_ActionPhaseTransition_C_ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function WBP_UI_SM_ActionPhaseTransition.WBP_UI_SM_ActionPhaseTransition_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_SM_ActionPhaseTransition_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_SM_ActionPhaseTransition_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UI_SM_ActionPhaseTransition_C_PreConstruct");
static_assert(sizeof(WBP_UI_SM_ActionPhaseTransition_C_PreConstruct) == 0x000001, "Wrong size on WBP_UI_SM_ActionPhaseTransition_C_PreConstruct");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UI_SM_ActionPhaseTransition_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_UI_SM_ActionPhaseTransition.WBP_UI_SM_ActionPhaseTransition_C.DisplayTransition
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition) == 0x000008, "Wrong alignment on WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition");
static_assert(sizeof(WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition) == 0x000008, "Wrong size on WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition");
static_assert(offsetof(WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'WBP_UI_SM_ActionPhaseTransition_C_DisplayTransition::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

