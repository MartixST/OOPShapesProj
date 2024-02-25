#include "IsoscelesTriangle.h"
#include <iostream>

using namespace std;

IsoscelesTriangle::IsoscelesTriangle(Point center, double a, double b) : EquilateralTriangle{ center, a }, b(b)
{
	cout << "Creating a new Isosceles triangle with the center at:" << endl;
	center.Print();
	cout << "SideA = " << a << endl;
	cout << "SideB = " << b << endl;
}

double IsoscelesTriangle::Square() const
{
	return a * sqrt(b * b - a * a / 4) / 2;
}

double IsoscelesTriangle::Perimetr() const
{
	return b*2 + a;
}

bool IsoscelesTriangle::IsTriangle() const
{
	return (a<2*b)&&(b<a+b);
}

void IsoscelesTriangle::Print() const
{
	cout << "--------------------Isosceles Triangle -------------------" << endl;
	cout << "Coordinares of the center: ";
	center.Print();
	cout << "Base: " << a << "\tSide: " << b << endl;
	if (!IsTriangle())
	{
		cout << "Triangle does not exist" << endl;
		return;
	}
	cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;
}
