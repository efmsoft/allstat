// Name2Code.cpp : implementation file
//

#include "Precompile.h"
#include "Code2Name.h"
#include "ErrorLookupDlg.h"
#include "ErrorLookup.h"
#include "Name2Code.h"

#pragma warning(disable : 26812 26454)

// Name2Code

IMPLEMENT_DYNAMIC(Name2Code, CPropertyPage)

Name2Code::Name2Code()
  : CPropertyPage(IDD_NAME2CODE, IDS_NAME2CODE)
  , IdxTargetOS(0)
{
  m_psp.dwFlags &= ~PSP_HASHELP;
}

Name2Code::~Name2Code()
{
}

void Name2Code::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);

  DDX_Control(pDX, IDC_DESCRIPTION, EdtDescr);
  DDX_Control(pDX, IDC_CODE, EdtCode);
  DDX_Control(pDX, IDC_CONSTANT, EdtName);
  DDX_Control(pDX, IDC_SOURCE, EdtSource);
  DDX_Control(pDX, IDC_TARGETOS, CbTargetOS);
  DDX_Control(pDX, IDC_OS, EdtOS);

  DDX_Text(pDX, IDC_DESCRIPTION, Descr);
  DDX_Text(pDX, IDC_CODE, Code);
  DDX_Text(pDX, IDC_CONSTANT, Name);
  DDX_Text(pDX, IDC_SOURCE, Source);
  DDX_Text(pDX, IDC_OS, OS);

  DDX_CBString(pDX, IDC_TARGETOS, TargetOS);
  DDX_CBIndex(pDX, IDC_TARGETOS, IdxTargetOS);
}

BEGIN_MESSAGE_MAP(Name2Code, CPropertyPage)
  ON_CBN_SELENDOK(IDC_TARGETOS, OnTargetChanged)
END_MESSAGE_MAP()

// Name2Code message handlers

BOOL Name2Code::OnInitDialog()
{
  __super::OnInitDialog();

  CbTargetOS.AddString(_T("Any"));
  CbTargetOS.AddString(_T("Windows"));
  CbTargetOS.AddString(_T("Linux"));
  CbTargetOS.AddString(_T("Mac"));
  CbTargetOS.AddString(_T("Solaris"));

  IdxTargetOS = ::GetTargetOS();

  UpdateData(false);
  return TRUE;
}

void Name2Code::OnTargetChanged()
{
  UpdateData();
  SetTargetOS((AS_OS)IdxTargetOS);
  ((CErrorLookupDlg*)GetParent())->UpdateTargetOS(this);

  OnApply();
}

void Name2Code::UpdateTargetOS()
{
  IdxTargetOS = GetTargetOS();
  if (IsWindow(m_hWnd))
    UpdateData(false);
}

void Name2Code::OnNameSearch(const char* name)
{
  if (name)
  {
    Name = name;
    UpdateData(false);
  }

  OnApply();
}

BOOL Name2Code::OnApply()
{
  CErrorLookupDlg* parent = (CErrorLookupDlg*)GetParent();
  if (!parent->IsActivePage(this))
  {
    parent->OnCodeSearch(nullptr);
    return false;
  }

  Name.Trim();
  if (Name.IsEmpty())
    return false;

  CStringA str(Name), str2(Name), str3(Name);
  str2.MakeUpper();
  str3.MakeLower();

  AS_ITEM ai;
  do
  {
    if (!Name2Item(str, &ai))
    {
      Name = str;
      break;
    }

    if (!Name2Item(str2, &ai))
    {
      Name = str2;
      break;
    }

    if (!Name2Item(str3, &ai))
    {
      Name = str3;
      break;
    }

    unsigned code;
    if (Code2Name::GetCode(nullptr, Name, code))
    {
      ((CErrorLookupDlg*)GetParent())->OnCodeSearch(str);
      return false;
    }

    AfxMessageBox(_T("Unknown constant name"));
    return false;

  } while(false);

  Descr = GetDescriptionStr(ai.Description).c_str();
  Code = GetValueStr(ai).c_str();
  Source = ai.Source;
  OS = Code2Name::GetTargetOS(ai.OS);
  
  UpdateData(false);
  return false;
}