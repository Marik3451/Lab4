#include "Circle.h"

Circle::Circle(int r)
{
	this->r = r;
	
}

double Circle::getLength()
{
	return 2*M_PI*r;
}

double Circle::getArea()
{
	return pow((M_PI*r),2);
}



ostream& Circle::operator<<(ostream& ostream)
{
	ostream << "Circle radius = " << r << endl
		<< "Circle area = " << this->getArea() << endl
		<< "Circle length = " << this->getLength() << endl;

	return ostream;
}
