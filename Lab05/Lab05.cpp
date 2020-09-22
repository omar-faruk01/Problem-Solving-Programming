//==========================================================
//
// Title:      Lab 05
// Course:     CSC 1101
// Author:     Lab 05
// Date:       09/22/20
// Description:
//   Creating a calculator to calculate  the total price
// based on fixed prices of grapes.
// Set variables, constants, and calculations  with output in formatted output.
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
  //Declare Constants
  const double barbaraGrapes = 4.00;
  const double colombardGrapes = 3.50;
  const double corteseGrapes = 3.00;
  const int COLFMT1 = 35;
  const int COLFMT2 = 14;

  // Declare variables
  double weight1 = 4.0;
  double weight2 = 3.5;
  double weight3 = 2.5;
  double total_price;

  //Calculations
  total_price = ((weight1 * barbaraGrapes) + (weight2 * colombardGrapes) + (weight3 * corteseGrapes));

  // Show application header
  cout << "Welcome to my Grapes Price Calculator" << endl;
  cout << "--------------------------" << endl << endl;

  // Write to screen
  cout << setw(COLFMT1) << left << "Price of Barbara grapes (per lb)";
  cout << setw(COLFMT2) << right << "4$";
  cout << setw(COLFMT1) << right << "Weight: 4.0" << endl;
  cout << setw(COLFMT1) << left << "Price of Colombard grapes (per lb)";
  cout << setw(COLFMT2) << right << "3.5$";
  cout << setw(COLFMT1) << right << "Weight: 3.5" << endl;
  cout << setw(COLFMT1) << left << "Price of Cortese grapes (per lb)";
  cout << setw(COLFMT2) << right << "3$";
  cout << setw(COLFMT1) << right << "Weight: 2.5" << endl;
  cout << setw(COLFMT1) << left << "Total price is:";
  cout << setw(COLFMT2) << right << total_price << endl;

  // Show application close
  cout << "\nEnd of my Application" << endl;

}
