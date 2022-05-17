/** ******************************************************
	* @file		button.cpp
	* @author	Tsai,Li-chun
	******************************************************
**	**/


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QDebug>
#include <QMessageBox>
/* System Includes End */
/* User Includes --------------------------------------------*/
/* User Includes Begin */
#include "button.hpp"
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
button::button(QWidget *parent):QWidget(parent)
{
	/* 初始化視窗內物件 */
	this->setupUi(this);

	/* 建立性別按鈕分組,並添加按鈕至組內與設定id */
	_bG_gender = std::make_shared<QButtonGroup>(this);
	_bG_gender->addButton(this->radioButtonMan,1);
	_bG_gender->addButton(this->radioButtonWoman,2);
	_bG_gender->addButton(this->radioButtonAstolfo,3);
	/* 建立狀態按鈕分組,並添加按鈕至組內與設定id */
	_bG_status = std::make_shared<QButtonGroup>(this);
	_bG_status->addButton(this->radioButtonBang,1);
	_bG_status->addButton(this->radioButtonMeng,2);
	_bG_status->addButton(this->radioButtonYao,3);

	/* 關聯signal&slot */
	// connect(_bG_gender.get(), QOverload<int>::of(&QButtonGroup::buttonClicked), this, &button::RecGenderID);
	connect(_bG_gender.get(), static_cast<void(QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), 
					 this, 	  &button::RecGenderID);
	connect(_bG_status.get(), static_cast<void(QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked),
					 this,	  &button::RecStatusID);
	connect(radioButton0to19, &QRadioButton::toggled, 
					 this,	  &button::on_radioButton0to19_toggled);
	connect(radioButton20to39, &QRadioButton::toggled, 
					 this,	  &button::on_radioButton20to39_toggled);
	connect(radioButton40to59, &QRadioButton::toggled, 
					 this,	  &button::on_radioButton40to59_toggled);
	connect(radioButton60to, &QRadioButton::toggled, 
					 this,	  &button::on_radioButton60to_toggled);
	connect(pushButton, &QPushButton::clicked, 
					 this,	  &button::on_pushButton_clicked);
}
/** * @brief 解建構涵式
 	* @param None
 	* @return None
**	**/
button::~button()
{
}

/** * @brief button gender slot function -- ButtonGroup::buttonclicked
 	* @param int(id) 群組內按鈕編號
 	* @return None
**	**/
void button::RecGenderID(int id)
{
	switch(id)
	{
		case 1:
			qDebug() << tr("男的");
			break;
		case 2:
			qDebug() << tr("女的");
			break;
		case 3:
			qDebug() << tr("阿福");
			break;
		default:
			break;
	}
}

/** * @brief button status slot function -- ButtonGroup::buttonclicked
 	* @param int(id) 群組內按鈕編號
 	* @return None
**	**/
void button::RecStatusID(int id)
{
	switch(id)
	{
		case 1:
			qDebug() << tr("棒棒噠");
			break;
		case 2:
			qDebug() << tr("萌萌噠");
			break;
		case 3:
			qDebug() << tr("該吃藥了");
			break;
		default:
			break;
	}
}

/** * @brief button 0-19 age slot function -- ButtonGroup::buttonclicked
 	* @param int(id) 群組內按鈕編號
 	* @return None
**	**/
void button::on_radioButton0to19_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("年龄段:0-19");
    }
    else
    {
        qDebug()<<tr("不是 0-19");
    }
}
/** * @brief button 20-39 age slot function -- ButtonGroup::buttonclicked
 	* @param int(id) 群組內按鈕編號
 	* @return None
**	**/
void button::on_radioButton20to39_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("年龄段:20-39");
    }
    else
    {
        qDebug()<<tr("不是 20-39");
    }
}
/** * @brief button 40-59 age slot function -- ButtonGroup::buttonclicked
 	* @param int(id) 群組內按鈕編號
 	* @return None
**	**/
void button::on_radioButton40to59_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("年龄段:40-59");
    }
    else
    {
        qDebug()<<tr("不是 40-59");
    }
}
/** * @brief button 60- age slot function -- ButtonGroup::buttonclicked
 	* @param int(id) 群組內按鈕編號
 	* @return None
**	**/
void button::on_radioButton60to_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<tr("年龄段:60-");
    }
    else
    {
        qDebug()<<tr("不是 60-");
    }
}

/** * @brief pushButton slot function -- pushButton::clicked
 	* @param None
 	* @return None
**	**/ 
void button::on_pushButton_clicked(void)
{
    /* 結果字串變數 */
    QString strResult;

    /* 性別分組,獲取選中按鈕ID */
    int nGenderID = _bG_gender->checkedId();
    switch (nGenderID)
	{
		case 1:
			strResult += tr("性別:男\r\n");break;
		case 2:
			strResult += tr("性別:女\r\n");break;
		case 3:
			strResult += tr("性別:阿福\r\n");break;
		default:
			strResult += tr("性別:未選中\r\n");break;
    }

    /* 狀態分組,獲取選中按鈕ID */
    int nStatusID = _bG_status->checkedId();
    switch (nStatusID) {
    case 1:
        strResult += tr("狀態:棒棒噠\r\n");break;
    case 2:
        strResult += tr("狀態:萌萌噠\r\n");break;
    case 3:
        strResult += tr("狀態:該吃藥囉\r\n");break;
    default:
        strResult += tr("狀態:未選中\r\n");break;
    }

    /* 年齡分組,分別判斷各個按鈕 */
    if( this->radioButton0to19->isChecked() )
        strResult += tr("年齡段:0-19\r\n");
    else if( this->radioButton20to39->isChecked() )
        strResult += tr("年齡段:20-39\r\n");
    else if( this->radioButton40to59->isChecked() )
        strResult += tr("年齡段:40-59\r\n");
    else if( this->radioButton60to->isChecked() )
        strResult += tr("年齡段:60以上\r\n");
    else
        strResult += tr("年齡段:未選中\r\n");

    /* 彈窗顯示 */
    QMessageBox::information(this, tr("綜合訊息"), strResult);
}

/* Program End */
/* ---------------------------------------------------------*/
/* ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ Program ⇧⇧⇧⇧⇧⇧⇧⇧⇧⇧ ---------------------------*/
/* ---------------------------------------------------------*/


/* ***** END OF button.cpp ***** */