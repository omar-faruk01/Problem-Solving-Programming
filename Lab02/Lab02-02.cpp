// =========================================================
//
// Title:      <Lab 02-02>
// Course:     CSC 1101
// Lab Number: <Lab 02-02>
// Author:     <Omar Faruk>
// Date:       <09/12/2020>
// Description:
//   In this lab, we are adding the header, string hexStr in camel format, 
// and adding both application header and close.
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
   // Declare variable
  string hexStr;

  //Show Application Header
  cout << "Welcome to the Hexadecimal to Binary number converter!" << endl;
  cout << "-------------------------------------------------------"
      << "----------" << endl << endl;

  // Prompt for and get hexadecimal number
  cout << "Enter a hexadecimal number "
    << "(only characters 0-9, A-F): ";
  cin >> hexStr;

  // Loop to convert hexadecimal to binary
  cout << "Hexadecimal " << hexStr << " is binary ";
  for (int i = 0; i < hexStr.length(); i++)
    if (toupper(hexStr[i]) == '0')
      cout << "0000 ";
    else if (toupper(hexStr[i]) == '1')
      cout << "0001 ";
    else if (toupper(hexStr[i]) == '2')
      cout << "0010 ";
    else if (toupper(hexStr[i]) == '3')
      cout << "0011 ";
    else if (toupper(hexStr[i]) == '4')
      cout << "0100 ";
    else if (toupper(hexStr[i]) == '5')
      cout << "0101 ";
    else if (toupper(hexStr[i]) == '6')
      cout << "0110 ";
    else if (toupper(hexStr[i]) == '7')
      cout << "0111 ";
    else if (toupper(hexStr[i]) == '8')
      cout << "1000 ";
    else if (toupper(hexStr[i]) == '9')
      cout << "1001 ";
    else if (toupper(hexStr[i]) == 'A')
      cout << "1010 ";
    else if (toupper(hexStr[i]) == 'B')
      cout << "1011 ";
    else if (toupper(hexStr[i]) == 'C')
      cout << "1100 ";
    else if (toupper(hexStr[i]) == 'D')
      cout << "1101 ";
    else if (toupper(hexStr[i]) == 'E')
      cout << "1110 ";
    else if (toupper(hexStr[i]) == 'F')
      cout << "1111 ";
    else // Handle invalid hex digit
      cout << "???? ";

  //Add new line for application close
  cout << endl;

  //Show application close
  cout << "\nEnd of Hexadecimal to Binary number converter!" << endl;

}
