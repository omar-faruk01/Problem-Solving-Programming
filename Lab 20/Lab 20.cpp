//==========================================================
//
// Title:      Amazon Product ID Locator
// Course:     CSC 1101
// Lab Number: 20
// Author:     Omar Faruk
// Date:       11/24/2020
// Description:
//   Creating an app to locate product ID index
// from a list of predefinied product IDs using
// arrays, functions, and loops.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Gloabals
const int COLMFT1 = 20;
const int COLMFT2 = 15;

int binary_search(int sort_arr[], int size_array, int search_value)
{
    // Declare variables
    int min = 0;
    int index;
    int max = size_array - 1;

    // Loop to find key
    while (min <= max)
    {

        // Get midpoint of array
        index = (min + max) / 2;

        // Test if key found
        if (sort_arr[index] == search_value)  // Guess is right on
            return index;
        else if (sort_arr[index] < search_value)  // Guess too low
            min = index + 1;
        else
            max = index - 1;
    }

    return -1;
} 
void printArray(string heading, int arr[], int arrSize)
{

    // Loop to print array numbers
    cout << "\n" + heading << endl;
    cout << "Array size: " << arrSize << endl;
    cout << setw(COLMFT1) << left << "Index"
        << setw(COLMFT2) << left << "Value" << endl;
    for (int i = 0; i < arrSize; i++)
        cout << setw(COLMFT1) << left << i
        << setw(COLMFT1) << left << arr[i] << endl;

}
int main()
{
  // Declare constants
  const int ARRAYSIZE = 7;

  // Declare variables
  int ID_index = 0;
  int user_input;
  
  // Declare array
  int UniqueID_Array[ARRAYSIZE] = { 5, 12, 23, 27, 31, 52, 90 };

  // Show application header
  cout << "Welcome to Amazon Product ID Locator!" << endl;
  cout << "--------------------------" << endl << endl;

  printArray("Print the ID of each amazon product: ", UniqueID_Array, ARRAYSIZE);

  cout << "\nEnter a product ID to search in the array: (-999 to exit)" << endl;
  cin >> user_input;
  while (user_input != -999)
  {     

      ID_index = binary_search(UniqueID_Array, ARRAYSIZE, user_input);
      if (ID_index == -1)
      {
          cout << "\nValue does not exist in the Uique ID list";
      }
      else
      {
           printArray("Search number 1: ", UniqueID_Array, ARRAYSIZE);
           cout << endl << user_input << " is found in position: " << ID_index << " of this sorted list";
      }

      cout << endl << "\nEnter a product ID to search in the array: (-999 to exit)" << endl;
      cin >> user_input;
  }


  // Show application close
  cout << "\nEnd of Amazon Product ID Locator" << endl;

}
