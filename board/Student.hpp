#ifndef STUDENT_H
#define STUDENT_H
#pragma once 

#include <string>

using namespace std;


class Student {
public:
    Student(const string& n="", int g=0, int s=0);
    string getName() const;
    int getGPA() const;
    int getSemester() const;
    void sortStudents();

    string name;
private:
    int gpa;
    int semester;
};

#endif