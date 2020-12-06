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
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_CodificadorDlg
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    KColorButton *kcolorbutton5;
    QPushButton *botonHistorial1;
    QPushButton *botonHistorial3;
    KColorButton *kcolorbutton1;
    KColorButton *kcolorbutton3;
    QPlainTextEdit *plainTextEdit;
    QPushButton *botonHistorial2;
    KColorButton *kcolorbutton2;
    KColorButton *kcolorbutton4;

    void setupUi(QDialog *CodificadorDlg)
    {
        if (CodificadorDlg->objectName().isEmpty())
            CodificadorDlg->setObjectName(QString::fromUtf8("CodificadorDlg"));
        CodificadorDlg->resize(400, 300);
        textBrowser = new QTextBrowser(CodificadorDlg);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(252, 36, 91, 31));
        textBrowser_2 = new QTextBrowser(CodificadorDlg);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(42, 36, 201, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        textBrowser_2->setFont(font);
        kcolorbutton5 = new KColorButton(CodificadorDlg);
        kcolorbutton5->setObjectName(QString::fromUtf8("kcolorbutton5"));
        kcolorbutton5->setGeometry(QRect(199, 140, 33, 31));
        botonHistorial1 = new QPushButton(CodificadorDlg);
        botonHistorial1->setObjectName(QString::fromUtf8("botonHistorial1"));
        botonHistorial1->setGeometry(QRect(252, 76, 91, 34));
        botonHistorial3 = new QPushButton(CodificadorDlg);
        botonHistorial3->setObjectName(QString::fromUtf8("botonHistorial3"));
        botonHistorial3->setGeometry(QRect(252, 136, 91, 34));
        kcolorbutton1 = new KColorButton(CodificadorDlg);
        kcolorbutton1->setObjectName(QString::fromUtf8("kcolorbutton1"));
        kcolorbutton1->setGeometry(QRect(43, 140, 33, 31));
        kcolorbutton3 = new KColorButton(CodificadorDlg);
        kcolorbutton3->setObjectName(QString::fromUtf8("kcolorbutton3"));
        kcolorbutton3->setGeometry(QRect(121, 140, 33, 31));
        plainTextEdit = new QPlainTextEdit(CodificadorDlg);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(52, 76, 171, 41));
        plainTextEdit->setAutoFillBackground(false);
        botonHistorial2 = new QPushButton(CodificadorDlg);
        botonHistorial2->setObjectName(QString::fromUtf8("botonHistorial2"));
        botonHistorial2->setGeometry(QRect(252, 106, 91, 34));
        kcolorbutton2 = new KColorButton(CodificadorDlg);
        kcolorbutton2->setObjectName(QString::fromUtf8("kcolorbutton2"));
        kcolorbutton2->setGeometry(QRect(82, 140, 33, 31));
        kcolorbutton4 = new KColorButton(CodificadorDlg);
        kcolorbutton4->setObjectName(QString::fromUtf8("kcolorbutton4"));
        kcolorbutton4->setGeometry(QRect(160, 140, 33, 31));

        retranslateUi(CodificadorDlg);

        QMetaObject::connectSlotsByName(CodificadorDlg);
    } // setupUi

    void retranslateUi(QDialog *CodificadorDlg)
    {
        CodificadorDlg->setWindowTitle(QApplication::translate("CodificadorDlg", "Dialog", nullptr));
        textBrowser_2->setPlaceholderText(QString());
        botonHistorial1->setText(QApplication::translate("CodificadorDlg", "PushButton", nullptr));
        botonHistorial3->setText(QApplication::translate("CodificadorDlg", "PushButton", nullptr));
        botonHistorial2->setText(QApplication::translate("CodificadorDlg", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodificadorDlg: public Ui_CodificadorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODIFICADOR_H
