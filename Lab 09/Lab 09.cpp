//==========================================================
//
// Title:      Speed Limit System
// Course:     CSC 1101
// Lab Number: Lab 09
// Author:     Omar Faruk
// Date:       10/06/20
// Description:
//   Creating a speed limit system to signify speed with message
// using while loop,  switch case statements, and formatted table.
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
	const int COLMFT2 = 20;

  // Declare variables
	int speed;
	int range;


  // Write to screen
	cout << "Welcome to Speed Limit System!" << endl;
	cout << "--------------------------" << endl << endl;

	cout << setw(COLMFT1) << left << "Enter the speed of car: ";
	cin >> setw(COLMFT2) >> right>> speed;

	while (speed < 0 || speed > 90)

	 {
		 
		 cout << setw(COLMFT1) << left << "Input is out of range. Enter a valid speed:";
		 cin >> setw(COLMFT2) >> right>> speed;
		 
	 }

	 range = speed / 10;

	 switch (range)
	 {
		case 0:
			cout <<setw(COLMFT1) << left
				<< "Okay on parking"
				<< endl;
			break;
		case 1:
			cout << setw(COLMFT1) << left
				<< "Okay on side streets"
				<< endl;
			break;
		case 2:
			cout << setw(COLMFT1) << left
				<< "Okay on side streets"
				<< endl;
			break;
		case 3:
			cout << setw(COLMFT1) << left
				<< "Okay on major streets"
				<< endl;
			break;
		case 4:
			cout << setw(COLMFT1) << left
				<< "Okay on major streets"
				<< endl;
			break;
		case 5:
			cout << setw(COLMFT1) << left
				<< "Okay on major streets"
				<< endl;
			break;
		case 6:
			cout << setw(COLMFT1) << left
				<< "Okay on freeway"
				<< endl;
			break;
		case 7:
			cout << setw(COLMFT1) << left
				<< "You are already speeding"
				<< endl;
			break;
		case 8:
			cout << setw(COLMFT1) << left
				<< "Over speeding. Slow the car"
				<< endl;
			break;
		default:
			cout << setw(COLMFT1) << left
				<< "Unknown Speed"
				<< endl;

	 }
	

  // Show application close
	cout << "\nEnd of Speed Limit System" << endl;

}
