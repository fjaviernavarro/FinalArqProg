//
// Created by javier on 05/12/20.
//

#include "Observador.h"
#include <QString>
#include <iostream>
#include <math.h>

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

void CObserver::setValor1(int valor){
    Valor1 = valor;
}
void CObserver::setValor2(int valor){
    Valor2 = valor;
}
void CObserver::setValor3(int valor){
    Valor3 = valor;
}
void CObserver::setValor4(int valor){
    Valor4 = valor;
}
void CObserver::setValor5(float valor){
    Valor5 = valor;
}

QString CObserver::Actualizar4(){
    unsigned suma = (Valor1+Valor2)*pow(10,Valor3);
    QString valor = QString::number(suma);
    QString cadena = "Valor de "+valor+" con tolerancia de "+QString::number(Valor4)+"%";
    return(cadena);
}

QString CObserver::Actualizar5(){
    unsigned suma = ((Valor1*10)+(Valor2*10)+Valor3)*pow(10,Valor4);
    QString valor = QString::number(suma);
    QString cadena = "Valor de "+valor+" con tolerancia de "+QString::number(Valor5)+"%";
    return(cadena);
}

void CSubject::Subscribir(shared_ptr<CObserver> Observador) {
    observador = Observador;
}

void CValor1::Notificar(QColor color){
    if (color == Negro)
        observador->setValor1(0);
    if (color == Marron)
        observador->setValor1(10);
    if (color == Rojo)
        observador->setValor1(20);
    if (color == Naranja)
        observador->setValor1(30);
    if (color == Amarillo)
        observador->setValor1(40);
    if (color == Verde)
        observador->setValor1(50);
    if (color == Azul)
        observador->setValor1(60);
    if (color == Violeta)
        observador->setValor1(70);
    if (color == Gris)
        observador->setValor1(80);
    if (color == Blanco)
        observador->setValor1(90);
}
void CValor2::Notificar(QColor color){
    if (color == Negro)
        observador->setValor2(0);
    if (color == Marron)
        observador->setValor2(1);
    if (color == Rojo)
        observador->setValor2(2);
    if (color == Naranja)
        observador->setValor2(3);
    if (color == Amarillo)
        observador->setValor2(4);
    if (color == Verde)
        observador->setValor2(5);
    if (color == Azul)
        observador->setValor2(6);
    if (color == Violeta)
        observador->setValor2(7);
    if (color == Gris)
        observador->setValor2(8);
    if (color == Blanco)
        observador->setValor2(9);
}
void CValor3::Notificar(QColor color){
        if (color == Negro)
            observador->setValor3(0);
        if (color == Marron)
            observador->setValor3(1);
        if (color == Rojo)
            observador->setValor3(2);
        if (color == Naranja)
            observador->setValor3(3);
        if (color == Amarillo)
            observador->setValor3(4);
        if (color == Verde)
            observador->setValor3(5);
        if (color == Azul)
            observador->setValor3(6);
        if (color == Violeta)
            observador->setValor3(7);
        if (color == Gris)
            observador->setValor3(8);
        if (color == Blanco)
            observador->setValor3(9);
}
void CValor4::Notificar(QColor color){
    if (color == Negro)
        observador->setValor4(0);
    if (color == Marron)
        observador->setValor4(1);
    if (color == Rojo)
        observador->setValor4(2);
    if (color == Naranja)
        observador->setValor4(3);
    if (color == Amarillo)
        observador->setValor4(4);
    if (color == Verde)
        observador->setValor4(5);
    if (color == Azul)
        observador->setValor4(6);
    if (color == Violeta)
        observador->setValor4(7);
    if (color == Dorado)
        observador->setValor4(5);
    if (color == Plateado)
        observador->setValor4(10);
}
void CValor5::Notificar(QColor color){
    if (color == Marron)
        observador->setValor5(1);
    if (color == Rojo)
        observador->setValor5(2);
    if (color == Verde)
        observador->setValor5(0.5);
    if (color == Azul)
        observador->setValor5(0.25);
    if (color == Violeta)
        observador->setValor5(0.10);
    if (color == Gris)
        observador->setValor5(0.05);
}