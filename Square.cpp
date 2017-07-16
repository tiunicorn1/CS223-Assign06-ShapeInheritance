#include "stdafx.h"
#include "Square.h"
#include <iostream>
#include <iomanip>

using namespace std;

Square::Square(int newX, int newY, int length)
	: Rect(newX, newY, length, length)		//public inheritance from Rect
{
	setSide(length);
}

int Square::getSide()		const
{
	return side;
}

void Square::setSide(int newLength)
{
	side = newLength;
	Rect::setWidth(newLength);
	Rect::setHeight(newLength);
}

void Square::display()		const
{
	cout << "Square   : (" << getX() << ',' << getY() << ')'
		<< "  length of side: " << getSide() 
		<< "    area: " << fixed << setprecision(3) << getArea() << "  perimeter: " << getPerimeter() << endl;
}