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

    void setupUi(QDialog *GuaranteePolicy)
    {
        if (GuaranteePolicy->objectName().isEmpty())
            GuaranteePolicy->setObjectName(QStringLiteral("GuaranteePolicy"));
        GuaranteePolicy->resize(400, 300);
        label = new QLabel(GuaranteePolicy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 391, 31));
        textBrowser = new QTextBrowser(GuaranteePolicy);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 381, 221));
        pushButton = new QPushButton(GuaranteePolicy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 75, 23));

        retranslateUi(GuaranteePolicy);

        QMetaObject::connectSlotsByName(GuaranteePolicy);
    } // setupUi

    void retranslateUi(QDialog *GuaranteePolicy)
    {
        GuaranteePolicy->setWindowTitle(QApplication::translate("GuaranteePolicy", "Dialog", nullptr));
        label->setText(QApplication::translate("GuaranteePolicy", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Guarantee Policy</span></p></body></html>", nullptr));
        textBrowser->setHtml(QApplication::translate("GuaranteePolicy", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">iCyberSecurity Incorporated guarantees quality in its provided services.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">iCyberSecurity Incorporated accomplishes this by providing a 30 day full service refund, as well as offering"
                        " investigation into cases of customer dissatisfaction that extend beyond the 30 day full service refund.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">To request a refund, or if you have additional questions, please contact our customer support team: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1-(949)-ICYTECSUP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1-(949)-429832787</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("GuaranteePolicy", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuaranteePolicy: public Ui_GuaranteePolicy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARANTEEPOLICY_H
