#include "mainwindow.h"
#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
}

help::~help()
{
    delete ui;
}

void help::on_pushButton_clicked()
{
    MainWindow* menu = new MainWindow;
    this->close();
    menu->show();
}
