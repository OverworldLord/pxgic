#include "mainwindow.h"
#include "moreinformation.h"
#include "ui_moreinformation.h"

MoreInformation::MoreInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoreInformation)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

MoreInformation::~MoreInformation() ///class deconstructor
{
    delete ui;
}

void MoreInformation::on_pushButton_clicked() ///Brings user to the main menu from the current window
{
    MainWindow* menu = new MainWindow;
    menu->show();
    this->close();
}
