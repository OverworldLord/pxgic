#ifndef PAMPHLET_H
#define PAMPHLET_H

#include <QDialog>
#include "databasemanager.h"
#include "mainwindow.h"

namespace Ui {
class pamphlet;
}

class pamphlet : public QDialog
{
    Q_OBJECT

public:
    explicit pamphlet(QWidget *parent = 0);
    ~pamphlet();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::pamphlet *ui;
};

#endif // PAMPHLET_H
