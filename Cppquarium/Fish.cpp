#include "Fish.h"

TimeManager& timeManagerFish = TimeManager::GetInstance();

Fish::Fish() {
	this->SetX(10);
	this->SetY(0);
}

Fish::~Fish() {}

void Fish::move() {
	int randomValue;
	bool isMovingX = true;
	randomValue = (rand() % ((+1) - (-1) + 1)) + (-1);

	if (GetX() + 1 == 22) {
		this->SetX(this->GetX() - 1);
	}
	else if (GetX() - 1 == 0) {
		this->SetX(this->GetX() + 1);
	}
	else if (GetY() + 1 == 10) {
		this->SetY(this->GetY() - 1);
	}
	else if (GetY() - 1 == 1) {
		this->SetY(this->GetY() + 1);
	}
	else {
		if (isMovingX == true) {
			this->SetX(this->GetX() + 1 * randomValue);
			isMovingX = true;
		}
		else {
			this->SetY(this->GetY() + 1 * randomValue);
			isMovingX = false;
		}
	}
	
}







