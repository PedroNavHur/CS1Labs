// String functions strcat

/* Exercises

  1. Read and understand the program. What does this code output?
     Record the output here:

  2. Modify the program so string1 contains 20 characters instead of 25.
      What is the output?
      Record the output here:

*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char string1[25] = "Total Eclipse ";
  char string2[11] = "of the Sun";

  cout << string1 << endl;
  cout << string2 << endl;

  strcat(string1, string2);

  cout << string1 << endl;
}