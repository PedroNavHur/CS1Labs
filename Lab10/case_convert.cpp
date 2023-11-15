// THe program shows how the toupper() and tolower() functions can be used to convert characters to uppercase and lowercase, respectively.

/* Exercises

  1. Read and understand the program.

  2. Notice the second while loop in the main() function. What is the purpose of this loop?

  3. Modify the program so it retains the same functionality but uses toLower() instead of toupper().

*/

#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

int main() {
  int week, total, dollars;
  float average;
  char choice;

  cout << showpoint << fixed << setprecision(2);

  do {
    total = 0;
    for (week = 1; week <= 4; week++) {
      cout << "Enter sales for week " << week << ": ";
      cin >> dollars;
      total += dollars;
    }

    average = total / 4.0;
    cout << "Average weekly sales are $" << average << endl;

    cout << "Do you want to average another week? (Y/N) ";
    cin >> choice;

    while (toupper(choice) != 'Y' && toupper(choice) != 'N') {
      cout << "Please enter Y or N: ";
      cin >> choice;
    }
  } while (toupper(choice) == 'Y');
}