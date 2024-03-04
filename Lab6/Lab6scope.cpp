/*
  Exercises:

    1. Read the program below and understand what it's doing.

    2. Demonstrate your knowledge of scope rules by answering the following questions.

      What is the local 1 area?
      What is the local 1 circumference?

      What is the local 2 area?
      What is the local 2 circumference?

      What is the main area?
      What is the main circumference?

   3. Modify the appripriate radius to get the following output:
      Hint: You will need to modify the appropriate radius.

      Sample Run:
      The local 1 area is 346.36
      The local 1 circumference is 65.9734

      The local 2 area is 78.5398
      The local 2 circumference is 31.4159

      The main area is 490.873
      The main circumference is 78.5398 
*/

// This program demonstrates the scope of variables
#include <iostream> // Required for cin and cout
using namespace std; // Required for not having to use std::

const double PI = 3.14159; // This is a global constant
const double RATE = 0.25; // This is a global constant

void findArea(double, double&); // Function prototype
void findCircumference(double, double&); // Function prototype

int main() {
  double radius = 12.5; // This is a local variable
  double area; // This is a local variable
  double circumference; // This is a local variable

  {
    double radius = 10.5; // This is a local variable

    findArea(radius, area);
    findCircumference(radius, circumference);

    cout << "The local 1 area is " << area << endl;
    cout << "The local 1 circumference is " << circumference << endl << endl;
  }

  {
    double radius = 8.5; // This is a local variable

    findArea(radius, area);
    findCircumference(radius, circumference);

    cout << "The local 2 area is " << area << endl;
    cout << "The local 2 circumference is " << circumference << endl << endl;
  }

  findArea(radius, area);
  findCircumference(radius, circumference);

  cout << "The main area is " << area << endl;
  cout << "The main circumference is " << circumference << endl;

  return 0;
}

// The function to find the area
void findArea(double r, double& a) {
  a = PI * r * r;
}

// The function to find the circumference
void findCircumference(double r, double& c) {
  c = 2 * PI * r;
}