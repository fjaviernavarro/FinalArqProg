//
// Created by javier on 05/12/20.
//

#include "Decodificador.h"
#include "ui_Decodificador.h"
#include "Observador.h"

using namespace std;

CObserver Obs;
shared_ptr<CObserver> Observador = make_shared<CObserver>(Obs);
CValor1 B1;
CValor2 B2;
CValor3 B3;
CValor4 B4;
CValor5 B5;

DecodificadorDlg::DecodificadorDlg(QWidget *parent):
    QDialog(parent), ui(new Ui::DecodificadorDlg)
    {
    ui->setupUi(this);
    initialize_colorcombos();
    connect(ui->radioButton4B, &QRadioButton::clicked, this, &DecodificadorDlg::bands_changed);
    connect(ui->radioButton5B, &QRadioButton::clicked, this, &DecodificadorDlg::bands_changed);
    connect(ui->kcolorcombo1, &KColorCombo::activated, this, &DecodificadorDlg::notify);
    connect(ui->kcolorcombo2, &KColorCombo::activated, this, &DecodificadorDlg::notify);
    connect(ui->kcolorcombo3, &KColorCombo::activated, this, &DecodificadorDlg::notify);
    connect(ui->kcolorcombo4, &KColorCombo::activated, this, &DecodificadorDlg::notify);
    connect(ui->kcolorcombo5, &KColorCombo::activated, this, &DecodificadorDlg::notify);
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
    QColor Rojo = QColor(255, 5, 5);
    QColor Naranja = QColor(255, 203, 47);
    QColor Amarillo = QColor(248, 255, 0);
    QColor Verde = QColor(0, 153, 1);
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
    B1.Subscribir(Observador);
    B2.Subscribir(Observador);
    B3.Subscribir(Observador);
    B4.Subscribir(Observador);
    B5.Subscribir(Observador);
    ui->kcolorcombo1->setColors(colors);
    ui->kcolorcombo2->setColors(colors);
    ui->kcolorcombo3->setColors(colors);
    if (ui->radioButton4B->isChecked())
        ui->kcolorcombo4->setColors(tolerancias4B);
    else
        ui->kcolorcombo4->setColors(colors);
    ui->kcolorcombo5->setColors(tolerancias5B);
    ui->kcolorcombo1->setColor(Negro);
    ui->kcolorcombo2->setColor(Negro);
    ui->kcolorcombo3->setColor(Negro);
    ui->kcolorcombo4->setColor(Negro);
    ui->kcolorcombo5->setColor(Negro);
}

void DecodificadorDlg::bands_changed() {
    using5bands = ui->radioButton5B->isChecked();
    ui->kcolorcombo5->setVisible(using5bands);
    initialize_colorcombos();
}

void DecodificadorDlg::notify() {
    B1.Notificar(ui->kcolorcombo1->color());
    B2.Notificar(ui->kcolorcombo2->color());
    B3.Notificar(ui->kcolorcombo3->color());
    B4.Notificar(ui->kcolorcombo4->color());
    B5.Notificar(ui->kcolorcombo5->color());
    if(ui->radioButton4B->isChecked())
        ui->TextoValor->setPlainText(Observador->Actualizar4());
    if(ui->radioButton5B->isChecked())
        ui->TextoValor->setPlainText(Observador->Actualizar5());
}