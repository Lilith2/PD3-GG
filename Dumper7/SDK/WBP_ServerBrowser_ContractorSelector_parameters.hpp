#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerBrowser_ContractorSelector

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerBrowser_ContractorSelector.WBP_ServerBrowser_ContractorSelector_C.ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x0090)()
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x00A0(0x0010)(ReferenceParm)
	int32                                         K2Node_Event_InCurrentIndex;                       // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys_1;                          // 0x00B8(0x0010)(ReferenceParm)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D8(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0100(0x0090)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPaperSprite>            CallFunc_Map_Find_Value;                           // 0x01A0(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x01D4(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector) == 0x000008, "Wrong alignment on WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector");
static_assert(sizeof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector) == 0x0001F0, "Wrong size on WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, EntryPoint) == 0x000000, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, Temp_object_Variable) == 0x000008, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_Map_Keys_Keys) == 0x0000A0, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, K2Node_Event_InCurrentIndex) == 0x0000B0, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::K2Node_Event_InCurrentIndex' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_Map_Keys_Keys_1) == 0x0000B8, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, K2Node_CustomEvent_Loaded) == 0x0000C8, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, K2Node_MakeStruct_SlateColor) == 0x0000D8, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, K2Node_MakeStruct_SlateBrush_1) == 0x000100, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000190, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000198, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_Map_Find_Value) == 0x0001A0, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_Map_Find_ReturnValue) == 0x0001D0, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, K2Node_CreateDelegate_OutputDelegate) == 0x0001D4, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0001E8, "Member 'WBP_ServerBrowser_ContractorSelector_C_ExecuteUbergraph_WBP_ServerBrowser_ContractorSelector::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_ServerBrowser_ContractorSelector.WBP_ServerBrowser_ContractorSelector_C.OnSelectionOptionChanged
// 0x0004 (0x0004 - 0x0000)
struct WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged final
{
public:
	int32                                         InCurrentIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged) == 0x000004, "Wrong alignment on WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged");
static_assert(sizeof(WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged) == 0x000004, "Wrong size on WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged, InCurrentIndex) == 0x000000, "Member 'WBP_ServerBrowser_ContractorSelector_C_OnSelectionOptionChanged::InCurrentIndex' has a wrong offset!");

// Function WBP_ServerBrowser_ContractorSelector.WBP_ServerBrowser_ContractorSelector_C.OnLoaded_51F23A4943941A9E9DE1DBB426DE1827
// 0x0008 (0x0008 - 0x0000)
struct WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827) == 0x000008, "Wrong alignment on WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827");
static_assert(sizeof(WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827) == 0x000008, "Wrong size on WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827, Loaded) == 0x000000, "Member 'WBP_ServerBrowser_ContractorSelector_C_OnLoaded_51F23A4943941A9E9DE1DBB426DE1827::Loaded' has a wrong offset!");

// Function WBP_ServerBrowser_ContractorSelector.WBP_ServerBrowser_ContractorSelector_C.GetContractorName
// 0x0018 (0x0018 - 0x0000)
struct WBP_ServerBrowser_ContractorSelector_C_GetContractorName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WBP_ServerBrowser_ContractorSelector_C_GetContractorName) == 0x000008, "Wrong alignment on WBP_ServerBrowser_ContractorSelector_C_GetContractorName");
static_assert(sizeof(WBP_ServerBrowser_ContractorSelector_C_GetContractorName) == 0x000018, "Wrong size on WBP_ServerBrowser_ContractorSelector_C_GetContractorName");
static_assert(offsetof(WBP_ServerBrowser_ContractorSelector_C_GetContractorName, ReturnValue) == 0x000000, "Member 'WBP_ServerBrowser_ContractorSelector_C_GetContractorName::ReturnValue' has a wrong offset!");

}

