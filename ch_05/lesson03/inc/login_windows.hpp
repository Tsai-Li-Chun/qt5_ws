/** ******************************************************
	* @file		login_windows.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __login_windows_HPP__
#define __login_windows_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "ui_Login_Windows.h"
/* User Includes End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Extern Typedef -------------------------------------------*/
/* Extern Typedef Begin */
/* Extern Typedef End */


/* Extern Class -------------------------------------------*/
/* Extern Class Begin */

/* QT-TopWindows(widget)物件 */
class login_windows : public QWidget, public Ui::Form_login
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT

/* 私有成員 */
private:
	/* 真user內容 */
	QString true_User;
	/* 輸入的user內容 */
	QString my_strUser;
	/* 真password內容 */
	QByteArray true_PasswordHash;
	/* 輸入的password內容 */
	QByteArray my_strPasswordHash;
	/* User & Password 是否正確旗標 */
	bool login_ok = false;

/* 公共成員 */
public:
	/* 建構函數,預設父節點位址(pointer)為0,無父節點 */
	login_windows(QWidget *parent=0);
	/* 解建構函數 */
	~login_windows();

/* qt特有,私有slot成員 */
private slots:
	/* 編輯MAC欄位觸發的slot函數 */
	void on_lineEdit_MAC_textChanged(const QString&);
	/* 編輯IP欄位觸發的slot函數 */
	void on_lineEdit_IP_textChanged(const QString&);
	/* 編輯Port欄位觸發的slot函數 */
	void on_lineEdit_Port_textChanged(const QString&);
	/* 編輯DayOfWeek欄位觸發的slot函數 */
	void on_lineEdit_DayOfWeek_textChanged(const QString&);
	/* 編輯Year欄位觸發的slot函數 */
	void on_lineEdit_Year_textChanged(const QString&);

/* qt特有,公共slot成員 */
public slots:
	/* 按下login按鈕的slot函數 */
	void on_pushButton_login_clicked(void);
	/* 按下exit按鈕的slot函數 */
	void on_pushButton_exit_clicked(void);

};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__ login_windows_HPP__ */

/* ***** END OF login_windows.HPP ***** */