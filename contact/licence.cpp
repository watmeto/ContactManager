#include "licence.h"
#include "ui_licence.h"

licence::licence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::licence)
{
    ui->setupUi(this);
}

licence::~licence()
{
    delete ui;
}
/*test*/
