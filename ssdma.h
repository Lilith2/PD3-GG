#pragma once

#include "Dumper7/SDK/Engine_classes.hpp"
#include "Dumper7/SDK/Engine_parameters.hpp"

#include "Dumper7/SDK/Starbreeze_classes.hpp"
#include "Dumper7/SDK/Starbreeze_parameters.hpp"
#include "Dumper7/SDK/CH_BaseCop_classes.hpp"


extern DWORD WINAPI MainThread(LPVOID dwModule);

namespace SSDMA_Base
{
	std::string fast_wstring_to_string(wchar_t* wstr);

	typedef uint64_t u64;
	typedef uint32_t u32;
	typedef uint16_t u16;
	typedef  uint8_t  u8;

	typedef  int64_t s64;
	typedef  int32_t s32;
	typedef  int16_t s16;
	typedef   int8_t  s8;

	

	inline HMODULE g_hModule{};
	inline std::atomic_bool g_Running{};

	struct Vector2
	{
		float x, y;
	};

	struct Vector3
	{
		float x, y, z;
	};

	struct Vector4
	{
		float x, y, z, w;
	};

	struct DVector2
	{
		double x, y;
	};

	struct DVector3
	{
		double x, y, z;
	};

	struct DVector4
	{
		double x, y, z, w;
	};

	class Console
	{
	public:
		enum EColors : int
		{
			EColor_dark_blue = 1,
			EColor_dark_green,
			EColor_dark_teal,
			EColor_dark_red,
			EColor_dark_pink,
			EColor_dark_yellow,
			EColor_dark_white,
			EColor_dark_gray,
			EColor_blue,
			EColor_green,
			EColor_teal,
			EColor_red,
			EColor_pink,
			EColor_yellow,
			EColor_white,
			EColor_DEFAULT = EColor_white
		};

	public:
		struct ColorStruct {
			static const EColors dark_blue = EColor_dark_blue;
			static const EColors dark_green = EColor_dark_green;
			static const EColors dark_teal = EColor_dark_teal;
			static const EColors dark_red = EColor_dark_red;
			static const EColors dark_pink = EColor_dark_pink;
			static const EColors dark_yellow = EColor_dark_yellow;
			static const EColors dark_white = EColor_dark_white;
			static const EColors dark_gray = EColor_dark_gray;
			static const EColors blue = EColor_blue;
			static const EColors green = EColor_green;
			static const EColors teal = EColor_teal;
			static const EColors red = EColor_red;
			static const EColors pink = EColor_pink;
			static const EColors yellow = EColor_yellow;
			static const EColors white = EColor_white;
			static const EColors DEFAULT = EColor_DEFAULT;
		};
	public:
		static const ColorStruct Colors;

	public:
		FILE*								pOutStream = nullptr;
		FILE*								toDiskLog	= nullptr;
		bool								bDiskLogging = false;
		bool								bInit = false;
		bool								bShow{ false };
		bool								bVerbose{ false };

	public:
		void								InitializeConsole(const char* ConsoleName, bool bShowWindow = true);
		void								cLog(const EColors Color = EColor_DEFAULT, const char* fmt = "", ...);
		void								LogError(const char* fmt, ...);
		void								DestroyConsole();
		void								SetConsoleVisibility(bool bShow);
		HANDLE								GetHandle();
		HWND								GetWindowHandle();

	public:
		void								Log(const char* fmt, ...);
		void								Clear();
		void								printdbg(EColors color, const char* fmt, ...);
		void								WriteToFile(const char* fmt, ...);

	public:
		explicit Console();
		Console(const char* title);
		Console(const char* title, bool bShow);
		~Console();

	private:
		HANDLE								pHandle{};
		HWND								pHwnd{};
	};
	inline std::unique_ptr<Console> g_Console;

	class VMTHook
	{
	public:

		void** vmt = nullptr; // Pointer to the VMT, we're using it more as an array of void*

		VMTHook();
		VMTHook(void* vmt); // Hook original VMT by it's address
		//VMTHook(DWORD64* vmt_ptr); // Create Shadow VMT from VMT pointer ( Not implemented here )
		~VMTHook(); // Destructor, removes all hooks

		void* Hook(int index, void* hk);
		void ClearHooks();
	private:
		std::map<int, void*>::iterator func_iterator; // Iterator so we can iterate the map below
		std::map<int, void*> hooked_funcs; // std::map which holds the index hooked and the original function's address
	};

