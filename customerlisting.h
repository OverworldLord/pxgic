#ifndef CUSTOMERLISTING_H
#define CUSTOMERLISTING_H

#include <QDialog>
#include <QSqlQuery>
#include <QModelIndex>
#include "databasemanager.h"
#include "addcustomer.h"
#include "delcustomer.h"
#include "editcustomer.h"

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

    QString returnNameFromCellRow();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::CustomerListing *ui;
    DataBaseManager dBManager;
    QSqlQueryModel *modal = new QSqlQueryModel(this);
};

#endif // CUSTOMERLISTING_H
