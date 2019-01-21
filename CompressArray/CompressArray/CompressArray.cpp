// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	//—жать (сдвинуть элементы) массив, удалив из него все 0, 
	// и заполнить освободившиес€ справа элементы значени€ми -1
	const short size = 10;

	int ar[size];

	cout << "Vvedite 10 elementov: ";

	for (int i = 0; i < size; i++)
	{
		cin >> ar[i];
	}

	int iz = -1;

	for (int i = 0; i < size; i++)
	{
		if (ar[i] == 0 && iz == -1)
			iz = i;

		if (ar[i] != 0 && iz >= 0)
				ar[iz++] = ar[i];
	}

	for (int i = iz; i < size; i++)
		ar[i] = -1;

	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";

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
