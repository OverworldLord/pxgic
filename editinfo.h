#ifndef EDITINFO_H
#define EDITINFO_H

#include <QDialog>
#include "editcustomer.h"

namespace Ui {
class editInfo;
}

class editInfo : public QDialog
{
    Q_OBJECT

public:
    explicit editInfo(QWidget *parent = 0);
    ~editInfo();

private:
    Ui::editInfo *ui;
};

#endif // EDITINFO_H
