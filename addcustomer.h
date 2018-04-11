#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class AddCustomer;
}

class AddCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent = 0);
    ~AddCustomer();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddCustomer *ui;
    DataBaseManager dBManager;
};

#endif // ADDCUSTOMER_H
