#pragma once
class MyCFrame : public CETLFrame<MyCFrame>
{
public:
	enum {
		_USE_LOC_DLL = 0,
		_IDS_MENU = IDS_NAME,
		_IDS_STATUS = IDS_NAME,
		_IDS_NAME = IDS_NAME,
		_IDS_VER = 0,
		_IDB_BITMAP = 0,
		_IDB_16C_24 = 0,
		_IDB_TRUE_16_DEFAULT = 0,
		_IDB_TRUE_16_HOT = 0,
		_IDB_TRUE_16_BW = 0,
		_IDB_TRUE_24_DEFAULT = 0,
		_IDB_TRUE_24_HOT = 0,
		_IDB_TRUE_24_BW = 0,
		_MASK_TRUE_COLOR = 0,
		_MASK_256_COLOR = 0,
		_ALLOW_OPEN_SAME_GROUP = 0,
		_ALLOW_MULTIPLE_INSTANCES = 0,
		_MAX_EE_VERSION = 0,
		_MIN_EE_VERSION = 0,
		_SUPPORT_EE_PRO = 0,
		_SUPPORT_EE_STD = 0
	};

	void OnCommand(HWND hwnd)
	{
		//Editor_InsertW(m_hWnd,L"Hello World! ");
	}

	void OnEvents(HWND hwnd, UINT nEvent, LPARAM lParam)
	{

	}

	BOOL QueryStatus(HWND hwnd, LPBOOL pbChecked)
	{*pbChecked = FALSE; return TRUE;}

	BOOL DisableAutoComplete(HWND hwnd)
	{return FALSE;}

	BOOL UseDroppedFiles(HWND hwnd)
	{return FALSE;}

	BOOL QueryUninstall(HWND hwnd)
	{return FALSE;}

	BOOL SetUninstall(HWND hwnd, LPTSTR command, LPTSTR param)
	{return UNINSTALL_SIMPLE_DELETE;}

	BOOL QueryProperties(HWND hwnd)
	{return FALSE;}

	BOOL SetProperties(HWND hwnd)
	{return FALSE;}

	BOOL PreTranslateMessage(HWND hwnd, MSG* pMsg)
	{return FALSE;}

	LRESULT UserMessage(HWND hwnd, WPARAM wParam, LPARAM lParam)
	{return NULL;}
};
_ETL_IMPLEMENT