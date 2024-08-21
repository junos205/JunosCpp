#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));

	int randomNum[2] = {};
	
	int rotteryNum[46] = {};
	//rotteryNum[0] ~ rotteryNum[5]
	//rotteryNum[6]
	printf("당신의 로또번호는");
	


	for (int k = 0; k < 45; k++)
	{
		rotteryNum[k+1] = (int)rotteryNum[k] + 1;
		rotteryNum[k] = (int)rotteryNum[k] + 1;
	}

	for (int i = 0; i < 10000; i++)
	{
		randomNum[0] = rand() % 45 + 1;

		randomNum[1] = rand() % 45 + 1;
		int temp = rotteryNum[randomNum[0]];
		rotteryNum[randomNum[0]] = rotteryNum[randomNum[1]];
		rotteryNum[randomNum[1]] = temp;
	}

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
