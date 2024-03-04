/* Exercises:

   1. Complete the program below.

   Sample Run:

   This program takes two numbers (pay rate & hours) and
   multiplies them to get gross pay. It then takes out 15%
   for taxes
   Please input the pay per hour: 25
   Please input the number of hours worked: 10
   The gross pay is: $250.00
   The net pay is: $212.50

*/

// This calculates a paycheck

#include <iostream> // Required for cin and cout
#include <iomanip> // Required for setprecision
using namespace std; // Required for not having to use std::

// Function prototypes
void printDescription(); // void function with no parameters
void calculatePaycheck(float, int, float&, float&); // void function with parameters

// The main function
int main() {
   float payRate;
   int hours;
   float grossPay, netPay;

   cout << setprecision(2) << fixed; // Set the precision of the output

   printDescription(); // Call the description function

   cout << "Please input the pay per hour: ";
   cin >> payRate;

   cout << "Please input the number of hours worked: ";
   cin >> hours;

   // Call the calculatePaycheck function
   // TODO: Pass the payRate, hours, grossPay, and netPay

   cout << "The gross pay is: $" << grossPay << endl;
   cout << "The net pay is: $" << netPay << endl;

   return 0;
}

// The function to print the description
void printDescription() {
   cout << "This program takes two numbers (pay rate & hours) and\n";
   cout << "multiplies them to get gross pay. It then takes out 15%\n";
   cout << "for taxes\n";
}

// The function to calculate the paycheck
void calculatePaycheck(float rate, int time, float& gross, float& net) {
   gross = rate * time;
   net = gross * 0.85; // 15% tax
}
