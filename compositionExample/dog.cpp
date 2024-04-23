#include "dog.h"


string Dog::getRace() const
{
    return race;
}

void Dog::setRace(const string &newRace)
{
    race = newRace;
}

string Dog::getName() const
{
    return name;
}

void Dog::setName(const string &newName)
{
    name = newName;
}

Dog::Dog()
{
}

void Dog::dogInfo()
{
    cout<<"***********************"<<endl;
    //jos color on private
    //cout<<"private: Nimeni on "<<name<<" olen "<<getColor()<<endl;
    //jos color on protected tai public
    cout<<"protected: Nimeni on "<<name<<" olen "<<color<<endl;
    cout<<"rotuni on "<<race<<endl;
    cout<<"***********************"<<endl;
}
