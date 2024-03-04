/*
  Exercises:

  1. Complete the program below.

*/

// This program will input American Money and convert it into foreign currency

#include <iostream> // Required for cin and cout
#include <iomanip> // Required for setprecision
using namespace std; // Required for not having to use std::

// Function prototypes
void convertMulti(float dollars, float& euros, float& pesos, float& yen); // void function with parameters
void convertMulti(float dollars, float& euros, float& pesos); // void function with parameters
void convertToYen(float dollars, float& yen); // void function with parameters
void convertToPesos(float dollars, float& pesos); // void function with parameters
void convertToEuros(float dollars, float& euros); // void function with parameters

// The main function
int main() {
  float dollars;
  float euros;
  float pesos;
  float yen;

  cout << setprecision(2) << fixed; // Set the precision of the output

  cout << "Please input the amount of American money you want to convert: ";
  cin >> dollars;

  // TODO: Call the convertMulti function

  cout << "The amount of American money you want to convert is: $" << dollars << endl;
  cout << "The amount of Euros you will get is: " << euros << endl;
  cout << "The amount of Pesos you will get is: " << pesos << endl;
  cout << "The amount of Yen you will get is: " << yen << endl;

  return 0;
}

// The function to convert to multiple currencies
void convertMulti(float dollars, float& euros, float& pesos, float& yen) {
  // TODo: Call the convertToEuros, convertToPesos, and convertToYen functions
}

// The function to convert to multiple currencies
void convertMulti(float dollars, float& euros, float& pesos) {
  // TODO: Call the convertToEuros and convertToPesos functions
}

// The function to convert to Yen
void convertToYen(float dollars, float& yen) {
  yen = dollars * 109.14;
}

// The function to convert to Pesos
void convertToPesos(float dollars, float& pesos) {
  pesos = dollars * 19.78;
}

// The function to convert to Euros
void convertToEuros(float dollars, float& euros) {
  euros = dollars * 0.74;
}
