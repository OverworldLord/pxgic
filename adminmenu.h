#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>
#include "customerlisting.h"
#include "mainwindow.h"
#include "saleslisting.h"

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QDialog ///UI class of the administrator menu
{
    Q_OBJECT

public:
    ///class constructor
    explicit AdminMenu(QWidget *parent = 0);
    ///Class destructor
    ~AdminMenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::AdminMenu *ui;
};

#endif // ADMINMENU_H
