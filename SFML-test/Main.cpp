
#include "SFML\Graphics.hpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "koala", sf::Style::Close);
	window.setFramerateLimit(60);
	
	sf::RectangleShape shape;
	shape.setFillColor(sf::Color::Red);
	shape.setSize(sf::Vector2f(100, 100));

	cout << "koalat on kivoja" << endl;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		shape.move(5, 5);
		if (shape.getPosition().y > 600)
			shape.setPosition(0, 0);

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}