#include  "../header/linked_list.h"
#include <cstdlib>

LinkedList::LinkedList(){
  head = nullptr;
  tail = nullptr;
}

LinkedList::LinkedList(int data){
  Node *p =  new Node;// (Node *) malloc(sizeof(Node));
  p->data = data;
  head = p;
  tail = p;
}

void LinkedList::insertAtIndex(int data, int index){
  Node *p = new Node;
  Node *temp_h = new Node;
  temp_h = head;
  p->data = data;

  if(head == nullptr){
    head = p;
    tail = p;
  }

  if(index <=0){
    p->next = head;
    head = p;
  }
  else{
    
    while(index-- > 1)
      temp_h = temp_h->next;

    if(temp_h->next == nullptr){
      p->next = nullptr;
      temp_h->next = p;
      tail = p;
    } 
    else{
      p->next = temp_h->next;
      temp_h->next = p;
    }
  }
}

void LinkedList::insertEnd(int data){
  Node *p = new Node;
  p->data = data;

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
  if(head == nullptr){
      head = p;
      tail = p;
  }
  else{
    p->next = head;
    head = p;
  }
}

void LinkedList::removeTail(){
  Node *p = new Node;
  Node *temp = new Node;
  if(head != nullptr){
    temp = head;
    while(temp->next->next != nullptr){
      temp = temp->next;
    }
    p = temp->next;
    temp->next = nullptr;
    free(p);
  }
}

void LinkedList::removeHead(){
  Node *p = new Node;
  if(head != nullptr){
    p = head;
    head = p->next;
    free(p);
  }
}

void LinkedList::removeAtIndex(int index){
  Node *p = new Node;
  Node *temp = new Node;
  if(head != nullptr && index > 0){
    temp = head;
    for(int i = 1; i <= index-1; i++)
        temp = temp->next;
    p = temp->next;
    temp->next = p->next;
    free(p);
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
