#pragma once
#include "pch_wrapper.h"
#include "ssdma.h"
#include <unordered_set>
#include <cwctype>


#define PE_Address 0x1BE9420
#define PE_IDX 69
#define SCREENSPACE SDK::FVector2D(3440,1440)

using namespace std::chrono_literals;
template <
	class result_t = std::chrono::milliseconds,
	class clock_t = std::chrono::steady_clock,
	class duration_t = std::chrono::milliseconds
>
auto since(std::chrono::time_point<clock_t, duration_t> const& start)
{
	return std::chrono::duration_cast<result_t>(clock_t::now() - start);
}

using namespace SSDMA_Base;

std::string SSDMA_Base::fast_wstring_to_string(wchar_t* wstr) {
	const wchar_t* p = wstr;
	size_t len = 0;
	// Calculate the length of the resulting UTF-8 string
	while (*p) {
		wchar_t wc = *p++;
		if (wc < 0x80) {
			len += 1;  // ASCII characters
		}
		else if (wc < 0x800) {
			len += 2;  // 2-byte UTF-8 sequence
		}
		else if (wc < 0x10000) {
			len += 3;  // 3-byte UTF-8 sequence
		}
		// If you are dealing with platforms where wchar_t is 32-bit:
#if WCHAR_MAX > 0xFFFF
		else if (wc < 0x110000) {
			len += 4;  // 4-byte UTF-8 sequence
		}
#endif
	}
	std::string str;
	str.reserve(len); // reserve space but don't use str's underlying pointer directly
	p = wstr;
	// Convert the wide characters to UTF-8
	while (*p) {
		wchar_t wc = *p++;
		if (wc < 0x80) {
			str += static_cast<char>(wc);
		}
		else if (wc < 0x800) {
			str += static_cast<char>((wc >> 6) | 0xC0);
			str += static_cast<char>((wc & 0x3F) | 0x80);
		}
		else if (wc < 0x10000) {
			str += static_cast<char>((wc >> 12) | 0xE0);
			str += static_cast<char>(((wc >> 6) & 0x3F) | 0x80);
			str += static_cast<char>((wc & 0x3F) | 0x80);
		}
		// If wchar_t is 32-bit (and wc is in the range 0x10000 to 0x10FFFF):
#if WCHAR_MAX > 0xFFFF
		else if (wc < 0x110000) {
			str += static_cast<char>((wc >> 18) | 0xF0);
			str += static_cast<char>(((wc >> 12) & 0x3F) | 0x80);
			str += static_cast<char>(((wc >> 6) & 0x3F) | 0x80);
			str += static_cast<char>((wc & 0x3F) | 0x80);
		}
#endif
	}
	return str;  // Return the constructed std::string
}

#pragma region Console

Console::Console() { }

Console::Console(const char* title) { InitializeConsole(title); }

Console::Console(const char* title, bool bShow) { InitializeConsole(title, bShow); }

Console::~Console() { DestroyConsole(); }

HANDLE Console::GetHandle() { return this->pHandle; }

HWND Console::GetWindowHandle() { return this->pHwnd; }

void Console::Clear() { system("cls"); }

//	creates a console instance with input name <consoleName>
void Console::InitializeConsole(const char* ConsoleName, bool bShowWindow)
{
	if (Console::bInit)
	{
		LogError("[!] [Console::InitializeConsole] failed to initialize console .\n");
		return;
	}

	AllocConsole();
	this->pHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	this->pHwnd = GetConsoleWindow();
	freopen_s(&this->pOutStream, "CONOUT$", "w", stdout);

	errno_t err = fopen_s(&toDiskLog, "PE_Funcs_PD3.txt", "a");


	char titleBuff[256];
	sprintf_s(titleBuff, "[DX12Base] %s", ConsoleName);
	SetConsoleTitleA(titleBuff);

	this->bInit = true;
	this->bShow = bShowWindow;

	ShowWindow(this->pHwnd, this->bShow ? SW_SHOW : SW_HIDE);
}

void Console::cLog(EColors color, const char* fmt, ...) {
	SetConsoleTextAttribute(pHandle, color);
	va_list arg;
	va_start(arg, color);
	vfprintf(pOutStream, fmt, arg);
	va_end(arg);
	SetConsoleTextAttribute(pHandle, EColor_DEFAULT);
}

