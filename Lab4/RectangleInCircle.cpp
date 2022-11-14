#include "RectangleInCircle.h"

RectangleInCircle::RectangleInCircle(int radius, int sideA, int sideB) : Circle(radius),Rectangle(sideA,sideB)
{
	
}


ostream& RectangleInCircle::operator<<(ostream& ostream)
{
	this->Circle::operator<< (ostream);
	ostream<<endl;
	this->Rectangle::operator<< (ostream);
	return ostream;
}
