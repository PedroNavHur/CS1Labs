
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

/* Lab 5.1 Exercises 1-3
  This program asks for a letter and prints it.

  Exercise 1: The program is not user friendly. Run it a few times and explain  why.
              Write your answer here:

  Exercise 2: Add to the code so that the program is more user friendly.

  Exercise 3: Replace the while loop with a do/while loop. What happens?
              Write your answer here:

 */
void part1a()
{
  char letter = 'a';

  while (letter != 'x')
  {
    cout << "Please enter a letter" << endl;
    cin >> letter;
    cout << "The letter you entered is " << letter << endl;
  }
}

/* Lab 5.1 Exercises 1-3
  This program asks for a letter and prints it.

  Exercise 1: The program is not user friendly. Run it a few times and explain  why.
              Write your answer here:

  Exercise 2: Add to the code so that the program is more user friendly.

  Exercise 3: Replace the while loop with a do/while loop. What happens?
              Write your answer here:

 */
void part1b()
{
  int month = 0; // Change and initialize to 1 the variable month
  float total = 0, rain;

  cout << "Enter the total rainfall for month " << month << endl;
  cout << "Enter -1 when you are finished" << endl;
  // Fill in the code to read in the value for rain

  // Fill in the code to start a while loop that iterates
  // while rain does not equal -1
  {
    // Fill in the code to update total by adding it to rain
    // Fill in the code to increment month by one

    cout << "Enter the total rainfall in inches for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;
    // Fill in the code to read in the value for rain
  }

  if (month == 1)
    cout << "No data has been entered" << endl;
  else
    cout << "The total rainfall for the " << month - 1
         << " months is " << total << " inches." << endl;
}

/* Lab 4.2 Exercises 1-3
  This program tests if a student passes or fails if their grade is 60 or higher.

  Exercise 1: Run it, what happens when you enter 60? 61? 59?
              (Fix the error and run the program again so it prints "You Pass" when the grade is 60 or higher.)

  Exercise 2: Replace the two if statements with an if/else statement.

  Exercise 3: Modify the program to add the following categories:
              Above 100: "Invalid Data"
              90 - 100: "You got an A"
              80 - 89: "You got a B"
              60 - 79: "You Pass"
              0 - 59: "You Fail"

              (Hint: you may need to add more if/else statements.)

  Optional: What happens if you enter a negative value? Modify the program to handle negative values.

  Example final runs:
  --------------------------------
    Input your average:
    > 101
    Invalid Data
  --------------------------------
    Input your average:
    > 90
    You got an A
  --------------------------------
    Input your average:
    > 89
    You got a B
  --------------------------------
    Input your average:
    > 79
    You Pass
  --------------------------------
    Input your average:
    > 59
    You Fail
  --------------------------------
 */
void part2()
{
  float average; // holds the grade average

  // Prompt for average
  cout << "Input your average:" << endl;
  cin >> average;

  // Test if average is greater than 60
  if (average > 60)
    cout << "You Pass" << endl;

  // Test if average is less than 60
  if (average < 60)
    cout << "You Fail" << endl;
}

/* Lab 4.3 Exercises 1-4
  This Program asks the user for their year in school and their GPA and prints wheter they can graduate soon or need more schooling.

  Exercise 1: Rewrite gpa >= 2.0 in the first if statement using the NOT operator.
              Hint: you may need to add parentheses, the not operator is (!)
              Hint: !(a < b) is the same as (a >= b)

  Exercise 2: Could you replace year !='4' in the else if statement with year < 4 or year <= 3? Why or why not?
              Write your answer here:

  Exercise 3: If you replace (gpa >= 2.0 && year == '4') with (gpa >= 2.0 || year == '4') will the program still work as expected?
              Why or why not? Write your answer here:

  Exercise 4: Could you replace the else if with the single word else? Why or why not?
              Write your answer here:

  Example final runs:
  --------------------------------
    What year student are you ?
    Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)
    > 4
    Now enter your GPA
    > 2.0
    It is time to graduate soon
  --------------------------------
    What year student are you ?
    Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)
    > 4
    Now enter your GPA
    > 1.9
    You need more schooling
  --------------------------------
    What year student are you ?
    Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)
    > 3
    Now enter your GPA
    > 2.5
    You need more schooling
  --------------------------------
 */
void part3()
{

  char year;
  float gpa;

  // Prompt for student year
  cout << "What year student are you ?" << endl;
  cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
       << endl
       << endl;
  cin >> year;

  // Prompt for student GPA
  cout << "Now enter your GPA" << endl;
  cin >> gpa;

  // Test if student is a senior and has a GPA of 2.0 or higher
  if (gpa >= 2.0 && year == '4')
    cout << "It is time to graduate soon" << endl;

  // Test if the student isn't a senior and has a GPA lower than 2.0
  else if (year != '4' || gpa < 2.0)
    cout << "You need more schooling" << endl;
}

