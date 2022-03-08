#ifndef STUDENT_H
#define STUDENT_H
#pragma once 

#include "GameEntry.hpp"

using namespace std;


class Student {
public:
    Student(const string& n="", int g=0, int sem);
    string getName() const;
    int getGPA() const;
    int getSemester() const;

private:
    string name;
    int gpa;
    int semester;
};

#endif