#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BlueKeycardReader

#include "Basic.hpp"

#include "BP_KeycardReaderBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BlueKeycardReader.BP_BlueKeycardReader_C
// 0x0000 (0x0368 - 0x0368)
class ABP_BlueKeycardReader_C final : public ABP_KeycardReaderBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BlueKeycardReader_C">();
	}
	static class ABP_BlueKeycardReader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BlueKeycardReader_C>();
	}
};
static_assert(alignof(ABP_BlueKeycardReader_C) == 0x000008, "Wrong alignment on ABP_BlueKeycardReader_C");
static_assert(sizeof(ABP_BlueKeycardReader_C) == 0x000368, "Wrong size on ABP_BlueKeycardReader_C");

}

