#ifndef DELCUSTOMER_H
#define DELCUSTOMER_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class DelCustomer;
}

class DelCustomer : public QDialog ///Class used in order to remove a customer
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit DelCustomer(QWidget *parent = 0);
    ///Class Destructor
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
