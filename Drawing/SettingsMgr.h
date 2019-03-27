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
		startingColor = Red;
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
