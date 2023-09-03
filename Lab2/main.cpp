#include <iostream>
#include <string>
using namespace std;

// PLACE YOUR NAME HERE

/* Lab 2.1 Fill in the code so that the program would do as indicated. */
void part1() {
    // Exercise 1:
    // Fill in this space to write your first and last name
    // Fill in this space to write your address (on new line)
    // Fill in this space to write you city, state and zip (on new line)
    // Fill in this space to write your telephone number (on new line)

    // Exercise 2:
    // Change the program so that three blank lines separate the telephone number from the address.

    // Exercise 3:
    // Change the program to match the following output format:
    // **************
    // Programmer: Deano Beano
    //             123 Markdella Lane
    //             Fruitland, Md. 55503
    //
    //  Telephone: 489-555-5555
    // **************
}

/* Lab 2.2  Fill in the code so that the program would do as indicated */
const double PI = 3.14;
const double RADIUS = 5.4;

void part2() {

    /* Exercise 1 & 2:
     * Your output should look like this:
     * The circumference of the circle is 33.912
     * The area of the circle is 91.5624 */

    // ____ area                      // definition of area of circle
    float circumference;              // definition of circumference of circle
    circumference = 2  * PI * RADIUS; // computes circumference
    // area = ____                    // compute area of circle

    // Fill in this space to write the code to display the circumference of the circle
    // Fill in this space to write the code to display the area of the circle

    /* Exercise 3:
     * Change the data type of circumference from float to int.
     * Run the program and record the results. */
}

/* Lab 2.3  Fill in the code so that the program would do as indicated */
void part3() {
    /* Exercise 1 & 2:
     * Using part 2 as example, write a program that will determine the area and perimeter of a rectangle.
     * length = 8, width = 3
     *
     * Your output should look like this:
     * The area of the rectangle is 24
     * The perimeter of the rectangle is 22 */

}

/* Lab 2.4  Fill in the code so that the program would do as indicated */
const string FAVORITESODA = "Dr. Dolittle";
const char BESTRATING = 'A';
void part4() {
    /* Exercise 1 & 2:
     * The following program illustrates the use of characters and strings
     * char only allows a single character to be stored in memory
     * string allows a sequence of characters.
     *
     * Fill in the code till your output looks like this:
     * The preferred soda is Dr. Dolittle
     * The preferred snack is crackers
     * Out of 250 people 148 chose these items!
     * Each of these products were given a rating of A from our expert tasters
     * The other products were rated no higher than a B */

    char rating;            // 2nd highest product rating
    string favoriteSnack;   // most popular snack
    int numberOfPeople;     // the number of people in the survey
    int topChoiceTotal;     // the number of people who prefer the top choice

    // Assign the value crackers to favoriteSnack
    // Assign a grade of B to rating
    // Assign the number 250 to the number of people in the survey
    // Assign the number 148 to the top choice total

    // Fill in the blanks and uncomment the following:
    // cout << "The preferred soda is " << ____ << endl;
    // cout << "The preferred snack is " << ____ << endl;
    // cout << "Out of " << ____ << " people " << ____ << " chose these items!" << endl;
    // cout << "Each of these products were given a rating of " << ____ << " from our expert tasters" << endl;
    // cout << "The other products were rated no higher than a " << ____ << endl;

    /* Exercise 3 * 4:
     * Is it possible to change the value of FAVORITESODA? Why or why not?
     * (without touching the code above)
     * Is it possible to change the value of favoriteSnack? Why or why not?
     * (without touching the code above) */
}

int main() {
    cout << "Lab 2" << endl;

    part1();
    part2();
    part3();
    part4();

    return 0;
}