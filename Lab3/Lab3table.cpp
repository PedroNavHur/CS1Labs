/* Exercises

  YOUR NAME HERE: 

  1. Fill in the code so that the program produces the following:

      Please input the quantity and price of item 1
      > 5 10
      Please input the quantity and price of item 2
      > 3 5

      Item  Price  Quantity     Total
      1     10.00         5     50.00
      2      5.00         3     15.00

  2. What is the purpose of setw()?

     Your answer here:
*/

#include <iostream> // needed to perform C++ I/O
#include // TODO: include the library needed for setw() and setprecision()
using namespace std; // needed to use shorthand notation

int main() { // Code inside here is what is executed

  // Declare variables
  int quantity1, quantity2; // The quantity of the item
  float itemPrice1, itemPrice2; // The price of the item
  float totalBill1, totalBill2; // The total bill

  // Get the quantity and price of the first item
  cout << "Please input the quantity and price of item 1" << endl;
  cin >> quantity1 >> itemPrice1;

  // Get the quantity and price of the second item
  cout << "Please input the quantity and price of item 2" << endl;
  // TODO: read in the quantity and price of the second item

  // Calculate the total bill for the first item
  totalBill1 = quantity1 * itemPrice1;

  // Calculate the total bill for the second item
  // TODO: Fill in the code to calculate the total bill for the second item


  cout << fixed << setprecision(2); // Set the precision of the output to 2 decimal places

  // Print the table
  cout << "Item" << setw(7) << "Price" << setw(10) << "Quantity" << setw(10) <<"Total" << endl;
  // TODO: Fill in the code to print the table

  return 0; // Terminate the program
}