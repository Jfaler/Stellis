/*
Justin Faler
2/3/2017
v 1.0.0.0
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void FillArray(int ar[][9], int size);
void PrintArray(int ar[][9], int size, int &search);
int FindNumber(int ar[][9], int size, int &search);
void ReadAtArray(const int ar[][9], int size, int &search);
void PrintCoordinates(int ar[][9], int size, int &search);


int main()
{
	srand((unsigned)time(0));

	int theOdds[11][9]; 
	int search = 0;
	int row = 0;
	int col = 0;

	cout << "Input a set of coordinates to search" << endl;
	cin >> search;


	FillArray(theOdds, 9);
	FindNumber(theOdds, 9, search);
	ReadAtArray(theOdds, 9, search);

	int count = FindNumber(theOdds, 9, search);

	if (count == 0)
	{
		cout << "No matches found for " << search << "!" << endl;
	}


	PrintCoordinates(theOdds, 9, search);
	PrintArray(theOdds, 9, search);



	return 0;
}
void FillArray(int ar[][9], int size) 
{

	for (int row = 0; row < size; row++) // row
	{
		for (int col = 0; col < 9; col++) // col
		{
			ar[row][col] = rand() % 100;
			if (ar[row][col] % 2 == 0)
			{
				ar[row][col]++;
			}
		}
	}
}
void PrintArray(int ar[][9], int size, int &search)
{
	for (int row = 1; row < size; row++) // row
	{
		for (int col = 1; col < 9; col++) // col
		{
			cout << ar[row][col] << "\t";
		}
		cout << endl;
	}
}
int FindNumber(int ar[][9], int size, int &search) 
{
	int count = 0;

	for (int row = 0; row < size; row++) // row
	{
		for (int col = 0; col < size; col++) // col
		{
			if (ar[row][col] == search)
			{
				count++;
			}
		}
	}
	return count;
}
void ReadAtArray(const int ar[][9], int size, int &search)
{
	int count = 0;
	for (int row = 0; row < size; row++) // row 
	{
		for (int col = 0; col < size; col++) // col
		{
		}
	}
}
void PrintCoordinates(int ar[][9], int size, int &search)
{
	for (int row = 1; row < size; row++) // row
	{
		for (int col = 1; col < size; col++) // col
		{
			if (ar[row][col] == search)
			{
				cout << search << " is at row " << row << " col " << col << endl;
			}

		}
	}
}
