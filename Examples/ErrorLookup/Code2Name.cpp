// Code2Name.cpp : implementation file
//

#include "Precompile.h"
#include "ErrorLookupDlg.h"
#include "ErrorLookup.h"
#include "Code2Name.h"

#include <regex>
#include <string>

#pragma warning(disable : 26812 26454)

// Code2Name

IMPLEMENT_DYNAMIC(Code2Name, CPropertyPage)

Code2Name::Code2Name()
  : CPropertyPage(IDD_CODE2NAME, IDS_CODE2NAME)
  , IdxTargetOS(0)
  , InSelectRow(false)
  , SortColumn(-1)
  , SortAscending(true)
{
  m_psp.dwFlags &= ~PSP_HASHELP;
}

Code2Name::~Code2Name()
{
}

BEGIN_MESSAGE_MAP(Code2Name, CPropertyPage)
  ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST, OnRowSelect)
  ON_CBN_SELENDOK(IDC_TARGETOS, OnTargetChanged)
  ON_NOTIFY(HDN_ITEMCLICKA, 0, OnHeaderClicked)
  ON_NOTIFY(HDN_ITEMCLICKW, 0, OnHeaderClicked)
END_MESSAGE_MAP()

// Code2Name message handlers
void Code2Name::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);

  DDX_Control(pDX, IDC_DESCRIPTION, EdtDescr);
  DDX_Control(pDX, IDC_CODE, EdtCode);
  DDX_Control(pDX, IDC_CONSTANT, EdtName);
  DDX_Control(pDX, IDC_SOURCE, EdtSource);
  DDX_Control(pDX, IDC_TARGETOS, CbTargetOS);
  DDX_Control(pDX, IDC_OS, EdtOS);
  DDX_Control(pDX, IDC_LIST, List);

  DDX_Text(pDX, IDC_DESCRIPTION, Descr);
  DDX_Text(pDX, IDC_CODE, Code);
  DDX_Text(pDX, IDC_CONSTANT, Name);
  DDX_Text(pDX, IDC_SOURCE, Source);
  DDX_Text(pDX, IDC_OS, OS);

  DDX_CBString(pDX, IDC_TARGETOS, TargetOS);
  DDX_CBIndex(pDX, IDC_TARGETOS, IdxTargetOS);
}

BOOL Code2Name::OnInitDialog()
{
  __super::OnInitDialog();

  CbTargetOS.AddString(_T("Any"));
  CbTargetOS.AddString(_T("Windows"));
  CbTargetOS.AddString(_T("Linux"));
  CbTargetOS.AddString(_T("Mac"));
  CbTargetOS.AddString(_T("Solaris"));

  IdxTargetOS = ::GetTargetOS();

  CRect rc;
  List.GetClientRect(rc);
  int cx = rc.Width() - GetSystemMetrics(SM_CXHSCROLL);
  int col0 = cx / 2;
  int col1 = cx / 4;
  int col2 = cx - col0 - col1;

  List.InsertColumn(0, _T("Constant"));
  List.SetColumnWidth(0, col0);
  List.InsertColumn(1, _T("Type"));
  List.SetColumnWidth(1, col1);
  List.InsertColumn(2, _T("OS"));
  List.SetColumnWidth(2, col2);
  List.SendMessage(LVM_SETEXTENDEDLISTVIEWSTYLE, 0, LVS_EX_FULLROWSELECT);

  UpdateData(false);
  return TRUE;
}

void Code2Name::OnTargetChanged()
{
  UpdateData();
  SetTargetOS((AS_OS)IdxTargetOS);
  ((CErrorLookupDlg*)GetParent())->UpdateTargetOS(this);

  OnApply();
}

void Code2Name::UpdateTargetOS()
{
  IdxTargetOS = ::GetTargetOS();
  if (IsWindow(m_hWnd))
    UpdateData(false);
}

void Code2Name::OnHeaderClicked(NMHDR* pNMHDR, LRESULT* pResult)
{
  HD_NOTIFY* phdn = (HD_NOTIFY*)pNMHDR;
  if (phdn->iButton == 0)
  {
    // User clicked on header using left mouse button
    if (phdn->iItem == SortColumn)
      SortAscending = !SortAscending;
    else
      SortAscending = true;

    SortColumn = phdn->iItem;
    SortItems();
  }
  *pResult = 0;
}

int CALLBACK Code2Name::CompareItems(LPARAM p1, LPARAM p2, LPARAM context)
{
  Code2Name* self = (Code2Name*)context;

  int column = self->SortColumn;
  bool ascending = self->SortAscending;

  p1 = self->List.GetItemData((int)p1);
  p2 = self->List.GetItemData((int)p2);

  auto& item1 = self->Items[p1];
  auto& item2 = self->Items[p2];

  int rc = 0;
  do
  {
    if (column == 0)
    {
      rc = strcmp(item1.ConstName, item2.ConstName) * (ascending ? 1 : -1);
      break;
    }

    if (column == 1)
    {
      CString t1(GetGenerator(item1).c_str());
      CString t2(GetGenerator(item2).c_str());

      rc = t1.Compare(t2) * (ascending ? 1 : -1);
      break;
    }

    if (column == 2)
    {
      CString o1(GetTargetOS(item1.OS));
      CString o2(GetTargetOS(item2.OS));
      rc = o1.Compare(o2) * (ascending ? 1 : -1);
      break;
    }

  } while(false);

  return rc;
}

