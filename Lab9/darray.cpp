// This program demonstrates the use of dynamic arrays

/* Exercises:
   1. Complete the program by filling in the code where TODOs indicate.
      Note: use pointer variables and the & and * operators.
   2. Sample Run:
      How many monthly sales will be processed? 3
      Enter the sales below
      Sales for Month number 1: 950.00
      Sales for Month number 2: 2000.00
      Sales for Month number 3: 3050.00
      Average Monthly sale is $2000.00

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float *monthSales = nullptr; // a pointer used to point to an array

  float total = 0; // total of all sales
  float average; // average of monthly sales
  int numOfSales; // number of sales to be processed

  cout << fixed << showpoint << setprecision(2);

  cout << "How many monthly sales will be processed? ";
  cin >> numOfSales;

  monthSales = new ____; // TODO: Fill in code to allocate memory for the array pointed to by monthSales

  if (monthSales == _____) { // TODO: Fill in code to determine if memory has been allocated (or exit if memory was not allocated)
    cout << "Error allocating memory!\n";
    return 1;
  }

  cout << "Enter the sales below\n";
  for (int count = 0; count < numOfSales; count++) {
    cout << "Sales for Month number " << count + 1 << ": ";
    cin >> _____; // TODO: Fill in code to read a floating point number into the array referenced by monthSales
  }

  for (int count = 0; count < numOfSales; count++) {
    total = total + ______; // TODO: Fill in code to sum the array referenced by monthSales
  }

  average = total / numOfSales;

  cout << "Average Monthly sale is $" << average << endl;

  // TODO: Fill in code to deallocate memory assigned to the array.

  return 0;
}