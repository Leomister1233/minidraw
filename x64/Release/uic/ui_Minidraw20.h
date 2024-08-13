/********************************************************************************
** Form generated from reading UI file 'Minidraw20.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIDRAW20_H
#define UI_MINIDRAW20_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Minidraw20Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Minidraw20Class)
    {
        if (Minidraw20Class->objectName().isEmpty())
            Minidraw20Class->setObjectName(QString::fromUtf8("Minidraw20Class"));
        Minidraw20Class->resize(600, 400);
        menuBar = new QMenuBar(Minidraw20Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Minidraw20Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Minidraw20Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Minidraw20Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Minidraw20Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Minidraw20Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Minidraw20Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Minidraw20Class->setStatusBar(statusBar);

        retranslateUi(Minidraw20Class);

        QMetaObject::connectSlotsByName(Minidraw20Class);
    } // setupUi

    void retranslateUi(QMainWindow *Minidraw20Class)
    {
        Minidraw20Class->setWindowTitle(QCoreApplication::translate("Minidraw20Class", "Minidraw20", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Minidraw20Class: public Ui_Minidraw20Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIDRAW20_H
