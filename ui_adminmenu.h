/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label_2;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName(QStringLiteral("AdminMenu"));
        AdminMenu->resize(1600, 900);
        label = new QLabel(AdminMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 1581, 91));
        pushButton = new QPushButton(AdminMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 820, 371, 71));
        QFont font;
        font.setPointSize(28);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(AdminMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 320, 371, 71));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(AdminMenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(610, 440, 371, 71));
        pushButton_3->setFont(font);
        label_2 = new QLabel(AdminMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1601, 901));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/new-york-city-desktop-wallpaper-hd.jpg")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        label_2->setOpenExternalLinks(false);
        label_2->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        retranslateUi(AdminMenu);

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QApplication::translate("AdminMenu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AdminMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; color:#ffffff;\">Admin Menu</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdminMenu", "Logout", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminMenu", "Customers", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminMenu", "Sales", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
