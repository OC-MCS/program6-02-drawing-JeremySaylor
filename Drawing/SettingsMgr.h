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
		startingColor = color;
		startingShape = shape;
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

////5.	How to represent a Color with one integer :
////Recall that Color is a class provided by the Graphics library.
////You need to be able to do get an integer representation so that 
////you can easily represent an object’s color in the file. Given a Color color, 
////the following code returns an integer that could be stored in a file.
//
//unsigned colorNumber = color.toInteger();
//
////To create a color from a color number(e.g., after you’ve read data from the file), 
////just pass it to the constructor :
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
