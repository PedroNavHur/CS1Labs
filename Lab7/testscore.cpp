// This program will read in a group of trst scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

#include <iostream>
using namespace std;

typedef int GradeType[100]; // declares a new data type: an integer array of 100 elements

float findAverage(const GradeType, int); // finds average of all grades
int findHighest(const GradeType, int);   // finds highest of all grades
int findLowest(const GradeType, int);    // finds lowest of all grades

int main()
{
  GradeType grades;   // the array holding the grades.
  int numberOfGrades; // the number of grades read.
  int pos;            // index to the array.

  float avgOfGrades; // contains the average of the grades.
  int highestGrade;  // contains the highest grade.
  int lowestGrade;   // contains the lowest grade.

  // Read in the values into the array

  pos = 0;
  cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
  cin >> grades[pos];

  while (grades[pos] != -99)
  {
    cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
    // TODO: read the next grade
  }

  numberOfGrades = 0; // TODO: Fix with the actual number of grades read.

  avgOfGrades = findAverage(grades, numberOfGrades); // call to the function to find average

  cout << endl
       << "The average of all the grades is " << avgOfGrades << endl;

  // TODO: call to the function to find highest grade
  cout << "The highest grade is " << highestGrade << endl;

  // TODO: call to the function to find lowest grade
  // TODO: print the lowest grade
}

float findAverage(const GradeType array, int size)
{
  float sum = 0; // holds the sum of all the numbers

  for (int pos = 0; pos < size; pos++)
  {
    sum += array[pos];
  }

  return sum / size;
}

int findHighest(const GradeType array, int size)
{
  int highest = array[0]; // holds the highest number

  for (int pos = 0; pos < size; pos++)
  {
    // TODO: if the current number is higher than highest, set highest to the current number
  }

  return highest;
}

int findLowest(const GradeType array, int size)
{
  int lowest = array[0]; // holds the lowest number

  // TODO: write the loop to find the lowest number

  return lowest;
}

/* Exercises:

  1. Modify and fix the program..

  2. Run the program with the following data:
     90 45 73 62 -99
     Record the output here:

  3. Modify the program so it reads from the file gradfile.txt
     instead of from the keyboard.

  4. Run the program with the gradfile.txt
     Record the output here:
*/