//==========================================================
//
// Title:      Do while loop for validation
// Course:     CSC 1101
// Author:     Omar Faruk
// Date:       11/04/2020
// Description:
//  Using a do while loop to make a validation loop
// using if else.
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
  // Declare varibales
  char user_vowel;
  bool checkloop = false;

  // Do while loop for validation
  do
  {
      // User input
      cout << "Enter a vowel (a,e,i,o,u): ";
      cin >> user_vowel;
      
      // Validtion using if else
      if (
          user_vowel == 'a' || user_vowel == 'e'|| user_vowel == 'i'|| user_vowel == 'o' || user_vowel == 'u'

          )
          checkloop=true;
      else
      {
          cout << "Error: invalid vowel of " << user_vowel << "." << endl;
          cout << "\nEnter a vowel (a,e,i,o,u): ";
          cin >> user_vowel;
      }
  } 
  while (user_vowel==true);
  {
      // To print input is valid
      cout << "\n'" << user_vowel << "' is a valid vowel." << endl;
  }
 

}
