/********************************************************************************
** Form generated from reading UI file 'Decodificador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECODIFICADOR_H
#define UI_DECODIFICADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include "kcolorcombo.h"

QT_BEGIN_NAMESPACE

class Ui_DecodificadorDlg
{
public:
    KColorCombo *kcolorcombo4;
    KColorCombo *kcolorcombo5;
    KColorCombo *kcolorcombo1;
    KColorCombo *kcolorcombo2;
    QRadioButton *radioButton4B;
    QRadioButton *radioButton5B;
    KColorCombo *kcolorcombo3;
    QTextBrowser *TextoPorcentaje;
    QTextBrowser *TextoValor;

    void setupUi(QDialog *DecodificadorDlg)
    {
        if (DecodificadorDlg->objectName().isEmpty())
            DecodificadorDlg->setObjectName(QString::fromUtf8("DecodificadorDlg"));
        DecodificadorDlg->resize(400, 300);
        kcolorcombo4 = new KColorCombo(DecodificadorDlg);
        kcolorcombo4->setObjectName(QString::fromUtf8("kcolorcombo4"));
        kcolorcombo4->setGeometry(QRect(233, 60, 57, 32));
        kcolorcombo5 = new KColorCombo(DecodificadorDlg);
        kcolorcombo5->setObjectName(QString::fromUtf8("kcolorcombo5"));
        kcolorcombo5->setGeometry(QRect(296, 60, 57, 32));
        kcolorcombo1 = new KColorCombo(DecodificadorDlg);
        kcolorcombo1->setObjectName(QString::fromUtf8("kcolorcombo1"));
        kcolorcombo1->setGeometry(QRect(44, 60, 57, 32));
        kcolorcombo2 = new KColorCombo(DecodificadorDlg);
        kcolorcombo2->setObjectName(QString::fromUtf8("kcolorcombo2"));
        kcolorcombo2->setGeometry(QRect(107, 60, 57, 32));
        radioButton4B = new QRadioButton(DecodificadorDlg);
        radioButton4B->setObjectName(QString::fromUtf8("radioButton4B"));
        radioButton4B->setGeometry(QRect(93, 16, 105, 22));
        radioButton5B = new QRadioButton(DecodificadorDlg);
        radioButton5B->setObjectName(QString::fromUtf8("radioButton5B"));
        radioButton5B->setGeometry(QRect(223, 16, 105, 22));
        kcolorcombo3 = new KColorCombo(DecodificadorDlg);
        kcolorcombo3->setObjectName(QString::fromUtf8("kcolorcombo3"));
        kcolorcombo3->setGeometry(QRect(170, 60, 57, 32));
        TextoPorcentaje = new QTextBrowser(DecodificadorDlg);
        TextoPorcentaje->setObjectName(QString::fromUtf8("TextoPorcentaje"));
        TextoPorcentaje->setGeometry(QRect(240, 140, 62, 62));
        TextoValor = new QTextBrowser(DecodificadorDlg);
        TextoValor->setObjectName(QString::fromUtf8("TextoValor"));
        TextoValor->setGeometry(QRect(91, 140, 141, 62));

        retranslateUi(DecodificadorDlg);

        QMetaObject::connectSlotsByName(DecodificadorDlg);
    } // setupUi

    void retranslateUi(QDialog *DecodificadorDlg)
    {
        DecodificadorDlg->setWindowTitle(QApplication::translate("DecodificadorDlg", "Dialog", nullptr));
        radioButton4B->setText(QApplication::translate("DecodificadorDlg", "4 Bandas", nullptr));
        radioButton5B->setText(QApplication::translate("DecodificadorDlg", "5 Bandas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecodificadorDlg: public Ui_DecodificadorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECODIFICADOR_H
