/* Exercises

    This program shows you two additional sorting algorithms. Bubble Sort and Selection Sort.

    Test the code and understand how it works. 

    Exercise 1:
      What are the differences between bubble sort and selection sort? * as implemented in this .cpp*
      Your answer here:

*/

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

