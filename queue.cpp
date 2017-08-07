#include "queue.hpp"
#include <iostream>
using std::cout;
using std::endl;

Queue::Queue() {
  front = 0;
  back = 0;
}

Queue::~Queue() {
    // delete front;
  cout << "Destructing Queue\n";
}

void Queue::addBack(int val) {
  QueueNode *newNode = new QueueNode;
  newNode->value = val;
  cout << "Added the value " << val << " to queue." << endl;

  if (front == 0) { // if front is null
    newNode->next = newNode; // set next to point to first node
    newNode->previous = newNode; // set previous to point to first node
    front = newNode; // set front equal to first node
    back = newNode; // set back equal to only node
    cout << "Address of Front: " << front << endl;
    cout << "New Node Previous = " << newNode->previous << endl;
    cout << "New Node Next = " << newNode->next << endl;
    return;
  }

  QueueNode *last = front->previous; //stores last value for new node previous value
  newNode->next = front; // since node is last, set newNode next to point to front
  front->previous = newNode; // set front->previous pointing to the new last node in list
  newNode->previous = last; // set new nodes previous pointer to the old value that was the last before this was added
  last->next = newNode; // set previous last nodes next pointer pointing to new last value
  back = newNode; // sets the new node to be the last in the list
    cout << "Address of Front: " << front << endl;
    cout << "Address of New Node: " << newNode << endl;
    cout << "New Node Previous = " << newNode->previous << endl;
    cout << "New Node Next = " << newNode->next << endl;

  return;
}

int Queue::getFront() {
  cout << "The value in the front of the Queue is: " << front->value << endl;
  return front->value;
}

void Queue::removeFront() {
  if (front == 0) {
    cout << "Nothing to delete, Queue is empty." << endl;
  } else {
    QueueNode *temp = front;
    cout << "Temp/Front = " << temp << endl;
    front = front->next;
    cout << "Front after adjustment = " << front << endl;
    cout << "Back Address: " << back << endl;
    delete temp;
    front->previous = back;
    back->next = front;
    cout << "Back->next = " << back->next << endl;
    cout << "front->previous" << front->previous << endl;
  }
  return;
}

void Queue::getBack() {
  cout << "The value in the back of the Queue is: " << back->value << endl;
  // QueueNode *temp = back->next;
  // cout << "The value the back is pointing to is: " << temp->value << endl;
}