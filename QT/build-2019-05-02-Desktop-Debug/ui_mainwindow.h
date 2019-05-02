/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Knapp;
    QLineEdit *Tal1;
    QLineEdit *Tal2;
    QLabel *label_2;
    QRadioButton *Plus;
    QRadioButton *Minus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Knapp = new QPushButton(centralWidget);
        Knapp->setObjectName(QStringLiteral("Knapp"));
        Knapp->setGeometry(QRect(30, 90, 111, 31));
        QPalette palette;
        QBrush brush(QColor(255, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        Knapp->setPalette(palette);
        Tal1 = new QLineEdit(centralWidget);
        Tal1->setObjectName(QStringLiteral("Tal1"));
        Tal1->setGeometry(QRect(30, 30, 113, 24));
        Tal2 = new QLineEdit(centralWidget);
        Tal2->setObjectName(QStringLiteral("Tal2"));
        Tal2->setGeometry(QRect(30, 60, 113, 24));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 141, 31));
        Plus = new QRadioButton(centralWidget);
        Plus->setObjectName(QStringLiteral("Plus"));
        Plus->setGeometry(QRect(230, 30, 98, 22));
        Minus = new QRadioButton(centralWidget);
        Minus->setObjectName(QStringLiteral("Minus"));
        Minus->setGeometry(QRect(230, 60, 98, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Knapp->setText(QApplication::translate("MainWindow", "Serv knawledge!", Q_NULLPTR));
        label_2->setText(QString());
        Plus->setText(QApplication::translate("MainWindow", "Plus", Q_NULLPTR));
        Minus->setText(QApplication::translate("MainWindow", "Minus", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
