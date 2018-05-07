/********************************************************************************
** Form generated from reading UI file 'editcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCUSTOMER_H
#define UI_EDITCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_editCustomer
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QTableView *tableView;
    QLineEdit *nameLineEdit;
    QLabel *label_9;
    QLabel *label_2;

    void setupUi(QDialog *editCustomer)
    {
        if (editCustomer->objectName().isEmpty())
            editCustomer->setObjectName(QStringLiteral("editCustomer"));
        editCustomer->resize(1349, 821);
        pushButton_2 = new QPushButton(editCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1130, 80, 181, 51));
        QFont font;
        font.setPointSize(36);
        pushButton_2->setFont(font);
        pushButton = new QPushButton(editCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 750, 341, 61));
        QFont font1;
        font1.setPointSize(28);
        pushButton->setFont(font1);
        label = new QLabel(editCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 441, 61));
        tableView = new QTableView(editCustomer);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 140, 1291, 591));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMinimumSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 50));
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
        nameLineEdit = new QLineEdit(editCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(410, 80, 711, 51));
        nameLineEdit->setFont(font);
        label_9 = new QLabel(editCustomer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 1331, 71));
        QFont font3;
        font3.setPointSize(14);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(editCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, -10, 1581, 881));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/space.jpg")));
        label_2->raise();
        pushButton_2->raise();
        pushButton->raise();
        label->raise();
        tableView->raise();
        nameLineEdit->raise();
        label_9->raise();

        retranslateUi(editCustomer);

        QMetaObject::connectSlotsByName(editCustomer);
    } // setupUi

    void retranslateUi(QDialog *editCustomer)
    {
        editCustomer->setWindowTitle(QApplication::translate("editCustomer", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("editCustomer", "Edit", nullptr));
        pushButton->setText(QApplication::translate("editCustomer", "Back", nullptr));
        label->setText(QApplication::translate("editCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Customer To Edit:</span></p></body></html>", nullptr));
        nameLineEdit->setPlaceholderText(QApplication::translate("editCustomer", "Insert Customer Name", nullptr));
        label_9->setText(QApplication::translate("editCustomer", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Edit Customer</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editCustomer: public Ui_editCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCUSTOMER_H
