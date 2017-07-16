#include "stdafx.h"
#include "Shape.h"

//constructor
Shape::Shape(int newX, int newY)
{
	moveTo(newX, newY);
}

//accessors for x and y
int Shape::getX()		const
{
	return x;
}

int Shape::getY()		const
{
	return y;
}

void Shape::setX(int newX)
{
	x = newX;
}

void Shape::setY(int newY)
{
	y = newY;
}

//move the shape position
void Shape::moveTo(int newX, int newY)
{
	setX(newX);
	setY(newY);
}

void Shape::rMoveTo(int deltaX, int deltaY)
{
	moveTo(getX() + deltaX, getY() + deltaY);
}

//abstract display method - to be dfined in derived classes
void Shape::display()		const
{

}