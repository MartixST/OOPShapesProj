
#include "EquilateralTriangle.h"

#pragma once
class IsoscelesTriangle : public EquilateralTriangle
{
protected: 
	double b;

public:
	IsoscelesTriangle(Point center, double a, double b);
	
	double Square() const override;
	double Perimetr() const override;
	bool IsTriangle() const;

	void Print() const override;
};

