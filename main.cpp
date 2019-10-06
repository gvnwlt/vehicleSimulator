#include <SFML/Graphics.hpp>
#include "vehicle.h"

/*
	[x] decide how to create vehicle
	[x] test vehicle (box) on screen display
	[x] make it move (establish vehicle control with WASD)
	[] make vehicle move by heading 
*/

int main()
{
	// create vehicle
	Vehicle v(sf::Vector2f(100.f, 50.f)); // vehicle 4 x 2 meters

	// start display
	sf::RenderWindow window(sf::VideoMode(800,600), "Vehicle Simulator");
	//sf::CircleShape shape(50.f);
	//shape.setFillColor(sf::Color::Green);
	sf::RectangleShape rectangle(v.vehicleDimensions);
	rectangle.setFillColor(sf::Color::Green);

	// starting position
	rectangle.setPosition(800.f / 2.f, 600.f / 2.f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			rectangle.move(1.f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			rectangle.rotate(-1.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			rectangle.move(-1.f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			rectangle.rotate(1.f);

		window.clear();
		window.draw(rectangle);
		window.display();
		sf::sleep(sf::milliseconds(50));
	}


	return 0;
}
