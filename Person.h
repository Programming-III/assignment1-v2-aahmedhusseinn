#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
string name;
int id;

public:
    Person();
    Person(string name, int id);
    virtual ~Person();

    void setName(string name);
    void setId(int id);

    string getName() const;
    int getId() const;

    virtual void display() const;
};
#endif
