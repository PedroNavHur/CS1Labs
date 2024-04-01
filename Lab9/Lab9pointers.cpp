// This program demonstrates the use of pointers

// Finds the area of a rectangle given length and width
// It prints the length and width in the function

/* Exercises:
   1. Complete the program by filling in the code where TODOs indicate.
      Note: use pointer variables and the & and * operators.
   2. Run the program with: 10 and 15
      Record the output here:

*/

#include <iostream>
using namespace std;

int main() {
  // Integer variables
  int length;
  int width;
  int area;

  // Pointer variables
  int *lengthPtr = nullptr;
  int *widthPtr = nullptr;

  cout << "Enter the length: ";
  cin >> length;
  cout << "Enter the width: ";
  cin >> width;

  lengthPtr = &length;
  widthPtr = ______ // TODO: Fill in code to make widthPtr point to width

  area = *lengthPtr * _____; // TODO: Fill in code to find the area by using only the pointer variables
  cout << "The area is " << area << endl;

  if (______ > ______) { // TODO: Fill in code to compare the length and width. Use only the pointer variables
    cout << "The length is greater than the width" << endl;
  } else if (______ < ______) { // TODO: Fill in code to compare the length and width. Use only the pointer variables
    cout << "The width is greater than the length" << endl;
  } else {
    cout << "The length and width are equal" << endl;
  }

  return 0;
}