// This program performs a linear search on a character array.

#include <iostream>
using namespace std;

int searchList(char [], int, char); // function prototype
const int SIZE = 8;

int main() {
  char word[SIZE] = "Harpoon";
  int found;
  char ch;

  cout << "Enter a character to search for:" << endl;
  cin >> ch;

  found = searchList(word, SIZE, ch);
  if (found == -1)
    cout << "The character " << ch << " was not found in the list" << endl;
  else
    cout << "The character " << ch << " is in position number " << found + 1 << " of the list" << endl;

  return 0;
}

int searchList(char list[], int numElems, char value) {
  int index = 0; // Used as a subscript to search array
  int position = -1; // To record position of search value
  bool found = false; // Flag to indicate if the value was found

  while (index < numElems && !found) {
    if (list[index] == value) { // If the value is found
      found = true; // Set the flag
      position = index; // Record the value's subscript
    }
    index++; // Go to the next element
  }
  return position; // Return the position, or -1
}

/* Exercises:
  1. Rewrite the program so that it searches an array of integers rather than characters.
     Use the array nums[8] = { 3, 6, -19, 5, 5, 0, -2, 99}
     What happens if you search for 5? Which 5 is found?
     Answer here:

  2. Re-write the program so that the user can continue to input values
     that will be searched for until a sentinel value is entered to end the program.
     Should a pre or post test lopp be used?
     Answer here:
*/