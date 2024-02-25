
#include "IsoscelesTriangle.h"

#pragma once
class Triangle : public IsoscelesTriangle
{
private: 
	double c;

public:
	Triangle(Point center, double a, double b, double c);
	
	double Square() const override;
	double Perimetr() const override;
	bool IsTriangle() const; //checks if a triangle exists with the given sides, by the triangle inequality

	void Print() const override;
};

