#include <iostream>
#include <iomanip>

using namespace std;

void normalizeMoney(float &dollars, int cent = 150);

int main()
{
  float dollars;

  cout << setprecision(2) << fixed << showpoint;

  cout << "\nWe will now add 95 cents to our dollar total\n";
  normalizeMoney(dollars, 95);
  cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

  cout << "\nWe will now add 193 cents to our dollar total\n";
  // Fill in the code to call normalizeMoney to add 193 cents
  cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

  cout << "\nWe will now add the default value to our dollar total\n";
  // Fill in the code to call normalizeMoney with the default value
  cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
}

void normalizeMoney(float &dollars, int cents)
{
  float total = 0;
  // Fill in the definition of sum as a static local variable
  ____ sum = 0.0;

  // Fill in the code to convert cents to dollars

  total += dollars;
  sum += dollars;

  cout << "We have added another $" << dollars << " to our total" << endl;
  cout << "Our total so far is $" << sum << endl;

  cout << "The value of our local variable total is $" << total << endl;
}

/* ANSWER EXERCISE 1 - 2 HERE:

  Exercise 1:

  Exercise 2:

*/