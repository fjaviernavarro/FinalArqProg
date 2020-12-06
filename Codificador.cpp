//
// Created by javier on 05/12/20.
//

#include "Codificador.h"
#include "ui_Codificador.h"
#include <QColor>
#include <iostream>
#include <math.h>

CodificadorDlg::CodificadorDlg(QWidget *parent):
        QDialog(parent), ui(new Ui::CodificadorDlg)
{
    ui->setupUi(this);
    connect(ui->botonCodificar, &QPushButton::clicked, this, &CodificadorDlg::Codificar);
    connect(ui->radio4B, &QRadioButton::clicked, this, &CodificadorDlg::bands_changed);
    connect(ui->radio5B, &QRadioButton::clicked, this, &CodificadorDlg::bands_changed);
}

CodificadorDlg::~CodificadorDlg(){
    delete ui;
}

void CodificadorDlg::bands_changed() {
    using5bands = ui->radio5B->isChecked();
    ui->kcolorbutton5->setVisible(using5bands);
}

void CodificadorDlg::Codificar(){
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
    int resistencia = ui->valorResistencia->value();
    if (ui->radio4B->isChecked()) {
        Tolerancia4B();
        if (resistencia < 10)
            ui->kcolorbutton3->setColor(Negro);
        if (resistencia < 100 && resistencia > 10)
            ui->kcolorbutton3->setColor(Negro);
        if (resistencia < 1000 && resistencia > 100)
            ui->kcolorbutton3->setColor(QColor(Marron));
        if (resistencia < 10000 && resistencia > 1000)
            ui->kcolorbutton3->setColor(QColor(Rojo));
        if (resistencia < 100000 && resistencia > 10000)
            ui->kcolorbutton3->setColor(QColor(Naranja));
        if (resistencia < 1000000 && resistencia > 100000)
            ui->kcolorbutton3->setColor(Amarillo);
        if (resistencia < 10000000 && resistencia > 1000000)
            ui->kcolorbutton3->setColor(Verde);
        if (resistencia < 100000000 && resistencia > 10000000)
            ui->kcolorbutton3->setColor(Azul);
        if (resistencia < 1000000000 && resistencia > 100000000)
            ui->kcolorbutton3->setColor(Violeta);
        if (resistencia < 10000000000 && resistencia > 1000000000)
            ui->kcolorbutton3->setColor(Gris);
        if (resistencia < 100000000000 && resistencia > 10000000000)
            ui->kcolorbutton3->setColor(Blanco);
    }
    int a = resistencia / pow(10, (noDigitos(resistencia)-1));
    int b1 = pow(10, (noDigitos(resistencia)-1));
    int b = (resistencia % b1)/pow(10, (noDigitos(resistencia)-2));
    int c1 = (pow(10,noDigitos(resistencia)-2));
    int c = resistencia % c1;
    ColoresB1(a);
    ColoresB2(b);
    if(ui->radio5B->isChecked()) {
        ColoresB3(c);
        Tolerancia5B();
        if (resistencia < 10)
            ui->kcolorbutton4->setColor(Negro);
        if (resistencia < 100 && resistencia > 10)
            ui->kcolorbutton4->setColor(Negro);
        if (resistencia < 1000 && resistencia > 100)
            ui->kcolorbutton4->setColor(QColor(Marron));
        if (resistencia < 10000 && resistencia > 1000)
            ui->kcolorbutton4->setColor(QColor(Rojo));
        if (resistencia < 100000 && resistencia > 10000)
            ui->kcolorbutton4->setColor(QColor(Naranja));
        if (resistencia < 1000000 && resistencia > 100000)
            ui->kcolorbutton4->setColor(Amarillo);
        if (resistencia < 10000000 && resistencia > 1000000)
            ui->kcolorbutton4->setColor(Verde);
        if (resistencia < 100000000 && resistencia > 10000000)
            ui->kcolorbutton4->setColor(Azul);
        if (resistencia < 1000000000 && resistencia > 100000000)
            ui->kcolorbutton4->setColor(Violeta);
        if (resistencia < 10000000000 && resistencia > 1000000000)
            ui->kcolorbutton4->setColor(Gris);
        if (resistencia < 100000000000 && resistencia > 10000000000)
            ui->kcolorbutton4->setColor(Blanco);
    }
   // std::cout << "Valor de a: " << a << "Valor de b: " << b << std::endl;
}

