// This program reads grades and prints grades from a file

/* Exercises
   
   1. Fill in the code where TODOs indicate.

*/

#include <iostream>
#include <fstream>

using namespace std;

const int MAXNAME = 20;

int main() {
  ifstream inData;
  char name[MAXNAME + 1];
  int grade;

  inData.open("grades.txt");

  inData.get(name, MAXNAME + 1);
  inData >> grade;
  inData.ignore(80, '\n');

  while (inData) {
    // TODO: Fill in code to print the name and grade.

    // TODO: Fill in code to read the next name and grade from the file
    //      Hint: use the get() function to read the name and the >> operator to read the grade
    //      Hint: use the ignore() function to ignore the rest of the line
  }

  inData.close();

  return 0;
}
