//
// Created by javier on 05/12/20.
//

#include "Codificador.h"
#include "ui_Codificador.h"

CodificadorDlg::CodificadorDlg(QWidget *parent):
        QDialog(parent), ui(new Ui::CodificadorDlg)
{
    ui->setupUi(this);
}

CodificadorDlg::~CodificadorDlg(){
    delete ui;
}