#ifndef DELCUSTOMER_H
#define DELCUSTOMER_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class DelCustomer;
}

class DelCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit DelCustomer(QWidget *parent = 0);
    ~DelCustomer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_nameLineEdit_returnPressed();

private:
    Ui::DelCustomer *ui;
    DataBaseManager dBManager;
};

#endif // DELCUSTOMER_H
