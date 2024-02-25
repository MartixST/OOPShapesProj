#pragma once

class ShapeBase //a purely abstract class base of all shapes
{
public:
	//ShapeBase() {};
	virtual double Square() const = 0;//pure virtual method for calculating the square of ​​a figure
	virtual double Perimetr() const = 0;//pure virtual method for calculating the perimetr of ​​a figure
	
};

