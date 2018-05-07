/********************************************************************************
** Form generated from reading UI file 'editinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINFO_H
#define UI_EDITINFO_H

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

class Ui_editInfo
{
public:
    QSlider *InterestSlider;
    QLineEdit *nameLineEdit;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *zipLineEdit;
    QCheckBox *keyCheckBox;
    QLabel *label;
    QLabel *label_9;
    QLineEdit *cityLineEdit;
    QLabel *label_10;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_8;
    QLineEdit *addressLineEdit;
    QLineEdit *stateLineEdit;

    void setupUi(QDialog *editInfo)
    {
        if (editInfo->objectName().isEmpty())
            editInfo->setObjectName(QStringLiteral("editInfo"));
        editInfo->resize(1593, 896);
        InterestSlider = new QSlider(editInfo);
        InterestSlider->setObjectName(QStringLiteral("InterestSlider"));
        InterestSlider->setGeometry(QRect(1140, 295, 281, 41));
        InterestSlider->setMaximum(2);
        InterestSlider->setSliderPosition(1);
        InterestSlider->setOrientation(Qt::Horizontal);
        nameLineEdit = new QLineEdit(editInfo);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(200, 215, 711, 61));
        QFont font;
        font.setPointSize(36);
        nameLineEdit->setFont(font);
        label_5 = new QLabel(editInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 565, 121, 71));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(editInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 475, 111, 61));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_2 = new QPushButton(editInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 820, 341, 61));
        QFont font2;
        font2.setPointSize(28);
        pushButton_2->setFont(font2);
        label_7 = new QLabel(editInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1130, 215, 301, 61));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(editInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 385, 131, 61));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(editInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1030, 285, 91, 61));
        QFont font3;
        font3.setPointSize(8);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        zipLineEdit = new QLineEdit(editInfo);
        zipLineEdit->setObjectName(QStringLiteral("zipLineEdit"));
        zipLineEdit->setGeometry(QRect(200, 570, 711, 61));
        zipLineEdit->setFont(font);
        keyCheckBox = new QCheckBox(editInfo);
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
        QFont font4;
        font4.setPointSize(36);
        font4.setKerning(true);
        keyCheckBox->setFont(font4);
        keyCheckBox->setFocusPolicy(Qt::StrongFocus);
        keyCheckBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        keyCheckBox->setAcceptDrops(false);
        keyCheckBox->setIconSize(QSize(32, 32));
        keyCheckBox->setChecked(false);
        label = new QLabel(editInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 215, 141, 61));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(editInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 20, 1581, 71));
        QFont font5;
        font5.setPointSize(14);
        label_9->setFont(font5);
        label_9->setAlignment(Qt::AlignCenter);
        cityLineEdit = new QLineEdit(editInfo);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(200, 385, 711, 61));
        cityLineEdit->setFont(font);
        label_10 = new QLabel(editInfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 1581, 881));
        label_10->setPixmap(QPixmap(QString::fromUtf8("CUSTOM IMAGES/niagara-falls.jpg")));
        label_10->setScaledContents(true);
        label_2 = new QLabel(editInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 300, 181, 61));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(editInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1140, 565, 281, 71));
        pushButton->setFont(font2);
        label_8 = new QLabel(editInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1430, 275, 111, 81));
        label_8->setFont(font3);
        addressLineEdit = new QLineEdit(editInfo);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(200, 300, 711, 61));
        addressLineEdit->setFont(font);
        stateLineEdit = new QLineEdit(editInfo);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setGeometry(QRect(200, 475, 711, 61));
        stateLineEdit->setFont(font);
        label_10->raise();
        InterestSlider->raise();
        nameLineEdit->raise();
        label_5->raise();
        label_4->raise();
        pushButton_2->raise();
        label_7->raise();
        label_3->raise();
        label_6->raise();
        zipLineEdit->raise();
        keyCheckBox->raise();
        label->raise();
        label_9->raise();
        cityLineEdit->raise();
        label_2->raise();
        pushButton->raise();
        label_8->raise();
        addressLineEdit->raise();
        stateLineEdit->raise();

        retranslateUi(editInfo);

        QMetaObject::connectSlotsByName(editInfo);
    } // setupUi

    void retranslateUi(QDialog *editInfo)
    {
        editInfo->setWindowTitle(QApplication::translate("editInfo", "Dialog", nullptr));
        nameLineEdit->setPlaceholderText(QApplication::translate("editInfo", "Insert Company Name", nullptr));
        label_5->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Zip</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">State</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("editInfo", "Back to List", nullptr));
        label_7->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" color:#ffffff;\">Interest Level</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">City</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Low</span></p></body></html>", nullptr));
        zipLineEdit->setPlaceholderText(QApplication::translate("editInfo", "Insert Company Zip Code", nullptr));
        keyCheckBox->setText(QApplication::translate("editInfo", "Key Customer", nullptr));
#ifndef QT_NO_SHORTCUT
        keyCheckBox->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Name</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:48pt; color:#ffffff;\">Eddit Customer</span></p></body></html>", nullptr));
        cityLineEdit->setPlaceholderText(QApplication::translate("editInfo", "Insert Company City", nullptr));
        label_10->setText(QString());
        label_2->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">Address</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("editInfo", "Save Changes", nullptr));
        label_8->setText(QApplication::translate("editInfo", "<html><head/><body><p><span style=\" font-size:36pt; color:#ffffff;\">High</span></p></body></html>", nullptr));
        addressLineEdit->setPlaceholderText(QApplication::translate("editInfo", "Insert Company Address", nullptr));
        stateLineEdit->setPlaceholderText(QApplication::translate("editInfo", "Insert Company State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editInfo: public Ui_editInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINFO_H
