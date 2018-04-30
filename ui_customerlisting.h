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
    QPushButton *pushButton_4;
    QLabel *label_2;

    void setupUi(QDialog *CustomerListing)
    {
        if (CustomerListing->objectName().isEmpty())
            CustomerListing->setObjectName(QStringLiteral("CustomerListing"));
        CustomerListing->resize(1600, 900);
        label = new QLabel(CustomerListing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 1581, 71));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        pushButton = new QPushButton(CustomerListing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 830, 351, 51));
        QFont font1;
        font1.setPointSize(28);
        pushButton->setFont(font1);
        tableView = new QTableView(CustomerListing);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 80, 1561, 741));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 255, 255, 20));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        tableView->setPalette(palette);
        QFont font2;
        font2.setPointSize(18);
        tableView->setFont(font2);
        checkBox = new QCheckBox(CustomerListing);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(1130, 10, 451, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        checkBox->setPalette(palette1);
        checkBox->setFont(font);
        pushButton_2 = new QPushButton(CustomerListing);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 830, 411, 51));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(CustomerListing);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1230, 830, 351, 51));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(CustomerListing);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(810, 830, 411, 51));
        pushButton_4->setFont(font1);
        label_2 = new QLabel(CustomerListing);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 1581, 881));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/themoon.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        label->raise();
        pushButton->raise();
        tableView->raise();
        checkBox->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(CustomerListing);

        QMetaObject::connectSlotsByName(CustomerListing);
    } // setupUi

    void retranslateUi(QDialog *CustomerListing)
    {
        CustomerListing->setWindowTitle(QApplication::translate("CustomerListing", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CustomerListing", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; color:#ffffff;\">Customer List</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CustomerListing", "Admin Menu", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CustomerListing", "Key Customers Only", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CustomerListing", "Add Customer Maunally", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CustomerListing", "Delete Customer", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("CustomerListing", "Add Customer from File", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomerListing: public Ui_CustomerListing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLISTING_H
