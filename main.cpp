#include <iostream>
#include "menu.hpp"
#include "queue.hpp"
using std::cout;
using std::endl;

int main() {
  // Menu queueMenu;
  // queueMenu.displayMenu();

  Queue q1;

  cout << endl;
  q1.addBack(5);
  q1.addBack(6);  
  q1.addBack(10);  
  q1.addBack(1);  
  q1.addBack(3);  
  q1.addBack(1);
  q1.addBack(0);
  cout << endl;

  q1.getBack();
  q1.getFront();

  q1.removeFront();
  q1.removeFront();
  cout << endl;

  q1.getFront();
  q1.getBack();

  return 0;
}