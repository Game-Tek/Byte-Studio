#include "ProjectExplorer.h"

ProjectExplorer::ProjectExplorer(QWidget * Parent) : QDockWidget(Parent)
{
	UI.setupUi(this);
}

ProjectExplorer::~ProjectExplorer()
{
}
