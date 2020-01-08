#pragma once

#include <QDockWidget>

class ProjectExplorer : public QDockWidget
{
	Q_OBJECT

public:
	ProjectExplorer(QWidget * Parent = Q_NULLPTR);
	~ProjectExplorer();

};
