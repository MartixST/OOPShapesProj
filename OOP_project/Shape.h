

#include "ShapeBase.h"
#include "Point.h"

#pragma once

//figure center class for all shapes
class Shape : public ShapeBase
{
private:
protected:
	Point center;//figure center
public:
	Shape(Point center);

	virtual void Print() const = 0;
};

