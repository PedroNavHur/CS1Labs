/* Exercises

  1. Bring in the file secondprog.cpp and compile it
  2. Try to run the program, what happens? This program has a compile error.
     - Your IDE could be capable of detecting the error and showing it to you.
     - If you use Visual Studio, you can see the error in the Error List window.
  3. Fix the error and run the program again.
     - Hints: you need to add a semicolon somewhere.
*/

// This program demonstrates a compile error.
// Place your name here

#include <iostream> // needed to perform C++ I/O
using namespace std; // needed to use shorthand notation

int main() // Code inside here is what is executed
{
  int number; // declare a variable to hold an integer called number
  float total; // declare a variable to hold a floating point number called total

  // cout is used to output a string, a string is a sequence of characters
  // What's missing in the line below?
  cout << "Today is a great day for Lab"
  cout << endl << "Let's start off by typing a number of your choice" << endl;

  // cin is used to read input from the keyboard
  cin >> number;

  // calculate the total
  total = number * 2;

  // print the total to the screen
  cout << total << " is twice the number you typed" << endl;

  // Return 0 to indicate normal termination
  return 0;
}