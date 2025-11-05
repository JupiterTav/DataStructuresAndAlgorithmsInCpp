#include  "../header/linked_list.h"

LinkedList::LinkedList(){
  head = nullptr;
  tail = nullptr;
}

LinkedList::LinkedList(int data){
  Node *p =  new Node;// (Node *) malloc(sizeof(Node));
  p->data = data;
  p->next = nullptr;
  head = p;
  tail = p;
}

void LinkedList::insertEnd(int data){
  Node *p = new Node;
  p->data = data;
  p->next = nullptr;

  if(head == nullptr){
    head = p;
    tail = p;
  } 
  else {
    tail->next = p;
    tail = p;
  }
}

void LinkedList::insertTop(int data){
  Node *p = new Node;
  p->data = data;
  if(head == nullptr)
      head = p;
  else{
    p->next = head;
    head = p;
  }
}

void LinkedList::printList(){
  Node *p = new Node;
  p = head;
  while(p != nullptr){
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}
