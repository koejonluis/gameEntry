#ifndef STUDENT_H
#define STUDENT_H
#pragma once 

#include <string>

using namespace std;


class Student {
public:
    string name;
    Student(const string& n="", int g=0, int sem=0);
    int gpa;
    int semester;
    string getName() const;
    int getGPA() const;
    int getSemester() const;
    void sortStudents(char* A, int n);

private:
};

#endif