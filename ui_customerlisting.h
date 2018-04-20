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
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *CustomerListing)
    {
        if (CustomerListing->objectName().isEmpty())
            CustomerListing->setObjectName(QStringLiteral("CustomerListing"));
        CustomerListing->resize(400, 358);
        label = new QLabel(CustomerListing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 381, 31));
        pushButton = new QPushButton(CustomerListing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 330, 91, 23));
        tableView = new QTableView(CustomerListing);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 381, 211));
        checkBox = new QCheckBox(CustomerListing);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 270, 161, 21));
        pushButton_2 = new QPushButton(CustomerListing);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 300, 141, 23));
        pushButton_3 = new QPushButton(CustomerListing);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 300, 91, 23));
        pushButton_4 = new QPushButton(CustomerListing);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 330, 141, 23));

        retranslateUi(CustomerListing);

        QMetaObject::connectSlotsByName(CustomerListing);
    } // setupUi

    void retranslateUi(QDialog *CustomerListing)
    {
        CustomerListing->setWindowTitle(QApplication::translate("CustomerListing", "Dialog", nullptr));
        label->setText(QApplication::translate("CustomerListing", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Customer List</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("CustomerListing", "Admin Menu", nullptr));
        checkBox->setText(QApplication::translate("CustomerListing", "Display Key Customers Only", nullptr));
        pushButton_2->setText(QApplication::translate("CustomerListing", "Add Customer Maunally", nullptr));
        pushButton_3->setText(QApplication::translate("CustomerListing", "Delete Customer", nullptr));
        pushButton_4->setText(QApplication::translate("CustomerListing", "Add Customer from File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerListing: public Ui_CustomerListing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLISTING_H
