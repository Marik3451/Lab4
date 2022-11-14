#pragma once
#include "Circle.h"
#include "Rectangle.h"
class RectangleInCircle :public Circle,public Rectangle
{
public:
	RectangleInCircle(int radius, int sideA, int sideB);
	ostream& operator<< (ostream& ostream);

};

