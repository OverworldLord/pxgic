#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ContactUs* contactWindow = new ContactUs(this);
    this->close();
    contactWindow->show();
}

void MainWindow::on_pushButton_clicked()
{
    LoginWindow* loginWindow = new LoginWindow;
    this->close();
    loginWindow->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    MoreInformation* moreInfo = new MoreInformation(this);
    this->close();
    moreInfo->show();
}
