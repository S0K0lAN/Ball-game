#pragma once
#include <iostream>
#include "Header.h"

class Circle
{
private:
	sf::CircleShape circle;
	float x, y,
		  radius;
public:
	Circle(float x, float y, float radius);
	~Circle();

	bool isHit(const Circle circle) const;
	void moveTo(float x, float y);
	void motion(float speed, float deg);
	sf::CircleShape& getCircle() const;

};

