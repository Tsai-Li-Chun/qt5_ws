/** ******************************************************
	* @file		login_windows.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "login_windows.hpp"
/* User Includes End */

/* namespace ------------------------------------------------*/
/* namespace Begin */
/* namespace End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Typedef --------------------------------------------------*/
/* Typedef Begin */
/* Typedef End */


/* Class --------------------------------------------------*/
/* Class Begin */
/* Class End */


/* Variables ------------------------------------------------*/
/* Variables Begin */
/* Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */



/* ---------------------------------------------------------*/
/* ⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩ Program ⇩⇩⇩⇩⇩⇩⇩⇩⇩⇩ ---------------------------*/
/* ---------------------------------------------------------*/
/* Program Begin */

/** * @brief 建構涵式
 	* @param QWidget *parent:父節點位址
 	* @return None
**	**/
login_windows::login_windows(QWidget *parent) : QWidget(parent)
{
	/* 初始化視窗內物件 */
	this->setupUi(this);
	/* 設置密碼編輯欄位的顯示模式 */
	this->lineEdit_password->setEchoMode(QLineEdit::Password);
	/* 設定user */
	true_User = tr("TsaiLiChun");
	/* 設定password */
	true_PasswordHash = QCryptographicHash::hash( 
		 tr("TsaiLiChun123456").toUtf8(),
		 QCryptographicHash::RealSha3_256 );
	true_PasswordHash = true_PasswordHash.toHex();
	/* 打印User&Password,debug用 */
    qDebug() << true_User;
    qDebug() << true_PasswordHash;
}
/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
login_windows::~login_windows()
{
}

/** * @brief 按下login按鈕的slot函數
 	* @param None
 	* @return None
**	**/
void login_windows::on_pushButton_login_clicked()
{
    if( (this->lineEdit_user->text().isEmpty()) || 
		(this->lineEdit_password->text().isEmpty()) )
    {	/* 檢查user & password 欄位是否為空,若為空則彈警告窗並跳出 */
        QMessageBox::warning(this, tr("Warning"), tr("User & PassWord 不得為空"));
        return;
    }

	/* 取得user欄位輸入內容 */
    my_strUser = this->lineEdit_user->text();
	/* 取得password欄位輸入內容,並轉成Hash密碼 */
    my_strPasswordHash = QCryptographicHash::hash(
		 this->lineEdit_password->text().toUtf8(),
		 QCryptographicHash::Sha3_256 				);
	my_strPasswordHash = my_strPasswordHash.toHex();

	/* 判斷 User&Password 是否正確 */
	login_ok = false;
	if( true_User == my_strUser )
		if( true_PasswordHash == my_strPasswordHash )
			login_ok = true;

	/* 建構彈窗文字內容,依登入是否成功 */
	QString strMsg;
	if(login_ok)
		strMsg = tr("Verified Succeeded\r\n");
	else
		strMsg = tr("Verified Failed\r\nplease enter again\r\n\r\n");

	/* 建構彈窗文字內容,顯示輸入的User&Password */
    strMsg += tr("User:") + my_strUser + tr("\r\n") + tr("PassWord Hash:") + tr("\r\n");
    strMsg += my_strPasswordHash;
	/* 打印彈窗內容文字 */
    qDebug() << strMsg;
	/* 彈窗顯示 */
    QMessageBox::information(this, tr("User Info"), strMsg);

	/* 若登入錯誤則清空User&Password欄位 */
	if(!login_ok)
	{
		this->lineEdit_user->setText("");
		this->lineEdit_password->setText("");
	}
}
/** * @brief 按下exit按鈕的slot函數
 	* @param None
 	* @return None
**	**/
void login_windows::on_pushButton_exit_clicked(void)
{	/* 關閉視窗 */
	this->close();
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF login_windows.cpp ***** */