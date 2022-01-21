#include "Circle.h"



Circle::Circle(float x, float y, float radius)
{
	this->x = x;
	this->y = y;
	this->radius = radius;

	circle.setPosition(x, y);
	circle.setRadius(radius);
	circle.setOrigin(radius, radius);

}


Circle::~Circle() {}


bool Circle::isHit(const Circle circle) const
{
	int d = sqrt(pow((this->x - circle.x), 2) + pow((this->y - circle.y), 2));

	if (d == radius + circle.radius)
		return true;
	else
		return false;
	
}


void Circle::moveTo(float x, float y)
{
	circle.setPosition(x, y);
}


void Circle::motion(float speed, float deg) 
{
	circle.move(speed * cos(deg * PI / 180), speed * sin(deg * PI / 180));
}


sf::CircleShape& Circle::getCircle() 
{
	return circle;
}

