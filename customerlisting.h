#ifndef CUSTOMERLISTING_H
#define CUSTOMERLISTING_H

#include <QDialog>
#include <QSqlQuery>
#include "databasemanager.h"

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

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::CustomerListing *ui;
    DataBaseManager dBManager;
};

#endif // CUSTOMERLISTING_H
