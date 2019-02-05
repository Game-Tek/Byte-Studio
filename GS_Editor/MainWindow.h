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
	Ui::MainWindowClass UI;

	QDockWidget * ProjectExplorer;
	QDockWidget * Viewport;

	QString WindowName;

	void LoadProject();
	void SaveProject();
};
