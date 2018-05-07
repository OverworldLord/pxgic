#include "editinfo.h"
#include "ui_editinfo.h"

editInfo::editInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editInfo)
{
    ui->setupUi(this);
}

editInfo::~editInfo()
{
    delete ui;
}
