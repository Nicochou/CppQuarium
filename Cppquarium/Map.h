#ifndef MAP_H
#define MAP_H

#include "SFML/Graphics.hpp"
#include "SFML/Graphics/Font.hpp"
#include <SFML/Audio.hpp>
#include <string>
#include <iostream>
#include <io.h>
#include "SFML/Audio.hpp"
#include "Scores.h"
#include "Observable.hpp"
#include "Observer.hpp"
#include "TimeManager.h"
#include "FPS.h"
#include "Fish.h"
#include "Algue.h"
#include "TileMap.hpp"
#include "Factory.h"


#define MAX_NUMBER_OF_ITEMS_MAP 8


class Map {
public:
	Map(float width, float height);
	virtual ~Map();
	void drawText(sf::RenderWindow& window, int score, int scoreAlg, int time, int fps);
	int WindowMap(sf::RenderWindow& window, Map map, Scores scores);
	int level;
	sf::Texture texture;
	sf::Sprite sprite;
	TileMap tileMap;
	TileMap tileFish;
	TileMap tileWeed;

protected:
	sf::Font font;
	sf::Text text[MAX_NUMBER_OF_ITEMS_MAP];
	sf::Event event;
};

#endif //MAP_H