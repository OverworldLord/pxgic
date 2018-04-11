#include "adminmenu.h"
#include "customerlisting.h"
#include "ui_customerlisting.h"

CustomerListing::CustomerListing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerListing)
{
    ui->setupUi(this);

    dBManager.openDB();
    QSqlQueryModel * modal = new QSqlQueryModel(this);
    modal->setQuery("SELECT * FROM Customers");

    QSortFilterProxyModel * sortModal=new QSortFilterProxyModel(this);
    sortModal->setDynamicSortFilter(true);
    sortModal->setSourceModel(modal);

    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(sortModal);
    dBManager.closeDB();
}

CustomerListing::~CustomerListing()
{
    delete ui;
}

void CustomerListing::on_pushButton_clicked()
{
    AdminMenu *menu = new AdminMenu(this);
    this->close();
    menu->show();
}

void CustomerListing::on_checkBox_stateChanged(int arg1)
{
    dBManager.openDB();
    QSqlQueryModel *modal = new QSqlQueryModel(this);

    switch (arg1)
    {
    case 0: modal->setQuery("SELECT * FROM Customers");
        break;
    case 2: modal->setQuery("SELECT * FROM Customers WHERE Importance LIKE 'key'");
        break;
    }

    QSortFilterProxyModel *sortModal=new QSortFilterProxyModel(this);
    sortModal->setDynamicSortFilter(true);
    sortModal->setSourceModel(modal);

    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(sortModal);
    dBManager.closeDB();
}

void CustomerListing::on_pushButton_2_clicked()
{
    AddCustomer *addCustomerWindow = new AddCustomer(this);
    this->close();
    addCustomerWindow->show();
}

void CustomerListing::on_pushButton_3_clicked()
{
    DelCustomer *delCustomerWindow = new DelCustomer(this);
    this->close();
    delCustomerWindow->show();
}

