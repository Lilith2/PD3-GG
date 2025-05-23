#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LA_Civ_Cosmetic_JewelryStore

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK::Params
{

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore
// 0x0138 (0x0138 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSellerWaiting_Waiting;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZCharacter*                          K2Node_ComponentBoundEvent_Character_2;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 K2Node_ComponentBoundEvent_ActionInstance_2;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     K2Node_ComponentBoundEvent_ActionSlot_2;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZCharacter*                          K2Node_ComponentBoundEvent_Character_1;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 K2Node_ComponentBoundEvent_ActionInstance_1;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     K2Node_ComponentBoundEvent_ActionSlot_1;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTag_ReturnValue;                       // 0x0038(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTag_ReturnValue_1;                     // 0x0044(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZAIActionData_LifeAction*            CallFunc_CreateActionData_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZAIAction*                           CallFunc_PushAction_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZCharacter*                          K2Node_ComponentBoundEvent_Character;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 K2Node_ComponentBoundEvent_ActionInstance;         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     K2Node_ComponentBoundEvent_ActionSlot;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZLifeActionStopReason                      K2Node_ComponentBoundEvent_Result;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSellerWaiting_Waiting_1;                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZLifeActionInstance*                 CallFunc_FindOccupiedBuyInstance_BuyInstance;      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZLifeActionRequest                  K2Node_MakeStruct_SBZLifeActionRequest;            // 0x00A0(0x0040)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZAIActionData_LifeAction*            CallFunc_CreateActionData_ReturnValue_1;           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZAIAction*                           CallFunc_PushAction_ReturnValue_1;                 // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBZLifeActionRequest                  K2Node_MakeStruct_SBZLifeActionRequest_1;          // 0x00F8(0x0040)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore) == 0x000138, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, EntryPoint) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_IsSellerWaiting_Waiting) == 0x000004, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_IsSellerWaiting_Waiting' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_Character_2) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_Character_2' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_ActionInstance_2) == 0x000010, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_ActionInstance_2' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_ActionSlot_2) == 0x000018, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_ActionSlot_2' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_Character_1) == 0x000020, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_Character_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_ActionInstance_1) == 0x000028, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_ActionInstance_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_ActionSlot_1) == 0x000030, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_ActionSlot_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_GetTag_ReturnValue) == 0x000038, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_GetTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_GetTag_ReturnValue_1) == 0x000044, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_GetTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000050, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x000051, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_IsValid_ReturnValue) == 0x000052, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_CreateActionData_ReturnValue) == 0x000058, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_CreateActionData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_PushAction_ReturnValue) == 0x000068, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_PushAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_Character) == 0x000070, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_Character' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_ActionInstance) == 0x000078, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_ActionInstance' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_ActionSlot) == 0x000080, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_ActionSlot' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_ComponentBoundEvent_Result) == 0x000088, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_ComponentBoundEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_IsSellerWaiting_Waiting_1) == 0x000089, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_IsSellerWaiting_Waiting_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00008A, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_FindOccupiedBuyInstance_BuyInstance) == 0x000090, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_FindOccupiedBuyInstance_BuyInstance' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000098, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_MakeStruct_SBZLifeActionRequest) == 0x0000A0, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_MakeStruct_SBZLifeActionRequest' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_IsValid_ReturnValue_1) == 0x0000E0, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_CreateActionData_ReturnValue_1) == 0x0000E8, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_CreateActionData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, CallFunc_PushAction_ReturnValue_1) == 0x0000F0, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::CallFunc_PushAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore, K2Node_MakeStruct_SBZLifeActionRequest_1) == 0x0000F8, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_ExecuteUbergraph_BP_LA_Civ_Cosmetic_JewelryStore::K2Node_MakeStruct_SBZLifeActionRequest_1' has a wrong offset!");

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature final
{
public:
	class ASBZCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 ActionInstance;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     ActionSlot;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZLifeActionStopReason                      Result;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature) == 0x000020, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature, Character) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature::Character' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature, ActionInstance) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature::ActionInstance' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature, ActionSlot) == 0x000010, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature::ActionSlot' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature, Result) == 0x000018, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_2_SBZLifeActionStopEventDelegate__DelegateSignature::Result' has a wrong offset!");

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature final
{
public:
	class ASBZCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 ActionInstance;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     ActionSlot;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature) == 0x000018, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature, Character) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature::Character' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature, ActionInstance) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature::ActionInstance' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature, ActionSlot) == 0x000010, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_1_SBZLifeActionEventDelegate__DelegateSignature::ActionSlot' has a wrong offset!");

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature final
{
public:
	class ASBZCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionInstance*                 ActionInstance;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZLifeActionSlot*                     ActionSlot;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature) == 0x000018, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature, Character) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature::Character' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature, ActionInstance) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature::ActionInstance' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature, ActionSlot) == 0x000010, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_BndEvt__BP_LA_Civ_Cosmetic_JewelryStore_SBZLifeAction_K2Node_ComponentBoundEvent_0_SBZLifeActionEventDelegate__DelegateSignature::ActionSlot' has a wrong offset!");

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.SellerGoBackWaiting
// 0x0060 (0x0060 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZLifeActionRequest                  K2Node_MakeStruct_SBZLifeActionRequest;            // 0x0008(0x0040)(NoDestructor, ContainsInstancedReference)
	class USBZAIActionData_LifeAction*            CallFunc_CreateActionData_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZAIAction*                           CallFunc_PushAction_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting) == 0x000060, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting, K2Node_MakeStruct_SBZLifeActionRequest) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting::K2Node_MakeStruct_SBZLifeActionRequest' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting, CallFunc_CreateActionData_ReturnValue) == 0x000048, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting::CallFunc_CreateActionData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting, CallFunc_PushAction_ReturnValue) == 0x000050, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting::CallFunc_PushAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_SellerGoBackWaiting::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.IsSellerWaiting
