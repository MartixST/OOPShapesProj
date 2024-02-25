
#include "Rectangle.h"
#include "Quadrate.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(Point center, double width, double height) : Quadrate{ center, width }, height(height)
{
	cout << "Creating a new rectangle with the center at:" << endl;
	center.Print();
	cout << "Width = " << width << endl;
	cout << "Height = " << height << endl;
}

double Rectangle::Square() const
{
	return height * width;
}

double Rectangle::Perimetr() const
{
	return 2 * (width+height);
}

void Rectangle::Print() const
{
	cout << "--------------------Rectangle-------------------" << endl;
	cout << "Coordinares of the center: ";
	center.Print();
	cout << "Width = " << width << "\tHeight = " << height << endl;
	cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;
}

