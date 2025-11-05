#include "linked_list.h"

int main(){
  
  LinkedList list {10};
  list.insertEnd(20);
  list.insertEnd(30);
  
  list.printList();

  return 0;
}
