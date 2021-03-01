#include <iostream>
#include "Node.h"

using namespace std;


void printList(Node *head) {
  if (head == NULL) {
    cout << "Empty list" << endl;
    return;
  }

  Node *temp = head;
  int count = 0;
  while(temp != NULL) {
    cout << "Node " << count << ": " << temp ->data_ << endl;
    count++;
    temp = temp->next_;
  }
}

int main() {
  // Create an unsorted list:
  Node one, two, three, four, five;
  one.data_ = 1;
  two.data_ = 2;
  three.data_ = 3;
  four.data_ = 4;
  five.data_ = 5;

  cout << Node::getNumNodes() << endl;
  // 2 -> 4 -> 1 -> 5 -> 3
  Node *head = &two;
  two.next_ = &four;
  four.next_ = &one;
  one.next_ = &five;
  five.next_ = &three;
  three.next_ = NULL;

  cout << Node::getNumNodes() << endl;

  // Unsorted List:
  cout << &head << endl;
  cout<<"Unsorted List:"<<endl;
  printList(head);
  cout << &head << endl;

  // Sorted List:
  cout << &head << endl;
  sortList(&head);
  cout<<"Sorted List:"<<endl;
  printList(head);
  cout << &head << endl;

  cout << Node::getNumNodes() << endl;

  head = new Node();
  head->data_ = 1;
  cout << &head << endl;
  sortList(&head);
  printList(head);
  cout << &head << endl;

  head = nullptr;
  cout << &head << endl;
  sortList(&head);
  printList(head);
  cout << &head << endl;
  return 0;
}
