/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_n;
    QPushButton *boton_numero;
    QListWidget *list_p;
    QPushButton *boton_procesos;
    QPushButton *pushButton_3;
    QListWidget *list_tll;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *list_tr;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *barras;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(876, 456);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 141, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 131, 16));
        label_n = new QLabel(centralWidget);
        label_n->setObjectName(QStringLiteral("label_n"));
        label_n->setGeometry(QRect(190, 80, 31, 31));
        boton_numero = new QPushButton(centralWidget);
        boton_numero->setObjectName(QStringLiteral("boton_numero"));
        boton_numero->setGeometry(QRect(230, 80, 61, 23));
        list_p = new QListWidget(centralWidget);
        list_p->setObjectName(QStringLiteral("list_p"));
        list_p->setGeometry(QRect(50, 130, 111, 151));
        boton_procesos = new QPushButton(centralWidget);
        boton_procesos->setObjectName(QStringLiteral("boton_procesos"));
        boton_procesos->setGeometry(QRect(50, 290, 251, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 320, 80, 23));
        list_tll = new QListWidget(centralWidget);
        list_tll->setObjectName(QStringLiteral("list_tll"));
        list_tll->setGeometry(QRect(160, 130, 71, 151));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 110, 57, 15));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 110, 57, 15));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 110, 71, 16));
        list_tr = new QListWidget(centralWidget);
        list_tr->setObjectName(QStringLiteral("list_tr"));
        list_tr->setGeometry(QRect(230, 130, 71, 151));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 320, 80, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 0, 261, 371));
        barras = new QVBoxLayout(layoutWidget);
        barras->setSpacing(6);
        barras->setContentsMargins(11, 11, 11, 11);
        barras->setObjectName(QStringLiteral("barras"));
        barras->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 876, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Srtn", 0));
        label->setText(QApplication::translate("MainWindow", "ALGORITMO SRTN", 0));
        label_2->setText(QApplication::translate("MainWindow", "Numero de procesos:", 0));
        label_n->setText(QApplication::translate("MainWindow", "0", 0));
        boton_numero->setText(QApplication::translate("MainWindow", "Ingresar", 0));
        boton_procesos->setText(QApplication::translate("MainWindow", "Ingresar procesos", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Salir", 0));
        label_3->setText(QApplication::translate("MainWindow", "Nombre", 0));
        label_5->setText(QApplication::translate("MainWindow", "T. llegada", 0));
        label_6->setText(QApplication::translate("MainWindow", "Rafaga cpu", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Ejecutar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
