
#include "Shape.h"

#pragma once
class Circle : public Shape
{
protected:
	double radius;
	
public:
	Circle(Point center, double radius);
	
	double Square() const override;
	double Perimetr() const override;

	void Print() const override;
};

