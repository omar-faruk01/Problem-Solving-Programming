//==========================================================
//
// Title:      Lab 04-01
// Course:     CSC 1101
// Lab Number: Lab 04-01
// Author:     Omar Faruk
// Date:       09/20/20
// Description:
//   Creating a table using escape sequencs to print data
// and to separate it into 5 columns, in a table.
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

  //Declare Variables
  float u1 = 9.58;
  float u2 = 100;
  float w1 = 43.03;
  float w2 = 400;
  float s1 = 252.33;
  float s2 = 1609.344;
  float d1 = 52.16;
  float d2 = 400;

  //Averages
  float AvgUsain = (((u2) / (u1)) * 3.16);
  float AvgWayde = (((w2) / (w1)) * 3.16);
  float AvgSifan = (((s2) / (s1)) * 3.16);
  float AvgDalilah = (((d2) / (d1)) * 3.16);


  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  
  //
  cout << "Runner (m-men; w-women) \tCountry \tEvent\t\tTime\t\tAverage Speed" << endl;
  cout << "Usain Bolt (m)\t\t\tJaimaica\t100m sprint \t9.58s\t\t" << AvgUsain << "\tKm per Hour" << endl;
  cout << "Wayde Van Niekerk (m)\t\t\South Africa\t400m sprint \t43.03s\t\t" << AvgWayde << "\tKm per Hour" << endl;
  cout << "Sifan Hassan (m)\t\t\Netherlands\tMile run \t4:12.33m\t" << AvgSifan << "\tKm per Hour" << endl;
  cout << "Dalilah Muhammad (m)\t\tUnited States\t400m hurdles \t52.16s\t\t" << AvgDalilah << "\tKm per Hour" << endl;

 

  // Show application close
  cout << "\nEnd of my Application" << endl;

}
