/////////////////////////////////////////////////////////////////////////////
// DropListBox.h : header file
// 
// Copyright (c) 2010 Mathias Tunared
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// This file is provided "as is" with no expressed or implied warranty.
// The author accepts no liability for any damage/loss of business that
// this product may cause.
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DROPLISTBOX_H__E49DED7C_CBC2_4458_A72C_F4C428927132__INCLUDED_)
#define AFX_DROPLISTBOX_H__E49DED7C_CBC2_4458_A72C_F4C428927132__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DropListBox.h : header file
//
#include "DropWnd.h"
#include "DropScrollBar.h"

#define WM_SELECTED_ITEM		(WM_USER+1)
#define WM_DESTROY_DROPLIST		(WM_USER+2)
#define WM_VRC_SETCAPTURE		(WM_USER+3)
#define WM_VRC_RELEASECAPTURE	(WM_USER+4)

class CDropScrollBar;

/////////////////////////////////////////////////////////////////////////////
// CDropListBox window

class CDropListBox : public CListBox
{
// Construction
public:
	CDropListBox( CWnd* pComboParent, CDropScrollBar* pScroll );

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDropListBox)
	public:
	virtual BOOL DestroyWindow();
	//}}AFX_VIRTUAL

// Implementation
public:
	int SetCurSel( int nSelect );
	void SetDLBStyle( DWORD dwStyle );
	int AddListItem( LIST_ITEM& item );
	void GetTextSize( LPCTSTR lpszText, int nCount, CSize& size );
	void SetTopIdx( int nPos, BOOL bUpdateScrollbar = FALSE );
	int GetBottomIndex();
	virtual ~CDropListBox();

	// Generated message map functions
protected:
	//{{AFX_MSG(CDropListBox)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	afx_msg int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
	afx_msg void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	//}}AFX_MSG
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg LONG OnSetCapture( WPARAM wParam, LPARAM lParam );
	afx_msg LONG OnReleaseCapture( WPARAM wParam, LPARAM lParam );

	DECLARE_MESSAGE_MAP()

private:
	CWnd* m_pComboParent;
	CFont* m_pListFont;
	CDropScrollBar* m_pScroll;
	int m_nLastTopIdx;
	DWORD m_dwACBStyle;
	BOOL m_bSelectDisabled;

};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DROPLISTBOX_H__E49DED7C_CBC2_4458_A72C_F4C428927132__INCLUDED_)
