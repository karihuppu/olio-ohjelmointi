#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
private:
    string race;
    string name;
public:
    Dog();
    void dogInfo();
    string getRace() const;
    void setRace(const string &newRace);
    string getName() const;
    void setName(const string &newName);
};

#endif // DOG_H
