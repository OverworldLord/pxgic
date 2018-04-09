#include "adminmenu.h"
#include "customerlisting.h"
#include "ui_customerlisting.h"

CustomerListing::CustomerListing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerListing)
{
    ui->setupUi(this);

    dBManager.openDB();
    qDebug() << "here";
    QSqlQueryModel *modal = new QSqlQueryModel;
    modal->setQuery("SELECT * FROM Customers");
    ui->tableView->setModel(modal);
}

CustomerListing::~CustomerListing()
{
    delete ui;
}

void CustomerListing::on_pushButton_clicked()
{
    AdminMenu* menu = new AdminMenu;
    this->close();
    menu->show();
}

void CustomerListing::on_tableView_activated(const QModelIndex &index)
{
    dBManager.openDB();
    qDebug() << "here";
    QSqlQueryModel *modal = new QSqlQueryModel;
    modal->setQuery("SELECT * FROM Customers");
    ui->tableView->setModel(modal);
}
