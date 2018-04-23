#include "pamphlet.h"
#include "ui_pamphlet.h"

pamphlet::pamphlet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pamphlet)
{
    ui->setupUi(this);
}

pamphlet::~pamphlet()
{
    delete ui;
}

void pamphlet::on_pushButton_clicked()
{
    MainWindow* menu = new MainWindow;
    this->close();
    menu->show();
}

void pamphlet::on_commandLinkButton_clicked()
{   DataBaseManager* Database = new DataBaseManager;
    if(Database->customerExists(ui->lineEdit->text())) {
        if(Database->sendPamphlet(ui->lineEdit->text())) {
            QMessageBox::information(this, "Additional Pamphlet sent.", "You have requested an additional pamphlet. Check your Email for confirmation.", QMessageBox::Ok);
        } else {
            QMessageBox::information(this, "Pamphlet sent.", "Check your Email for confirmation.", QMessageBox::Ok);
        }
    } else {
        QMessageBox::critical(this, "Error: Company not found!", "Re-enter company name.", QMessageBox::Ok);
    }
}
