#ifndef QUEUE_HPP
#define QUEUE_HPP

struct QueueNode {
public:
  int value;
  QueueNode *previous;
  QueueNode *next;
};

class Queue {
private:
  QueueNode *front;
  QueueNode *back;
public:
  Queue();
  ~Queue();
  void addBack(int val); // puts an item at the end of the queue
  int getFront(); // returns the value at the front of the queue
  void removeFront(); // removes the front item in the structure
  void displayQueue(); // displays all of the items in the queue
};

#endif