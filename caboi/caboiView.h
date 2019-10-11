
// caboiView.h : interface of the CcaboiView class
//

#pragma once
#include"hcn.h"
#include"tamgiac.h"
#include"conca.h"

class CcaboiView : public CView
{
protected: // create from serialization only
	CcaboiView();
	DECLARE_DYNCREATE(CcaboiView)

// Attributes
public:
	CcaboiDoc* GetDocument() const;

// Operations
public:
	//hcn to;
	conca ca1,ca2;
	int check;
	int kt;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CcaboiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in caboiView.cpp
inline CcaboiDoc* CcaboiView::GetDocument() const
   { return reinterpret_cast<CcaboiDoc*>(m_pDocument); }
#endif

