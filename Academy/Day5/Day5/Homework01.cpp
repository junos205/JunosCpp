#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

enum class NumberBaseBall
{
	Thousands,
	Hundreds,
	Tens,
	Units,
	End,
};

int randomNum[4] = {};
int playerNum[4] = {};
int strike = 0;
int ball = 0;

int FindMatchStrike()
{
	for (int i = 0; i < 3; i++)
	{
		if (randomNum[i] == playerNum[i])
		{
			strike++;
		}
	}
	return strike;
}

int FindMatchBall()
{
	for (int i = 0; i < 4; i++)
	{
		if (playerNum[i] == randomNum[i])
		{
				
		}
		else if (playerNum[i] == randomNum[(int)NumberBaseBall::Units])
		{
			ball++;
		}
		else if (playerNum[i] == randomNum[(int)NumberBaseBall::Hundreds])
		{
			ball++;
		}
		else if (playerNum[i] == randomNum[(int)NumberBaseBall::Tens])
		{
			ball++;
		}
		else if (playerNum[i] == randomNum[(int)NumberBaseBall::Thousands])
		{
			ball++;
		}
	}
	return ball;
}


int RandomNumberGenerator()
{
	srand(time(NULL));

	

	while (randomNum[(int)NumberBaseBall::Units] == randomNum[(int)NumberBaseBall::Tens] || randomNum[(int)NumberBaseBall::Tens] == randomNum[(int)NumberBaseBall::Hundreds] || randomNum[(int)NumberBaseBall::Hundreds] == randomNum[(int)NumberBaseBall::Thousands] || randomNum[(int)NumberBaseBall::Thousands] == randomNum[(int)NumberBaseBall::Tens] || randomNum[(int)NumberBaseBall::Thousands] == randomNum[(int)NumberBaseBall::Units])
	{
		randomNum[(int)NumberBaseBall::Units] = rand() % 9 + 1;
		randomNum[(int)NumberBaseBall::Tens] = rand() % 10;
		randomNum[(int)NumberBaseBall::Hundreds] = rand() % 10;
		randomNum[(int)NumberBaseBall::Thousands] = rand() % 10;
	}

	return randomNum[(int)NumberBaseBall::Units] + randomNum[(int)NumberBaseBall::Tens] * 10 + randomNum[(int)NumberBaseBall::Hundreds] * 100 + randomNum[(int)NumberBaseBall::Thousands] * 1000;
}


void main()
{
	cout << "숫자야구에 오신걸 환영합니다." << endl;

	for (int i = 0; i < 9; i++)
	{
		if (i > 0)
		{
			cout << i << "회 시작합니다" << endl;
		}
		
		int comNum = RandomNumberGenerator();
		cout << "겹치지 않는 3자리의 숫자를 입력해 주세요" << endl;
		
		 
		
		cout << "일의 자리수의 숫자를 입력해 주세요 >> " << endl;
		cin >> playerNum[(int)NumberBaseBall::Units];

		while (9 < playerNum[(int)NumberBaseBall::Units] || playerNum[(int)NumberBaseBall::Units] <= 0)
		{
			cout << "잘못된 입력입니다. 다시 입력해주세요 >> ";
			cin >> playerNum[(int)NumberBaseBall::Units];
		}

		cout << "십의 자리수의 숫자를 입력해 주세요 >> " << endl;
		cin >> playerNum[(int)NumberBaseBall::Tens];

		while (9 < playerNum[(int)NumberBaseBall::Tens] || playerNum[(int)NumberBaseBall::Tens] < 0 || playerNum[(int)NumberBaseBall::Tens] == playerNum[(int)NumberBaseBall::Units])
		{
			cout << "잘못된 입력입니다. 다시 입력해주세요 >> ";
			cin >> playerNum[(int)NumberBaseBall::Tens];
		}

		cout << "백의 자리수의 숫자를 입력해 주세요 >> " << endl;
		cin >> playerNum[(int)NumberBaseBall::Hundreds];

		while (9 < playerNum[(int)NumberBaseBall::Hundreds] || playerNum[(int)NumberBaseBall::Hundreds] < 0 || playerNum[(int)NumberBaseBall::Hundreds] == playerNum[(int)NumberBaseBall::Tens] || playerNum[(int)NumberBaseBall::Hundreds] == playerNum[(int)NumberBaseBall::Units])
		{
			cout << "잘못된 입력입니다. 다시 입력해주세요 >> ";
			cin >> playerNum[(int)NumberBaseBall::Hundreds];
		}

		cout << "천의 자리수의 숫자를 입력해 주세요 >> " << endl;
		cin >> playerNum[(int)NumberBaseBall::Thousands];

		while (9 < playerNum[(int)NumberBaseBall::Thousands] || playerNum[(int)NumberBaseBall::Thousands] < 0 || playerNum[(int)NumberBaseBall::Thousands] == playerNum[(int)NumberBaseBall::Tens] || playerNum[(int)NumberBaseBall::Thousands] == playerNum[(int)NumberBaseBall::Units] || playerNum[(int)NumberBaseBall::Thousands] == playerNum[(int)NumberBaseBall::Hundreds])
		{
			cout << "잘못된 입력입니다. 다시 입력해주세요 >> ";
			cin >> playerNum[(int)NumberBaseBall::Hundreds];
		}

		int playerTotalNum = playerNum[(int)NumberBaseBall::Units] + playerNum[(int)NumberBaseBall::Tens] * 10 + playerNum[(int)NumberBaseBall::Hundreds] * 100 + playerNum[(int)NumberBaseBall::Thousands] * 1000;
		cout << "당신이 입력한 숫자는 " << playerTotalNum << "입니다" << endl;
		cout << "컴퓨터가 만든 숫자는 " << comNum << "입니다" << endl;
	
		int yourBall = FindMatchBall();
		int yourStrike = FindMatchStrike();

		cout << "스트라이크 : " << yourStrike << ", 볼 : " << yourBall << endl;

		if (playerTotalNum == comNum)
		{
			cout << "당신의 승리입니다";
		}

		cout << i << "회 ";
		if (yourStrike > 1)
		{
			cout << "승리입니다\n" << endl;
		}
		else
		{
			cout << "패배입니다\n"<< endl;
		}

		


			

		
	}
}