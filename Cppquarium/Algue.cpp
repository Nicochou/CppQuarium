#include "Algue.h"

TimeManager& timeManagerAlgue = TimeManager::GetInstance();

Algue::Algue() {
	// Initialisation
	int randomValueX;
	int randomValueY;
	// Randomisation
	randomValueX = (rand() % 10 + 1);
	randomValueY = (rand() % 10 + 1);
	// Generation
	this->SetX(randomValueX);
	this->SetY(randomValueY);
}

Algue::~Algue() {}

void Algue::move() {
	// Initialisation
	int randomValueX;
	int randomValueY;
	// Randomisation
	randomValueX = (rand() % 10 + 1);
	randomValueY = (rand() % 10 + 1);
	// Generation
	this->SetX(randomValueX);
	this->SetY(randomValueY);

}


