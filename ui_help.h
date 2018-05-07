/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QStringLiteral("help"));
        help->resize(391, 308);
        pushButton = new QPushButton(help);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 270, 121, 23));
        textBrowser = new QTextBrowser(help);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(4, 40, 381, 221));
        label = new QLabel(help);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 391, 31));

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QApplication::translate("help", "Form", nullptr));
        pushButton->setText(QApplication::translate("help", "Back to Main Menu", nullptr));
        textBrowser->setHtml(QApplication::translate("help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Press request pamplet if you would like to have one of our digital pamplet.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">If you are admin, press select login administrator.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">If you have no idea why you are on this software, please exit.</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">iCyberSecurity Inc. Help Menu</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
