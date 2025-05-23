#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Helicopter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_Helicopter.ABP_Helicopter_C.ExecuteUbergraph_ABP_Helicopter
// 0x0028 (0x0028 - 0x0000)
struct ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateRotorYaw_New_Yaw;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateRotorYaw_New_Yaw_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter) == 0x000004, "Wrong alignment on ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter");
static_assert(sizeof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter) == 0x000028, "Wrong size on ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter");
static_assert(offsetof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter, EntryPoint) == 0x000000, "Member 'ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter, CallFunc_MakeRotator_ReturnValue_1) == 0x000010, "Member 'ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter, K2Node_Event_DeltaTimeX) == 0x00001C, "Member 'ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter, CallFunc_UpdateRotorYaw_New_Yaw) == 0x000020, "Member 'ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter::CallFunc_UpdateRotorYaw_New_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter, CallFunc_UpdateRotorYaw_New_Yaw_1) == 0x000024, "Member 'ABP_Helicopter_C_ExecuteUbergraph_ABP_Helicopter::CallFunc_UpdateRotorYaw_New_Yaw_1' has a wrong offset!");

// Function ABP_Helicopter.ABP_Helicopter_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Helicopter_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Helicopter_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Helicopter_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Helicopter_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Helicopter_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Helicopter_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Helicopter_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Helicopter.ABP_Helicopter_C.SetDoorState
// 0x0018 (0x0018 - 0x0000)
struct ABP_Helicopter_C_SetDoorState final
{
public:
	ESBZAerialVehicleDoor                         Door;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOpen;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayBuiltInAnimMontage_ReturnValue;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayBuiltInAnimMontage_ReturnValue_1;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayBuiltInAnimMontage_ReturnValue_2;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayBuiltInAnimMontage_ReturnValue_3;     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Helicopter_C_SetDoorState) == 0x000004, "Wrong alignment on ABP_Helicopter_C_SetDoorState");
static_assert(sizeof(ABP_Helicopter_C_SetDoorState) == 0x000018, "Wrong size on ABP_Helicopter_C_SetDoorState");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, Door) == 0x000000, "Member 'ABP_Helicopter_C_SetDoorState::Door' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, bIsOpen) == 0x000001, "Member 'ABP_Helicopter_C_SetDoorState::bIsOpen' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, CallFunc_PlayBuiltInAnimMontage_ReturnValue) == 0x000004, "Member 'ABP_Helicopter_C_SetDoorState::CallFunc_PlayBuiltInAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'ABP_Helicopter_C_SetDoorState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, CallFunc_PlayBuiltInAnimMontage_ReturnValue_1) == 0x00000C, "Member 'ABP_Helicopter_C_SetDoorState::CallFunc_PlayBuiltInAnimMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, CallFunc_PlayBuiltInAnimMontage_ReturnValue_2) == 0x000010, "Member 'ABP_Helicopter_C_SetDoorState::CallFunc_PlayBuiltInAnimMontage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_SetDoorState, CallFunc_PlayBuiltInAnimMontage_ReturnValue_3) == 0x000014, "Member 'ABP_Helicopter_C_SetDoorState::CallFunc_PlayBuiltInAnimMontage_ReturnValue_3' has a wrong offset!");

// Function ABP_Helicopter.ABP_Helicopter_C.UpdateRotorYaw
// 0x001C (0x001C - 0x0000)
struct ABP_Helicopter_C_UpdateRotorYaw final
{
public:
	float                                         Current_Yaw;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta_Time;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Yaw;                                           // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Helicopter_C_UpdateRotorYaw) == 0x000004, "Wrong alignment on ABP_Helicopter_C_UpdateRotorYaw");
static_assert(sizeof(ABP_Helicopter_C_UpdateRotorYaw) == 0x00001C, "Wrong size on ABP_Helicopter_C_UpdateRotorYaw");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, Current_Yaw) == 0x000000, "Member 'ABP_Helicopter_C_UpdateRotorYaw::Current_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, Speed) == 0x000004, "Member 'ABP_Helicopter_C_UpdateRotorYaw::Speed' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, Delta_Time) == 0x000008, "Member 'ABP_Helicopter_C_UpdateRotorYaw::Delta_Time' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, New_Yaw) == 0x00000C, "Member 'ABP_Helicopter_C_UpdateRotorYaw::New_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'ABP_Helicopter_C_UpdateRotorYaw::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'ABP_Helicopter_C_UpdateRotorYaw::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Helicopter_C_UpdateRotorYaw, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000018, "Member 'ABP_Helicopter_C_UpdateRotorYaw::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");

// Function ABP_Helicopter.ABP_Helicopter_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Helicopter_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Helicopter_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Helicopter_C_AnimGraph");
static_assert(sizeof(ABP_Helicopter_C_AnimGraph) == 0x000010, "Wrong size on ABP_Helicopter_C_AnimGraph");
static_assert(offsetof(ABP_Helicopter_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_Helicopter_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

