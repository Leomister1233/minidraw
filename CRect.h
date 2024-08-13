#pragma once
#include"CFigure.h"
#include<iostream>
using namespace std;
class CRect :public CFigure {
public:
	CRect(const QPoint _star_point, QPoint _end_point);

	void Draw(QPainter& paint);
	void update(const QPoint end_point);

private:
	QPoint start_point;
	QPoint end_point;
};

