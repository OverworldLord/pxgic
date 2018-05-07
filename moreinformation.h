#ifndef MOREINFORMATION_H
#define MOREINFORMATION_H

#include <QDialog>
#include "makepurchase.h"

namespace Ui {
class MoreInformation;
}

///Class used for the more information UI
class MoreInformation : public QDialog
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit MoreInformation(QWidget *parent = 0);
    ///Class Destructor
    ~MoreInformation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MoreInformation *ui;
};

#endif // MOREINFORMATION_H