void Console::printdbg(EColors color, const char* fmt, ...) {
	const int BUFFER_SIZE = 1024;
	char buffer[BUFFER_SIZE];
	va_list args;
	va_start(args, fmt);
	vsnprintf(buffer, BUFFER_SIZE, fmt, args);
	va_end(args);
	cLog(color, buffer);
}

void Console::WriteToFile(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vfprintf(toDiskLog, fmt, args);
	va_end(args);
}

void Console::LogError(const char* fmt, ...)
{
	SetConsoleTextAttribute(pHandle, EColor_red);
	va_list arg;
	va_start(arg, fmt);
	vfprintf(pOutStream, fmt, arg);
	va_end(arg);
	SetConsoleTextAttribute(pHandle, EColor_DEFAULT);
}

//	
void Console::DestroyConsole()
{
	fclose(pOutStream);
	DestroyWindow(pHwnd);
	FreeConsole();
	bInit = false;
}

//	
void Console::SetConsoleVisibility(bool bShow)
{
	this->bShow = bShow;
	ShowWindow(pHwnd, bShow ? SW_SHOW : SW_HIDE);
}

//	
void Console::Log(const char* fmt, ...)
{
	if (!this->pOutStream)
		return;

	va_list arg;
	va_start(arg, fmt);
	vfprintf(this->pOutStream, fmt, arg);
	va_end(arg);
}

#pragma endregion

// Preprocess the pattern to create the LPS array
void KMPpreprocess(const std::string& pattern, int* lps) {
	int length = 0;
	lps[0] = 0;
	int i = 1;
	while (i < pattern.size()) {
		if (pattern[i] == pattern[length]) {
			length++;
			lps[i] = length;
			i++;
		}
		else {
			if (length != 0) {
				length = lps[length - 1];
			}
			else {
				lps[i] = 0;
				i++;
			}
		}
	}
}
// KMP search function to find if any substring matches
bool KMPsearch(const std::string& text, const std::string patterns[], size_t patternCount) {
	size_t textLength = text.size();
	for (size_t p = 0; p < patternCount; ++p) {
		const std::string& pattern = patterns[p];
		size_t patternLength = pattern.size();
		int* lps = new int[patternLength];
		KMPpreprocess(pattern, lps);
		int i = 0;
		int j = 0;
		while (i < textLength) {
			if (pattern[j] == text[i]) {
				i++;
				j++;
			}
			if (j == patternLength) {
				delete[] lps; // Free the LPS array before returning
				return true; // Pattern found
			}
			else if (i < textLength && pattern[j] != text[i]) {
				if (j != 0) {
					j = lps[j - 1];
				}
				else {
					i++;
				}
			}
		}
		delete[] lps; // Free the LPS array after checking each pattern
	}
	return false; // No patterns found
}


#pragma region //	HOOKING

