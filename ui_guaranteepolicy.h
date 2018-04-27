/********************************************************************************
** Form generated from reading UI file 'guaranteepolicy.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARANTEEPOLICY_H
#define UI_GUARANTEEPOLICY_H

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

class Ui_GuaranteePolicy
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *GuaranteePolicy)
    {
        if (GuaranteePolicy->objectName().isEmpty())
            GuaranteePolicy->setObjectName(QStringLiteral("GuaranteePolicy"));
        GuaranteePolicy->resize(1600, 900);
        label = new QLabel(GuaranteePolicy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 1601, 81));
        textBrowser = new QTextBrowser(GuaranteePolicy);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 140, 1561, 651));
        QPalette palette;
        QBrush brush(QColor(0, 0, 181, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 60));
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
        textBrowser->setPalette(palette);
        pushButton = new QPushButton(GuaranteePolicy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 820, 331, 61));
        QFont font;
        font.setPointSize(28);
        pushButton->setFont(font);
        label_2 = new QLabel(GuaranteePolicy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 1581, 881));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/icyber-background2.jpg")));
        label_2->raise();
        label->raise();
        textBrowser->raise();
        pushButton->raise();

        retranslateUi(GuaranteePolicy);

        QMetaObject::connectSlotsByName(GuaranteePolicy);
    } // setupUi

    void retranslateUi(QDialog *GuaranteePolicy)
    {
        GuaranteePolicy->setWindowTitle(QApplication::translate("GuaranteePolicy", "Dialog", nullptr));
        label->setText(QApplication::translate("GuaranteePolicy", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; color:#0000b5;\">Guarantee Policy</span></p></body></html>", nullptr));
        textBrowser->setHtml(QApplication::translate("GuaranteePolicy", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">iCyberSecurity Incorporated guarantees quality in its provided services.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:36pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">iCyberSecurity Incorporated accomplishes this by providing a 30 day full service refund, as well as offering"
                        " investigation into cases of customer dissatisfaction that extend beyond the 30 day full service refund.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:36pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">To request a refund, or if you have additional questions, please contact our customer support team: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">1-(949)-ICYTECSUP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">1-(949)-429832787</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:36pt;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("GuaranteePolicy", "Back", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GuaranteePolicy: public Ui_GuaranteePolicy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARANTEEPOLICY_H
