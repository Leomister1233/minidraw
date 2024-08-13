#pragma once
#include"CFigure.h"
#include<QpainterPath>
#include<vector>
class CBezier :public CFigure {
public:
	CBezier(const QPoint _start_point, const QPoint _mid_point1, const QPoint _mid_point2, const QPoint _end_point);
	void Draw(QPainter& paint);
	void update(const QPoint _end_point);
private:
	QPoint start_point;
	QPoint end_point;
	QPoint mid_point1;
	QPoint mid_point2;
	//QPainterPath path;

};
