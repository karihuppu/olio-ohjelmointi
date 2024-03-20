#include <iostream>
//(1)kirjoita funktio, joka ottaa vastaan kaksi kokonaislukua
//funktio kertoo molemmat luvut kahdella ja tulostaa summan
//tulosta myös alkuperäiset luvut

//(2)kirjoita funktio, kuten edellä, mutta funtkion
//on tuplattava alkuperäisien muuttujien arvot
//nyt funktion on otettava vastaan muuttujien osoitteet

using namespace std;
void doubleNumbers1(int a, int b);
void doubleNumbers2(int *x, int *y);
int main()
{
    int x=5, y=9;
    cout << "aluksi mainissa x="<<x<<endl;
    cout << "aluksi mainissa y="<<y<<endl;
    doubleNumbers1(x,y);
    cout << "lopuksi mainissa x="<<x<<endl;
    cout << "lopuksi mainissa y="<<y<<endl;

    doubleNumbers2(&x,&y);
    cout << "lopuksi mainissa x="<<x<<endl;
    cout << "lopuksi mainissa y="<<y<<endl;
    return 0;
}

void doubleNumbers1(int x, int y){
    x=x * 2;
    y=y * 2;
    cout<<"funktiossa(1) x="<<x<<endl;
    cout<<"funktiossa(1) y="<<y<<endl;
}
void doubleNumbers2(int *x, int *y){
    *x=*x * 2;
    *y=*y * 2;
    cout<<"funktiossa(2) x="<<*x<<endl;
    cout<<"funktiossa(2) y="<<*y<<endl;
}
