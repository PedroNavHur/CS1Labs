/* Exercise 11.1 Working with Basic Structures

    1. Fill in the missing code in the following program so it works as described in the comments.

    2. Add the code so the program determines wheter the rectangle is a square or not.

    3. Sample Run:
        Enter the length of a rectangle: 5
        Enter the width of a rectangle: 5
        The area of the rectangle is 25.00
        The perimeter of the rectangle is 20.00
        The rectangle is a square.

    4. Sample Run:
        Enter the length of a rectangle: 5
        Enter the width of a rectangle: 6
        The area of the rectangle is 30.00
        The perimeter of the rectangle is 22.00
        The rectangle is not a square.

    5. Check if your program matches the sample runs above.

*/

#include <iostream>
#include <iomanip>

using namespace std;

// This programs uses a structure to hold data about a rectangle

struct Rectangle {
  float length;
  float width;
  // TODO: add a member variable here to hold the area
  // TODO: add a member variable here to hold the perimeter
};

int main() {

  Rectangle box; // box is a Rectangle structure

  // Get the rectangle's length and width from the user.
  cout << "Enter the length of a rectangle: ";
  cin >> box.length;

  cout << "Enter the width of a rectangle: ";
  cin >> box.width;

  cout << endl << endl;

  // Compute the area and perimeter of the rectangle
  // TODO: compute the area, store it in box.area
  // TODO: compute the perimeter, store it in box.perimeter

  cout << fixed << showpoint << setprecision(2);
  // Display the rectangle area and perimeter
  // TODO: display the area
  // TODO: display the perimeter
  
  // TODO: determine if the rectangle is a square or not
  //       and display the appropriate message

  return 0;
}
