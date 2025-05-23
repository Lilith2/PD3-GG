#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Interupted

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Interupted.WBP_Interupted_C
// 0x0050 (0x02E0 - 0x0290)
class UWBP_Interupted_C final : public UUserWidget
{
public:
	class UImage*                                 BlockBody;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_59;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_177;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_372;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BorderBottom;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BorderLeft;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BorderRight;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BorderTop;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Border;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Proc;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Interupted_C">();
	}
	static class UWBP_Interupted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Interupted_C>();
	}
};
static_assert(alignof(UWBP_Interupted_C) == 0x000008, "Wrong alignment on UWBP_Interupted_C");
static_assert(sizeof(UWBP_Interupted_C) == 0x0002E0, "Wrong size on UWBP_Interupted_C");
static_assert(offsetof(UWBP_Interupted_C, BlockBody) == 0x000290, "Member 'UWBP_Interupted_C::BlockBody' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_59) == 0x000298, "Member 'UWBP_Interupted_C::Image_59' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_177) == 0x0002A0, "Member 'UWBP_Interupted_C::Image_177' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_372) == 0x0002A8, "Member 'UWBP_Interupted_C::Image_372' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_BorderBottom) == 0x0002B0, "Member 'UWBP_Interupted_C::Image_BorderBottom' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_BorderLeft) == 0x0002B8, "Member 'UWBP_Interupted_C::Image_BorderLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_BorderRight) == 0x0002C0, "Member 'UWBP_Interupted_C::Image_BorderRight' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Image_BorderTop) == 0x0002C8, "Member 'UWBP_Interupted_C::Image_BorderTop' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Overlay_Border) == 0x0002D0, "Member 'UWBP_Interupted_C::Overlay_Border' has a wrong offset!");
static_assert(offsetof(UWBP_Interupted_C, Proc) == 0x0002D8, "Member 'UWBP_Interupted_C::Proc' has a wrong offset!");

}

