//==========================================================
//
// Title:      Array Max & Min
// Course:     CSC 1101
// Lab Number: Lab 18
// Author:     Omar Faruk
// Date:       11/17/2020
// Description:
//   Creating an array with size of 7
// & using for loops to calculate max and min
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
  const int ARRAY_SIZE1 = 7;
  const int COLFMT1 = 30;
  const int COLFMT2 = 5;

  // Declare variables
  int set_max = -999999;
  int set_min = 999999;
  int index_min, index_max;
  // Show application header
  cout << "Welcome to Min & Max Array!" << endl;
  cout << "--------------------------" << endl << endl;

  // Declare array
  int array1[ARRAY_SIZE1];

  // Array input
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < ARRAY_SIZE1; i++)
  {
	  cin >> array1[i];
  }

  // Minimum & Maximum index and array number
  for (int i = 0; i < ( ARRAY_SIZE1 ); i++)
  {
	  if (array1[i] < set_min)
	  {
		  set_min = array1[i];
		  index_min = i;
	  }
  }

  for (int i = 0; i < (ARRAY_SIZE1); i++)
  {
	  if (array1[i] > set_max)
	  {
		  set_max = array1[i];
		  index_max = i;
	  }
  }
 
  // Print output
  cout << setw(COLFMT1) << left << "\nMinimum element is:"
	  << setw(COLFMT2) << right << set_min << endl
	  << setw(COLFMT1) << left << "Index of minimum element is:"
	  << setw(COLFMT2) << right << index_min << endl
	  << setw(COLFMT1) << left << "Maximum element is:"
	  << setw(COLFMT2) << right << set_max << endl
	  << setw(COLFMT1) << left << "Index of maximum element is:"
	  << setw(COLFMT2) << right << index_max << endl;

  // Show application close
  cout << "\nEnd of Min & Max Array" << endl;

}
