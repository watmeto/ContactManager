/********************************************************************************
** Form generated from reading UI file 'licence.ui'
**
** Created: Sat 6. Apr 03:39:11 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENCE_H
#define UI_LICENCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_licence
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *licence)
    {
        if (licence->objectName().isEmpty())
            licence->setObjectName(QString::fromUtf8("licence"));
        licence->resize(361, 202);
        textBrowser = new QTextBrowser(licence);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 361, 201));
        textBrowser->setOpenExternalLinks(true);
        pushButton = new QPushButton(licence);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 150, 75, 23));

        retranslateUi(licence);
        QObject::connect(pushButton, SIGNAL(clicked()), licence, SLOT(close()));

        QMetaObject::connectSlotsByName(licence);
    } // setupUi

    void retranslateUi(QDialog *licence)
    {
        licence->setWindowTitle(QApplication::translate("licence", "Licence", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("licence", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                       </span><span style=\" font-size:14pt;\"> </span><span style=\" font-size:14pt; font-weight:600; font-style:italic; text-decoration: underline; color:#00aaff;\">CONTACT MANAGER</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; font-style:italic; text-decoration: underline;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Logiciel de gestion de contacts.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">R\303\251alisation : </span><span style=\" font-size:12pt; font-weight:600; color:#3c7ed4;\">Kientega Landry</span><span style=\" font-size:10pt;\"> &amp;</span><span style=\" font-size:10pt; color:#3b80bd;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#3b80bd;\">Belly Ndiaye</span><span style=\" font-size:10pt;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Suivre l'Avancement sur</span><span style=\" font-size:10pt;\"> </span><a href=\"https://twitter.com/landry_just\"><span style=\" font-size:12pt; text-decoration: underline; color:#0042c7;\">@landry_just</span></a><a href=\"https://twitter.com/l"
                        "andry_just\"><span style=\" font-size:10pt; text-decoration: underline; color:#222222;\"> &amp;</span></a><a href=\"https://twitter.com/landry_just\"><span style=\" font-size:12pt; text-decoration: underline; color:#b3b3b3;\"> </span></a><a href=\"https://twitter.com/watmeto\"><span style=\" font-size:12pt; text-decoration: underline; color:#0093dc;\">@watmeto</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Version V1.0.1</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\302\251 Tout droits r\303\251serv\303\251s </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; marg"
                        "in-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("licence", "Fermer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class licence: public Ui_licence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENCE_H
