#include "RectangleInCircle.h"
#include <fstream>
int main()
{
	RectangleInCircle rectangleInCircle(8,10,15);
	rectangleInCircle.operator<< (cout) << endl;
	ofstream myfile;
	myfile.open("RectangleInCircle.txt");
	rectangleInCircle.operator<< (myfile);
	myfile.close();
}