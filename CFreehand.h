#pragma once
#include"CFigure.h"
#include<QpainterPath>
class CFreehand :public CFigure {
public:
	CFreehand(const QPoint _start_point);

	void Draw(QPainter& paint);

	void update(const QPoint _end_point);
private:
	QPainterPath path;
};
