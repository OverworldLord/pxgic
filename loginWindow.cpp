#include "adminmenu.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)///Constructor
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

LoginWindow::~LoginWindow()///Deconstructor
{
    delete ui;
}

void LoginWindow::on_LoginButton_clicked()///Submits the admin login credintials and checks them via DataBaseManager::testUser()
{
    DataBaseManager dBManager;
    Password_textEdited(password);
    Username_textEdited(username);

    if(dBManager.testUser(username, password) == 1)
    {
        AdminMenu *menu = new AdminMenu;
        menu->show();
        this->close();
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

void LoginWindow::on_Password_returnPressed()///Logins in when enter key is pressed
{
    on_LoginButton_clicked();
}

void LoginWindow::on_Username_returnPressed()///Logins in when enter key is pressed
{
    on_LoginButton_clicked();
}

void LoginWindow::on_pushButton_clicked()///Transitions to MainMenu window
{
    MainWindow* menu = new MainWindow;
    menu->show();
    this->close();
}
