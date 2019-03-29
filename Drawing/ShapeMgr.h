#pragma once
//================================================
// Jeremy Saylor
// 29 Mar 2019
// Programming Assignment #6
// Pragramming II
//================================================
#include <SFML/Graphics.hpp>
#include <vector>
#include "Shape.h"

using namespace std;
using namespace sf;

// finish the ShapeMgr class.

struct Data
{
	Vector2f position;
	ShapeEnum which_Shape;
	// int clr;
	Color clr;
};

class ShapeMgr
{
private:
	
	vector <Data> shapes;
	
public:
	ShapeMgr()
	{
		
	}

	void addShape(Vector2f pos, ShapeEnum whichShape, Color color)
	{
		unsigned colorNumber = color.toInteger();
		Data temp;
		temp.position = pos;
		temp.which_Shape = whichShape;
		//temp.clr = colorNumber;
		temp.clr = color;
		
		

		shapes.push_back(temp);
		
	}
	vector <Data> getShapes()
	{
		return shapes;
	}
};
//void nn()
//{
//	Color color;
//	color = Color::Blue;
//	unsigned colorNumber = color.toInteger();
//	//
//	////To create a color from a color number(e.g., after you’ve read data from the file), 
//	////just pass it to the constructor :
//	//
//	Color aColor(colorNumber);
//}