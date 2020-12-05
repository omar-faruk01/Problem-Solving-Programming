//==========================================================
//
// Title:      Matrix to Matrices!
// Course:     CSC 1101
// Lab Number: 21
// Author:     Omar Faruk
// Date:       12/1/2020
// Description:
//   Creating an application taking two fixed Matrices and
// creating a 3rd matrix if columns in matrix 1 is identical to 
// columns in matrix 2 by multiplying the two matrices.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare Constants
const int COLFMT1 = 6;
const int ROW_SIZE = 3, ROW_SIZE2 = 2;
const int COL_SIZE = 2, COL_SIZE2 = 3;

// Print 2D Array Functions for different sizes
void print2DArray1(string heading,
	int arr[ROW_SIZE][COL_SIZE])
{

	// Loop to print array numbers
	cout << "\n" + heading << endl;
	cout << endl;
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COL_SIZE; j++)
			cout << setw(COLFMT1) << right << arr[i][j];
		cout << endl;
	}
}

void print2DArray2(string heading,
	int arr[ROW_SIZE2][COL_SIZE2])
{

	// Loop to print array numbers
	cout << "\n" + heading << endl;
	cout << endl;
	for (int i = 0; i < ROW_SIZE2; i++)
	{
		for (int j = 0; j < COL_SIZE2; j++)
			cout << setw(COLFMT1) << right << arr[i][j];
		cout << endl;
	}
}

void print2DArray3(string heading,
	int arr[ROW_SIZE2][COL_SIZE])
{

	// Loop to print array numbers
	cout << "\n" + heading << endl;
	cout << endl;
	for (int i = 0; i < ROW_SIZE2; i++)
	{
		for (int j = 0; j < COL_SIZE; j++)
			cout << setw(COLFMT1) << right << arr[i][j];
		cout << endl;
	}
}
int main()
{

	// Declare constant
	const int M = 2, N = 3, P = 3, Q = 2;


	// Show application header
	cout << "Welcome to Matrix to Matrices!" << endl;
	cout << "--------------------------------" << endl << endl;

	// Define Two Matrices
	int arrMatrix1[M][N] =
	{
		{3, 4, 5},
		{7, 8, 10}
	};
	int arrMatrix2[P][Q] =
	{
		{7, 8},
		{2, 3},
		{11, 12}
	};
	int arrMatrix3[2][2] =
	{
		{0, 0},
		{0, 0},
	};

  // Multiply Matrices if matrix 1 and 2 value are same
  if ( N != P)
  {
	  cout << "\nNo columns and rows in corresponding matrix are the same" << endl;
  }
  else
  {
	  for (int i = 0; i < M; i++)
	  {
		  for (int j = 0; j < Q; j++)
		  {
			  for (int k = 0; k < P; k++)
			  {
				  arrMatrix3[i][j] = arrMatrix3[i][j] + (arrMatrix1[i][k] * arrMatrix2[k][j]);
			  }
		  }
	  }
  }

  // Print Matrix Arrays
  print2DArray2("The First Matrix (size: 2X3):", arrMatrix1);
  print2DArray1("The Second Matrix (size: 3X2):", arrMatrix2);
  print2DArray3("The Product of two matrices is :", arrMatrix3);

 
  // Show application close
  cout << "\nEnd of Matrix to Matrices!" << endl;

}
