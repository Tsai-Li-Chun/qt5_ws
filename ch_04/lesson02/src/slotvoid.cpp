/** ******************************************************
	* @file		slotvoid.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QMessageBox>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
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

/** * @brief 建構涵式
 	* @param None
 	* @return None
**	**/
slotvoid::slotvoid(QWidget *parent) : QWidget(parent)
{}

/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
slotvoid::~slotvoid()
{}

/** * @brief customize ReceiveMag Function -- Signal_Slot_test::customize_SendMsg
 	* @param None
 	* @return None
**	**/
void slotvoid::customize_Receive(void)
{
	QMessageBox::information(this, this->tr("Show"), this->tr("slotvoid"));
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF slotvoid.cpp ***** */