#include "student.h"
#include <iostream>

Student::Student()
{
    cout<<"Student luokan muodostinta(constructor) kutsuttiin"<<endl;
}

Student::Student(string fn, string ln)
{
    fname=fn;
    lname=ln;
}

Student::~Student()
{
    cout<<"Student luokan tuhoajaa(destructor) kutsuttiin"<<endl;
}

string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

string Student::getLname() const
{
    return lname;
}

void Student::setLname(const string &newLname)
{
    lname = newLname;
}

void Student::studentInfo()
{
    cout<<"Etunimeni on "<<fname<<" sukunimeni on "<<lname<<endl;
}

