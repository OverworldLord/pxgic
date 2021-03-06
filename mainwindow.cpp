#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

    QFile file(REVIEWFILE);
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString content = stream.readAll();
    file.close();
    ui->textBrowser_2->setFontPointSize(14);
    ui->textBrowser_2->setText(content);

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
