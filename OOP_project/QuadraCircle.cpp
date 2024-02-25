#include <iostream>

using namespace std;


#include "QuadraCircle.h"

QuadraCircle::QuadraCircle(Point center, double r, double width) : Circle {center, r}, Quadrate {center, width}
{
    cout << "Creating a new QuadraCircle with the center at:" << endl;
    center.Print();
}

double QuadraCircle::DifferenceSquare()
{
    return Quadrate::Square() - Circle::Square();
}

double QuadraCircle::Square()
{
    return Circle::Square() + Quadrate::Square();
}

double QuadraCircle::Perimetr()
{
    return Circle::Perimetr() + Quadrate::Perimetr();
}

void QuadraCircle::Print()
{
    cout << "--------------------QuadraCircle-------------------" << endl;
    cout << "Coordinares of the center: ";
    Circle:: center.Print();//уточняем какой центр печатать
    cout << "Radius: " << this->radius << endl;
    cout << "Perimetr = " << this->Perimetr() << "\tSquare = " << this->Square() << endl;
    cout << "Difference Square = " << this->DifferenceSquare() << endl;
}
