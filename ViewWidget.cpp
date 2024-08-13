#include "ViewWidget.h"

ViewWidget::ViewWidget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	draw_status = false;
	current_figure = NULL;
	figure_type = KDefault;
}

ViewWidget::~ViewWidget()
{
	for (size_t i = 0; i < figureVec.size(); i++)
	{
		if (figureVec[i])
		{
			delete figureVec[i];
			figureVec[i] = NULL;
		}
	}


	if (current_figure != NULL)
	{
		delete current_figure;
	}

}


void ViewWidget::mousePressEvent(QMouseEvent* event)
{
	if (Qt::LeftButton == event->button())
	{
		draw_status = true;
		
		start_point =mid_point1= end_point = event->pos();

		switch (figure_type)
		{
		case KDefault:
			draw_status = false;
			break;
		case KLine:
			current_figure = new CLine(start_point, end_point);
			break;
		case KRectangle:
			current_figure = new CRect(start_point, end_point);
			break;
		case KEllipse:
			current_figure = new CEllipse(start_point, end_point);

			break;
		case KPolygon:
			if (current_figure == NULL)
			{
				current_figure = new CPolygon(start_point);

				setMouseTracking(true);
			}
			break;
		case KBezier:
				current_figure = new CBezier(start_point, mid_point1, mid_point2, end_point);
				break;
		case KFreehand:
			current_figure = new CFreehand(start_point);
			break;
		default:
			break;
		}
		
	}
}


void ViewWidget::mouseMoveEvent(QMouseEvent* event)
{
	if (draw_status)
	{
		end_point = event->pos();
		current_figure->update(end_point);
	}
}


void ViewWidget::mouseReleaseEvent(QMouseEvent* event)
{
	if (figure_type != KPolygon )
	{
		draw_status = false;
		if (current_figure != NULL)
		{
			figureVec.push_back(current_figure);
			current_figure = NULL;

		}
	}
	else if(figure_type == KPolygon )
	{
		if (Qt::LeftButton == event->button())
		{

			current_figure->update(1);
		}
		if (Qt::RightButton == event->button())
		{
			draw_status = false;
			current_figure->update(0);
			figureVec.push_back(current_figure);
			current_figure = NULL;
			setMouseTracking(false);
		}

	}
}


void ViewWidget::paintEvent(QPaintEvent*)
{
	QPainter painter;
	painter.begin(this);
	for (int i = 0; i < figureVec.size(); i++)
	{
		figureVec[i]->Draw(painter);
	}

	if (current_figure != NULL)
	{
		current_figure->Draw(painter);
	}
	painter.end();
	update();	
}

void ViewWidget::set_figure_type_to_line()
{
	if (draw_status == false)
	{
		figure_type = KLine;
	}
}

void ViewWidget::set_figure_type_to_rectangle()
{
	if (draw_status == false)
	{
		figure_type = KRectangle;
	}
}

void ViewWidget::set_figure_type_to_ellipse()
{
	if (draw_status == false)
	{
		figure_type = KEllipse;
	}
}

void ViewWidget::set_figure_type_to_polygon()
{
	if (draw_status == false)
	{
		figure_type = KPolygon;
	}
}

void ViewWidget::set_figure_type_to_freehand()
{
	if (draw_status == false)
	{
		figure_type = KFreehand;
	}
}

void ViewWidget::set_figure_type_to_Bezier() {
	if (draw_status == false) {
		figure_type = KBezier;
	}
}


void ViewWidget::undo()
{
	if (figureVec.size() > 0)
	{
		delete figureVec.back();
		figureVec.pop_back();
	}
}



