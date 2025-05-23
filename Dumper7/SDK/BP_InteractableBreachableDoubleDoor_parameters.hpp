#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableBreachableDoubleDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractableBreachableDoubleDoor.BP_InteractableBreachableDoubleDoor_C.ExecuteUbergraph_BP_InteractableBreachableDoubleDoor
// 0x000C (0x000C - 0x0000)
struct BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_breached;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor) == 0x000004, "Wrong alignment on BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor");
static_assert(sizeof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor) == 0x00000C, "Wrong size on BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, EntryPoint) == 0x000000, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, Temp_bool_Variable) == 0x000004, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, Temp_byte_Variable) == 0x000005, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, Temp_byte_Variable_1) == 0x000006, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, K2Node_Event_breached) == 0x000007, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::K2Node_Event_breached' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, K2Node_Select_Default) == 0x000008, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BP_InteractableBreachableDoubleDoor_C_ExecuteUbergraph_BP_InteractableBreachableDoubleDoor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_InteractableBreachableDoubleDoor.BP_InteractableBreachableDoubleDoor_C.setBreachedMeshVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility final
{
public:
	bool                                          breached;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility) == 0x000001, "Wrong alignment on BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility");
static_assert(sizeof(BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility) == 0x000001, "Wrong size on BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility");
static_assert(offsetof(BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility, breached) == 0x000000, "Member 'BP_InteractableBreachableDoubleDoor_C_SetBreachedMeshVisibility::breached' has a wrong offset!");

}

