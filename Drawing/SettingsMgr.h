#pragma once
//================================================
// Jeremy Saylor
// 29 Mar 2019
// Programming Assignment #6
// Pragramming II
//================================================
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

enum ShapeEnum { CIRCLE, SQUARE };

// finish this code; add functions, data as needed

class SettingsMgr
{
private:
	Color color;
	ShapeEnum shape;

public:
	SettingsMgr(Color startingColor, ShapeEnum startingShape )
	{
		startingColor = Color::Blue;
		startingShape = CIRCLE;
	}

	Color getCurColor()
	{
		return color;
			//Color::Blue; // just to make it compile 
	}


	ShapeEnum getCurShape()
	{
		return shape;
			//ShapeEnum::CIRCLE; // just to make it compile;
	}

	void setCurColor(Color pick )
	{
		color = pick;
	}

	void setCurShape(ShapeEnum pick )
	{
		shape = pick;
	}

};


//
//
////1.	A utility function to call any time we need to bail out :
//void die(string msg)
//{
//	cout << msg << endl;
//	exit(-1);
//}
//
//
////2.	How to draw a string :
//// first have to load font
//Font font;
//if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
//die("couldn't load font");
//
//// title
//Text title("Drawing Color", font, 25);
//title.setPosition(30, 25);
//win.draw(title);
//
//
//
//
////3.	How to create / draw a Circle :
//CircleShape blueBtn;	//CircleShape is a Graphics lib class
//Vector2f pos(xpos, ypos);
//blueBtn.setPosition(pos);
//blueBtn.setRadius(RADIUS);
//blueBtn.setOutlineThickness(2);
//blueBtn.setOutlineColor(Color::Blue);
//// for just an outlined button
//blueBtn.setFillColor(Color::Transparent);
//
//// The following renders the circle on the screen
//// win is a RenderWindow (see provided code)
//win.draw(blueBtn);
//
//
//
//
//
////4.	How to create / draw a Square :
//RectangleShape squareBtn; // RectangleShape is Graphics lib class
//Vector2f sqPos(x, y);
//squareBtn.setPosition(sqPos);
//squareBtn.setOutlineColor(Color::White);
//squareBtn.setOutlineThickness(2);
//squareBtn.setSize(Vector2f(size, size));
//squareBtn.setFillColor(Color::White);
//
//// renders a RectangleShape
//win.draw(squareBtn);
//
//
//
//
////
////5.	How to represent a Color with one integer :
////Recall that Color is a class provided by the Graphics library.You need to be able to do get an integer representation so that you can easily represent an object’s color in the file.Given a Color color, the following code returns an integer that could be stored in a file.
//
//unsigned colorNumber = color.toInteger();
//
////To create a color from a color number(e.g., after you’ve read data from the file), just pass it to the constructor :
//
//Color aColor(colorNumber);
//
//
//
////6.	How to determine if the mouse is over something
//if (colorBtn.getGlobalBounds().contains(mouse)) // mouse is a vector2f
//	// mouse is currently over colorBtn
//
//
