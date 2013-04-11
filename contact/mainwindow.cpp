#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "licence.h"
#include <qinputdialog.h>
#include <QDebug>
#include "etudiant.h"

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


void MainWindow::on_pushButton_clicked()
{
    QString nom, prenom, email, num;
    nom = ui->Enom->text();
    prenom = ui->Eprenom->text();
    email = ui->Eemail->text();
    num =  ui->Enum->text();
    Etudiant e(nom, prenom, num, email);
    enregistrer(e);
}



void MainWindow::on_Reset_clicked()
{
    ui->Enom->setText("");
    ui->Eprenom->setText("");
    ui->Eemail->setText("");
    ui->Enum->setText("");
}
