#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnvQueryContext_SuspectBBKey

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnvQueryContext_SuspectBBKey.BP_EnvQueryContext_SuspectBBKey_C
// 0x0010 (0x0048 - 0x0038)
class UBP_EnvQueryContext_SuspectBBKey_C final : public UEnvQueryContext_BlueprintBase
{
public:
	class FName                                   BBKey;                                             // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const;
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnvQueryContext_SuspectBBKey_C">();
	}
	static class UBP_EnvQueryContext_SuspectBBKey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnvQueryContext_SuspectBBKey_C>();
	}
};
static_assert(alignof(UBP_EnvQueryContext_SuspectBBKey_C) == 0x000008, "Wrong alignment on UBP_EnvQueryContext_SuspectBBKey_C");
static_assert(sizeof(UBP_EnvQueryContext_SuspectBBKey_C) == 0x000048, "Wrong size on UBP_EnvQueryContext_SuspectBBKey_C");
static_assert(offsetof(UBP_EnvQueryContext_SuspectBBKey_C, BBKey) == 0x000038, "Member 'UBP_EnvQueryContext_SuspectBBKey_C::BBKey' has a wrong offset!");

}

