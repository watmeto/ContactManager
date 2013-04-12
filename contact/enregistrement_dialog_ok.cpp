#include "enregistrement_dialog_ok.h"
#include "ui_enregistrement_dialog_ok.h"

Enregistrement_dialog_ok::Enregistrement_dialog_ok(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enregistrement_dialog_ok)
{
    ui->setupUi(this);
}

Enregistrement_dialog_ok::~Enregistrement_dialog_ok()
{
    delete ui;
}

void Enregistrement_dialog_ok::on_pushButton_clicked()
{
    close();
}
