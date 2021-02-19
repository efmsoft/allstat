#pragma once

#include <AllStat/AllStat.h>

using namespace AllStat;

// Name2Code

class Name2Code : public CPropertyPage
{
	DECLARE_DYNAMIC(Name2Code)

public:
	Name2Code();
	virtual ~Name2Code();

	void OnNameSearch(const char* name);
	void DoDataExchange(CDataExchange* pDX) override;
	BOOL OnInitDialog() override;
	BOOL OnApply() override;
	void OnTargetChanged();
	void UpdateTargetOS();

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
};


