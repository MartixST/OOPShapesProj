
#include "Circle.h"
#include "Quadrate.h"


#pragma once
class QuadraCircle : Circle, Quadrate //class with dual inheritance unusual figure
{
public:
	QuadraCircle(Point center, double r, double width);

	double DifferenceSquare();
	double Square();
	double Perimetr();
	void Print();
};

