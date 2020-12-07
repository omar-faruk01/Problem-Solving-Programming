//==========================================================
//
// Title:      Inventory Application
// Course:     CSC 1101
// Lab Number: 22
// Author:     Omar Faruk
// Date:       12/07/2020
// Description:
//  Creating a console application to utilize Snow Shepherds
//  inventory by allowing user to find product using search ID and name
//  and also listing the full inventory. Tools used were functions, structs,
//  loops, branching, and utilizing an input file to read data from.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Globals
const int ARRAY_SIZE = 5;
const int COLMFT1 = 20, COLMFT2 = 7;

// Declare product struct
struct product
{
	int product_ID;
	string product_name;
	double wholesale_price;
	double retail_price;
	int product_quanitity;
};

// Menu Option 
int menuOption()
{

	// Declare variables
	int option;

	// Show menu and get option
	cout << endl;
	cout << "Snow Shepherds Menu" << endl;
	cout << "1 - Find product by ID" << endl;
	cout << "2 - Find product by Name" << endl;
	cout << "3 - List Products" << endl;
	cout << "9 - Exit" << endl << endl;
	cout << "Enter an option: ";
	cin >> option;

	// Return dimension
	return option;
}

// Find product by ID, Name functions
int findProductByID(product products[ARRAY_SIZE], int key)
{
	// Declare variables
	int index = 0;

	// Linear search product ID's & Return -1 if found
	while (index < ARRAY_SIZE && products[index].product_ID != key)
	{
		index = index + 1;
	}

	if (products[index].product_ID == key)
		return index;
	else
		return -1;
}

int findProductByName(product products[ARRAY_SIZE], string key)
{
	// Declare variables
	int index = 0;

	// Linear search product ID's & Return -1 if found
	while (index < ARRAY_SIZE && products[index].product_name != key)
	{
		index = index + 1;
	}

	if (products[index].product_name == key)
		return index;
	else
		return -1;
	
}

//Print the product function
void printProduct(product products[ARRAY_SIZE], int index)
{
	cout  << "Product " << products[index].product_ID << endl
	    << setw(COLMFT1) << left << "Product:"
		<< setw(COLMFT2) << right << products[index].product_name << endl
		<< setw(COLMFT1) << left << "Wholesale ($):"
		<< setw(COLMFT2) << right << products[index].wholesale_price << endl
		<< setw(COLMFT1) << left << "Retail ($):"
		<< setw(COLMFT2) << right << products[index].retail_price << endl
		<< setw(COLMFT1) << left << "Inventory:"
		<< setw(COLMFT2) << right << products[index].product_quanitity << endl
		<< endl;
}

int main()
{
  // Declare Constants
  const string FILE_NAME_INPUT = "SnowShepherdsInventory.txt";

  // Declare variables
  ifstream SnowShepherdsInventory_FileInput;
  string line, product_name;
  int option, index, product_id;
  int line_count = 0;

  // Declare 5 element array from struct
  product products[ARRAY_SIZE];

  // Show application header
  cout << "Welcome to Snow Shepherds!" << endl;
  cout << "--------------------------" << endl;

  // Attempt to open input file
  SnowShepherdsInventory_FileInput.open(FILE_NAME_INPUT);
  if (!SnowShepherdsInventory_FileInput.is_open())
	  cout << "Error: unable to open file '" << FILE_NAME_INPUT << "'." << endl << endl;
  else
  {

	  // Reading past header comment
	  getline(SnowShepherdsInventory_FileInput, line);

	  while (SnowShepherdsInventory_FileInput.good())
	  {
		  // Reading tokens from input file
		  SnowShepherdsInventory_FileInput >> products[line_count].product_ID;
		  SnowShepherdsInventory_FileInput >> products[line_count].product_name;
		  SnowShepherdsInventory_FileInput >> products[line_count].wholesale_price;
		  SnowShepherdsInventory_FileInput >> products[line_count].retail_price;
		  SnowShepherdsInventory_FileInput >> products[line_count].product_quanitity;

		  // Line count in input file
		  line_count = line_count + 1;
	  }

	  // Close input file and output line read
	  SnowShepherdsInventory_FileInput.close();
	  cout << endl << line_count << " line(s) read from file '"
		  << FILE_NAME_INPUT << "'." << endl;

	  option = menuOption();
	  while (option != 9)
	  {
		  if (option == 1)
		  {
				cout << "Enter product ID to search for: ";
				cin >> product_id;
				index = findProductByID(products, product_id);
				if (index == -1)
				    cout << "Error: Product ID '" << product_id << "' is not in inventory" << endl;
				else
					printProduct(products, index);
		  }
		  else if (option == 2)
		  {
				cout << "\nEnter product name to search for: ";
				cin >> product_name;
				index = findProductByName(products, product_name);
				if (index == -1)
					cout << "Error: Product name '" << product_name << "' is not in inventory" << endl;
				else
					printProduct(products, index);
		  }
		  else if (option == 3)
		  {

			   cout << setw(COLMFT1) << left << "\nCode"
				    << setw(COLMFT1) << left << "Product"
				    << setw(COLMFT1) << left << "Wholesale ($)"
				    << setw(COLMFT1) << left << "Retail ($)"
				    << setw(COLMFT1) << left << "Inventory" << endl;

				for (int i = 0; i < ARRAY_SIZE; i++)
				{
					  
					 cout << setw(COLMFT1) << left << products[i].product_ID 
						  << setw(COLMFT1) << left << products[i].product_name 
						  << setw(COLMFT1) << left << products[i].wholesale_price 
						  << setw(COLMFT1) << left << products[i].retail_price 
						  << setw(COLMFT1) << left << products[i].product_quanitity
						  << endl;
				}
		  }
		  else
		  {
				cout << "Error: Invalid menu option, of '"<< option << "' try again!" << endl;
		  }

			  // Menu Option
			  option = menuOption();
	  }
  }

  // Show application close
  cout << "\nEnd of Snow Shepherds" << endl;

}
