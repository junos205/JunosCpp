#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{ 
			cout << "+";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > 0; j--)
		{
			if (j - i-1 > 0) 
			{
				cout << " ";
			}
			else
			{
				cout << "+";
			}

		}
		cout << endl;
	}
	cout << endl;

	

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > 0; j--)
		{
			if (i >= j)
			{
				cout << " ";
			}


			if (j > i)
			{
				cout << "+";
			}



		}
		cout << endl;
	}
	cout << endl;

	for (int i = 5; i >  0; i--)
	{
		for (int j = 4; j >= 0; j--)
		{
			if (j >= i)
			{
				cout << " ";
			}
			else
			{
				cout << "+";
			}

		}
		cout << endl;
	}
	cout << endl;

	// 2 ~ 5, 3 ~ 5 & 10 , 4 ~ 5 & 8 ~ 9
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i < j && j < 5 || j > 9 - i)
			{
				cout << " ";
			}
			else 
			{
				cout << "+";
			}
			
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j < 4 - i || 5 <= j && j < 5+i)
			{
				cout << " ";
			}
			else
			{
				cout << "+";
			}

		}
		cout << endl;
	}
}
