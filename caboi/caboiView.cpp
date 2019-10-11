
// caboiView.cpp : implementation of the CcaboiView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "caboi.h"
#endif

#include "caboiDoc.h"
#include "caboiView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CcaboiView

IMPLEMENT_DYNCREATE(CcaboiView, CView)

BEGIN_MESSAGE_MAP(CcaboiView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CcaboiView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CcaboiView construction/destruction

CcaboiView::CcaboiView()
{
	// TODO: add construction code here
	ca1.thietlap(250, 150, 350, 180);
	//ca2.thietlap(500, 300, 600, 360);
	

}

CcaboiView::~CcaboiView()
{
}

BOOL CcaboiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CcaboiView drawing

void CcaboiView::OnDraw(CDC* /*pDC*/)
{
	CcaboiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);

	

	CPen *pen1;
	pen1 = new CPen(PS_SOLID, 1, RGB(32, 90, 167));
	CPen *oldpen1;
	oldpen1 = pDC.SelectObject(pen1);
	ca1.veca(&pDC);

	/*CPen *pen2;
	pen2 = new CPen(PS_SOLID, 1, RGB(32, 90, 167));
	CPen *oldpen2;
	oldpen2 = pDC.SelectObject(pen2);
	ca2.veca(&pDC);*/



	

/*	CBrush*Brush1;
	Brush1 = new CBrush(RGB(32, 90, 167));
	CBrush*oldbrush1;
	oldbrush1 = pDC.SelectObject(Brush1);
	//to.vehcnto(&pDC);
	*/
	// TODO: add draw code for native data here
}


// CcaboiView printing


void CcaboiView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CcaboiView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CcaboiView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CcaboiView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CcaboiView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CcaboiView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CcaboiView diagnostics

#ifdef _DEBUG
void CcaboiView::AssertValid() const
{
	CView::AssertValid();
}

void CcaboiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CcaboiDoc* CcaboiView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CcaboiDoc)));
	return (CcaboiDoc*)m_pDocument;
}
#endif //_DEBUG


// CcaboiView message handlers


void CcaboiView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	
	// TODO: Add your message handler code here and/or call default
	check = nChar;
	if (check == 37)
	{
		kt = 1;
		CClientDC pDC(this);
		/*CPen *pen;
		pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		CPen *oldpen;
		oldpen = pDC.SelectObject(pen);
		ca1.veca(&pDC);
		//ca2.veca(&pDC);
		*/
		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(32, 90, 167));
		CPen *oldpen1;
		oldpen1 = pDC.SelectObject(pen1);
		ca1.catrai(&pDC);
		ca1.veca(&pDC);
		//ca1.vecaquaydau(&pDC);
		
		//ca2.catrai(&pDC);
		//ca2.vecaquaydau(&pDC);
		/*CBrush*Brush;
		Brush = new CBrush(RGB(32, 90, 167));
		CBrush*oldbrush;
		pDC.SelectObject(Brush);
		
		*/
		
		
	}
	if (check == 39)
	{
		kt = 2;
		CClientDC pDC(this);
		/*CPen *pen;
		pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		CPen *oldpen;
		oldpen = pDC.SelectObject(pen);*/
		//ca1.vecaquaydau(&pDC);

		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(32, 90, 167));
		CPen *oldpen1;
		oldpen1 = pDC.SelectObject(pen1);
		ca1.caphai(&pDC);
		ca1.veca(&pDC);

	}
	if (check == 38)
	{
		CClientDC pDC(this);
	
		{
			CPen *pen1;
			pen1 = new CPen(PS_SOLID, 1, RGB(32, 90, 167));
			CPen *oldpen1;
			oldpen1 = pDC.SelectObject(pen1);
			ca1.calen(&pDC);
			ca1.veca(&pDC);
		}
		

	}
	if (check == 40)
	{
		CClientDC pDC(this);
		
		{
			CPen *pen1;
			pen1 = new CPen(PS_SOLID, 1, RGB(32, 90, 167));
			CPen *oldpen1;
			oldpen1 = pDC.SelectObject(pen1);
			ca1.caxuong(&pDC);
			ca1.veca(&pDC);
		}
		

	}


	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
