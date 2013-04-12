#ifndef ENREGISTREMENT_DIALOG_OK_H
#define ENREGISTREMENT_DIALOG_OK_H

#include <QDialog>

namespace Ui {
    class Enregistrement_dialog_ok;
}

class Enregistrement_dialog_ok : public QDialog
{
    Q_OBJECT

public:
    explicit Enregistrement_dialog_ok(QWidget *parent = 0);
    ~Enregistrement_dialog_ok();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Enregistrement_dialog_ok *ui;
};

#endif // ENREGISTREMENT_DIALOG_OK_H
