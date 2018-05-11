#include "makepurchase.h"
#include "ui_makepurchase.h"

MakePurchase::MakePurchase(QWidget *parent) :
    QDialog(parent), ///Class constructor
    ui(new Ui::MakePurchase)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

MakePurchase::~MakePurchase() ///Class Deconstructor
{
    delete ui;
}

void MakePurchase::on_pushButton_clicked() ///Brings user to the main window from the purchase window
{
    MainWindow* menu = new MainWindow;
    menu->show();
    this->close();
}

void MakePurchase::on_pushButton_2_clicked() ///Brings user to the guarantee policy menu from the purchase menu
{
    GuaranteePolicy* policy = new GuaranteePolicy;
    policy->show();
    this->close();
}

void MakePurchase::on_pushButton_3_clicked() ///Function that allows a user to make a purchase
{
    DataBaseManager* Database = new DataBaseManager;
    if((ui->spinBox->value() == 0) && (ui->spinBox_2->value() == 0) && (ui->spinBox_3->value() == 0) && (ui->spinBox_4->value() == 0))
    {
        QMessageBox::critical(this, "You're a smart one", "You must order at least one service", QMessageBox::Ok);
    }
    else if(Database->customerExists(ui->lineEdit->text()))
    {
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
            PricePer  = 9999.99;
            Database->addPurchase(CustName, Product, AmtBought, PricePer);
        }

        if(ui->spinBox_4->value() > 0) {
            Product = "Maintainance Plan";
            AmtBought = ui->spinBox_4->value();
            PricePer  = 400.00;
            Database->addPurchase(CustName, Product, AmtBought, PricePer);
        }

        QMessageBox::information(this, "Purchase Success!", "Check Your E-mail for Verification.", QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(this, "Company Name Not Found!", "Re-enter Company Name.", QMessageBox::Ok);
    }
}
