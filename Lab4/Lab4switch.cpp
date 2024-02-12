/* Exercises

  YOUR NAME HERE: 

  1. Run and try to understand the program. What happens?

     Enter your answer here:

  2. Add an additional message that tells the student if they passed for a grade of D or higher.

  3. Can you send the additional message with a single cout statement? Try to do it.

  Example Run:

      Enter your letter grade (A, B, C, D, or F): A
      You passed!
      You got an A - excellent work!

      Enter your letter grade (A, B, C, D, or F): D
      You passed!
      You got a D - close enough

      Enter your letter grade (A, B, C, D, or F): F
      You got an F - better luck next time

*/

// This program illustrates the use of the switch statement

#include <iostream> // Required for cout and cin
using namespace std; // Required for not having to use std:: before cout and cin

int main()
{
  char grade; // Variable to hold a grade

  // Get a grade from the keyboard
  cout << "Enter your letter grade (A, B, C, D, or F): ";
  cin >> grade;

  switch(grade)
  {
    case 'A':
      cout << "You got an A - excellent work!\n";
      break;
    case 'B':
      cout << "You got a B - good job!\n";
      break;
    case 'C':
      cout << "You got a C - satisfactory!\n";
      break;
    case 'D':
      cout << "You got a D - close enough\n";
      break;
    case 'F':
      cout << "You got an F - better luck next time\n";
      break;
    default:
      cout << "Invalid grade\n";
  }
}