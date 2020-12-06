/********************************************************************************
** Form generated from reading UI file 'Codificador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODIFICADOR_H
#define UI_CODIFICADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_CodificadorDlg
{
public:
    QTextBrowser *textBrowser_2;
    KColorButton *kcolorbutton5;
    KColorButton *kcolorbutton1;
    KColorButton *kcolorbutton3;
    KColorButton *kcolorbutton2;
    KColorButton *kcolorbutton4;
    QRadioButton *radio4B;
    QRadioButton *radio5B;
    QComboBox *comboBox;
    QPushButton *botonCodificar;
    QSpinBox *valorResistencia;

    void setupUi(QDialog *CodificadorDlg)
    {
        if (CodificadorDlg->objectName().isEmpty())
            CodificadorDlg->setObjectName(QString::fromUtf8("CodificadorDlg"));
        CodificadorDlg->resize(400, 300);
        textBrowser_2 = new QTextBrowser(CodificadorDlg);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(50, 10, 261, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setBold(true);
        font.setWeight(75);
        textBrowser_2->setFont(font);
        textBrowser_2->setLayoutDirection(Qt::LeftToRight);
        kcolorbutton5 = new KColorButton(CodificadorDlg);
        kcolorbutton5->setObjectName(QString::fromUtf8("kcolorbutton5"));
        kcolorbutton5->setGeometry(QRect(239, 140, 33, 31));
        kcolorbutton1 = new KColorButton(CodificadorDlg);
        kcolorbutton1->setObjectName(QString::fromUtf8("kcolorbutton1"));
        kcolorbutton1->setGeometry(QRect(83, 140, 33, 31));
        kcolorbutton3 = new KColorButton(CodificadorDlg);
        kcolorbutton3->setObjectName(QString::fromUtf8("kcolorbutton3"));
        kcolorbutton3->setEnabled(true);
        kcolorbutton3->setGeometry(QRect(161, 140, 33, 31));
        kcolorbutton3->setAcceptDrops(true);
        kcolorbutton3->setColor(QColor(0, 0, 0));
        kcolorbutton2 = new KColorButton(CodificadorDlg);
        kcolorbutton2->setObjectName(QString::fromUtf8("kcolorbutton2"));
        kcolorbutton2->setGeometry(QRect(122, 140, 33, 31));
        kcolorbutton2->setCursor(QCursor(Qt::ArrowCursor));
        kcolorbutton4 = new KColorButton(CodificadorDlg);
        kcolorbutton4->setObjectName(QString::fromUtf8("kcolorbutton4"));
        kcolorbutton4->setGeometry(QRect(200, 140, 33, 31));
        radio4B = new QRadioButton(CodificadorDlg);
        radio4B->setObjectName(QString::fromUtf8("radio4B"));
        radio4B->setGeometry(QRect(50, 60, 105, 22));
        radio5B = new QRadioButton(CodificadorDlg);
        radio5B->setObjectName(QString::fromUtf8("radio5B"));
        radio5B->setGeometry(QRect(210, 60, 105, 22));
        comboBox = new QComboBox(CodificadorDlg);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 90, 71, 32));
        comboBox->setEditable(false);
        botonCodificar = new QPushButton(CodificadorDlg);
        botonCodificar->setObjectName(QString::fromUtf8("botonCodificar"));
        botonCodificar->setGeometry(QRect(270, 90, 41, 34));
        valorResistencia = new QSpinBox(CodificadorDlg);
        valorResistencia->setObjectName(QString::fromUtf8("valorResistencia"));
        valorResistencia->setGeometry(QRect(50, 90, 121, 32));
        valorResistencia->setMaximum(999999999);
        valorResistencia->setSingleStep(1000);

        retranslateUi(CodificadorDlg);

        QMetaObject::connectSlotsByName(CodificadorDlg);
    } // setupUi

    void retranslateUi(QDialog *CodificadorDlg)
    {
        CodificadorDlg->setWindowTitle(QApplication::translate("CodificadorDlg", "Dialog", nullptr));
        textBrowser_2->setPlaceholderText(QApplication::translate("CodificadorDlg", "CODIFICADOR DE RESISTENCIAS", nullptr));
        radio4B->setText(QApplication::translate("CodificadorDlg", "4 Bandas", nullptr));
        radio5B->setText(QApplication::translate("CodificadorDlg", "5 Bandas", nullptr));
        botonCodificar->setText(QApplication::translate("CodificadorDlg", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodificadorDlg: public Ui_CodificadorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODIFICADOR_H
