// CS1 Practice Lab Exam YOU CANNOT INCLUDE EXTRA LIBRARIES

// You are not allowed to use any libraries other than the ones included below
// You CAN use the min, max, sort, find, binary_search, and any other function from the <algorithm> library
// However, the problems can be solved without using any of these functions

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

using Nums = vector<int>;
using NumsList = vector<Nums>;
using Data = NumsList;

// Again, you are not allowed to use any other libraries
// Some libraries trivialize the problems and defeat the purpose of these exercises


/* WRITE CODE BELOW HERE */

const string NAME = "Our AI Overlords"; // REPLACE WITH YOUR NAME


// Find biggest square in an array of integers.
// Return the biggest square
// [1, 2, 3, 4, 5, 6, 7, 8, 9] -> 81
// Hint: Use a for loop
// Hint: Use a variable to keep track of the biggest square
int biggestSquare(Nums nums) {
  // WRITE CODE HERE
  return 0; // You can remove this line
}

// Find Good pairs.
// A pair is good if their sum is even
// Return the *unique* good pairs as a NumList (a 2d vector)
// [1 5 8 9] -> [[1 5] [1 9] [5 9]]
// Hint: Use nested for loops
// Hint: Use a vector to store the good pairs
// 
NumsList findGoodPairs(Nums nums) {
  // WRITE CODE HERE 
  NumsList result(1, nums); // You can remove this line
  return result; // You can remove this line
}



/* DO NOT WRITE CODE BELOW HERE */

// Other Function Prototypes, do not change these
Data readData(ifstream& fin);
template<typename T> ostream& operator<<(ostream& out, vector<T> v);
template<typename T> void testFunction(ifstream &fin, ofstream &fout, T (*func)(Nums));

// Main function, do not change this
int main() {
  
  // Get the file name from the user
  string fileName;
  cout << "Enter file name to test: ";
  cin >> fileName;

  // Open the file
  ifstream fin;
  fin.open(fileName + ".in");

  // Output file
  ofstream fout;
  fout.open(fileName + ".out");

  fout << "Name: " << NAME << endl;

  // Test the functions
  fout << "Biggest Square" << endl;
  testFunction(fin, fout, &biggestSquare);

  fout << "Find Good Pairs" << endl;
  testFunction(fin, fout, &findGoodPairs);

  fout << "Made by " << NAME << endl;

  return 0;
}

// Read the data from the file
Data readData(ifstream& fin) {
  int rows, cols;
  fin >> rows >> cols;

  Data nums(rows, Nums(cols));
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      fin >> nums[i][j];
    }
  }
  return nums;
}

// Test a function with a file
template<typename T>
void testFunction(ifstream &fin, ofstream &fout, T (*func)(Nums)) {
  Data data = readData(fin);
  for (Nums nums: data) {
    fout << nums << " -> " << func(nums) << endl;
  }
}

// Overload the << operator for vectors
template<typename T>
ostream& operator<<(ostream& out, vector<T> v) {
  out << "[" << v[0];
  for (int i = 1; i < v.size(); i++) {
    out << " " <<  v[i];
  }
  out << "]";
  return out;
}

