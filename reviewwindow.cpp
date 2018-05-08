#include "reviewwindow.h"
#include "ui_reviewwindow.h"
#include "databasemanager.h"


reviewWindow::reviewWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reviewWindow)
{
    ui->setupUi(this);
}

reviewWindow::~reviewWindow()
{
    delete ui;
}

void reviewWindow::on_pushButton_clicked()
{
    MakePurchase* menu = new MakePurchase;
    menu->show();
    this->close();
}

void reviewWindow::on_pushButton_2_clicked()
{
    DataBaseManager* Database = new DataBaseManager;
    if(Database->customerExists(ui->lineEdit->text())) {
        QMessageBox::critical(this, "Company Name Found!", "YAY!", QMessageBox::Ok);
        QString entry;
        entry = ui->lineEdit_2->text();
        entry = entry + "\n- " + ui->lineEdit->text() + "\n\n";
        QMessageBox::critical(this, "REVIEW", entry, QMessageBox::Ok);
        saveToFile(entry);
        MakePurchase* menu = new MakePurchase;
        menu->show();
        this->close();
    }
    else {
        QMessageBox::critical(this, "Company Name Not Found!", "Re-enter Company Name.", QMessageBox::Ok);
    }
}

void reviewWindow:: saveToFile(QString newReview)
{
    QFile file(REVIEWFILE);
    file.open(QIODevice::Append | QIODevice::Text);
    QTextStream stream(&file);
    QString content = stream.readAll();
    QTextStream fout(&file);
    fout << newReview;
    file.close();
}



