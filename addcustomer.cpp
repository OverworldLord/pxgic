#include "addcustomer.h"
#include "ui_addcustomer.h"

AddCustomer::AddCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCustomer)
{
    ui->setupUi(this);
}

AddCustomer::~AddCustomer()
{
    delete ui;
}

void AddCustomer::on_pushButton_2_clicked()
{
    AdminMenu *menu = new AdminMenu(this);
    this->close();
    menu->show();
}

void AddCustomer::on_pushButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString address = ui->addressLineEdit->text();
    QString city = ui->cityLineEdit->text();
    QString state = ui->stateLineEdit->text();
    QString zip = ui->zipLineEdit->text();
    QString interest;
    QString importance;
    bool isSuccess;

    switch (ui->InterestSlider->value())
    {
        case 0: interest = "not interested";
            break;
        case 1: interest = "somewhat interested";
            break;
        case 2: interest = "very interested";
            break;
    }

    if(ui->keyCheckBox->isChecked())
    {
        importance = "key";
    }
    else
    {
        importance = "nice to have";
    }

    isSuccess = dBManager.addCustomer(name, address, city, state, zip, interest, importance);

    if (isSuccess == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Customer entry has been created!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Creation of customer entry has failed!"),QMessageBox::Ok);
    }

    ui->nameLineEdit->clear();
    ui->addressLineEdit->clear();
    ui->cityLineEdit->clear();
    ui->stateLineEdit->clear();
    ui->zipLineEdit->clear();
    ui->InterestSlider->setSliderPosition(1);
    ui->keyCheckBox->setChecked(false);
}
