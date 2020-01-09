#pragma once

#include <QWidget>
#include <QLabel>
#include <QSpinBox>

class Vector3_Widget : public QWidget
{
	QLabel* xLabel,* yLabel,* zLabel;
	QDoubleSpinBox* xFloat,* yFloat,* zFloat;
	QHBoxLayout* layout = NULL;
	
public:
	explicit Vector3_Widget(QWidget* parent_ = nullptr) : QWidget(parent_), xLabel(new QLabel(this)), yLabel(new QLabel(this)), zLabel(new QLabel(this)),
	xFloat(new QDoubleSpinBox(this)), yFloat(new QDoubleSpinBox(this)), zFloat(new QDoubleSpinBox(this)),
	layout(new QHBoxLayout(this))
	{
		xLabel->setPixmap(QPixmap("Resources/x.png"));
		yLabel->setPixmap(QPixmap("Resources/y.png"));
		zLabel->setPixmap(QPixmap("Resources/z.png"));

		xFloat->setRange(std::numeric_limits<double>::lowest(), std::numeric_limits<double>::max());
		yFloat->setRange(std::numeric_limits<double>::lowest(), std::numeric_limits<double>::max());
		zFloat->setRange(std::numeric_limits<double>::lowest(), std::numeric_limits<double>::max());
		xFloat->setButtonSymbols(QAbstractSpinBox::PlusMinus);
		yFloat->setButtonSymbols(QAbstractSpinBox::PlusMinus);
		zFloat->setButtonSymbols(QAbstractSpinBox::PlusMinus);

		layout->addStretch();
		layout->addWidget(xLabel);
		layout->addWidget(xFloat);
		layout->addWidget(yLabel);
		layout->addWidget(yFloat);
		layout->addWidget(zLabel);
		layout->addWidget(zFloat);
		layout->addStretch();
		
		//xLabel->show();
		//xFloat->show();
		//yLabel->show();
		//yFloat->show();
		//zLabel->show();
		//zFloat->show();
	}
};
