//==========================================================
//
// Title:     Leaf Drop Calculator
// Course:     CSC 1101
// Lab Number: Lab 08-01
// Author:     Omar Faruk
// Date:       10/05/20
// Description:
//   Using inputs create a formatted output 
// and using if else statements and operants.
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

	// Declare constants
	const int COLMFT1 = 35;
	const int COLMFT2 = 15;
	const string sept = "September";
	const string nov = "November";
	const string oct = "October";


	//Declare Variables
	int total_drop;
	float average_drop;
	int septLeaf;
	int octLeaf;
	int novLeaf;

	// Show application header
	cout << "Welcome to Maple Marvels!" << endl;
	cout << "--------------------------" << endl << endl;

	cout << fixed << setprecision(3);


	// Write to screen
	cout << setw(COLMFT1) << left << "Enter the leaf drop for September:";
	cin >> septLeaf;
	cout << setw(COLMFT1) << left << "Enter the leaf drop for October:";
	cin >> octLeaf;
	cout << setw(COLMFT1) << left << "Enter the leaf drop for November:";
	cin >> novLeaf;


	if (septLeaf < 0)
		cout << "Error: all leaf count must be at least zero."
		<< endl;
	else if (octLeaf < 0)
		cout << "Error: all leaf count must be at least zero."
		<< endl;
	else if (novLeaf < 0)
		cout << "Error: all leaf count must be at least zero."
		<< endl;
	else
	{


		//Calculation
		total_drop = (septLeaf + octLeaf + novLeaf);
		average_drop = septLeaf + octLeaf + novLeaf / 3;

		cout << endl;
		cout << setw(COLMFT1) << left << "September leaf drop:";
		cout << setw(COLMFT2) << right << septLeaf << endl;
		cout << setw(COLMFT1) << left << "October leaf drop:";
		cout << setw(COLMFT2) << right << octLeaf << endl;
		cout << setw(COLMFT1) << left << "November leaf drop:";
		cout << setw(COLMFT2) << right << novLeaf << endl;
		cout << setw(COLMFT1) << left << "Average drop:";
		cout << setw(COLMFT2) << right << average_drop << endl;
		cout << setw(COLMFT1) << left << "Total drop:";
		cout << setw(COLMFT2) << right << total_drop << endl;
		cout << setw(COLMFT1) << left << "Highest drop:";

		if (septLeaf > octLeaf && septLeaf > novLeaf)
			cout << setw(COLMFT2) << right << sept;
		else if (octLeaf > novLeaf && octLeaf > septLeaf)
			cout << setw(COLMFT2) << right << oct;
		else
			cout << setw(COLMFT2) << right << nov;

		cout << endl;
		cout << setw(COLMFT1) << left << "Lowest drop:";

		if (septLeaf < octLeaf && septLeaf < novLeaf)
			cout << setw(COLMFT2) << right << sept;
		else if (octLeaf < novLeaf && octLeaf < septLeaf)
			cout << setw(COLMFT2) << right << oct;
		else
			cout << setw(COLMFT2) << right << nov;

	
	}
	// Show application close
	cout << "\nEnd of Maple Marvels" << endl;

}