/* Lab 4.4 Exercises 1-3
  This program tells you a message based in your grade.

  Exercise 1: What happens if you remove the break statements?
              Write your answer here:

  Exercise 2: Add another switch statement to print "You Passed" for a grade of D or better.
              Hint: If you remove the breaks in the first case statement, you can use the same code for it and the following case statements.
  Example final runs:
  --------------------------------
    What grade did you earn in Programming I ?
    > A
    You PASSED!
    an A - excellent work !
  --------------------------------
    What grade did you earn in Programming I ?
    > B
    You PASSED!
    you got a B - good job
  --------------------------------
    What grade did you earn in Programming I ?
    > F
    you failed - better luck next time
  --------------------------------
 */
void part4()
{
  char grade;

  // Prompt for the grade
  cout << "What grade did you earn in Programming I ?" << endl;
  cin >> grade;

  // This is where the switch statement begins
  switch (grade)
  {
  case 'A':
    cout << "an A - excellent work !" << endl;
    break;
  case 'B':
    cout << "you got a B - good job" << endl;
    break;
  case 'C':
    cout << "earning a C is satisfactory" << endl;
    break;
  case 'D':
    cout << "while D is passing, there is a problem" << endl;
    break;
  case 'F':
    cout << "you failed - better luck next time" << endl;
    break;
  default:
    cout << "You did not enter an A, B, C, D, or F" << endl;
  }
}

/* Lab 4.5 Write a Program from scratch
  Option 1:
    Write a program that prompts the user for their quarterly water bill for the last four quarters.
    The program should find and output their average quarterly water bill.
    If the average bill exceeds $75, the output should include a message indicating that too much water is being used.
    If the average bill is at least $25 but no more than $75, the output should indicate that a typical amount of water is being used.
    Finally, if the average bill is less than $25, the output should contain a message praising the user for conserving water.
    Use the sample run below as a model for your output.

    Hints: You can use multiple prompts or a prompt inside a for loop for the input.
           You can use setprecision(2) and fixed to format the bill output.
           You can use if statements for the output message.

    Sample Runs:
    --------------------------------
      Enter your water bill for quarter 1:
      > 50
      Enter your water bill for quarter 2:
      > 60
      Enter your water bill for quarter 3:
      > 70
      Enter your water bill for quarter 4:
      > 80
      Your average monthly water bill is $65.00
      You are using a typical amount of water
    --------------------------------
      Enter your water bill for quarter 1:
      > 10
      Enter your water bill for quarter 2:
      > 20
      Enter your water bill for quarter 3:
      > 30
      Enter your water bill for quarter 4:
      > 20
      Your average monthly water bill is $20.00
      You are conserving water
    --------------------------------
      Enter your water bill for quarter 1:
      > 100
      Enter your water bill for quarter 2:
      > 100
      Enter your water bill for quarter 3:
      > 100
      Enter your water bill for quarter 4:
      > 100
      Your average monthly water bill is $100.00
      You are using too much water
    --------------------------------

  Option 2:
    The local t-shirt shop sells shirts that retail for $12.
    Quantity discounts are given as follow:
      Number of Shirts Discount
      5–10              10%
       11–20              15%
       21–30              20%
       31 or more         25%

    Write a program that prompts the user for the number of shirts required and then computes the total price.
    Make sure the program accepts only nonnegative input.

    Hints: You can use multiple if statements.
           Remember to format the costs output.

    Sample Runs:
    --------------------------------
      How many shirts would you like ?
      > 4
      The cost per shirt is $12 and the total cost is $48.
    --------------------------------
      How many shirts would you like ?
      > 0
      The cost per shirt is $12 and the total cost is $0.
    --------------------------------
      How many shirts would you like ?
      > 8
      The cost per shirt is $10.80 and the total cost is $86.40.
    --------------------------------
      How many shirts would you like ?
      > -2
      Invalid input. Please enter a nonnegative integer.
    --------------------------------

    Option 3:
      The University of Guiness charges $3000 per semester for in-state tuition and $4500 per semester for out-of-state tuition.
      In addition, room and board is $2500 per semester for in-state students and $3500 per semester for out-of-state students.
      Write a program that prompts the user for their residential status (i.e., in-state or out-of-state) and whether they require room and board (Y or N).
      The program should then compute and output their bill for that semester.

    Hints: You need to do assignments inside if statements or switch statements.
          Remember to format the bill output.

    Sample Runs:
    --------------------------------
      Please input "I" if you are in-state or "O" if you are out-of-state:
      > I
      Please input "Y" if you require room and board and "N" if you do not:
      > N
      Your bill for this semester is $3000.
    --------------------------------
      Please input "I" if you are in-state or "O" if you are out-of-state:
      > O
      Please input "Y" if you require room and board and "N" if you do not:
      > Y
      Your bill for this semester is $8000.
 */
void part5()
{
  // Your code here
}

// Driver function for lab 4 - no need to do anything below this
int main()
{
  int choice;
  cout << "Lab 4 - Press (1-5) to run the desired exercise:" << endl;
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
  default:
    cout << "Invalid choice" << endl;
  }

  return 0;
}