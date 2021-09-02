#ifndef FACTORY_H
#define FACTORY_H


#include <string>
#include "Character.h"
#include "Fish.h"
#include "Algue.h"


class Factory {
public:
    Factory();
    ~Factory();
    Character* Create(const std::string&);

};


#endif //FACTORY_H