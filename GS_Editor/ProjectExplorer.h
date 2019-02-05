#pragma once

#include <QDockWidget>
#include "ui_ProjectExplorer.h"

class ProjectExplorer : public QDockWidget
{
	Q_OBJECT

public:
	ProjectExplorer(QWidget * Parent = Q_NULLPTR);
	~ProjectExplorer();

private:
	Ui::ProjectExplorer UI;
};
