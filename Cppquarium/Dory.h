#ifndef DORY_H
#define DORY_H

#include "TimeManager.h"
#include "Character.h"
#include <cmath>  

class Dory : public Character {
public:
	Dory();
	virtual ~Dory();

	virtual void Update();
	void move();
protected:



};

#endif //DORY_H