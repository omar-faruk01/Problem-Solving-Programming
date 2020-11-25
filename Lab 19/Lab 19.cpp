//==========================================================
//
// Title:      My Friends
// Course:     CSC 1101
// Lab Number: 19
// Author:     Omar Faruk
// Date:       11/22/2020
// Description:
//   Creating an application to list and search for friends
// using functions, arrays, if statements, and loops.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Menu function
int menuOption()
{
	// Declare variables
	int menuOption;

	// Show menu and get option
	cout << endl
		<< "\nFriendly Fools Menu" << endl
		<< "1 - List friends" << endl
		<< "2 - Search friends" << endl
		<< "9 - Exit" << endl << endl
		<< "Enter an option: ";
	cin >> menuOption;

	return menuOption;
}

// List of friends function
void listFriends(string array[], int arraySize)
{
	// Declare varables
	int friends_count = 0;

	// Output friend list and count
	cout << endl
		<< "Friend list" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << endl;
		friends_count++;
	}
	cout << endl << "Friend count: " << friends_count;
}

// Searching of friends function
int searchFriends(string array[], int arraySize, string key)
{
	// Declare variables
	int index = 0;

	// Loop to find index
	while (index < arraySize && array[index] != key)
	{
		index = index + 1;
	}

	// Return index
	if (index == arraySize)
		return -1;
	else
		return index;
}

int main()
{

  // Declare constants
  const int ARRAYSIZE = 5;

  // Declare varaibles
  int friend_index = 0;
  int menu_option;
  string friend_key;

  // Declare friends in array
  string friendsArray[ARRAYSIZE] = { "Tariq", "Khan", "Malik", "Andrea", "Alicia" };

  // Show application header
  cout << "Welcome to Friendly Fools!" << endl;
  cout << "--------------------------";

  // Menu option
  menu_option = menuOption();
  while (menu_option != 9)
  {
	  // Listing all of friends in array - 1
	  if (menu_option == 1)
	  {
		  listFriends(friendsArray, ARRAYSIZE);
	  }
	  // Searching of friends from list - 2
	  else if (menu_option == 2)
	  {
		  cout << "\nEnter a friend to search for: ";
		  cin >> friend_key;
		  friend_index = searchFriends(friendsArray, ARRAYSIZE, friend_key);
		  
		  if (friend_index > -1 && friend_index < ARRAYSIZE)
		  {
			  cout << "'" << friend_key << "' found at index " << friend_index;
		  }
		  else
		  {
			  cout << "'" << friend_key << "' NOT found";
		  }
	  }
	  // Unknown option
	  else
	  {
		  cout << "Invalid option of '" << menu_option << "'."
			  << endl;
	  }

	  // Get next option
	  menu_option = menuOption();
  }

  // Show application close
  cout << "\nEnd of Friendly Fools" << endl;

}
