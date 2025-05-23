#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseShutterDisplayCase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BaseShutterDisplayCase.BP_BaseShutterDisplayCase_C.ExecuteUbergraph_BP_BaseShutterDisplayCase
// 0x0020 (0x0020 - 0x0000)
struct BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoCosmetics;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZDisplayCaseState                          K2Node_Event_OldState;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZDisplayCaseState                          K2Node_Event_NewState;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoCosmetics_1;                       // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase) == 0x000004, "Wrong alignment on BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase");
static_assert(sizeof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase) == 0x000020, "Wrong size on BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, EntryPoint) == 0x000000, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, K2Node_Event_bDoCosmetics) == 0x000004, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::K2Node_Event_bDoCosmetics' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, K2Node_Event_OldState) == 0x000005, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::K2Node_Event_OldState' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, K2Node_Event_NewState) == 0x000006, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, K2Node_Event_bDoCosmetics_1) == 0x000007, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::K2Node_Event_bDoCosmetics_1' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00000C, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, CallFunc_PostEventAtLocation_ReturnValue) == 0x000018, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001C, "Member 'BP_BaseShutterDisplayCase_C_ExecuteUbergraph_BP_BaseShutterDisplayCase::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_BaseShutterDisplayCase.BP_BaseShutterDisplayCase_C.BP_OnGlassBroken
// 0x0001 (0x0001 - 0x0000)
struct BP_BaseShutterDisplayCase_C_BP_OnGlassBroken final
{
public:
	bool                                          bDoCosmetics;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BaseShutterDisplayCase_C_BP_OnGlassBroken) == 0x000001, "Wrong alignment on BP_BaseShutterDisplayCase_C_BP_OnGlassBroken");
static_assert(sizeof(BP_BaseShutterDisplayCase_C_BP_OnGlassBroken) == 0x000001, "Wrong size on BP_BaseShutterDisplayCase_C_BP_OnGlassBroken");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_BP_OnGlassBroken, bDoCosmetics) == 0x000000, "Member 'BP_BaseShutterDisplayCase_C_BP_OnGlassBroken::bDoCosmetics' has a wrong offset!");

// Function BP_BaseShutterDisplayCase.BP_BaseShutterDisplayCase_C.BP_OnStateChanged
// 0x0003 (0x0003 - 0x0000)
struct BP_BaseShutterDisplayCase_C_BP_OnStateChanged final
{
public:
	ESBZDisplayCaseState                          OldState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZDisplayCaseState                          NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoCosmetics;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BaseShutterDisplayCase_C_BP_OnStateChanged) == 0x000001, "Wrong alignment on BP_BaseShutterDisplayCase_C_BP_OnStateChanged");
static_assert(sizeof(BP_BaseShutterDisplayCase_C_BP_OnStateChanged) == 0x000003, "Wrong size on BP_BaseShutterDisplayCase_C_BP_OnStateChanged");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_BP_OnStateChanged, OldState) == 0x000000, "Member 'BP_BaseShutterDisplayCase_C_BP_OnStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_BP_OnStateChanged, NewState) == 0x000001, "Member 'BP_BaseShutterDisplayCase_C_BP_OnStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_BP_OnStateChanged, bDoCosmetics) == 0x000002, "Member 'BP_BaseShutterDisplayCase_C_BP_OnStateChanged::bDoCosmetics' has a wrong offset!");

// Function BP_BaseShutterDisplayCase.BP_BaseShutterDisplayCase_C.EnableShutter
// 0x0005 (0x0005 - 0x0000)
struct BP_BaseShutterDisplayCase_C_EnableShutter final
{
public:
	bool                                          bInEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BaseShutterDisplayCase_C_EnableShutter) == 0x000001, "Wrong alignment on BP_BaseShutterDisplayCase_C_EnableShutter");
static_assert(sizeof(BP_BaseShutterDisplayCase_C_EnableShutter) == 0x000005, "Wrong size on BP_BaseShutterDisplayCase_C_EnableShutter");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_EnableShutter, bInEnable) == 0x000000, "Member 'BP_BaseShutterDisplayCase_C_EnableShutter::bInEnable' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_EnableShutter, Temp_bool_Variable) == 0x000001, "Member 'BP_BaseShutterDisplayCase_C_EnableShutter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_EnableShutter, Temp_byte_Variable) == 0x000002, "Member 'BP_BaseShutterDisplayCase_C_EnableShutter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_EnableShutter, Temp_byte_Variable_1) == 0x000003, "Member 'BP_BaseShutterDisplayCase_C_EnableShutter::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BaseShutterDisplayCase_C_EnableShutter, K2Node_Select_Default) == 0x000004, "Member 'BP_BaseShutterDisplayCase_C_EnableShutter::K2Node_Select_Default' has a wrong offset!");

}

