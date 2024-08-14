#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void main()
{
	srand(time(NULL));

	// 주인공의 체력 설정
	float currentHP = 100;

	// 주인공 레벨 설정
	int currentLevel = 1;

	// 적의 종류 설정
	int enemy = rand() % 3;
	
	// 적의 공격력 설정 (10 ~ 14)
	int enemyDamage = rand() % 5 + 10;

	// 선택지 설정
	int way = 0;

	// 행동 결정 변수
	int randomNum = rand() % 2;



	cout << "현재 레벨은 " << currentLevel << "입니다" << "던전에 입장하시겠습니까?\n";
	
	// 입장 선택
	cout << "[0] : 입장하겠다\n" << "[1] : 포기하겠다\n";
	
	// 선택지 입력
	cin >> way;

	if (way == 0)
	{
		cout << "던전에 입장했습니다\n";
		
		// 적의 종류의 따라 적이 등장
		if (enemy == 0)
		{
			cout << "고블린이 등장했습니다\n";
		}
		else if (enemy == 1)
		{
			cout << "슬라임이 등장했습니다\n";
		}
		else if (enemy == 1)
		{
			cout << "골렘이 등장했습니다\n";
		}
		
		// 선택지로 전투 진행
		cout << "싸우시겠습니까?\n";
		cout << "[0] : 싸우겠다\n" << "[1] : 도망가겠다\n";

		// 전투 선택지 입력
		cin >> way;

		// 싸우겠다를 고를시
		if (way == 0)
		{
			// 랜덤한 숫자를 바탕으로 적이 먼저 공격할지 내가 먼저 공격할지를 설정
			if (randomNum == 0)
			{
				cout << "적이 먼저 공격합니다\n";
				cout << "적의 공격으로 " << enemyDamage << "만큼의 공격을 받았습니다\n";
				currentHP = currentHP - enemyDamage;
				cout << "현재 체력은 " << currentHP << "입니다\n";
				cout << "공격합니다\n";
				cout << "적을 죽였습니다\n";
				currentLevel = currentLevel++;
				cout << "레벨이 올랐습니다" << " 현재 레벨은 " << currentLevel << "입니다";
			}
		
			else
			{
				cout << "선공합니다\n";
				cout << "적을 죽였습니다\n";
				currentLevel = currentLevel++;
				cout << "레벨이 올랐습니다" << "현제 레벨은 " << currentLevel << "입니다";
			}
		}

		// 도망가는 선택지에서도 랜덤한 수에 따라 성공을 가름
		else if (way == 1)
		{
			if (randomNum == 0)
			{
				cout << "도망가셨습니다\n";
			}
			else 
				cout << "도망가지 못해 사망하셨습니다\n";

		}
		// 입력한 숫자가 범위를 벗어났을때 출력
		else
		{
			cout << "잘못된 입력을 하셨습니다";
		}
	}
	else if (way == 1)

	{
		cout << "포기하셨습니다";
	}

	// 입력한 숫자가 범위를 벗어났을때 출력
	else
	{
		cout << "잘못된 입력을 하셨습니다";
	}



}