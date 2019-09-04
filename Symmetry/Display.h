#pragma once
#ifndef DISPLAY_H
#define DISPLAY_H
#include "Drawable.h"
#include "Helper.h"

class Display
{
public:
	static Display* Initialize(int width, int height);
	static Display* getInstance();
	void operate();
	void getUserInput();
	void moveWindow(arma::colvec rotationDiff, arma::colvec translationDiff);
	void draw();
	void addDrawable(Drawable* d);
	void deleteDrawable(Drawable* d);
private:
	Display(int w, int h);
	int width = 600;
	int height = 600;
	std::vector<sf::Sprite> drawSprites;
	std::vector<Drawable*> drawables;
	sf::RenderWindow window;
	sf::Sprite background;
	sf::Texture backgroundTexture;

};

#endif // !1