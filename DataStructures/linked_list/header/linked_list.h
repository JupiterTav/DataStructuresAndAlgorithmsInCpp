#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};

class LinkedList{
  private:
    Node *head;
    Node *tail;
  public:
    LinkedList();
    LinkedList(int headData);

    void insertEnd(int data);

    void printList();
};
#endif
