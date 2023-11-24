/* Exercise 11.3 Arrays of Structures

  1. Fill in the missing code in the following program so it works as described in the comments.

  2. Why do we need (index + 1) in the cout statement in the for loop?
     Answer here:

*/

#include <iostream>
#include <iomanip>

using namespace std;

// This program demonstrates how to use an array of structures

struct TaxPayer {
  float taxRate;
  float income;
  float taxes;
};

int main() {
  // TODO: Fill in code to declare an array named citizen which holds 5 TaxPayer structures

  cout << fixed << showpoint << setprecision(2);

  cout << "Please enter the annual income and tax rate for 5 tax payers: " << endl;
  cout << endl;

  for (int count = 0; count < 5; count++) {
    cout << "Enter this year's income for tax payer " << (count + 1);
    cout << ": ";
    // TODO: Fill in code to read in the income to the appropriate place

    cout << "Enter the tax rate for tax payer # " << (count + 1);
    cout << ": ";
    // TODO: Fill in code to read in the tax rate to the appropriate place

    // TODO: Fill in code to compute the taxes for the citizen and store it in the appropriate place

    cout << endl;
  }

  cout << "Taxes due for this year: " << endl << endl;
  for (int index = 0; index < 5; index++) {
    cout << "Tax Payer # " << (index + 1) << ": " << "$ " << citizen[index].taxes << endl;
  }

  return 0;
}