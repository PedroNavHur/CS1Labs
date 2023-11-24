/* Exercise 11.4 Nested Structures

  1. Fill in the missing code in the following program so it works as described in the comments.

  2. Modify the program above by adding a third structure named results that has two members:
     area and perimeter. Adjust the code so the program uses the results structure to store
      the area and perimeter of the rectangle.

  3. Modify the program so it uses functions to calculate the area and perimeter of the rectangle.
     The functions should return the structure results, and have the rectangle as a parameter.

*/

#include <iostream>
#include <iomanip>

using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

struct Dimensions {
  float length;
  float width;
};

struct Rectangle {
  Dimensions rect;
  float area;
  float perimeter;
};

// TODO: Fill in code to declare a structure named results that has two members:

int main() {

  Rectangle box; // box is a Rectangle structure

  // Get the rectangle's length and width from the user.
  cout << "Enter the length of a rectangle: ";
  cin >> box.rect.length;

  cout << "Enter the width of a rectangle: ";
  // TODO: Fill in code to read in the width to the appropriate place

  cout << endl << endl;

  // Compute the area and perimeter of the rectangle
  box.area = box.rect.length * box.rect.width;
  // TODO: Fill in code to compute the perimeter and store it in the appropriate place

  cout << fixed << showpoint << setprecision(2);

  // Display the rectangle area and perimeter
  cout << "The area of the rectangle is " << box.area << endl;
  cout << "The perimeter of the rectangle is " << box.perimeter << endl;

  return 0;
}