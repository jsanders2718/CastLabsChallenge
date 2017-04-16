// CRC_gen.h : main header file for the CRC_GEN application
//

#if !defined(AFX_CRC_GEN_H__7B0FE2BB_E0FC_4938_8DD6_A6558400D723__INCLUDED_)
#define AFX_CRC_GEN_H__7B0FE2BB_E0FC_4938_8DD6_A6558400D723__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCRC_genApp:
// See CRC_gen.cpp for the implementation of this class
//

class CCRC_genApp : public CWinApp
{
public:
	CCRC_genApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCRC_genApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCRC_genApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRC_GEN_H__7B0FE2BB_E0FC_4938_8DD6_A6558400D723__INCLUDED_)
