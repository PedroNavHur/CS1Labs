#include <iostream>
#include <string>

using namespace std;
// Lab 6.2
// WRITE YOUR NAME HERE

void writeProverb(int); // function prototype


int main()
{
    int wordCode;
    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ____" << endl;
    cout << "Please input a 1 if you would like the sentence to be finished with party" << endl;
    cout << "Please any other number if you would like the sentence to be finished with country" << endl;
    cout << "Please input your choice now" << endl;
    cin >> wordCode;
    writeProverb(wordCode);
}

// *********************************************************************
// writeProverb
//
// task: This function prints a proverb. The function takes a number
// from the call. If that number is a 1 it prints "Now is the time
// for all good men to come to the aid of their party."
// Otherwise, it prints "Now is the time for all good men to come to the
// aid of their country."
// ********************************************************************
void writeProverb(int wordCode)
{
   // Fill in the body of the function to accomplish what is described above
}