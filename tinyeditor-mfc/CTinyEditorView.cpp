
// CTinyEditorView.cpp : CTinyEditorView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTinyEditorApp.h"
#endif

#include "CTinyEditorDoc.h"
#include "CTinyEditorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTinyEditorView

IMPLEMENT_DYNCREATE(CTinyEditorView, CEditView)

BEGIN_MESSAGE_MAP(CTinyEditorView, CEditView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CTinyEditorView ����/����

CTinyEditorView::CTinyEditorView()
{
	// TODO: �ڴ˴���ӹ������

}

CTinyEditorView::~CTinyEditorView()
{
}

BOOL CTinyEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// ���û���

	return bPreCreated;
}

void CTinyEditorView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTinyEditorView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTinyEditorView ���

#ifdef _DEBUG
void CTinyEditorView::AssertValid() const
{
	CEditView::AssertValid();
}

void CTinyEditorView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CTinyEditorDoc* CTinyEditorView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTinyEditorDoc)));
	return (CTinyEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CTinyEditorView ��Ϣ�������
