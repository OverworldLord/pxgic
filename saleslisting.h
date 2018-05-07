#ifndef SALESLISTING_H
#define SALESLISTING_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class salesListing;
}

class salesListing : public QDialog
{
    Q_OBJECT

public:
    explicit salesListing(QWidget *parent = 0);
    ~salesListing();

private slots:
    void on_pushButton_clicked();

private:
    Ui::salesListing *ui;
    DataBaseManager dBManager;
};

#endif // SALESLISTING_H
