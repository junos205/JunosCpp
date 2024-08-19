#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));

	int randomNum[1] = rand() % 45;
	int rotteryNum[45] = {};
	//rotteryNum[0] ~ rotteryNum[5]
	//rotteryNum[6]
	printf("당신의 로또번호는");

	for (int i = 0; i < 10000; i++)
	{
		int temp = (int)rotteryNum[randomNum[0]];
		rotteryNum[randomNum[0]] = rotteryNum[randomNum[1]];
	}

	for (int j = 0; j < 7; j++)
	{
		printf(",%d", rotteryNum[j]);
	}
	printf("입니다");
		

}
