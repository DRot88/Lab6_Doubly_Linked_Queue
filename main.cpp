/****************************************************************
** Author: Daniel Rotenberg
** Date: 8/6/2017
** Description: The main program will display a Menu to the user
                that has a few options for a Queue. They will
                be able to add, remove, and display items in the
                queue.
****************************************************************/

#include <iostream>
#include "menu.hpp"
#include "queue.hpp"
using std::cout;
using std::endl;

int main() {
  Menu queueMenu;
  queueMenu.displayMenu();

  // Queue q1;
  // cout << endl;
  // q1.getFront();
  // q1.removeFront();
  // q1.addBack(5);
  // q1.removeFront();
  // q1.addBack(6);  
  // // q1.addBack(10);  
  // // q1.addBack(1);  
  // // q1.addBack(3);  
  // q1.displayQueue();
  // q1.removeFront();
  // q1.getFront();
  // q1.removeFront();
  // q1.removeFront();
  // q1.displayQueue();  
  // q1.getFront();
  // q1.addBack(1);
  // q1.addBack(0);
  // q1.displayQueue();  
  // q1.getFront();
  // q1.removeFront();

  return 0;
}