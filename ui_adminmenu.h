/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName(QStringLiteral("AdminMenu"));
        AdminMenu->resize(400, 300);
        label = new QLabel(AdminMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 381, 31));
        pushButton = new QPushButton(AdminMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 30, 75, 23));
        pushButton_2 = new QPushButton(AdminMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 60, 75, 23));
        pushButton_3 = new QPushButton(AdminMenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 90, 75, 23));

        retranslateUi(AdminMenu);

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QApplication::translate("AdminMenu", "Dialog", nullptr));
        label->setText(QApplication::translate("AdminMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Admin Menu</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("AdminMenu", "Logout", nullptr));
        pushButton_2->setText(QApplication::translate("AdminMenu", "Customers", nullptr));
        pushButton_3->setText(QApplication::translate("AdminMenu", "Sales", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
