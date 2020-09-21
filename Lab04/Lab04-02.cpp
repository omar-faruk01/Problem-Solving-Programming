//==========================================================
//
// Title:      Lab 04-02
// Course:     CSC 1101
// Lab Number: Lab 04-02
// Author:     Omar Faruk
// Date:       09/20/20
// Description:
// Application created for deliver cost of package from city to city based on miles
//   Completing header comments and declaring constants and datatypes such as int,
// double, and string. Also adding application header and close.
// Added calculating functions and created table format for a delivery cost estimator
// based on distance with cost per mile and cost per pound for weight of packgae.
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
  const double costPpound = 2.50;
  const double costPmile = 0.02;
  const int COLFMT1 = 28;
  const int COLFMT2 = 20;

  // Declare variables
  string cityStart = "New Jersey";
  string cityEnd = "Denver";
  double packageWeight = 8;
  int distance = 900;
  double shipping;


  // Format real numbers
  cout << fixed << setprecision(2);

  // Show application header
  cout << "Welcome to Package Penguins!" << endl;
  cout << "--------------------------" << endl << endl;

  // Calculate cost
  shipping = ((packageWeight * costPpound) + (distance * costPmile));

  // Show outputs
  cout << setw(COLFMT1) << left << "From City:";
  cout << setw(COLFMT2) << right << cityStart << endl;
  cout << setw(COLFMT1) << left << "To City:";
  cout << setw(COLFMT2) << right << cityEnd << endl;
  cout << setw(COLFMT1) << left << "Weight (pounds):";
  cout << setw(COLFMT2) << right << packageWeight << endl;
  cout << setw(COLFMT1) << left << "Distance (miles):";
  cout << setw(COLFMT2) << right << distance << endl;
  cout << setw(COLFMT1) << left << "Delivery Cost ($):";
  cout << setw(COLFMT2) << right << shipping << endl;


  // Show application close
  cout << "\nEnd of Package Penguins" << endl;

}
