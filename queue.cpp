#include "queue.hpp"
#include <iostream>
using std::cout;
using std::endl;

Queue::Queue() {
  front = 0;
  back = 0;
}

Queue::~Queue() {
  if (front == 0) {
      return;
  } else {
    QueueNode *temp = front;
    while (temp != back) {
      QueueNode *nextToDelete = temp->next;
      delete temp;
      temp = nextToDelete;
    }
    delete back;
  }
}

/****************************************************************
** Function: addBack(int val)
** Description: This will take an integer as a parameter and add
                the integer to the back of the Queue list. The
                function will also correctly adjust the previous
                and next pointers for the QueueNode Structure.
****************************************************************/

void Queue::addBack(int val) {
  QueueNode *newNode = new QueueNode;
  newNode->value = val;
  cout << "Added the value " << val << " to queue." << endl;

  if (front == 0) { // if front is null
    newNode->next = newNode; // set next to point to first node
    newNode->previous = newNode; // set previous to point to first node
    front = newNode; // set front equal to first node
    back = newNode; // set back equal to only node
    // cout << "Address of Front: " << front << endl;
    // cout << "New Node Previous = " << newNode->previous << endl;
    // cout << "New Node Next = " << newNode->next << endl;
    return;
  }

  QueueNode *last = front->previous; //stores the old final value in Queue
  newNode->next = front; // since newNode is now the final, set newNode->next to point to front
  front->previous = newNode; // set front->previous pointing to the new final node in list
  newNode->previous = last; // set new nodes previous pointer to the old value that was the last before this was added
  last->next = newNode; // set previous final nodes next pointer pointing to new last value
  back = newNode; // sets the new node to be the final node in the list
    // cout << "Address of Front: " << front << endl;
    // cout << "Address of New Node: " << newNode << endl;
    // cout << "New Node Previous = " << newNode->previous << endl;
    // cout << "New Node Next = " << newNode->next << endl;

  return;
}

/****************************************************************
** Function: getFront()
** Description: This will return the first value in the Queue.
****************************************************************/

int Queue::getFront() {
  if (front == 0) {
    cout << "There is no front value!" << endl;
    return 0;
  } else {
    cout << "The value in the front of the Queue is: " << front->value << endl;
    return front->value;
  }
}

/****************************************************************
** Function: removeFront()
** Description: This will remove the first value in the Queue.
                To do so, it will reconfigure where the pointers
                will point to to avoid memory leaks.
****************************************************************/

void Queue::removeFront() {
  if (front == 0) {
    cout << "Nothing to delete, Queue is empty." << endl;
  } else if (front->next == front) { // if only 1 node
    front = 0;
    cout << "Value to be deleted: " << back->value << endl;
    delete back;
    return;
  } else {
    QueueNode *temp = front;
    cout << "Value to be deleted: " << temp->value << endl;
    front = front->next;
    // cout << "Front after adjustment = " << front << endl;
    // cout << "Back Address: " << back << endl;
    delete temp;
    front->previous = back;
    back->next = front;
    // cout << "Back->next = " << back->next << endl;
    // cout << "front->previous" << front->previous << endl;
  }
  return;
}

/****************************************************************
** Function: displayQueue()
** Description: This will print the values in the Queue if there
                are any.
****************************************************************/

void Queue::displayQueue() {
  if (front == 0) {
    cout << "Queue is empty, nothing to display." << endl;
  } else {
    QueueNode *temp = front;
    cout << "Nodes: ";
    do {
      cout << temp->value << " ";
      temp = temp->next;
    } while (temp->next != front->next);
    cout << endl;
  }
}