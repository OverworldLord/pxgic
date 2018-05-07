#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class AddCustomer;
}


class AddCustomer : public QDialog ///Class created to allow the addition of customers
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent = 0); ///Class constructor
    ~AddCustomer(); ///class destructor

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddCustomer *ui;
    DataBaseManager dBManager;
};

#endif // ADDCUSTOMER_H
