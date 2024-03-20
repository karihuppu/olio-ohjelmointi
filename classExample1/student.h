#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
private:
    string fname;
    string lname;
public:
    Student();
    Student(string fn, string ln);
    ~Student();
    string getFname() const;
    void setFname(const string &newFname);
    string getLname() const;
    void setLname(const string &newLname);

    void studentInfo();
};

#endif // STUDENT_H
