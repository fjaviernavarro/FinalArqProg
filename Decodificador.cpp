//
// Created by javier on 05/12/20.
//

#include "Decodificador.h"
#include "ui_Decodificador.h"

DecodificadorDlg::DecodificadorDlg(QWidget *parent):
    QDialog(parent), ui(new Ui::DecodificadorDlg)
    {
    ui->setupUi(this);
}

DecodificadorDlg::~DecodificadorDlg(){
    delete ui;
}