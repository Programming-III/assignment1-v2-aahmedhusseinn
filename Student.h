#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class Student:public Person {
private:
    int yearLevel;
    string major;

public:
    Student();
    Student(string name, int id, int yearLevel, string major);
    ~Student();

    void setYearLevel(int year);
    void setMajor(string major);

    int getYearLevel();
    string getMajor();

    void display() const override;
};
#endif
