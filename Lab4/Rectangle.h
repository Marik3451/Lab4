#pragma once
#include <iostream>
using namespace std;

class Rectangle 
{
private:
	int sideA;
	int sideB;
public:
	Rectangle(int sideA, int sideB);
	double getArea();
	double getLength();
	ostream& operator<< (ostream& ostream);
};
