
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// YOUR NAME
// DATE

// remember you only have 2 hours to complete this exam

/* Coffe Shop - worth 25 points - stimated 20 mins */
void problem1()
{

  char drinkChoice;
  char syrupChoice;

  float price;
  float bill;

  // Your code Here
}

/* Movie Tickets Price - worth 25 points - stimated 20 mins */
void problem2()
{
  int childrenTickets;
  int teenTickets;
  int adultTickets;

  float totalBill;

  // Your code here
}

/* Bookstore Purchases - worth 25 points - stimated 20 mins */
void problem3()
{
  int numBooks;
  float totalBill;

  // your code here

  for (int i = 1; i <= numBooks; i++)
  {
    float currentBookPrice;
    // your code here
  }

  // Your code here
}

/* Electricity Consumption - worth 50 points - stimated 40 mins */
void problem4()
{
  double totalConsumption;
  double totalCost;

  for (int i = 1; i <= 6; i++)
  {
    double currentMonthConsumption;
    // your code here
  }

  // Your code here
}

/* Parking Fee - worth 50 points - stimated 40 mins */
void problem5()
{
  double dailyParkingFee;
  double totalParkingFee;

  // Your code here
}

// Driver function for Lab Exam- no need to change this
int main()
{
  int choice;
  cout << "Lab Exam - Press (1-5) to run the desired problem:" << endl;
  cin >> choice;

  switch (choice)
  {
  case 1:
    problem1();
    break;
  case 2:
    problem2();
    break;
  case 3:
    problem3();
    break;
  case 4:
    problem4();
    break;
  case 5:
    problem5();
    break;
  default:
    cout << "Invalid choice" << endl;
  }

  return 0;
}