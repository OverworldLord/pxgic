#include "mainwindow.h"
#include "moreinformation.h"
#include "ui_moreinformation.h"

MoreInformation::MoreInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoreInformation)
{
    ui->setupUi(this);
}

MoreInformation::~MoreInformation()
{
    delete ui;
}

void MoreInformation::on_pushButton_clicked()
{
    MainWindow* menu = new MainWindow;
    this->close();
    menu->show();
}
