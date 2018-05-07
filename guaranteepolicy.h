#ifndef GUARANTEEPOLICY_H
#define GUARANTEEPOLICY_H

#include <QDialog>
#include "makepurchase.h"

namespace Ui {
class GuaranteePolicy;
}

class GuaranteePolicy : public QDialog ///Class involved with displaying the Guarantee Policy
{
    Q_OBJECT

public:
    ///Class Constructor
    explicit GuaranteePolicy(QWidget *parent = 0);
    ///Class Destructor
    ~GuaranteePolicy();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GuaranteePolicy *ui;
};

#endif // GUARANTEEPOLICY_H
