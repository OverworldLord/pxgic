#ifndef SALESLISTING_H
#define SALESLISTING_H

#include <QDialog>
#include "adminmenu.h"
#include "databasemanager.h"

namespace Ui {
class salesListing;
}

class salesListing : public QDialog ///UI used to display sales
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit salesListing(QWidget *parent = 0);
    ///Class Destructor
    ~salesListing();

private slots:
    void on_pushButton_clicked();

    void on_label_2_destroyed();

private:
    Ui::salesListing *ui;
    DataBaseManager dBManager;
};

#endif // SALESLISTING_H
