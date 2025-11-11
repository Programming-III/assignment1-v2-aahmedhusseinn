#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:public Person {
    private:
    string department;
    int experienceYears;

    public:
    Instructor();
    Instructor(string name, int id, string department, int experienceYears);
    ~Instructor();

    void setDepartment(string department);
    void setExperienceYears(int years);

    string getDepartment();
    int getExperienceYears();

    void display() const override;
};
#endif
