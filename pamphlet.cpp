#include "pamphlet.h"
#include "ui_pamphlet.h"

pamphlet::pamphlet(QWidget *parent) :
    QDialog(parent), ///Class Constructor
    ui(new Ui::pamphlet)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

pamphlet::~pamphlet() ///Class Deconstructor
{
    delete ui;
}

void pamphlet::on_pushButton_clicked() ///Brings the user back to the main window from the pamphlet window
{
    MainWindow* menu = new MainWindow;
    menu->show();
    this->close();
}

void pamphlet::on_commandLinkButton_clicked() ///Sends the pamphlet to the user
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
