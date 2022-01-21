#include "Player.h"

Player::Player(float x, float y, float sizeX, float sizeY): x(x), y(y), sizeX(sizeX), sizeY(sizeY)
{
	rect.setFillColor(sf::Color::White);
	rect.setSize(sf::Vector2f(sizeX, sizeY));
	rect.setOrigin(sizeX / 2, sizeY / 2);
	rect.setPosition(x, y);

	isActive = false;
	
}

void Player::move(int destX, int destY)
{
	rect.setPosition(destX, destY);
}

sf::RectangleShape Player::getRect()
{
	return rect;
}

void Player::setActive()
{
	isActive = true;
}

bool Player::getActive()
{
	return isActive;
}

Player::~Player() 
{

}