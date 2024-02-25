
#include "EquilateralTriangle.h"
#include <iostream>

using namespace std;

EquilateralTriangle::EquilateralTriangle(Point center, double a) : Shape{ center }, a(a)
{
	cout << "Creating a new Equilateral triangle with the center at:" << endl;
	center.Print();
	cout << "SideA = " << a << endl;
}

double EquilateralTriangle::Square() const
{
	return a*a *sqrt(3)/4;
}

double EquilateralTriangle::Perimetr() const
{
	return a * 3;
}

void EquilateralTriangle::Print() const
{
	cout << "--------------------Equilateral Triangle -------------------" << endl;
	cout << "Coordinares of the center: ";
	center.Print();
	cout << "Side: " << a << endl;
	cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;
}
