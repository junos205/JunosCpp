#include <iostream>

using namespace std;

void main()
{
	int year = 2024;

	int hp = 10;

	int score = 80;

	if (year == 2024)
	{
		printf("올해는 2024년도 입니다.\n");
	}

	if (hp <= 0)
	{
		printf("죽었습니다");
	}
	else if (hp > 10)
	{
		printf("멀쩡합니다");
	}
	else
	{
		printf("체력이 낮습니다");
	}

	
}