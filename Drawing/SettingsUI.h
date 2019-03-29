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
#include "SettingsMgr.h"

// finish this code; add functions, data as needed

class SettingsUI
{
private:
	//SettingsMgr *manager;
	CircleShape blueBtn;
	CircleShape redBtn;
	CircleShape greenBtn;
	RectangleShape squareBtn;
	CircleShape circleBtn;
	SettingsMgr *mgr1;
public:
	SettingsUI(SettingsMgr *mgr)
	{
		mgr1 = mgr;
		Vector2f pos(70, 100);
		blueBtn.setPosition(pos);
		blueBtn.setRadius(20);
		blueBtn.setOutlineThickness(2);
		blueBtn.setOutlineColor(Color::Blue);
		// for just an outlined button
		blueBtn.setFillColor(Color::Blue);
		
		Vector2f pos2(70, 160);
		redBtn.setPosition(pos2);
		redBtn.setRadius(20);
		redBtn.setOutlineThickness(2);
		redBtn.setOutlineColor(Color::Red);
		// for just an outlined button
		redBtn.setFillColor(Color::Red);
	
		Vector2f pos3(70, 220);
		greenBtn.setPosition(pos3);
		greenBtn.setRadius(20);
		greenBtn.setOutlineThickness(2);
		greenBtn.setOutlineColor(Color::Green);
		// for just an outlined button
		greenBtn.setFillColor(Color::Green);
	
		Vector2f sqPos(70, 400);
		squareBtn.setPosition(sqPos);
		squareBtn.setOutlineColor(Color::White);
		squareBtn.setOutlineThickness(2);
		squareBtn.setSize(Vector2f(40, 40));
		squareBtn.setFillColor(Color::White);
		
		Vector2f poscrl(70, 480);
		circleBtn.setPosition(poscrl);
		circleBtn.setRadius(20);
		circleBtn.setOutlineThickness(2);
		circleBtn.setOutlineColor(Color::White);
		// for just an outlined button
		circleBtn.setFillColor(Color::White);
	}


	void handleMouseUp(Vector2f mouse)
	{
		////6.	How to determine if the mouse is over something
		
		if (blueBtn.getGlobalBounds().contains(mouse))
		{
			mgr1->setCurColor(Color:: Blue);
		}
		if (redBtn.getGlobalBounds().contains(mouse))
		{
			mgr1->setCurColor(Color::Red);
		}
		if (greenBtn.getGlobalBounds().contains(mouse))
		{
			mgr1->setCurColor(Color::Green);
		}
		if (squareBtn.getGlobalBounds().contains(mouse))
		{
			mgr1->setCurShape(SQUARE);
		}
		if (circleBtn.getGlobalBounds().contains(mouse))
		{
			mgr1->setCurShape(CIRCLE);
		}
		//settingsMgr.getCurShape(), settingsMgr.getCurColor()
		//CIRCLE, SQUARE

			// mouse is a vector2f
//	// mouse is currently over colorBtn
	}

	void die(string msg)
	{
		cout << msg << endl;
		exit(-1);
	}

	void draw(RenderWindow& win)
	{

	Font font;
	if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
	{
		die("couldn't load font");
	}

	// title 1
	Text title("Select Color", font, 25);
	title.setPosition(30, 25);
	win.draw(title);

	// title 2
	Text title2("Select Shape", font, 25);
	title2.setPosition(30, 325);
	win.draw(title2);

	win.draw(blueBtn);

	win.draw(redBtn);

	win.draw(greenBtn);

	win.draw(squareBtn);

	win.draw(circleBtn);
	}

};
