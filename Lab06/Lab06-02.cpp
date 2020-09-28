//==========================================================
//
// Title:      Temperate at Altitude
// Course:     CSC 1101
// Lab Number: Lab 06-02
// Author:     Omar Faruk
// Date:       09/27/2020
// Description:
//   Calculate the temperate at a certain altitude
// using user input, calculations, table formatting, and char.
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
  //Setting 2 decimal points
  cout << fixed << setprecision(2);

  // Constant
  const char DEGREE_SYMBOL = (char)167;
  const int COLFMT1 = 20;
  const int COLFMT2 = 5;

  // Declare variables
  int groundTemperature;
  double altitude;
  double airTemperature;
  double fahrenheit;


  // Show application header
  cout << "Welcome to Frigid Feet!" << endl;
  cout << "--------------------------" << endl << endl;


  // User Input
  cout << "\nEnter ground temperature" << DEGREE_SYMBOL << "C" << ":";
  cin >> groundTemperature; // Ground temperature in Celsius

  cout << "Enter altitude (km):";
  cin >> altitude; // Altitude in Kilometers


  // Calculation
  airTemperature = groundTemperature - (altitude * 6.5); // air temp
  fahrenheit = (airTemperature * 9 / 5) + 32; // Celsius to Fahrenheit

  // New line for spacing
  cout << endl;

  //Table Formatting
  cout << setw(COLFMT1) << left << "Ground temperature:";
  cout << setw(COLFMT2) << right << groundTemperature << "   ";
  cout << left << DEGREE_SYMBOL << "C" << endl;
  cout << setw(COLFMT1) << left << "Altitude:";
  cout << setw(COLFMT2) << right << altitude << "   ";
  cout << left << "Km" << endl;
  cout << setw(COLFMT1) << left << "Air temperature:";
  cout << setw(COLFMT2) << right << airTemperature << "   ";
  cout << left <<  DEGREE_SYMBOL << "C" << endl;
  cout << setw(COLFMT1) << left << "Air temperature:";
  cout << setw(COLFMT2) << right << fahrenheit << "   ";
  cout << left <<  DEGREE_SYMBOL << "F" << endl;

  // Show application close
  cout << "\nEnd of Frigid Feet!" << endl;

}
