/** ******************************************************
	* @file		main.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <iostream>
#include <memory>
#include <QApplication>
#include <QObject>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "LineEdit_Label.hpp"
#include "slotvoid.hpp"
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

	/* 建立main用qt-top物件 */
	std::shared_ptr<Signal_Slot_test> SSt 
		= std::make_shared<Signal_Slot_test>();
	/* 建立自定義signal&slot物件 */
	std::shared_ptr<slotvoid> sv
		= std::make_shared<slotvoid>();
	// Signal_Slot_test SSt;
	// slotvoid sv;

	/* link signal&slot */
	QObject::connect( SSt.get(), &Signal_Slot_test::customize_SendMsg,
					  sv.get(), &slotvoid::customize_Receive );

	/* 顯示視窗 */
	SSt->show();

    /* 執行qt應用並顯示執行結果 */
	std::cout << qt.exec() << std::endl;

	/* main quit */
	return 0;
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF main.cpp ***** */