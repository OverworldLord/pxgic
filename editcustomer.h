#ifndef EDITCUSTOMER_H
#define EDITCUSTOMER_H
#include "databasemanager.h"
#include "customerlisting.h"

#include <QDialog>

namespace Ui {
class EditCustomer;
}

class EditCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit EditCustomer(QWidget *parent = 0, QString customerName = "");
    ~EditCustomer();
    void populate(QString customerName);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::EditCustomer *ui;
    DataBaseManager dBManager;
    QString oldName;
};

#endif // EDITCUSTOMER_H
