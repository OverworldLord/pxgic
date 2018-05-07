#include "delcustomer.h"
#include "ui_delcustomer.h"

DelCustomer::DelCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelCustomer)///Constructor
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

DelCustomer::~DelCustomer()///Deconstructor
{
    delete ui;
}

void DelCustomer::on_pushButton_clicked()///Transitions to the CustomerListing window
{
    CustomerListing* list = new CustomerListing();
    list->show();
    this->close();
}

void DelCustomer::on_pushButton_2_clicked()///Deletes the customer via DataBaseManager::deleteCustomer()
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

void DelCustomer::on_nameLineEdit_returnPressed()///Deletes the customer via DataBaseManager::deleteCustomer() when the enter button is pressed
{
    on_pushButton_2_clicked();
}
