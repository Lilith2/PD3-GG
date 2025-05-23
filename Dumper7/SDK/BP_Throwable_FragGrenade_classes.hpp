#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Throwable_FragGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Throwable_FragGrenade.BP_Throwable_FragGrenade_C
// 0x0030 (0x61D0 - 0x61A0)
class ABP_Throwable_FragGrenade_C final : public ASBZFragGrenade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x61A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FX_GrenadeTrail;                                   // 0x61A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    DebugBillboard;                                    // 0x61B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_Lever;                                        // 0x61B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OwnerVelocity;                                     // 0x61C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Throwable_FragGrenade(int32 EntryPoint);
	void OnThrow();
	void BndEvt__BP_Throwable_FragGrenade_ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void StopRandomRot();
	void StartRandomRot();
	void BndEvt__BP_Throwable_FragGrenade_ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnArmed();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Throwable_FragGrenade_C">();
	}
	static class ABP_Throwable_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Throwable_FragGrenade_C>();
	}
};
static_assert(alignof(ABP_Throwable_FragGrenade_C) == 0x000010, "Wrong alignment on ABP_Throwable_FragGrenade_C");
static_assert(sizeof(ABP_Throwable_FragGrenade_C) == 0x0061D0, "Wrong size on ABP_Throwable_FragGrenade_C");
static_assert(offsetof(ABP_Throwable_FragGrenade_C, UberGraphFrame) == 0x0061A0, "Member 'ABP_Throwable_FragGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Throwable_FragGrenade_C, FX_GrenadeTrail) == 0x0061A8, "Member 'ABP_Throwable_FragGrenade_C::FX_GrenadeTrail' has a wrong offset!");
static_assert(offsetof(ABP_Throwable_FragGrenade_C, DebugBillboard) == 0x0061B0, "Member 'ABP_Throwable_FragGrenade_C::DebugBillboard' has a wrong offset!");
static_assert(offsetof(ABP_Throwable_FragGrenade_C, Mesh_Lever) == 0x0061B8, "Member 'ABP_Throwable_FragGrenade_C::Mesh_Lever' has a wrong offset!");
static_assert(offsetof(ABP_Throwable_FragGrenade_C, OwnerVelocity) == 0x0061C0, "Member 'ABP_Throwable_FragGrenade_C::OwnerVelocity' has a wrong offset!");

}

