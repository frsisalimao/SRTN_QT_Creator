#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
 #include <QListWidget>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int n=0;
    int tll[10];
    int tr_x[19];
     QStringList p[5];
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
 void menor();
private slots:
    void on_boton_numero_clicked();

    void on_boton_procesos_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
