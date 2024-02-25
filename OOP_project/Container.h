
#include <vector>
#include "Shape.h"

using namespace std;

#pragma once
class Container //storage class for all shapes
{
private:
	vector <Shape*> figures;
	int size;
public:
	Container();
	~Container();

	void Add(Shape* figure);
	void MultiAdd(int n);//adds a specified number of objects of various types to the container
	void Print();
};

