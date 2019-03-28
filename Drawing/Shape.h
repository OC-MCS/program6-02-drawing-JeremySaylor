#pragma once
//================================================
// Jeremy Saylor
// 29 Mar 2019
// Programming Assignment #6
// Pragramming II
//================================================
#include <SFML/Graphics.hpp>
#include <string>



using namespace std;
using namespace sf;

// finish this code; add functions, classes, data as needed

// DrawingShape should be an abstract base class 
// for Circle and Square
class DrawingShape 
{
};

// add Circle, Square classes below. These are derived from DrawingShape




//void something()
//{
//	//3.	How to create / draw a Circle :
//	CircleShape blueBtn;	//CircleShape is a Graphics lib class
//	Vector2f pos(xpos, ypos);
//	blueBtn.setPosition(pos);
//	blueBtn.setRadius(RADIUS);
//	blueBtn.setOutlineThickness(2);
//	blueBtn.setOutlineColor(Color::Blue);
//	// for just an outlined button
//	blueBtn.setFillColor(Color::Transparent);
//
//	// The following renders the circle on the screen
//	// win is a RenderWindow (see provided code)
//	win.draw(blueBtn);
//
//}
//
//
//
//
//void somethingt()
//{
//
//	//4.	How to create / draw a Square :
//	RectangleShape squareBtn; // RectangleShape is Graphics lib class
//	Vector2f sqPos(x, y);
//	squareBtn.setPosition(sqPos);
//	squareBtn.setOutlineColor(Color::White);
//	squareBtn.setOutlineThickness(2);
//	squareBtn.setSize(Vector2f(size, size));
//	squareBtn.setFillColor(Color::White);
//
//	// renders a RectangleShape
//	win.draw(squareBtn);
//
//}