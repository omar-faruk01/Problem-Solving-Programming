//==========================================================
//
// Title:      Address: Alpha, Digits, & Other Char Counter
// Course:     CSC 1101
// Lab Number: Lab 10-01
// Author:     Omar Faruk
// Date:       10/11/20
// Description:
//  Count the alphas, digits, and others character
// using while loop and if else statement for validation print.
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
	const int COLMFT1 = 25;
	const int COLMFT2 = 20;

	// Declare variables
	string address;
	char l;
	char i;
	int count_alphas=0;
	int count_digits=0;
	int count_other=0;


	// Show application header
	cout << "Welcome to Avuncular Addresses!" << endl;
	cout << "--------------------------" << endl << endl;

	// Write to screen

	// Getting user input
	cout << setw(COLMFT1) << left << "Enter an address:";
	getline(cin, address);
	cout << endl;

	cout << setw(COLMFT1) << left << "Address:"
		<< setw(COLMFT2) << right << address << endl;


	// Loop to count alpha, digit, and other
	l = address.length();
	i = 0;
	while (i < l)
	{
		if (isalpha(address.at(i)))
			count_alphas++;
		else if (isdigit(address.at(i)))
			count_digits++;
		else {
			count_other++;
		}
	
			i++ ;
	}

	// Printing out results
	cout << setw(COLMFT1) << left << "Length:"
		<< setw(COLMFT2) << right << address.length() << endl;
	cout << setw(COLMFT1) << left << "Digits:"
		<< setw(COLMFT2) << right << count_digits << endl;
	cout << setw(COLMFT1) << left << "Alphas:"
		<< setw(COLMFT2) << right << count_alphas << endl;
	cout << setw(COLMFT1) << left << "Other:"
		<< setw(COLMFT2) << right << count_other << endl;

	// Check statement with if else for valid input
	if (count_digits < 2 || count_alphas < 3)
		cout << setw(COLMFT1) << left << "Address is Invalid!" << endl;
	else {
		cout << "Address is Valid!";
		 }
	
 
  // Show application close
  cout << "\nEnd of Avuncular Addresses" << endl;

}
