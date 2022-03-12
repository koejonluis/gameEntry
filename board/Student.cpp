#include <iostream>
#include "Student.hpp"

using namespace std;

Student::Student(const string& n, int g, int sem)
  : name(n), gpa(g), semester(sem){}

string Student::getName() const { return name; }

int Student::getGPA() const { return gpa; }

int Student::getSemester() const { return semester; }

void Student::sortStudents(char* A, int n) 
{
  for (int i = 1; i < n; i++)
  {
    char cur = A[i];
    int j = i - 1;
    while((j >= 0) && (A[j] > cur))
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j+1] = cur;
  }
}

