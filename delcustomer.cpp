#include "delcustomer.h"
#include "ui_delcustomer.h"

DelCustomer::DelCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelCustomer)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

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

DelCustomer::~DelCustomer()
{
    delete ui;
}

void DelCustomer::on_pushButton_clicked()
{
    CustomerListing* list = new CustomerListing();
    list->show();
    this->close();
}

void DelCustomer::on_pushButton_2_clicked()
{
    bool isSuccess;
    QString name = ui->nameLineEdit->text();
    isSuccess = dBManager.deleteCustomer(name);

    if (isSuccess == true)
    {

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

        QMessageBox::information(this,QObject::tr("System Message"),tr("Customer entry has been deleted!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Customer was not found!"),QMessageBox::Ok);
    }

    ui->nameLineEdit->clear();
}

void DelCustomer::on_nameLineEdit_returnPressed()
{
    on_pushButton_2_clicked();
}
