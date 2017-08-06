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
  if (front == 0) {
    front = newNode;
  } 
  back = newNode;
  back->next = front;
  cout << "Added the value " << val << " to queue." << endl;
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
    QueueNode *temp;
    temp = front->next;
    front = temp;
    back->next = front;
    cout << "Deleting " << front->value << endl;
    delete temp;
  }
  return;
}

void Queue::getBack() {
  cout << "The value in the back of the Queue is: " << back->value << endl;
  QueueNode *temp = back->next;
  cout << "The value the back is pointing to is: " << temp->value << endl;
}