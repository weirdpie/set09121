#include "stdafx.h"
#include <SFML/Grapgics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::green);

	while (window.isOpen()){
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::event::closed) {
				window.close();
			}
		}
		window.clear();
		window.draw(shape);
		window.disaply();

}
    return 0;
}

