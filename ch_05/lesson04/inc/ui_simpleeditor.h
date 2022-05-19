/********************************************************************************
** Form generated from reading UI file 'ui_simpleeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEEDITOR_H
#define UI_SIMPLEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButtonBold;
    QPushButton *pushButtonItalic;
    QPushButton *pushButtonUnderline;
    QPushButton *pushButtonColor;
    QPushButton *pushButtonBGColor;
    QLabel *label;
    QLineEdit *lineEditFontSize;
    QFontComboBox *fontComboBox;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(410, 300);
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 70, 391, 221));
        pushButtonBold = new QPushButton(Widget);
        pushButtonBold->setObjectName(QString::fromUtf8("pushButtonBold"));
        pushButtonBold->setGeometry(QRect(10, 10, 75, 23));
        pushButtonBold->setCheckable(false);
        pushButtonBold->setChecked(false);
        pushButtonItalic = new QPushButton(Widget);
        pushButtonItalic->setObjectName(QString::fromUtf8("pushButtonItalic"));
        pushButtonItalic->setGeometry(QRect(90, 10, 75, 23));
        pushButtonUnderline = new QPushButton(Widget);
        pushButtonUnderline->setObjectName(QString::fromUtf8("pushButtonUnderline"));
        pushButtonUnderline->setGeometry(QRect(170, 10, 75, 23));
        pushButtonColor = new QPushButton(Widget);
        pushButtonColor->setObjectName(QString::fromUtf8("pushButtonColor"));
        pushButtonColor->setGeometry(QRect(250, 10, 75, 23));
        pushButtonBGColor = new QPushButton(Widget);
        pushButtonBGColor->setObjectName(QString::fromUtf8("pushButtonBGColor"));
        pushButtonBGColor->setGeometry(QRect(330, 10, 75, 23));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 30, 22));
        lineEditFontSize = new QLineEdit(Widget);
        lineEditFontSize->setObjectName(QString::fromUtf8("lineEditFontSize"));
        lineEditFontSize->setGeometry(QRect(50, 40, 111, 22));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(220, 40, 181, 22));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 40, 30, 22));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonBold->setText(QApplication::translate("Widget", "\347\262\227\351\253\224", nullptr));
        pushButtonItalic->setText(QApplication::translate("Widget", "\346\226\234\351\253\224", nullptr));
        pushButtonUnderline->setText(QApplication::translate("Widget", "\345\272\225\347\267\232", nullptr));
        pushButtonColor->setText(QApplication::translate("Widget", "\345\211\215\346\231\257\350\211\262", nullptr));
        pushButtonBGColor->setText(QApplication::translate("Widget", "\350\203\214\346\231\257\350\211\262", nullptr));
        label->setText(QApplication::translate("Widget", "\345\255\227\350\231\237", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\255\227\351\253\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEEDITOR_H
