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
        QString getNom();
        QString getPrenom();
        QString getNum();
        QString getEmail();
};
int nbEtudiant();
void enregistrer(Etudiant e);
void ajouter();
void listeEtudiants();
void supprimer(Etudiant e);
Etudiant chercher(QString identifiant);
void modifierEtudiant(QString matricule,QString nom, QString prenom, QString numero, QString email);
#endif // ETUDIANT_H
