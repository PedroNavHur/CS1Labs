/*
  // YOUR NAME HERE

  Exercises:

  1. Complete the program below.

  Sample run 1:
    Enter the rainfall for month 1: 10 
    Enter the rainfall for month 2: 15
    Enter the rainfall for month 3: 20.5
    Enter the rainfall for month 4: 25
    Enter the rainfall for month 5: 23
    Enter the rainfall for month 6: 56
    Enter the rainfall for month 7: 89
    Enter the rainfall for month 8: 12
    Enter the rainfall for month 9: 69
    Enter the rainfall for month 10: 96
    Enter the rainfall for month 11: 123
    Enter the rainfall for month 12: 321

    The total rainfall for the year is 859.5 inches.

  Sample run 2:
    Enter the rainfall for month 1: -1
    Rainfall must be 0 or more. Please re-enter: 123
    Enter the rainfall for month 2: 321
    Enter the rainfall for month 3: 123
    Enter the rainfall for month 4: 321
    Enter the rainfall for month 5: 123
    Enter the rainfall for month 6: 321
    Enter the rainfall for month 7: 123
    Enter the rainfall for month 8: 321
    Enter the rainfall for month 9: 123
    Enter the rainfall for month 10: 321
    Enter the rainfall for month 11: 123
    Enter the rainfall for month 12: 321

    The total rainfall for the year is 2664 inches.

*/

// This program illustrates the use of the while loop.

#include <iostream> // Required for cin and cout
using namespace std; // Required for not having to use std::

int main () {

  int month = 1; // Loop control variable

  float totalRainfall = 0.0; // Accumulator
  float monthlyRainfall; // To hold the monthly rainfall

  // Get the rainfall for each month
  while (/**** TODO: FILL IN THE CONDITION to get 12 months ****/) {
    cout << "Enter the rainfall for month " << month << ": ";
    cin >> monthlyRainfall;

    // Validate the input
    while (/**** TODO: FILL IN THE CONDITION to validate the input****/) {
      cout << "Rainfall must be 0 or more. Please re-enter: ";
      cin >> monthlyRainfall;
    }

    // Update the total
    totalRainfall += monthlyRainfall;

    // Update the loop control variable
    month++;
  }

  // Display the total rainfall
  cout << "\nThe total rainfall for the year is " << totalRainfall << " inches." << endl;
}