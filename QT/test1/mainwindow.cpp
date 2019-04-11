#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(grisRosa()));
}


void MainWindow::grisRosa()
{
    ui->lineEdit->setText("Gais är bäst");

}

MainWindow::~MainWindow()
{
    delete ui;
}
