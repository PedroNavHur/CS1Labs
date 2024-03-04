/* Exercises:

   1. Complete the program below.

    Sample Run:

    Hello from main!
    Hello from the writeMessage function!
    Write a custom message: Hello!
    Hello!
    Back in main!

*/

// This program prints a message by calling a function.

#include <iostream> // Required for cin and cout
#include <string> // Required for string
using namespace std; // Required for not having to use std::

// Write a message to the console from a function
void writeMessage();
void writeCustomMessage(string message);

// The main function
int main() {
  cout << "Hello from main!" << endl;

  // TODO: Call the writeMessage function

  string customMessage;
  cout << "Write a custom message: ";
  cin >> customMessage;

  // TODO: Call the writeCustomMessage function with the customMessage as a parameter

  cout << "Back in main!" << endl;
  return 0;
}

// The function to write a message
void writeMessage() {
  cout << "Hello from the writeMessage function!" << endl;
}

// The function to write a custom message
void writeCustomMessage(string message) {
  cout << message << endl;
}