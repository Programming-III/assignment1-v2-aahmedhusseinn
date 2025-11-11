#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

public:
    Course();
    Course(string courseCode, string courseName, int maxStudents, const Student& student);
    ~Course();

    void addStudent(Student& s);
    void displayCourseInfo();

    string getCourseCode();
    string getCourseName();
};
#endif
