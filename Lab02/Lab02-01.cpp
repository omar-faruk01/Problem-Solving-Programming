// =========================================================
//
// Title:      <Lab 02-01>
// Course:     CSC 1101
// Lab Number: <Lab 02-01>
// Author:     <Omar Faruk>
// Date:       <09/12/2020>
// Description:
//   In this lab, we are adding the header, white space to make code readable, 
// and adding the body comments to the code.
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
	//Song title
	cout << "Welcome to Lyrical Loons" << endl;
	cout << "----------------------------" << endl << endl;

	//First Lyrics
	cout << "I look once more," << endl; 
	cout << "Just around the riverbend," << endl; 
	cout << "Beyond the shore," << endl; 
	cout << "Somewhere past the sea." << endl << endl;

	//Second Lyrics
	cout << "Don't know what for ...," << endl;
	cout << "Why do all my dreams extend," << endl; 
	cout << "Just around the riverbend?" << endl; 
	cout << "Just around the riverbend ..." << endl << endl; 

	//End of lyrics
	cout << "End of Lyrical Loons" << endl; 

	return 0;
}
