#include "stdafx.h"
#define ETL_FRAME_CLASS_NAME MyCFrame
#include "etlframe.h"
#include "resource.h"
#include "HelloWorld.h"
_ETL_IMPLEMENT

void MyCFrame::OnCommand(HWND hwnd)
{
	Editor_InsertW(m_hWnd,L"Hello World! ");
}