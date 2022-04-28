/** ******************************************************
	* @file		LineEdit_Label.h
	* @author	Tsai,Li-chun
	******************************************************
**	**/

/* Define to prevent recursive inclusi ----------------------*/
#ifndef __property_HPP__
#define __property_HPP__


/* System Includes ------------------------------------------*/
/* System Includes Begin */
#include <QWidget>
#include <QObject>
#include <QString>
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


/* Extern Class -------------------------------------------*/
/* Extern Class Begin */

/* QT-TopWindows(widget)物件 */
class my_property : public QWidget, public Ui::Form
{
	/* 引用qt-MateObject(管控物件)宣告 */
	Q_OBJECT
/* 私有成員 */
private:
	/* 宣告3個變數,對應3個屬性 */
	QString my_nickName; int my_count; double my_value;

/* 公共成員 */
public:
	/* 建構函數,預設父節點位址(pointer)為0,無父節點 */
	my_property(QWidget *parent = 0);
	/* 解建構函數 */
	~my_property();

	/* 聲明屬性	  type		name		READ(讀函數)	  WRITE(寫函數)		NOTIFY(signal函數)  */
	/* 寫法1:不明確指定私有成員變數 */
	Q_PROPERTY(QString get_nickName READ get_nickName WRITE set_nickName NOTIFY changed_nickName)
	/* 寫法2:明確指定私有成員變數, 多了使用標籤MEMBER來指定私有成員變數 */
	Q_PROPERTY(int get_count MEMBER my_count READ get_count WRITE set_count NOTIFY changed_count)
	/* 寫法3:精簡寫法, 讀寫函數交與moc編譯,連在此hpp檔裡宣告都不需要 */
	Q_PROPERTY(double get_value MEMBER my_value NOTIFY changed_value)

	/* 新增物件(class)的附加訊息 */
    Q_CLASSINFO("Version", "1.8.7")
    Q_CLASSINFO("Author", "TsaiLiChun")
    Q_CLASSINFO("Site", "https://xxxx.edu.cn/xxxx/xxxxxxx/")

	/* 讀nickName函數 */
	const QString& get_nickName(void);
	/* 讀count函數 */
	int get_count(void);

/* qt特有,signals成員 */
signals:
	/* nickName改變時的signal發射函數 */
	void changed_nickName(const QString&);
	/* count改變時的signal發射函數 */
	void changed_count(int);
	/* value改變時的signal發射函數 */
	void changed_value(double);

/* qt特有,slot成員 */
public slots:
/* 將寫函數製作成QT-slot函數,方便與其他信號關聯 */
/* value的寫函數由moc自動處理 */
	/* 寫nickName函數 */
	void set_nickName(const QString&);
	/* 寫count函數 */
	void set_count(int);

};

/* Extern Class End */


/* Extern Variables -----------------------------------------*/
/* Extern Variables Begin */
/* Extern Variables End */


/* Function -------------------------------------------------*/
/* Function Begin */
/* Function End */


#endif /*__property_HPP__ */

/* ***** END OF property.HPP ***** */