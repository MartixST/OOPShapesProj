
#include "Quadrate.h"
#include <iostream>

using namespace std;

Quadrate::Quadrate(Point center, double width) : Shape{ center }, width(width)
{
	cout << "Creating a new quadrate with the center at:" << endl;
	center.Print();
	cout << "Width = " << width << endl;
}

double Quadrate::Square() const
{
	return width * width;
}

double Quadrate::Perimetr() const
{
	return width * 4;
}

void Quadrate::Print() const
{
	cout << "--------------------Quadrate-------------------" << endl;
	cout << "Coordinares of the center: ";
	center.Print();
	cout << "Side: " << width << endl;
	cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;
}
