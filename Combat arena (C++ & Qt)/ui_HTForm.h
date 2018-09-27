/********************************************************************************
** Form generated from reading UI file 'HTForm.ui'
**
** Created: Fri Dec 14 17:21:07 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTFORM_H
#define UI_HTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_HTForm
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *HTForm)
    {
        if (HTForm->objectName().isEmpty())
            HTForm->setObjectName(QString::fromUtf8("HTForm"));
        HTForm->resize(1035, 543);
        label = new QLabel(HTForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 10, 481, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton_2 = new QPushButton(HTForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 70, 211, 27));
        pushButton_3 = new QPushButton(HTForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 100, 151, 27));
        pushButton_4 = new QPushButton(HTForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(90, 130, 141, 27));
        pushButton_5 = new QPushButton(HTForm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 160, 98, 27));
        groupBox = new QGroupBox(HTForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(480, 60, 411, 201));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 20, 361, 31));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 0, 291, 27));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 50, 131, 141));
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 116, 22));
        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 40, 116, 22));
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 60, 116, 22));
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 80, 116, 22));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 100, 116, 22));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(170, 50, 120, 141));
        radioButton_6 = new QRadioButton(groupBox_4);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(0, 20, 116, 22));
        radioButton_7 = new QRadioButton(groupBox_4);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(0, 40, 116, 22));
        radioButton_8 = new QRadioButton(groupBox_4);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(0, 60, 116, 22));
        radioButton_9 = new QRadioButton(groupBox_4);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(0, 80, 116, 22));
        radioButton_10 = new QRadioButton(groupBox_4);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(0, 100, 116, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 160, 98, 27));
        textBrowser = new QTextBrowser(HTForm);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 270, 931, 241));

        retranslateUi(HTForm);

        QMetaObject::connectSlotsByName(HTForm);
    } // setupUi

    void retranslateUi(QDialog *HTForm)
    {
        HTForm->setWindowTitle(QApplication::translate("HTForm", "HTForm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HTForm", "Olio-ohjelmointi - project assignment", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("HTForm", "Create random character", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("HTForm", "Show statistics", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("HTForm", "Print fighters", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("HTForm", "Fight!", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("HTForm", "Create new character:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("HTForm", "Name:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("HTForm", "Class:", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("HTForm", "Jadeon", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("HTForm", "Lupin", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("HTForm", "Modo", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("HTForm", "Skysong", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("HTForm", "Vim", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("HTForm", "Weapon:", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("HTForm", "Duoblade", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("HTForm", "Fangclaw", 0, QApplication::UnicodeUTF8));
        radioButton_8->setText(QApplication::translate("HTForm", "Glaive", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("HTForm", "Staff", 0, QApplication::UnicodeUTF8));
        radioButton_10->setText(QApplication::translate("HTForm", "Sword", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("HTForm", "Create", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HTForm: public Ui_HTForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTFORM_H
