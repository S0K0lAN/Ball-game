#include "Header.h"

using namespace sf;



int main()
{
    RenderWindow window(sf::VideoMode(wW, wH), "SFML window");
    window.setFramerateLimit(60);

    CircleShape circle(50);
    circle.setPosition(wW/2, wH/2);
    circle.setOrigin(25, 25);

    time_t t = time(NULL);

    while (window.isOpen())
    {
        time_t t1 = time(NULL);

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        circle.setPosition(wW / 2 + t1-t, wH / 2 + t1-t);

        window.clear();
        window.draw(circle);
        window.display();
    }
    return EXIT_SUCCESS;
}