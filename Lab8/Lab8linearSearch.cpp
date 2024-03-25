
/* The following code shows you how to do a linear search

  Exercise 1:
    Rewrite this program so that the user can continue to input values that will
    be searched for, until a sentinel is entered to end the program.

    Sample Run:
    Enter a character to search for: x
    The character x was not found in the list.
    Enter another character to search for: a
    The character a is in position number 1 of the list.
    Enter another character to search for: o
    The character o is in position number 5 of the list.

  Exercise 2:
    Notice there's two 'o's in "harpoon". Which 'o' in "harpoon" does the linear search return?
    Your answer here:
    
    Why?
    Your answer here:

    Change the searchList algorithm to return the other 'o'.
    Hint: 
      The while loop goes from 0 to numElements - 1, change it to go from numElements - 1 to 0.
      And instead of incrementing the index, decrement it.
*/

// This program performs a linear search on a character array.

#include <iostream>
using namespace std;

int searchList(char [], int, char); // function prototype
const int SIZE = 8;

int main() {
  char word[SIZE] = "Harpoon";
  int found;
  char ch;

  cout << "Enter a character to search for: ";
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

// Keep looking while we are still within bounds and we haven't found it
  while (index < numElems && !found) {
    if (list[index] == value) { // If the value is found
      found = true; // Set the flag
      position = index; // Record the value's subscript
    }
    index++; // Go to the next element
  }
  return position; // Return the position, or -1
}
