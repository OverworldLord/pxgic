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

void MakePurchase::on_pushButton_2_clicked()
{
    GuaranteePolicy* policy = new GuaranteePolicy;
    this->close();
    policy->show();
}

void MakePurchase::on_pushButton_3_clicked()
{
    DataBaseManager* Database = new DataBaseManager;
    if(Database->customerExists(ui->lineEdit->text())) {
        QString CustName = ui->lineEdit->text();
        QString Product;
        int AmtBought;
        double PricePer;

        if(ui->spinBox->value() > 0) {
            Product   = "Cardboard";
            AmtBought = ui->spinBox->value();
            PricePer  = 4.99;
            Database->addPurchase(CustName, Product, AmtBought, PricePer);
        }

        if(ui->spinBox_2->value() > 0) {
            Product   = "Gold";
            AmtBought = ui->spinBox_2->value();
            PricePer  = 19.99;
            Database->addPurchase(CustName, Product, AmtBought, PricePer);
        }

        if(ui->spinBox_3->value() > 0) {
            Product   = "Platinum VIP";
            AmtBought = ui->spinBox_3->value();
            PricePer  = 999999.99;
            Database->addPurchase(CustName, Product, AmtBought, PricePer);
        }

        if(ui->spinBox_4->value() > 0) {
            Product = "Maintainance Plan";
            AmtBought = ui->spinBox_4->value();
            PricePer  = 400.00;
            Database->addPurchase(CustName, Product, AmtBought, PricePer);
        }


    }
    else {
        QMessageBox::critical(this, "Company Name Not Found!", "Re-enter Company Name.", QMessageBox::Ok);
    }
}
