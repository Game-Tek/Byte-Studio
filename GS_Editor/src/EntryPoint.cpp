#include "MainWindow.h"

#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
	QApplication Application(argc, argv);

	QCoreApplication::setOrganizationName("Game-Tek");
	QCoreApplication::setApplicationName("Game Studio Editor");
	QCoreApplication::setApplicationVersion(QT_VERSION_STR);

	QApplication::setFont(QFont("Akrobat SemiBold"));
	
	MainWindow MainWindow;
	MainWindow.setWindowIcon(QIcon("Resources/logo.png"));

	{
		// Load an application style
		QFile styleFile("style.qss");
		styleFile.open(QFile::ReadOnly);

		// Apply the loaded stylesheet
		QString style(styleFile.readAll());
		
		style.replace("BG_COLOR", "#0c1412");
		style.replace("TEXT_COLOR", "#ecf0f1");
		style.replace("GS_GREEN", "#2ecc71");
		style.replace("GS_RED", "#e74c3c");
		style.replace("FILL_COLOR", "#233b40");
		
		MainWindow.setStyleSheet(style);
	}
		
	MainWindow.showMaximized();

	return Application.exec();
}
