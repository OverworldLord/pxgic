#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contactus.h"
#include "moreinformation.h"
#include "loginwindow.h"
#include "makepurchase.h"
#include "pamphlet.h"
#include "databasemanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow ///Displays the UI of the main window
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit MainWindow(QWidget *parent = 0);
    ///Class Destructor
    ~MainWindow(); ///Class Destructor

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_checkBox_toggled(bool checked);

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
