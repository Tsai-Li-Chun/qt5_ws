/** ******************************************************
	* @file		widget.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QMessageBox>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "widget.h"
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
signal_slot_1::signal_slot_1()
{
	/* GUI介面啟動設定 */
    this->setupUi(this);
	/* 關連signal與slot,qt4版本,按按鈕彈出小視窗 */
    // connect( this->hungry_btn, SIGNAL(clicked456()),
    //          this, SLOT(on_hungry_btn_clicked()) );
	/* 關連signal與slot,qt5版本,按按鈕彈出小視窗 */
    connect( this->hungry_btn, &QPushButton::clicked,
            this, &signal_slot_1::on_hungry_btn_clicked );
}

/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
signal_slot_1::~signal_slot_1()
{

}

/** * @brief hungry_btn的slot函數
 	* @param None
 	* @return None
**	**/
void signal_slot_1::on_hungry_btn_clicked(void)
{
    /* 建立彈出小視窗 */
    QMessageBox::information( this, tr("開門查水表!"), tr("叮咚!外送已抵達!") );
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF widget.cpp ***** */