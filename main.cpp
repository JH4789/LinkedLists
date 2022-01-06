#include <iostream>
#include <cstring>
#include "Node.h"
using namespace std;
/*
void addStudent(Student* newstudent);
*/
void printStudent(Node* next);

Node* head = NULL;
int main() {
  Student* test;
  Student* test1;
  test -> setYear(4);
  test1 -> setYear(5);
  head = new Node(test);
  head->setNext(new Node(test1));
  printStudent(head);  
  return 0;
}
/*
void addStudent(Student* newstudent) {
  Node* current = head;
  newstudent->setYear(4);
  if(current == NULL) {
    head = new Node(newstudent);
  }
  
  else {
    while(current->getNext() != NULL) {
      current = current->getNext();
    }
  }
  current->setNext(new Node(newstudent));
  
}
*/
void printStudent(Node* next) {
  if(next == head) {
    cout << "Start: ";
  }
  if (next != NULL) {
    cout << next->getStudent()->getYear() << endl;
    printStudent(next->getNext());
  }
}

