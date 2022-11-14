#include "Rectangle.h"



Rectangle::Rectangle(int sideA, int sideB)
{
	this->sideA = sideA;
	this->sideB = sideB;
}

double Rectangle::getArea()
{
	return sideA * sideB;
}

double Rectangle::getLength()
{
	return (sideA+sideB)*2;
}



ostream& Rectangle::operator<<(ostream& ostream)
{
	ostream << "Side a = " << sideA << endl
		<< "Side b = " << sideB << endl
		<< "Rectangle area = " << this->getArea() << endl
		<< "Rectangle length = " << this->getLength() << endl;
	return ostream;
}