void Code2Name::SortItems()
{
  List.SortItemsEx(CompareItems, (DWORD_PTR)this);
}

void Code2Name::OnRowSelect(NMHDR* pNMHDR, LRESULT* pResult)
{
  NM_LISTVIEW* pnm = (NM_LISTVIEW*)pNMHDR;
  if (pnm->uChanged & LVIF_STATE)
  {
    if (pnm->uNewState & LVIS_SELECTED)
      SelectRow(pnm->iItem, true);
  }
}

void Code2Name::SelectRow(int row, bool byevent)
{
  if (InSelectRow)
    return;

  InSelectRow = true;

  if (!byevent)
  {
    int nIndex = List.GetNextItem(-1, LVNI_SELECTED);
    if (nIndex >= 0)
      List.SetItemState(nIndex, LVIS_SELECTED, ~LVIS_SELECTED);

    List.SetItemState(row, LVIS_SELECTED, LVIS_SELECTED);
  }

  int index = (int)List.GetItemData(row);
  auto& v = Items[index];

  Descr = GetDescriptionStr(v.Description).c_str();
  Name = GetNameStr(v).c_str();
  Source = v.Source;
  OS = GetTargetOS(v.OS);

  UpdateData(false);
  InSelectRow = false;
}

bool Code2Name::GetCode(CErrorLookupDlg* parent, CString& str, unsigned& code)
{
  str.TrimLeft();
  str.TrimRight();
  if (str.IsEmpty())
    return false;

  CString value(str);

  std::string match;
  std::string name((LPCSTR)CStringA(value));

  std::smatch m;
  const std::regex base_regex("([\\+\\-]?\\d+)\\s*\\(0x[0-9a-f]+\\)", std::regex::icase);
  if (std::regex_match(name, m, base_regex))
  {
    name = m[1];
    value = CString(name.c_str());
  }

  int radix = 10;
  bool neg = false;

  if (value[0] == '-')
  {
    value = value.Mid(1);
    neg = true;
  }

  if (value[0] == '+')
    value = value.Mid(1);

  int len = value.GetLength();
  if (len > 2)
  {
    if (value[0] == '0' && (value[1] == 'x' || value[1] == 'X'))
    { 
      radix = 16;
      value = value.Mid(2);
    }
  }

  if (radix == 10)
  { 
    if (isdigit(value[0]) && (value[len - 1] == 'h' || value[len - 1] == 'H'))
    {
      radix = 16;
      value = value.Mid(0, len - 1);
    }
  }

  wchar_t* end;
  code = _tcstoul(value, &end, radix);
  if (neg)
    code = (unsigned)(-int(code));

  if (*end != '\0')
  {
    CStringA str = CW2A(value, CP_UTF8);

    AS_ITEM ai;
    if (parent)
    {
      CStringA str2(str);
      str2.MakeUpper();
      
      CStringA str3(str);
      str3.MakeLower();

      if (!Name2Item(str, &ai))
        parent->OnNameSearch(str);
      else if (!Name2Item(str2, &ai))
        parent->OnNameSearch(str2);
      else if (!Name2Item(str3, &ai))
        parent->OnNameSearch(str3);
      else
        AfxMessageBox(_T("Invalid integer value"));
    }
    
    return false;
  }

  return true;
}

void Code2Name::OnCodeSearch(const char* code)
{
  if (code)
  {
    Code = code;
    UpdateData(false);
  }

  OnApply();
}

void Code2Name::AddData(int row, int col, LPCTSTR str)
{
  LVITEM lv;
  lv.iItem = row;
  lv.iSubItem = col;
  lv.pszText = (LPTSTR)str;
  lv.lParam = row;
  lv.mask = LVIF_TEXT;

  if (col == 0)
  {
    lv.mask |= LVIF_PARAM;
    List.InsertItem(&lv);
  }
  else
    List.SetItem(&lv);
}

CString Code2Name::GetTargetOS(AS_OS g)
{
  switch (g)
  {
    case AS_OS_ANY: return CString(_T("Any"));
    case AS_OS_WINDOWS: return CString(_T("Windows"));
    case AS_OS_LINUX: return CString(_T("Linux"));
    case AS_OS_MAC: return CString(_T("Mac"));
    case AS_OS_SOLARIS: return CString(_T("Solaris"));
  }
  return CString();
}

BOOL Code2Name::OnApply()
{
  CErrorLookupDlg* parent = (CErrorLookupDlg*)GetParent();
  if (!parent->IsActivePage(this))
  {
    parent->OnNameSearch(nullptr);
    return false;
  }

  List.DeleteAllItems();
  Items.clear();
  Descr = _T("");
  Name = _T("");
  Source = _T("");
  OS = _T("");

  unsigned code = 0;
  if (!GetCode(parent, Code, code))
  { 
    UpdateData(false);
    return false;
  }

  Items = AllStatInfo(code);
  if (Items.empty())
  {
    UpdateData(false);
    AfxMessageBox(_T("Unknown constant\n"));
    return false;
  }

  int row = 0;
  for (auto it = Items.begin(); it != Items.end(); ++it, ++row)
  {
    auto& v = *it;

    CString name(v.ConstName);
    CString type(GetGenerator(v).c_str());
    CString os(GetTargetOS(v.OS));

    AddData(row, 0, name);
    AddData(row, 1, type);
    AddData(row, 2, os);
  }

  Code = GetValueStr(Items[0]).c_str();

  SelectRow(0);
  return false;
}