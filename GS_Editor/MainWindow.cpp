#include "MainWindow.h"

MainWindow::MainWindow(QWidget * Parent) : QMainWindow(Parent), WindowName("Game Studio Editor")
{
	UI.setupUi(this);

	//Setup Window name.
	setWindowTitle(WindowName);

	ProjectExplorer.show();
}
