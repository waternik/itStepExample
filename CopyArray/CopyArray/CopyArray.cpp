// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
int getNumber()
{
	int randNum = 1 + rand() % 50;
	if (randNum % 4 == 0)
		return 0;
	return randNum * (rand() % 2 == 0 ? 1 : -1);
};

int main()
{
	const int size = 5;

	srand(time(NULL));
	
	int arr1[size];
	int arr2[size];
	int arr3[size*2] = {};

	int s = 0;
	int e = 2 * size - 1;

	for (int i = 0; i < size; i++)
	{
		arr1[i] = getNumber();
		arr2[i] = getNumber();
	}

	for (int i = 0; i < size; i++)
	{
		if (arr1[i] > 0)
			arr3[s++] = arr1[i];
		if (arr2[i] > 0)
			arr3[s++] = arr2[i];
		if (arr1[i] < 0)
			arr3[e--] = arr1[i];
		if (arr2[i] < 0)
			arr3[e--] = arr2[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout<<arr1[i]<<'\t'<< arr2[i]<<"\r\n";
	}
	cout << "Result!---------------\r\n\r\n";

	for (int i = 0; i < size*2; i++)
	{
		cout << arr3[i] << ' ';
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
