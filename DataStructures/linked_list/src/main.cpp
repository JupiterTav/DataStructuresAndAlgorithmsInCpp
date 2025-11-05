#include "../header/linked_list.h"
#include <iostream>
using namespace std;

int main(){
  
  cout << "---- Inserting at tail ----" << endl;
  LinkedList list {10};
  list.insertEnd(20);
  list.insertEnd(30);
  
  list.printList();

  cout << " ---- Inserting at top ----" << endl;
  list.insertTop(5);
  list.insertTop(2);
  list.printList();

  cout << " ---- Inserting at index ----" << endl;
  list.insertAtIndex(7, 3);
  list.insertAtIndex(21, 0);
  list.insertAtIndex(80, 7);
  list.printList();

  return 0;
}
