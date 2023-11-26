// EXERCISE1.h : main header file for the EXERCISE1 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CEXERCISE1App
// See EXERCISE1.cpp for the implementation of this class
//

class CEXERCISE1App : public CWinApp
{
public:
	CEXERCISE1App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
