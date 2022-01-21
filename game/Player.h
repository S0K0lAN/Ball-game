#pragma once
#include <SFML/Graphics.hpp>

class Player
{
private:
	float sizeX, sizeY;
	bool isActive;

	sf::RectangleShape rect;
	

public:
	Player(float x, float y, float sizeX, float sizeY);

	float x, y;

	void move(int destX, int destY);
	sf::RectangleShape getRect();
	void setActive();
	bool getActive();

	~Player();
};

