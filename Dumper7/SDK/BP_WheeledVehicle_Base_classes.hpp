#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WheeledVehicle_Base

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WheeledVehicle_Base.BP_WheeledVehicle_Base_C
// 0x0010 (0x0710 - 0x0700)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_WheeledVehicle_Base_C : public ASBZWheeledVehicle
{
public:
	class UDecalComponent*                        AO_Decal;                                          // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SpawnPawns();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WheeledVehicle_Base_C">();
	}
	static class ABP_WheeledVehicle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WheeledVehicle_Base_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_WheeledVehicle_Base_C) == 0x000010, "Wrong alignment on ABP_WheeledVehicle_Base_C");
static_assert(sizeof(ABP_WheeledVehicle_Base_C) == 0x000710, "Wrong size on ABP_WheeledVehicle_Base_C");
static_assert(offsetof(ABP_WheeledVehicle_Base_C, AO_Decal) == 0x000700, "Member 'ABP_WheeledVehicle_Base_C::AO_Decal' has a wrong offset!");

}

