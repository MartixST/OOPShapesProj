
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
	this->x = 0;
	this->y = 0;
	cout << "Creating a new point" << endl;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
	cout << "Creating a new point" << endl;
	this->Print();
}

void Point::Print() const
{
	cout << "X = " << x << "  " << "Y = " << y << endl;
}
