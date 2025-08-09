/*
 This program asks the user for three numbers,
 then calculates their sum and average, and prints the results on the screen.
*/

#include<iostream>

using namespace std;

// This structure holds our numbers and their calculated results.
struct stNumbers
{
	int num[3]; // We use an array to easily store the three numbers.
	int sum = 0; // We initialize the sum to zero to ensure it starts with a clean value.
	float Avg = 0; // We initialize the average to zero for the same reason.
};

// This function reads the three numbers from the user.
stNumbers Read3Numbers()
{
	stNumbers Numbers; 
	for (int i = 0; i < 3; i++) 
	{
		cout << "Please enter Number " << i + 1 << endl;
		cin >> Numbers.num[i];
	}

	return Numbers;
}

// This function calculates the sum of the numbers in the array.
int SumOf3Numbers(stNumbers Numbers)
{
	for (int i = 0; i < 3; i++)
	{
		Numbers.sum += Numbers.num[i];
	}
	return Numbers.sum;
}

// This function calculates the average of the numbers.
float CalculateAvg(stNumbers Numbers)
{
	// We cast the sum to a float to avoid integer division, which is crucial for getting the correct average.
	return (float)SumOf3Numbers(Numbers) / 3;
}

// This function prints the final results to the user.
void PrintResult(stNumbers Numbers)
{
	// We call the calculation functions here to get the values to print.
	cout << "\n The sum is: " << SumOf3Numbers(Numbers) << endl;
	cout << "\n The average is: " << CalculateAvg(Numbers) << endl;
}

int main()
{
	// The program reads the numbers first, then passes the structure to PrintResult to handle the rest.
	PrintResult(Read3Numbers());

	return 0;
}