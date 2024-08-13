#include"CPolygon.h"
CPolygon::CPolygon(const QPoint _start_point) {
	points.push_back(_start_point);
	done = false;
}

void CPolygon::update(const QPoint _end_point) {
	if (points.size() > 0) {
		points.back() = _end_point;
	}
}

void CPolygon::update(int mode) {
	switch (mode) {
	case 0:
		done = true;
		break;
	case 1:
		points.push_back(points.back());
		break;
	default:
		break;
	}
}

void CPolygon::Draw(QPainter& paint) {
	if (done) {
		paint.drawPolygon(points);

	}
	else {
		paint.drawPolyline(points);
	}
}