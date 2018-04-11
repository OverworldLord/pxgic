/********************************************************************************
** Form generated from reading UI file 'makepurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MakePurchase
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *MakePurchase)
    {
        if (MakePurchase->objectName().isEmpty())
            MakePurchase->setObjectName(QStringLiteral("MakePurchase"));
        MakePurchase->resize(400, 300);
        pushButton = new QPushButton(MakePurchase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 75, 23));

        retranslateUi(MakePurchase);

        QMetaObject::connectSlotsByName(MakePurchase);
    } // setupUi

    void retranslateUi(QDialog *MakePurchase)
    {
        MakePurchase->setWindowTitle(QApplication::translate("MakePurchase", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MakePurchase", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MakePurchase: public Ui_MakePurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEPURCHASE_H
