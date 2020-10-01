//==========================================================
//
// Title:      GPA Calculator
// Course:     CSC 1101
// Lab Number: Lab 07
// Author:     Omar Faruk
// Date:       09/29/2020
// Description:
//   Creatinga GPA calculator
// using table formatting, calculations, and variables.
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
  // Setting decimal points
  cout << fixed << setprecision(2);

  //Constants
  const int COLMT1 = 40;
  const int COLMT2 = 10;

  // Declare variables
  string std_name;
  string course1;
  string course2;
  string course3;
  double course_credit1;
  double course_credit2;
  double course_credit3;
  double grade_course1;
  double grade_course2;
  double grade_course3;
  double gpa;
  

  //User Inputs

  //Student Name
  cout << "Enter the name of the student: " << endl;
  cin >> std_name;

  //Course Name
  cout << "Enter the name of first course: " << endl;
  cin >> course1;
  cout << "Enter the name of second course: " << endl;
  cin >> course2;
  cout << "Enter the name of third course: " << endl;
  cin >> course3;

  //Course credit
  cout << "Enter the credit hour of " << course1 << endl;
  cin >> course_credit1;
  cout << "Enter the credit hour of " << course2 << endl;
  cin >> course_credit2;
  cout << "Enter the credit hour of " << course3 << endl;
  cin >> course_credit3;

  //Course Grade
  cout << "Enter the earned grade of " << course1 << endl;
  cin >> grade_course1;
  cout << "Enter the earned grade of " << course2 << endl;
  cin >> grade_course2;
  cout << "Enter the earned grade of " << course3 << endl;
  cin >> grade_course3;
  
  
  //Calculation
  double total_credit_hours = (course_credit1 + course_credit2 + course_credit3);
  gpa = (course_credit1 * grade_course1 + course_credit2 * grade_course2 + course_credit3 * grade_course3) / total_credit_hours;

  // Show application header
  cout << "Welcome to GPA calculator!" << endl;
  cout << "--------------------------" << endl << endl;

  cout << setw(COLMT1) << left << "Enter the name of the student: ";
  cout << setw(COLMT2) << right << std_name << endl;
  cout << setw(COLMT1) << left << "Enter the name of the first course: ";
  cout << setw(COLMT2) << right << course1 << endl;
  cout << setw(COLMT1) << left << "Enter the name of the second course: ";
  cout << setw(COLMT2) << right << course2 << endl;
  cout << setw(COLMT1) << left << "Enter the name of the third course: ";
  cout << setw(COLMT2) << right << course3 << endl;
  cout << setw(COLMT1) << left << "Enter the credit hour of: ";
  cout << setw(COLMT2) << right << course1;
  cout << setw(COLMT2) << left << "\t" << course_credit1 << endl;
  cout << setw(COLMT1) << left << "Enter the credit hour of: ";
  cout << setw(COLMT2) << right << course2;
  cout << setw(COLMT2) << left << "\t" << course_credit2 << endl;
  cout << setw(COLMT1) << left << "Enter the credit hour of: ";
  cout << setw(COLMT2) << right << course3;
  cout << setw(COLMT2) << left << "\t" << course_credit3 << endl;
  cout << setw(COLMT1) << left << "Enter the earned grade of: ";
  cout << setw(COLMT2) << right << course1;
  cout << setw(COLMT2) << left << "\t" << grade_course1 << endl;
  cout << setw(COLMT1) << left << "Enter the earned grade of: ";
  cout << setw(COLMT2) << right << course2;
  cout << setw(COLMT2) << left << "\t" << grade_course2 << endl;
  cout << setw(COLMT1) << left << "Enter the earned grade of: ";
  cout << setw(COLMT2) << right << course3;
  cout << setw(COLMT2) << left << "\t" << grade_course3 << endl;
  cout << setw(COLMT1) << left << "The GPA of ";
  cout << setw(COLMT2) << right << std_name << " is";
  cout << setw(COLMT2) << left << "\t" << gpa << endl;

  //App Close
  cout << "\nEnd of GPA calculator" << endl;

}
