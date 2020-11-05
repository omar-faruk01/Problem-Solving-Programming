//==========================================================
//
// Title:      Sentinel Loop w/ even numbers sum
// Course:     CSC 1101
// Author:     Omar Faruk
// Date:       11/04/200
// Description:
//   Creating a sentinel loop to take user input
// and add all user inputs that are even.
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

  // Declare variables
  int num;
  int sum=0;

  cout << "\nEnter a whole number (-5 to exit): ";
  cin >> num;
  while (num != -5)
  {
	  // Adding even numbers to sum
	  if (num % 2 == 0)
		  sum = sum + num;


	  // Get the next numer
	  cout << "\nEnter a whole number (-5 to exit): ";
	  cin >> num;

  }

  //Printing sum 
  cout << "\nThe sum is '" << sum << "'.";
}
