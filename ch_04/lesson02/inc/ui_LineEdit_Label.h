/********************************************************************************
** Form generated from reading UI file 'ui_LineEdit_Label.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEEDIT_LABEL_H
#define UI_LINEEDIT_LABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QPushButton *btn_A;
    QPushButton *btn_B;
    QPushButton *btn_C;
    QPushButton *btn_disconnect;
    QPushButton *btn_connect;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(600, 320);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 400, 30));
        label->setStyleSheet(QString::fromUtf8("QLabel{background:#D4D4D4;}"));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 20, 400, 30));
        textBrowser = new QTextBrowser(Form);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 120, 400, 140));
        btn_A = new QPushButton(Form);
        btn_A->setObjectName(QString::fromUtf8("btn_A"));
        btn_A->setGeometry(QRect(480, 30, 100, 50));
        btn_B = new QPushButton(Form);
        btn_B->setObjectName(QString::fromUtf8("btn_B"));
        btn_B->setGeometry(QRect(480, 110, 100, 50));
        btn_C = new QPushButton(Form);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        btn_C->setGeometry(QRect(480, 190, 100, 50));
        btn_disconnect = new QPushButton(Form);
        btn_disconnect->setObjectName(QString::fromUtf8("btn_disconnect"));
        btn_disconnect->setGeometry(QRect(350, 275, 100, 30));
        btn_connect = new QPushButton(Form);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(150, 275, 100, 30));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "TextLabel", nullptr));
        btn_A->setText(QApplication::translate("Form", "btn_A", nullptr));
        btn_B->setText(QApplication::translate("Form", "btn_B", nullptr));
        btn_C->setText(QApplication::translate("Form", "btn_C", nullptr));
        btn_disconnect->setText(QApplication::translate("Form", "disconnect", nullptr));
        btn_connect->setText(QApplication::translate("Form", "connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEEDIT_LABEL_H
