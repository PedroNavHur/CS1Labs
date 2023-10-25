// This program will input an undetermined number of student names
// and a number of grades for each student. The number of grades is
// given by the user. The grades are stored in an array.

// Two functions are called for each student.
// One function will give the numeric average of their grades.
// The other function will give a letter grade to that average.

// Grades are assigned on a 10 point spread.
// 90-100 A
// 80-89  B
// 70-79  C
// 60-69  D
// Below 60 F

#include <iostream>
#include <string>
#include <iomanip>
#include <array>

using namespace std;

const int MAXGRADE = 25; // maximum number of grades per student

using GradeType = array<float, MAXGRADE>;      // one dimensional integer array data type

float findGradeAvg(GradeType, int); // finds grade average by taking array of grades and number of grades as parameters
char findLetterGrade(float);        // finds letter grade by taking grade average as parameter

int main() {
  string firstname, lastname; // two strings defined (strings are arrays of characters)
  int numOfGrades;                   // holds the number of grades
  GradeType grades = {0};                  // grades is defined as a one dimensional array of integers
  float average;                     // holds the average of a student's grade
  char moreinput;                    // determines if there is more input

  cout << setprecision(2) << fixed << showpoint; // formatted output

  // Input the number of grades for each student
  cout << "Please input the number of grades each student will receive." << endl
       << "This must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
  cin >> numOfGrades;

  while (numOfGrades > MAXGRADE || numOfGrades < 1) {
    cout << "Please input the number of grades for each student." << endl
         << "This must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
    cin >> numOfGrades;
  }

  // Input names and grades for each student
  cout << "Please input a y if you want to input more students" << endl
       << "any other character will stop the input" << endl;
  cin >> moreinput;

  while (moreinput == 'y' || moreinput == 'Y') {
    cout << "Please input the first name of the student" << endl;
    cin >> firstname;
    cout << "Please input the last name of the student" << endl;
    cin >> lastname;

    for (size_t count = 0; count < numOfGrades; count++) {
      cout << "Please input a grade" << endl;
      // TODO: read the next grade
      cin >> grades[count];
    }

    average = findGradeAvg(grades, numOfGrades);

    cout << firstname << " " << lastname << " has an average of " << average;
    // TODO: print the letter grade
  
    cout << "Please input a y if you want to input more students" << endl
         << "any other character will stop the input" << endl;
    cin >> moreinput;
  }

}

float findGradeAvg(GradeType grades, int numOfGrades) {
  float sum = 0;

  for (float grade: grades) {
    // TODO: add grade to sum
  }

  return sum / numOfGrades;
}

char findLetterGrade(float average) {
  // TODO: return the letter grade
}

/* Exercises:

  1. Complete and Fix the Program.
     Then run it with the following data:
      Mary Brown 100 90 90
      George Smith 90 30 50
      Dale Barnes 80 78 82
      Sally Dolittle 70 65 80
      Conrad Bailer 60 58 71

    You should get the following results:
      Mary Brown has an average of 93.33 which gives the letter grade of A
      George Smith has an average of 56.67 which gives the letter grade of F
      Dale Barnes has an average of 80.00 which gives the letter grade of B
      Sally Dolittle has an average of 71.67 which gives the letter grade of C
      Conrad Bailer has an average of 63.00 which gives the letter grade of D

*/