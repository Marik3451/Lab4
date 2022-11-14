#include <iostream>
#pragma once
using namespace std;
#define M_PI 3.14159265358979323846
#include <string>

class Circle
{
private:
	int r;
public:
	Circle(int r);
	double getLength();
	double getArea();
	ostream& operator<< (ostream& ostream);
};