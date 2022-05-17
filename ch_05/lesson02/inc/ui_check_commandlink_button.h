/********************************************************************************
** Form generated from reading UI file 'ui_check_commandlink_button.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_COMMANDLINK_BUTTON_H
#define UI_CHECK_COMMANDLINK_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *PushWindows;
    QCheckBox *check_A1;
    QCheckBox *check_A2;
    QCheckBox *check_A3;
    QCheckBox *check_A4;
    QCheckBox *check_A5;
    QCheckBox *check_A6;
    QCheckBox *checkBoxTristate;
    QCommandLinkButton *CommandLink_OpenFile;
    QCommandLinkButton *CommandLink_OpenWeb;
    QGroupBox *Anime;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 400);
        PushWindows = new QPushButton(Form);
        PushWindows->setObjectName(QString::fromUtf8("PushWindows"));
        PushWindows->setGeometry(QRect(200, 190, 121, 41));
        check_A1 = new QCheckBox(Form);
        check_A1->setObjectName(QString::fromUtf8("check_A1"));
        check_A1->setGeometry(QRect(80, 40, 90, 20));
        check_A2 = new QCheckBox(Form);
        check_A2->setObjectName(QString::fromUtf8("check_A2"));
        check_A2->setGeometry(QRect(210, 40, 90, 20));
        check_A3 = new QCheckBox(Form);
        check_A3->setObjectName(QString::fromUtf8("check_A3"));
        check_A3->setGeometry(QRect(80, 80, 90, 20));
        check_A4 = new QCheckBox(Form);
        check_A4->setObjectName(QString::fromUtf8("check_A4"));
        check_A4->setGeometry(QRect(210, 80, 90, 20));
        check_A5 = new QCheckBox(Form);
        check_A5->setObjectName(QString::fromUtf8("check_A5"));
        check_A5->setGeometry(QRect(80, 120, 90, 20));
        check_A6 = new QCheckBox(Form);
        check_A6->setObjectName(QString::fromUtf8("check_A6"));
        check_A6->setGeometry(QRect(210, 120, 90, 20));
        checkBoxTristate = new QCheckBox(Form);
        checkBoxTristate->setObjectName(QString::fromUtf8("checkBoxTristate"));
        checkBoxTristate->setGeometry(QRect(80, 200, 90, 25));
        CommandLink_OpenFile = new QCommandLinkButton(Form);
        CommandLink_OpenFile->setObjectName(QString::fromUtf8("CommandLink_OpenFile"));
        CommandLink_OpenFile->setGeometry(QRect(100, 260, 177, 41));
        CommandLink_OpenWeb = new QCommandLinkButton(Form);
        CommandLink_OpenWeb->setObjectName(QString::fromUtf8("CommandLink_OpenWeb"));
        CommandLink_OpenWeb->setGeometry(QRect(100, 320, 177, 41));
        Anime = new QGroupBox(Form);
        Anime->setObjectName(QString::fromUtf8("Anime"));
        Anime->setGeometry(QRect(50, 10, 331, 151));
        Anime->raise();
        PushWindows->raise();
        check_A1->raise();
        check_A2->raise();
        check_A3->raise();
        check_A4->raise();
        check_A5->raise();
        check_A6->raise();
        checkBoxTristate->raise();
        CommandLink_OpenFile->raise();
        CommandLink_OpenWeb->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        PushWindows->setText(QApplication::translate("Form", "PushWindows", nullptr));
        check_A1->setText(QApplication::translate("Form", "Clannad", nullptr));
        check_A2->setText(QApplication::translate("Form", "\346\253\273\350\212\261\350\216\212", nullptr));
        check_A3->setText(QApplication::translate("Form", "86\346\210\260\345\215\200", nullptr));
        check_A4->setText(QApplication::translate("Form", "\345\234\260\344\270\213\345\237\216", nullptr));
        check_A5->setText(QApplication::translate("Form", "hololive", nullptr));
        check_A6->setText(QApplication::translate("Form", "NieR", nullptr));
        checkBoxTristate->setText(QApplication::translate("Form", "Tristate", nullptr));
        CommandLink_OpenFile->setText(QApplication::translate("Form", "CommandLink_OpenFile", nullptr));
        CommandLink_OpenWeb->setText(QApplication::translate("Form", "CommandLink_OpenWeb", nullptr));
        Anime->setTitle(QApplication::translate("Form", "Anime", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_COMMANDLINK_BUTTON_H
