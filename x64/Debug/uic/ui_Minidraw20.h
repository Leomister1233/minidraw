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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Minidraw20Class
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionLife;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Minidraw20Class)
    {
        if (Minidraw20Class->objectName().isEmpty())
            Minidraw20Class->setObjectName(QString::fromUtf8("Minidraw20Class"));
        Minidraw20Class->resize(604, 407);
        actionOpen = new QAction(Minidraw20Class);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Minidraw20Class);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(Minidraw20Class);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionCopy = new QAction(Minidraw20Class);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionLife = new QAction(Minidraw20Class);
        actionLife->setObjectName(QString::fromUtf8("actionLife"));
        centralWidget = new QWidget(Minidraw20Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Minidraw20Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Minidraw20Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 22));
        Minidraw20Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Minidraw20Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Minidraw20Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(Minidraw20Class);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Minidraw20Class->addToolBar(Qt::TopToolBarArea, toolBar);

        mainToolBar->addSeparator();

        retranslateUi(Minidraw20Class);

        QMetaObject::connectSlotsByName(Minidraw20Class);
    } // setupUi

    void retranslateUi(QMainWindow *Minidraw20Class)
    {
        Minidraw20Class->setWindowTitle(QCoreApplication::translate("Minidraw20Class", "Minidraw20", nullptr));
        actionOpen->setText(QCoreApplication::translate("Minidraw20Class", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Minidraw20Class", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("Minidraw20Class", "Save as ", nullptr));
        actionCopy->setText(QCoreApplication::translate("Minidraw20Class", "Copy", nullptr));
        actionLife->setText(QCoreApplication::translate("Minidraw20Class", "Life", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Minidraw20Class", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Minidraw20Class: public Ui_Minidraw20Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIDRAW20_H
