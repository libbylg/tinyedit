#include "stdafx.h"

#include "TE.h"



LRESULT WINAPI TEProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
    static int count = 0;
    CString message;
    message.Format(_T("------- Receive Message: hwnd=%u, msg=0x%X, wparam=%p, lparam=%p\n"), hwnd, msg, wparam, lparam);
    OutputDebugString(message);
    switch (msg) 
    {
    case WM_PAINT:
        break;
    }

    return ::DefWindowProc(hwnd, msg, wparam, lparam);
}

ATOM WINAPI RegisterTEClass(HINSTANCE inst)
{
    WNDCLASSEX wc;
    wc.cbSize = sizeof(wc);
    wc.style = CS_DBLCLKS;
    wc.lpfnWndProc = TEProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = inst;
    wc.hIcon = NULL;
    wc.hCursor = NULL;
    wc.hbrBackground = GetSysColorBrush(COLOR_3DFACE);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = _T("TE");
    wc.hIconSm = NULL;
    ATOM ret = ::RegisterClassEx(&wc);

    CString message;
    message.Format(_T("------- RegisterClassEx return=%u\n"), ret);
    OutputDebugString(message);

    return ret;
}


