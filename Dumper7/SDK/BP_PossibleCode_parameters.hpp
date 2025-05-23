#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PossibleCode

#include "Basic.hpp"

#include "S_CodePacket_structs.hpp"


namespace SDK::Params
{

// Function BP_PossibleCode.BP_PossibleCode_C.ExecuteUbergraph_BP_PossibleCode
// 0x001C (0x001C - 0x0000)
struct BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TrueCode;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RandomCode;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bShowTrueCode;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_CodePacket                          K2Node_MakeStruct_S_CodePacket;                    // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode) == 0x000004, "Wrong alignment on BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode");
static_assert(sizeof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode) == 0x00001C, "Wrong size on BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode");
static_assert(offsetof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode, EntryPoint) == 0x000000, "Member 'BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode, K2Node_CustomEvent_TrueCode) == 0x000004, "Member 'BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode::K2Node_CustomEvent_TrueCode' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode, K2Node_CustomEvent_RandomCode) == 0x000008, "Member 'BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode::K2Node_CustomEvent_RandomCode' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode, K2Node_CustomEvent_bShowTrueCode) == 0x00000C, "Member 'BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode::K2Node_CustomEvent_bShowTrueCode' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode, CallFunc_BooleanOR_ReturnValue) == 0x00000D, "Member 'BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode, K2Node_MakeStruct_S_CodePacket) == 0x000010, "Member 'BP_PossibleCode_C_ExecuteUbergraph_BP_PossibleCode::K2Node_MakeStruct_S_CodePacket' has a wrong offset!");

// Function BP_PossibleCode.BP_PossibleCode_C.ShowCode
// 0x000C (0x000C - 0x0000)
struct BP_PossibleCode_C_ShowCode final
{
public:
	int32                                         TrueCode;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomCode;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowTrueCode;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PossibleCode_C_ShowCode) == 0x000004, "Wrong alignment on BP_PossibleCode_C_ShowCode");
static_assert(sizeof(BP_PossibleCode_C_ShowCode) == 0x00000C, "Wrong size on BP_PossibleCode_C_ShowCode");
static_assert(offsetof(BP_PossibleCode_C_ShowCode, TrueCode) == 0x000000, "Member 'BP_PossibleCode_C_ShowCode::TrueCode' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ShowCode, RandomCode) == 0x000004, "Member 'BP_PossibleCode_C_ShowCode::RandomCode' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_ShowCode, bShowTrueCode) == 0x000008, "Member 'BP_PossibleCode_C_ShowCode::bShowTrueCode' has a wrong offset!");

// Function BP_PossibleCode.BP_PossibleCode_C.OnRep_CodePacket
// 0x0028 (0x0028 - 0x0000)
struct BP_PossibleCode_C_OnRep_CodePacket final
{
public:
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_KeypadUVLightPossibleCode_C*       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_KeypadUVLightPossibleCode_C*       K2Node_DynamicCast_AsWBP_Keypad_UVLight_Possible_Code; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PossibleCode_C_OnRep_CodePacket) == 0x000008, "Wrong alignment on BP_PossibleCode_C_OnRep_CodePacket");
static_assert(sizeof(BP_PossibleCode_C_OnRep_CodePacket) == 0x000028, "Wrong size on BP_PossibleCode_C_OnRep_CodePacket");
static_assert(offsetof(BP_PossibleCode_C_OnRep_CodePacket, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000000, "Member 'BP_PossibleCode_C_OnRep_CodePacket::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_OnRep_CodePacket, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_PossibleCode_C_OnRep_CodePacket::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_OnRep_CodePacket, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000010, "Member 'BP_PossibleCode_C_OnRep_CodePacket::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_OnRep_CodePacket, K2Node_DynamicCast_AsWBP_Keypad_UVLight_Possible_Code) == 0x000018, "Member 'BP_PossibleCode_C_OnRep_CodePacket::K2Node_DynamicCast_AsWBP_Keypad_UVLight_Possible_Code' has a wrong offset!");
static_assert(offsetof(BP_PossibleCode_C_OnRep_CodePacket, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PossibleCode_C_OnRep_CodePacket::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

