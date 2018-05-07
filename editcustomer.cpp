#include "editcustomer.h"
#include "ui_editcustomer.h"
#include "customerlisting.h"
#include "databasemanager.h"

editCustomer::editCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editCustomer)
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
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    dBManager.closeDB();
}

editCustomer::~editCustomer()
{
    delete ui;
}

void editCustomer::on_pushButton_clicked()
{
    CustomerListing* list = new CustomerListing();
    this->close();
    list->show();
}

void editCustomer::on_pushButton_2_clicked()
{
    bool isSuccess;
    QString name = ui->nameLineEdit->text();
    isSuccess = dBManager.customerExists(name);

    if (isSuccess == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Customer entry has been found!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Customer was not found!"),QMessageBox::Ok);
    }

    ui->nameLineEdit->clear();
}
