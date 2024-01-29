/* Exercises

  YOUR NAME HERE: 

  1. Fill in the code so that the program will produce the following:
     
      The preferred soda is Coca-Cola
      The preferred snack is Doritos
      Out of 250 people 148 chose these items!
      Each of these products were given a rating of A from our expert tasters
      The other products were rated no higher than a B

   2. Is it possible to change FAVORITE_SODA inside main() by adding code?
      Why or why not?

      Answer here:

    3. Is it possible to change favoriteSnack inside main() by adding code?
      Why or why not?

      Answer here:
*/

#include <iostream> // needed to perform C++ I/O
#include <string> // needed to use strings
using namespace std; // needed to use shorthand notation

// Definition of constants
// Note by convention we use all caps for constants
const string FAVORITE_SODA = "Coca-Cola"; // use double quotes for strings
const char BEST_RATING = 'A'; // use single quotes for characters


int main() { // Code inside here is what is executed

  // Declare variables
  string favoriteSnack; // Favorite snack
  char secondRating; // Rating of the snack
  int numberOfPeople; // Number of people in the survey
  int topChoiceTotal; // Total number of people who prefer the top choice

  // Assign values to the variables
  favoriteSnack = // TODO: Fill in the code to assign your favorite snack
  secondRating = // TODO: Assign 'B' to secondRating
  numberOfPeople = 250;
  topChoiceTotal = 148;

  cout << "The preferred soda is " << FAVORITE_SODA << endl;
  cout << "The preferred snack is " << favoriteSnack << endl;

  cout << "Out of " << numberOfPeople << " people "
    << topChoiceTotal << " chose these items!" << endl;

  cout << "Each of these products were given a rating of " << BEST_RATING;
  cout << " from our expert tasters" << endl;
  cout << "The other products were rated no higher than a " << secondRating << endl;

  return 0; // Return 0 to indicate normal termination

}