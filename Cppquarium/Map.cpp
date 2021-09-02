#include "Map.h"


Map::Map(float width, float height) {

	if (!font.loadFromFile("fonts/Arial.ttf")) {
		std::cout << "Font error Map" << std::endl;
	}
	text[0].setFont(font);
	text[0].setFillColor(sf::Color::Green);
	text[0].setString("Time");
	text[0].setPosition(sf::Vector2f(width / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 1, 0));

	text[2].setFont(font);
	text[2].setFillColor(sf::Color::Blue);
	text[2].setString("Fish");
	text[2].setPosition(sf::Vector2f(width / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 3, 0));

	text[4].setFont(font);
	text[4].setFillColor(sf::Color::Blue);
	text[4].setString("Seaweed");
	text[4].setPosition(sf::Vector2f(width / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 5, 0));

	text[6].setFont(font);
	text[6].setFillColor(sf::Color::Red);
	text[6].setString("FPS");
	text[6].setPosition(sf::Vector2f(width / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 8, 0));
}



Map::~Map() {}

void Map::drawText(sf::RenderWindow& window, int score, int scoreAlg, int time, int fps) {

	for (int i = 0; i < MAX_NUMBER_OF_ITEMS_MAP; i++) {
		window.draw(text[i]);
		text[1].setFont(font);
		text[1].setFillColor(sf::Color::White);
		text[1].setString(std::to_string(time));
		text[1].setPosition(sf::Vector2f(window.getSize().x / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 2, 0));

		text[3].setFont(font);
		text[3].setFillColor(sf::Color::White);
		text[3].setString(std::to_string(score));
		text[3].setPosition(sf::Vector2f(window.getSize().x / (MAX_NUMBER_OF_ITEMS_MAP) * 4, 0));

		text[5].setFont(font);
		text[5].setFillColor(sf::Color::White);
		text[5].setString(std::to_string(scoreAlg));
		text[5].setPosition(sf::Vector2f(window.getSize().x / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 7, 0));

		text[7].setFont(font);
		text[7].setFillColor(sf::Color::Red);
		text[7].setString(std::to_string(fps));
		text[7].setPosition(sf::Vector2f(window.getSize().x / (MAX_NUMBER_OF_ITEMS_MAP + 1) * 7.5, 0));
	}
}

int Map::WindowMap(sf::RenderWindow& window, Map map, Scores scores) {
	const int level[] =
	{
	   3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	   3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
	   3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
	   3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
	   3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
	   3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	};

	//  On charge la tileMap
	if (!tileMap.load("images/tileMap.png", sf::Vector2u(32, 32), level, 25, 16))
		std::cout << "TileMap Error" << std::endl;

	// Gestion temps
	static TimeManager& instance = TimeManager::GetInstance();
	sf::Time elapsed_time;
	sf::Clock r;
	sf::Time delta_time = sf::milliseconds(100);
	static FPS& fps = FPS::GetInstanceFPS();

	// Musiques
	sf::Music spawnFish;
	sf::Music spawnAlgue;

	if (!spawnFish.openFromFile("musiques/sound/FishSpawn.wav")) {
		//error
		std::cout << "Sound not found" << std::endl;
	}

	if (!spawnAlgue.openFromFile("musiques/sound/AlgueSpawn.wav")) {
		//error
		std::cout << "Sound not found" << std::endl;
	}

	// Instance
	Factory factory;
	Fish fish;
	Algue algue;

	// Factory
	factory.Create("fish");
	factory.Create("Algue");
	// Timer start
	instance.Start();

	// Nos variables
	int i = 0;
	int counter = 0;
	unsigned int* timeNow;

	const std::string imageFish = "images/fish.png";
	const std::string imageAlgue = "images/algue.png";
	sf::Vertex vertices;

	// Boucle de jeu
	while (window.isOpen()) {
		// On récupère le click du player
		auto mouse_pos = sf::Mouse::getPosition(window);
		auto translated_pos = window.mapPixelToCoords(mouse_pos);
		// On switch les evenement
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			switch (event.type) {
			// Si le player click sur l'écran
			case sf::Event::MouseButtonPressed:
				// On joue un son 
				spawnFish.play();
				// On ajout une tuile un nouveau vertex
				if (!tileFish.add("images/fish.png", vertices, sf::Vector2u(32, 32), 10, 10))
					return -1;
				// Ajout un point fish
				scores.AddPoint(1);
				// On affiche les infos
				std::cout << "Click Position Coords : " << std::to_string(mouse_pos.x) << ":"  << std::to_string(mouse_pos.y) << std::endl;
				std::cout << "Fish Entity Generation Coords : " << std::to_string(fish.GetX()) << ":" << std::to_string(fish.GetY()) << std::endl;
				break;
				}

			}
		

		// Update du temps
		instance.Update();

		// Boucle de jeu pour la gestion des entité ( 1s )
		elapsed_time += r.restart();
		while (elapsed_time >= delta_time) {
			// Ajout algue
			if (instance.GetStartedTime() % 3 == 0) {
				// On joue un son
				spawnAlgue.play();
				// On bouge l'algue
				algue.move();
				// On concole les infos
				std::cout << "Algue position generation : " << std::to_string(algue.GetX()) << ":" << std::to_string(algue.GetY()) << std::endl;
				// On bougle la tuile
				if (!tileWeed.addWeed("images/algue.png", vertices, sf::Vector2u(32, 32), algue.GetX(), algue.GetY()))
					return -1;
				// On ajoute un point
				scores.AddPointAlg(1);
			}
			else {
				// On joue un son
				spawnAlgue.pause();
			}
			// On bougle l'entité
			fish.move();

			// On bouge la tuile
			if (!tileFish.move(imageFish, sf::Vector2u(32, 32), fish.GetX(), fish.GetY()))
				return -1;
			
			elapsed_time -= delta_time;
		}

		// Update du temps
		instance.Update();
		float f = fps.getFps(instance);


		// On déssine
		window.clear();
		window.draw(tileMap);
		window.draw(tileFish);
		window.draw(tileWeed);
		map.drawText(window, scores.GetScores(), scores.GetScoresAlg(), instance.GetStartedTime(), f);
		window.display();

		}
		return -1;
	}




