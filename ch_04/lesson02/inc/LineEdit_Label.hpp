/** ******************************************************
	* @file		LineEdit_Label.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __LineEdit_Label_HPP__
#define __LineEdit_Label_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QWidget>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "ui_LineEdit_Label.h"
/* User Includes End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Extern Typedef -------------------------------------------*/
/* Extern Typedef Begin */
/* Extern Typedef End */


/* Extern Class -------------------------------------------*/
/* Extern Class Begin */

/* main用qt-top物件 */
class LineEdit_Label : public QWidget, public Ui::Form
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT
/* 私有成員 */
private:

/* 公共成員 */
public:
	/* 建構函數 */
	LineEdit_Label(QWidget *parent = 0);
	/* 解建構函數 */
	~LineEdit_Label();

};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__ LineEdit_Label_HPP__ */

/* ***** END OF LineEdit_Label.HPP ***** */