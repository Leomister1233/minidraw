#pragma once
#include <QWidget>
#include "ui_ViewWidget.h"
#include <QPoint>
#include <QPainter>
#include <qevent.h>
#include <qpainter.h>
#include "CFigure.h"
#include "CLine.h"
#include "CRect.h"
#include "CPolygon.h"
#include "CFreehand.h"
#include "CBezier.h"
#include "CEllipse.h"
#include <vector>
#include <QColor>
using namespace std;

/*enum QColortype {
	KRed = 0,
	KGreen = 1,
	KBlue=2,
	KYellow=3,

};*/
enum CFigureType
{
	KDefault = 0,
	KLine = 1,
	KRectangle = 2,
	KEllipse = 3,
	KPolygon = 4,
	KFreehand = 5,
	KBezier = 6,
};

class ViewWidget : public QWidget
{
	Q_OBJECT



public:
	ViewWidget(QWidget* parent = Q_NULLPTR);
	~ViewWidget();



public:
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void mouseReleaseEvent(QMouseEvent* event);
	

public:

	void paintEvent(QPaintEvent*);

public:
	void set_figure_type_to_line();
	void set_figure_type_to_rectangle();
	void set_figure_type_to_ellipse();
	void set_figure_type_to_polygon();
	void set_figure_type_to_freehand();
	void set_figure_type_to_Bezier();
	void set_figure_type_to_red();
	void set_figure_type_to_green();
	void set_figure_type_to_blue();
	void set_figure_type_to_yellow();
	void undo();

private:
	Ui::Form ui;

private:
	bool draw_status;
	QPoint start_point;
	QPoint end_point;
	QPoint mid_point1;
	QPoint mid_point2;
	CFigureType figure_type;
	CFigure* current_figure;
	//QColortype cor_type;
	vector<CFigure* > figureVec;
	vector<QPoint> points;
     


	//QVector<QPoint> bezier_points;

};

