#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

void AdminMenu::on_pushButton_clicked()
{
    MainWindow* main = new MainWindow;
    main->show();
    this->close();
}

void AdminMenu::on_pushButton_2_clicked()
{
    CustomerListing* list = new CustomerListing;
    list->show();
    this->close();
}

void AdminMenu::on_pushButton_3_clicked()
{
    salesListing* list = new salesListing;
    list->show();
    this->close();
}
