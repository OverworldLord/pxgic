#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)///Constructor
{
    DataBaseManager dBManager;
    ui->setupUi(this);
    ui->textBrowser_2->hide();
    setAttribute(Qt::WA_DeleteOnClose);
    ui->textBrowser_3->append(dBManager.retrieveTestimonials());
}

MainWindow::~MainWindow()///Deconstructor
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()///Transitions to ContactUs window
{
    ContactUs* contactWindow = new ContactUs;
    contactWindow->show();
    this->close();
}

void MainWindow::on_pushButton_clicked()///Transitions to LoginWindow window
{
    LoginWindow* loginWindow = new LoginWindow;
    loginWindow->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()///Transitions to MoreInformatoin window
{
    MoreInformation* moreInfo = new MoreInformation;
    moreInfo->show();
    this->close();
}

void MainWindow::on_pushButton_4_clicked()///Transitions to MakePurchase window
{
    MakePurchase* menu = new MakePurchase;
    menu->show();
    this->close();
}

void MainWindow::on_pushButton_5_clicked()///Transitions to pamphlet window
{
    pamphlet* requestP = new pamphlet;
    requestP->show();
    this->close();
}

void MainWindow::on_checkBox_toggled(bool checked)///Toggles between iCyberSecurity information and help information
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

void MainWindow::on_pushButton_6_clicked()///Reads in and submits customer testimony via DataBaseManager::submitTestimony()
{
    DataBaseManager dBManager;
    if (!dBManager.customerExists(ui->lineEdit->text()))
    {
        QMessageBox::critical(this, "Company Name Not Found!", "Re-enter Company Name.", QMessageBox::Ok);
    }
    else if (ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::critical(this, "Your testimony is empty", "You must enter something.", QMessageBox::Ok);
    }
    else if (dBManager.customerExists(ui->lineEdit->text()) && !dBManager.testimonyExists(ui->lineEdit->text()))
    {
        dBManager.submitTestimony(ui->lineEdit->text(), ui->textEdit->toPlainText());
        QMessageBox::information(this, "Testimony Submitted!", "Thank You For Submitting.", QMessageBox::Ok);
        ui->textEdit->clear();
        ui->lineEdit->clear();
        ui->textBrowser_3->clear();
        ui->textBrowser_3->append(dBManager.retrieveTestimonials());
    }
    else
    {
        QMessageBox::critical(this, "Your Testimony Already Exists!", "You Can Only Submit One Testimony.", QMessageBox::Ok);
    }
}
