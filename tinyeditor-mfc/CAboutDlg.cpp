
#include "stdafx.h"

#include "CAboutDlg.h"


CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
    ON_WM_CREATE()
END_MESSAGE_MAP()


int CAboutDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    if (CDialogEx::OnCreate(lpCreateStruct) == -1)
        return -1;

    // TODO:  在此添加您专用的创建代码



    HWND hwnd = CreateWindow(_T("TE"), _T("Sample"), WS_CHILD | WS_VISIBLE, 0, 0, 100, 100, this->GetSafeHwnd(), NULL, AfxGetInstanceHandle(), NULL);

    CString message;
    message.Format(_T("------Create window retult: hwnd=%u\n"), hwnd);
    OutputDebugString(message);
    
    return 0;
}
