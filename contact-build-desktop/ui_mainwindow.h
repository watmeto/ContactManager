/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 4. Apr 19:40:51 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter;
    QAction *actionLicence;
    QAction *actionAide;
    QAction *actionFermer;
    QAction *actionRechercher;
    QAction *actionListe;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEditer;
    QMenu *menuListe_contact;
    QMenu *menuA_propos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(530, 340);
        actionAjouter = new QAction(MainWindow);
        actionAjouter->setObjectName(QString::fromUtf8("actionAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../img/addressbook_add_98423.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter->setIcon(icon);
        actionLicence = new QAction(MainWindow);
        actionLicence->setObjectName(QString::fromUtf8("actionLicence"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../img/icon-39737_640.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLicence->setIcon(icon1);
        actionAide = new QAction(MainWindow);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../img/help_globe_93.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAide->setIcon(icon2);
        actionFermer = new QAction(MainWindow);
        actionFermer->setObjectName(QString::fromUtf8("actionFermer"));
        actionFermer->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../img/10552-AlexTheKid-EteindreOrdinateur (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFermer->setIcon(icon3);
        actionRechercher = new QAction(MainWindow);
        actionRechercher->setObjectName(QString::fromUtf8("actionRechercher"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../img/magnifying-glass-icon-on-square-internet-button-pixmac-icon-45833385.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRechercher->setIcon(icon4);
        actionListe = new QAction(MainWindow);
        actionListe->setObjectName(QString::fromUtf8("actionListe"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../img/LISTE.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionListe->setIcon(icon5);
        actionListe->setIconVisibleInMenu(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 20));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuEditer = new QMenu(menuBar);
        menuEditer->setObjectName(QString::fromUtf8("menuEditer"));
        menuListe_contact = new QMenu(menuBar);
        menuListe_contact->setObjectName(QString::fromUtf8("menuListe_contact"));
        menuA_propos = new QMenu(menuBar);
        menuA_propos->setObjectName(QString::fromUtf8("menuA_propos"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEditer->menuAction());
        menuBar->addAction(menuListe_contact->menuAction());
        menuBar->addAction(menuA_propos->menuAction());
        menuFichier->addAction(actionFermer);
        menuEditer->addAction(actionAjouter);
        menuEditer->addAction(actionRechercher);
        menuListe_contact->addAction(actionListe);
        menuA_propos->addAction(actionLicence);
        menuA_propos->addAction(actionAide);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        actionLicence->setText(QApplication::translate("MainWindow", "Licence", 0, QApplication::UnicodeUTF8));
        actionAide->setText(QApplication::translate("MainWindow", "Aide ?", 0, QApplication::UnicodeUTF8));
        actionFermer->setText(QApplication::translate("MainWindow", "Fermer", 0, QApplication::UnicodeUTF8));
        actionRechercher->setText(QApplication::translate("MainWindow", "Rechercher", 0, QApplication::UnicodeUTF8));
        actionListe->setText(QApplication::translate("MainWindow", "Liste", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEditer->setTitle(QApplication::translate("MainWindow", "Editer", 0, QApplication::UnicodeUTF8));
        menuListe_contact->setTitle(QApplication::translate("MainWindow", "Liste contact", 0, QApplication::UnicodeUTF8));
        menuA_propos->setTitle(QApplication::translate("MainWindow", "A propos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
