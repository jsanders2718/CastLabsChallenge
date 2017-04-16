// CRC_genDlg.h : header file
//

#if !defined(AFX_CRC_GENDLG_H__4CA1C013_99AE_4AAB_9B5B_041B4AAF090B__INCLUDED_)
#define AFX_CRC_GENDLG_H__4CA1C013_99AE_4AAB_9B5B_041B4AAF090B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCRC_genDlg dialog

class CCRC_genDlg : public CDialog
{
// Construction
public:
	CCRC_genDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCRC_genDlg)
	enum { IDD = IDD_CRC_GEN_DIALOG };
	BOOL	m_bit1;
	BOOL	m_bit2;
	BOOL	m_bit3;
	BOOL	m_bit4;
	BOOL	m_bit5;
	BOOL	m_bit6;
	BOOL	m_bit7;
	BOOL	m_bit8;
	BOOL	m_bit9;
	BOOL	m_bit30;
	BOOL	m_bit31;
	BOOL	m_bit32;
	BOOL	m_bit10;
	BOOL	m_bit11;
	BOOL	m_bit12;
	BOOL	m_bit13;
	BOOL	m_bit14;
	BOOL	m_bit15;
	BOOL	m_bit16;
	BOOL	m_bit29;
	BOOL	m_bit28;
	BOOL	m_bit27;
	BOOL	m_bit26;
	BOOL	m_bit25;
	BOOL	m_bit24;
	BOOL	m_bit23;
	BOOL	m_bit22;
	BOOL	m_bit21;
	BOOL	m_bit20;
	BOOL	m_bit17;
	BOOL	m_bit18;
	BOOL	m_bit19;
	BOOL	m_bit_in;
	BOOL	m_bit0;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCRC_genDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCRC_genDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClock();
	afx_msg void OnReset();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRC_GENDLG_H__4CA1C013_99AE_4AAB_9B5B_041B4AAF090B__INCLUDED_)
