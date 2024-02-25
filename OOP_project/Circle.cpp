#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(Point center, double radius) : Shape{center}, radius(radius) //��� ��������������� ������� Circle ���������� ����������� ��� ������ Shape
{
	//this->radius = radius ������������ ������ �������
	cout << "Creating a new circle with the center at:" << endl;
	center.Print();
	cout << "Radius = " << radius << endl;

}

double Circle::Square() const
{
	return 3.14 * radius * radius;
}

double Circle::Perimetr() const
{
	return 2 * 3.14 *radius;
}

void Circle::Print() const
{
	cout << "--------------------Circle-------------------" << endl;
	cout << "Coordinares of the center: ";
	center.Print();
	cout << "Radius: " << this->radius << endl;
	cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;

}
