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
    QLabel *label_2;

    void setupUi(QDialog *DelCustomer)
    {
        if (DelCustomer->objectName().isEmpty())
            DelCustomer->setObjectName(QStringLiteral("DelCustomer"));
        DelCustomer->resize(1600, 900);
        pushButton = new QPushButton(DelCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 822, 341, 61));
        QFont font;
        font.setPointSize(28);
        pushButton->setFont(font);
        label_9 = new QLabel(DelCustomer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 1581, 71));
        QFont font1;
        font1.setPointSize(14);
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(DelCustomer);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 148, 1561, 671));
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
        pushButton_2 = new QPushButton(DelCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1170, 90, 411, 51));
        QFont font3;
        font3.setPointSize(36);
        pushButton_2->setFont(font3);
        label = new QLabel(DelCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 441, 61));
        nameLineEdit = new QLineEdit(DelCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(470, 90, 691, 51));
        nameLineEdit->setFont(font3);
        label_2 = new QLabel(DelCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1601, 901));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/space.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        pushButton->raise();
        label_9->raise();
        tableView->raise();
        pushButton_2->raise();
        label->raise();
        nameLineEdit->raise();
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
        label_9->setText(QApplication::translate("DelCustomer", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Delete Customer</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DelCustomer", "Remove Customer", Q_NULLPTR));
        label->setText(QApplication::translate("DelCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Customer To Delete:</span></p></body></html>", Q_NULLPTR));
        nameLineEdit->setPlaceholderText(QApplication::translate("DelCustomer", "Insert Customer Name", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DelCustomer: public Ui_DelCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELCUSTOMER_H
