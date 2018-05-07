#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMenu)///Constructor
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

AdminMenu::~AdminMenu()///Deconstructor
{
    delete ui;
}

void AdminMenu::on_pushButton_clicked()///Transitions to the MainMenu window
{
    MainWindow* main = new MainWindow;
    main->show();
    this->close();
}

void AdminMenu::on_pushButton_2_clicked()///Transitions to the CustomerListing window
{
    CustomerListing* list = new CustomerListing;
    list->show();
    this->close();
}

void AdminMenu::on_pushButton_3_clicked()///Transitions to the salesListing menu
{
    salesListing* list = new salesListing;
    list->show();
    this->close();
}
