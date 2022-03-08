#include <iostream>
#include "Student.hpp"

using namespace std;

Student::Student(const string& n, int g, int sem)
  : name(n), gpa(g), semester(sem) {}

string Student::getName() const { return name; }

int Student::getGPA() const { return gpa; }

int Student::getSemester() const { return semester; }

