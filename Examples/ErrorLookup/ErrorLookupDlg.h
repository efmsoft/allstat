
// ErrorLookupDlg.h : header file
//

#pragma once

#include "Code2Name.h"
#include "Name2Code.h"

// CErrorLookupDlg dialog
class CErrorLookupDlg : public CPropertySheet
{
// Construction
public:
	CErrorLookupDlg(CWnd* pParent = nullptr);	// standard constructor

	void OnNameSearch(const char* name);
	void OnCodeSearch(const char* code);

	bool IsActivePage(CPropertyPage* page);
	void UpdateTargetOS(CPropertyPage* sender);

// Implementation
protected:

	// Generated message map functions
	DECLARE_MESSAGE_MAP()

	virtual BOOL OnInitDialog();

	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);

	Code2Name C2NamePage;
	Name2Code N2CodePage;
	HICON m_hIcon;
};
