#pragma once

#include "resource.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#define VERIFY(f) _ASSERTE(f)
#define ETL_FRAME_CLASS_NAME MyCFrame
#include "etlframe.h"

class MyCFrame : public CETLFrame<MyCFrame>
{
public:
	enum {
		_IDS_NAME = IDS_NAME,
		_IDS_MENU = IDS_NAME,
		_IDS_STATUS = IDS_NAME,
		_IDS_VER = 0,
		_USE_LOC_DLL = 0,
		_IDB_BITMAP = IDB_ICON_TRUE_SMALL,
		_IDB_16C_24 = 0,
		_IDB_TRUE_16_DEFAULT = 0,
		_IDB_TRUE_16_HOT = 0,
		_IDB_TRUE_16_BW = 0,
		_IDB_TRUE_24_DEFAULT = 0,
		_IDB_TRUE_24_HOT = 0,
		_IDB_TRUE_24_BW = 0,
		_MASK_TRUE_COLOR = RGB(255,255,255),
		_ALLOW_OPEN_SAME_GROUP = 0,
		_ALLOW_MULTIPLE_INSTANCES = 0,
		_MAX_EE_VERSION = 0,
		_MIN_EE_VERSION = 0,
		_SUPPORT_EE_PRO = 0,
		_SUPPORT_EE_STD = 0
	};

	void OnCommand(HWND hwnd);

	void OnEvents(HWND hwnd, UINT nEvent, LPARAM lParam) {}

	BOOL QueryStatus(HWND hwnd, LPBOOL pbChecked) {
		*pbChecked = FALSE;
		return TRUE;
	}

	BOOL DisableAutoComplete(HWND hwnd) {
		return FALSE;
	}

	BOOL UseDroppedFiles(HWND hwnd) {
		return FALSE;
	}

	BOOL QueryUninstall(HWND hwnd) {
		return FALSE;
	}

	BOOL SetUninstall(HWND hwnd, LPTSTR command, LPTSTR param) {
		return UNINSTALL_SIMPLE_DELETE;
	}

	BOOL QueryProperties(HWND hwnd) {
		return FALSE;
	}

	BOOL SetProperties(HWND hwnd) {
		return FALSE;
	}

	BOOL PreTranslateMessage(HWND hwnd, MSG* pMsg) {
		return FALSE;
	}

	LRESULT UserMessage(HWND hwnd, WPARAM wParam, LPARAM lParam) {
		return NULL;
	}
};