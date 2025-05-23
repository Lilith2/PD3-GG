#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SwatVan

#include "Basic.hpp"

#include "BP_WheeledVehicle_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SwatVan.BP_SwatVan_C
// 0x0000 (0x0710 - 0x0710)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_SwatVan_C : public ABP_WheeledVehicle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SwatVan_C">();
	}
	static class ABP_SwatVan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SwatVan_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_SwatVan_C) == 0x000010, "Wrong alignment on ABP_SwatVan_C");
static_assert(sizeof(ABP_SwatVan_C) == 0x000710, "Wrong size on ABP_SwatVan_C");

}

