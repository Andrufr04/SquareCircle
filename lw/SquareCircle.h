#pragma once
#include "Square.h"
#include "Circle.h"

class SquareCircle: public Square, public Circle
{
public:
	SquareCircle(double a1, double d1);
	void Test();
};

