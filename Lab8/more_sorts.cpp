// This program uses a bubble sort to arrange an array of integers in ascending order.

#include <iostream>
using namespace std;

void bubbleSort(int [], int);
void selectionSort(int [], int);
void showArray(const int [], int);

const int SIZE = 5;

int main() {
  int values[SIZE] = {7, 2, 3, 8, -1};

  cout << "The unsorted values are:" << endl;
  showArray(values, SIZE);

  bubbleSort(values, SIZE);
  cout << "The sorted values are:" << endl;
  showArray(values, SIZE);

  return 0;
}

void bubbleSort(int array[], int size) {
  int temp;
  bool swap;

  do {
    swap = false;
    for (int count = 0; count < (size - 1); count++) {
      if (array[count] > array[count + 1]) {
        temp = array[count];
        array[count] = array[count + 1];
        array[count + 1] = temp;
        swap = true;
      }
    }
  } while (swap);
}

void selectionSort(int array[], int size) {
  int startScan, minIndex, minValue;

  for (startScan = 0; startScan < (size - 1); startScan++) {
    minIndex = startScan;
    minValue = array[startScan];
    for (int index = startScan + 1; index < size; index++) {
      if (array[index] < minValue) {
        minValue = array[index];
        minIndex = index;
      }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
}

void showArray(const int array[], int size) {
  for (int count = 0; count < size; count++)
    cout << array[count] << " ";
  cout << endl;
}

/* Exercises
  1. Rewrite the sort function that you prefer to use so that it orders integers from largest to smallest
     rather than from smallest to largest.
  2. Sort with your function the array {7, 2, 3, 8, -1};
      What is the output?
      Answer here:
      Does your output match sorting it by hand?
*/