//==========================================================
//
// Title:      Reverse Text Generator
// Course:     CSC 1101
// Lab Number: Lab 11
// Author:     Omar Faruk
// Date:       10/13/2020
// Description:
//   Taking an user input to print it in reverse 
// using while loop for validation and for loop for string reverse
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	// Declare Constants
	const int COLMFT1 = 50;
	const int COLMFT2 = 50;


	// Declare variables
	string status1;
	int length1;


	//User input
	cout << "Enter the status: " << endl;
	getline(cin, status1);

	cout << endl;
	// While Loop for Validation
	length1 = status1.length();
	while (length1 < 10 || length1 > 50)
	{
		cout << "\nYour status is out of the range. Enter again" << endl;
		getline(cin, status1);
		length1 = status1.length();
		cout << endl;
	}

	cout << setw(COLMFT1) << left << "Length of status: "
		<< setw(COLMFT2) << right << status1 << " is: " << length1 << endl;
	cout << setw(COLMFT1) << left << "The reverse string is " << endl;
	
	//For Loop to print in reverse
	for (int i = (length1 - 1); i >= 0; i--)
		cout << status1[i];


}
