// ShapeInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Circle.h"
#include "Rect.h"
#include "Square.h"

using namespace std;

int main()
{
	//declare array of Shape pointers
	Shape* figure[2];							//array - pointers to Shape
	figure[0] = new Rect(10, 20, 5, 6);			//new Rectangle instance
	figure[1] = new Circle(15, 25, 8);			//new Circle instance

	cout << endl;

	//iterate through figure array and handle shapes polymorphically
	for (int i = 0; i < 2; i++)
	{
		figure[i]->display();
		figure[i]->rMoveTo(55,65);
		figure[i]->display();
		delete figure[i];
	}

	//set up Rectangle pointer
	Rect* rt = new Rect(0, 0, 20, 15);			//new Rectangle instance
	rt->setWidth(30);
	rt->display();
	delete rt;
	
	cout << endl;

	Square* sq = new Square(20, 20, 12);
	sq->display();
	sq->moveTo(15,15);
	sq->setSide(18);
	sq->display();
	sq->setSide(10);
	sq->display();

	cout << endl;
	system("pause");
	return 0;
}