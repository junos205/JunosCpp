#include <iostream>

using namespace std;

void main()
{
	float kg, cm = 0;

	//수도코드 

	// 출력 = 몸무게
	printf("몸무게 입력 >> ");
	// 입력 = 몸무게 설정
	scanf_s("%f", &kg);

	// 출력 = 키 
	printf("키 입력 >> ");
	// 입력 = 키 설정
	scanf_s("%f", &cm);

	// 출력 = BMI는 몸무게 나누기 키 제곱이지만 키가 cm이기에 10000을 추가로 나누어줌
	printf("당신의 BMI는 %f입니다\n", kg / (cm * cm / 10000));

	float BMI = kg / (cm * cm / 10000);
	
	// BMI가 18.5이하시 저체중
	if (BMI <= 18.5)
	{
		printf("저체중");
	}
	// BMI가 18.5초과  23이하시 정상체중
	else if (BMI <= 23)
	{
		printf("정상체중");
	}
	// BMI가 23초과 25이하시 과체중
	else if (BMI <= 25)
	{
		printf("과체중");
	}
	// BMI가 25초과 30이하시 비만
	else if (BMI <= 30)
	{
		printf("비만");
	}
	// BMI가 30 초과시 고도비만
	else if (BMI > 30)
	{
		printf("고도비만");
	}
}