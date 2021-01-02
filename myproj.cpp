#include <SFML/Graphics.hpp>

int main()
{
    setlocale (LC_ALL, "ru");
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML window!");
    sf::CircleShape shape(100.f, 3);
    shape.setFillColor(sf::Color::Red);

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