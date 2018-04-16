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

class CustomerListing : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerListing(QWidget *parent = 0);
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
