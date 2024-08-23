#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define DEBUG

using namespace std;


void main()
{
	srand(time(NULL));

	int bingo[5][5] = { {}, {} };

	int bingoNum[25] = {};

	int numStack = 1;

	for (int i = 0; i < 25; i++)
	{
		bingoNum[i] = i + 1;
		bingo[i / 5][i % 5] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		int column1 = 0;
		int column2 = 0;

		int row1 = 0;
		int row2 = 0;

		int temp = 0;


#ifdef DEBUG



		while (bingo[column1][row1] == bingo[column2][row2])
		{
			column1, column2 = rand() % 5;
			row1, row2 = rand() % 5;
		}

		for (int i = 0; i < 10000; i++)
		{
			temp = bingo[column2][row2];
			bingo[column2][row2] = bingo[column1][row1];
			bingo[column1][row1] = temp;
		}


#endif // DEBUG
		


	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << bingo[i][j] << "\t";
		}
		cout << endl;
	}

		
	
}