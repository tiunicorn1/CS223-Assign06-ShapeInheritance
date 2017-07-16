#pragma once
#include "Rect.h"

class Square : public Rect		//Square public inheritanace from Rect
{
public:
	Square(int newX, int newY, int length);
	int getSide()		const;
	void setSide(int newLength);
	void display()		const;

private:
	int side;
};

