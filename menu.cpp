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
        cin.ignore();
        break;
      }
      case 2 : {
        cin.ignore();
        break;
      }
      case 3 : {
        cin.ignore();
        break;
      }
      case 4 : {
        cin.ignore();
        break;
      }
      case 5 : {
        cin.ignore();
        cout << "\nExiting the program." << endl << endl;
        break;
      }
      default : {
        cout << "\nInvalid choice, please choose from the valid options (1-5)." << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        continue;
      }
    }
    break;
  } while (choice < 1 || choice > 5);
}