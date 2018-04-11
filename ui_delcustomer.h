/********************************************************************************
** Form generated from reading UI file 'delcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELCUSTOMER_H
#define UI_DELCUSTOMER_H

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

class Ui_DelCustomer
{
public:
    QPushButton *pushButton;
    QLabel *label_9;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *nameLineEdit;

    void setupUi(QDialog *DelCustomer)
    {
        if (DelCustomer->objectName().isEmpty())
            DelCustomer->setObjectName(QStringLiteral("DelCustomer"));
        DelCustomer->resize(400, 300);
        pushButton = new QPushButton(DelCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 75, 23));
        label_9 = new QLabel(DelCustomer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 20, 141, 20));
        QFont font;
        font.setPointSize(14);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(DelCustomer);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 70, 381, 192));
        pushButton_2 = new QPushButton(DelCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 40, 101, 21));
        label = new QLabel(DelCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 81, 16));
        nameLineEdit = new QLineEdit(DelCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(120, 40, 161, 20));
        QWidget::setTabOrder(pushButton_2, pushButton);
        QWidget::setTabOrder(pushButton, tableView);
        QWidget::setTabOrder(tableView, nameLineEdit);

        retranslateUi(DelCustomer);

        QMetaObject::connectSlotsByName(DelCustomer);
    } // setupUi

    void retranslateUi(QDialog *DelCustomer)
    {
        DelCustomer->setWindowTitle(QApplication::translate("DelCustomer", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DelCustomer", "Back", Q_NULLPTR));
        label_9->setText(QApplication::translate("DelCustomer", "Delete Customer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DelCustomer", "Remove Customer", Q_NULLPTR));
        label->setText(QApplication::translate("DelCustomer", "Customer Name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DelCustomer: public Ui_DelCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELCUSTOMER_H
