#ifndef MOREINFORMATION_H
#define MOREINFORMATION_H

#include <QDialog>
#include "makepurchase.h"

namespace Ui {
class MoreInformation;
}

class MoreInformation : public QDialog
{
    Q_OBJECT

public:
    explicit MoreInformation(QWidget *parent = 0);
    ~MoreInformation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MoreInformation *ui;
};

#endif // MOREINFORMATION_H
