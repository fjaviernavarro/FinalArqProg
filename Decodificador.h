//
// Created by javier on 05/12/20.
//

#ifndef PROYECTORESISTENCIAS_DECOD_H
#define PROYECTORESISTENCIAS_DECOD_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class DecodificadorDlg; }
QT_END_NAMESPACE

class DecodificadorDlg: public QDialog{
    Q_OBJECT

public:
    DecodificadorDlg(QWidget *parent = nullptr);
    ~DecodificadorDlg();

private:
    Ui::DecodificadorDlg *ui;
    bool using5bands = true;

    void initialize_colorcombos();
    void bands_changed();

};

#endif //PROYECTORESISTENCIAS_DECOD_H
