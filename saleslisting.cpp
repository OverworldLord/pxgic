#include "saleslisting.h"
#include "ui_saleslisting.h"

salesListing::salesListing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salesListing)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

    dBManager.openDB();
    QSqlQueryModel * modal = new QSqlQueryModel(this);
    modal->setQuery("SELECT * FROM Sales");

    QSortFilterProxyModel * sortModal=new QSortFilterProxyModel(this);
    sortModal->setDynamicSortFilter(true);
    sortModal->setSourceModel(modal);

    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(sortModal);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    dBManager.closeDB();
}

salesListing::~salesListing()
{
    delete ui;
}

void salesListing::on_pushButton_clicked()
{
    AdminMenu* list = new AdminMenu;
    list->show();
    this->close();
}
