/* Exercises

  YOUR NAME HERE: 

  1. Run the problem several times, what happens?

     Enter your answer here:

  2. Locate and fix the error. What was the error?

      Enter your answer here:

  Expeted Output:

      Enter an integer: 5
      The numbers are not the same.

      Enter an integer: 6
      The numbers are not the same.

*/

// This program tests wheter or not an initialized value
// is equal to a value read from the keyboard.

#include <iostream> // Required for cout and cin
using namespace std; // Required for not having to use std:: before cout and cin

int main()
{
  int number; // Variable to hold a number
  int value = 5; // Variable to hold an initialized value of 5

  // Get a number from the keyboard
  cout << "Enter an integer: ";
  cin >> number;

  // Determine if the number is equal to the value
  if (number = value) // Hint: something is wrong here
    cout << "The numbers are the same.\n";
  else
    cout << "The numbers are not the same.\n";

  return 0;
}