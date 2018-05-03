/********************************************************************************
** Form generated from reading UI file 'makepurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEPURCHASE_H
#define UI_MAKEPURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MakePurchase
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_4;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *MakePurchase)
    {
        if (MakePurchase->objectName().isEmpty())
            MakePurchase->setObjectName(QStringLiteral("MakePurchase"));
        MakePurchase->resize(1600, 900);
        pushButton = new QPushButton(MakePurchase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 830, 321, 61));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(MakePurchase);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 830, 321, 61));
        pushButton_2->setFont(font);
        label = new QLabel(MakePurchase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1080, 470, 371, 41));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        textBrowser = new QTextBrowser(MakePurchase);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 110, 1581, 341));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 150));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette);
        spinBox = new QSpinBox(MakePurchase);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(1509, 520, 81, 51));
        QFont font2;
        font2.setPointSize(22);
        spinBox->setFont(font2);
        spinBox_2 = new QSpinBox(MakePurchase);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(1510, 580, 81, 51));
        spinBox_2->setFont(font2);
        spinBox_3 = new QSpinBox(MakePurchase);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(1510, 640, 81, 51));
        spinBox_3->setFont(font2);
        lineEdit = new QLineEdit(MakePurchase);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(940, 770, 651, 41));
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit->setAutoFillBackground(false);
        textBrowser_2 = new QTextBrowser(MakePurchase);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 520, 911, 291));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser_2->setPalette(palette1);
        label_2 = new QLabel(MakePurchase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 470, 561, 41));
        label_3 = new QLabel(MakePurchase);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 1581, 91));
        spinBox_4 = new QSpinBox(MakePurchase);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(1510, 700, 81, 51));
        spinBox_4->setFont(font2);
        pushButton_3 = new QPushButton(MakePurchase);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1270, 830, 321, 61));
        pushButton_3->setFont(font);
        label_4 = new QLabel(MakePurchase);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(939, 520, 531, 51));
        label_4->setFont(font2);
        label_5 = new QLabel(MakePurchase);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(939, 580, 531, 51));
        label_5->setFont(font2);
        label_6 = new QLabel(MakePurchase);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(939, 640, 531, 51));
        label_6->setFont(font2);
        label_7 = new QLabel(MakePurchase);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(939, 700, 531, 51));
        label_7->setFont(font2);
        label_8 = new QLabel(MakePurchase);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 0, 1601, 901));
        label_8->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/icescape.jpg")));
        label_8->setScaledContents(true);
        label_8->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        textBrowser->raise();
        spinBox->raise();
        spinBox_2->raise();
        spinBox_3->raise();
        lineEdit->raise();
        textBrowser_2->raise();
        label_2->raise();
        label_3->raise();
        spinBox_4->raise();
        pushButton_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();

        retranslateUi(MakePurchase);

        QMetaObject::connectSlotsByName(MakePurchase);
    } // setupUi

    void retranslateUi(QDialog *MakePurchase)
    {
        MakePurchase->setWindowTitle(QApplication::translate("MakePurchase", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("MakePurchase", "Back", nullptr));
        pushButton_2->setText(QApplication::translate("MakePurchase", "Guarantee Policy", nullptr));
        label->setText(QApplication::translate("MakePurchase", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">Make A Purchase</span></p></body></html>", nullptr));
        textBrowser->setHtml(QApplication::translate("MakePurchase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; text-decoration: underline; color:#9f6c05;\">Cardboard Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#9f6c05;\">$4</span><span style=\" font-size:18pt; color:#9f6c05; vertical-align:super;\">99</span><span style=\" font-size:18pt; color:#9f6c05;\"> per week</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><sp"
                        "an style=\" font-size:18pt; color:#000000;\">If you are confident in your own company's ability to stop a cyberattack, then you are mistaken. Nevertheless, we have a Cardboard Plan just for you. Cheap, Minimal, and likely Ineffective tools will be provided that will probably be able to stop a 12 year old from hacking into your company. Probably.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; text-decoration: underline; color:#cfcf00;\">Gold Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#cfcf00;\">$19</span><span style=\" font-size:18pt; color:#cfcf00; vertical-align:super;\""
                        ">99</span><span style=\" font-size:18pt; color:#cfcf00;\"> per week</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#000000;\">If your company is more concerned about the very real and potentially critical attacks that will very likely be made upon your systems, you'll probably want to take it up a notch. More expensive means more effective, as everyone knows, and the tools we provide here are definetly both. This'll stop even the smartest 12 year old, and is effective against any hackers out there.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; "
                        "text-decoration: underline; color:#00aaff;\">Platinum VIP Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#00aaff;\">$9999</span><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#00aaff; vertical-align:super;\">99 </span><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#00aaff;\">per week</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#000000;\">So let's get real. You don't really even care about security at this point, you've just got a ton of money that you're more than willing to give to us. Well, we'll give you both of the above plans plus a lifetime membership! Just keep paying weekly! You'll recieve a special edition T-Shirt, custom made to have your name on it! It says,"
                        " 'I am rich' and iCyberSecurity is written on the back. Show all your friends how rich you are!</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MakePurchase", "Enter Your Company Name", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MakePurchase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Had an intern make your system, and then realized just how easily broken into their code was? Don't want to waste money on actually hiring someone to fix it? We'll do it for you! That's right, for the low low price of only $400</span><span style=\" font-size:18pt; vertical-align:super;\">00</span><span style=\" font-size:18pt;\">, we'll slightly optimise the code and call it brand new! No more losing sleep worrying about people hacking into your system, because you don't know how many bugs we introduce! </span></p>\n"
"<p"
                        " style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">But that's not all! This plan comes with a one coupon for iCyberSecurity Cardboard Plan! Just order within .10 milliseconds, and we'll throw it in for only 4</span><span style=\" font-size:18pt; vertical-align:super;\">99</span><span style=\" font-size:18pt;\">!</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MakePurchase", "<html><head/><body><p><span style=\" font-size:28pt;\">Maintainance Plan - $400</span><span style=\" font-size:28pt; vertical-align:super;\">00</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MakePurchase", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">Service Options</span></p></body></html>", nullptr));
        pushButton_3->setText(QApplication::translate("MakePurchase", "Submit Order", nullptr));
        label_4->setText(QApplication::translate("MakePurchase", "Cardboard", nullptr));
        label_5->setText(QApplication::translate("MakePurchase", "Gold", nullptr));
        label_6->setText(QApplication::translate("MakePurchase", "Platinum VIP", nullptr));
        label_7->setText(QApplication::translate("MakePurchase", "Maintainance Plan", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MakePurchase: public Ui_MakePurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEPURCHASE_H
