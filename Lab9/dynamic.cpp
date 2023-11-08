// This program demonstrates the use of dynamic variables

/* Exercises:
   1. Complete the program by filling in the code where TODOs indicate.
      Note: use pointer variables and the & and * operators.
      Example Run:
      Enter your last name with exactly 10 characters.
      If your name has < 10 characters, repeat last letter.
      Blanks at the end do not count.
      Smithhhhhh
      Hi Smithhhhhh
      Enter three integer numbers separated by blanks
      1 2 3
      The three numbers are 1 2 3
      The sum of the three values is 6

   2. In inputting and outputting the name, you were asked NOT to use bracket subscript.
      Why is a bracketed subscript unnecessary?
      Answer:

      Would using name[pos] work for inputting the name? Why or why not?
      Answer:

      Would using name[pos] work for outputting the name? Why or why not?
      Answer:

*/

# include <iostream>
using namespace std;

const int MAXNAME = 10;

int main() {
  int pos;
  char *name = nullptr; // Pointer variable, can point to a char variable
  int *one = nullptr; // Pointer variable, can point to an int variable
  int *two = nullptr; // Pointer variable, can point to an int variable
  int *three = nullptr; // Pointer variable, can point to an int variable
  int result;

  one = new int; // Allocate an int variable
  two = _____; // TODO: Allocate an int variable
  three = _____; // TODO: Allocate an int variable
  name = ______; // TODO: Allocate a char array

  cout << "Enter your last name with exactly 10 characsters." << endl;
  cout << "If your name has < 10 characters, repeat last letter. " << endl
       << "Blanks at the end do not count." << endl;
  for (pos = 0; pos < MAXNAME; pos++) {
    cin >> ______; // TODO: Fill in code to input a character WITHOUT using bracket subscript
  }

  cout << "Hi ";
  for (pos = 0; pos < MAXNAME; pos++) {
    cout << ______; // TODO: Fill in code to input a character WITHOUT using bracket subscript
  }

  cout << endl << "Enter three integer numbers separated by blanks" << endl;
  cin >> *one >> _____ >> _____; // TODO: Fill in code to input the numbers pointed to by one, two, and three

  cout << "The three numbers are " << _____ << " " << ____ << " " << _____ << endl; // TODO: Fill in code to output the numbers pointed to by one, two, and three

  result = _____ + ____ + ____; // TODO: Fill in code to calculate the sum of the three numbers pointed to by one, two, and three
  cout << "The sum of the three values is " << result << endl;
  
  delete one;
  // TODO: deallocate the memory assigned to two and three
  // TODO: deallcoate the memory assigned to name

  return 0;
}