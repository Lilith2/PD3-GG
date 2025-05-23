#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CableConnectionInterface

#include "Basic.hpp"

#include "CableBox_Color_Enum_structs.hpp"


namespace SDK::Params
{

// Function CableConnectionInterface.CableConnectionInterface_C.FinishedCable
// 0x0001 (0x0001 - 0x0000)
struct CableConnectionInterface_C_FinishedCable final
{
public:
	bool                                          CurrentStateOfCableBox;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CableConnectionInterface_C_FinishedCable) == 0x000001, "Wrong alignment on CableConnectionInterface_C_FinishedCable");
static_assert(sizeof(CableConnectionInterface_C_FinishedCable) == 0x000001, "Wrong size on CableConnectionInterface_C_FinishedCable");
static_assert(offsetof(CableConnectionInterface_C_FinishedCable, CurrentStateOfCableBox) == 0x000000, "Member 'CableConnectionInterface_C_FinishedCable::CurrentStateOfCableBox' has a wrong offset!");

// Function CableConnectionInterface.CableConnectionInterface_C.CorrectColorToCut
// 0x0010 (0x0010 - 0x0000)
struct CableConnectionInterface_C_CorrectColorToCut final
{
public:
	ECableBox_Color_Enum                          CorrectColorToCut_0;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SingleCableBox_C*                   NewParam;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CableConnectionInterface_C_CorrectColorToCut) == 0x000008, "Wrong alignment on CableConnectionInterface_C_CorrectColorToCut");
static_assert(sizeof(CableConnectionInterface_C_CorrectColorToCut) == 0x000010, "Wrong size on CableConnectionInterface_C_CorrectColorToCut");
static_assert(offsetof(CableConnectionInterface_C_CorrectColorToCut, CorrectColorToCut_0) == 0x000000, "Member 'CableConnectionInterface_C_CorrectColorToCut::CorrectColorToCut_0' has a wrong offset!");
static_assert(offsetof(CableConnectionInterface_C_CorrectColorToCut, NewParam) == 0x000008, "Member 'CableConnectionInterface_C_CorrectColorToCut::NewParam' has a wrong offset!");

// Function CableConnectionInterface.CableConnectionInterface_C.WhatCabinetIsConnected
// 0x0018 (0x0018 - 0x0000)
struct CableConnectionInterface_C_WhatCabinetIsConnected final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CableConnectionInterface_C_WhatCabinetIsConnected) == 0x000008, "Wrong alignment on CableConnectionInterface_C_WhatCabinetIsConnected");
static_assert(sizeof(CableConnectionInterface_C_WhatCabinetIsConnected) == 0x000018, "Wrong size on CableConnectionInterface_C_WhatCabinetIsConnected");
static_assert(offsetof(CableConnectionInterface_C_WhatCabinetIsConnected, NewParam) == 0x000000, "Member 'CableConnectionInterface_C_WhatCabinetIsConnected::NewParam' has a wrong offset!");

}

