//==========================================================
//
// Title:      Sales Calculator
// Course:     CSC 1101
// Lab Number: Lab08-02
// Author:     Omar Faruk
// Date:       10/05/2020
// Description:
//   Creating a Sales calculator with discount factored in.
// Used if and else statements, formatted table, and and calculations.
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

	//Format Real Numbers
	cout << fixed << setprecision(2);

  //Declare Constants
	const int COLMFT1 = 40;
	const int COLMFT2 = 15;
	const double CLIPBOARDS = 8.00;
	const double PRINTER_PAPER = 15.00;
	const double SCISSORS = 10.75;
	const double STAPLER = 11.25;
	const double WRITING_PADS = 12.50;
	const int DISCOUNT_MIN = 50;
	const double DISCOUNT_RATE = .1;
	const string clip_board = "Clipboards";
	const string printer_paper = "Printer paper";
	const string stapler = "Stapler";
	const string writing_pads = "Writing pads";
	const string scissors = "Scissors";


  // Declare variables
	char code;
	int quantity;
	double product_cost;
	double subtotal;
	double discount;
	double total;
	string product_name;
	

  // Show application header
	cout << "Welcome to Office Oaks!" << endl;
	cout << "--------------------------" << endl << endl;

  // Write to screen

	cout << setw(COLMFT1) << left << "Enter quantity purchased in range 2 and 20: ";
	cin >> quantity;

	if (quantity < 2 || quantity > 20)
		cout << "Error: quantity purchased must be in range 2 and 20." << endl;
	else 
	{

		// Product code IO
		cout << "\nEnter the product code" << endl;
		cout << " c-Clipboards," << endl;
		cout << " p-Printer paper," << endl;
		cout << " r-Scissors," << endl;
		cout << " s-Stapler," << endl;
		cout << " w-Writing pad," << endl;
		cin >> code;

		if (code == 'c')
			product_name = clip_board;
		else if (code == 'p')
			product_name = printer_paper;
		else if (code == 'r')
			product_name = scissors;
		else if (code == 's')
			product_name = stapler;
		else if (code == 'w')
			product_name = writing_pads;
		else
		{
			(product_name = writing_pads);
		}

		cout << setw(COLMFT1) << left << "\nProduct Code: ";
		cout << setw(COLMFT2) << right << code << endl;
		cout << setw(COLMFT1) << left << "Product name: ";
		cout << setw(COLMFT2) << right << product_name << endl;

		if (code == 'c')
			product_cost = CLIPBOARDS;
		else if (code == 'p')
			product_cost = PRINTER_PAPER;
		else if (code == 'r')
			product_cost = SCISSORS;
		else if (code == 's')
			product_cost = STAPLER;
		else if (code == 'w')
			product_cost = WRITING_PADS;
		else
		{
			(product_cost = WRITING_PADS);
		}
		

		//Product cost & quantity Output
		cout << setw(COLMFT1) << left << "Product cost ($): ";
		cout << setw(COLMFT2) << right << product_cost << endl;
		cout << setw(COLMFT1) << left << "Quantity: ";
		cout << setw(COLMFT2) << right << quantity << endl;

		//Calculation
		subtotal = (quantity * product_cost);

		if (subtotal > DISCOUNT_MIN)
			discount = (subtotal * DISCOUNT_RATE);
		else (discount = 0);
			
		total = (subtotal - discount);

		//Product total Output
		cout << setw(COLMFT1) << left << "Subtotal ($): ";
		cout << setw(COLMFT2) << right << subtotal << endl;
		cout << setw(COLMFT1) << left << "Discount ($): ";
		cout << setw(COLMFT2) << right << discount << endl;
		cout << setw(COLMFT1) << left << "Total ($): ";
		cout << setw(COLMFT2) << right << total << endl;


	}
	



  // Show application close
	cout << "\nEnd of Office Oaks" << endl;

}
