//==========================================================
//
// Title:      Currency Converter
// Course:     CSC 1101
// Lab Number: Lab 06-01
// Author:     Omar Faruk
// Date:       09/27/2020
// Description:
//   Currency converter from USD to BD Taka or BDT.
// Using table formatting and Oanda for currency rate after user input.
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
  // Setting Decimal Points
  cout << fixed << setprecision(2);

  // Declare variables
  double usDollar;
  double currencyEquation;
  double totalBdt;

  // Constants
  const double bdt = 83.2830;
  const double usdNum = 1;
  const int COLFMT1 = 30;
  const int COLFMT2 = 15;

  // Show application header
  cout << "Cash Converter" << endl;
  cout << "--------------------------" << endl << endl;


  // Write to screen
  cout << "Hello" << endl;
  cout << "Welcome to the Currency Converter!" << endl;

  // cout << "Enter a number: ";
  cout << "\nEnter a number in US Dollar:";

  //User Input
  cin >> usDollar;

  // Calculation
  currencyEquation = (bdt/usdNum);
  totalBdt = (usDollar * currencyEquation);

  // Adding spacing
  cout << endl;

  //Table Formatting
  cout << setw(COLFMT1) << left << "US Dollars:";
  cout << setw(COLFMT2) << right << usDollar << endl;
  cout << setw(COLFMT1) << left << "Conversion rate (per USD):";
  cout << setw(COLFMT2) << right << currencyEquation << endl;
  cout << setw(COLFMT1) << left << "Bangaldesh Taka:";
  cout << setw(COLFMT2) << right << totalBdt << endl;


  // Show application close
  cout << "\nEnd of Currency Converter!" << endl;

}
