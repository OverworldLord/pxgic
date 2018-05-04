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


class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

    void setName(const QString &name);
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
