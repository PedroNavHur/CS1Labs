#include <iostream>
#include <iomanip>

using namespace std;

// This program will input American Money and convert it to foreign country

// Function prototypes
void convertMulti(float dollars, float &euros, float &pesos);
void convertMulti(float dollars, float &euros, float &pesos, float &yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main()
{
  float dollars;
  float euros;
  float pesos;
  float yen;

  cout << fixed << showpoint << setprecision(2);
  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to euros and pesos\n";
  cin >> dollars;

  convertMulti(dollars, euros, pesos);
  cout << "The value of " << dollars << " dollars is " << euros << " euros and "
       << pesos << " pesos\n";

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to euros, pesos and yen\n";
  cin >> dollars;

  // Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
  // Fill in the code to output the value of dollars, euros, pesos and yen

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to yen\n";
  cin >> dollars;

  yen = convertToYen(dollars);
  cout << "The value of " << dollars << " dollars is " << yen << " yen\n";

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to euros\n";
  cin >> dollars;

  // Fill in the code to call convertToEuros
  // Fill in the code to output the value of dollars and euros

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to pesos\n";
  cin >> dollars;

  // Fill in the code to call convertToPesos
  // Fill in the code to output the value of dollars and pesos
}

void convertMulti(float dollars, float &euros, float &pesos)
{
  // Fill in the code to convert the dollar amount to euros and pesos
  euros = convertToEuros(dollars);
  pesos = convertToPesos(dollars);
}

void convertMulti(float dollars, float &euros, float &pesos, float &yen)
{
  // Fill in the code to convert the dollar amount to euros, pesos and yen
  euros = convertToEuros(dollars);
  pesos = ____
  yen = ____
}

float convertToYen(float dollars)
{
  return dollars * 124.35;
}

float convertToEuros(float dollars)
{
  // Fill in the code to convert the dollar amount to euros
  return 0;
}

float convertToPesos(float dollars)
{
  // Fill in the code to convert the dollar amount to pesos
  return 0;
}

/* ANSWER EXERCISE 1 - 2 HERE:

  Exercise 1:

  Exercise 2:

*/