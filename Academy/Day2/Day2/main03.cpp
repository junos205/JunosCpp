#include <iostream>

using namespace std;

void main()
{
	//수도코드
	float input_1 = 0;
	float input_2 = 0;
	int way = 0;
	// 출력 = "숫자1 입력"
	printf("숫자1을 입력해주세요\n");

	// 입력 = 숫자1 설정
	scanf_s("%f", &input_1);

	// 출력 = "숫자2 입력"
	printf("숫자2를 입력해주세요\n");
	scanf_s("%f", &input_2);

	// 출력 = "연산 방법 입력 (1=+,2=-,3=*,4=/)"
	printf("어떤 연산을 진행할까요?\n");

	// 입력 = 방법 설정
	scanf_s("%d", &way);

	// 1 이라면 숫자1 + 숫자2
	if (way == 1)
	{
		printf("%f", input_1 + input_2);
	}
	// 2 이라면 숫자1 - 숫자2 
	else if (way == 2) 
	{
		printf("%f", input_1 - input_2);
	}
	// 3 이라면 숫자1 * 숫자2 
	else if (way == 3)
	{
		printf("%f", input_1 * input_2);
	}
	// 4 이라면 숫자1 / 숫자2 
	// 출력 = 결과
	else if (way == 4)
	{
		printf("%f", input_1 / input_2);
	}

}