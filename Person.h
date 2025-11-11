#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
string name;
int id;

public:
    Person();
    Person(string name, int id);
    virtual ~Person();

    void setName(string name);
    void setId(int id);

    string getName();
    int getId();

    virtual void display();
};
#endif
