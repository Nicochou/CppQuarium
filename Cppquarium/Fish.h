#ifndef FISH_H
#define FISH_H

#include "TimeManager.h"
#include "Character.h"
#include <cmath>  

class Fish : public Character {
public:
	Fish();
	virtual ~Fish();
	void move();
protected:



};

#endif //FISH_H