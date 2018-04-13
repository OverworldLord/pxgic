#include "adminmenu.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_LoginButton_clicked()
{
    Password_textEdited(password);
    Username_textEdited(username);

    if(dBManager.testUser(username, password) == 1)
    {
        AdminMenu *menu = new AdminMenu;
        this->close();
        menu->show();
    }
    else if (dBManager.testUser(username, password) == 0)
    {
        QMessageBox::critical(this, "Login Error!", "Re-enter username/password", QMessageBox::Ok);
        ui->Password->clear();
    }
}

void LoginWindow::Password_textEdited(QString &arg1)
{
    arg1 = ui->Password->text();
}

void LoginWindow::Username_textEdited(QString &arg1)
{
    arg1 = ui->Username->text();
}

void LoginWindow::on_Password_returnPressed()
{
    on_LoginButton_clicked();
}

void LoginWindow::on_Username_returnPressed()
{
    on_LoginButton_clicked();
}

void LoginWindow::on_pushButton_clicked()
{
    MainWindow* menu = new MainWindow;
    this->close();
    menu->show();
}
