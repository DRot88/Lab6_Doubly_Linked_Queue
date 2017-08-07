#include "menu.hpp"
#include <iostream>
#include <cstdlib>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::streamsize;
using std::numeric_limits;

Menu::Menu() {
  return;
}

/****************************************************************
** Function: displayMenu
** Description: This will display the options for the user to 
                choose from for the queue.
****************************************************************/

void Menu::displayMenu() {
  int choice = 0;
  cout << "\n1: Enter a value to be added to the queue." << endl;
  cout << "2: Display first node (front) value." << endl;
  cout << "3: Remove the first node (front) value." << endl;
  cout << "4: Display the queue contents." << endl;
  cout << "5: Exit" << endl << endl;
  cout << "Please choose from one of the above options: ";
  
  do {
    cin >> choice;    
    switch(choice) {
      case 1 : {
        int value = 0;
        cout << "\n\nPlease enter the integer you would like to add to the Queue: ";
        cin >> value;
        while (!cin) {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cin >> value;
        }
          
          q1.addBack(value);
          cin.ignore();
          cin.clear();
        
        displayMenu();
        break;
      }
      case 2 : {
        q1.getFront();
        cin.ignore();
        displayMenu();
        break;
      }
      case 3 : {
        q1.removeFront();
        cin.ignore();
        displayMenu();
        break;
      }
      case 4 : {
        q1.displayQueue();
        cin.ignore();
        displayMenu();
        break;
      }
      case 5 : {
        cin.ignore();
        cout << "\nExiting the program." << endl << endl;
        break;
      }
      default : {
        cout << "\nInvalid choice, please choose from the valid options." << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
      }
    }
    break;
  } while (choice < 1 || choice > 5);
}