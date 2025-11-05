#pragma once
#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;

  Node() {
      next = nullptr;
  }
};

class LinkedList{
  private:
    Node *head;
    Node *tail;
  public:
    LinkedList();
    LinkedList(int headData);

    void insertEnd(int data);

    void insertTop(int data);

    void printList();


    int getHead() { return head->data; }
    int getTail() { return tail->data; }
};
