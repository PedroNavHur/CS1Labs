/* Exercises

  YOUR NAME HERE: 

  1. Fill in the code so that the program produces the following:

      Please input the value of the two sides
      > 9 3
      The hypotenuse of the triangle is 9.49
  
    Hint: the hypotenuse of a right triangle can be calculated using the formula:
      
      hypotenuse = square root of (side1 squared + side2 squared)
*/

// This program will read in the value of two sides of a right triangle
// It will then calculate the hypotenuse of the triangle

#include <iostream> // needed to perform C++ I/O
#include <cmath> // needed for the sqrt function
#include <iomanip> // needed for setting precision
using namespace std; // needed to use shorthand notation

int main() { // Code inside here is what is executed

  // Declare variables
  float side1, side2; // The two sides of the triangle
  float hypotenuse; // The hypotenuse of the triangle

  // Get the value of the two sides
  cout << "Please input the value of the two sides" << endl;
  cin >> side1 >> side2;

  // Calculate the hypotenuse
  // TODO: Fill in the code to calculate the hypotenuse

  // TODO: Set the precision of the output to 2 decimal places
  
  // Print the hypotenuse
  cout << "The hypotenuse of the triangle is " << hypotenuse << endl;

  return 0; // Terminate the program
}