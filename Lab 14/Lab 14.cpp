//==========================================================
//
// Title:      Input File Scanner
// Course:     CSC 1101
// Lab Number: Lab 14
// Author:     Omar Faruk
// Date:       11/02/2020
// Description:
//   Taking an input file and reading the lines,  types of chars,
// sentences, words, and factoring while including reading level.
// Used isalnum, ispunct, and loops.
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

  // Declare variables
  ifstream SampleText_File;
  int line_count = 0, token_count = 0, count_alphanumeric = 0, count_punctuation = 0, count_other = 0,
	  count_spaces = 0, count_period = 0, count_word = 0, letters_in_words = 0, count_total = 0;
  string current;
  char space = ' ';
  double factor_1=0, factor_2=0, reading_level=0;

  // Declare constants
  const string FILE_NAME_INPUT = "SampleText2.txt";
  int COLMFT1 = 30;
  int COLMFT2 = 7;

  // Show application header
  cout << "Welcome to Text Turtles!" << endl;
  cout << "--------------------------" << endl << endl;

  // Attempt to open input file
  SampleText_File.open(FILE_NAME_INPUT);
  if (!SampleText_File.is_open())
	  cout << "Error: unable to open file '" << FILE_NAME_INPUT << "'." << endl << endl;
  else
  {

	  while (SampleText_File.good())
	  {

		  int i = 0;
		  getline(SampleText_File, current);

		  //Loop to read from input file
		  for (i = 0; current[i] != '\0'; i++)
		  {
			  // Characters
			  if (isalnum(current[i]))
				  count_alphanumeric++;
			  else if (ispunct(current[i]))
				  count_punctuation++;
			  else if (current[i] == ' ')
				  count_spaces++;
			  else
			  {
				  count_other++;
			  }

			  if (current[i] == '.')
				 count_period++;
		  }

			  //Line Count
			  line_count = line_count + 1;
	  }

	  // Calcutlation
	  count_total = count_alphanumeric + count_other + count_punctuation + count_spaces;
	  count_word = count_spaces + count_period;
	  letters_in_words = count_alphanumeric;

	  factor_1 = (double)count_alphanumeric / count_word * 100;
	  factor_2 = (double)count_period / count_word * 100;
	  reading_level = (.0588 * factor_1) - (.296 * factor_2) - 15.8;

	  // Format real numbers
	  cout << fixed << setprecision(1);

	  // Print Formatted Output

	  cout << "Reading files from file '" << FILE_NAME_INPUT << "' ..." << endl << endl;
	  cout << line_count << " line(s) read from file '" << FILE_NAME_INPUT << "'." << endl << endl;

	  cout << setw(COLMFT1) << left << "Alphanumeric chars: "
		  << setw(COLMFT2) << right << count_alphanumeric << endl;
	  cout << setw(COLMFT1) << left << "Punctuation chars: "
		  << setw(COLMFT2) << right << count_punctuation << endl;
	  cout << setw(COLMFT1) << left << "Spaces: "
		  << setw(COLMFT2) << right << count_spaces << endl;
	  cout << setw(COLMFT1) << left << "Other characters: "
		  << setw(COLMFT2) << right << count_other++ << endl;
	  cout << setw(COLMFT1) << left << "Total characters: "
		  << setw(COLMFT2) << right << count_total << endl << endl;

	  cout << setw(COLMFT1) << left << "Sentences:"
		  << setw(COLMFT2) << right << count_period << endl;
	  cout << setw(COLMFT1) << left << "Words:"
		  << setw(COLMFT2) << right << count_word << endl;
	  cout << setw(COLMFT1) << left << "Letters in words: "
		  << setw(COLMFT2) << right << letters_in_words << endl << endl;

	  cout << setw(COLMFT1) << left << "Factor 1:"
		  << setw(COLMFT2) << right << factor_1 << endl;
	  cout << setw(COLMFT1) << left << "Factor 2:"
		  << setw(COLMFT2) << right << factor_2 << endl;
	  cout << setw(COLMFT1) << left << "Reading level:"
		  << setw(COLMFT2) << right << reading_level << endl;

	  // Close input filed
	  SampleText_File.close();

  }


  // Show application close
  cout << "\nEnd of Text Turtles!" << endl;

}
