
// HTTPSWebClientDlg.h : 头文件
//

#pragma once
#include "afxwin.h"

#include "ValidationCtrl.h"

// CHTTPSWebClientDlg 对话框
class CHTTPSWebClientDlg : public CDialog
{
// 构造
public:
	CHTTPSWebClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_HTTPSWEBCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg LRESULT OnSetStr(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnFinish(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnGetCode(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()

protected:
	afx_msg void OnLogin();
	afx_msg void OnBook();

public:
	void ConnectToSite();
	void InitUserInfo();
	void InitPassengerInfo();
	void GetPassengerInfo();
	void GetUserInfo();

private:
	CString dateString;	
	CString AddrString;
	CString usernameStr;
	CString passwordStr;

	CString nameP1;
	CString identityTypeP1;
	CString identityNoP1;
	CString mobileP1;
	CString seatTypeP1;

	CString nameP2;
	CString identityTypeP2;
	CString identityNoP2;
	CString mobileP2;
	CString seatTypeP2;

	CString nameP3;
	CString identityTypeP3;
	CString identityNoP3;
	CString mobileP3;
	CString seatTypeP3;

	CString nameP4;
	CString identityTypeP4;
	CString identityNoP4;
	CString mobileP4;
	CString seatTypeP4;

	CString trainNo;

	CString stationFrom;
	CString stationTo;

public:
	CString RespondString;

};
