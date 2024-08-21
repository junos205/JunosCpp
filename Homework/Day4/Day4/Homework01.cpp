#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));

	// 랜덤한 숫자 2개 설정
	int randomNum[2] = {};
	
	// 로또 번호 46개 설정 (이상해서 45로하면 버그가 남) 
	int rotteryNum[46] = {};
	//rotteryNum[0] ~ rotteryNum[5]
	//rotteryNum[6]

	// 로또 번호 출력
	printf("당신의 로또번호는");
	

	// 0 ~ 44의 배열에 순차적으로 숫자 대입
	for (int k = 0; k < 45; k++)
	{
		// 이전 숫자에 1씩 더해서 만들어 지기에 1씩커짐
		rotteryNum[k+1] = (int)rotteryNum[k] + 1;
		// 첫번째 숫자는 0이니 1씩 더해 줘야함
		rotteryNum[k] = (int)rotteryNum[k] + 1;
	}

	// 1부터 45 중 랜덤한 숫자를  2개 설정하고 그 숫자번호에 있는 수들은 서로 섞기 
	for (int i = 0; i < 10000; i++)
	{
		randomNum[0] = rand() % 45 + 1;

		randomNum[1] = rand() % 45 + 1;
		int temp = rotteryNum[randomNum[0]];
		rotteryNum[randomNum[0]] = rotteryNum[randomNum[1]];
		rotteryNum[randomNum[1]] = temp;
	}

	// 10000번 정도 섞이면 0부터 6까지 그대로 출력해도 제대로 섞여있을거기 때문에 그대로 출력
	for (int j = 0; j < 7; j++)
	{

		printf(" %d", rotteryNum[j]);
		if (j <= 5)
		{
			printf(",");
		}
	}
	printf("입니다");
		

}
