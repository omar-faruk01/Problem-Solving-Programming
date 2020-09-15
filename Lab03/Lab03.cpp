//==========================================================
//
// Title:      <Lab 03>
// Course:     CSC 1101
// Lab Number: <Lab 03>
// Author:     <Omar Faruk>
// Date:       <09/15/2020>
// Description:
//   In this lab, we are adding the header, body, and declaring variable
// for distance, time, and gravity.
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

    //Declare variables
    double h;           // Distance (meters)
    double g = 9.8;     // Gravity (ms^-2)
    int t;              // Time (seconds)

    //User input for time
    cout<<"Enter the value of time traveled by the fallen object:    ";
    cin>>t;

    //User input for distance
    h= (double)(0.5*g*t*t);
    cout<<"Enter the distance covered by the fallen object:(meters): "<<h<<endl;

    //End of program
    return 0;
}

