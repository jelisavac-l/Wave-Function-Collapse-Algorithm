#include "tile.hpp"
#include <SFML/Graphics.hpp>
#include <string>

Tile::Tile() {
    rect = new sf::RectangleShape(sf::Vector2f(50.0f, 50.0f));
    rect->setFillColor(sf::Color::Cyan);
}

Tile::Tile(sf::Color color, sf::Vector2f pos, int n) {
    // Konstruktor, boja, pozicija
    rect = new sf::RectangleShape(sf::Vector2f(50.0f, 50.0f));
    rect->setFillColor(color);
    rect->setPosition(pos);

    // Font
    if(!font.loadFromFile("fonts/ProggyClean.ttf")) {
        // neki error msg
    }


    //Ocajnicki pokusaj centriranja brojeva
    float dx = 0.0f, dy = 0.0f;
    if(n < 10) dx = 20.0f;
    else if(n < 100) dx = 14.0f;
    else dx = 8.0f;

    // Podesavanje teksta
    text.setFont(font);
    text.setString(std::to_string(n)); // Mora da se konvertuje, nije ovo Python
    text.setCharacterSize(25);

    // Mali easter egg :D
    if(n == 554) text.setFillColor(sf::Color::Yellow);
    else text.setFillColor(sf::Color::White);
    text.setPosition(sf::Vector2f(pos.x + dx, pos.y + 8.0f));

}

void Tile::drawTile(sf::RenderWindow* wnd) {
    wnd->draw(*rect);
    wnd->draw(text);
}

int Tile::getVal() {
    return this->val;
}
void Tile::setVal(int newVal) {
    this->val = newVal;
}
