/** ******************************************************
	* @file		widget.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __widget_H__
#define __widget_H__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QWidget>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "ui_widget.h"
/* User Includes End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Extern Typedef -------------------------------------------*/
/* Extern Typedef Begin */
/* Extern Typedef End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */

/* Extern class -----------------------------------------*/
/* Extern class Begin */

/* main自用qt_top物件 */
class signal_slot_1 : public QWidget, public Ui::Widget
{
	/* 引用qt的MateObject宣告 */
    Q_OBJECT
/* 私有成員 */
private:

/* 公共成員 */
public:
	/* 建構函數 */
    signal_slot_1();
	/* 解建構函數 */
    ~signal_slot_1();

/* qt特有,slot成員 */
public slots:
	/* hungry_btn的slot函數 */
    void on_hungry_btn_clicked(void);
};

/* Extern class End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */

#endif /*__ widget_H__ */

/* ***** END OF widget.H ***** */