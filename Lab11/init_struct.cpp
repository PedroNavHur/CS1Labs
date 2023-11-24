/* Exercise 11.2 Initializing Structures

    1. Fill in the code so the program works as described in the comments.

    2. Sample Run:
        Tim McGuiness please enter your income for this year: 50000
        Name: Tim McGuiness
        Social Security Number: 255871234
        Taxes due for this year: $17500.00

        John Kane please enter your income for this year: 60000
        Name: John Kane
        Social Security Number: 278990582
        Taxes due for this year: $17400.00


*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// This program demosntrates partially initialized structure variables

struct TaxPayer {
  string name;
  long int socialSecNum;
  float taxRate;
  float income;
  float taxes;
};

int main() {
  
    TaxPayer citizen1 = {"Tim McGuiness", 255871234, .35}; // initialize only 3 of the 5 members

    // TODO: Fill in code to initialize a TaxPayer structure named citizen2 sso it contains the following data:
    // Name: John Kane
    // Social Security Number: 278990582
    // Tax Rate: .29

    cout << fixed << showpoint << setprecision(2);

    // Calculate taxes due for citizen1
    cout << citizen1.name << " please enter your income for this year: ";
    cin >> citizen1.income;
    citizen1.taxes = citizen1.income * citizen1.taxRate;

    // Display citizen 1 tax payer information
    cout << "Name: " << citizen1.name << endl;
    cout << "Social Security Number: " << citizen1.socialSecNum << endl;
    cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;


    // TODO: Calculate taxes due for citizen2

    // TODO: Display citizen 2 tax payer information

    return 0;
}