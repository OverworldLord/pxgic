#include "guaranteepolicy.h"
#include "ui_guaranteepolicy.h"

GuaranteePolicy::GuaranteePolicy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GuaranteePolicy)///Constructor
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

GuaranteePolicy::~GuaranteePolicy()///Deconstructor
{
    delete ui;
}

void GuaranteePolicy::on_pushButton_clicked()///Transitions to MakePurchase window
{
    MakePurchase* menu = new MakePurchase;
    menu->show();
    this->close();
}
