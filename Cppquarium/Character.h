#ifndef CHARACTER_H
#define CHARACTER_H


#include "AbstractEntity.h"

class Character : AbstractEntity {

protected:
    Character();
    virtual ~Character();

public:
    int _x;
    int _y;
    int GetX() const;
    void SetX(int _X);
    int GetY() const;
    void SetY(int _Y);
    void virtual Update();
    void virtual Draw();
};


#endif //CHARACTER_H