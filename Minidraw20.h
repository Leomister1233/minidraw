#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Minidraw20.h"
#include<QMenu>
#include<QToolBar>
#include<QAction>
#include<QMenuBar>
#include<vector>
#include"ViewWidget.h"
class Minidraw20 : public QMainWindow
{
    Q_OBJECT

public:
    Minidraw20(QWidget *parent = Q_NULLPTR);

private:
    Ui::Minidraw20Class ui;
private:
    ViewWidget* viewwidget;
public:
    QMenu* dmeau;
    QMenu* meu;
    QToolBar* dtoolbar;
    vector<QAction*> actionVec;
    void InterfaceDesign();
    void Init();
};
