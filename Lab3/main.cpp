#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// PLACE YOUR NAME HERE

void part1()
{
  int quantity;    // contains the amount of items purchased
  float itemPrice; // contains the price of each item
  float totalBill; // contains the total bill.

  cout << setprecision(2) << fixed << showpoint; // formatted output 
  
  cout << "Please input the number of items bought" << endl; // Fill in the input statement to bring in the quantity.
  // Fill in the prompt to ask for the price.

  // Fill in the input statement to bring in the price of each item. 
  // Fill in the assignment statement to determine the total bill.

  // Fill in the output statement to print total bill, with a label to the screen.
}

void part2()
{
  float price1, price2;     // The price of 2 items
  int quantity1, quantity2; // The quantity of 2 items
  cout << setprecision(2) << fixed << showpoint;
  cout << "Please input the price and quantity of the first item" << endl;
  // Fill in the input statement that reads in price1 and quantity1 from the keyboard.
  
  
  // Fill in the prompt for the second price and quantity.
  // Fill in the input statement that reads in price2 and quantity2 from the keyboard.
  
  // Print the output formatted like a table
  cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
  // Fill in the output statement that prints the first price // and quantity. Be sure to use setw() statements.
  // Fill in the output statement that prints the second price // and quantity.
}

void part3()
{
  float a, b; // the smaller two sides of the triangle
  float hyp;  // the hypotenuse calculated by the program

  cout << "Please input the value of the two sides" << endl;
  cin >> a >> b;

  // Fill in the assignment statement that determines the hypotenuse
  // Remeber to use the sqrt() function and pow() function


  cout << "The sides of the right triangle are " << a << " and " << b << endl;
  //cout << "The hypotenuse is " << hyp << endl;
}

void part4()
{
  // Goal is to fix this and have it output the correct batting average
  // Hint: with integer division, the result is always an integer
  //      (e.g. 5/2 = 2)
  // Make it so that the result is a floating point number
  //     (e.g. 5.0/2 = 2.5)

  // Don't change the following declarations or the assignment statements.
  const int AT_BAT = 421;
  const int HITS = 123;

  // You can change the following declaration and assignment statements.
  int batAvg;
  batAvg = HITS / AT_BAT;                              // an assignment statement
  cout << "The batting average is " << batAvg << endl; // output the result
}

int main()
{
  cout << "Lab 3" << endl;

  part1();
  part2();
  part3();
  part4();

  return 0;
}