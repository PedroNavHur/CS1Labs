/*
  // YOUR NAME HERE

  Exercises:

  1. Complete the program below.

  Sample run 1:
    Enter a positive integer: 5
    The mean of the first 5 positive integers is 3

  Sample run 2:
    Enter a positive integer: 10
    The mean of the first 10 positive integers is 5.5
  
*/

// This program illustrates the use of the for loop.
// It has the user input a number N and thee finds the mean of the first
// N positive integers.

#include <iostream> // Required for cin and cout
using namespace std; // Required for not having to use std::

int main() {

  int N; // To hold the user's input
  int sum = 0; // Accumulator
  float mean; // To hold the mean

  // Get the number of positive integers
  cout << "Enter a positive integer: ";
  cin >> N;

  // Validate the input
  while (N <= 0) {
    cout << "The number must be positive. Please re-enter: ";
    cin >> N;
  }

  // Calculate the sum of the first N positive integers
  for (/*TODO: write the assignment, condition, and increment of the for loop*/) {
    sum += i;
  }

  // Calculate the mean
  mean = static_cast<float>(sum) / N;

  // Display the result
  cout << "The mean of the first " << N << " positive integers is " << mean << endl;

  return 0;
}
