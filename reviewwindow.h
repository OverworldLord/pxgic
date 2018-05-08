#ifndef REVIEWWINDOW_H
#define REVIEWWINDOW_H

#include "makepurchase.h"
#include "mainwindow.h"
#include "guaranteepolicy.h"
#include "databasemanager.h"
#include <QDialog>
#include <QFile>

namespace Ui {
class reviewWindow;
}

class reviewWindow : public QDialog
{
    Q_OBJECT

public:
    explicit reviewWindow(QWidget *parent = 0);
    ~reviewWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void saveToFile(QString newReview);
private:
    Ui::reviewWindow *ui;

};

#endif // REVIEWWINDOW_H
