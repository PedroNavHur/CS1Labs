/* Exercises

  YOUR NAME HERE: 

  1. Fix in the code so that the program produces the following:

     The bating average is 0.292162

  *  Fix the code without changing the values and types of AT_BATS and HITS

*/

#include <iostream> // needed to perform C++ I/O
using namespace std; // needed to use shorthand notation

const int AT_BATS = 421; // The number of times at bat
const int HITS = 123; // The number of hits

int main() { // Code inside here is what is executed

  // Declare variables
  float battingAverage; // The batting average

  // Calculate the batting average
  // Hint: we are missing something here below, what is it?
  battingAverage = HITS / AT_BATS;

  // Print the batting average
  cout << "The batting average is " << battingAverage << endl;

  return 0; // Terminate the program
}