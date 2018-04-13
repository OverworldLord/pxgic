/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_AddCustomer
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *nameLineEdit;
    QLineEdit *addressLineEdit;
    QLineEdit *cityLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *stateLineEdit;
    QLineEdit *zipLineEdit;
    QSlider *InterestSlider;
    QCheckBox *keyCheckBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *AddCustomer)
    {
        if (AddCustomer->objectName().isEmpty())
            AddCustomer->setObjectName(QStringLiteral("AddCustomer"));
        AddCustomer->resize(400, 416);
        pushButton = new QPushButton(AddCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 380, 81, 23));
        pushButton_2 = new QPushButton(AddCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 380, 71, 23));
        nameLineEdit = new QLineEdit(AddCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(210, 70, 113, 20));
        addressLineEdit = new QLineEdit(AddCustomer);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(210, 110, 113, 20));
        cityLineEdit = new QLineEdit(AddCustomer);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(210, 150, 113, 20));
        label = new QLabel(AddCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 70, 47, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(AddCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 110, 51, 16));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(AddCustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 150, 47, 16));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(AddCustomer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 190, 47, 16));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(AddCustomer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 230, 47, 16));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stateLineEdit = new QLineEdit(AddCustomer);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setGeometry(QRect(210, 190, 113, 20));
        zipLineEdit = new QLineEdit(AddCustomer);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setGeometry(QRect(210, 230, 113, 20));
        InterestSlider = new QSlider(AddCustomer);
        InterestSlider->setObjectName(QStringLiteral("InterestSlider"));
        InterestSlider->setGeometry(QRect(120, 290, 160, 16));
        InterestSlider->setMaximum(2);
        InterestSlider->setSliderPosition(1);
        InterestSlider->setOrientation(Qt::Horizontal);
        keyCheckBox = new QCheckBox(AddCustomer);
        keyCheckBox->setObjectName(QStringLiteral("keyCheckBox"));
        keyCheckBox->setGeometry(QRect(150, 320, 101, 17));
        keyCheckBox->setFont(font);
        label_6 = new QLabel(AddCustomer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 290, 31, 16));
        QFont font1;
        font1.setPointSize(8);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(AddCustomer);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(160, 270, 81, 16));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(AddCustomer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 290, 47, 16));
        label_8->setFont(font1);
        label_9 = new QLabel(AddCustomer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 20, 141, 20));
        QFont font2;
        font2.setPointSize(14);
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        retranslateUi(AddCustomer);

        QMetaObject::connectSlotsByName(AddCustomer);
    } // setupUi

    void retranslateUi(QDialog *AddCustomer)
    {
        AddCustomer->setWindowTitle(QApplication::translate("AddCustomer", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("AddCustomer", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("AddCustomer", "Back", nullptr));
        label->setText(QApplication::translate("AddCustomer", "Name", nullptr));
        label_2->setText(QApplication::translate("AddCustomer", "Address", nullptr));
        label_3->setText(QApplication::translate("AddCustomer", "City", nullptr));
        label_4->setText(QApplication::translate("AddCustomer", "State", nullptr));
        label_5->setText(QApplication::translate("AddCustomer", "Zip", nullptr));
        keyCheckBox->setText(QApplication::translate("AddCustomer", "Key Customer", nullptr));
        label_6->setText(QApplication::translate("AddCustomer", "Low", nullptr));
        label_7->setText(QApplication::translate("AddCustomer", "Interest Level", nullptr));
        label_8->setText(QApplication::translate("AddCustomer", "High", nullptr));
        label_9->setText(QApplication::translate("AddCustomer", "Add Customer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCustomer: public Ui_AddCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
