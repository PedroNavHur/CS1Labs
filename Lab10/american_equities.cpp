// This Program tests a passfor for the American Equities web page to see if the format is correct

/* Exercises

  1. Read and understand the program.

  2. Modify the program so that a valid password consisnts of 10 characters.
     With atleast 4 letters and 6 digits.
     Hint: modify the testPass() function.
     
  3. Modify the program so that only lowercase letters and digits are allowed.
     Hint: use the islower() and isdigit() functions.
*/

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

bool testPass(char []);
int countDigits(char []);
int countLetters(char []);

int main() {
  char password[11];
  bool valid;

  cout << "Enter a 10 character password: ";
  cin.getline(password, 10);

  valid = testPass(password);

  if (valid) {
    cout << "The password is valid" << endl;
  } else {
    cout << "The password is invalid" << endl;
    cout << "The password must contain at least 5 letters and 3 digits" << endl;
  }

  return 0;
}

bool testPass(char password[]) {
  int digits = countDigits(password);
  int letters = countLetters(password);

  cout << "Digits: " << digits << endl;
  cout << "Letters: " << letters << endl;

  if (digits >= 3 && letters >= 5) {
    return true;
  } else {
    return false;
  }
}

int countDigits(char password[]) {
  int count = 0;

  for (int i = 0; i < 10; i++) {
    if (isdigit(password[i])) {
      count++;
    }
  }

  return count;
}

int countLetters(char password[]) {
  int count = 0;

  for (int i = 0; i < 10; i++) {
    if (isalpha(password[i])) {
      count++;
    }
  }

  return count;
}