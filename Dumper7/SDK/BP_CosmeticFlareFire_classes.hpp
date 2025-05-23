#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CosmeticFlareFire

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CosmeticFlareFire.BP_CosmeticFlareFire_C
// 0x0010 (0x02D8 - 0x02C8)
class ABP_CosmeticFlareFire_C final : public ASBZCosmeticProp
{
public:
	class UNiagaraComponent*                      FX_Signalflare;                                    // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CosmeticFlareFire_C">();
	}
	static class ABP_CosmeticFlareFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CosmeticFlareFire_C>();
	}
};
static_assert(alignof(ABP_CosmeticFlareFire_C) == 0x000008, "Wrong alignment on ABP_CosmeticFlareFire_C");
static_assert(sizeof(ABP_CosmeticFlareFire_C) == 0x0002D8, "Wrong size on ABP_CosmeticFlareFire_C");
static_assert(offsetof(ABP_CosmeticFlareFire_C, FX_Signalflare) == 0x0002C8, "Member 'ABP_CosmeticFlareFire_C::FX_Signalflare' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticFlareFire_C, StaticMesh) == 0x0002D0, "Member 'ABP_CosmeticFlareFire_C::StaticMesh' has a wrong offset!");

}

