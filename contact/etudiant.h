#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <QtGui/QApplication>



class Etudiant
{
private:
        QString nom, prenom, numero, email;
        QString matricule;
public:
        Etudiant(QString matricule, QString nom, QString prenom, QString numero, QString email);
        Etudiant(QString nom, QString prenom, QString numero, QString email);
        Etudiant (QString ligne);
        Etudiant();
        QString who();
        void affiche();
        QString getMat();
        QString getNa();
};
int nbEtudiant();
void enregistrer(Etudiant e);
void ajouter();
void listeEtudiants();
void supprimer(Etudiant e);
Etudiant chercher(QString identifiant);
#endif // ETUDIANT_H
