/********************************************************************************
** Form generated from reading UI file 'ui_Button.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_gender;
    QLabel *label_status;
    QRadioButton *radioButtonMan;
    QRadioButton *radioButtonWoman;
    QRadioButton *radioButtonBang;
    QRadioButton *radioButtonMeng;
    QRadioButton *radioButtonYao;
    QRadioButton *radioButtonAstolfo;
    QGroupBox *groupBox;
    QRadioButton *radioButton0to19;
    QRadioButton *radioButton20to39;
    QRadioButton *radioButton40to59;
    QRadioButton *radioButton60to;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        label_gender = new QLabel(Form);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));
        label_gender->setGeometry(QRect(20, 30, 54, 12));
        label_status = new QLabel(Form);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(20, 60, 54, 12));
        radioButtonMan = new QRadioButton(Form);
        radioButtonMan->setObjectName(QString::fromUtf8("radioButtonMan"));
        radioButtonMan->setGeometry(QRect(90, 30, 89, 16));
        radioButtonWoman = new QRadioButton(Form);
        radioButtonWoman->setObjectName(QString::fromUtf8("radioButtonWoman"));
        radioButtonWoman->setGeometry(QRect(190, 30, 89, 16));
        radioButtonBang = new QRadioButton(Form);
        radioButtonBang->setObjectName(QString::fromUtf8("radioButtonBang"));
        radioButtonBang->setGeometry(QRect(90, 60, 89, 16));
        radioButtonMeng = new QRadioButton(Form);
        radioButtonMeng->setObjectName(QString::fromUtf8("radioButtonMeng"));
        radioButtonMeng->setGeometry(QRect(190, 60, 89, 16));
        radioButtonYao = new QRadioButton(Form);
        radioButtonYao->setObjectName(QString::fromUtf8("radioButtonYao"));
        radioButtonYao->setGeometry(QRect(290, 60, 89, 16));
        radioButtonAstolfo = new QRadioButton(Form);
        radioButtonAstolfo->setObjectName(QString::fromUtf8("radioButtonAstolfo"));
        radioButtonAstolfo->setGeometry(QRect(290, 30, 89, 16));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 100, 381, 151));
        radioButton0to19 = new QRadioButton(groupBox);
        radioButton0to19->setObjectName(QString::fromUtf8("radioButton0to19"));
        radioButton0to19->setGeometry(QRect(80, 30, 89, 16));
        radioButton20to39 = new QRadioButton(groupBox);
        radioButton20to39->setObjectName(QString::fromUtf8("radioButton20to39"));
        radioButton20to39->setGeometry(QRect(80, 60, 89, 16));
        radioButton40to59 = new QRadioButton(groupBox);
        radioButton40to59->setObjectName(QString::fromUtf8("radioButton40to59"));
        radioButton40to59->setGeometry(QRect(80, 90, 89, 16));
        radioButton60to = new QRadioButton(groupBox);
        radioButton60to->setObjectName(QString::fromUtf8("radioButton60to"));
        radioButton60to->setGeometry(QRect(80, 120, 89, 16));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 260, 75, 23));

        retranslateUi(Form);

        // QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_gender->setText(QApplication::translate("Form", "\346\200\247\345\210\245", nullptr));
        label_status->setText(QApplication::translate("Form", "\347\213\200\346\205\213", nullptr));
        radioButtonMan->setText(QApplication::translate("Form", "\347\224\267", nullptr));
        radioButtonWoman->setText(QApplication::translate("Form", "\345\245\263", nullptr));
        radioButtonBang->setText(QApplication::translate("Form", "\346\243\222\346\243\222\345\231\240", nullptr));
        radioButtonMeng->setText(QApplication::translate("Form", "\350\220\214\350\220\214\345\231\240", nullptr));
        radioButtonYao->setText(QApplication::translate("Form", "\350\251\262\345\220\203\350\227\245\344\272\206", nullptr));
        radioButtonAstolfo->setText(QApplication::translate("Form", "\351\230\277\347\246\217", nullptr));
        groupBox->setTitle(QApplication::translate("Form", "\345\271\264\351\275\241\346\256\265", nullptr));
        radioButton0to19->setText(QApplication::translate("Form", "0-19", nullptr));
        radioButton20to39->setText(QApplication::translate("Form", "20-39", nullptr));
        radioButton40to59->setText(QApplication::translate("Form", "40-59", nullptr));
        radioButton60to->setText(QApplication::translate("Form", "60\344\273\245\344\270\212", nullptr));
        pushButton->setText(QApplication::translate("Form", "\345\275\210\347\252\227\351\241\257\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
