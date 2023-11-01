// This program demonstrates a Binary Search

#include <iostream>
using namespace std;

int binarySearch(int [], int, int);

const int SIZE = 16;

int main() {
  int found, value;
  int array[SIZE] = {34, 19, 19, 18, 15, 13, 13, 13, 12, 12, 9, 8, 7, 5, 3, 1}; // array to be searched

  cout << "Enter an integer to search for:" << endl;
  cin >> value;

  found = binarySearch(array, SIZE, value);
  if (found == -1)
    cout << "The value " << value << " is not in the list" << endl;
  else
    cout << "The value " << value << " is in position number " << found + 1 << " of the list" << endl;

  return 0;
}

int binarySearch(int array[], int numElems, int value) {
  int first = 0; // First array element
  int last = numElems - 1; // Last array element
  int middle; // Midpoint of search
  int position = -1; // Position of search value
  bool found = false; // Flag

  while (!found && first <= last) {
    middle = (first + last) / 2; // Calculate midpoint
    if (array[middle] == value) { // If value is found at mid
      found = true;
      position = middle;
    } else if (array[middle] < value) // If value is in lower half Note: make a change here to change from descending to ascending
      last = middle - 1;
    else
      first = middle + 1; // If value is in upper half
  }
  return position;
}

/* Exercises:
  1. The variable middle is defined as an ineger.
     Is the operation (first + last) / 2 guaranteed to be an integer?
     Answer here:
     How is middle value determined if the array has an odd number of elements?
     Answer here:
     How is middle value determined if the array has an even number of elements?
     Answer here:

  2. Search for 19 and then 12.
     Record the outputs here:
      19:
      12:
     Which 19 and which 12 did search find?
     Answer here:

  3. Modify the program to search an array that is in aascending order.
     Make sure to alter the array initialization.

*/