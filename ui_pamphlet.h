/********************************************************************************
** Form generated from reading UI file 'pamphlet.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label_2;

    void setupUi(QDialog *pamphlet)
    {
        if (pamphlet->objectName().isEmpty())
            pamphlet->setObjectName(QStringLiteral("pamphlet"));
        pamphlet->resize(1600, 900);
        label = new QLabel(pamphlet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 10, 1581, 91));
        textBrowser = new QTextBrowser(pamphlet);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 130, 1581, 511));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 150));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette);
        lineEdit = new QLineEdit(pamphlet);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 700, 1481, 71));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(28);
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButton = new QCommandLinkButton(pamphlet);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(1510, 700, 81, 71));
        commandLinkButton->setIconSize(QSize(20, 20));
        pushButton = new QPushButton(pamphlet);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 820, 371, 71));
        QFont font1;
        font1.setPointSize(28);
        pushButton->setFont(font1);
        label_2 = new QLabel(pamphlet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-4, 3, 1611, 901));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/landscape-1426609762-152887064.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        label->raise();
        textBrowser->raise();
        lineEdit->raise();
        commandLinkButton->raise();
        pushButton->raise();

        retranslateUi(pamphlet);

        QMetaObject::connectSlotsByName(pamphlet);
    } // setupUi

    void retranslateUi(QDialog *pamphlet)
    {
        pamphlet->setWindowTitle(QApplication::translate("pamphlet", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("pamphlet", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; color:#ffffff;\">Request a Pamphlet</span></p></body></html>", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("pamphlet", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">In order to request a copy of our online pamphlet, please enter your customer name along with your email address. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">You will recieve confirmation (via your company's public email address) that your pamphlet has been sent.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px; font-size:22pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">Once sent, your pamphlet should arrive within 7-10 business weeks. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:22pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">Only registered customers may make a request. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">To register as a customer, please send an email to iCyberSecurity@techsupport.org</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:22pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">Fake companies will not be tolerated. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">You will be fined and prosecuted for obstruction of justice.</span></p></body></html>", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("pamphlet", "Enter your Company Name", Q_NULLPTR));
        commandLinkButton->setText(QString());
        pushButton->setText(QApplication::translate("pamphlet", "Back", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pamphlet: public Ui_pamphlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMPHLET_H
