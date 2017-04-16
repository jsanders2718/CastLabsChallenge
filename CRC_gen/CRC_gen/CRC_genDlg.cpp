// CRC_genDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CRC_gen.h"
#include "CRC_genDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

BOOL my_xor(BOOL, BOOL);
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCRC_genDlg dialog

CCRC_genDlg::CCRC_genDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCRC_genDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCRC_genDlg)
	m_bit1 = FALSE;
	m_bit2 = FALSE;
	m_bit3 = FALSE;
	m_bit4 = FALSE;
	m_bit5 = FALSE;
	m_bit6 = FALSE;
	m_bit7 = FALSE;
	m_bit8 = FALSE;
	m_bit9 = FALSE;
	m_bit30 = FALSE;
	m_bit31 = FALSE;
	m_bit32 = FALSE;
	m_bit10 = FALSE;
	m_bit11 = FALSE;
	m_bit12 = FALSE;
	m_bit13 = FALSE;
	m_bit14 = FALSE;
	m_bit15 = FALSE;
	m_bit16 = FALSE;
	m_bit29 = FALSE;
	m_bit28 = FALSE;
	m_bit27 = FALSE;
	m_bit26 = FALSE;
	m_bit25 = FALSE;
	m_bit24 = FALSE;
	m_bit23 = FALSE;
	m_bit22 = FALSE;
	m_bit21 = FALSE;
	m_bit20 = FALSE;
	m_bit17 = FALSE;
	m_bit18 = FALSE;
	m_bit19 = FALSE;
	m_bit_in = FALSE;
	m_bit0 = FALSE;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCRC_genDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCRC_genDlg)
	DDX_Text(pDX, IDC_EDIT1, m_bit1);
	DDX_Text(pDX, IDC_EDIT2, m_bit2);
	DDX_Text(pDX, IDC_EDIT3, m_bit3);
	DDX_Text(pDX, IDC_EDIT4, m_bit4);
	DDX_Text(pDX, IDC_EDIT5, m_bit5);
	DDX_Text(pDX, IDC_EDIT6, m_bit6);
	DDX_Text(pDX, IDC_EDIT7, m_bit7);
	DDX_Text(pDX, IDC_EDIT8, m_bit8);
	DDX_Text(pDX, IDC_EDIT9, m_bit9);
	DDX_Text(pDX, IDC_EDIT30, m_bit30);
	DDX_Text(pDX, IDC_EDIT31, m_bit31);
	DDX_Text(pDX, IDC_EDIT32, m_bit32);
	DDX_Text(pDX, IDC_EDIT10, m_bit10);
	DDX_Text(pDX, IDC_EDIT11, m_bit11);
	DDX_Text(pDX, IDC_EDIT12, m_bit12);
	DDX_Text(pDX, IDC_EDIT13, m_bit13);
	DDX_Text(pDX, IDC_EDIT14, m_bit14);
	DDX_Text(pDX, IDC_EDIT15, m_bit15);
	DDX_Text(pDX, IDC_EDIT16, m_bit16);
	DDX_Text(pDX, IDC_EDIT29, m_bit29);
	DDX_Text(pDX, IDC_EDIT28, m_bit28);
	DDX_Text(pDX, IDC_EDIT27, m_bit27);
	DDX_Text(pDX, IDC_EDIT26, m_bit26);
	DDX_Text(pDX, IDC_EDIT25, m_bit25);
	DDX_Text(pDX, IDC_EDIT24, m_bit24);
	DDX_Text(pDX, IDC_EDIT23, m_bit23);
	DDX_Text(pDX, IDC_EDIT22, m_bit22);
	DDX_Text(pDX, IDC_EDIT21, m_bit21);
	DDX_Text(pDX, IDC_EDIT20, m_bit20);
	DDX_Text(pDX, IDC_EDIT17, m_bit17);
	DDX_Text(pDX, IDC_EDIT18, m_bit18);
	DDX_Text(pDX, IDC_EDIT19, m_bit19);
	DDX_Text(pDX, IDC_EDIT33, m_bit_in);
	DDX_Text(pDX, IDC_EDIT34, m_bit0);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCRC_genDlg, CDialog)
	//{{AFX_MSG_MAP(CCRC_genDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CLOCK, OnClock)
	ON_BN_CLICKED(IDC_BUTTON2, OnReset)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCRC_genDlg message handlers

BOOL CCRC_genDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCRC_genDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCRC_genDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

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
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCRC_genDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCRC_genDlg::OnClock() 
{

	UpdateData(TRUE);
	m_bit0 =  m_bit32 ^ m_bit_in;
	m_bit32 = m_bit31;
	m_bit31 = m_bit30;
	m_bit30 = m_bit29;
	m_bit29 = m_bit28;
	m_bit28 = m_bit27;
	m_bit27 = m_bit26 ^ m_bit0;
	m_bit26 = m_bit25;
	m_bit25 = m_bit24;
	m_bit24 = m_bit23 ^ m_bit0;
	m_bit23 = m_bit22 ^ m_bit0;
	m_bit22 = m_bit21;
	m_bit21 = m_bit20;

	m_bit20 = m_bit19;
	m_bit19 = m_bit18;
	m_bit18 = m_bit17;
	m_bit17 = m_bit16 ^ m_bit0;
	m_bit16 = m_bit15;
	m_bit15 = m_bit14;
	m_bit14 = m_bit13;
	m_bit13 = m_bit12 ^ m_bit0;
	m_bit12 = m_bit11 ^ m_bit0;
	m_bit11 = m_bit10 ^ m_bit0;
	m_bit10 = m_bit9;
	m_bit9 = m_bit8 ^ m_bit0;
	m_bit8 = m_bit7 ^ m_bit0;
	m_bit7 = m_bit6;
	m_bit6 = m_bit5 ^ m_bit0;
	m_bit5 = m_bit4 ^ m_bit0;
	m_bit4 = m_bit3;
	m_bit3 = m_bit2 ^ m_bit0;
	m_bit2 = m_bit1 ^ m_bit0;
	m_bit1 = m_bit0;


	UpdateData(FALSE);
}

BOOL my_xor(BOOL bita, BOOL bitb)
{
	if(bita == bitb)
		return(0);

	else
		return(1);
}

void CCRC_genDlg::OnReset() 
{
	UpdateData(TRUE);
	m_bit32 = 1;	
	m_bit31 = 1;		
	m_bit30 = 1;
	m_bit29 = 1;
	m_bit29 = 1;
	m_bit28 = 1;
	m_bit27 = 1;
	m_bit26 = 1;
	m_bit25 = 1;
	m_bit24 = 1;
	m_bit23 = 1;
	m_bit22 = 1;
	m_bit21 = 1;
	m_bit20 = 1;
	m_bit19 = 1;
	m_bit18 = 1;
	m_bit17 = 1;
	m_bit16 = 1;
	m_bit15 = 1;
	m_bit14 = 1;
	m_bit13 = 1;
	m_bit12 = 1;
	m_bit11 = 1;
	m_bit10 = 1;
	m_bit9 = 1;
	m_bit8 = 1;
	m_bit7 = 1;
	m_bit6 = 1;
	m_bit5 = 1;
	m_bit4 = 1;
	m_bit3 = 1;
	m_bit2 = 1;
	m_bit1 = 1;
	m_bit0 = 1;

	UpdateData(FALSE);
}
