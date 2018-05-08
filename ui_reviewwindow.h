/********************************************************************************
** Form generated from reading UI file 'reviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEWWINDOW_H
#define UI_REVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_reviewWindow
{
public:
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *reviewWindow)
    {
        if (reviewWindow->objectName().isEmpty())
            reviewWindow->setObjectName(QStringLiteral("reviewWindow"));
        reviewWindow->resize(1583, 881);
        label_9 = new QLabel(reviewWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 40, 1571, 71));
        QFont font;
        font.setPointSize(14);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(reviewWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1581, 881));
        label_2->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/themoon.jpg")));
        label_2->setScaledContents(true);
        label_10 = new QLabel(reviewWindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 170, 267, 77));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(reviewWindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 510, 331, 111));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(reviewWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 800, 181, 61));
        QFont font1;
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(reviewWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1380, 800, 181, 61));
        pushButton_2->setFont(font1);
        lineEdit = new QLineEdit(reviewWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(350, 540, 971, 71));
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(reviewWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(350, 180, 971, 311));
        lineEdit_2->setFont(font);
        lineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();

        retranslateUi(reviewWindow);

        QMetaObject::connectSlotsByName(reviewWindow);
    } // setupUi

    void retranslateUi(QDialog *reviewWindow)
    {
        reviewWindow->setWindowTitle(QApplication::translate("reviewWindow", "Dialog", nullptr));
        label_9->setText(QApplication::translate("reviewWindow", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Customer Testomonial</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_10->setText(QApplication::translate("reviewWindow", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Message:</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("reviewWindow", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Company:</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("reviewWindow", "Back", nullptr));
        pushButton_2->setText(QApplication::translate("reviewWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reviewWindow: public Ui_reviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEWWINDOW_H
