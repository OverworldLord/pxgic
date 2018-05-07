#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    DataBaseManager dBManager;
    ui->setupUi(this);
    ui->textBrowser_2->hide();
    setAttribute(Qt::WA_DeleteOnClose);
    ui->textBrowser_3->append(dBManager.retrieveTestimonials());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ContactUs* contactWindow = new ContactUs;
    contactWindow->show();
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    LoginWindow* loginWindow = new LoginWindow;
    loginWindow->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    MoreInformation* moreInfo = new MoreInformation;
    moreInfo->show();
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    MakePurchase* menu = new MakePurchase;
    menu->show();
    this->close();
}

void MainWindow::on_pushButton_5_clicked()
{
    pamphlet* requestP = new pamphlet;
    requestP->show();
    this->close();
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    if (checked)
    {
        ui->textBrowser->hide();
        ui->textBrowser_2->show();
    }
    else if (!checked)
    {
        ui->textBrowser_2->hide();
        ui->textBrowser->show();
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    DataBaseManager dBManager;
    if (!dBManager.customerExists(ui->lineEdit->text()))
    {
        QMessageBox::critical(this, "Company Name Not Found!", "Re-enter Company Name.", QMessageBox::Ok);
    }
    else if (dBManager.customerExists(ui->lineEdit->text()) && !dBManager.testimonyExists(ui->lineEdit->text()))
    {
        dBManager.submitTestimony(ui->lineEdit->text(), ui->textEdit->toPlainText());
        QMessageBox::information(this, "Testimony Submitted!", "Thank You For Submitting.", QMessageBox::Ok);
        ui->textEdit->clear();
        ui->lineEdit->clear();
        ui->textBrowser_3->append(dBManager.retrieveTestimonials());
    }
    else
    {
        QMessageBox::critical(this, "Your Testimony Already Exists!", "You Can Only Submit One Testimony.", QMessageBox::Ok);
    }
}
