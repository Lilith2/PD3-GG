#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS_GlassHit_VFXData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BPS_GlassHit_VFXData.BPS_GlassHit_VFXData
// 0x0030 (0x0030 - 0x0000)
struct FBPS_GlassHit_VFXData final
{
public:
	int32                                         ParticleCount_2_596F7C1846228400A8B884AF10CDCD44;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ParticleSize_5_0FEE793D4970010B96A68D9CF534DC1D;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ParticleColor_8_643F55B44C8E5B3FC98EB3A35B4E71B5;  // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ParticleLocation_15_D761755545D4F9BD88B3B5BD3D78A0CD; // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   HitMesh_14_36431E4C4C212184D68E75ADE7AAF5E7;       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBPS_GlassHit_VFXData) == 0x000008, "Wrong alignment on FBPS_GlassHit_VFXData");
static_assert(sizeof(FBPS_GlassHit_VFXData) == 0x000030, "Wrong size on FBPS_GlassHit_VFXData");
static_assert(offsetof(FBPS_GlassHit_VFXData, ParticleCount_2_596F7C1846228400A8B884AF10CDCD44) == 0x000000, "Member 'FBPS_GlassHit_VFXData::ParticleCount_2_596F7C1846228400A8B884AF10CDCD44' has a wrong offset!");
static_assert(offsetof(FBPS_GlassHit_VFXData, ParticleSize_5_0FEE793D4970010B96A68D9CF534DC1D) == 0x000004, "Member 'FBPS_GlassHit_VFXData::ParticleSize_5_0FEE793D4970010B96A68D9CF534DC1D' has a wrong offset!");
static_assert(offsetof(FBPS_GlassHit_VFXData, ParticleColor_8_643F55B44C8E5B3FC98EB3A35B4E71B5) == 0x000008, "Member 'FBPS_GlassHit_VFXData::ParticleColor_8_643F55B44C8E5B3FC98EB3A35B4E71B5' has a wrong offset!");
static_assert(offsetof(FBPS_GlassHit_VFXData, ParticleLocation_15_D761755545D4F9BD88B3B5BD3D78A0CD) == 0x000018, "Member 'FBPS_GlassHit_VFXData::ParticleLocation_15_D761755545D4F9BD88B3B5BD3D78A0CD' has a wrong offset!");
static_assert(offsetof(FBPS_GlassHit_VFXData, HitMesh_14_36431E4C4C212184D68E75ADE7AAF5E7) == 0x000028, "Member 'FBPS_GlassHit_VFXData::HitMesh_14_36431E4C4C212184D68E75ADE7AAF5E7' has a wrong offset!");

}

