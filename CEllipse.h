#pragma once
#include"CFigure.h"
class CEllipse :public CFigure {
public:
	CEllipse(const QPoint _start_point, const QPoint _end_point);
	void Draw(QPainter& paint);
	void update(const QPoint _end_point);
private:
	QPoint start_point;
	QPoint end_point;
};