int CodificadorDlg::noDigitos(int resistencia){
    if (resistencia < 10) {
        int size = 1;
        return size;
    }
    if (resistencia < 100 && resistencia > 10) {
        int size = 2;
        return size;
    }
    if (resistencia < 1000 && resistencia > 100) {
        int size = 3;
        return size;
    }
    if (resistencia < 10000 && resistencia > 1000) {
        int size = 4;
        return size;
    }
    if (resistencia < 100000 && resistencia > 10000) {
        int size = 5;
        return size;
    }
    if (resistencia < 1000000 && resistencia > 100000) {
        int size = 6;
        return size;
    }
    if (resistencia < 10000000 && resistencia > 1000000) {
        int size = 7;
        return size;
    }
    if (resistencia < 100000000 && resistencia > 10000000) {
        int size = 8;
        return size;
    }
    if (resistencia < 1000000000 && resistencia > 100000000) {
        int size = 9;
        return size;
    }
    if (resistencia < 10000000000 && resistencia > 1000000000) {
        int size = 10;
        return size;
    }
    if (resistencia < 100000000000 && resistencia > 10000000000) {
        int size = 11;
        return size;
    }
}
void CodificadorDlg::ColoresB1(int a){
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
    if (a == 0)
        ui->kcolorbutton1->setColor(Negro);
    if (a == 1)
        ui->kcolorbutton1->setColor(QColor(Marron));
    if (a == 2)
        ui->kcolorbutton1->setColor(QColor(Rojo));
    if (a == 3)
        ui->kcolorbutton1->setColor(QColor(Naranja));
    if (a == 4)
        ui->kcolorbutton1->setColor(QColor(Amarillo));
    if (a == 5)
        ui->kcolorbutton1->setColor(QColor(Verde));
    if (a == 6)
        ui->kcolorbutton1->setColor(QColor(Azul));
    if (a == 7)
        ui->kcolorbutton1->setColor(QColor(Violeta));
    if (a == 8)
        ui->kcolorbutton1->setColor(QColor(Gris));
    if (a == 9)
        ui->kcolorbutton1->setColor(QColor(Blanco));
}
void CodificadorDlg::ColoresB2(int a){
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
    if (a == 0)
        ui->kcolorbutton2->setColor(Negro);
    if (a == 1)
        ui->kcolorbutton2->setColor(QColor(Marron));
    if (a == 2)
        ui->kcolorbutton2->setColor(QColor(Rojo));
    if (a == 3)
        ui->kcolorbutton2->setColor(QColor(Naranja));
    if (a == 4)
        ui->kcolorbutton2->setColor(QColor(Amarillo));
    if (a == 5)
        ui->kcolorbutton2->setColor(QColor(Verde));
    if (a == 6)
        ui->kcolorbutton2->setColor(QColor(Azul));
    if (a == 7)
        ui->kcolorbutton2->setColor(QColor(Violeta));
    if (a == 8)
        ui->kcolorbutton2->setColor(QColor(Gris));
    if (a == 9)
        ui->kcolorbutton2->setColor(QColor(Blanco));
}
void CodificadorDlg::ColoresB3(int a){
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
    if (a == 0)
        ui->kcolorbutton3->setColor(Negro);
    if (a == 1)
        ui->kcolorbutton3->setColor(QColor(Marron));
    if (a == 2)
        ui->kcolorbutton3->setColor(QColor(Rojo));
    if (a == 3)
        ui->kcolorbutton3->setColor(QColor(Naranja));
    if (a == 4)
        ui->kcolorbutton3->setColor(QColor(Amarillo));
    if (a == 5)
        ui->kcolorbutton3->setColor(QColor(Verde));
    if (a == 6)
        ui->kcolorbutton3->setColor(QColor(Azul));
    if (a == 7)
        ui->kcolorbutton3->setColor(QColor(Violeta));
    if (a == 8)
        ui->kcolorbutton3->setColor(QColor(Gris));
    if (a == 9)
        ui->kcolorbutton3->setColor(QColor(Blanco));
}
void CodificadorDlg::Tolerancia4B(){
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
    //ui->comboBox->clear();
    ui->comboBox->addItem("1%");
    ui->comboBox->addItem("2%");
    ui->comboBox->addItem("5%");
    ui->comboBox->addItem("10%");
    if(ui->comboBox->currentText() == "1%"){
        ui->kcolorbutton4->setColor(Marron);
    }
    if(ui->comboBox->currentText() == "2%"){
        ui->kcolorbutton4->setColor(Rojo);
    }
    if(ui->comboBox->currentText() == "5%"){
        ui->kcolorbutton4->setColor(Dorado);
    }
    if(ui->comboBox->currentText() == "10%"){
        ui->kcolorbutton4->setColor(Plateado);
    }
}
void CodificadorDlg::Tolerancia5B(){
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
    //ui->comboBox->clear();
    ui->comboBox->addItem("1%");
    ui->comboBox->addItem("2%");
    ui->comboBox->addItem("0.5%");
    ui->comboBox->addItem("0.25%");
    ui->comboBox->addItem("0.10%");
    ui->comboBox->addItem("0.05%");
    if(ui->comboBox->currentText() == "1%"){
        ui->kcolorbutton5->setColor(Marron);
    }
    if(ui->comboBox->currentText() == "2%"){
        ui->kcolorbutton5->setColor(Rojo);
    }
    if(ui->comboBox->currentText() == "0.5%"){
        ui->kcolorbutton5->setColor(Verde);
    }
    if(ui->comboBox->currentText() == "0.25%"){
        ui->kcolorbutton5->setColor(Azul);
    }
    if(ui->comboBox->currentText() == "0.10%"){
        ui->kcolorbutton5->setColor(Violeta);
    }
    if(ui->comboBox->currentText() == "0.05%"){
        ui->kcolorbutton5->setColor(Gris);
    }
}