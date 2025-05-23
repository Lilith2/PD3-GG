#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_CharacterBase

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ALI_CharacterBase.ALI_CharacterBase_C
// 0x0000 (0x0030 - 0x0030)
class IALI_CharacterBase_C final : public IAnimLayerInterface
{
public:
	void FullBodyAction(const struct FPoseLink& InPose, struct FPoseLink* FullBodyAction_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_CharacterBase_C">();
	}
	static class IALI_CharacterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_CharacterBase_C>();
	}
};
static_assert(alignof(IALI_CharacterBase_C) == 0x000008, "Wrong alignment on IALI_CharacterBase_C");
static_assert(sizeof(IALI_CharacterBase_C) == 0x000030, "Wrong size on IALI_CharacterBase_C");

}

