/* Exercises

  1. Bring in the file thirdprog.cpp and compile it
  2. Try to run the program, what happens?
    - The program compiles successfully. But when you run it, it crashes or doesn't work as expected.
    - This program has a run-time error.
  3. Fix the error and run the program again.
     - Hints: are we really dividing by 2?
*/

// This program will take a number and divide it by 2. // Place your name here
#include <iostream>
using namespace std;

int main()
{
  float number; // declare a variable to hold a floating point number called number
  int divider; // declare a variable to hold an integer called divider

  // set the divider to 2 (we want to divide by 2)
  divider = 0; // What's wrong with this line?

  // print a message to the screen
  cout << "Hi there" << endl;
  cout << "Please input a number and then hit return" << endl;

  // read a number from the keyboard
  cin >> number;
  
  // set the number as half of itself
  number = number / divider;

  // print the result to the screen
  cout << "Half of your number is " << number << endl;

  // Return 0 to indicate normal termination
  return 0;
}