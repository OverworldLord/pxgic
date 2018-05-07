/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Password;
    QLineEdit *Username;
    QPushButton *LoginButton;
    QPushButton *pushButton;
    QLabel *label_2;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(1600, 901);
        QFont font;
        font.setPointSize(12);
        LoginWindow->setFont(font);
        LoginWindow->setCursor(QCursor(Qt::ArrowCursor));
        LoginWindow->setMouseTracking(false);
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1601, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Alien Encounters"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(550, 290, 231, 71));
        QFont font2;
        font2.setPointSize(11);
        font2.setUnderline(false);
        label_3->setFont(font2);
        label_3->setAutoFillBackground(false);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(560, 380, 221, 71));
        QFont font3;
        font3.setPointSize(11);
        label_4->setFont(font3);
        label_4->setAutoFillBackground(false);
        Password = new QLineEdit(centralWidget);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(810, 380, 681, 71));
        QFont font4;
        font4.setPointSize(36);
        Password->setFont(font4);
        Password->setEchoMode(QLineEdit::Password);
        Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Username = new QLineEdit(centralWidget);
        Username->setObjectName(QStringLiteral("Username"));
        Username->setGeometry(QRect(810, 290, 681, 71));
        Username->setFont(font4);
        LoginButton = new QPushButton(centralWidget);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(810, 460, 681, 71));
        QFont font5;
        font5.setPointSize(28);
        LoginButton->setFont(font5);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 790, 341, 61));
        pushButton->setFont(font5);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 1581, 861));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/icyber-background1.jpg")));
        label_2->setScaledContents(true);
        LoginWindow->setCentralWidget(centralWidget);
        label_2->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        Password->raise();
        LoginButton->raise();
        Username->raise();
        pushButton->raise();
        mainToolBar = new QToolBar(LoginWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(LoginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1600, 21));
        LoginWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(Username, Password);
        QWidget::setTabOrder(Password, LoginButton);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Login", nullptr));
        label->setText(QApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">iCyberSecurity Administrator Login</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Username:</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Password:</span></p></body></html>", nullptr));
        Password->setPlaceholderText(QApplication::translate("LoginWindow", "Enter password", nullptr));
        Username->setText(QString());
        Username->setPlaceholderText(QApplication::translate("LoginWindow", "Enter username", nullptr));
        LoginButton->setText(QApplication::translate("LoginWindow", "Log In", nullptr));
        pushButton->setText(QApplication::translate("LoginWindow", "Back", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
