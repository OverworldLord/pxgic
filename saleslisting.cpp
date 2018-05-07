#include "saleslisting.h"
#include "ui_saleslisting.h"

salesListing::salesListing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salesListing)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

    dBManager.openDB();
    ///Creates a new Query
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

salesListing::~salesListing() ///Class Deconstructor
{
    delete ui;
}

void salesListing::on_pushButton_clicked() ///Sets up the Admin Menu from the Sales Listing
{
    AdminMenu* list = new AdminMenu;
    list->show();
    this->close();
}
