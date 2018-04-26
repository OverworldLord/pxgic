/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

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

class Ui_AddCustomer
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *nameLineEdit;
    QLineEdit *addressLineEdit;
    QLineEdit *cityLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *stateLineEdit;
    QLineEdit *zipLineEdit;
    QSlider *InterestSlider;
    QCheckBox *keyCheckBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *AddCustomer)
    {
        if (AddCustomer->objectName().isEmpty())
            AddCustomer->setObjectName(QStringLiteral("AddCustomer"));
        AddCustomer->resize(1600, 900);
        pushButton = new QPushButton(AddCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1140, 565, 281, 71));
        QFont font;
        font.setPointSize(28);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(AddCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 820, 341, 61));
        pushButton_2->setFont(font);
        nameLineEdit = new QLineEdit(AddCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(200, 215, 711, 61));
        QFont font1;
        font1.setPointSize(36);
        nameLineEdit->setFont(font1);
        addressLineEdit = new QLineEdit(AddCustomer);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(200, 300, 711, 61));
        addressLineEdit->setFont(font1);
        cityLineEdit = new QLineEdit(AddCustomer);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(200, 385, 711, 61));
        cityLineEdit->setFont(font1);
        label = new QLabel(AddCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 215, 141, 61));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(AddCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 300, 181, 61));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(AddCustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 385, 131, 61));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(AddCustomer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 475, 111, 61));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(AddCustomer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 565, 121, 71));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stateLineEdit = new QLineEdit(AddCustomer);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setGeometry(QRect(200, 475, 711, 61));
        stateLineEdit->setFont(font1);
        zipLineEdit = new QLineEdit(AddCustomer);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setGeometry(QRect(200, 570, 711, 61));
        zipLineEdit->setFont(font1);
        InterestSlider = new QSlider(AddCustomer);
        InterestSlider->setObjectName(QStringLiteral("InterestSlider"));
        InterestSlider->setGeometry(QRect(1140, 295, 281, 41));
        InterestSlider->setMaximum(2);
        InterestSlider->setSliderPosition(1);
        InterestSlider->setOrientation(Qt::Horizontal);
        keyCheckBox = new QCheckBox(AddCustomer);
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
        QFont font3;
        font3.setPointSize(36);
        font3.setKerning(true);
        keyCheckBox->setFont(font3);
        keyCheckBox->setFocusPolicy(Qt::StrongFocus);
        keyCheckBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        keyCheckBox->setAcceptDrops(false);
        keyCheckBox->setIconSize(QSize(32, 32));
        keyCheckBox->setChecked(false);
        label_6 = new QLabel(AddCustomer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1030, 285, 91, 61));
        QFont font4;
        font4.setPointSize(8);
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(AddCustomer);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1130, 215, 301, 61));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(AddCustomer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1430, 275, 111, 81));
        label_8->setFont(font4);
        label_9 = new QLabel(AddCustomer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 1581, 71));
        QFont font5;
        font5.setPointSize(14);
        label_9->setFont(font5);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(AddCustomer);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 1581, 881));
        label_10->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/niagara-falls.jpg")));
        label_10->setScaledContents(true);
        label_10->raise();
        pushButton->raise();
        pushButton_2->raise();
        nameLineEdit->raise();
        addressLineEdit->raise();
        cityLineEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        stateLineEdit->raise();
        zipLineEdit->raise();
        InterestSlider->raise();
        keyCheckBox->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();

        retranslateUi(AddCustomer);

        QMetaObject::connectSlotsByName(AddCustomer);
    } // setupUi

    void retranslateUi(QDialog *AddCustomer)
    {
        AddCustomer->setWindowTitle(QApplication::translate("AddCustomer", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("AddCustomer", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("AddCustomer", "Back", nullptr));
        nameLineEdit->setPlaceholderText(QApplication::translate("AddCustomer", "Insert Company Name", nullptr));
        addressLineEdit->setPlaceholderText(QApplication::translate("AddCustomer", "Insert Company Address", nullptr));
        cityLineEdit->setPlaceholderText(QApplication::translate("AddCustomer", "Insert Company City", nullptr));
        label->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Name</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Address</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">City</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">State</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Zip</span></p></body></html>", nullptr));
        stateLineEdit->setPlaceholderText(QApplication::translate("AddCustomer", "Insert Company State", nullptr));
        zipLineEdit->setPlaceholderText(QApplication::translate("AddCustomer", "Insert Company Zip Code", nullptr));
        keyCheckBox->setText(QApplication::translate("AddCustomer", "Key Customer", nullptr));
#ifndef QT_NO_SHORTCUT
        keyCheckBox->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Low</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" color:#ffffff;\">Interest Level</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">High</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("AddCustomer", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Add Customer</span></p></body></html>", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddCustomer: public Ui_AddCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
