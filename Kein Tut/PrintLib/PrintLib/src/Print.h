#pragma once

#ifdef PRINTLIB_EXPORTS
#define PRINTLIB_API __declspec(dllexport)
#else
#define PRINTLIB_API __declspec(dllimport)
#endif

extern PRINTLIB_API void doPrint();
