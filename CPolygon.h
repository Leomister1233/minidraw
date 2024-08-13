#pragma once
#include"CFigure.h"
#include<QPolygon>
class CPolygon :public CFigure {
public:
	CPolygon(const QPoint _star_point);

	void update(const QPoint _end_point);
	void update(int mode);
	void Draw(QPainter& paint);
private:
	QPolygon points;
	bool done;
};
