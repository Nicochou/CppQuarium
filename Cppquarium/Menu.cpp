#include "Menu.h"


Menu::Menu(float width, float height) {
    if (!font.loadFromFile("fonts/Arial.ttf")) {
        //error
        std::cout << "Font error Menu" << std::endl;
    }
    if (!texture.loadFromFile("images/aquamenu.png"))
    {
        std::cout << "Texture Error" << std::endl;
    }

    texture.loadFromFile("images/aquamenu.png");
    sprite.setTexture(texture);

    menu[0].setFont(font);
    menu[0].setString("Jouer");
    menu[0].setFillColor(sf::Color::Red);
    menu[0].setCharacterSize(100);
    menu[0].setStyle(sf::Text::Bold | sf::Text::Underlined);
    menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

    menu[1].setFont(font);
    menu[1].setString("Quitter");
    menu[1].setCharacterSize(100);
    menu[1].setStyle(sf::Text::Bold | sf::Text::Underlined);
    menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

    selectedItemIndex = 0;
}

Menu::~Menu() {}

void Menu::draw(sf::RenderWindow& window) {
    window.draw(sprite);
    for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++) {
        window.draw(menu[i]);
    }
}

void Menu::MoveUp() {
    if (selectedItemIndex - 1 >= 0) {
        menu[selectedItemIndex].setFillColor(sf::Color::White);
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(sf::Color::Red);
    }
}

void Menu::MoveDown() {
    if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS) {
        menu[selectedItemIndex].setFillColor(sf::Color::White);
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(sf::Color::Red);
    }
}