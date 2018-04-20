/********************************************************************************
** Form generated from reading UI file 'saleslisting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESLISTING_H
#define UI_SALESLISTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_salesListing
{
public:
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *salesListing)
    {
        if (salesListing->objectName().isEmpty())
            salesListing->setObjectName(QStringLiteral("salesListing"));
        salesListing->resize(400, 300);
        tableView = new QTableView(salesListing);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 381, 211));
        label = new QLabel(salesListing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 381, 31));
        pushButton = new QPushButton(salesListing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 75, 23));

        retranslateUi(salesListing);

        QMetaObject::connectSlotsByName(salesListing);
    } // setupUi

    void retranslateUi(QDialog *salesListing)
    {
        salesListing->setWindowTitle(QApplication::translate("salesListing", "Dialog", nullptr));
        label->setText(QApplication::translate("salesListing", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Sales List</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("salesListing", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class salesListing: public Ui_salesListing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESLISTING_H
