
// CTinyEditorView.h : CTinyEditorView ��Ľӿ�
//

#pragma once


class CTinyEditorView : public CEditView
{
protected: // �������л�����
	CTinyEditorView();
	DECLARE_DYNCREATE(CTinyEditorView)

// ����
public:
	CTinyEditorDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CTinyEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTinyEditorView.cpp �еĵ��԰汾
inline CTinyEditorDoc* CTinyEditorView::GetDocument() const
   { return reinterpret_cast<CTinyEditorDoc*>(m_pDocument); }
#endif

