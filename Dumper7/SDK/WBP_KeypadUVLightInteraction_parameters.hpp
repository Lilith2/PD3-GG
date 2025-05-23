#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeypadUVLightInteraction

#include "Basic.hpp"

#include "E_CodeGuessedStatus_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_KeypadUVLightInteraction.WBP_KeypadUVLightInteraction_C.ExecuteUbergraph_WBP_KeypadUVLightInteraction
// 0x0010 (0x0010 - 0x0000)
struct WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_KeyPad_C*                           K2Node_CustomEvent_Keypad;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction) == 0x000008, "Wrong alignment on WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction");
static_assert(sizeof(WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction) == 0x000010, "Wrong size on WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction, EntryPoint) == 0x000000, "Member 'WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction, K2Node_CustomEvent_Keypad) == 0x000008, "Member 'WBP_KeypadUVLightInteraction_C_ExecuteUbergraph_WBP_KeypadUVLightInteraction::K2Node_CustomEvent_Keypad' has a wrong offset!");

// Function WBP_KeypadUVLightInteraction.WBP_KeypadUVLightInteraction_C.SetKeypad
// 0x0008 (0x0008 - 0x0000)
struct WBP_KeypadUVLightInteraction_C_SetKeypad final
{
public:
	class ABP_KeyPad_C*                           Keypad_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeypadUVLightInteraction_C_SetKeypad) == 0x000008, "Wrong alignment on WBP_KeypadUVLightInteraction_C_SetKeypad");
static_assert(sizeof(WBP_KeypadUVLightInteraction_C_SetKeypad) == 0x000008, "Wrong size on WBP_KeypadUVLightInteraction_C_SetKeypad");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_SetKeypad, Keypad_0) == 0x000000, "Member 'WBP_KeypadUVLightInteraction_C_SetKeypad::Keypad_0' has a wrong offset!");

// Function WBP_KeypadUVLightInteraction.WBP_KeypadUVLightInteraction_C.Get_CodeText_Text_0
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 String;                                            // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0) == 0x000008, "Wrong alignment on WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0");
static_assert(sizeof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0) == 0x0000A8, "Wrong size on WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, ReturnValue) == 0x000000, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, String) == 0x000018, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::String' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, Temp_int_Variable) == 0x000028, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000034, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000038, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_FTrunc_ReturnValue) == 0x000040, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Divide_IntInt_ReturnValue) == 0x000048, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Percent_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, Temp_int_Variable_1) == 0x000060, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000080, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000088, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'WBP_KeypadUVLightInteraction_C_Get_CodeText_Text_0::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function WBP_KeypadUVLightInteraction.WBP_KeypadUVLightInteraction_C.GetBrushColor_0
// 0x0054 (0x0054 - 0x0000)
struct WBP_KeypadUVLightInteraction_C_GetBrushColor_0 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_CodeGuessedStatus                           Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0) == 0x000004, "Wrong alignment on WBP_KeypadUVLightInteraction_C_GetBrushColor_0");
static_assert(sizeof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0) == 0x000054, "Wrong size on WBP_KeypadUVLightInteraction_C_GetBrushColor_0");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, ReturnValue) == 0x000000, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, Temp_struct_Variable) == 0x000010, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, Temp_struct_Variable_1) == 0x000020, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, Temp_struct_Variable_2) == 0x000030, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, Temp_byte_Variable) == 0x000041, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_KeypadUVLightInteraction_C_GetBrushColor_0, K2Node_Select_Default) == 0x000044, "Member 'WBP_KeypadUVLightInteraction_C_GetBrushColor_0::K2Node_Select_Default' has a wrong offset!");

}

