/* Exercises

  YOUR NAME HERE: 

  1. Run and try to understand the program. What happens?

     Enter your answer here:

  2. Rewrite the logical expression using the opposite operators. Keep the same behavior.

     Hint: Demorgans Law = !(A && B) = !A || !B
                           !(A || B) = !A && !B

     Why does this work? See:
     I don't like apples and I don't like oranges = I don't like apples or oranges

*/

// This program illustrates the use of logical operators

#include <iostream> // Required for cout and cin
using namespace std; // Required for not having to use std:: before cout and cin

int main()
{
  char year; // Variable to hold a year
  float gpa; // Variable to hold a gpa

  // Get a year from the keyboard
  cout << "Enter 1 for freshman, 2 for sophomore, 3 for junior, or 4 for senior: ";
  cin >> year;

  // Get a gpa from the keyboard
  cout << "Enter your gpa: ";
  cin >> gpa;

  // If their gpa is greater than or equal to 2.0 and they are a senior, they can graduate
  if (gpa >= 2.0 && year == '4') // Hint: change this logical expression
    // Hint: They can not graduate if they are not a senior or if their GPA is less than 2.0
    cout << "You can graduate\n";
  else
    cout << "You can not graduate\n";

  return 0;
}