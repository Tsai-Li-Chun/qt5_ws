/********************************************************************************
** Form generated from reading UI file 'ui_Login_Windows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WINDOWS_H
#define UI_LOGIN_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_login
{
public:
    QLabel *Label_user;
    QLabel *Label_password;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_exit;

    void setupUi(QWidget *Form_login)
    {
        if (Form_login->objectName().isEmpty())
            Form_login->setObjectName(QString::fromUtf8("Form_login"));
        Form_login->resize(400, 300);
        Label_user = new QLabel(Form_login);
        Label_user->setObjectName(QString::fromUtf8("Label_user"));
        Label_user->setGeometry(QRect(40, 40, 90, 30));
        Label_user->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_password = new QLabel(Form_login);
        Label_password->setObjectName(QString::fromUtf8("Label_password"));
        Label_password->setGeometry(QRect(40, 100, 90, 30));
        Label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_user = new QLineEdit(Form_login);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(150, 40, 200, 30));
        lineEdit_password = new QLineEdit(Form_login);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(150, 100, 200, 30));
        pushButton_login = new QPushButton(Form_login);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(80, 180, 100, 50));
        QFont font;
        font.setPointSize(20);
        pushButton_login->setFont(font);
        pushButton_exit = new QPushButton(Form_login);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(220, 180, 100, 50));
        pushButton_exit->setFont(font);

        retranslateUi(Form_login);

        QMetaObject::connectSlotsByName(Form_login);
    } // setupUi

    void retranslateUi(QWidget *Form_login)
    {
        Form_login->setWindowTitle(QApplication::translate("Form_login", "Login", nullptr));
        Label_user->setText(QApplication::translate("Form_login", "User", nullptr));
        Label_password->setText(QApplication::translate("Form_login", "PassWord", nullptr));
        pushButton_login->setText(QApplication::translate("Form_login", "Login", nullptr));
        pushButton_exit->setText(QApplication::translate("Form_login", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_login: public Ui_Form_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WINDOWS_H
