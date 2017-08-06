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
  void addBack(int val); // puts on item at the end of the queue
  int getFront(); // returns the value at the front of the queue
  void removeFront(); // removes the front item in the structure
  void getBack();// REMOVE AFTER TESTING
};

#endif