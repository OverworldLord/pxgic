/********************************************************************************
** Form generated from reading UI file 'pamphlet.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAMPHLET_H
#define UI_PAMPHLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_pamphlet
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QCommandLinkButton *commandLinkButton;
    QPushButton *pushButton;

    void setupUi(QDialog *pamphlet)
    {
        if (pamphlet->objectName().isEmpty())
            pamphlet->setObjectName(QStringLiteral("pamphlet"));
        pamphlet->resize(481, 298);
        label = new QLabel(pamphlet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 10, 391, 31));
        textBrowser = new QTextBrowser(pamphlet);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 461, 201));
        lineEdit = new QLineEdit(pamphlet);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 250, 301, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(14);
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButton = new QCommandLinkButton(pamphlet);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(440, 250, 31, 41));
        pushButton = new QPushButton(pamphlet);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);

        retranslateUi(pamphlet);

        QMetaObject::connectSlotsByName(pamphlet);
    } // setupUi

    void retranslateUi(QDialog *pamphlet)
    {
        pamphlet->setWindowTitle(QApplication::translate("pamphlet", "Dialog", nullptr));
        label->setText(QApplication::translate("pamphlet", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Request a Pamphlet</span></p></body></html>", nullptr));
        textBrowser->setHtml(QApplication::translate("pamphlet", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">In order to request a copy of our online pamphlet, please enter your customer name along with your email address. You will recieve confirmation (via your company's public email address) that your pamphlet has been sent. Once sent, your pamphlet should arrive within 7-10 business weeks. Only registered customers may make a request. To register as a customer, please send an email to iCyberSecurity@techsupport.org</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Fake companies will not be tolerated. You will be fined and prosecuted for obstruction of justice.</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("pamphlet", "Enter your Company Name", nullptr));
        commandLinkButton->setText(QString());
        pushButton->setText(QApplication::translate("pamphlet", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pamphlet: public Ui_pamphlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMPHLET_H
