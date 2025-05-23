#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LA_Civ_Cosmetic_JewelryStore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C
// 0x0098 (0x0340 - 0x02A8)
class ABP_LA_Civ_Cosmetic_JewelryStore_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Wait;                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 SBZLifeActionInstance_Wait;                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Buy_2;                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Sell_2;                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 SBZLifeActionInstance_BuyJewelry_2;                // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Buy_1;                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Sell_1;                          // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 SBZLifeActionInstance_BuyJewelry_1;                // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Buy;                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_Sell;                            // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 SBZLifeActionInstance_BuyJewelry;                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_LookAt_2;                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_LookAt_1;                        // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     SBZLifeActionSlot_LookAt;                          // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 SBZLifeActionInstance_LookAtJewelry;               // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionComponent*                SBZLifeAction;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASBZCharacter*                          Seller;                                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore(int32 EntryPoint);
	void BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature(class ASBZCharacter* Character, class USBZLifeActionInstance* ActionInstance, class USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
	void BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature(class ASBZCharacter* Character, class USBZLifeActionInstance* ActionInstance, class USBZLifeActionSlot* ActionSlot);
	void BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature(class ASBZCharacter* Character, class USBZLifeActionInstance* ActionInstance, class USBZLifeActionSlot* ActionSlot);
	void SellerGoBackWaiting();
	void IsSellerWaiting(bool* Waiting);
	void FindOccupiedBuyInstance(class USBZLifeActionInstance** BuyInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LA_Civ_Cosmetic_JewelryStore_C">();
	}
	static class ABP_LA_Civ_Cosmetic_JewelryStore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LA_Civ_Cosmetic_JewelryStore_C>();
	}
};
static_assert(alignof(ABP_LA_Civ_Cosmetic_JewelryStore_C) == 0x000008, "Wrong alignment on ABP_LA_Civ_Cosmetic_JewelryStore_C");
static_assert(sizeof(ABP_LA_Civ_Cosmetic_JewelryStore_C) == 0x000340, "Wrong size on ABP_LA_Civ_Cosmetic_JewelryStore_C");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Wait) == 0x0002B0, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Wait' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionInstance_Wait) == 0x0002B8, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionInstance_Wait' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Buy_2) == 0x0002C0, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Buy_2' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Sell_2) == 0x0002C8, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Sell_2' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionInstance_BuyJewelry_2) == 0x0002D0, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionInstance_BuyJewelry_2' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Buy_1) == 0x0002D8, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Buy_1' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Sell_1) == 0x0002E0, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Sell_1' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionInstance_BuyJewelry_1) == 0x0002E8, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionInstance_BuyJewelry_1' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Buy) == 0x0002F0, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Buy' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_Sell) == 0x0002F8, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_Sell' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionInstance_BuyJewelry) == 0x000300, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionInstance_BuyJewelry' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_LookAt_2) == 0x000308, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_LookAt_2' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_LookAt_1) == 0x000310, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_LookAt_1' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionSlot_LookAt) == 0x000318, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionSlot_LookAt' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeActionInstance_LookAtJewelry) == 0x000320, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeActionInstance_LookAtJewelry' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, Root) == 0x000328, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, SBZLifeAction) == 0x000330, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::SBZLifeAction' has a wrong offset!");
static_assert(offsetof(ABP_LA_Civ_Cosmetic_JewelryStore_C, Seller) == 0x000338, "Member 'ABP_LA_Civ_Cosmetic_JewelryStore_C::Seller' has a wrong offset!");

}

