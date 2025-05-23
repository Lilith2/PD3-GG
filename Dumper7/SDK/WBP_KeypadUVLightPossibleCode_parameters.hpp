#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeypadUVLightPossibleCode

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_KeypadUVLightPossibleCode.WBP_KeypadUVLightPossibleCode_C.SetKeypad
// 0x0018 (0x0018 - 0x0000)
struct WBP_KeypadUVLightPossibleCode_C_SetKeypad final
{
public:
	int32                                         TrueCode;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomCode;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowTrueCode;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempKod;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeypadUVLightPossibleCode_C_SetKeypad) == 0x000004, "Wrong alignment on WBP_KeypadUVLightPossibleCode_C_SetKeypad");
static_assert(sizeof(WBP_KeypadUVLightPossibleCode_C_SetKeypad) == 0x000018, "Wrong size on WBP_KeypadUVLightPossibleCode_C_SetKeypad");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetKeypad, TrueCode) == 0x000000, "Member 'WBP_KeypadUVLightPossibleCode_C_SetKeypad::TrueCode' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetKeypad, RandomCode) == 0x000004, "Member 'WBP_KeypadUVLightPossibleCode_C_SetKeypad::RandomCode' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetKeypad, ShowTrueCode) == 0x000008, "Member 'WBP_KeypadUVLightPossibleCode_C_SetKeypad::ShowTrueCode' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetKeypad, TempKod) == 0x00000C, "Member 'WBP_KeypadUVLightPossibleCode_C_SetKeypad::TempKod' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetKeypad, Temp_bool_Variable) == 0x000010, "Member 'WBP_KeypadUVLightPossibleCode_C_SetKeypad::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetKeypad, K2Node_Select_Default) == 0x000014, "Member 'WBP_KeypadUVLightPossibleCode_C_SetKeypad::K2Node_Select_Default' has a wrong offset!");

// Function WBP_KeypadUVLightPossibleCode.WBP_KeypadUVLightPossibleCode_C.SetText
// 0x0020 (0x0020 - 0x0000)
struct WBP_KeypadUVLightPossibleCode_C_SetText final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_KeypadUVLightPossibleCode_C_SetText) == 0x000008, "Wrong alignment on WBP_KeypadUVLightPossibleCode_C_SetText");
static_assert(sizeof(WBP_KeypadUVLightPossibleCode_C_SetText) == 0x000020, "Wrong size on WBP_KeypadUVLightPossibleCode_C_SetText");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetText, Value) == 0x000000, "Member 'WBP_KeypadUVLightPossibleCode_C_SetText::Value' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightPossibleCode_C_SetText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_KeypadUVLightPossibleCode_C_SetText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

