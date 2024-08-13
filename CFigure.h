#pragma once
#ifndef CFIGURE_H
#define CFIGURE_H
#include<qpoint.h>
#include<QPoint>
#include<QPainter>
#include<QPainterPath>

class CFigure {
public:
	CFigure() {};

	virtual void Draw(QPainter& paint) = 0;

	virtual void update(const QPoint end_point) {};

	virtual void update(int mode) {};
};

#endif 
