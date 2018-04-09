#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

void AdminMenu::on_pushButton_clicked()
{
    MainWindow* main = new MainWindow;
    this->close();
    main->show();
}

void AdminMenu::on_pushButton_2_clicked()
{
    CustomerListing* list = new CustomerListing;
    this->close();
    list->show();
}
