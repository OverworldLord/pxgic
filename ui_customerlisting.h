/********************************************************************************
** Form generated from reading UI file 'customerlisting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERLISTING_H
#define UI_CUSTOMERLISTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_CustomerListing
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CustomerListing)
    {
        if (CustomerListing->objectName().isEmpty())
            CustomerListing->setObjectName(QStringLiteral("CustomerListing"));
        CustomerListing->resize(400, 300);
        label = new QLabel(CustomerListing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 381, 31));
        pushButton = new QPushButton(CustomerListing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 270, 71, 23));
        tableView = new QTableView(CustomerListing);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 381, 211));
        checkBox = new QCheckBox(CustomerListing);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 270, 121, 17));
        pushButton_2 = new QPushButton(CustomerListing);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(234, 270, 81, 23));

        retranslateUi(CustomerListing);

        QMetaObject::connectSlotsByName(CustomerListing);
    } // setupUi

    void retranslateUi(QDialog *CustomerListing)
    {
        CustomerListing->setWindowTitle(QApplication::translate("CustomerListing", "Dialog", nullptr));
        label->setText(QApplication::translate("CustomerListing", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Customer List</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("CustomerListing", "Admin Menu", nullptr));
        checkBox->setText(QApplication::translate("CustomerListing", "Key Customers Only", nullptr));
        pushButton_2->setText(QApplication::translate("CustomerListing", "Add Customer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerListing: public Ui_CustomerListing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLISTING_H
