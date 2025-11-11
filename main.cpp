#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

#include <iostream>
#include "Course.h"
using namespace std;

Person::Person() : name(""), id(0) {}
Person::Person(string name, int id) : name(name), id(id) {}
Person::~Person() {}

void Person::setName(string name) 
{ this->name = name; }
void Person::setId(int id) 
{ this->id = id; }
string Person::getName()  
{ return name; }
int Person::getId()  
{ return id; }

void Person::display() {
    cout << "Name: " << name << " ID: " << id;
}

Student::Student() : Person(), yearLevel(0), major("") {}
Student::Student(string name, int id, int yearLevel, string major)
    : Person(name, id), yearLevel(yearLevel), major(major) {}

void Student::setYearLevel(int year) { this->yearLevel = year; }
void Student::setMajor(string major) { this->major = major; }
int Student::getYearLevel()  
{ return yearLevel; }
string Student::getMajor()  
{ return major; }

void Student::display() {
    cout << "Name: " << getName() ;
    cout << "Year: " << yearLevel ;
    cout << "Major: " << major ;
}
Instructor::Instructor() : Person(), department(""), 
Instructor::Instructor(string name, int id, string department, int experienceYears)
    : Person(name, id), department(department), experienceYears(experienceYears) {}

void Instructor::setDepartment(string department) { this->department = department; }
void Instructor::setExperienceYears(int years) { this->experienceYears = years; }
string Instructor::getDepartment()  { return department; }
int Instructor::getExperienceYears()  { return experienceYears; }

void Instructor::display()  {
    cout << "Name: " << getName() ;
    cout << "Department: " << department ;
    cout << "Experience: " << experienceYears << " years" ;
}

Course::Course() : courseCode(""), courseName(""), maxStudents(0), currentStudents(0), students(nullptr) {}
Course::Course(string code, string name, int maxStudents,  Instructor& instructor)
    : courseCode(code), courseName(name), maxStudents(maxStudents), currentStudents(0), instructor(instructor) {
    students = new Student[maxStudents];
}
Course::~Course() {
    delete[] students;
}

void Course::addStudent( Student& s) {
    if (currentStudents < maxStudents) {
        students[currentStudents++] = s;
    } else {
        cout << "Course is full. Cannot add more students.";
}

void Course::displayCourseInfo() {
    cout << "Course: " << courseCode << " - " << courseName;
    cout << "Max Students: " << maxStudents;
    cout << "Currently Enrolled: ";
    if (currentStudents > 0)
        cout << students[0].getName() << " (ID: " << students[0].getId() << ")";
    else
        cout << "No students enrolled yet.";
    cout << endl;

    cout << "Instructor Info:" << endl;
    instructor.display();
    cout << endl;

    cout << "Student Info:" << endl;
    for (int i = 0; i < currentStudents; i++) {
        students[i].display();
}
string Course::getCourseCode() 
{ return courseCode; }
string Course::getCourseName() 
{ return courseName; }

int main() {
    Instructor instructor("Dr. Lina Khaled", 1001, "Computer Science", 5);
    Course course("CS101", "Introduction to Programming", 3, instructor);
    Student student1("Omar Nabil", 2202, 2, "Informatics");
    course.addStudent(student1);
    course.displayCourseInfo();
    return 0;
}
