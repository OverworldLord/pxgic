/********************************************************************************
** Form generated from reading UI file 'saleslisting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label_2;

    void setupUi(QDialog *salesListing)
    {
        if (salesListing->objectName().isEmpty())
            salesListing->setObjectName(QStringLiteral("salesListing"));
        salesListing->resize(1600, 900);
        tableView = new QTableView(salesListing);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 90, 1561, 721));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 70));
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
        QFont font;
        font.setPointSize(18);
        tableView->setFont(font);
        label = new QLabel(salesListing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1581, 81));
        pushButton = new QPushButton(salesListing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 820, 341, 61));
        QFont font1;
        font1.setPointSize(28);
        pushButton->setFont(font1);
        label_2 = new QLabel(salesListing);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 2, 1601, 901));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/redneb.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        tableView->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(salesListing);

        QMetaObject::connectSlotsByName(salesListing);
    } // setupUi

    void retranslateUi(QDialog *salesListing)
    {
        salesListing->setWindowTitle(QApplication::translate("salesListing", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("salesListing", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; color:#ffffff;\">Sales List</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("salesListing", "Back", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class salesListing: public Ui_salesListing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESLISTING_H
