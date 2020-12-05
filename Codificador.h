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
};

#endif //PROYECTORESISTENCIAS_COD_H
