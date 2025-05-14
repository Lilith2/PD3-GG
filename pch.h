// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#define WIN32_LEAN_AND_MEAN 

// STANDARD LIBRARIES
#include <Windows.h>
#include <winternl.h>
#include <WinUser.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <math.h>
#include <cstdio>
#include <thread>
#include <atomic>
#include <map>
#include <conio.h>
#include <wchar.h>
#include <sstream>
#include <winhttp.h>
#include <mutex>
#include <vector>
// minhook
#include "MinHook/MinHook.h"

#endif //PCH_H
