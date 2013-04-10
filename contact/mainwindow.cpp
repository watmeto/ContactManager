#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "licence.h"
#include <qinputdialog.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionFermer_activated()
{
close();
}


void MainWindow::on_actionLicence_triggered()
{
 licence malicence;
 malicence.setModal(true);
 malicence.exec();
}

void MainWindow::on_actionRechercher_triggered()
{
    QString matricule= QInputDialog::getText(this, "Matricule", "Saisissez le matricule à rechercher");
    qDebug() << matricule;
}

void MainWindow::on_actionAjouter_activated()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionListe_activated()
{
    ui->stackedWidget->setCurrentIndex(2);
}

