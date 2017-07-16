#pragma once
#include "Shape.h"

const double PI = 3.1416;

class Circle: public Shape	//Circle public inheritance from Shape Class
{
public:
	Circle(int newX, int newY, int newRadius);
	int getRadius()		const;
	void setRadius(int newRadius);
	void display()		const;
	double getArea()	const;
	double getPerimeter()	const;

private:
	int radius;
};

