#pragma once
#include "tronpch.h"

#ifdef  TRON_PLATFORM_WINDOWS
	#ifdef TRON_BUILD_DLL
		#define TRON_API __declspec(dllexport)
	#else
		#define TRON_API __declspec(dllimport)
	#endif // TRON_BUILD_DLL
#else
#error Tron supports windows only.
#endif //  TRON_PLATFORM_WINDOWS

#ifdef TRON_ENABLE_ASSERTS
	#define TRON_ASSERT(x, ...) { if(!(x)) { TRON_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define TRON_CORE_ASSERT(x, ...) { if(!(x)) { TRON_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define TRON_ASSERT(x, ...)
	#define TRON_CORE_ASSERT(x, ...)
#endif


#define BIT(x) (1 << x)
