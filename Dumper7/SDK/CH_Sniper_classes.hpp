#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CH_Sniper

#include "Basic.hpp"

#include "CH_BaseCop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CH_Sniper.CH_Sniper_C
// 0x0010 (0x1C50 - 0x1C40)
class ACH_Sniper_C final : public ACH_BaseCop_C
{
public:
	class UStaticMeshComponent*                   Hat;                                               // 0x1C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CH_Sniper_C">();
	}
	static class ACH_Sniper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACH_Sniper_C>();
	}
};
static_assert(alignof(ACH_Sniper_C) == 0x000010, "Wrong alignment on ACH_Sniper_C");
static_assert(sizeof(ACH_Sniper_C) == 0x001C50, "Wrong size on ACH_Sniper_C");
static_assert(offsetof(ACH_Sniper_C, Hat) == 0x001C40, "Member 'ACH_Sniper_C::Hat' has a wrong offset!");

}

