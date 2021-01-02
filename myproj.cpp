#include <SFML/Graphics.hpp>

int main()
{
    setlocale (LC_ALL, "ru");
    sf::RenderWindow window(sf::VideoMode(300, 300), "SFML window!");
    sf::CircleShape shape(100.f, 3);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}