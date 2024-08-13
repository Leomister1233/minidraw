#include"CBezier.h"
CBezier::CBezier(const QPoint _start_point,const QPoint _mid_point1, const QPoint _mid_point2, const QPoint _end_point) {
	start_point.setX(_start_point.x());
	start_point.setY(_start_point.y());

	mid_point1.setX(_mid_point1.x());
	mid_point1.setY(_mid_point1.y());

	mid_point2.setX(_mid_point2.x());
	mid_point2.setY(_mid_point2.y());

	end_point.setX(_end_point.x());
	end_point.setY(_end_point.y());
}

void  CBezier::Draw(QPainter& paint) {
	double x1 = start_point.rx();
	double y2 = start_point.ry();
	for (double t = 0.0; t <= 1.0; t = t + 0.01) {
		double x = pow((1 - t), 3) * start_point.rx() + 3 * t * (1 - t) * (1 - t) * mid_point1.rx() + 3 * t * t * (1 - t) * mid_point2.rx() + pow(t, 3) * end_point.rx();
		double y = pow((1 - t), 3) * start_point.ry() + 3 * t * (1 - t) * (1 - t) * mid_point1.ry() + 3 * t * t * (1 - t) * mid_point2.ry() + pow(t, 3) * end_point.ry();
		paint.drawLine(x1,y2,x,y);
		x1 = x;
		y2 = y;
	}
	
}

void CBezier::update(const QPoint _end_point) {
	end_point.setX(_end_point.x());
	end_point.setY(_end_point.y());
}
