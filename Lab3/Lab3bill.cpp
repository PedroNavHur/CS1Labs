/* Exercises

  YOUR NAME HERE: 

  1. Fill in the code so that the program will produce the following:
  
      Please input the quantity of the item
      > 5
      Please input the price of the item
      > 10
      The total bill is $50.00

  2. Change setprecision(2) to setprecision(4) and run the program again. What happens?

     Your answer here:

  3. What is the purpose of setprecision()?

     Your answer here:

  4. What is the purpose of showpoint?
  
     Your answer here:

  5. What is the purpose of fixed?

      Your answer here:

  6. Why or why not do you need both showpoint and fixed?

      Your answer here:

*/

// This program will read in the quantity of a particular item and its price
// It will then print out the total price of the item
// The input will come from the keyboard and the output will go to the screen

#include <iostream> // needed to perform C++ I/O
#include <iomanip> // needed for setting precision
using namespace std; // needed to use shorthand notation

int main() { // Code inside here is what is executed

  // Declare variables
  int quantity; // The quantity of the item
  float itemPrice; // The price of the item
  float totalBill; // The total bill

  // Get the quantity of the item
  cout << "Please input the quantity of the item" << endl;
  cin >> quantity;

  // Get the price of the item
  // TODO: print a message to the user to input the price of the item
  // TODO: read in the price of the item

  // Calculate the total bill
  // TODO : Fill in the code to calculate the total bill

  // Set the precision to 2 decimal places
  cout << fixed << setprecision(2) << showpoint;

  // Output the total bill
  cout << "The total bill is $" << totalBill << endl;

  return 0; // Return 0 to indicate normal termination

}