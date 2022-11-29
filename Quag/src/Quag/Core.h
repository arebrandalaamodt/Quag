#pragma once

#ifdef QU_PLATFORM_WINDOWS
	#ifdef QU_BUILD_DLL
		#define QUAG_API __declspec(dllexport)
	#else
		#define QUAG_API __declspec(dllimport)
	#endif // QG_BUILD_DLL
#else
	#error Quag only Supports Windows!
#endif // QG_PLATFORM_WINDOWS