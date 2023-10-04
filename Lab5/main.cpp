
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

/* Lab 5.1 Exercises 1-6 Working with a while Loop */
void part1()
{
  // Copy over the code from the manual here
}

/* Lab 5.2 Exercises 1-3 Working with a do-while Loop */
void part2()
{
 // Copy over the code from the manual here
}

/* Lab 5.3 Exercises 1-3 Working with a for Loop */
void part3()
{
  // Copy over the code from the manual here
}

/* Lab 5.4 Exercises 1-3 Nested Loops */
void part4()
{
  // Copy over the code from the manual here
}

/* Lab 5.5 Reading and Writing to a File
 */
void part5()
{
  // Copy over the code from the manual here
}

/* Lab 5.5 Choose any of the options
 */
void part6()
{
  // Copy over the code from the manual here
}

// Driver function for lab 4 - no need to do anything below this
int main()
{
  int choice;
  cout << "Lab 5 - Press (1-5) to run the desired exercise:" << endl;
  cin >> choice;

  switch (choice)
  {
  case 1:
    part1();
    break;
  case 2:
    part2();
    break;
  case 3:
    part3();
    break;
  case 4:
    part4();
    break;
  case 5:
    part5();
    break;
  case 6:
    part6();
    break;
  default:
    cout << "Invalid choice" << endl;
  }

  return 0;
}