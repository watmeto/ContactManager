#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "licence.h"
#include <qinputdialog.h>
#include <QDebug>
#include "etudiant.h"
#include "enregistrement_dialog_ok.h"
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(600,350);
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
    bool ok = false;
    QString matricule= QInputDialog::getText(this, "Matricule", "Saisissez le matricule à rechercher", QLineEdit::Normal, QString(), &ok);



   /* if(this->event(QEvent *matricule))
        {
             ui->stackedWidget->setCurrentIndex(1);
        }
   */

    if(ok && !matricule.isEmpty())
    {

        QString fileName = "eleves.txt";
        QFile fichier(fileName);
        QString ligne; int i = 0;
        ui->tableWidget_2->clearContents();
        if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
                QTextStream flux(&fichier);


                while (!flux.atEnd())
                {
                      ligne = flux.readLine();
                      if (ligne.contains(matricule, Qt::CaseInsensitive)){
                          Etudiant e(ligne);
                          ui->tableWidget_2->setRowCount(nbEtudiant()-1 );
                          ui->tableWidget_2->setItem(i,0, new QTableWidgetItem(e.getMat()));
                          ui->tableWidget_2->setItem(i,1, new QTableWidgetItem(e.getNom()));
                          ui->tableWidget_2->setItem(i,2, new QTableWidgetItem(e.getPrenom()));
                          ui->tableWidget_2->setItem(i,3, new QTableWidgetItem(e.getNum()));
                          ui->tableWidget_2->setItem(i,4, new QTableWidgetItem(e.getEmail()));
                          i++;
                      }

                }

        }



        ui->stackedWidget->setCurrentIndex(3);
    }

}


void MainWindow::on_actionAjouter_activated()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionListe_activated()
{

    QString fileName = "eleves.txt";
    QFile fichier(fileName);
    QString ligne; int i = 0;
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream flux(&fichier);


            while (!flux.atEnd())
            {
                  ligne = flux.readLine();
                  Etudiant e(ligne);
                  ui->tableWidget->setRowCount(nbEtudiant()-1 );
                  ui->tableWidget->setItem(i,0, new QTableWidgetItem(e.getNom()));
                  ui->tableWidget->setItem(i,1, new QTableWidgetItem(e.getPrenom()));
                  ui->tableWidget->setItem(i,2, new QTableWidgetItem(e.getNum()));
                  ui->tableWidget->setItem(i,3, new QTableWidgetItem(e.getEmail()));
                  i++;

            }

    }


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
    Enregistrement_dialog_ok  box_enregistrer;
    box_enregistrer.setModal(true);
    box_enregistrer.exec();


}



void MainWindow::on_Reset_clicked()
{
    ui->Enom->setText("");
    ui->Eprenom->setText("");
    ui->Eemail->setText("");
    ui->Enum->setText("");
}


void MainWindow::on_Editer_clicked()
{
    QString mat, nom, prenom, num, email;
    mat = QString::number(ui->tableWidget_2->currentRow());
    //qDebug() << "lign " << mat;
    mat = ui->tableWidget_2->item(mat.toInt(),0)->text();

    Etudiant e = chercher(mat);
    nom = e.getNom();
    prenom = e.getPrenom();
    num = e.getNum();
    email = e.getEmail();
    e.affiche();

    ui->Mmat->setText(mat); ui->Mnom->setText(nom); ui->Mprenom->setText(prenom);
    ui->Mnum->setText(num); ui->Memail->setText(email);
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_supprimer_clicked()
{

    Etudiant e (ui->Mmat->text(), ui->Mnom->text(), ui->Mprenom->text(),
    ui->Mnum->text(), ui->Memail->text());
    supprimer(e);
}

void MainWindow::on_modifier_clicked()
{
    modifierEtudiant (ui->Mmat->text(), ui->Mnom->text(), ui->Mprenom->text(),
    ui->Mnum->text(), ui->Memail->text());

}

