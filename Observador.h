//
// Created by javier on 05/12/20.
//

#ifndef DECODIFICADORRESISTENCIAS_OBSERVADOR_H
#define DECODIFICADORRESISTENCIAS_OBSERVADOR_H

#include <vector>
#include <memory>
#include <KColorCombo>
#include <QTextBrowser>

using namespace std;

class CObserver{
private:
    int Valor1 = 0;
    int Valor2 = 0;
    int Valor3 = 0;
    int Valor4 = 0;
    float Valor5 = 0;
public:
    virtual ~CObserver() { };
    void setValor1(int);
    void setValor2(int);
    void setValor3(int);
    void setValor4(int);
    void setValor5(float);
    QString Actualizar4();
    QString Actualizar5();
};

class CSubject:public QColor{
protected:
    shared_ptr<CObserver> observador;
public:
    //CSubject();
    virtual ~CSubject() = default;
    void Subscribir(shared_ptr<CObserver> observador);
    virtual void Notificar(QColor) = 0;
};

class CValor1: public CSubject{
public:
    void Notificar(QColor color);
};

class CValor2:public CSubject{
public:
    void Notificar(QColor color);
};

class CValor3:public CSubject{
public:
    void Notificar(QColor color);
};

class CValor4:public CSubject{
public:
    void Notificar(QColor color);
};

class CValor5:public CSubject{
public:
    void Notificar(QColor color);
};

#endif //DECODIFICADORRESISTENCIAS_OBSERVADOR_H
