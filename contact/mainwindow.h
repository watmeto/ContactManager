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

    void on_actionAjouter_activated();

    void on_actionListe_activated();

    void on_pushButton_clicked();

    //void on_Enregistrer_clicked();

    void on_Reset_clicked();

    void on_Editer_clicked();

    void on_supprimer_clicked();

    void on_modifier_clicked();

    void on_actionAide_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
