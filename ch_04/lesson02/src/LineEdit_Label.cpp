/** ******************************************************
	* @file		LineEdit_Label.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QDebug>
#include <QMessageBox>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "LineEdit_Label.hpp"
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
 	* @param None
 	* @return None
**	**/
Signal_Slot_test::Signal_Slot_test(QWidget *parent) : QWidget(parent)
{
	/* GUI介面啟動設定 */
	this->setupUi(this);
	/* 啟動Link-signal&slot函數 */
	this->btn_connect_enable(); 
}

/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
Signal_Slot_test::~Signal_Slot_test()
{
}

/** * @brief setup Link-signal&slot -- btn_connect::clicked
 	* @param None
 	* @return None
**	**/
void Signal_Slot_test::btn_connect_enable(void)
{
	/* link signal&slot,qt4,按按鈕彈出小視窗 */
	// connect( this->lineEdit, SIGNAL(textEdited(QString)),
	// 		 this->label, SLOT(setText(QString)) );
	/* link signal&slot,qt5,打字欄輸入文字後其他顯示欄連動 */
	connect( this->lineEdit, &QLineEdit::textEdited,
			 this->label, &QLabel::setText );
	connect( this->lineEdit, &QLineEdit::textEdited,
			 this->textBrowser, &QTextBrowser::setText );
	connect( this->lineEdit, &QLineEdit::textEdited,
			 this, &Signal_Slot_test::print_terminal );

	/* link signal&slot,qt5,按下按鈕彈出對應的小視窗 */
	connect( this->btn_A, &QPushButton::clicked,
			 this, &Signal_Slot_test::FoodIsComing );
	connect( this->btn_B, &QPushButton::clicked,
			 this, &Signal_Slot_test::FoodIsComing );
	connect( this->btn_C, &QPushButton::clicked,
			 this, &Signal_Slot_test::FoodIsComing );
	connect( this->btn_disconnect, &QPushButton::clicked,
			 this, &Signal_Slot_test::btn_connect_disenable );
	disconnect( this->btn_connect, &QPushButton::clicked,
			 this, &Signal_Slot_test::btn_connect_enable );

	/* 已啟動signal&slot,將connect按鈕失效 */
	this->btn_connect->setEnabled(false);
	/* 已啟動signal&slot,將disconnect按鈕啟動 */
	this->btn_disconnect->setEnabled(true);
}

void Signal_Slot_test::btn_connect_disenable(void)
{
	/* disconnect signal&slot,qt5 */
	disconnect( this->lineEdit, &QLineEdit::textEdited,
			 this->label, &QLabel::setText );
	disconnect( this->lineEdit, &QLineEdit::textEdited,
			 this->textBrowser, &QTextBrowser::setText );
	disconnect( this->lineEdit, &QLineEdit::textEdited,
			 this, &Signal_Slot_test::print_terminal );

	/* disconnect signal&slot,qt5 */
	disconnect( this->btn_A, &QPushButton::clicked,
			 this, &Signal_Slot_test::FoodIsComing );
	disconnect( this->btn_B, &QPushButton::clicked,
			 this, &Signal_Slot_test::FoodIsComing );
	disconnect( this->btn_C, &QPushButton::clicked,
			 this, &Signal_Slot_test::FoodIsComing );
	connect( this->btn_connect, &QPushButton::clicked,
			 this, &Signal_Slot_test::btn_connect_enable );
	disconnect( this->btn_disconnect, &QPushButton::clicked,
			 this, &Signal_Slot_test::btn_connect_disenable );

	/* 已關閉signal&slot,將connect按鈕啟動 */
	this->btn_connect->setEnabled(true);
	/* 已關閉signal&slot,將disconnect按鈕失效 */
	this->btn_disconnect->setEnabled(false);
}

/** * @brief slot function -- LineEdit::textEdited
 	* @param QString LineEdit的內容
 	* @return None
**	**/
void Signal_Slot_test::print_terminal(const QString &text)
{
	/* 打印至Terminal */
	qDebug() << text;
}

/** * @brief slot function -- btn_ABC::clicked
 	* @param None
 	* @return None
**	**/
void Signal_Slot_test::FoodIsComing(void)
{
	/* 取得signal物件的名稱 */
	QString signal_source = this->sender()->objectName();
	/* 打印,Debug用,可刪 */
	qDebug() << signal_source;
	/* 彈出對應文字的小視窗 */
	QMessageBox::information( this, this->tr("開門查水表!"), signal_source );
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF LineEdit_Label.cpp ***** */