
#ifndef SFML_MENU_H
#define SFML_MENU_H
#include "SFML/Graphics.hpp"
#include "SFML/Graphics/Font.hpp"
#include <iostream>      

#define MAX_NUMBER_OF_ITEMS 2


class Menu {

public:
    Menu(float width, float height);
    ~Menu();

    void draw(sf::RenderWindow& Window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem() { return selectedItemIndex; }
    sf::Texture texture;
    sf::Sprite sprite;

private:
    int selectedItemIndex;
    sf::Font font;
    sf::Text menu[MAX_NUMBER_OF_ITEMS];

};

#endif //SFML_MENU_H
