#include <iostream>
#include "Student.hpp"

using namespace std;

Student::Student(const string& n, int g, int s)
  : name(n), gpa(g), semester(s){}

string Student::getName() const { return name; }

int Student::getGPA() const { return gpa; }

int Student::getSemester() const { return semester; }

void Student::sortStudents() 
{}

