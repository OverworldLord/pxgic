/********************************************************************************
** Form generated from reading UI file 'customerlisting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
        checkBox->setGeometry(QRect(10, 270, 121, 21));
        pushButton_2 = new QPushButton(CustomerListing);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(234, 270, 81, 23));
        pushButton_3 = new QPushButton(CustomerListing);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 270, 91, 23));

        retranslateUi(CustomerListing);

        QMetaObject::connectSlotsByName(CustomerListing);
    } // setupUi

    void retranslateUi(QDialog *CustomerListing)
    {
        CustomerListing->setWindowTitle(QApplication::translate("CustomerListing", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CustomerListing", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Customer List</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CustomerListing", "Admin Menu", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CustomerListing", "Key Customers Only", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CustomerListing", "Add Customer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CustomerListing", "Delete Customer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerListing: public Ui_CustomerListing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLISTING_H
