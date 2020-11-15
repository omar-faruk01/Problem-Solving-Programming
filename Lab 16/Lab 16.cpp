//==========================================================
//
// Title:      Wayne State Senate Vote Counter
// Course:     CSC 1101
// Lab Number: Lab 16
// Author:     Omar Faruk
// Date:       11/10/2020
// Description:
//  Creating an apllication to determine student senate preside by taking 
// the highest votes usig void function with if else.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


//Globals
const int COLMFT1 = 35;
const int COLMFT2 = 10;

// Void function to decide winner
void senators_school(int senator_X, int senator_Y, int senator_Z)
{

	// If else statement to find highest votes
	if (senator_X > senator_Z && senator_X > senator_Y)
		cout << "\nSenator_X is elected as the president of the Student Senate";
	else if (senator_Z > senator_X && senator_Z > senator_Y)
		cout << "\nSenator_Z is elected as the president of the Student Senate";
	else if (senator_Y > senator_X && senator_Y > senator_Z)
		cout << "\nsenator_Y is elected as the president of the Student Senate";
	else
	{
		cout << "\nThe top two/three senators got the same votes. Set a re-election" << endl;
	}
}
int main()
{

  // Declare variables5
	int senator_X, senator_Y, senator_Z;

  // Show application header
  cout << "Welcome to Student Senate in Computer Science Deptartment!" << endl;
  cout << "-----------------------------------------------------------" << endl << endl;

  // Getting user input to set values
  cout << setw(COLMFT1) << left << "Enter the number of votes for Mr. X: ";
  cin >> setw(COLMFT2)>> right >> senator_X;
  cout << setw(COLMFT1) << left << "Enter the number of votes for Mr. Y: ";
  cin >> setw(COLMFT2) >> right >> senator_Y;
  cout << setw(COLMFT1) << left << "Enter the number of votes for Mr. Z: ";
  cin >> setw(COLMFT2) >> right >> senator_Z;

  // void function to decide winner
  senators_school(senator_X, senator_Y, senator_Z);

  // Show application close
  cout << endl <<"\nEnd of Student Senate in Computer Science Deptartment!" << endl;

}
