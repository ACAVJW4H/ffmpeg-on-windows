
// ffparse.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx_ffparse.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CffparseApp:
// �йش����ʵ�֣������ ffparse.cpp
//

class CffparseApp : public CWinApp
{
public:
	CffparseApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CffparseApp theApp;