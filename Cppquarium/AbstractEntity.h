#ifndef ABSTRACTENTITY_H
#define ABSTRACTENTITY_H

class AbstractEntity
{

protected:
    //constructeur
    AbstractEntity();
    //destructeur
    virtual ~AbstractEntity();
public:
    virtual void Update() = 0;
    virtual void Draw() = 0;

};


#endif //ABSTRACTENTITY_H