#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoneyBagSecured

#include "Basic.hpp"

#include "BP_BaseBagSecured_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MoneyBagSecured.BP_MoneyBagSecured_C
// 0x0000 (0x02B8 - 0x02B8)
class ABP_MoneyBagSecured_C final : public ABP_BaseBagSecured_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MoneyBagSecured_C">();
	}
	static class ABP_MoneyBagSecured_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MoneyBagSecured_C>();
	}
};
static_assert(alignof(ABP_MoneyBagSecured_C) == 0x000008, "Wrong alignment on ABP_MoneyBagSecured_C");
static_assert(sizeof(ABP_MoneyBagSecured_C) == 0x0002B8, "Wrong size on ABP_MoneyBagSecured_C");

}

