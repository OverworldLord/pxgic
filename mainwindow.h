#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contactus.h"
#include "moreinformation.h"
#include "loginwindow.h"
#include "makepurchase.h"
#include "pamphlet.h"
#include "help.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_textBrowser_2_textChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
