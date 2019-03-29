#pragma once
//================================================
// Jeremy Saylor
// 29 Mar 2019
// Programming Assignment #6
// Pragramming II
//================================================
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>



using namespace std;
using namespace sf;



// finish this code; add functions, classes, data as needed

// DrawingShape should be an abstract base class 
// for Circle and Square
class DrawingShape 
{
private:

public:
	virtual DrawingShape getShape(ShapeEnum g)
	{}
	
};

// add Circle, Square classes below. These are derived from DrawingShape

class Circle: public DrawingShape
{
private:
	CircleShape circleBtn;
public:


	Circle()
	{
	
		//CircleShape circleBtn;	//CircleShape is a Graphics lib class
		Vector2f poscrl(70, 480);
		circleBtn.setPosition(poscrl);
		circleBtn.setRadius(20);
		circleBtn.setOutlineThickness(2);
		circleBtn.setOutlineColor(Color::White);
		// for just an outlined button
		circleBtn.setFillColor(Color::White);
		// The following renders the circle on the screen
		// win is a RenderWindow (see provided code)
		//win.draw(circleBtn);
	}
	CircleShape getShape()
	{
		return circleBtn;
	}

};
class Square : public DrawingShape
{
private:
	RectangleShape squareBtn;
public:
	Square()
	{
		//RectangleShape squareBtn; // RectangleShape is Graphics lib class
		Vector2f sqPos(70, 400);
		squareBtn.setPosition(sqPos);
		squareBtn.setOutlineColor(Color::White);
		squareBtn.setOutlineThickness(2);
		squareBtn.setSize(Vector2f(40, 40));
		squareBtn.setFillColor(Color::White);
		// renders a RectangleShape
		//win.draw(squareBtn);
	}
	RectangleShape getShape()
	{
		return squareBtn;
	}
};
