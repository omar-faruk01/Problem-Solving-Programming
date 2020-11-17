//==========================================================
//
// Title:      Best Bargains Sales
// Course:     CSC 1101
// Lab Number: 17
// Author:     Omar Faruk
// Date:       11/15/2020
// Description:
//   Creating a sales application for Best Bargains to take sales
// and calculate price, profit, and cost using functions,
// swtch statements, and validation and sentinel loops.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Global
const int COLMFT1 = 45, COLMFT2 = 25;
const float state_tax = .06;

// Function: product name
string productString(char c)
{
	string product_name;
	switch (c)
	{
		case 'b':
			product_name = "Bluetooth speakers";
			break;
		case 'd':
			product_name = "Dishwasher";
			break;
		case 'f':
			product_name = "File cabinet";
			break;
		case 'h':
			product_name = "Headphones";
			break;
		case 'm':
			product_name = "Microwave";
			break;
		case 'o':
			product_name = "Office chair";
			break;
		default:
			product_name = "Unknown product code";
	}
	return product_name;
}

// Function: product category
string categoryString(char c)
{
	string product_category;
	switch (c)
	{
		case 'b':
			product_category = "Audio";
			break;
		case 'd':
			product_category = "Appliances";
			break;
		case 'f':
			product_category = "Furniture";
			break;
		case 'h':
			product_category = "Audio";
			break;
		case 'm':
			product_category = "Appliances";
			break;
		case 'o':
			product_category = "Furniture";
			break;
		default:
			product_category = "Unknown product category";
	}
	return product_category;
}

int main()
{

  // Declare variables
  char process_sale, product_code;
  string product_name, product_category;
  float wholesale_price, retail_price, product_profit, sales_tax, total_cost;
  
  // Show application header
  cout << "Welcome to Best Bargains!" << endl;
  cout << "--------------------------" << endl << endl;

  // Format real numbers to 2 decimal places
  cout << setprecision(2) << fixed;

  // Initialize sale ID
  int sale_id = 0;

  // Sentinel loop, n for no sale & y for processing new sale
  cout << "Get a sale (y or n)? ";
  cin >> process_sale;
  while (process_sale != 'n')
  {
	  while (process_sale == 'y')
	  {
		  // Sale ID
		  sale_id++;

		  // Product code menu
		  cout << "\nEnter a product code:" << endl
			   << "b - Bluetooth speakers" << endl
			   << "d - Dishwasher" << endl
			   << "f - File cabinet" << endl
			   << "h - Headphones" << endl
			   << "m - Microwave" << endl
			   << "o - Office chair : ";
		  cin >> product_code;

		  // Convert product code to corresponding name productString func
		  product_name = productString(product_code);
		  // Convert product code to corresponding category categoryString func
		  product_category = categoryString(product_code);

		  // Validation loop for wholesale price >= 0
		  cout << "\nEnter the wholesale price ($0 or more): ";
		  cin >> wholesale_price;
		  while (wholesale_price < 0)
		  {
		 	 cout << "Error: wholesale price must be atleast $0." << endl
				  << "\nEnter the wholesale price ($0 or more): ";			
			 cin >> wholesale_price;
		  }

		  // Validation loop for retail price >= wholesale price
		  cout << "\nEnter the retail price ($" << wholesale_price <<" or more): ";
		  cin >> retail_price;
		  while (retail_price < wholesale_price)
		  {
			  cout << "Error: retail price must be atleast $" << wholesale_price << "." << endl
				  << "\nEnter the retail price ($" << wholesale_price << " or more): ";
			  cin >> retail_price;
		  }

		  // Calculations
		  product_profit = retail_price - wholesale_price;
		  sales_tax = retail_price * state_tax;
		  total_cost = retail_price + sales_tax;

		  // Screen output
		  cout << setw(COLMFT1) << left << "\nSale:"
			  << setw(COLMFT2) << right << sale_id << endl
			  << setw(COLMFT1) << left << "Product:"
			  << setw(COLMFT2) << right << product_name << endl
			  << setw(COLMFT1) << left << "Category:"
			  << setw(COLMFT2) << right << product_category << endl
			  << setw(COLMFT1) << left << "Wholesale price ($):"
			  << setw(COLMFT2) << right << wholesale_price << endl
			  << setw(COLMFT1) << left << "Retail price ($):"
			  << setw(COLMFT2) << right << retail_price << endl
			  << setw(COLMFT1) << left << "Profit ($):"
			  << setw(COLMFT2) << right << product_profit << endl
			  << setw(COLMFT1) << left << "Sales tax (6%):"
			  << setw(COLMFT2) << right << sales_tax << endl
			  << setw(COLMFT1) << left << "Total cost ($):"
			  << setw(COLMFT2) << right << total_cost << endl;

		  //Prompt for another sale
		  cout << "\nGet another sale (y or n)? ";
		  cin >> process_sale;
	  }

  }

  // Show application close
  cout << "\nEnd of Best Bargains" << endl;

  return 0;
}
