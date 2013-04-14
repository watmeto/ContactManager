/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created: Sun 14. Apr 19:18:00 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QString::fromUtf8("help"));
        help->resize(474, 314);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../img/help_globe_93.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        help->setWindowIcon(icon);
        commandLinkButton = new QCommandLinkButton(help);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 20, 172, 41));

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QDialog *help)
    {
        help->setWindowTitle(QApplication::translate("help", "Dialog", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("help", "CommandLinkButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
