/** ******************************************************
	* @file		main.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <memory>
#include <QApplication>
#include <QDebug>
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

/** * @brief  Program entry point.
 	* @param argc(int) : Number of input parameters
 	* @param argv(int) : input parameters
 	* @return (int) Program Error.
**	**/
int main(int argc, char **argv)
{
	/* 建立qt應用物件 */
	QApplication qt(argc,argv);

	/* 建立QT-TopWindows(widget)物件 */
	std::shared_ptr<login_windows> lw = 
		std::make_shared<login_windows>();
	/* 顯示視窗 */
	lw->show();

    /* 執行qt應用並顯示執行結果 */
	qDebug() << qt.exec();
	
	/* main quit */
	return 0;
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF main.cpp ***** */