/********************************************************************************
** Form generated from reading UI file 'moreinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREINFORMATION_H
#define UI_MOREINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MoreInformation
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *MoreInformation)
    {
        if (MoreInformation->objectName().isEmpty())
            MoreInformation->setObjectName(QStringLiteral("MoreInformation"));
        MoreInformation->resize(400, 300);
        textBrowser = new QTextBrowser(MoreInformation);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 381, 141));
        textBrowser_2 = new QTextBrowser(MoreInformation);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 220, 381, 41));
        label = new QLabel(MoreInformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 200, 381, 20));
        label_2 = new QLabel(MoreInformation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 381, 20));
        label_3 = new QLabel(MoreInformation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 401, 21));
        pushButton = new QPushButton(MoreInformation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(294, 270, 101, 23));

        retranslateUi(MoreInformation);

        QMetaObject::connectSlotsByName(MoreInformation);
    } // setupUi

    void retranslateUi(QDialog *MoreInformation)
    {
        MoreInformation->setWindowTitle(QApplication::translate("MoreInformation", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MoreInformation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">    iCyberSecurity Inc. is the best online security service for several reasons. Not only are we the first company to use a top of the line neural network to detect threats, or the most awarded corporation within the United States, but we are dedicated to protecting our customers from even the most dangerous of online attacks, and are more than willing to give them high tech security tools necessary to prevent damage of any kind to their systems.</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("MoreInformation", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">We support a variety of environments, including Windows, Java-based devices, LINUX, Macintosh, and SAP-1.</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MoreInformation", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">What environments do you support?</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MoreInformation", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Why should I buy iCyberSecurity products?</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MoreInformation", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Additional Information</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MoreInformation", "Back to Main Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MoreInformation: public Ui_MoreInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREINFORMATION_H
