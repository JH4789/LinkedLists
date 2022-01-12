#include <iostream>
#include <cstring>
#include "Node.h"
using namespace std;
Node* head = NULL;
int main() {
  //Creates two students that are added to a linked list, prints out info using nodes
  Student* test;
  Student* test1;
  char first[100] = "Nihal";
  char last[100] = "P";
  test -> setID(12345);
  test -> setGPA(3.5);
  test->setFirst(first);
  test->setLast(last);
  test1 -> setGPA(3.2);
  test1 -> setID(234);
  test1->setFirst(first);
  test1->setLast(last);
  head = new Node(test);
  head->setNext(new Node(test1));
  head->getStudent()->getYear();
  head->getNext()->getStudent()->getYear();
  return 0;
}


