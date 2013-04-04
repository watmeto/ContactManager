#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "licence.h"
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
