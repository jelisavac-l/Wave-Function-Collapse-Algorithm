#include <SFML/Graphics.hpp>

#include "tile.hpp"

void init();

int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 900), "Wave Function Collapse Algorithm, L. Jelisavac");


    Tile *map[580]; // 579 je broj, ostali su samo da ne bude segfault :(
    // Generisanje mape
    float x = 0.0f, y = 0.0f, colMultiplierR = 33.0f, colMultiplierG = 0.0f, colMultiplierB = 33.0f;
    int ndx = 0;
    for(int i = 0; i < 18; i++) {
        for(int j = 0; j < 32; j++) {
            map[ndx] = new Tile(sf::Color(colMultiplierR, colMultiplierG, colMultiplierB), sf::Vector2f(x, y), ndx);
            ndx++;  // Segfault :D
            x += 50;
            // Zanimacije sa bojama
            colMultiplierR += 0.2f;
            colMultiplierB == 200 ? colMultiplierB = 15 : colMultiplierB = 200;

        }
        // Jos zanimacija sa bojama
        colMultiplierG == 64.0f ? colMultiplierG = 0.0f : colMultiplierG = 64.0f;

        x = 0.0f;
        y += 50.0f;

    }
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // Draw OVDE
        for(int i = 0; i < 576; i++) {
            map[i]->drawTile(&window);
        }
        window.display();
    }

    return 0;
}

// Init funkcija

void init() {
}
