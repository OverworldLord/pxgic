#ifndef EDITCUSTOMER_H
#define EDITCUSTOMER_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class editCustomer;
}

class editCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit editCustomer(QWidget *parent = 0);
    ~editCustomer();
    QString passedName;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editCustomer *ui;
    DataBaseManager dBManager;
};

#endif // EDITCUSTOMER_H
