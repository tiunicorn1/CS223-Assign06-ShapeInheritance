#pragma once
class Shape
{
public:
	Shape(int newX, int newY);
	int getX()		const;
	int getY()		const;
	void setX(int newX);
	void setY(int newY);
	void moveTo(int newX, int newY);
	void rMoveTo(int deltaX, int deltaY);
	virtual void display()		const;

private:
	int x;
	int y;
};