typedef void(*ProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
ProcessEvent oProcessEvent = nullptr;

void __fastcall hkPE(SDK::UObject* obj, SDK::UFunction* func, void* params)
{
	/*std::string FunctionName = func->GetName();
	
	if (FunctionName == "Multicast_SetMarked")
	{
		return oProcessEvent(obj, func, params);
	}*/

	/*if (func->Index == 21883)
	{
		SDK::Params::SBZCharacter_HandleTakePointDamage* FuncParams = (SDK::Params::SBZCharacter_HandleTakePointDamage*)params;
		FuncParams->Damage = -1;
		return oProcessEvent(obj, func, params);
	}
	if (func->Index == 21583)
	{
		SDK::Params::SBZMissionState_ServerPostOnTakenDamageEvent* FuncParams = (SDK::Params::SBZMissionState_ServerPostOnTakenDamageEvent*)params;
		FuncParams->DamageEventData.Damage = -1;
		return oProcessEvent(obj, func, params);
	}*/
	/*if (func->Index == 21942)
	{
		SDK::Params::SBZCharacter_Server_ThrowBag* FuncParams = (SDK::Params::SBZCharacter_Server_ThrowBag*)params;
		FuncParams->ReplicatedVelocity.X = 9999.f;
		FuncParams->ReplicatedVelocity.Y = 9999.f;
		FuncParams->ReplicatedVelocity.Z = 9999.f;
		return oProcessEvent(obj, func, params);
	}*/

	//else if (func->Index == 21693)//intercept Multicast_FireProjectile
	//{
	//	SDK::Params::SBZAbilitySystemComponent_Multicast_FireProjectile* FuncParams = (SDK::Params::SBZAbilitySystemComponent_Multicast_FireProjectile*)params;
	//	auto ptr = FuncParams->TargetData; //breakpoint here?
	//}

	if (g_ssdma->Settings->b_LogFunctions && g_Running.load())
	{
		auto name = func->GetFullName();
		auto idx = func->Index;
		g_Console->WriteToFile("Func: %s , IDX: %d\n", name.c_str(), idx);
	}

	
	
	//Func: Function Starbreeze.SBZCharacter.Server_ThrowBag , IDX: 21942
	//Func: Function Starbreeze.SBZAbilitySystemComponent.c , IDX: 21693
	//Func: Function Starbreeze.SBZPlayerState.Client_SendOverkillWeaponProgress, IDX : 25523
	//Func: Function Starbreeze.SBZCharacter.Multicast_StopRecoil , IDX: 21913
	//Func: Function Starbreeze.SBZCharacter.HandleTakePointDamage , IDX: 21883
	//Func: Function Starbreeze.SBZMissionState.ServerPostOnTakenDamageEvent , IDX: 21583

	/*const std::string patterns[] = {"name"};
	size_t patternCount = sizeof(patterns) / sizeof(patterns[0]);
	if (KMPsearch(FunctionName, patterns, patternCount))
	{
		auto name = func->GetFullName();
		auto idx = func->Index;
		g_Console->WriteToFile("Func: %s , IDX: %d\n", name.c_str(), idx);
		g_Console->printdbg(g_Console->Colors.green, "Func: %s , IDX: %d\n", name.c_str(), idx);
		return oProcessEvent(obj, func, params);
	}*/
	return oProcessEvent(obj, func, params);
}

//min_hook wrapper.
__forceinline bool HOOK(void* pFunc, void* pDetour, void* pOriginal, const bool usedIdaStyleMask = true)
{
	if (!pFunc) return false;
	//I have tested into the ground that this casting of the void* pOriginal to double void** must be
	//done exactly as shown in this wrapper or it won't work
	//you can't cast it any other way, not even reinterpret cast or multiple smaller steps in your main code.
	//the numbers get corrupted for whatever reason
	MH_STATUS result;
	result = MH_CreateHook(pFunc, pDetour, (void**)pOriginal);
	bool b = false;
	switch (result)
	{
	case MH_UNKNOWN:
		std::cout << "MH_UNKNOWN\n";
		break;
	case MH_OK:
		b = true;
		break;
	case MH_ERROR_ALREADY_INITIALIZED:
		std::cout << "MH_ERROR_ALREADY_INITIALIZED\n";
		break;
	case MH_ERROR_NOT_INITIALIZED:
		std::cout << "MH_ERROR_NOT_INITIALIZED\n";
		break;
	case MH_ERROR_ALREADY_CREATED:
		std::cout << "MH_ERROR_ALREADY_CREATED\n";
		break;
	case MH_ERROR_NOT_CREATED:
		std::cout << "MH_ERROR_NOT_CREATED\n";
		break;
	case MH_ERROR_ENABLED:
		std::cout << "MH_ERROR_ENABLED\n";
		break;
	case MH_ERROR_DISABLED:
		std::cout << "MH_ERROR_DISABLED\n";
		break;
	case MH_ERROR_NOT_EXECUTABLE:
		std::cout << "MH_ERROR_NOT_EXECUTABLE\n";
		break;
	case MH_ERROR_UNSUPPORTED_FUNCTION:
		std::cout << "MH_ERROR_UNSUPPORTED_FUNCTION\n";
		break;
	case MH_ERROR_MEMORY_ALLOC:
		std::cout << "MH_ERROR_MEMORY_ALLOC\n";
		break;
	case MH_ERROR_MEMORY_PROTECT:
		std::cout << "MH_ERROR_MEMORY_PROTECT\n";
		break;
	case MH_ERROR_MODULE_NOT_FOUND:
		std::cout << "MH_ERROR_MODULE_NOT_FOUND\n";
		break;
	case MH_ERROR_FUNCTION_NOT_FOUND:
		std::cout << "MH_ERROR_FUNCTION_NOT_FOUND\n";
		break;
	default:
		break;
	}

	if (b)
	{
		MH_EnableHook(pFunc);
		return true;
	}
	return false;
}

VMTHook::VMTHook() {  }

VMTHook::VMTHook(void* vmt_addy)
{
	vmt = (void**)vmt_addy;
}

void* VMTHook::Hook(int index, void* hk)
{
	// Store the index and original function address
	hooked_funcs.insert(std::make_pair(index, vmt[index]));

	// Change the memory's access rights, patch the address to our hook, restore original rights
	DWORD old;
	VirtualProtect(&vmt[index], sizeof(void*), PAGE_EXECUTE_READWRITE, &old);
	vmt[index] = hk;
	VirtualProtect(&vmt[index], sizeof(void*), old, NULL);

	return hooked_funcs[index];
}

void VMTHook::ClearHooks()
{
	for (func_iterator = hooked_funcs.begin(); func_iterator != hooked_funcs.end(); func_iterator++)
	{
		DWORD old;
		VirtualProtect(&vmt[func_iterator->first], sizeof(void*), PAGE_EXECUTE_READWRITE, &old);
		vmt[func_iterator->first] = func_iterator->second;
		VirtualProtect(&vmt[func_iterator->first], sizeof(void*), old, NULL);
	}
	hooked_funcs.clear();
	vmt = nullptr;
}

VMTHook::~VMTHook() {}

static SDK::UCanvas* _canvas;

// Global variable to store the last rewrite time
std::chrono::time_point<std::chrono::steady_clock> lastRewriteTime;
// Function to get the current time point
auto currentTime() {
	return std::chrono::steady_clock::now();
}
// Initialize the last rewrite time to the current time
void initRewriteTimer() {
	lastRewriteTime = currentTime();
}
// Function to check if 2 milliseconds have passed since the last rewrite
bool canRewrite() {
	auto now = currentTime();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(now - lastRewriteTime);
	return duration.count() >= 2;
}

auto last_check = std::chrono::steady_clock::now();

#pragma endregion

#pragma region boilerplate

static bool found = false;

void safeBasePointerRead()
{
	//check for pointers indicating we are live
	auto* world = g_ssdma->_CurrentWorld;
	found = false;
	if (world)
	{
		//using microsoft's specific __try __finally block to attempt dangerous pointer checks without full program crash. Might work.
		__try
		{
			if (world->OwningGameInstance && world->OwningGameInstance->LocalPlayers
				&& world->OwningGameInstance->LocalPlayers[0] && world->OwningGameInstance->LocalPlayers[0]->ViewportClient
				&& world->OwningGameInstance->LocalPlayers[0]->PlayerController && world->PersistentLevel
				&& world->PersistentLevel->Actors.IsValid() && world->PersistentLevel->WorldSettings
				&& world->GameState && world->OwningGameInstance->LocalPlayers[0]->PlayerController->Character)
			{
				found = true; __leave;
			}
			else { __leave; }
		}
		__except (EXCEPTION_EXECUTE_HANDLER) // Catch any access violations
		{
			// Handle exception if a null pointer or invalid memory access was attempted
			found = false;
		}
	}
}

std::wstring getCurrentTimeString() {
	// Get the current time as time_point
	auto now = std::chrono::system_clock::now();

	// Convert to time_t, which represents time in seconds since the epoch
	std::time_t timeNow = std::chrono::system_clock::to_time_t(now);

	// Convert time_t to tm as local time
	std::tm tmNow;
	// Use localtime_s for thread-safe conversion
	localtime_s(&tmNow, &timeNow);

	// Create a wstringstream to build the wstring
	std::wstringstream wss;

	// Manually format the time to remove leading zeros and handle AM/PM
	// Hour in 12-hour format without leading zeros
	int hour = tmNow.tm_hour % 12;
	if (hour == 0) hour = 12; // Adjust for midnight and noon

	// Add hour to the stream
	wss << hour << L':';

	// Add minutes with leading zeros
	wss << std::setfill(L'0') << std::setw(2) << tmNow.tm_min;

	// Add AM/PM indicator
	std::wstring am_pm = (tmNow.tm_hour < 12) ? L"am" : L"pm";
	wss << am_pm;

	// Get the formatted time string
	std::wstring timeString = wss.str();

	return timeString;
}


DWORD WINAPI MainThread(LPVOID dwModule)
{
	UNREFERENCED_PARAMETER(dwModule);
	g_ssdma = std::make_unique<C_SSDMA>();
	g_Console = std::make_unique<Console>();
	//init the main loops and globals and threads
	g_ssdma->mGamePID = GetCurrentProcessId();
	g_ssdma->pGameHandle = GetCurrentProcess();
	g_ssdma->pGameWindow = GetForegroundWindow();
	g_ssdma->pGameModule = GetModuleHandle(0);
	g_ssdma->pGameBaseAddr = reinterpret_cast<__int64>(g_ssdma->pGameModule);

	MH_Initialize();

	g_Console->InitializeConsole("DEBUG CONSOLE", true);
	bool init = g_ssdma->Init();
	g_Console->LogError("g_ssdma->Init() = %s\n", init ? "TRUE" : "FALSE");
	void* pProcessEvent = (char*)(g_ssdma->gamebase) + PE_Address;
	
	if (!HOOK(pProcessEvent, &hkPE, &oProcessEvent))
	{
		g_Console->LogError("[-] Process Event Hook Failed!\n");
	}
	else { g_Console->printdbg(Console::Colors.green, "PE Hooked\n"); }

	g_Running.store(true);

	//main thread loop, idk what we do with it yet, most stuff runs elsewhere in my v1 design
	//bool postrender_hook = false;

	//VMTHook PR_hook;
	static int LastTick = 0;

	

	while (g_Running.load())
	{
		if (!g_ssdma->_CurrentWorld)
			g_ssdma->_CurrentWorld = SDK::UWorld::GetWorld();

		safeBasePointerRead();//sets the static global "found" to true if it works, false otherwise

		if (found)
		{
			g_ssdma->FoundBasePointers.store(true);
			g_ssdma->safeToAccessMemory.store(true);
		}
		else
		{
			g_ssdma->_CurrentWorld = 0;
			g_ssdma->FoundBasePointers.store(false);
		}

		//gun mods
		if (g_ssdma->GetKeyState(VK_HOME, 0) && ((GetTickCount64() - LastTick) > 500))
		{
			if (g_ssdma->_CurrentWorld)
			{
				if (g_ssdma->_CurrentWorld->OwningGameInstance)
				{
					SDK::USBZGameInstance* USBZGameInstance = reinterpret_cast<SDK::USBZGameInstance*>(g_ssdma->_CurrentWorld->OwningGameInstance);
					if (USBZGameInstance)
					{
						if (USBZGameInstance->GlobalItemDatabase)
						{
							if (g_ssdma->Settings->b_test)
							{
								SDK::USBZWeaponDatabase* PrimaryWeapons = USBZGameInstance->GlobalItemDatabase->PrimaryWeapons.Get();
								if (PrimaryWeapons)
								{
									if (PrimaryWeapons->Weapons)
									{
										for (int i = 0; i < PrimaryWeapons->Weapons.Num(); ++i)
										{
											if (PrimaryWeapons->Weapons.IsValidIndex(i))
											{
												SDK::USBZRangedWeaponData* gun = reinterpret_cast<SDK::USBZRangedWeaponData*>(PrimaryWeapons->Weapons[i]);
												if (gun)
												{
													if (gun->FireData)
													{
														gun->FireData->Range = 30000;
														gun->FireData->ArmorPenetration = 50;
														//gun->FireData->FireMode = SDK::ESBZFireMode::Auto;
														//gun->FireData->FireType = SDK::ESBZFireType::Auto;
														gun->FireData->FireBuildupShotIncrease = 0;
														gun->FireData->ProjectilesPerFiredRound = 10;
														gun->FireData->RoundsPerMinute = 900;
														gun->FireData->bCanHitEnvironmentAfterPenetration = false;
														gun->FireData->bCanPenetrateBlocked = true;
														//gun->FireData->MaximumPenetrationCount = 3;
													}
													if (gun->SpreadData)
													{
														gun->SpreadData->DeviationTargetingFireMultiplier = 0;
														gun->SpreadData->DeviationHipFireMultiplier = 0;
														gun->SpreadData->FireSpreadIncrease = 0;
														gun->SpreadData->SpreadRadiusMultipliers = SDK::FVector2D(0, 0);
													}
													if (gun->CachedMagazineData)
													{
														gun->CachedMagazineData->AmmoPickup = SDK::FFloatInterval(50,100);
													}

													g_Console->printdbg(g_Console->Colors.green, "Gun Mods Written. Start a fresh lobby for apply!\n");
												}
											}
										}
									}
								}

								SDK::USBZWeaponDatabase* SecondaryWeapons = USBZGameInstance->GlobalItemDatabase->SecondaryWeapons.Get();
								if (SecondaryWeapons)
								{
									if (SecondaryWeapons->Weapons)
									{
										for (int i = 0; i < SecondaryWeapons->Weapons.Num(); ++i)
										{
											if (SecondaryWeapons->Weapons.IsValidIndex(i))
											{
												SDK::USBZRangedWeaponData* secondGun = reinterpret_cast<SDK::USBZRangedWeaponData*>(SecondaryWeapons->Weapons[i]);
												if (secondGun)
												{
													if (secondGun->FireData)
													{
														secondGun->FireData->Range = 30000;
														secondGun->FireData->ArmorPenetration = 50;
														//secondGun->FireData->FireMode = SDK::ESBZFireMode::Auto;
														//secondGun->FireData->FireType = SDK::ESBZFireType::Auto;
														secondGun->FireData->FireBuildupShotIncrease = 0;
														secondGun->FireData->ProjectilesPerFiredRound = 10;
														secondGun->FireData->RoundsPerMinute = 900;
														secondGun->FireData->bCanHitEnvironmentAfterPenetration = false;
														secondGun->FireData->bCanPenetrateBlocked = true;
														//secondGun->FireData->MaximumPenetrationCount = 3;
													}
													if (secondGun->SpreadData)
													{
														secondGun->SpreadData->DeviationTargetingFireMultiplier = 0;
														secondGun->SpreadData->DeviationHipFireMultiplier = 0;
														secondGun->SpreadData->FireSpreadIncrease = 0;
														secondGun->SpreadData->SpreadRadiusMultipliers = SDK::FVector2D(0, 0);
													}
													if (secondGun->CachedMagazineData)
													{
														secondGun->CachedMagazineData->AmmoPickup = SDK::FFloatInterval(50, 100);
													}
													g_Console->printdbg(g_Console->Colors.green, "secondGun Mods Written. Start a fresh lobby for apply!\n");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			
			
			LastTick = GetTickCount64();
		}

		if (g_ssdma->GetKeyState(VK_F5, 0) && ((GetTickCount64() - LastTick) > 500))
		{
			if (g_ssdma->Settings->b_ESP)
			{
				g_ssdma->Settings->b_ESP = false;
				g_Console->printdbg(g_Console->Colors.red, "ESP Disabled!\n");
			}
			else
			{
				g_ssdma->Settings->b_ESP = true;
				g_Console->printdbg(g_Console->Colors.green, "ESP Enabled!\n");
			}
			LastTick = GetTickCount64();
		}
		
		if (g_ssdma->safeToAccessMemory.load() && g_ssdma->FoundBasePointers.load() && g_ssdma->Settings->b_ESP)
		{
			if (g_ssdma->_CurrentWorld)
			{
				if (g_ssdma->_CurrentWorld->OwningGameInstance)
				{
					if (g_ssdma->_CurrentWorld->OwningGameInstance->LocalPlayers.IsValidIndex(0))
					{
						if (g_ssdma->_CurrentWorld->OwningGameInstance->LocalPlayers[0])
						{
							if (g_ssdma->_CurrentWorld->OwningGameInstance->LocalPlayers[0]->PlayerController)
							{
								if (g_ssdma->_CurrentWorld->OwningGameInstance->LocalPlayers[0]->PlayerController->Character)
								{
									if (reinterpret_cast<SDK::ASBZPlayerCharacter*>(g_ssdma->_CurrentWorld->OwningGameInstance->LocalPlayers[0]->PlayerController->Character)->bIsAlive)
									{
										static auto ACH_BaseCop_C = SDK::ACH_BaseCop_C::StaticClass();
										if (ACH_BaseCop_C)
										{
											SDK::AActor* CurrentAActor = nullptr;

											static auto UGameplayStatics = *(SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
											g_ssdma->TArray_ASBZAICharacterList.Clear();
											//maybe make a queued timer thing to signal to main thread we can loop through the actors to set marked?
											UGameplayStatics.GetAllActorsOfClass(g_ssdma->_CurrentWorld, ACH_BaseCop_C, &g_ssdma->TArray_ASBZAICharacterList);

											if (g_ssdma->TArray_ASBZAICharacterList.IsValid())
											{
												for (int i = 0; i < g_ssdma->TArray_ASBZAICharacterList.Num(); ++i)
												{
													if (g_ssdma->TArray_ASBZAICharacterList.IsValidIndex(i))
													{
														if (g_ssdma->TArray_ASBZAICharacterList[i])
														{
															CurrentAActor = g_ssdma->TArray_ASBZAICharacterList[i];
															if (!CurrentAActor)
																continue;

															SDK::ASBZAICharacter* player = reinterpret_cast<SDK::ASBZAICharacter*>(g_ssdma->TArray_ASBZAICharacterList[i]);
															if (!player)
																continue;

															if (g_ssdma->Settings->b_VIPChams)
															{
																if (player->MarkedOutline)
																{
																	if (player->bIsAlive && player->bCanBeDamaged && !player->bActorIsBeingDestroyed && !player->bIsSurrendered)
																		player->Multicast_SetMarked(true);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (GetKeyState(VK_END) & 1)
		{
			g_Console->printdbg(g_Console->Colors.pink, "Shutting everything down! Prepare to crash or not XD...");
			//MH_DisableHook(pProcessEvent);
			//MH_RemoveHook(pProcessEvent);

			//PR_hook.ClearHooks();

			g_ssdma->safeToAccessMemory.store(false);
			g_ssdma->RenderReady.store(false);
			g_ssdma->FoundBasePointers.store(false);
			g_Running.store(false);
			MH_RemoveHook(pProcessEvent);
			g_Console->printdbg(g_Console->Colors.pink, "Sleeping 50ms to give everything a chance...");
			std::this_thread::sleep_for(std::chrono::milliseconds(50));

			g_Console->~Console();
			g_ssdma->~C_SSDMA();
			//PR_hook.~VMTHook();
			
			MH_Uninitialize();
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	//if loop breaks, do exit.
	FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
	return EXIT_SUCCESS;
}


#pragma endregion

#pragma region C_SSDMA

bool C_SSDMA::Init()
{
	this->Settings = new CheatSettings();
	this->gamebase = (uintptr_t)GetModuleHandleA(0);
	if (this->Settings && this->gamebase)
		return true;


	return false;
}

bool C_SSDMA::GetKeyState(WORD vKey, SHORT delta)
{
	static int lastTick = 0;

	bool result = ((GetAsyncKeyState(vKey) & 0x8000) && (GetTickCount64() - lastTick) > delta);

	if (result)
		lastTick = GetTickCount64();

	return result;
}

int C_SSDMA::CalcCircleSides()
{
	if(g_ssdma)
	{
		if(g_ssdma->safeToAccessMemory.load() && g_ssdma->FoundBasePointers.load())
		{
			auto PI = 3.1415926535897932384626433832795f;
			auto r2 = g_ssdma->_radius * g_ssdma->_radius;
			auto circ = PI * r2;
			return int(circ);
		}
	}
	return 0;
}

#pragma endregion
