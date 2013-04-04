#ifndef LICENCE_H
#define LICENCE_H

#include <QDialog>

namespace Ui {
    class licence;
}

class licence : public QDialog
{
    Q_OBJECT

public:
    explicit licence(QWidget *parent = 0);
    ~licence();

private:
    Ui::licence *ui;
};

#endif // LICENCE_H
