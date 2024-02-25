#include "Container.h"
#include "ShapeBase.h"
#include "Point.h"
#include "Circle.h"
#include "Quadrate.h"
#include "Rectangle.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Triangle.h"
#include "QuadraCircle.h"
#include <iostream>

using namespace std;

Container::Container()
{
	this->size = 0;
    cout << "Creating a new Container for figures of different types" << endl;
}

Container::~Container()
{
    for (Shape* shape : figures)
    {
        delete shape;
        shape = nullptr;
    }
}

void Container::Add(Shape* figure)
{
	this->figures.push_back(figure);
	size++;
}

void Container::MultiAdd(int n) //adds a specified number of objects of various types to the container
{

    Shape* shape;
    for (size_t i = 0; i < n; i++)
    {
        Point p = { double(rand() % 10), double(rand() % 10) };
        double r = rand() % 10;
        shape = new Circle(p, r);
        Add(shape);
        double width = rand() % 10;
        shape = new Quadrate(p, width);
        Add(shape);
        double height = rand() % 10;
        shape = new Rectangle(p, width, height);
        Add(shape);
        double a = rand() % 10;
        shape = new EquilateralTriangle(p, a);
        Add(shape);
        double b = rand() % 10;
        shape = new IsoscelesTriangle(p, a, b);
        Add(shape);
        double c = rand() % 10;
        shape = new Triangle(p, a, b, c);
        Add(shape);


    }
}

void Container::Print()
{
	cout << "------------------------------" << endl;
    cout << "Container size = " << size << endl;
	cout << "The list of the figures in container: " << endl;
    cout << endl;
	for (Shape* figure : figures) //полиморфное присваивание
	{
		figure->Print();
	}
}
