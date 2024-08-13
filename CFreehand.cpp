#include"CFreehand.h"
CFreehand::CFreehand(const QPoint  _start_point) {
	path.moveTo(_start_point);
}

void CFreehand::Draw(QPainter& paint) {
	paint.drawPath(path);
}

void CFreehand::update(const QPoint _end_point) {
	if (path.elementCount() == 0) {
		path.moveTo(_end_point);
	}
	else {
		path.lineTo(_end_point);
	}
}