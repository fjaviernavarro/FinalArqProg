//
// Created by javier on 05/12/20.
//

#include "Decodificador.h"
#include "ui_Decodificador.h"

DecodificadorDlg::DecodificadorDlg(QWidget *parent):
    QDialog(parent), ui(new Ui::DecodificadorDlg)
    {
    ui->setupUi(this);
    initialize_colorcombos();
    connect(ui->radioButton4B, &QRadioButton::clicked, this, &DecodificadorDlg::bands_changed);
    connect(ui->radioButton5B, &QRadioButton::clicked, this, &DecodificadorDlg::bands_changed);
}

DecodificadorDlg::~DecodificadorDlg(){
    delete ui;
}

void DecodificadorDlg::initialize_colorcombos(){
    QList<QColor> colors;
    QList<QColor> tolerancias4B;
    QList<QColor> tolerancias5B;
    QColor Negro = QColor(0,0,0);
    QColor Marron = QColor(152, 101, 54);
    QColor Rojo =QColor(255, 5, 5);
    QColor Naranja =QColor(255, 203, 47);
    QColor Amarillo =QColor(248, 255, 0);
    QColor Verde =QColor(0, 153, 1);
    QColor Azul = QColor(0, 0, 201);
    QColor Violeta = QColor(150, 0, 255);
    QColor Gris = QColor(192, 192, 192);
    QColor Blanco = QColor(255, 255, 255);
    QColor Dorado = QColor(234,190,63);
    QColor Plateado = QColor(227, 228, 229);
    colors.append(Negro);
    colors.append(Marron);
    colors.append(Rojo);
    colors.append(Naranja);
    colors.append(Amarillo);
    colors.append(Verde);
    colors.append(Azul);
    colors.append(Violeta);
    colors.append(Gris);
    colors.append(Blanco);
    tolerancias4B.append(Marron);
    tolerancias4B.append(Rojo);
    tolerancias4B.append(Dorado);
    tolerancias4B.append(Plateado);
    tolerancias5B.append(Marron);
    tolerancias5B.append(Rojo);
    tolerancias5B.append(Verde);
    tolerancias5B.append(Azul);
    tolerancias5B.append(Violeta);
    tolerancias5B.append(Gris);
    ui->kcolorcombo1->setColors(colors);
    ui->kcolorcombo2->setColors(colors);
    ui->kcolorcombo3->setColors(colors);
    if (ui->radioButton4B->isChecked())
        ui->kcolorcombo4->setColors(tolerancias4B);
    else
        ui->kcolorcombo4->setColors(colors);
    ui->kcolorcombo5->setColors(tolerancias5B);
}

void DecodificadorDlg::bands_changed() {
    using5bands = ui->radioButton5B->isChecked();
    ui->kcolorcombo5->setVisible(using5bands);
    initialize_colorcombos();
}