// 0x0028 (0x0028 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting final
{
public:
	bool                                          Waiting;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZLifeActionSlot*                     WaiterSlot;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWaiting;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZLifeActionState                           CallFunc_GetState_ReturnValue;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZLifeActionManager*                  CallFunc_Get_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBZLifeActionSlot*               CallFunc_GetActionSlotForCharacter_ReturnValue;    // 0x0020(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting) == 0x000028, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, Waiting) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::Waiting' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, WaiterSlot) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::WaiterSlot' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, IsWaiting) == 0x000010, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::IsWaiting' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_GetState_ReturnValue) == 0x000011, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_GetState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_IsValid_ReturnValue) == 0x000013, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000014, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_Get_ReturnValue) == 0x000018, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting, CallFunc_GetActionSlotForCharacter_ReturnValue) == 0x000020, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_IsSellerWaiting::CallFunc_GetActionSlotForCharacter_ReturnValue' has a wrong offset!");

// Function BP_LA_Civ_Cosmetic_JewelryStore.BP_LA_Civ_Cosmetic_JewelryStore_C.FindOccupiedBuyInstance
// 0x0030 (0x0030 - 0x0000)
struct BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance final
{
public:
	class USBZLifeActionInstance*                 BuyInstance;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetTag_ReturnValue;                       // 0x0008(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZCharacter*                          CallFunc_GetCharacterInAction_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBZLifeActionSlot*               CallFunc_GetReservedSlotForCharacter_ReturnValue;  // 0x0020(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBZLifeActionInstance*           CallFunc_GetActionForSlot_ReturnValue;             // 0x0028(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance) == 0x000008, "Wrong alignment on BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance");
static_assert(sizeof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance) == 0x000030, "Wrong size on BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance, BuyInstance) == 0x000000, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance::BuyInstance' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance, CallFunc_GetTag_ReturnValue) == 0x000008, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance::CallFunc_GetTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance, CallFunc_GetCharacterInAction_ReturnValue) == 0x000018, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance::CallFunc_GetCharacterInAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance, CallFunc_GetReservedSlotForCharacter_ReturnValue) == 0x000020, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance::CallFunc_GetReservedSlotForCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance, CallFunc_GetActionForSlot_ReturnValue) == 0x000028, "Member 'BP_LA_Civ_Cosmetic_JewelryStore_C_FindOccupiedBuyInstance::CallFunc_GetActionForSlot_ReturnValue' has a wrong offset!");

}

