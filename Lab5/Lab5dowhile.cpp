/*
  // YOUR NAME HERE

  Exercises:

  1. Complete the program below.

  Sample run:
    Hot Beverage Menu
    1. Tea
    2. Coffee
    3. Hot Chocolate
    4. Quit the program
    Enter your choice: 1
    You chose Tea.
    Do you want to make another selection? (1=yes, 2=no): 1
    Hot Beverage Menu
    1. Tea
    2. Coffee
    3. Hot Chocolate
    4. Quit the program
    Enter your choice: 2
    You chose Coffee.
    Do you want to make another selection? (1=yes, 2=no): 2

    Hot Beverage Menu
    1. Tea
    2. Coffee
    3. Hot Chocolate
    4. Quit the program
    Enter your choice: 55
    Please enter 1, 2, 3, or 4: 1
    You chose Tea.
    Do you want to make another selection? (1=yes, 2=no): 2


*/

// This program displays a hot beverage menu and prompts the user to make a selection.
// A switch statement is used to determine the user's selection.
// A do-while loop at the end gives the user the option to make multiple selections.

#include <iostream> // Required for cin and cout
#include <stdlib.h> // Required for system("CLS")
using namespace std; // Required for not having to use std::

int main() {
  
    int choice; // To hold the user's menu choice
  
    do { // Loop to allow the user to make multiple selections
    
      // Display the menu
      cout << "Hot Beverage Menu\n";
      cout << "1. Tea\n";
      cout << "2. Coffee\n";
      cout << "3. Hot Chocolate\n";
      cout << "4. Quit the program\n";
      cout << "Enter your choice: ";
      cin >> choice;
  

      // TODO: Validate the input with a while loop
      // Validate the menu selection
  
      // Process the user's choice
      switch (choice) {
        case 1:
          cout << "You chose Tea.\n";
          break;
        case 2:
          cout << "You chose Coffee.\n";
          break;
        case 3:
          cout << "You chose Hot Chocolate.\n";
          break;
        case 4:
          cout << "Exiting the program.\n";
          break;
      }

      // Exit the loop early if the user chose 4
      if (choice == 4) break;

      // Ask the user if they want to make another selection
      cout << "Do you want to make another selection? (1=yes, 2=no): ";
      cin >> choice;

      // Validate the additional selection
      while (choice < 1 || choice > 2) {
        cout << "Please enter 1 or 2: ";
        cin >> choice;
      }

      // Exit the program by setting choice to 4
      if (choice == 2) choice = 4;

      // TODO: uncomment the appropriate command to clear the screen
      // system("CLS"); // For Windows
      // system("clear"); // For Macs/Linux
    } while (choice != 4);
  
    return 0;
}


