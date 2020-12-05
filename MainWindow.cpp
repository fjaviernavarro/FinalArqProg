//
// Created by javier on 05/12/20.
//

#include "MainWindow.h"
#include "./ui_MainWindow.h"
#include "Decodificador.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonDecodificador, &QPushButton::clicked, this, &MainWindow::mostrarDecodificador);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::mostrarDecodificador(){
    DecodificadorDlg dlg;
    dlg.exec();
}