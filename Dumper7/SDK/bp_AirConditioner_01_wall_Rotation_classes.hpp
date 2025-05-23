#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_AirConditioner_01_wall_Rotation

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass bp_AirConditioner_01_wall_Rotation.bp_AirConditioner_01_wall_Rotation_C
// 0x0020 (0x02C8 - 0x02A8)
class Abp_AirConditioner_01_wall_Rotation_C final : public AActor
{
public:
	class UStaticMeshComponent*                   AirConditioner_01_wall;                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Area2_rotation_speed;                              // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Vibration_speed;                                   // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Vibration_strenght;                                // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_AirConditioner_01_wall_Rotation_C">();
	}
	static class Abp_AirConditioner_01_wall_Rotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abp_AirConditioner_01_wall_Rotation_C>();
	}
};
static_assert(alignof(Abp_AirConditioner_01_wall_Rotation_C) == 0x000008, "Wrong alignment on Abp_AirConditioner_01_wall_Rotation_C");
static_assert(sizeof(Abp_AirConditioner_01_wall_Rotation_C) == 0x0002C8, "Wrong size on Abp_AirConditioner_01_wall_Rotation_C");
static_assert(offsetof(Abp_AirConditioner_01_wall_Rotation_C, AirConditioner_01_wall) == 0x0002A8, "Member 'Abp_AirConditioner_01_wall_Rotation_C::AirConditioner_01_wall' has a wrong offset!");
static_assert(offsetof(Abp_AirConditioner_01_wall_Rotation_C, DefaultSceneRoot) == 0x0002B0, "Member 'Abp_AirConditioner_01_wall_Rotation_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(Abp_AirConditioner_01_wall_Rotation_C, Area2_rotation_speed) == 0x0002B8, "Member 'Abp_AirConditioner_01_wall_Rotation_C::Area2_rotation_speed' has a wrong offset!");
static_assert(offsetof(Abp_AirConditioner_01_wall_Rotation_C, Vibration_speed) == 0x0002BC, "Member 'Abp_AirConditioner_01_wall_Rotation_C::Vibration_speed' has a wrong offset!");
static_assert(offsetof(Abp_AirConditioner_01_wall_Rotation_C, Vibration_strenght) == 0x0002C0, "Member 'Abp_AirConditioner_01_wall_Rotation_C::Vibration_strenght' has a wrong offset!");

}

