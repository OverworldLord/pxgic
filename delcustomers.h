#ifndef DELCUSTOMERS_H
#define DELCUSTOMERS_H

#include <QMainWindow>

namespace Ui {
class DelCustomers;
}

class DelCustomers : public QMainWindow
{
    Q_OBJECT

public:
    explicit DelCustomers(QWidget *parent = 0);
    ~DelCustomers();

private:
    Ui::DelCustomers *ui;
};

#endif // DELCUSTOMERS_H
