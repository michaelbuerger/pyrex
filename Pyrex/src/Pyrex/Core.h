#pragma once

#ifdef PX_PLATFORM_WINDOWS
	#ifdef PX_BUILD_DLL
		#define PX_API __declspec(dllexport)
	#else
		#define PX_API __declspec(dllimport)
	#endif
#else
	#error Pyrex is only supported on Windows (atm).
#endif