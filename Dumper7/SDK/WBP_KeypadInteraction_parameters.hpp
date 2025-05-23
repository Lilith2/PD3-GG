#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeypadInteraction

#include "Basic.hpp"

#include "Starbreeze_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_KeypadInteraction.WBP_KeypadInteraction_C.SetCodeText
// 0x0018 (0x0018 - 0x0000)
struct WBP_KeypadInteraction_C_SetCodeText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_KeypadInteraction_C_SetCodeText) == 0x000008, "Wrong alignment on WBP_KeypadInteraction_C_SetCodeText");
static_assert(sizeof(WBP_KeypadInteraction_C_SetCodeText) == 0x000018, "Wrong size on WBP_KeypadInteraction_C_SetCodeText");
static_assert(offsetof(WBP_KeypadInteraction_C_SetCodeText, InText) == 0x000000, "Member 'WBP_KeypadInteraction_C_SetCodeText::InText' has a wrong offset!");

// Function WBP_KeypadInteraction.WBP_KeypadInteraction_C.SetBackgroundColor
// 0x0074 (0x0074 - 0x0000)
struct WBP_KeypadInteraction_C_SetBackgroundColor final
{
public:
	ESBZModuleActorState                          CurrentState;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeypadInteraction_C_SetBackgroundColor) == 0x000004, "Wrong alignment on WBP_KeypadInteraction_C_SetBackgroundColor");
static_assert(sizeof(WBP_KeypadInteraction_C_SetBackgroundColor) == 0x000074, "Wrong size on WBP_KeypadInteraction_C_SetBackgroundColor");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, CurrentState) == 0x000000, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::CurrentState' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_byte_Variable) == 0x000001, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_struct_Variable) == 0x000004, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_struct_Variable_1) == 0x000014, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_struct_Variable_2) == 0x000024, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_struct_Variable_3) == 0x000034, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_struct_Variable_4) == 0x000044, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, Temp_struct_Variable_5) == 0x000054, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_KeypadInteraction_C_SetBackgroundColor, K2Node_Select_Default) == 0x000064, "Member 'WBP_KeypadInteraction_C_SetBackgroundColor::K2Node_Select_Default' has a wrong offset!");

}

