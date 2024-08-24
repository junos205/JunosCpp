#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define DEBUG

using namespace std;



int comBingo[5][5] = { {}, {} };
int playerBingo[5][5] = { {}, {} };

int bingoNum[25] = {};

int numStack = 1;
int playerChoice = 0;
int comChoice = 0;

bool PlayerAlreadyUsed(int a)
{
	int alreadyUse = 0;

	if (0 < a < 26)
	{
		alreadyUse = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (comBingo[i][j] == a)
				{
					
					
				}
				else 
				{
					alreadyUse++;
				}
			}
		}
	}

	if (alreadyUse > 24)
	{
		return true;
	}
	else
	{
		return false;
	}


}

bool ComputerAlreadyUsed(int a)
{
	int alreadyUse = 0;



	if (0 < a < 26)
	{
		alreadyUse = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (playerBingo[i][j] == a)
				{

				}
				else
				{
					alreadyUse++;
				}
			}
		}
	}
	
	if (alreadyUse > 24)
	{
		return true;
	}
	else
	{
		return false;
	}


}

void MyBingo()
{
	cout << "당신의 빙고입니다" << endl << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (playerBingo[i][j] > 0)
			{
				cout << playerBingo[i][j] << "\t";
			}
			else
			{
				cout << "X" << "\t";
			}
		}
		cout << endl;
	}

}

void BingoMaking()
{
	for (int i = 0; i < 25; i++)
	{
		bingoNum[i] = i + 1;
		comBingo[i / 5][i % 5] = i + 1;
		playerBingo[i / 5][i % 5] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		int randColumn1 = 0;
		int randColumn2 = 0;

		int randRow1 = 0;
		int randRow2 = 0;

		int temp = 0;

		for (int i = 0; i < 10000; i++)
		{
			randColumn1, randColumn2 = rand() % 5;
			randRow1, randRow2 = rand() % 5;

			temp = comBingo[randColumn2][randRow2];
			comBingo[randColumn2][randRow2] = comBingo[randColumn1][randRow1];
			comBingo[randColumn1][randRow1] = temp;
		}

		for (int i = 0; i < 10000; i++)
		{
			randColumn1, randColumn2 = rand() % 5;
			randRow1, randRow2 = rand() % 5;

			temp = playerBingo[randColumn2][randRow2];
			playerBingo[randColumn2][randRow2] = playerBingo[randColumn1][randRow1];
			playerBingo[randColumn1][randRow1] = temp;
		}
	}
}

int ComputerBingoDetect()
{
	int rowBingo = 0;
	int columnBingo = 0;
	int digonalBingo = 0;
	int Bingo = 0;
	int deDigonalBingo = 0;

	digonalBingo = 0;
	deDigonalBingo = 0;

	for (int i = 0; i < 5; i++)
	{
		rowBingo = 0;
		columnBingo = 0;


		for (int j = 0; j < 5; j++)
		{

			if (playerBingo[j][i] == 0)
			{
				rowBingo++;

				//cout << endl << i + 1 << "번째 " << j + 1 <<"줄 " << rowBingo << endl;

				if (rowBingo > 4)
				{
					Bingo++;
				}


			}

			if (playerBingo[i][j] == 0)
			{
				columnBingo++;

				//cout << endl << i + 1 << "번째 " << j + 1 << "줄 " << rowBingo << endl;

				if (columnBingo > 4)
				{
					Bingo++;
				}
			}

		}

		if (playerBingo[i][i] == 0)
		{
			digonalBingo++;
			if (digonalBingo > 4)
			{
				Bingo++;
			}

		}
		

		if (playerBingo[4-i][i] == 0)
		{
			deDigonalBingo++;
			if (deDigonalBingo > 4)
			{
				Bingo++;
			}

		}

	}
		return Bingo;
}

int PlayerBingoDetect()
{
	int rowBingo = 0;
	int columnBingo = 0;
	int digonalBingo = 0;
	int Bingo = 0;
	int deDigonalBingo = 0;

	digonalBingo = 0;
	deDigonalBingo = 0;

	for (int i = 0; i < 5; i++)
	{
		rowBingo = 0;
		columnBingo = 0;


		for (int j = 0; j < 5; j++)
		{

			if (comBingo[j][i] == 0)
			{
				rowBingo++;

				//cout << endl << i + 1 << "번째 " << j + 1 <<"줄 " << rowBingo << endl;

				if (rowBingo > 4)
				{
					Bingo++;
				}


			}

			if (comBingo[i][j] == 0)
			{
				columnBingo++;

				//cout << endl << i + 1 << "번째 " << j + 1 << "줄 " << rowBingo << endl;

				if (columnBingo > 4)
				{
					Bingo++;
				}
			}

		}

		if (comBingo[i][i] == 0)
		{
			digonalBingo++;
			if (digonalBingo > 4)
			{
				Bingo++;
			}

		}

		if (comBingo[4 - i][i] == 0)
		{
			deDigonalBingo++;
			if (deDigonalBingo > 4)
			{
				Bingo++;
			}

		}

	}

	return Bingo;
}

void ComBingo()
{
	cout << "컴퓨터의 빙고입니다" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (comBingo[i][j] > 0)
			{
				cout << comBingo[i][j] << "\t";
			}
			else
			{
				cout << "X" << "\t";
			}
		}
		cout << endl;
	}

}

void NumberMatch()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (playerBingo[i][j] == comChoice)
			{
				playerBingo[i][j] = 0;
			}

		}

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (comBingo[i][j] == playerChoice)
			{
				comBingo[i][j] = 0;
			}

		}

	}
}


int main()
{
	srand(time(NULL));

	BingoMaking();


	while (true)
	{
		cout << endl <<"빙고게임 시작합니다. 1 ~ 25 사이의 숫자를 골라주세요" << endl<< endl;
		cin >> playerChoice;

		while (0 >= playerChoice || playerChoice > 25 || PlayerAlreadyUsed(playerChoice))
		{
			cout << "잘못된 입력입니다, 다시 입력해주세요" << endl;
			cin >> playerChoice;
		}

		cout << endl << "컴퓨터가 고를 차례 입니다" << endl << endl;

		comChoice = rand() % 25 + 1;

		while (0 >= comChoice || comChoice > 25 || ComputerAlreadyUsed(comChoice))
		{
			
			comChoice = rand() % 25 + 1;
			
		}
		cout << comChoice << endl << endl;

		NumberMatch();

		cout << "컴퓨터가 맞춘 빙고입니다 >> " << ComputerBingoDetect() << endl << endl;

		cout << "당신이 맞춘 빙고입니다 >> " << PlayerBingoDetect() << endl << endl;

		if (PlayerBingoDetect() > 2 && PlayerBingoDetect() > ComputerBingoDetect())
		{
			cout << "당신의 승리입니다" << endl;
			return 0;
		}
		else if (ComputerBingoDetect() > 2)
		{
			cout << "컴퓨터의 승리입니다" << endl;
			return 0;
		}

#ifdef DEBUG

		MyBingo();

		cout << endl;

		ComBingo();

#endif // DEBUG

	}
}