/* Exercises

  YOUR NAME HERE: 

  1. Run the problem several times, what happens?

     Enter your answer here:

  2. Modify the program to allow to show different messages for more grade ranges.
      above 100 = "Invalid grade"
      90-100 = "You got an A"
      80-89 = "You got a B"
      60-79 = "You passed"
      0-59 = "You failed"
      below 0 = "Invalid grade"
  
  Example Runs:
  
      Enter your grade: 95
      You got an A

      Enter your grade: 75
      You passed

      Enter your grade: 55
      You failed

      Enter your grade: 105
      Invalid grade

*/

// The program prints "You Pass" if the user enters a grade of 60 or higher.
// It prints "You Fail" if the user enters a grade of less than 60.

#include <iostream> // Required for cout and cin
using namespace std; // Required for not having to use std:: before cout and cin

int main()
{
  int grade; // Variable to hold a grade

  // Get a grade from the keyboard
  cout << "Enter your grade: ";
  cin >> grade;

  // Determine if the grade is equal to the value
  // Hint: add more if statements to show different messages
  if (grade >= 60)
    cout << "You Pass\n";
  else
    cout << "You Fail\n";

  return 0;
}