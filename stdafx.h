#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <crtdbg.h>
#include <tchar.h>
#pragma comment(lib,"shlwapi.lib")

//#ifdef _DEBUG
//#define VERIFY(f)          _ASSERTE(f)
//#else
//#define VERIFY(f)          ((void)(f))
//#endif

//#ifdef _DEBUG
//   #define _DEBUG_NEW   new( _NORMAL_BLOCK, __FILE__, __LINE__)
//   #define _RELEASE_NEW
//#else
//   #define _DEBUG_NEW
//   #define _RELEASE_NEW new(nothrow)
//#endif