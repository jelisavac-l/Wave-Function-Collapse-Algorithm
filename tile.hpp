#include <SFML/Graphics.hpp>

#pragma once

class Tile{

private:
    sf::RectangleShape *rect;

public:
    Tile();
    Tile(sf::Color color, sf::Vector2f pos);
    void drawTile(sf::RenderWindow* wnd);

};
