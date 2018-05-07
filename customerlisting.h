#ifndef CUSTOMERLISTING_H
#define CUSTOMERLISTING_H

#include <QDialog>
#include <QSqlQuery>
#include "databasemanager.h"
#include "addcustomer.h"
#include "delcustomer.h"

namespace Ui {
class CustomerListing;
}

class CustomerListing : public QDialog ///Class for the customer listing UI
{
    Q_OBJECT

public:
    ///class constructor
    explicit CustomerListing(QWidget *parent = 0);
    ///Class destructor
    ~CustomerListing();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::CustomerListing *ui;
    DataBaseManager dBManager;
};

#endif // CUSTOMERLISTING_H
