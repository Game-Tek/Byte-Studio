#include "MainWindow.h"

#include <QToolBar>

MainWindow::MainWindow(QWidget * Parent) : QMainWindow(Parent)
{
	//Setup Window name.
	setWindowTitle(QCoreApplication::applicationName());
	fileMenu = new QMenu("File", mainToolbar);

	QMenu* fileMenu = menuBar()->addMenu(tr("&File"));
	QAction* newAction = new QAction("Open", fileMenu);

	
	fileMenu->addAction(newAction);

	
	mainToolbar = addToolBar("Tools");
	mainToolbar->setIconSize(QSize(96, 96));
	mainToolbar->addAction(QIcon("Resources/cursor.png"), "Mouse");
	mainToolbar->addSeparator();
	mainToolbar->addAction(QIcon("Resources/move.png"), "Move");
	mainToolbar->addAction(QIcon("Resources/scale.png"), "Scale");
	mainToolbar->addAction(QIcon("Resources/rotate.png"), "Rotate");
	mainToolbar->addSeparator();
	mainToolbar->addAction(QIcon("Resources/play.png"), "Play");
	mainToolbar->addAction(QIcon("Resources/pause.png"), "Pause");
	mainToolbar->addAction(QIcon("Resources/stop.png"), "Stop");
	mainToolbar->addSeparator();
	mainToolbar->addAction(QIcon("Resources/package.png"), "Package");
	
	
	
	//addToolBar("File");
	
	//mainToolbar->addAction();
}
