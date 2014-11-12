#include <iostream>
#include<stdio.h>
#include<math.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include <qthread.h>
#include <qpalette.h>
#include <QProgressBar>
using namespace std;

class srtn {
public:
    int n, tiempo_rafaga[10], tiempo_llegada[10], tiempo_respuesta[10], tiempo_espera[10], respaldo_tiempo_rafaga[10], finalizado[10], tiempo_total_espera, tiempo_total_respuesta, total;
    void IngresarDatos();
    void diagrama();
    void ejecutar();
    void verTiempos();
    int siguienteProceso(int);
};

void srtn::IngresarDatos() {
      cout << "****ALGORITMO DE PLANIFICACIÓN SRTN****\n";
    cout << "Ingrese numero de procesos: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese tiempo rafaga del proceso" << i + 1 << ": ";
        cin >> tiempo_rafaga[i];
        cout << "Ingrese tiempo de llegada del proceso" << i + 1 << ": ";
        cin >> tiempo_llegada[i];
    }
}

void srtn::ejecutar() {
    total = 0;
    tiempo_total_espera = 0;
    tiempo_total_respuesta = 0;
    for (int i = 0; i < n; i++) {
        respaldo_tiempo_rafaga[i] = tiempo_rafaga[i];
        finalizado[i] = 0;
        tiempo_espera[i] = 0;
        tiempo_respuesta[i] = 0;
        total += tiempo_rafaga[i];
    }
}

void srtn::diagrama() {
    int time, next = 0, old, i;
    cout << "\n DIAGRAMA: \n\n";
    for (time = 0; time < total; time++) {
        old = next;
        next = siguienteProceso(time);
        if (old != next || time == 0) cout << "(" << time << ")|==P" << next + 1 << "==|";
        respaldo_tiempo_rafaga[next] = respaldo_tiempo_rafaga[next] - 1;
        if (respaldo_tiempo_rafaga[next] == 0) finalizado[next] = 1;
        for (i = 0; i < n; i++)
            if (i != next && finalizado[i] == 0 && tiempo_llegada[i] <= time)
                tiempo_espera[i]++;
    }
    cout << "(" << total << ")" << endl;
}

void srtn::verTiempos() {
    cout<<"\n";
    for (int i = 0; i < n; i++) {
        tiempo_total_espera += tiempo_espera[i];
        tiempo_respuesta[i] = tiempo_espera[i] + tiempo_rafaga[i];
        tiempo_total_respuesta += tiempo_respuesta[i];
        cout << "Tiempo de espera para P" << (i + 1) << " = " << tiempo_espera[i] << ", tiempo de respuesta= " << tiempo_respuesta[i] << endl;
    }
        cout<<"\n";
    cout << "Tiempo medio de espera = " << (double) tiempo_total_espera / n << "\nTiempo medio de respuesta = " << (double) tiempo_total_respuesta / n << endl;
}

int srtn::siguienteProceso(int time) {
    int i, low;
    for (i = 0; i < n; i++)
        if (finalizado[i] == 0) {
            low = i;
            break;
        }
    for (i = 0; i < n; i++)
        if (finalizado[i] != 1)
            if (respaldo_tiempo_rafaga[i] < respaldo_tiempo_rafaga[low] && tiempo_llegada[i] <= time)
                low = i;
    return low;
}

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

void MainWindow:: menor(){
    for(int i=0;i<this->n;i++){
//        QProgressBar   *progressbar = new QProgressBar(this);
//           progressbar->setMinimum(0);
//           progressbar->setMaximum(100);
//           progressbar->setValue(10);
//           ui->barras->addWidget(progressbar);
        for(int j=0;j<this->tr_x[i];j++){
//            progressbar->setValue(j);

//            progressbar->setFormat(QString::number(i));
//           QThread::msleep(100);
        }

    }
}

void MainWindow::on_boton_numero_clicked()
{
    this->n= QInputDialog::getInt(this,"Entrada","Ingrese numero de procesos");

   ui->label_n->setText(QString::number(n));
//ui->label_n->setText("<html><head><style type='text/css'>#div1{background-color:red;whith:10px;}#div2{background-color:blue;}</style></head><body><div><div id='div1' style='float: left;'>This is a text inside a div element.</div><div id='div2' style='float: right;'>This is a text inside a div element.</div></div></body></html>");
ui->label_n->adjustSize();
}

void MainWindow::on_boton_procesos_clicked()
{
    for(int i=0;i<this->n;i++){

        QString nombre=QInputDialog::getText(this,"Entrada","Ingrese nombre del proceso");
          int tiempo_llegada=QInputDialog::getInt(this,"Entrada","Ingrese tiempo de llegada");
          int rafaga_cpu=QInputDialog::getInt(this,"Entrada","Ingrese rafaga cpu");
           p[i].append(nombre);
           tll[i]=tiempo_llegada;
           tr_x[i]=rafaga_cpu;
           ui->list_p->addItem(nombre);
           ui->list_tll->addItem(QString::number(tiempo_llegada));
           ui->list_tr->addItem(QString::number(rafaga_cpu));
    }
}

void MainWindow::on_pushButton_clicked()
{
    srtn algoritmo;
    algoritmo.IngresarDatos();
    algoritmo.ejecutar();
    algoritmo.diagrama();
    algoritmo.verTiempos();
   // ui->bp1->setStyleSheet(QString("QProgressBar::chunk:horizontal {background: qlineargradient(x1: 0, y1: 0.5, x2: 1, y2: 0.5, stop: 0 grey, stop: 1 grey);}")+QString("QProgressBar::horizontal {border: 1px solid gray; border-radius: 3px; background: yellow; padding: 0px; text-align: left; margin-right: 4ex;}")+QString("QProgressBar::horizontal {border: 1px solid gray; border-radius: 3px; background: red; padding: 0px; text-align: left; margin-right: 4ex;}")+QString("QProgressBar::horizontal {border: 1px solid gray; border-radius: 3px; background: blue; padding: 0px; text-align: left; margin-right: 4ex;}"));
//    QPalette pal =  ui->bp1->palette();
//   pal.setColor(QPalette::Highlight, QColor("red"));
//    pal.setColor(QPalette::Highlight, QColor("yellow"));
//    pal.setColor(QPalette::Highlight, QColor("green"));
//     ui->bp1->setPalette(pal);
//    for(int i=0;i<this->n;i++){
//        ui->bp1->setValue(i);
//        ui->bp1->setFormat(QString::number(i));
//       QThread::msleep(100);
//    }
}
