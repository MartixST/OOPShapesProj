
#include "Quadrate.h"

#pragma once
class Rectangle : public Quadrate
{
private:
	double height;
	
public:
	Rectangle(Point center, double width, double height);
	
	double Square() const override;
	double Perimetr() const override;

	void Print() const override;
};

