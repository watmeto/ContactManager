#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionFermer_activated();

    void on_actionLicence_triggered();

    void on_actionRechercher_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
