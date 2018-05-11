#include "editcustomer.h"
#include "ui_editcustomer.h"

EditCustomer::EditCustomer(QWidget *parent, QString customerName) :
    QDialog(parent),
    ui(new Ui::EditCustomer)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    populate(customerName);
    oldName = customerName;
}

EditCustomer::~EditCustomer()
{
    delete ui;
}

void EditCustomer::populate(QString customerName)
{
    dBManager.openDB();

    QSqlQuery query;

    query.prepare("SELECT Name, Address, City, State, Zip, Interest, Importance, PamphletSent FROM Customers WHERE Name = :name");
    query.bindValue(":name", customerName);
    dBManager.qryExec(query, "EditCustomer::populate()");

    query.next();
    ui->nameLineEdit->setText(query.value(0).toString());
    ui->addressLineEdit->setText(query.value(1).toString());
    ui->cityLineEdit->setText(query.value(2).toString());
    ui->stateLineEdit->setText(query.value(3).toString());
    ui->zipLineEdit->setText(query.value(4).toString());
    if (query.value(5).toString() == "not interested")
    {
        ui->InterestSlider->setSliderPosition(0);
    }
    else if (query.value(5).toString() == "somewhat interested")
    {
        ui->InterestSlider->setSliderPosition(1);
    }
    else if (query.value(5).toString() == "very interested")
    {
        ui->InterestSlider->setSliderPosition(2);
    }
    else
    {
        qDebug() << "This shouldn't happen";
    }

    if (query.value(6).toString() == "key")
    {
        ui->keyCheckBox->setChecked(true);
    }
    else if (query.value(6).toString() == "nice to have")
    {
        ui->keyCheckBox->setChecked(false);
    }
    else
    {
        qDebug() << "Something got broke";
    }

    dBManager.closeDB();
}

void EditCustomer::on_pushButton_2_clicked()
{
    CustomerListing * menu = new CustomerListing;

    menu->show();
    this->close();
}

void EditCustomer::on_pushButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString address = ui->addressLineEdit->text();
    QString city = ui->cityLineEdit->text();
    QString state = ui->stateLineEdit->text();
    QString zip = ui->zipLineEdit->text();
    QString interest;
    QString importance;

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

    if (!dBManager.editCustomer(oldName, name, address, city, state, zip, interest, importance))
    {
        QMessageBox::critical(this,QObject::tr("System Message"),tr("Error updating entry! Please revise!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Customer entry has been updated!"),QMessageBox::Ok);
        on_pushButton_2_clicked();
    }
}
