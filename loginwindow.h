#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
/*!
 * ... text ...
 */
#include "user.h"
#include "menuAdministrator.h"
#include "menuManager.h"
#include "dbmanager.h"
#include "loginmanager.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
