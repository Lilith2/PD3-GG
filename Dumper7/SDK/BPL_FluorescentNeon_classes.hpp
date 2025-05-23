#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_FluorescentNeon

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_FluorescentNeon.BPL_FluorescentNeon_C
// 0x0030 (0x02D8 - 0x02A8)
class ABPL_FluorescentNeon_C final : public AActor
{
public:
	class UPointLightComponent*                   PointLight_1;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_Fluorescent_01_Cable;                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LGT_DeskLamp_02;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_FluorescentNeon_C">();
	}
	static class ABPL_FluorescentNeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPL_FluorescentNeon_C>();
	}
};
static_assert(alignof(ABPL_FluorescentNeon_C) == 0x000008, "Wrong alignment on ABPL_FluorescentNeon_C");
static_assert(sizeof(ABPL_FluorescentNeon_C) == 0x0002D8, "Wrong size on ABPL_FluorescentNeon_C");
static_assert(offsetof(ABPL_FluorescentNeon_C, PointLight_1) == 0x0002A8, "Member 'ABPL_FluorescentNeon_C::PointLight_1' has a wrong offset!");
static_assert(offsetof(ABPL_FluorescentNeon_C, SpotLight) == 0x0002B0, "Member 'ABPL_FluorescentNeon_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABPL_FluorescentNeon_C, PointLight) == 0x0002B8, "Member 'ABPL_FluorescentNeon_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABPL_FluorescentNeon_C, LGT_Fluorescent_01_Cable) == 0x0002C0, "Member 'ABPL_FluorescentNeon_C::LGT_Fluorescent_01_Cable' has a wrong offset!");
static_assert(offsetof(ABPL_FluorescentNeon_C, LGT_DeskLamp_02) == 0x0002C8, "Member 'ABPL_FluorescentNeon_C::LGT_DeskLamp_02' has a wrong offset!");
static_assert(offsetof(ABPL_FluorescentNeon_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABPL_FluorescentNeon_C::DefaultSceneRoot' has a wrong offset!");

}

