#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WixiaComputer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_ComputerBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WixiaComputer.WBP_WixiaComputer_C
// 0x0060 (0x02F8 - 0x0298)
class UWBP_WixiaComputer_C final : public UWBP_ComputerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_WixiaComputer_C;                // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Screensaver;                                       // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_CompleteHack_C*                    WBP_CompleteHack;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CompleteKeyCodes_C*                WBP_CompleteKeyCodes;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CompleteNameInfo_C*                WBP_CompleteNameInfo;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ComputerEmail_C*                   WBP_ComputerEmail;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ComputerNonActive_C*               WBP_ComputerNonActive;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ComputerTrueActive_C*              WBP_ComputerTrueActive;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ComputerUnlocked_C*                WBP_ComputerUnlocked;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Failed_C*                          WBP_Failed;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HackingTimer_C*                    WBP_HackingTimer;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Interupted_C*                      WBP_Interupted;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_WixiaComputer(int32 EntryPoint);
	void UpdateInformation(const class FText& Main, const class FText& Secondary, const class FText& Additional);
	void UpdateKeypadPossibleCodes(const TArray<int32>& Codes);
	void UpdateHackingProgress(int32 Progress);
	void UpdateHackingTimerProcessName(const class FText& InText);
	void UpdateUnlockDisplayText(const struct FSBZHackableDisplayText& NewDisplayText);
	void UpdateSuccessText(const class FText& InText);
	void UpdateEmailDisplayText(const struct FSBZHackableDisplayText& DisplayText);
	void Code();
	void Names();
	void Email();
	void Unlocked();
	void NotActive();
	void Active();
	void Done();
	void Interupted();
	void Progressing();
	void Failed();
	void HideAllWidgetsButOne(class UWidget* WidgetToShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WixiaComputer_C">();
	}
	static class UWBP_WixiaComputer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WixiaComputer_C>();
	}
};
static_assert(alignof(UWBP_WixiaComputer_C) == 0x000008, "Wrong alignment on UWBP_WixiaComputer_C");
static_assert(sizeof(UWBP_WixiaComputer_C) == 0x0002F8, "Wrong size on UWBP_WixiaComputer_C");
static_assert(offsetof(UWBP_WixiaComputer_C, UberGraphFrame_WBP_WixiaComputer_C) == 0x000298, "Member 'UWBP_WixiaComputer_C::UberGraphFrame_WBP_WixiaComputer_C' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, Screensaver) == 0x0002A0, "Member 'UWBP_WixiaComputer_C::Screensaver' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_CompleteHack) == 0x0002A8, "Member 'UWBP_WixiaComputer_C::WBP_CompleteHack' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_CompleteKeyCodes) == 0x0002B0, "Member 'UWBP_WixiaComputer_C::WBP_CompleteKeyCodes' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_CompleteNameInfo) == 0x0002B8, "Member 'UWBP_WixiaComputer_C::WBP_CompleteNameInfo' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_ComputerEmail) == 0x0002C0, "Member 'UWBP_WixiaComputer_C::WBP_ComputerEmail' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_ComputerNonActive) == 0x0002C8, "Member 'UWBP_WixiaComputer_C::WBP_ComputerNonActive' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_ComputerTrueActive) == 0x0002D0, "Member 'UWBP_WixiaComputer_C::WBP_ComputerTrueActive' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_ComputerUnlocked) == 0x0002D8, "Member 'UWBP_WixiaComputer_C::WBP_ComputerUnlocked' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_Failed) == 0x0002E0, "Member 'UWBP_WixiaComputer_C::WBP_Failed' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_HackingTimer) == 0x0002E8, "Member 'UWBP_WixiaComputer_C::WBP_HackingTimer' has a wrong offset!");
static_assert(offsetof(UWBP_WixiaComputer_C, WBP_Interupted) == 0x0002F0, "Member 'UWBP_WixiaComputer_C::WBP_Interupted' has a wrong offset!");

}

