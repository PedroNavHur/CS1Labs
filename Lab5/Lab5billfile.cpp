/*
  
  // YOUR NAME HERE

  Exercises:

  1. Read and understand the program.

  2. Move the input file "Lab5billinput.txt" to the same directory as the program.

  2. Read and understand the program again, you'll need it for the challenge.

*/

// This program will read the quantity of a particular item and its price from a file.
// It will then print out the total price to another file.


#include <iostream> // Required for cin and cout
#include <fstream> // Required for file I/O
#include <iomanip> // Required for formatting output
using namespace std; // Required for not having to use std::

int main() {
  
    int quantity; // To hold the quantity of the item
    float price; // To hold the price of the item
    float total; // To hold the total price
  
    // Open the input file
    ifstream inputFile;
    inputFile.open("Lab5billinput.txt");
  
    // Open the output file
    ofstream outputFile;
    outputFile.open("Lab5billoutput.txt");
  
    // Read the quantity and price from the input file
    inputFile >> quantity >> price;
  
    // Calculate the total price
    total = quantity * price;

    // Format the output
    cout << setprecision(2) << fixed;
  
    // Write the total price to the output file
    outputFile << "The total price is: " << total << endl;
  
    // Close the files
    inputFile.close();
    outputFile.close();
  
    return 0;
}
