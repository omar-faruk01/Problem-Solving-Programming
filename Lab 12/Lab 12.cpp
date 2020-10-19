//==========================================================
//
// Title:      Yogurt Shop Sales Calculator
// Course:     CSC 1101
// Lab Number: Lab 12
// Author:     Omar Faruk
// Date:       10/18/2020
// Description:
//   Using validation loop for two inputs and calculations
// to create an yougurt sales calculator, then using a nested
// loop to take more than 1 sale and creating a final formatted
// total of all nested loop entries.
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


  // Declare constants
  const int COLMFT1 = 30;
  const int COLMFT2 = 5;
  const double YOGURT_PRICE = 3.50;
  const double SALES_TAX = .06;

  // Declare variables
  int yogurt_quantity;
  double discount_percentage;
  double yogurt_subtotal;
  double yogurt_discRate;
  double yogurt_discTotal;
  double tax;
  double yogurt_total;
  string option;

  cout << fixed << setprecision(2);

  // Show application header
  cout << "Welcome to Yogurt Yummies! v2" << endl;
  cout << "------------------------------" << endl << endl;

  // Write to screen
  cout << "Enter another yogurt purchase (y/n)? ";
  cin >> option;


  //Nested Loop

  while (option != "n")
  {

	  // Declaring variables
	  int sales = 1;
	  int numYogurt = 0;
	  double numDiscTotal = 0;
	  double numTotal = 0;
	  double numTax = 0;


	  while (option == "y")
	  {
		  cout << "\nSale " << sales++ << endl;
		  cout << "-----------------------------------------" << endl;

		  // Yogurt Quantity Validation Loop w/Input
		  cout << "\nEnter the number of yogurts purchased (1-9): ";
		  cin >> yogurt_quantity;
		  while (yogurt_quantity < 1 || yogurt_quantity > 9)
		  {
			  cout << "Error: " << yogurt_quantity << " is an invalid number of yogurts." << endl;
			  cout << "\nEnter the number of yogurts purchased (1-9): ";
			  cin >> yogurt_quantity;
			  cout << endl;
		  }


		  // Discount Code Validation Loop w/Input
		  cout << "Enter the percentage discount (0-20) : ";
		  cin >> discount_percentage;
		  while (discount_percentage < 0 || discount_percentage > 20)
		  {
			  cout << "Error: " << discount_percentage << "% is an invalid percentage discount" << endl;
			  cout << "\nEnter the percentage discount (0-20) : ";
			  cin >> discount_percentage;
			  cout << endl;
		  }

		  // Calculation
		  yogurt_subtotal = (YOGURT_PRICE * yogurt_quantity);
		  yogurt_discRate = (discount_percentage / 100);
		  yogurt_discTotal = (yogurt_subtotal - (yogurt_subtotal * yogurt_discRate));
		  tax = (yogurt_discTotal * SALES_TAX);
		  yogurt_total = (yogurt_discTotal + tax);


		  // Formatted output for calculations
		  cout << setw(COLMFT1) << left << "\nYogurts:"
			  << setw(COLMFT2) << right << yogurt_quantity << endl;
		  cout << setw(COLMFT1) << left << "Yogurt cost ($): "
			  << setw(COLMFT2) << right << YOGURT_PRICE << endl;
		  cout << setw(COLMFT1) << left << "Discount (%): "
			  << setw(COLMFT2) << right << discount_percentage << endl;
		  cout << setw(COLMFT1) << left << "Subtotal ($)"
			  << setw(COLMFT2) << right << yogurt_subtotal << endl;
		  cout << setw(COLMFT1) << left << "Total after discount ($)"
			  << setw(COLMFT2) << right << yogurt_discTotal << endl;
		  cout << setw(COLMFT1) << left << "Tax ($)"
			  << setw(COLMFT2) << right << tax << endl;
		  cout << setw(COLMFT1) << left << "Total ($)"
			  << setw(COLMFT2) << right << yogurt_total << endl;

		  //Adding input together for each nested loop
		  numYogurt = numYogurt + yogurt_quantity;
		  numDiscTotal = numDiscTotal + yogurt_discTotal;
		  numTax = numTax + tax;
		  numTotal = numTotal + yogurt_total;

		  cout << "\nEnter another yogurt purchase (y/n)? ";
		  cin >> option;
		

	  }

	  //Overall Totals Output

	  cout << setw(COLMFT1)<< left << "\nOverall totals" << endl;
	  cout << "======================================" << endl;
	  cout << setw(COLMFT1) << left << "Sales:"
		  << setw(COLMFT2) << right << sales - 1 << endl;
	  cout << setw(COLMFT1) << left << "Yogurts:"
		  << setw(COLMFT2) << right << numYogurt << endl;
	  cout << setw(COLMFT1) << left << "Total after discount ($):"
		  << setw(COLMFT2) << right << numDiscTotal << endl;
	  cout << setw(COLMFT1) << left << "Tax ($):"
		  << setw(COLMFT2) << right << numTax << endl;
	  cout << setw(COLMFT1) << left << "Total ($):"
		  << setw(COLMFT2) << right << numTotal << endl;

  }


  // Show application close
  cout << "\nEnd of Yogurt Yummies v2" << endl;

}
