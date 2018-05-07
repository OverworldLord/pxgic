#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QDialog>

namespace Ui {
class ContactUs;
}

class ContactUs : public QDialog ///Class used for the Contact UI
{
    Q_OBJECT

public:
    ///Class constructor
    explicit ContactUs(QWidget *parent = 0);
    ///class destructor
    ~ContactUs();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ContactUs *ui;
};

#endif // CONTACTUS_H
