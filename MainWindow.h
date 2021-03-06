//
// Created by javier on 05/12/20.
//

#ifndef PROYECTORESISTENCIAS_MAINWINDOW_H
#define PROYECTORESISTENCIAS_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
    void mostrarDecodificador();
    void mostrarCodificador();
};

#endif //PROYECTORESISTENCIAS_MAINWINDOW_H
