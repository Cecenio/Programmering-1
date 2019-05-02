#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Knapp, SIGNAL(clicked()),this,SLOT(summera()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::summera()
{
    QString t1 = ui->Tal1->text();
    QString t2 = ui->Tal2->text();
    double dt1 = t1.toDouble();
    double dt2 = t2.toDouble();

    double summa;

    if(ui->Minus->isChecked())
    {
         summa = dt1-dt2;
    }
     if(ui->Plus->isChecked())
     {
         summa = dt1 + dt2;
     }

    QString s = QString::number(summa);
    ui->label_2->setText(s);
}
