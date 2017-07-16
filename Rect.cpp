#include "stdafx.h"
#include <iostream>
#include "Rect.h"
#include <iomanip>

using namespace std;

//constructor
Rect::Rect(int newX, int newY, int newWidth, int newHeight)
	:Shape(newX, newY)
{
	setWidth(newWidth);
	setHeight(newHeight);
}

//accessors for Rectangle width and height
int Rect::getWidth()		const
{
	return width;
}

int Rect::getHeight()		const
{
	return height;
}

void Rect::setWidth(int newWidth)
{
	width = newWidth;
}

void Rect::setHeight(int newHeight)
{
	height = newHeight;
}

//display rectangle info
void Rect::display()		const
{
	cout << "Rectangle: (" << getX() << ',' << getY() << ')'
		<< "  width:  " << getWidth() << "  height: " << getHeight() 
		<< "  area: " << fixed << setprecision(3) << getArea() << "  perimeter: " << getPerimeter() << endl;
}

double Rect::getArea()	const
{
	return height*width;
}

double Rect::getPerimeter()	const
{
	return 2 * (height + width);
}