#include "adminmenu.h"
#include "customerlisting.h"
#include "ui_customerlisting.h"
#include <QFileDialog>
#include <fstream>

CustomerListing::CustomerListing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerListing)///Constructor
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

CustomerListing::~CustomerListing()///Deconstructor
{
    delete ui;
}

void CustomerListing::on_pushButton_clicked()///Transitions to AdminMenu window
{
    AdminMenu *menu = new AdminMenu;
    menu->show();
    this->close();
}

void CustomerListing::on_checkBox_stateChanged(int arg1)///Sorts and displays by key customers
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
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    dBManager.closeDB();
}

void CustomerListing::on_pushButton_2_clicked()///Transitions to AddCustomer window
{
    AddCustomer *addCustomerWindow = new AddCustomer;
    addCustomerWindow->show();
    this->close();
}

void CustomerListing::on_pushButton_3_clicked()
{
    DelCustomer *delCustomerWindow = new DelCustomer;
    delCustomerWindow->show();
    this->close();
}


void CustomerListing::on_pushButton_4_clicked()///Reads Customer from .txt document and reads to database via DataBaseManager::addCustomer
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
