
#include "Shape.h"

#pragma once
class EquilateralTriangle : public Shape
{
protected: 
	double a;

public:
	EquilateralTriangle(Point center, double a);
	
	double Square() const override;
	double Perimetr() const override;

	void Print() const override;
};

