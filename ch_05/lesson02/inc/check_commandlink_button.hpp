/** ******************************************************
	* @file		check_commandlink_button.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __check_commandlink_button_HPP__
#define __check_commandlink_button_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "ui_check_commandlink_button.h"
/* User Includes End */


/* Define ---------------------------------------------------*/
/* Define Begin */
/* Define End */


/* Extern Typedef -------------------------------------------*/
/* Extern Typedef Begin */
/* Extern Typedef End */


/* Extern Class -------------------------------------------*/
/* Extern Class Begin */

/* QT-TopWindows(widget)物件 */
class check_commandlink_button : public QWidget, public Ui::Form
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT

/* 私有成員 */
private:

/* 公共成員 */
public:
	/* 建構函數,預設父節點位址(pointer)為0,無父節點 */
	check_commandlink_button(QWidget *parent=0);
	/* 解建構函數 */
	~check_commandlink_button();

	/* 檢查勾選狀態函數 */
	void checkHobbies(void);

/* qt特有,公共slot成員 */
public slots:

/* qt特有,私有slot成員 */
private slots:
	/* 6個興趣勾選slot函數 */
	void on_check_A1_toggled(bool);
	void on_check_A2_toggled(bool);
	void on_check_A3_toggled(bool);
	void on_check_A4_toggled(bool);
	void on_check_A5_toggled(bool);
	void on_check_A6_toggled(bool);
	/* 3態選項勾選slot函數 */
	void on_checkBoxTristate_stateChanged(int);
	/* 彈窗顯示按鈕slot函數 */
	void on_PushWindows_clicked(void);
	/* 命令按鈕(開啟文件)slot函數 */
	void on_CommandLink_OpenFile_clicked(void);
	/* 命令按鈕(開啟網站)slot函數 */
	void on_CommandLink_OpenWeb_clicked(void);

};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__ check_commandlink_button_HPP__ */

/* ***** END OF check_commandlink_button.HPP ***** */