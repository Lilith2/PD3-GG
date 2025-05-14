// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch_wrapper.h"
#include "ssdma.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        {
            //DisableThreadLibraryCalls(hModule);
            SSDMA_Base::g_hModule = hModule;
            HANDLE hThread = CreateThread(0, 0, MainThread, hModule, 0, 0);

            if (hThread)
                CloseHandle(hThread);
            break;
        }
        case DLL_PROCESS_DETACH:
            break;
        default:
            break;
    }
    return TRUE;
}

