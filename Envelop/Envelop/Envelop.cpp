// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a;
	cout << "Input zize:";
	cin >> a;
	cout << "\r\n";
	int b = a - 1;

	for (int i = 0; i < a; i++)
	{		
		for (int j = 0; j < a; j++)
		{
			char x = ' ';

			if (i == 0)
			{
				x = j == 0 ? (char)201
					:( j == b ? (char)187 : (char)205);
				cout << x;
				continue;
			}
			if (i == b)
			{
				x = j == 0 ? (char)200
					: (j == b ? (char)188 : (char)205);
				cout << x;
				continue;
			}

			if (j == 0 || j == b)
				x = (char)186;

			if (i == j && i <= b/2)
				x = '\\';
			if (b == i+j && i <= b / 2)
				x = '/';
			if (b-i == j && i == j)
				x = 'V';

			cout << x;
		}
		cout << "\r\n";
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
