//
// Created by javier on 05/12/20.
//

#ifndef PROYECTORESISTENCIAS_COD_H
#define PROYECTORESISTENCIAS_COD_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class CodificadorDlg; }
QT_END_NAMESPACE

class CodificadorDlg: public QDialog{
Q_OBJECT

public:
    CodificadorDlg(QWidget *parent = nullptr);
    ~CodificadorDlg();

private:
    Ui::CodificadorDlg *ui;
    bool using5bands = true;

    void bands_changed();
    int noDigitos(int);
    void Codificar();
    void ColoresB1(int);
    void ColoresB2(int);
    void ColoresB3(int);
    void Tolerancia4B();
    void Tolerancia5B();
};

#endif //PROYECTORESISTENCIAS_COD_H
