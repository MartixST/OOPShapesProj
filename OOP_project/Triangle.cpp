
#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(Point center, double a, double b, double c) : IsoscelesTriangle{ center, a, b }, c(c)
{
	cout << "Creating a new triangle with the center at:" << endl;
	center.Print();
	cout << "SideA = " << a << endl;
	cout << "SideB = " << b << endl;
	cout << "SideC = " << c << endl;
}

double Triangle::Square() const
{
	double p = Perimetr() / 2;
	return sqrt(p*(p-a)*(p-b)* (p - c));
}

double Triangle::Perimetr() const
{
	return a + b + c;
}

bool Triangle::IsTriangle() const
{
	return (a<b+c)&&(b<a+c)&&(c<a+b);
}

void Triangle::Print() const
{
	cout << "--------------------Triangle -------------------" << endl;
	cout << "Coordinares of the center: ";
	center.Print();
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	if (!IsTriangle())
	{
		cout << "Triangle does not exist" << endl;
		return;
	}
	cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;
	
}
