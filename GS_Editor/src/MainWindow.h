#pragma once

#include <QtWidgets/QMainWindow>
#include "ProjectExplorer.h"



#include "ui_MainWindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget * Parent = Q_NULLPTR);

private:
	QDockWidget * ProjectExplorer;
	QDockWidget * Viewport;

	QToolBar* mainToolbar = nullptr;
	QMenu* fileMenu = nullptr;

	void LoadProject();
	void SaveProject();
};
