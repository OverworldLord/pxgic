#ifndef MAKEPURCHASE_H
#define MAKEPURCHASE_H

#include <QDialog>
#include "mainwindow.h"
#include "guaranteepolicy.h"

namespace Ui {
class MakePurchase;
}

class MakePurchase : public QDialog
{
    Q_OBJECT

public:
    explicit MakePurchase(QWidget *parent = 0);
    ~MakePurchase();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MakePurchase *ui;
};

#endif // MAKEPURCHASE_H
