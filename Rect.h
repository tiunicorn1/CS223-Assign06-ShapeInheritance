#pragma once
#include "Shape.h"

class Rect : public Shape		//Rect inheritance from Shape class
{
public:
	Rect(int newX, int newY, int newWidth, int newHeight);
	int getWidth()		const;
	int getHeight()		const;
	void setWidth(int newWidth);
	void setHeight(int newHeight);
	void display()		const;
	double getArea()	const;
	double getPerimeter()	const;

private:
	int width;
	int height;
};

