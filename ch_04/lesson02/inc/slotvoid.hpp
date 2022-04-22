/** ******************************************************
	* @file		slotvoid.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __slotvoid_HPP__
#define __slotvoid_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QWidget>
#include <QObject>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
/* User Includes End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Extern Typedef -------------------------------------------*/
/* Extern Typedef Begin */
/* Extern Typedef End */


/* Extern Class -------------------------------------------*/
/* Extern Class Begin */

/* 自定義signal&slot物件 */
class slotvoid : public QWidget
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT
/* 私有成員 */
private:
/* 公共成員 */
public:
	/* 建構函數 */
	slotvoid(QWidget *parent =0);
	/* 解建構函數 */
	~slotvoid();
/* qt特有,slot成員 */
public slots:
	/* 自定義的slot接收函數 */
	void customize_Receive(void);
};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__ slotvoid_HPP__ */

/* ***** END OF slotvoid.HPP ***** */