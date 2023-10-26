#include <SFML/Graphics.hpp>

#pragma once

class Tile{

private:
    sf::RectangleShape *rect;
    int val = 0;
    sf::Font font;
    sf::Text text;

public:
    Tile();
    Tile(sf::Color color, sf::Vector2f pos, int n);
    void drawTile(sf::RenderWindow* wnd);
    int getVal();
    void setVal(int newVal);

};
