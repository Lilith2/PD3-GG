#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Moon_Gun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Moon_Gun.BP_Moon_Gun_C.ExecuteUbergraph_BP_Moon_Gun
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDelegateTimer* Timer, float ElapsedTime, float TimeSinceLast)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	const class UDelegateTimer*                   K2Node_CustomEvent_Timer_1;                        // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ElapsedTime_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSinceLast_1;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDelegateTimer*                         Temp_object_Variable;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDelegateTimer*                         CallFunc_CreateDelegateTimer_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDelegateTimer*                   K2Node_CustomEvent_Timer;                          // 0x0048(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ElapsedTime;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSinceLast;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDelegateTimer* Timer, float ElapsedTime, float TimeSinceLast)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0014)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable_2;                             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDelegateTimer*                         Temp_object_Variable_1;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDelegateTimer*                         CallFunc_CreateDelegateTimer_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x1];                                       // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun) == 0x000008, "Wrong alignment on BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun");
static_assert(sizeof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun) == 0x0000A0, "Wrong size on BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, EntryPoint) == 0x000000, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CustomEvent_Timer_1) == 0x000018, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CustomEvent_Timer_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CustomEvent_ElapsedTime_1) == 0x000020, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CustomEvent_ElapsedTime_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CustomEvent_TimeSinceLast_1) == 0x000024, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CustomEvent_TimeSinceLast_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, Temp_float_Variable) == 0x000028, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, Temp_float_Variable_1) == 0x00002C, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, Temp_object_Variable) == 0x000030, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_CreateDelegateTimer_ReturnValue) == 0x000038, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_CreateDelegateTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CustomEvent_Timer) == 0x000048, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CustomEvent_Timer' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CustomEvent_ElapsedTime) == 0x000050, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CustomEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CustomEvent_TimeSinceLast) == 0x000054, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CustomEvent_TimeSinceLast' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, Temp_float_Variable_2) == 0x00006C, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, Temp_float_Variable_3) == 0x000070, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000074, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, Temp_object_Variable_1) == 0x000078, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_CreateDelegateTimer_ReturnValue_1) == 0x000080, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_CreateDelegateTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_Less_FloatFloat_ReturnValue) == 0x000089, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_IsValid_ReturnValue_2) == 0x00008A, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_RandomUnitVector_ReturnValue) == 0x00008C, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_IsDedicatedServer_ReturnValue) == 0x000098, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000099, "Member 'BP_Moon_Gun_C_ExecuteUbergraph_BP_Moon_Gun::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");

// Function BP_Moon_Gun.BP_Moon_Gun_C.TickExec_51BB4EA443607F8BF71EA7893F95BCE5
// 0x0010 (0x0010 - 0x0000)
struct BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5 final
{
public:
	const class UDelegateTimer*                   Timer;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ElapsedTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeSinceLast;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5) == 0x000008, "Wrong alignment on BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5");
static_assert(sizeof(BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5) == 0x000010, "Wrong size on BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5");
static_assert(offsetof(BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5, Timer) == 0x000000, "Member 'BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5::Timer' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5, ElapsedTime) == 0x000008, "Member 'BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5::ElapsedTime' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5, TimeSinceLast) == 0x00000C, "Member 'BP_Moon_Gun_C_TickExec_51BB4EA443607F8BF71EA7893F95BCE5::TimeSinceLast' has a wrong offset!");

// Function BP_Moon_Gun.BP_Moon_Gun_C.TickExec_8EDFF4314BB4D040A4F521AAA5A56326
// 0x0010 (0x0010 - 0x0000)
struct BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326 final
{
public:
	const class UDelegateTimer*                   Timer;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ElapsedTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeSinceLast;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326) == 0x000008, "Wrong alignment on BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326");
static_assert(sizeof(BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326) == 0x000010, "Wrong size on BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326");
static_assert(offsetof(BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326, Timer) == 0x000000, "Member 'BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326::Timer' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326, ElapsedTime) == 0x000008, "Member 'BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326::ElapsedTime' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326, TimeSinceLast) == 0x00000C, "Member 'BP_Moon_Gun_C_TickExec_8EDFF4314BB4D040A4F521AAA5A56326::TimeSinceLast' has a wrong offset!");

// Function BP_Moon_Gun.BP_Moon_Gun_C.UserConstructionScript
// 0x0004 (0x0004 - 0x0000)
struct BP_Moon_Gun_C_UserConstructionScript final
{
public:
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Moon_Gun_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_Moon_Gun_C_UserConstructionScript");
static_assert(sizeof(BP_Moon_Gun_C_UserConstructionScript) == 0x000004, "Wrong size on BP_Moon_Gun_C_UserConstructionScript");
static_assert(offsetof(BP_Moon_Gun_C_UserConstructionScript, CallFunc_RandomFloat_ReturnValue) == 0x000000, "Member 'BP_Moon_Gun_C_UserConstructionScript::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");

// Function BP_Moon_Gun.BP_Moon_Gun_C.UpdateDeath
// 0x0064 (0x0064 - 0x0000)
struct BP_Moon_Gun_C_UpdateDeath final
{
public:
	float                                         ElapsedTimeSinceDeath;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LinearForce;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngularForce;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RandomVector;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeathTimeAlpha;                                    // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Moon_Gun_C_UpdateDeath) == 0x000004, "Wrong alignment on BP_Moon_Gun_C_UpdateDeath");
static_assert(sizeof(BP_Moon_Gun_C_UpdateDeath) == 0x000064, "Wrong size on BP_Moon_Gun_C_UpdateDeath");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, ElapsedTimeSinceDeath) == 0x000000, "Member 'BP_Moon_Gun_C_UpdateDeath::ElapsedTimeSinceDeath' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, LinearForce) == 0x000004, "Member 'BP_Moon_Gun_C_UpdateDeath::LinearForce' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, AngularForce) == 0x000008, "Member 'BP_Moon_Gun_C_UpdateDeath::AngularForce' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, Duration) == 0x00000C, "Member 'BP_Moon_Gun_C_UpdateDeath::Duration' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, RandomVector) == 0x000010, "Member 'BP_Moon_Gun_C_UpdateDeath::RandomVector' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, DeathTimeAlpha) == 0x00001C, "Member 'BP_Moon_Gun_C_UpdateDeath::DeathTimeAlpha' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_FClamp_ReturnValue) == 0x000024, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_MakeVector_ReturnValue) == 0x000030, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_Multiply_VectorVector_ReturnValue) == 0x00003C, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000048, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_GetUpVector_ReturnValue) == 0x00004C, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Moon_Gun_C_UpdateDeath, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000058, "Member 'BP_Moon_Gun_C_UpdateDeath::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

}

