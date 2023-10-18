#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14;
const double RATE = 0.25;

void findArea(double radius, double &area);
void findCircumference(double radius, double &circumference);

int main()
{
  cout << fixed << showpoint << setprecision(2);
  float radius = 12;

  cout << "Main function outer block" << endl;
  cout << "LIST THE IDENTIFIERS THAT ARE ACTIVE HERE" << endl;

  {
    float area;
    cout << "Main function first inner block" << endl;
    cout << "LIST THE IDENTIFIERS THAT ARE ACTIVE HERE" << endl;

    // Fill in the code to call findArea here

    cout << "The radius = " << radius << endl;
    cout << "The area = " << area << endl
         << endl;
  }

  {
    float radius = 10;
    float circumference;

    cout << "Main function second inner block" << endl;
    cout << "LIST THE IDENTIFIERS THAT ARE ACTIVE HERE" << endl;

    // Fill in the code to call findCircumference here

    cout << "The radius = " << radius << endl;
    cout << "The circumference = " << circumference << endl
         << endl;
  }

  cout << "Main function after all the calls" << endl;
  cout << "LIST THE IDENTIFIERS THAT ARE ACTIVE HERE" << endl;
}

void findArea(float rad, float &answer)
{
  cout << "AREA FUNCTION" << endl
       << endl;
  cout << "LIST THE IDENTIFIERS THAT ARE ACTIVE HERE" << endl;

  // Fill in the code that calculates the area and stores it in answer
}

void findCircumference(float length, float&distance){
    cout << "CIRCUMFERENCE FUNCTION" << endl
       << endl;
  cout << "LIST THE IDENTIFIERS THAT ARE ACTIVE HERE" << endl;

  // Fill in the code that finds the circumference and stores it in distance
}

/* ANSWER EXERCISE 1 - 5 HERE: 

  Exercise 1:

  Exercise 2:

  Exercise 3:

  Exercise 4:

  Exercise 5:

*/