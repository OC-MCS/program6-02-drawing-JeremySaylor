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
#include "ShapeMgr.h"

// finish this code; add functions, data as needed

class DrawingUI
{
private:
	
public:
	DrawingUI(Vector2f p)
	{}

	void draw(RenderWindow& win, ShapeMgr *mgr)
	{
		RectangleShape squareCanvas; 
		Vector2f sqPos(200, 0);
		squareCanvas.setPosition(sqPos);
		squareCanvas.setOutlineColor(Color::White);
		squareCanvas.setOutlineThickness(2);
		squareCanvas.setSize(Vector2f(600, 600));
		squareCanvas.setFillColor(Color::Transparent);
		win.draw(squareCanvas);

		for (int i = 0; i < mgr->getShapes().size(); i++)
		{
			mgr->getShapes()[i].position;
			mgr->getShapes()[i].clr;
			mgr->getShapes()[i].which_Shape;

			Color aColor(mgr->getShapes()[i].clr);


			Color temp;
			if (aColor == Color::Blue)
			{
				temp = Color::Blue;
			}
			if (aColor == Color::Red)
			{
				temp = Color::Red;
			}
			if (aColor == Color::Green)
			{
				temp = Color::Green;
			}

			if (mgr->getShapes()[i].which_Shape == CIRCLE)
			{
				CircleShape greenBtn;
				Vector2f pos3(mgr->getShapes()[i].position);
				greenBtn.setPosition(pos3);
				greenBtn.setRadius(20);
				greenBtn.setOutlineThickness(2);
				greenBtn.setOutlineColor(temp);
				greenBtn.setFillColor(temp);
				win.draw(greenBtn);
			}
			if (mgr->getShapes()[i].which_Shape == SQUARE)
			{
				RectangleShape greenBtn;
				Vector2f pos3(mgr->getShapes()[i].position);
				greenBtn.setPosition(pos3);
				greenBtn.setSize(Vector2f(40, 40));
				greenBtn.setOutlineThickness(2);
				greenBtn.setOutlineColor(temp);
				greenBtn.setFillColor(temp);
				win.draw(greenBtn);
			}
		}
};
	
	bool isMouseInCanvas(Vector2f mousePos)
	{
		bool xAxis;
		bool yAxis;
		bool canvas;
		if (mousePos.x >= 200 && mousePos.x <= 800 )
		{
			xAxis = true;
		}
		else
		{
			xAxis = false;
		}
		if (mousePos.y >= 0 && mousePos.y <= 600)
		{
			yAxis = true;
		}
		else
		{
			yAxis = false;
		}
		if (xAxis && yAxis)
		{
			canvas = true;
		}
		else
		{
			canvas = false;
		}

		return canvas; // just to make it compile
	}

};

