#include "Factory.h"

Factory::Factory() {}

Factory::~Factory() {}

Character* Factory::Create(const std::string& Name) {
    //return Fish
    if (Name == "Fish") {
        return new Fish;
    }
    else if (Name == "Algue") {
        return new Algue;
    }
    //return else
    else {
        return nullptr;
    }
}