/** ******************************************************
	* @file		LineEdit_Label.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
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
LineEdit_Label::LineEdit_Label(QWidget *parent) : QWidget(parent)
{
	/* GUI介面啟動設定 */
	this->setupUi(this);
	/* 關連signal與slot,qt4版本,按按鈕彈出小視窗 */
	connect( this->lineEdit, SIGNAL(textEdited(QString)),
			 this->label, SLOT(setText(QString)) );
	/* 關連signal與slot,qt5版本,按按鈕彈出小視窗 */
	// connect( this->lineEdit, &QLineEdit::textEdited,
	// 		 this->label, &QLabel::setText );
}

/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
LineEdit_Label::~LineEdit_Label()
{

}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF LineEdit_Label.cpp ***** */