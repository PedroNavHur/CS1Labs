// This program will read in prices and store them into a two dimensional array.
// It will print those prices in a table form.

#include <iostream>
#include <iomanip>

using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS]; // creates a new data type: a two dimensional array of floats

void getPrices(PriceType, int &, int &);     // gets the prices into the array from the user
void printPrices(const PriceType, int, int); // prints data as a table
float findHighestPrice(const PriceType, int, int); // finds the highest price
float findLowestPrice(const PriceType, int, int); // finds the lowest price

int main()
{
  PriceType price; // a 2D array holding the prices
  int rowsUsed;    // number of rows used
  int colsUsed;    // number of columns used

  getPrices(price, rowsUsed, colsUsed);   // calls getPrices to fill the array with prices
  printPrices(price, rowsUsed, colsUsed); // calls printPrices to display the array

  // TODO: call and print the highest price
  // TODO: call and print the lowest price
  
  return 0;
}

void getPrices(PriceType array, int &rowsUsed, int &colsUsed)
{
  cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
  cin >> rowsUsed;

  while (rowsUsed < 1 || rowsUsed > MAXROWS)
  {
    cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
    cin >> rowsUsed;
  }

  cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
  cin >> colsUsed;

  while (colsUsed < 1 || colsUsed > MAXCOLS)
  {
    cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
    cin >> colsUsed;
  }

  for (int row = 0; row < rowsUsed; row++)
  {
    for (int col = 0; col < colsUsed; col++)
    {
      cout << "Please input a price" << endl;
      cin >> array[____][____]; // TODO: Fill in the blanks with the correct indices
    }
  }
}

void printPrices(const PriceType array, int rowsUsed, int colsUsed)
{
  cout << setprecision(2) << fixed << showpoint;

  for (int row = 0; row < rowsUsed; row++)
  {
    for (int col = 0; col < colsUsed; col++)
    {
      cout << setw(8) << array[____][____]; // TODO: Fill in the blanks with the correct indices 
    }
    cout << endl;
  }
}

float findHighestPrice(const PriceType array, int rowsUsed, int colsUsed)
{
  float highest = array[0][0];

  for (int row = 0; row < rowsUsed; row++)
  {
    for (int col = 0; col < colsUsed; col++)
    {
      if (array[row][col] > highest)
      {
        highest = array[row][col];
      }
    }
  }

  return highest;
}

float findLowestPrice(const PriceType array, int rowsUsed, int colsUsed)
{
  float lowest = array[0][0];

  // TODO: Find lowest in 2D Array

  return lowest;
}

/* Exercises:

  1. Complete and Fix the Code.

  2. Why does getPrices have the parameters passed by reference?
     Why does printPrices have the parameters passed by value?
     Why can we modify the array without passing it by reference?

  3-6. N/A

*/