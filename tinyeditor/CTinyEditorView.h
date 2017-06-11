
// CTinyEditorView.h : CTinyEditorView 类的接口
//

#pragma once


class CTinyEditorView : public CEditView
{
protected: // 仅从序列化创建
	CTinyEditorView();
	DECLARE_DYNCREATE(CTinyEditorView)

// 特性
public:
	CTinyEditorDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CTinyEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTinyEditorView.cpp 中的调试版本
inline CTinyEditorDoc* CTinyEditorView::GetDocument() const
   { return reinterpret_cast<CTinyEditorDoc*>(m_pDocument); }
#endif

