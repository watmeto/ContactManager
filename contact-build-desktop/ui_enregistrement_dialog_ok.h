/********************************************************************************
** Form generated from reading UI file 'enregistrement_dialog_ok.ui'
**
** Created: Sun 14. Apr 19:33:16 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENREGISTREMENT_DIALOG_OK_H
#define UI_ENREGISTREMENT_DIALOG_OK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Enregistrement_dialog_ok
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Enregistrement_dialog_ok)
    {
        if (Enregistrement_dialog_ok->objectName().isEmpty())
            Enregistrement_dialog_ok->setObjectName(QString::fromUtf8("Enregistrement_dialog_ok"));
        Enregistrement_dialog_ok->resize(348, 109);
        Enregistrement_dialog_ok->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../img/isvalide.png"), QSize(), QIcon::Normal, QIcon::Off);
        Enregistrement_dialog_ok->setWindowIcon(icon);
        label = new QLabel(Enregistrement_dialog_ok);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 331, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Old English Text MT"));
        font.setItalic(true);
        label->setFont(font);
        pushButton = new QPushButton(Enregistrement_dialog_ok);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 80, 75, 23));

        retranslateUi(Enregistrement_dialog_ok);

        QMetaObject::connectSlotsByName(Enregistrement_dialog_ok);
    } // setupUi

    void retranslateUi(QDialog *Enregistrement_dialog_ok)
    {
        Enregistrement_dialog_ok->setWindowTitle(QApplication::translate("Enregistrement_dialog_ok", "Enr\303\251gistrement", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Enregistrement_dialog_ok", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">Enr\303\251gistrement r\303\251ussi!</span><span style=\" font-size:16pt;\">  (^__^)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Enregistrement_dialog_ok", "Fermer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Enregistrement_dialog_ok: public Ui_Enregistrement_dialog_ok {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENREGISTREMENT_DIALOG_OK_H
