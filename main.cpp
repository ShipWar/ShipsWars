#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(int argc, char *argv[])
{

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    sf::Texture texture;
     if (!texture.loadFromFile("D:/userdata/pancerz/Desktop/GameProject/ShipWars/images/space.jpg"))
         return EXIT_FAILURE;
     sf::Sprite sprite(texture);

    while (window.isOpen())
    {
       // Process events
       sf::Event event;
       while (window.pollEvent(event))
       {
           // Close window : exit
           if (event.type == sf::Event::Closed)
               window.close();
       }
       window.draw(sprite);
       window.display();
    }
    return 0;
}
