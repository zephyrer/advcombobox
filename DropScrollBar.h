/////////////////////////////////////////////////////////////////////////////
// DropScrollBar.h : header file
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

#if !defined(AFX_DROPSCROLLBAR_H__8814CD20_3D94_4B9C_8A64_DF4E9F6DD4DC__INCLUDED_)
#define AFX_DROPSCROLLBAR_H__8814CD20_3D94_4B9C_8A64_DF4E9F6DD4DC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DropWnd.h"
class CDropListBox;

/////////////////////////////////////////////////////////////////////////////
// CDropScrollBar window

class CDropScrollBar : public CScrollBar
{
// Construction
public:
	CDropScrollBar();

// Attributes
public:

// Operations
public:
	void SetListBox( CDropListBox* pListBox );

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDropScrollBar)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDropScrollBar();

	// Generated message map functions
protected:
	//{{AFX_MSG(CDropScrollBar)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void VScroll(UINT nSBCode, UINT nPos);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	afx_msg LONG OnSetCapture( WPARAM wParam, LPARAM lParam );
	afx_msg LONG OnReleaseCapture( WPARAM wParam, LPARAM lParam );

	DECLARE_MESSAGE_MAP()

private:
	CDropListBox* m_pListBox;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DROPSCROLLBAR_H__8814CD20_3D94_4B9C_8A64_DF4E9F6DD4DC__INCLUDED_)
