/********************************************************************************
** Form generated from reading UI file 'editcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCUSTOMER_H
#define UI_EDITCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_EditCustomer
{
public:
    QLabel *label_6;
    QLabel *label_5;
    QSlider *InterestSlider;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *stateLineEdit;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *pushButton;
    QLineEdit *zipLineEdit;
    QLineEdit *addressLineEdit;
    QCheckBox *keyCheckBox;
    QLabel *label_2;
    QLabel *label_10;
    QLineEdit *cityLineEdit;
    QLineEdit *nameLineEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *EditCustomer)
    {
        if (EditCustomer->objectName().isEmpty())
            EditCustomer->setObjectName(QStringLiteral("EditCustomer"));
        EditCustomer->resize(1600, 900);
        label_6 = new QLabel(EditCustomer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1030, 285, 91, 61));
        QFont font;
        font.setPointSize(8);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(EditCustomer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 565, 121, 71));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        InterestSlider = new QSlider(EditCustomer);
        InterestSlider->setObjectName(QStringLiteral("InterestSlider"));
        InterestSlider->setGeometry(QRect(1140, 295, 281, 41));
        InterestSlider->setMaximum(2);
        InterestSlider->setSliderPosition(1);
        InterestSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(EditCustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 385, 131, 61));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(EditCustomer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 475, 111, 61));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(EditCustomer);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1130, 215, 301, 61));
        QFont font2;
        font2.setPointSize(36);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);
        stateLineEdit = new QLineEdit(EditCustomer);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setGeometry(QRect(200, 475, 711, 61));
        stateLineEdit->setFont(font2);
        label = new QLabel(EditCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 215, 141, 61));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(EditCustomer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 1581, 71));
        QFont font3;
        font3.setPointSize(14);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(EditCustomer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1430, 275, 111, 81));
        label_8->setFont(font);
        pushButton = new QPushButton(EditCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1140, 565, 281, 71));
        QFont font4;
        font4.setPointSize(28);
        pushButton->setFont(font4);
        zipLineEdit = new QLineEdit(EditCustomer);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setGeometry(QRect(200, 570, 711, 61));
        zipLineEdit->setFont(font2);
        addressLineEdit = new QLineEdit(EditCustomer);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(200, 300, 711, 61));
        addressLineEdit->setFont(font2);
        keyCheckBox = new QCheckBox(EditCustomer);
        keyCheckBox->setObjectName(QStringLiteral("keyCheckBox"));
        keyCheckBox->setGeometry(QRect(1100, 475, 361, 71));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        keyCheckBox->setPalette(palette);
        QFont font5;
        font5.setPointSize(36);
        font5.setKerning(true);
        keyCheckBox->setFont(font5);
        keyCheckBox->setFocusPolicy(Qt::StrongFocus);
        keyCheckBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        keyCheckBox->setAcceptDrops(false);
        keyCheckBox->setIconSize(QSize(32, 32));
        keyCheckBox->setChecked(false);
        label_2 = new QLabel(EditCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 300, 181, 61));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(EditCustomer);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 1601, 901));
        label_10->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/mt-fuji-is-a-wi-fi-hotspot1.jpeg")));
        label_10->setScaledContents(true);
        cityLineEdit = new QLineEdit(EditCustomer);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(200, 385, 711, 61));
        cityLineEdit->setFont(font2);
        nameLineEdit = new QLineEdit(EditCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(200, 215, 711, 61));
        nameLineEdit->setFont(font2);
        pushButton_2 = new QPushButton(EditCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 820, 341, 61));
        pushButton_2->setFont(font4);
        label_10->raise();
        label_6->raise();
        label_5->raise();
        InterestSlider->raise();
        label_3->raise();
        label_4->raise();
        label_7->raise();
        stateLineEdit->raise();
        label->raise();
        label_9->raise();
        label_8->raise();
        pushButton->raise();
        zipLineEdit->raise();
        addressLineEdit->raise();
        keyCheckBox->raise();
        label_2->raise();
        cityLineEdit->raise();
        nameLineEdit->raise();
        pushButton_2->raise();

        retranslateUi(EditCustomer);

        QMetaObject::connectSlotsByName(EditCustomer);
    } // setupUi

    void retranslateUi(QDialog *EditCustomer)
    {
        EditCustomer->setWindowTitle(QApplication::translate("EditCustomer", "Dialog", nullptr));
        label_6->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Low</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Zip</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">City</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">State</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" color:#ffffff;\">Interest Level</span></p></body></html>", nullptr));
        stateLineEdit->setPlaceholderText(QApplication::translate("EditCustomer", "Insert Company State", nullptr));
        label->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Name</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Update Customer</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">High</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("EditCustomer", "Submit", nullptr));
        zipLineEdit->setPlaceholderText(QApplication::translate("EditCustomer", "Insert Company Zip Code", nullptr));
        addressLineEdit->setPlaceholderText(QApplication::translate("EditCustomer", "Insert Company Address", nullptr));
        keyCheckBox->setText(QApplication::translate("EditCustomer", "Key Customer", nullptr));
#ifndef QT_NO_SHORTCUT
        keyCheckBox->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("EditCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Address</span></p></body></html>", nullptr));
        label_10->setText(QString());
        cityLineEdit->setPlaceholderText(QApplication::translate("EditCustomer", "Insert Company City", nullptr));
        nameLineEdit->setPlaceholderText(QApplication::translate("EditCustomer", "Insert Company Name", nullptr));
        pushButton_2->setText(QApplication::translate("EditCustomer", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditCustomer: public Ui_EditCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCUSTOMER_H
