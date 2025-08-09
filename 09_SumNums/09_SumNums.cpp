/*
 This program asks the user for three numbers,
 then calculates and prints their sum on the screen.
*/

#include<iostream>

using namespace std;

// This structure holds our numbers and their sum.
struct stNumbers
{
	int num[3]; // We use an array to easily store and access the three numbers.
	int sum = 0; // We initialize the sum to zero to ensure it starts with a clean value.
};

// This function reads the three numbers from the user.
stNumbers Read3Numbers()
{
	stNumbers Number;

	for (int i = 0; i <= 3 - 1; i++) // This loop runs three times to get each number.
	{
		cout << "Please enter Number " << i + 1 << endl;
		cin >> Number.num[i];
	}

	return Number;
}

// This function calculates the sum of the numbers in the array.
int SumOf3Numbers(stNumbers Number)
{
	for (int i = 0; i <= 3 - 1; i++) // We loop through the array to add each number to the sum.
	{
		Number.sum += Number.num[i];
	}
	return Number.sum;
}

// This function prints the final result to the user.
void PrintResult(int Number)
{
	cout << "The sum of the entered numbers is: " << Number << endl;
}

int main()
{
	// We call the functions in order: read, sum, and print.
	PrintResult(SumOf3Numbers(Read3Numbers()));

	return 0;
}