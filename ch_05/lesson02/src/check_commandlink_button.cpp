/** ******************************************************
	* @file		check_commandlink_button.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "check_commandlink_button.hpp"
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
check_commandlink_button::check_commandlink_button(QWidget *parent):QWidget(parent)
{
	/* 初始化視窗內物件 */
	this->setupUi(this);
	this->checkBoxTristate->setTristate(true);
}
/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
check_commandlink_button::~check_commandlink_button()
{
}

/** * @brief 檢查勾選狀態函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::checkHobbies(void)
{
	uint8_t count = 0;
	if( this->check_A1->isChecked() )
		count++;
	if( this->check_A2->isChecked() )
		count++;
	if( this->check_A3->isChecked() )
		count++;
	if( this->check_A4->isChecked() )
		count++;
	if( this->check_A5->isChecked() )
		count++;
	if( this->check_A6->isChecked() )
		count++;

	if( count <= 0)
        this->checkBoxTristate->setCheckState(Qt::Unchecked);
    else if( count <= 5 )
        this->checkBoxTristate->setCheckState(Qt::PartiallyChecked);
    else
        this->checkBoxTristate->setCheckState(Qt::Checked);
}

/** * @brief 興趣A1勾選狀態改變slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_check_A1_toggled(bool checked)
{
	if(checked)
	{
		qDebug() << tr("clannad");
	}
	checkHobbies();
}
/** * @brief 興趣A2勾選狀態改變slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_check_A2_toggled(bool checked)
{
	if(checked)
	{
		qDebug() << tr("櫻花莊");
	}
	checkHobbies();
}
/** * @brief 興趣A3勾選狀態改變slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_check_A3_toggled(bool checked)
{
	if(checked)
	{
		qDebug() << tr("86戰區");
	}
	checkHobbies();
}
/** * @brief 興趣A4勾選狀態改變slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_check_A4_toggled(bool checked)
{
	if(checked)
	{
		qDebug() << tr("地下城");
	}
	checkHobbies();
}
/** * @brief 興趣A5勾選狀態改變slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_check_A5_toggled(bool checked)
{
	if(checked)
	{
		qDebug() << tr("hololive");
	}
	checkHobbies();
}
/** * @brief 興趣A6勾選狀態改變slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_check_A6_toggled(bool checked)
{
	if(checked)
	{
		qDebug() << tr("NieR");
	}
	checkHobbies();
}

void check_commandlink_button::on_checkBoxTristate_stateChanged(int status)
{
	if( status == Qt::Unchecked )
	{	/* 若3態選項沒勾選,將6個Ax全取消勾選 */
		this->check_A1->setCheckState(Qt::Unchecked);
		this->check_A2->setCheckState(Qt::Unchecked);
		this->check_A3->setCheckState(Qt::Unchecked);
		this->check_A4->setCheckState(Qt::Unchecked);
		this->check_A5->setCheckState(Qt::Unchecked);
		this->check_A6->setCheckState(Qt::Unchecked);
	}
	else if( status == Qt::Checked )
	{	/* 若3態選項勾選,將6個Ax全勾選 */
		this->check_A1->setCheckState(Qt::Checked);
		this->check_A2->setCheckState(Qt::Checked);
		this->check_A3->setCheckState(Qt::Checked);
		this->check_A4->setCheckState(Qt::Checked);
		this->check_A5->setCheckState(Qt::Checked);
		this->check_A6->setCheckState(Qt::Checked);
	}
}

/** * @brief 彈窗顯示按鈕slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_PushWindows_clicked(void)
{
	/* 視窗標題 */
	QString title = tr("喜歡作品");
	/* 視窗內容 */
	QString str = tr("");
	/* 若有勾選,選項內容新增至str */
	if( this->check_A1->isChecked() )
		str += ( this->check_A1->text()+tr("\r\n") );
	if( this->check_A2->isChecked() )
		str += ( this->check_A2->text()+tr("\r\n") );
	if( this->check_A3->isChecked() )
		str += ( this->check_A3->text()+tr("\r\n") );
	if( this->check_A4->isChecked() )
		str += ( this->check_A4->text()+tr("\r\n") );
	if( this->check_A5->isChecked() )
		str += ( this->check_A5->text()+tr("\r\n") );
	if( this->check_A6->isChecked() )
		str += ( this->check_A6->text()+tr("\r\n") );
	/* 彈窗顯示 */
	QMessageBox::information(this, title, str);
}

/** * @brief 命令按鈕(開啟文件)slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_CommandLink_OpenFile_clicked(void)
{
	QDesktopServices::openUrl( QUrl("file:///home/tsailichun/圖片/FGO高清壁紙/玉藻 4.jpg") );
}
/** * @brief 命令按鈕(開啟網站)slot函數
 	* @param None
 	* @return None
**	**/
void check_commandlink_button::on_CommandLink_OpenWeb_clicked(void)
{
	QDesktopServices::openUrl( QUrl("https://lug.ustc.edu.cn/sites/qtguide/") );
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF check_commandlink_button.cpp ***** */