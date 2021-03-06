// GeoDemoDlg.h : header file
//
//{{AFX_INCLUDES()
#include "webbrowser2.h"
//}}AFX_INCLUDES

#if !defined(AFX_GEODEMODLG_H__21C30D28_2FDC_49E9_8375_411D95E9622D__INCLUDED_)
#define AFX_GEODEMODLG_H__21C30D28_2FDC_49E9_8375_411D95E9622D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CGeoDemoDlg dialog

class CGeoDemoDlg : public CDialog
{
// Construction
public:
	CGeoDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CGeoDemoDlg)
	enum { IDD = IDD_GEODEMO_DIALOG };
	CWebBrowser2	m_myweb;
	CString	m_latitude;
	CString	m_longitude;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGeoDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CGeoDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCallback();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GEODEMODLG_H__21C30D28_2FDC_49E9_8375_411D95E9622D__INCLUDED_)
