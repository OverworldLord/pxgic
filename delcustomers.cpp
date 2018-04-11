#include "delcustomers.h"
#include "ui_delcustomers.h"

DelCustomers::DelCustomers(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DelCustomers)
{
    ui->setupUi(this);
}

DelCustomers::~DelCustomers()
{
    delete ui;
}
