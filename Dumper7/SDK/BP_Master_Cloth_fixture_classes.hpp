#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Master_Cloth_fixture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Master_Cloth_fixture.BP_Master_Cloth_Fixture_C
// 0x0090 (0x0338 - 0x02A8)
class ABP_Master_Cloth_Fixture_C : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Tint;                                              // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Pattern_Atas_cell;                                 // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tiling;                                            // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          R_Pattern;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Pattern_R_color;                                   // 0x02D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          G_Pattern;                                         // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Pattern_G_color;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          B_Pattern;                                         // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Pattern_B_color;                                   // 0x02FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          A_Pattern;                                         // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30D[0x3];                                      // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Pattern_A_color;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Wind_Vector;                                       // 0x0320(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wind_Speed;                                        // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wind_strength;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wind_strength_PixelShader;                         // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Master_Cloth_Fixture_C">();
	}
	static class ABP_Master_Cloth_Fixture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Master_Cloth_Fixture_C>();
	}
};
static_assert(alignof(ABP_Master_Cloth_Fixture_C) == 0x000008, "Wrong alignment on ABP_Master_Cloth_Fixture_C");
static_assert(sizeof(ABP_Master_Cloth_Fixture_C) == 0x000338, "Wrong size on ABP_Master_Cloth_Fixture_C");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, StaticMesh) == 0x0002A8, "Member 'ABP_Master_Cloth_Fixture_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_Master_Cloth_Fixture_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Tint) == 0x0002B8, "Member 'ABP_Master_Cloth_Fixture_C::Tint' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Pattern_Atas_cell) == 0x0002C8, "Member 'ABP_Master_Cloth_Fixture_C::Pattern_Atas_cell' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Tiling) == 0x0002CC, "Member 'ABP_Master_Cloth_Fixture_C::Tiling' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, R_Pattern) == 0x0002D0, "Member 'ABP_Master_Cloth_Fixture_C::R_Pattern' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Pattern_R_color) == 0x0002D4, "Member 'ABP_Master_Cloth_Fixture_C::Pattern_R_color' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, G_Pattern) == 0x0002E4, "Member 'ABP_Master_Cloth_Fixture_C::G_Pattern' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Pattern_G_color) == 0x0002E8, "Member 'ABP_Master_Cloth_Fixture_C::Pattern_G_color' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, B_Pattern) == 0x0002F8, "Member 'ABP_Master_Cloth_Fixture_C::B_Pattern' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Pattern_B_color) == 0x0002FC, "Member 'ABP_Master_Cloth_Fixture_C::Pattern_B_color' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, A_Pattern) == 0x00030C, "Member 'ABP_Master_Cloth_Fixture_C::A_Pattern' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Pattern_A_color) == 0x000310, "Member 'ABP_Master_Cloth_Fixture_C::Pattern_A_color' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Wind_Vector) == 0x000320, "Member 'ABP_Master_Cloth_Fixture_C::Wind_Vector' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Wind_Speed) == 0x00032C, "Member 'ABP_Master_Cloth_Fixture_C::Wind_Speed' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Wind_strength) == 0x000330, "Member 'ABP_Master_Cloth_Fixture_C::Wind_strength' has a wrong offset!");
static_assert(offsetof(ABP_Master_Cloth_Fixture_C, Wind_strength_PixelShader) == 0x000334, "Member 'ABP_Master_Cloth_Fixture_C::Wind_strength_PixelShader' has a wrong offset!");

}

