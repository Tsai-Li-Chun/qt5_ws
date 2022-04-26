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
#include "property.hpp"
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
my_property::my_property(QWidget *parent):QWidget(parent)
{
	this->setupUi(this);
}

/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
my_property::~my_property()
{
}

/** * @brief 讀nickName函數
 	* @param None
 	* @return const QString& : 返回nickName
**	**/
const QString& my_property::get_nickName(void)
{
	return my_nickName;
}

/** * @brief 讀count函數
 	* @param None
 	* @return int : 返回count
**	**/
int my_property::get_count(void)
{
	return my_count;
}

/** * @brief 寫nickName函數
 	* @param const_QString& 傳入要寫的nickName
 	* @return None
**	**/
void my_property::set_nickName(const QString &_str)
{
	/* 若無改變,則返回,無須發射signal訊號 */
	if( my_nickName == _str )	return;
	/* 若nickName改變,則更新並發射signal訊號 */
	my_nickName = _str;
	emit changed_nickName(my_nickName);
}

/** * @brief 寫count函數
 	* @param int 傳入要寫的count
 	* @return None
**	**/
void my_property::set_count(int _count)
{
	/* 若無改變,則返回,無須發射signal訊號 */
	if( my_count == _count ) return;
	/* 若my_count改變,則更新並發射signal訊號 */
	my_count = _count;
	emit changed_count(my_count);
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF LineEdit_Label.cpp ***** */