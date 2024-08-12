#include <iostream>

using namespace std;

void main()
{
	int middle, last, attendance, assignment = 0;
	
	// 수도코드
	
	// 출력 = 중간점수
	printf("중간평가 점수를 입력하세요 >> ");
	// 입력 = 중간점수 설정
	scanf_s("%d", &middle);

	// 출력 = 기말점수
	printf("기말평가 점수를 입력하세요 >> ");
	// 입력 = 기말점수 설정
	scanf_s("%d", &last);

	// 출력 = 출석점수
	printf("출석점수를 입력하세요 >> ");
	// 입력 = 출석점수 설정
	scanf_s("%d", &attendance);

	// 출력 = 과제점수
	printf("과제점수를 입력하세요 >> ");
	// 입력 = 과제점수 설정
	scanf_s("%d", &assignment);

	
	float totalScore = (middle + last + attendance + assignment) / 4;
	
	// 60보다 작으면 F
	if (totalScore <= 60)
	{
		printf("F입니다");
	}

	// 60보다 크고 70보다 작으면 D
	else if (totalScore <= 70)
	{
		printf("D입니다");
	}
	
	// 70보다 크고 80보다 작으면 C
	else if (totalScore <= 80)
	{
		printf("C입니다");
	}

	// 80보다 크고 90보다 작으면 B
	else if (totalScore <= 90)
	{
		printf("B입니다");
	}

	// 90보다 크고 100보다 작으면 A
	else if (totalScore <= 100)
	{
		printf("A입니다");
	}
}