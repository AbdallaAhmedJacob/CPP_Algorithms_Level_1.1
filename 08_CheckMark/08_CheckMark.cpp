/*
 This program asks the user to enter a mark, then checks if it is
 a passing grade (50 or more) or a failing grade (less than 50).

*/

#include <iostream>

using namespace std;

// We use an 'enum' to make the code more readable and to give clear names
// to the states of Pass and Fail.
enum enPassFail
{
    Pass = 1, 
    Fail = 2  
};

unsigned short ReadMark()
{
    unsigned short Mark; // We use 'unsigned short' because a mark cannot be negative.

    cout << "Please enter your Mark: \n"; // 'cout' is used to print a message to the user.
    cin >> Mark; 

    return Mark; 
}

// This function checks the mark to see if the student passed or failed.
enPassFail CheckMark(unsigned short Mark)
{
    // We check if the mark is 50 or higher. The number 50 is our benchmark for passing.
    if (Mark >= 50)
        return enPassFail::Pass;
    // If the mark is not 50 or higher, it must be a fail.
    else
        return enPassFail::Fail;
}

void PrintResult(unsigned short Mark)
{
    // We call 'CheckMark' to get the result (Pass or Fail) before printing.
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\n You PASS\n";
    else
        cout << "\n You FAIL\n";
}

int main()
{
    // The program reads the mark, checks the result, and then prints it, all in one line.
    PrintResult(ReadMark());

    return 0;
}