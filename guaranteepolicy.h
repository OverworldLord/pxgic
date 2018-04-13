#ifndef GUARANTEEPOLICY_H
#define GUARANTEEPOLICY_H

#include <QDialog>
#include "makepurchase.h"

namespace Ui {
class GuaranteePolicy;
}

class GuaranteePolicy : public QDialog
{
    Q_OBJECT

public:
    explicit GuaranteePolicy(QWidget *parent = 0);
    ~GuaranteePolicy();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GuaranteePolicy *ui;
};

#endif // GUARANTEEPOLICY_H
