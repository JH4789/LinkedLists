#include "Student.h"
#include <cstring>

void Student::setID(int newid) {
  id = newid;
}
void Student::setFirst(char* newfirstname) {
  firstname = new char[100];
  strcpy(firstname, newfirstname);
}
void Student::setLast(char* newlastname) {
  lastname = new char[100];
  strcpy(lastname, newlastname);
}
void Student::setGPA(float newgpa) {
  gpa = newgpa;
}
void Student::getYear() {
  cout << id << endl;
  cout << firstname << endl;
  cout << lastname << endl;
  cout << gpa << endl;
}
