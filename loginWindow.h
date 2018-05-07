#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QPushButton>
#include "databasemanager.h"

namespace Ui {
class LoginWindow;
}


class LoginWindow : public QMainWindow ///Class used for the login UI
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit LoginWindow(QWidget *parent = 0);
    ///Class Destructor
    ~LoginWindow();

    ///Function used in order to set the name of a user
    void setName(const QString &name);
    ///Function related to the name of a user
    QString name() const;

private slots:

     void on_LoginButton_clicked();

     void Password_textEdited(QString &arg1);

     void Username_textEdited(QString &arg1);

     void on_Password_returnPressed();

     void on_Username_returnPressed();

     void on_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
    QPushButton *LoginButton;
    QString username;
    QString password;
};

#endif // LOGINWINDOW_H