	class C_SSDMA
	{
	public:
		uint64_t*							MethodsTable{ nullptr };
		int									mGamePID{ 0 };
		HMODULE								pGameModule{ 0 };
		__int64								pGameBaseAddr{ 0 };
		HANDLE								pGameHandle{ 0 };
		HWND								pGameWindow{ 0 };
		int									mGameWidth{ 0 };
		int									mGameHeight{ 0 };
		LPCSTR								pGameTitle{ 0 };
		LPCSTR								pClassName{ 0 };
		LPCSTR								pGamePath{ 0 };

		//	MENU
		bool								bShowMenu{ false };
		bool								bShowHud{ false };
		bool								bShowDemo{ false };
		bool								bShowDemoWindow{ false };
		bool								bShowStyleEditor{ false };
		int									_radius = 0;
		int									_circle_sides = 0;

		std::atomic_bool b_send;

		struct CheatSettings
		{
			bool	b_ESP = true;
			bool	b_PlayerESP = true;
			bool	b_VIPChams = true;
			bool	b_PlayerText = false;
			bool	b_ForceKeyReader = false;
			bool    b_LogFunctions = false;
			bool	b_test = true;

			SDK::FVector2D _FontScaling = { 1,1 };
		};

		// entity list arrays
		static const int MAX_CHARACTERS = 256;
		SDK::ASBZModuleActor* ASBZKeycardReaderList[64];
		SDK::ASBZAICharacter* ASBZAICharacterList[MAX_CHARACTERS];
		//count of elements updated in post render loop
		int _PlayerList = 0;
		int _AIList = 0;
		SDK::ASBZPlayerCharacter* _ACharacter = nullptr;


		bool Init();
		bool GetKeyState(WORD vKey, SHORT delta);
		int CalcCircleSides();

		SDK::UWorld* _CurrentWorld = nullptr;
		CheatSettings* Settings{};
		uintptr_t gamebase = 0;
		std::atomic_bool safeToAccessMemory;
		std::atomic_bool FoundBasePointers;
		std::atomic_bool RenderReady;
		
		C_SSDMA()
		{
			this->Settings = new CheatSettings();
		};
		~C_SSDMA()
		{
			delete Settings;
			Settings = nullptr;
		};
	}; inline std::unique_ptr<C_SSDMA> g_ssdma;


#define M_PI	3.14159265358979323846264338327950288419716939937510

	//Vector2
	class _Vector2
	{
	public:
		_Vector2() : x(0.f), y(0.f)
		{
		}

		_Vector2(float _x, float _y) : x(_x), y(_y)
		{
		}
		~_Vector2()
		{
		}

		float x;
		float y;

		inline float Distance(_Vector2 v)
		{
			return float(sqrtf(powf(v.x - x, 2.0) + powf(v.y - y, 2.0)));
		}
	};
	//Vector3
	class _Vector3
	{
	public:
		_Vector3() : x(0.f), y(0.f), z(0.f)
		{
		}

		_Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
		{
		}
		~_Vector3()
		{
		}

		inline float len(_Vector3 v)
		{
			return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
		}

		inline float magnitude()
		{
			return sqrt(x * x + y * y + z * z);
		}

		float x;
		float y;
		float z;

		inline float Dot(_Vector3 v)
		{
			return x * v.x + y * v.y + z * v.z;
		}

		inline float Distance(_Vector3 v)
		{
			return float(sqrtf(powf(v.x - x, 2) + powf(v.y - y, 2) + powf(v.z - z, 2)));
		}

		bool IsValid()
		{
			return (x || y || z);
		}

		_Vector3 operator+(_Vector3 v)
		{
			return _Vector3(x + v.x, y + v.y, z + v.z);
		}

		_Vector3 operator-(_Vector3 v)
		{
			return _Vector3(x - v.x, y - v.y, z - v.z);
		}

		_Vector3 Divide(float v)
		{
			return _Vector3(x / v, y / v, z / v);
		}

		bool operator==(_Vector3 v)
		{
			return (x == v.x && y == v.y && z == v.z);
		}

		bool operator==(int v)
		{
			return (x == v || y == v || z == v);
		}

		_Vector3 operator*(float number)
			const {
			return _Vector3(x * number, y * number, z * number);
		}
	};
	//Vector4
	class _Vector4
	{
	public:
		_Vector4() : x(0.f), y(0.f), z(0.f), w(0.f)
		{
		}

		_Vector4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w)
		{
		}
		~_Vector4()
		{
		}

		float x;
		float y;
		float z;
		float w;
	};

}