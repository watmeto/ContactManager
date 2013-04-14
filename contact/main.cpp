#include <QtGui/QApplication>
#include <QDesktopServices>
#include <QUrl>
#include "mainwindow.h"
#include "etudiant.h"

int main(int argc, char *argv[])
{
    /*Etudiant e("aarar/ararazer/raraerae/arazeraz/arazraz");
        e.affiche();
        enregistrer(e);
        ajouter();
        nbEtudiant(); */
    //modifierEtudiant("1","Belly","yamakazi","111fzef11","ozeefzcvzvzfvrrpefez@fz.fer");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
