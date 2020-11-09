//==========================================================
//
// Title:      Encryption Decryption Text File
// Course:     CSC 1101
// Lab Number: Lab 15
// Author:     Omar Faruk
// Date:       11/08/2020
// Description:
//   Taking two input files to encode and decode
// a set of string from the text file using functions
// and loops. Used file handling to open and close 
// and complete the lab.
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Globals
const int character_boundary = 256;
const int COLMFT1 = 15, COLMFT2 = 40;

string encodedLine(string inLine, int shift)
{
  int length = inLine.length();
  int k;
  char p;
  string encode;
  for (int i = 0; i < length; i++)
  {
	  k = int(inLine[i]);
	  k = k + shift;
	  k = k % character_boundary;
	  p = char(k);
	  encode = encode + p;

  }
  return encode;
}
string decodedLine(string inLine, int shift)
{
  string decode;
  int k, length = inLine.length();
  char d;
  for (int i = 0; i < length; i++)
  {
	  k = int(inLine[i]);
	  k = k - shift;
	  k = k % character_boundary;
	  d = char(k);
	  decode = decode + d;
  }
  return decode;
}
int main()
{

  // Declare variables
  ifstream SampleText_inFile, RandomNumbers_inFile;
  int sample_linecount = 0, numbers_linecount = 0;
  string sample_current;
  int numbers_current;

  // Declclare constants
  const string SAMPLE_TEXT_INPUT = "SampleText2.txt", RANDOM_NUMBERS_INPUT = "RandomNumbers.txt";

  // Show application header
  cout << "Welcome to Binary Buzzards!" << endl;
  cout << "---------------------------" << endl << endl;
  

  // Open Input Files of Random Numbers and Sample Text
  SampleText_inFile.open(SAMPLE_TEXT_INPUT);
  RandomNumbers_inFile.open(RANDOM_NUMBERS_INPUT);
  if (!SampleText_inFile.is_open())
	  cout << "Error: unable to open file '" << SAMPLE_TEXT_INPUT << "'." << endl << endl;
  if (!RandomNumbers_inFile.is_open())
	  cout << "Error: unable to open file '" << RANDOM_NUMBERS_INPUT << "'." << endl << endl;
  else
  {

	  // Reading lines
	  cout << "Reading lines from '" << SAMPLE_TEXT_INPUT << "' ..." << endl
		  << "Reading lines from '" << RANDOM_NUMBERS_INPUT << "' ..." << endl << endl;

	  // Loop to read lines from files
	  while (SampleText_inFile.good() && RandomNumbers_inFile.good())
	  {
		  // Reading sample text and printing original output 
		  getline(SampleText_inFile, sample_current);
		  cout << setw(COLMFT1) << left << "Original:" <<
			  setw(COLMFT2) << left << sample_current << endl;
		  sample_linecount = sample_linecount + 1;

		  // Reading Random numbers
		  RandomNumbers_inFile >> numbers_current;
		  numbers_linecount = numbers_linecount + 1;

		 // Printing out encoded and decoded
		  cout << setw(COLMFT1) << left << "Encoded:" <<
			  setw(COLMFT2) << left << encodedLine(sample_current,numbers_current) << 
			  "(+"<< numbers_current << ")" << endl;

		  cout << setw(COLMFT1) << left << "Decoded:" <<
			  setw(COLMFT2) << left << decodedLine(encodedLine(sample_current, numbers_current), numbers_current) 
			  <<"(-" << numbers_current << ")" << endl << endl;
	  }

	  // Close input files
	  SampleText_inFile.close();
	  RandomNumbers_inFile.close();

	  // Line count of both input files
	  cout << sample_linecount << " line(s) read from file '" << SAMPLE_TEXT_INPUT << "'" << endl
		  << numbers_linecount << " number(s) read from file '" << RANDOM_NUMBERS_INPUT << "'" << endl;
  }

  // Show application close
  cout << "\nEnd of Binary Buzzards" << endl;

}
