#ifndef PAMPHLET_H
#define PAMPHLET_H

#include <QDialog>
#include "databasemanager.h"
#include "mainwindow.h"

namespace Ui {
class pamphlet;
}

class pamphlet : public QDialog ///Used in the UI to request a pamphlet
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit pamphlet(QWidget *parent = 0);
    ///Class Destructor
    ~pamphlet(); ///Class Destructor

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::pamphlet *ui;
};

#endif // PAMPHLET_H
