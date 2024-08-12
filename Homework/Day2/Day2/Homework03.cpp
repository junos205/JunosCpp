#include <iostream>

using namespace std;

void main()
{
	//수도코드

	int num = 0;
	// 출력 = 숫자 입력
	printf("숫자를 입력해주세요 >> ");

	// 입력 = 숫자 설정
	scanf_s("%d", &num);

	// 받은 숫자를 2로 나눌때 나머지가 0이 아니면 모두 홀수
	if (num % 2 == 0)
	{
		printf("짝수입니다");
	}
	else
	{
		printf("홀수입니다");
	}

}