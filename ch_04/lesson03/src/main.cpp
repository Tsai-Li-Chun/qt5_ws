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
#include <QDebug>
#include <QMetaClassInfo>
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
	std::shared_ptr<my_property> _property = std::make_shared<my_property>();

	/* 建立QT-TopWindows(widget)管理物件 */
	const QMetaObject *pMO = _property->metaObject();
	/* 取得QT-TopWindows(widget)基礎資訊 */
	uint8_t pMO_count = pMO->classInfoCount();
	/* 依序打印 */
	for( uint8_t i=0;  i<pMO_count; i++ )
	{
		QMetaClassInfo info = pMO->classInfo(i);
		qDebug() << info.name() << '\t' << info.value();
	}
	/* 打印物件名子等資訊 */
	qDebug() << "Class  Name:" << pMO->className();
	qDebug() << "Object Name:" << _property->objectName();
	qDebug()<<_property->inherits("QWidget");
	qDebug()<<_property->inherits("QLabel");

	/* 使用寫nickName函數設定,並用讀nickName函數取值顯示 */
	_property->set_nickName("TsaiLiChun");
	qDebug() << _property->get_nickName();

	/* 使用寫count函數設定,並用讀count函數取值顯示 */
	_property->set_count(8787);
	qDebug() << _property->get_count();

	/* property.hpp檔無宣告value的讀寫函數,由moc自動生成,使用方法如下2行 */
	_property->setProperty("value", 87.1487);
	qDebug() << _property->property("value").toDouble();

	/* 顯示視窗 */
	_property->show();

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