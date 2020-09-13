//==========================================================
//
// Title:      <Lab 01>
// Course:     CSC 1101
// Lab Number: <Lab 01>
// Author:     <Omar Faruk>
// Date:       <09/08/2020>
// Description:
//   In this lab, we are adding the header, correcting syntax error, 
// editing code, and adding the body comments to the code.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//Creating function

int main()                                        
{
    //Declare Distance variables
    string name;
    int distance1=40; 
    int distance2=30; 
    int distance3=15; 
    
 
    //Calculating total distance
    int total_distance= distance1+distance2+distance3; 
    

    //Calculating Average
    double average;
    average= total_distance/3;
    cout << "Average distance travelled (in miles)" << average << endl;
    cout << "Total distance travelled (in miles)" << total_distance << endl;
    
    //Input
    cout<< "Enter driver's name :";
    cin >> name;
    

    return 0;
}
