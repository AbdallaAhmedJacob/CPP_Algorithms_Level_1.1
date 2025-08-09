/*
 This program asks the user for a number,
 then calculates and prints half of that number.
*/

#include <iostream>
#include <string>       

using namespace std;

// Function to read a number from the user.
int ReadNumber()
{
    int Number; 

    cout << "Please enter a number:\n"; 
    cin >> Number; 

    return Number; 
}

// Function to calculate half of the number.
float CalculateHalfNumber(int Num)
{
    // We use '(float)' to make sure the result is a decimal number (like 5.5, not just 5).
    return (float)Num / 2;
}

// Function to print the final result.
void PrintResult(int Num)
{
    // 'to_string' converts a number to text, so we can combine it with other text.
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

    cout << endl << Result << endl;
}

int main()
{
    PrintResult(ReadNumber());

    return 0;
}