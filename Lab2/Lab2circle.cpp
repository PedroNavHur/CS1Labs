/* Exercises

  YOUR NAME HERE: 

  1. Fill in the code so that the program will produce the following:
     
     The circumference of the circle is 33.912
     The area of the circle is 91.5624

    Hints: circunference = 2 * pi * radius
           area = pi * radius * radius

   2. Change the data types from float to int and run the program again.
      What happens? Why?

      Answer here:

*/

#include <iostream> // needed to perform C++ I/O
using namespace std; // needed to use shorthand notation

const double PI = 3.14; // Define a constant for PI
const double RADIUS = 5.4; // Define a constant for the radius

int main() // Code inside here is what is executed
{

  // Declare variables
  float circumference;
  float area;

  // Calculate circumference and area
  circumference =  // TODO: Fill in the code to calculate the circumference

  area =   // TODO: Fill in the code to calculate the area


  // TODO: Fill in the code to output the circumference

  // TODO: Fill in the code to output the area

  return 0; // Return 0 to indicate normal termination
}