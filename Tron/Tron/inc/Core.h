#pragma once

#ifdef  TRON_PLATFORM_WINDOWS
	#ifdef TRON_BUILD_DLL
		#define TRON_API __declspec(dllexport)
	#else
		#define TRON_API __declspec(dllimport)
	#endif // TRON_BUILD_DLL
#else
#error Tron supports windows only.
#endif //  TRON_PLATFORM_WINDOWS

