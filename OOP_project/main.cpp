#include <iostream>
#include "ShapeBase.h"
#include "Point.h"
#include "Circle.h"
#include "Quadrate.h"
#include "Rectangle.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Triangle.h"
#include "Container.h"
#include "QuadraCircle.h"

using namespace std;

int main()
{
    //ShapeBase sb; impossible to create object of abstract class
    Point p (3, 5);
    p.Print();

    Circle* circle = new Circle(p, 10);
    circle->Print();

    Quadrate* quadrate = new Quadrate(p, 8);
    quadrate->Print();

    p = { 0, 2 };
    Rectangle* rectangle = new Rectangle(p, 8, 16);
    rectangle->Print();

    EquilateralTriangle* equilateralTriangle = new EquilateralTriangle(p, 5);
    equilateralTriangle->Print();

    IsoscelesTriangle* isoscelesTriangle = new IsoscelesTriangle(p, 5, 7);
    isoscelesTriangle->Print();

    Triangle* triangle = new Triangle(p, 5, 1, 2);
    triangle->Print();

    QuadraCircle* quadraCircle = new QuadraCircle(p, 4, 8);
    quadraCircle->Print();

    Container container;//a polymorphic data structure
    container.Add(circle);
    container.Add(quadrate);
    container.Add(rectangle);
    container.Add(equilateralTriangle);
    container.Add(isoscelesTriangle);
    container.Add(triangle);

    container.Print();

    cout << endl;
    cout << endl;
    cout << endl;
    container.MultiAdd(10); //creation of 60 objects
    container.Print();
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Here will be printed the results of polimorph setting: " << endl;
    Shape* shape; 
    shape = new Triangle(p, 3, 4, 5); //polymorphic assignment
    shape->Print(); //polymorphic assignment result

    delete shape;
    shape = new Quadrate(p, 6);
    shape->Print(); 

    delete shape;
    shape = new Rectangle(p, 4, 6);
    shape->Print(); 

    delete shape; 

    return 0;
}
