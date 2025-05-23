#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmallArtDisplayCase

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SmallArtDisplayCase.BP_SmallArtDisplayCase_C.ExecuteUbergraph_BP_SmallArtDisplayCase
// 0x0120 (0x0120 - 0x0000)
struct BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_1;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0040(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_2;                            // 0x0058(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x0068(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	ESBZDisplayCaseState                          K2Node_Event_OldState;                             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZDisplayCaseState                          K2Node_Event_NewState;                             // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoCosmetics;                         // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F[0x1];                                       // 0x007F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0080(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_2;                // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase) == 0x000008, "Wrong alignment on BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase");
static_assert(sizeof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase) == 0x000120, "Wrong size on BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, EntryPoint) == 0x000000, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, Temp_struct_Variable) == 0x000008, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, Temp_delegate_Variable) == 0x000018, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, Temp_struct_Variable_1) == 0x000030, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, Temp_delegate_Variable_1) == 0x000040, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, Temp_struct_Variable_2) == 0x000058, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, Temp_delegate_Variable_2) == 0x000068, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, K2Node_Event_OldState) == 0x00007C, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::K2Node_Event_OldState' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, K2Node_Event_NewState) == 0x00007D, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, K2Node_Event_bDoCosmetics) == 0x00007E, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::K2Node_Event_bDoCosmetics' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000080, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, K2Node_SwitchEnum_CmpSuccess) == 0x000110, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, CallFunc_PostAkEvent_ReturnValue) == 0x000114, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, CallFunc_PostAkEvent_ReturnValue_1) == 0x000118, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase, CallFunc_PostAkEvent_ReturnValue_2) == 0x00011C, "Member 'BP_SmallArtDisplayCase_C_ExecuteUbergraph_BP_SmallArtDisplayCase::CallFunc_PostAkEvent_ReturnValue_2' has a wrong offset!");

// Function BP_SmallArtDisplayCase.BP_SmallArtDisplayCase_C.BP_OnStateChanged
// 0x0003 (0x0003 - 0x0000)
struct BP_SmallArtDisplayCase_C_BP_OnStateChanged final
{
public:
	ESBZDisplayCaseState                          OldState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZDisplayCaseState                          NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoCosmetics;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SmallArtDisplayCase_C_BP_OnStateChanged) == 0x000001, "Wrong alignment on BP_SmallArtDisplayCase_C_BP_OnStateChanged");
static_assert(sizeof(BP_SmallArtDisplayCase_C_BP_OnStateChanged) == 0x000003, "Wrong size on BP_SmallArtDisplayCase_C_BP_OnStateChanged");
static_assert(offsetof(BP_SmallArtDisplayCase_C_BP_OnStateChanged, OldState) == 0x000000, "Member 'BP_SmallArtDisplayCase_C_BP_OnStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_BP_OnStateChanged, NewState) == 0x000001, "Member 'BP_SmallArtDisplayCase_C_BP_OnStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_BP_OnStateChanged, bDoCosmetics) == 0x000002, "Member 'BP_SmallArtDisplayCase_C_BP_OnStateChanged::bDoCosmetics' has a wrong offset!");

// Function BP_SmallArtDisplayCase.BP_SmallArtDisplayCase_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct BP_SmallArtDisplayCase_C_UserConstructionScript final
{
public:
	float                                         CallFunc_BreakColor_R;                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SmallArtDisplayCase_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_SmallArtDisplayCase_C_UserConstructionScript");
static_assert(sizeof(BP_SmallArtDisplayCase_C_UserConstructionScript) == 0x000010, "Wrong size on BP_SmallArtDisplayCase_C_UserConstructionScript");
static_assert(offsetof(BP_SmallArtDisplayCase_C_UserConstructionScript, CallFunc_BreakColor_R) == 0x000000, "Member 'BP_SmallArtDisplayCase_C_UserConstructionScript::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_UserConstructionScript, CallFunc_BreakColor_G) == 0x000004, "Member 'BP_SmallArtDisplayCase_C_UserConstructionScript::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_UserConstructionScript, CallFunc_BreakColor_B) == 0x000008, "Member 'BP_SmallArtDisplayCase_C_UserConstructionScript::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_SmallArtDisplayCase_C_UserConstructionScript, CallFunc_BreakColor_A) == 0x00000C, "Member 'BP_SmallArtDisplayCase_C_UserConstructionScript::CallFunc_BreakColor_A' has a wrong offset!");

}

