#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_LensWorkshop

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_LensWorkshop.BPL_LensWorkshop_C
// 0x0020 (0x02C8 - 0x02A8)
class ABPL_LensWorkshop_C final : public AActor
{
public:
	class UPointLightComponent*                   SmoothAmbiant;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    DownLight;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_DeskLamp_02;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_LensWorkshop_C">();
	}
	static class ABPL_LensWorkshop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPL_LensWorkshop_C>();
	}
};
static_assert(alignof(ABPL_LensWorkshop_C) == 0x000008, "Wrong alignment on ABPL_LensWorkshop_C");
static_assert(sizeof(ABPL_LensWorkshop_C) == 0x0002C8, "Wrong size on ABPL_LensWorkshop_C");
static_assert(offsetof(ABPL_LensWorkshop_C, SmoothAmbiant) == 0x0002A8, "Member 'ABPL_LensWorkshop_C::SmoothAmbiant' has a wrong offset!");
static_assert(offsetof(ABPL_LensWorkshop_C, DownLight) == 0x0002B0, "Member 'ABPL_LensWorkshop_C::DownLight' has a wrong offset!");
static_assert(offsetof(ABPL_LensWorkshop_C, LGT_DeskLamp_02) == 0x0002B8, "Member 'ABPL_LensWorkshop_C::LGT_DeskLamp_02' has a wrong offset!");
static_assert(offsetof(ABPL_LensWorkshop_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABPL_LensWorkshop_C::DefaultSceneRoot' has a wrong offset!");

}

