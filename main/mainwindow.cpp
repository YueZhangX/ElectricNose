#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actSer_triggered()
{

}

void MainWindow::on_actAboutSys_triggered()
{

}

void MainWindow::on_actAboutQt_triggered()
{

}

void MainWindow::on_actAnalyze_triggered()
{

}
