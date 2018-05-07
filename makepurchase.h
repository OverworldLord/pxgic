#ifndef MAKEPURCHASE_H
#define MAKEPURCHASE_H

#include <QDialog>
#include "mainwindow.h"
#include "guaranteepolicy.h"
#include "databasemanager.h"

namespace Ui {
class MakePurchase;
}

class MakePurchase : public QDialog ///UI used that allows users to make purchases
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit MakePurchase(QWidget *parent = 0);
    ///Class Destructor
    ~MakePurchase(); ///Class Destructor

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MakePurchase *ui;
};

#endif // MAKEPURCHASE_H
