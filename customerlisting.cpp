#include "adminmenu.h"
#include "customerlisting.h"
#include "ui_customerlisting.h"
#include <QFileDialog>
#include <fstream>

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


void CustomerListing::on_pushButton_4_clicked()
{
    qDebug() << "error";

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/home", tr("Txt Files (*.txt)"));
    std::ifstream inFile;
    std::string name;
    std::string address;
    std::string cityStateZip;
    std::string city;
    std::string state;
    std::string zip;
    std::string interestLevel;
    std::string key;
    inFile.open(fileName.toStdString());

    while(inFile) {
        getline(inFile, name);
        getline(inFile, address);
        getline(inFile, city, ',');
        inFile >> state;
        inFile >> zip;
        inFile.ignore(10000, '\n');
        getline(inFile, interestLevel);
        getline(inFile, key);
        inFile.ignore(10000, '\n');
        dBManager.addCustomer(QString::fromStdString(name),
                              QString::fromStdString(address),
                              QString::fromStdString(city),
                              QString::fromStdString(state),
                              QString::fromStdString(zip),
                              QString::fromStdString(interestLevel),
                              QString::fromStdString(key), 1);
    }
}
