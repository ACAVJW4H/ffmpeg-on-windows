
// ffparseDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include <vector>

// CffparseDlg �Ի���
class CffparseDlg : public CDialogEx
{
// ����
public:
	CffparseDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_FFPARSE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	std::vector<int> vec_SecondIndex;
	std::vector<int> vec_ThirdIndex;
	CListBox m_CMainListBox;
	CListBox m_CSecondListBox;
	CListBox m_CThirdListBox;
	afx_msg void OnLbnDblclkListMain();
	CEdit m_CShowEdit;
	afx_msg void OnLbnDblclkListSecond();
	CStatic m_CThirdStatic;
	CStatic m_CSecondStatic;
	CStatic m_CMainStatic;
	afx_msg void OnLbnSelchangeListThird();
	int index_first;
	int index_second;
	int index_third;
};
