//==========================================================
//
// Title:      Michigan Huron Lake Levels
// Course:     CSC 1101
// Author:     Omar Faruk
// Date:       10/20/20
// Description:
//   Creating a program to display average, max, and min levels
// of water from Lake Huron. Using input to get data from textfile
// and writing the results to an output file.
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
  ifstream HuronLevels_File;
  ofstream HuronLevels_FileOutput;
  string line;
  int line_count_in, line_count_out;
  float average_level = 0;
  int min_year = 0;
  int max_year = 0;
  double level = 0;
  double year = 0;
  float min_level = 200.0000;
  float max_level = 0.0000;

  // Declare constants
  const string FILE_NAME_INPUT = "MichiganHuronLakeLevels.txt";
  const string FILE_NAME_OUTPUT = "MichiganHuronLakeLevelsHighAndLow.txt";
  const int COLMFT1 = 20;
  const int COLMFT2 = 30;

  // Format real numbers
  cout << fixed << setprecision(4);


  // Show application header
  cout << "Welcome to Water Wonders!" << endl;
  cout << "--------------------------" << endl << endl;

  // Attempt to open file input
  HuronLevels_File.open(FILE_NAME_INPUT);
  if (!HuronLevels_File.is_open())
	  cout << "Error: unable to open file '" << FILE_NAME_INPUT << "'." << endl << endl;
  else
  {

	  // Attempt to open output file
	  HuronLevels_FileOutput.open(FILE_NAME_OUTPUT);
	  if (!HuronLevels_FileOutput.is_open())
		  cout << "Error: unable to open file '" << FILE_NAME_OUTPUT << "'." << endl << endl;
	  else
	  {

		  // Print read message
		  cout << "Reading lines from file '"
			  << FILE_NAME_INPUT << "'.  ..."
			  << "\nWriting lines to file '" << FILE_NAME_OUTPUT << "'.  ..." << endl;
		  line_count_in = 2;
		  line_count_out = 0;

		  while (HuronLevels_File.good())
		  {

			  //Reading past header comments
			  getline(HuronLevels_File, line);
			  getline(HuronLevels_File, line);

			  //Read x,y
			  while (HuronLevels_File >> year >> level)
			  {

				  //Min Output
				  if (level < min_level)
				  {
					  min_year = year;
					  min_level = level;

				  }

				  //Max Output
				  if (level > max_level)
				  {
					  max_year = year;
					  max_level = level;
				  }

				  //Average Cost
				  average_level += level;
				  //Line counter
				  line_count_in = line_count_in + 1;
				 
			  }
			  
			  average_level = average_level / (line_count_in -2);

		  }
	  }


	  // Print to screen
	  cout << setw(COLMFT2) << left << " "
		  << setw(COLMFT1) << right << "Year"
		  << setw(COLMFT1) << right << "Level (meters)" << endl;
	  cout << setw(COLMFT2) << left << "Max Level:"
		  << setw(COLMFT1) << right << max_year
		  << setw(COLMFT1) << right << max_level << endl;
	  cout << setw(COLMFT2) << left << "Min Level:"
		  << setw(COLMFT1) << right << min_year
		  << setw(COLMFT1) << right << min_level << endl;
	  cout << setw(COLMFT2) << left << "Average  Level:"
		  << setw(COLMFT1) << right << ""
		  << setw(COLMFT1) << right << average_level << endl;


	  // Write to output file
	  HuronLevels_FileOutput << setw(COLMFT2) << left << " "
		  << setw(COLMFT1) << right << "Year"
		  << setw(COLMFT1) << right << "Level (meters)" << endl;
	  HuronLevels_FileOutput << setw(COLMFT2) << left << "Max Level:"
		  << setw(COLMFT1) << right << max_year
		  << setw(COLMFT1) << right << max_level << endl;
	  HuronLevels_FileOutput << setw(COLMFT2) << left << "Min Level:"
		  << setw(COLMFT1) << right << min_year
		  << setw(COLMFT1) << right << min_level << endl;
	  HuronLevels_FileOutput << setw(COLMFT2) << left << "Average  Level:"
		  << setw(COLMFT1) << right << ""
		  << setw(COLMFT1) << right << average_level << endl;
	  line_count_out = 4;


	  // Close input file
	  HuronLevels_File.close();
	  cout << endl << line_count_in
		  << " line(s) read from file '"
		  << FILE_NAME_INPUT << "'." << endl;

	  // Close output file
	  HuronLevels_FileOutput.close();
	  cout << line_count_out << " line(s) written to file '"
		  << FILE_NAME_OUTPUT << "'." << endl << endl;
  }

  // Show application close
  cout << "\nEnd of Water Wonders" << endl;

}
