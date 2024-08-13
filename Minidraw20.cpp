#include "Minidraw20.h"
#include<string>
using namespace std;

constexpr auto TOOLNUM = 7;;
Minidraw20::Minidraw20(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    InterfaceDesign();
    Init();
}
void Minidraw20::InterfaceDesign()
{
	dmeau = menuBar()->addMenu(tr("Figure"));
	dtoolbar = addToolBar(tr("Tool"));
	string toolName[TOOLNUM] =
	{ "Line","Rectangle","Ellipse",
	  "Polygon", "Freehand","Bezier Tool", "Undo" };
	string statusTips[TOOLNUM] =
	{ "Select line tool.", "Select rectangle tool.",
	 "Select ellipse tool.", "Select polygon tool.",
	 "Select freehand tool.","Select bezier tool", "Delect lastest firgue." };
	 
	for (int i = 0; i < TOOLNUM; i++)
	{
		actionVec.push_back(new QAction(
			QIcon(tr(
				(string("I:\\VS2017\\HW1\\MiniDraw\\MiniDraw\\image\\") + toolName[i]
					+ string(".bmp")).c_str())),
			tr(toolName[i].c_str()),
			this));

		dtoolbar->addAction(actionVec[i]);
		dmeau->addAction(actionVec[i]);


		actionVec[i]->setStatusTip(tr(statusTips[i].c_str()));
	}
}
void Minidraw20::Init()
{
	viewwidget = new ViewWidget();
	setCentralWidget(viewwidget);

	connect(actionVec[0], &QAction::triggered, viewwidget, &ViewWidget::set_figure_type_to_line);
	connect(actionVec[1], &QAction::triggered, viewwidget, &ViewWidget::set_figure_type_to_rectangle);
	connect(actionVec[2], &QAction::triggered, viewwidget, &ViewWidget::set_figure_type_to_ellipse);
	connect(actionVec[3], &QAction::triggered, viewwidget, &ViewWidget::set_figure_type_to_polygon);
	connect(actionVec[4], &QAction::triggered, viewwidget, &ViewWidget::set_figure_type_to_freehand);
	connect(actionVec[5], &QAction::triggered, viewwidget, &ViewWidget::set_figure_type_to_Bezier);
	connect(actionVec[6], &QAction::triggered, viewwidget, &ViewWidget::undo);

}
