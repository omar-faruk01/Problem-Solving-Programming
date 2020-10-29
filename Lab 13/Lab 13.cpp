//==========================================================
//
// Title:      Magic Number
// Course:     CSC 1101
// Lab Number: Lab 13
// Author:     Omar Faruk
// Date:       10/27/2020
// Description:
//  Taking input from user then using validaton loop and for loop
// to determine the sum and if it is a special number.
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
	const int COLMFT1 = 45;
	const int COLMFT2 = 7;

  // Declare variables
	int user_input;
	int sum = 0;
	int i = 1;

  // Show application header
  cout << "Welcome to Magic Number!" << endl;
  cout << "------------------------" << endl << endl;
  
  // Print to screen w. validation and for loop
  cout << setw(COLMFT1) << left << "Enter the value of a number: ";
  cin >> setw(COLMFT2) >> right >> user_input;
  while (user_input < 20 || user_input > 10000)
  {
	  cout << setw(COLMFT1) << left << "\nError: Enter value again:";
	  cin >> setw(COLMFT2) >> right >> user_input;
  }

  for (i=1; i< user_input; i++)
  {
	  if ( i % 3 == 0 && i % 5 == 0 && i % 2 != 0  && i % 4 != 0 )
	  {
		  sum = sum + i;
	  }
  }
  
  cout << setw(COLMFT1) << left << "\nSum is";
  cout << setw(COLMFT2) << left << sum;

  // Check number 
  if (sum > user_input)
	  cout << setw(COLMFT1) << endl << "\nCongratulations, it is a special number!" << endl;
  else
  {
	  cout << setw(COLMFT1) << endl << "\nIt is not special number!" << endl;
  }

  // Show application close
  cout << "\nEnd of Magic Number" << endl;

}
