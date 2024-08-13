#pragma once
#include<QPainter>
#include"CFigure.h"
class CLine :public CFigure {
public:
	CLine(const QPoint _start_point, QPoint _end_point);

	void Draw(QPainter& paint);

	void update(const QPoint _end_point);
private:
	QPoint start_point;
	QPoint end_point;
};

