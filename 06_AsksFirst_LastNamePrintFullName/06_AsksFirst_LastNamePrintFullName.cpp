/*
 This program asks the user for their first and last name, then prints the full name.
*/

#include <iostream>
#include <string>

using namespace std;

// Defines a structure to hold the first and last name.
struct stInfo
{
    string FirstName;
    string LastName;
};

// Reads the first and last name from the user.
stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your First Name:\n";
    // We use `getline` to handle names with spaces if needed in the future.
    getline(cin, Info.FirstName);

    cout << "Please enter your Last Name:\n";
    getline(cin, Info.LastName);

    return Info;
}

// Combines the first and last names into a single string.
string GetFullName(stInfo Info)
{
    // A more direct and cleaner way to return the full name.
    return Info.FirstName + " " + Info.LastName;
}

// Prints the full name to the console.
void PrintFullName(string FullName)
{
    cout << "\n Your name is: " << FullName << endl;
}

int main()
{
    // Calling the functions in a single, readable line.
    PrintFullName(GetFullName(ReadInfo()));

    return 0;
}