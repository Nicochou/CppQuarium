// Cppquarium.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Factory.h"
#include "Map.h"
#include "Menu.h"
#include "Scores.h"
#include "TimeManager.h"
#include "FPS.h"
#include "Scores.h"
#include "TimeManager.h"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(812, 562), "C++quarium", sf::Style::Close);
    sf::Music music;

    if (!music.openFromFile("musiques/nice_music.ogg")) {
        //error
        std::cout << "Sound not found" << std::endl;
    }

    // Factory
    Factory factory;
    Scores scores;

    music.play();
    music.setLoop(true);

    Map map(window.getSize().x, window.getSize().y);
    Menu menu(window.getSize().x, window.getSize().y);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::KeyReleased:
                switch (event.key.code) {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;
                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;
                case sf::Keyboard::Return:
                    switch (menu.GetPressedItem()) {
                    case 0:
                        music.pause();
                        map.WindowMap(window, map, scores);
                        break;
                    case 1:
                        window.close();
                        break;
                    }
                    break;
                }
                break;
            case sf::Event::Closed:
                window.close();
                break;
            }
        }
        window.clear();
        menu.draw(window);
        window.display();
    }
}

