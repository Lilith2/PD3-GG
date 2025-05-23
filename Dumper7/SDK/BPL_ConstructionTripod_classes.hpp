#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_ConstructionTripod

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_ConstructionTripod.BPL_ConstructionTripod_C
// 0x0060 (0x0308 - 0x02A8)
class ABPL_ConstructionTripod_C final : public AActor
{
public:
	class USpotLightComponent*                    MainLight_1;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight__2;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_1;                                      // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_ConstructionTripod_01_Spotlight_1;             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_ConstructionTripod_01_Bracket_1;               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_ConstructionTripod_01_Spotlight;               // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_ConstructionTripod_01_Bracket;                 // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Dynamioc;                                          // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    MainLight;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_DeskLamp_0_4;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_ConstructionTripod_C">();
	}
	static class ABPL_ConstructionTripod_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPL_ConstructionTripod_C>();
	}
};
static_assert(alignof(ABPL_ConstructionTripod_C) == 0x000008, "Wrong alignment on ABPL_ConstructionTripod_C");
static_assert(sizeof(ABPL_ConstructionTripod_C) == 0x000308, "Wrong size on ABPL_ConstructionTripod_C");
static_assert(offsetof(ABPL_ConstructionTripod_C, MainLight_1) == 0x0002A8, "Member 'ABPL_ConstructionTripod_C::MainLight_1' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, PointLight__2) == 0x0002B0, "Member 'ABPL_ConstructionTripod_C::PointLight__2' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, PointLight_1) == 0x0002B8, "Member 'ABPL_ConstructionTripod_C::PointLight_1' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, LGT_ConstructionTripod_01_Spotlight_1) == 0x0002C0, "Member 'ABPL_ConstructionTripod_C::LGT_ConstructionTripod_01_Spotlight_1' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, LGT_ConstructionTripod_01_Bracket_1) == 0x0002C8, "Member 'ABPL_ConstructionTripod_C::LGT_ConstructionTripod_01_Bracket_1' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, LGT_ConstructionTripod_01_Spotlight) == 0x0002D0, "Member 'ABPL_ConstructionTripod_C::LGT_ConstructionTripod_01_Spotlight' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, LGT_ConstructionTripod_01_Bracket) == 0x0002D8, "Member 'ABPL_ConstructionTripod_C::LGT_ConstructionTripod_01_Bracket' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, Dynamioc) == 0x0002E0, "Member 'ABPL_ConstructionTripod_C::Dynamioc' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, PointLight) == 0x0002E8, "Member 'ABPL_ConstructionTripod_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, MainLight) == 0x0002F0, "Member 'ABPL_ConstructionTripod_C::MainLight' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, LGT_DeskLamp_0_4) == 0x0002F8, "Member 'ABPL_ConstructionTripod_C::LGT_DeskLamp_0_4' has a wrong offset!");
static_assert(offsetof(ABPL_ConstructionTripod_C, DefaultSceneRoot) == 0x000300, "Member 'ABPL_ConstructionTripod_C::DefaultSceneRoot' has a wrong offset!");

}

