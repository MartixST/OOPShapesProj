
#include "Shape.h"

#pragma once
class Quadrate : public Shape
{
protected: 
	double width;

public:
	Quadrate(Point center, double width);
	
	double Square() const override;
	double Perimetr() const override;

	void Print() const override;
};

