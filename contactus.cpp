#include "mainwindow.h"
#include "contactus.h"
#include "ui_contactus.h"

ContactUs::ContactUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactUs)///Constructor
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

ContactUs::~ContactUs()///Deconstructor
{
    delete ui;
}

void ContactUs::on_pushButton_clicked()///Transitions to MainMenu window
{
    MainWindow* menu = new MainWindow;
    menu->show();
    this->close();
}
