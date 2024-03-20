#include "bear.h"
#include "cat.h"

#include <iostream>

using namespace std;

int main()
{
//    Cat objectCat;
//    objectCat.setColor("black");
//    cout<<"Cat's color is "<<objectCat.getColor()<<endl;


    Cat *objectCat2=new Cat;

    objectCat2->setColor("oranssi");
    //cout<<"Other cat's color is "<<objectCat2->getColor()<<endl;
    objectCat2->setName("Karvinen");
    objectCat2->catInfo();
    delete objectCat2;
    objectCat2=nullptr;

    Bear *objectBear=new Bear;
    objectBear->setSpecies("jaakarhu");
    objectBear->setColor("valkoinen");
    objectBear->bearInfo();
    delete objectBear;
    objectBear=nullptr;

return 0;
}
