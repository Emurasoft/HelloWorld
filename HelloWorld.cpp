#include "HelloWorld.h"
_ETL_IMPLEMENT

void MyCFrame::OnCommand(HWND hwnd)
{
	Editor_InsertW(m_hWnd, L"Hello World!");
}