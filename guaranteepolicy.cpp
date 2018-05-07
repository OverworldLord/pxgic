#include "guaranteepolicy.h"
#include "ui_guaranteepolicy.h"

GuaranteePolicy::GuaranteePolicy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GuaranteePolicy)
{
    ui->setupUi(this);
}

GuaranteePolicy::~GuaranteePolicy()
{
    delete ui;
}

void GuaranteePolicy::on_pushButton_clicked()
{
    MakePurchase* menu = new MakePurchase;
    this->close();
    menu->show();
}
