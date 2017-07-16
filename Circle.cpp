#include "stdafx.h"
#include <iostream>
#include "Circle.h"
#include <iomanip>

using namespace std;


Circle::Circle(int newX, int newY, int newRadius)
	: Shape(newX, newY)		//inheritance from Shape class
{
	setRadius(newRadius);
}

//accesors for the radius
int Circle::getRadius()		const
{
	return radius;
}

void Circle:: setRadius(int newRadius)
{
	radius = newRadius;
}

//display circle info
void Circle::display()		const
{
	cout << "Circle   : (" << getX() << ',' << getY() << ')'
		<< "  radius: " << getRadius() 
		<< "             area: " << fixed << setprecision(3) << getArea() << "  perimeter: " << getPerimeter() << endl;
}

double Circle::getArea()	const
{
	return PI*(radius*radius);
}

double Circle::getPerimeter()	const
{
	return PI*(2 * radius);
}