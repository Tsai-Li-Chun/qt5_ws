/** ******************************************************
	* @file		button.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __button_HPP__
#define __button_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <memory>
#include <QWidget>
#include <QRadioButton>
#include <QButtonGroup>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include <ui_Button.h>
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
class button : public QWidget, public Ui::Form
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT
/* 私有成員 */
private:
	/* 性別按鈕群組物件 */
	std::shared_ptr<QButtonGroup> _bG_gender;
	/* 狀態按鈕群組物件 */
	std::shared_ptr<QButtonGroup> _bG_status;

/* 公共成員 */
public:
	/* 建構函數,預設父節點位址(pointer)為0,無父節點 */
	button(QWidget *parent = 0);
	/* 解建構函數 */
	~button();

/* qt特有,公共slot成員 */
public slots:
	/* 按下性別按鈕後slot函數 */
	void RecGenderID(int);
	/* 按下狀態按鈕後slot函數 */
	void RecStatusID(int);

/* qt特有,私有slot成員 */
private slots:
	/* 各個年齡按鈕所對應的slot函數 */
	void on_radioButton0to19_toggled(bool);
    void on_radioButton20to39_toggled(bool);
    void on_radioButton40to59_toggled(bool);
    void on_radioButton60to_toggled(bool);
	/* 彈窗按鈕slot函數 */
	void on_pushButton_clicked(void);
};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__ button_HPP__ */

/* ***** END OF button.HPP ***** */