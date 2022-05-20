/** ******************************************************
	* @file		MainWindow.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __MainWindow_HPP__
#define __MainWindow_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "ui_MainWindow.h"
/* User Includes End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Extern Typedef -------------------------------------------*/
/* Extern Typedef Begin */
/* Extern Typedef End */


/* Extern Class -------------------------------------------*/
/* Extern Class Begin */

/* QT-TopWindows(MainWindow)物件 */
class MainWindow : public QMainWindow, public Ui::MainWindow
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT

/* 私有成員 */
private:

/* 公共成員 */
public:
	/* 建構函數,預設父節點位址(pointer)為0,無父節點 */
	MainWindow(QMainWindow *parent=0);
	/* 解建構函數 */
	~MainWindow();

};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__ MainWindow_HPP__ */

/* ***** END OF MainWindow.HPP ***** */