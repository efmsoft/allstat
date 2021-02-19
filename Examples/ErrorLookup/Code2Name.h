#pragma once

#include <AllStat/AllStat.h>

using namespace AllStat;

// Code2Name

class Code2Name : public CPropertyPage
{
	DECLARE_DYNAMIC(Code2Name)

public:
	Code2Name();
	virtual ~Code2Name();
	
	void DoDataExchange(CDataExchange* pDX) override;
	BOOL OnInitDialog() override;
	BOOL OnApply() override;

	void OnCodeSearch(const char* code);
	void UpdateTargetOS();

	static bool GetCode(class CErrorLookupDlg* parent, CString& str, unsigned& code);

	void AddData(int row, int col, LPCTSTR str);
	static CString GetTargetOS(AS_OS g);

	void OnRowSelect(NMHDR* pNMHDR, LRESULT* pResult);
	void SelectRow(int row, bool byevent = false);
	void OnTargetChanged();
	void OnHeaderClicked(NMHDR* pNMHDR, LRESULT* pResult);
	void SortItems();
	static int CALLBACK CompareItems(LPARAM p1, LPARAM p2, LPARAM context);

protected:
	DECLARE_MESSAGE_MAP()

	CString Descr;
	CString Code;
	CString Name;
	CString Source;
	CString OS;

	CString TargetOS;
	int IdxTargetOS;

	CEdit EdtDescr;
	CEdit EdtCode;
	CEdit EdtName;
	CEdit EdtSource;
	CEdit EdtOS;

	CComboBox CbTargetOS;
	CListCtrl List;

	ItemArray Items;
	bool InSelectRow;

	int SortColumn;
	bool SortAscending;
};


