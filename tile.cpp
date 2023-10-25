#include "tile.hpp"
#include <SFML/Graphics.hpp>

Tile::Tile() {
    rect = new sf::RectangleShape(sf::Vector2f(50.0f, 50.0f));
    rect->setFillColor(sf::Color::Cyan);
}

Tile::Tile(sf::Color color, sf::Vector2f pos) {
    rect = new sf::RectangleShape(sf::Vector2f(50.0f, 50.0f));
    rect->setFillColor(color);
    rect->setPosition(pos);
}

void Tile::drawTile(sf::RenderWindow* wnd) {
    wnd->draw(*rect);
}
