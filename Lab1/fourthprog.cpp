/* Exercises

  1. Bring in the file thirdprog.cpp and compile it
  2. Try to run the program, what happens?
    - The program compiles successfully, and runs successfully.
    - But the output is not what we expect.
  3. Fix the error and run the program again.
     - Hints: did we swap the values?
*/


// This program takes two values from the user and then swaps them // before printing the values. The user will be prompted to enter // both numbers.
// Place your name here

#include <iostream> // needed to perform C++ I/O
using namespace std; // needed to use shorthand notation

int main()
{
  float firstNumber; // floating point variable called firstNumber
  float secondNumber; // floating point variable called secondNumber

  // Prompt user to enter the first number.
  cout << "Enter the first number" << endl;
  cout << "Then hit enter" << endl;
  cin >> firstNumber;

  // Prompt user to enter the second number.
  cout << "Enter the second number" << endl;
  cout << "Then hit enter" << endl;
  cin >> secondNumber;

  // Echo print the input.
  cout << endl
       << "You input the numbers as " << firstNumber << " and " << secondNumber << endl;

  // Now we will swap the values. Note the errror in this code...
  firstNumber = secondNumber; // store secondNumber in firstNumber
  secondNumber = firstNumber; // store firstNumber (now secondNumber) in secondNumber
  
  // How can we fix this?
  // Hints: we need a temporary variable to store the value of firstNumber before we overwrite it.
  // float temp = firstNumber;
  // firstNumber = secondNumber;
  // secondNumber = temp;

  // Output the values.
  cout << "After swapping, the values of the two numbers are " << firstNumber << " and " << secondNumber << endl;
  
  // Return 0 to indicate normal termination
  return 0;
}