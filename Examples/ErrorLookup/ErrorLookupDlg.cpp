
// ErrorLookupDlg.cpp : implementation file
//

#include "Precompile.h"
#include "Framework.h"
#include "ErrorLookup.h"
#include "ErrorLookupDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CAboutDlg dialog used for App About
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CErrorLookupDlg dialog

CErrorLookupDlg::CErrorLookupDlg(CWnd* pParent /*=nullptr*/)
	: CPropertySheet(IDS_TITLE, pParent)
{
	m_psh.dwFlags &= ~PSH_HASHELP;
	m_psh.dwFlags |= PSH_NOAPPLYNOW;

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	AddPage(&C2NamePage);
	AddPage(&N2CodePage);
}

BEGIN_MESSAGE_MAP(CErrorLookupDlg, CPropertySheet)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()

// CErrorLookupDlg message handlers

BOOL CErrorLookupDlg::OnInitDialog()
{
	__super::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		CString strAboutMenu;
		BOOL bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);

		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// this hides the Apply button
	CWnd* pOK = GetDlgItem(IDOK);
	if (pOK)
	{
		CString str;
		if (str.LoadString(IDS_OK))
			pOK->SetWindowText(str);
	}

	CWnd* pCancel = GetDlgItem(IDCANCEL);
	if (pCancel)
	{
		CString str;
		if (str.LoadString(IDS_CANCEL))
			pCancel->SetWindowText(str);
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CErrorLookupDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
		__super::OnSysCommand(nID, lParam);
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CErrorLookupDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
		__super::OnPaint();
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CErrorLookupDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CErrorLookupDlg::OnNameSearch(const char* name)
{
	SetActivePage(&N2CodePage);
	N2CodePage.OnNameSearch(name);
}

void CErrorLookupDlg::OnCodeSearch(const char* code)
{
	SetActivePage(&C2NamePage);
	C2NamePage.OnCodeSearch(code);
}

bool CErrorLookupDlg::IsActivePage(CPropertyPage* page) 
{
	return GetActivePage() == page;
}

void CErrorLookupDlg::UpdateTargetOS(CPropertyPage* sender)
{
	if (sender == &C2NamePage)
		N2CodePage.UpdateTargetOS();
	else if (sender == &N2CodePage)
		C2NamePage.UpdateTargetOS();
}
