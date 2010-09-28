/////////////////////////////////////////////////////////////////////////////
// AdvComboBoxDemoDlg.h : header file
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

#if !defined(AFX_ADVCOMBOBOXDEMODLG_H__564F38A7_4E17_4863_86E9_1E4BEA7CBF30__INCLUDED_)
#define AFX_ADVCOMBOBOXDEMODLG_H__564F38A7_4E17_4863_86E9_1E4BEA7CBF30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CAdvComboBoxDemoDlg dialog
#include "AdvComboBox.h"

class CAdvComboBoxDemoDlg : public CDialog
{
// Construction
public:
	CAdvComboBoxDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CAdvComboBoxDemoDlg)
	enum { IDD = IDD_ADVCOMBOBOXDEMO_DIALOG };
	CSpinButtonCtrl	m_ctlIndexSpin;
	CSpinButtonCtrl	m_ctlVisibleItemsSpin;
	CEdit	m_ctlVisibleItemsEdit;
	CEdit	m_ctlIndexEdit;
	CAdvComboBox	m_ctlAdvCombo;
	BOOL	m_bCheckedList;
	BOOL	m_bFlatStyle;
	BOOL	m_bDisabledIndex;
	BOOL	m_bCheckedIndex;
	int		m_nIndex;
	BOOL	m_bAutoAppend;
	BOOL	m_bAutoSuggest;
	int		m_nVisibleItems;
	//}}AFX_DATA
	int		m_nAdvCombo;
	CString	m_strAdvCombo;

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdvComboBoxDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAdvComboBoxDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCheckedCheck();
	afx_msg void OnFlatCheck();
	afx_msg void OnIdxDisabledCheck();
	afx_msg void OnIdxCheckedCheck();
	afx_msg void OnChangeIndexEdit();
	afx_msg void OnGettextButton();
	afx_msg void OnGetidxButton();
	afx_msg void OnAutosuggestCheck();
	afx_msg void OnAutoappendCheck();
	afx_msg void OnChangeVisibleItemsEdit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADVCOMBOBOXDEMODLG_H__564F38A7_4E17_4863_86E9_1E4BEA7CBF30__INCLUDED_)
