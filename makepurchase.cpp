#include "makepurchase.h"
#include "ui_makepurchase.h"

MakePurchase::MakePurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MakePurchase)
{
    ui->setupUi(this);
}

MakePurchase::~MakePurchase()
{
    delete ui;
}

void MakePurchase::on_pushButton_clicked()
{
    MainWindow* menu = new MainWindow;
    this->close();
    menu->show();
}
