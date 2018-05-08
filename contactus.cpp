#include "mainwindow.h"
#include "contactus.h"
#include "ui_contactus.h"

ContactUs::ContactUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactUs)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

ContactUs::~ContactUs()
{
    delete ui;
}

void ContactUs::on_pushButton_clicked()
{
    MainWindow* menu = new MainWindow;
    menu->show();
    this->close();
}
